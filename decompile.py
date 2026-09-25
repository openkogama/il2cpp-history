import json
import os
import re
import threading
import time
from concurrent.futures import ThreadPoolExecutor

from ghidra.app.decompiler import DecompInterface
from ghidra.app.util.cparser.C import CParserUtils
from ghidra.util.task import ConsoleTaskMonitor
from java.io import File

PRELUDE = """
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef long long int64_t;
typedef unsigned long long uint64_t;
typedef {ptr} intptr_t;
typedef unsigned {ptr} uintptr_t;
typedef unsigned {ptr} size_t;
typedef uint16_t char16_t;
typedef uint16_t wchar_t;
typedef uint8_t bool;
"""

GAME = re.compile(
    r"^(Assembly-CSharp|Assembly-CSharp-firstpass|Assembly-UnityScript-firstpass|MVCommon|MVWorldObject"
    r"|StreamingAssetEnums|SampleClassLibrary)\.dll$"
)
NOISE = [
    (re.compile(r"\b(FUN|DAT|LAB|PTR|UNK|SUB|BYTE|WORD|DWORD|QWORD|cRam|uRam|iRam|bRam|lRam|pcRam|puRam|piRam)_?[0-9a-fA-F]{6,16}\b"), r"\1_?"),
    (re.compile(r"\b_UNK_[0-9a-fA-F]+\b"), "_UNK_?"),
    (re.compile(r"\bfunc_0x[0-9a-fA-F]+\b"), "func_?"),
    (re.compile(r"\b(code|joined)_r0x[0-9a-fA-F]+\b"), r"\1_?"),
    (re.compile(r"\bswitchD_[0-9a-fA-F]+\b"), "switchD_?"),
    (re.compile(r"\b(s|u|p)_[0-9a-fA-F]{6,16}\b"), r"\1_?"),
    (re.compile(r"^/\* WARNING: .*\*/\n", re.M), ""),
]
HEX = re.compile(r"\b0x([0-9a-fA-F]{6,16})\b")
UNSAFE = re.compile(r'[<>:"|?*\\`\[\], ]')
STACKREF = re.compile(r"^[ \t]*[a-zA-Z]{1,4}Stack_?[0-9a-fA-F]+ = (?:\([^)\n]*\))?&?UNK_\?;\n", re.M)
AUTO = re.compile(r"\b([a-zA-Z]{1,4}Var|local_|in_stack_|[a-zA-Z]{1,4}Stack_?)([0-9a-fA-F]+)\b")
STATEMENT = re.compile(r"[(){}=]|\b(return|goto|break|continue)\b")
WORKERS = int(os.environ.get("DECOMPILE_WORKERS", os.cpu_count() or 2))
KEEP_LOCALS = os.environ.get("KEEP_LOCALS") == "1"


def parse_header(script):
    header = os.path.join(os.path.dirname(script), "cpp", "appdata", "il2cpp-types.h")
    combined = "/tmp/il2cpp-types-ghidra.h"
    ptr = "long long" if currentProgram.getDefaultPointerSize() == 8 else "int"
    with open(combined, "w") as fh:
        fh.write(PRELUDE.format(ptr=ptr))
        fh.write(open(header).read())
    tx = currentProgram.startTransaction("il2cpp types")
    try:
        parsed = CParserUtils.parseHeaderFiles(None, [combined], [], ["-D_GHIDRA_"], currentProgram.getDataTypeManager(), monitor)
        if not parsed.successful():
            raise RuntimeError(parsed.getFormattedParseMessage(None)[:4000])
    finally:
        currentProgram.endTransaction(tx, True)


def run_inspector(script):
    g = globals()
    saved = {k: g.get(k) for k in ("__file__", "__name__", "getSourceFile")}
    g.update(__file__=script, __name__="__main__", getSourceFile=lambda: File(script))
    exec(compile(open(script).read(), script, "exec"), g)
    g.update(saved)


def image_range():
    lo = currentProgram.getMinAddress().getOffset()
    hi = currentProgram.getMaxAddress().getOffset()
    return lo, hi


def normalize(code, lo, hi):
    for pattern, repl in NOISE:
        code = pattern.sub(repl, code)
    code = HEX.sub(lambda m: "0xADDR" if lo <= int(m.group(1), 16) <= hi else m.group(0), code)
    code = STACKREF.sub("", code)
    return renumber(code if KEEP_LOCALS else strip_locals(code))


def renumber(code):
    names = {}

    def sub(m):
        if m.group(0) not in names:
            names[m.group(0)] = f"{m.group(1)}{len(names) + 1}"
        return names[m.group(0)]

    return AUTO.sub(sub, code)


def strip_locals(code):
    start = code.find("\n{\n")
    end = code.find("\n  \n", start)
    if start < 0 or end < 0 or STATEMENT.search(code[start + 3 : end]):
        return code
    return code[: start + 3] + code[end + 4 :]


def game_functions():
    out = []
    for f in currentProgram.getFunctionManager().getFunctions(True):
        path = f.getParentNamespace().getName(True).split("::")
        if path and GAME.match(path[0]):
            out.append((path[0][:-4], path[1:] or ["_global"], f))
    return out


local = threading.local()


def decompile(item):
    assembly, owner, f = item
    di = getattr(local, "di", None)
    if di is None:
        di = local.di = DecompInterface()
        di.toggleSyntaxTree(False)
        di.openProgram(currentProgram)
    res = di.decompileFunction(f, 120, ConsoleTaskMonitor())
    if res.decompileCompleted():
        body = res.getDecompiledFunction().getC()
    else:
        body = f"/* decompilation failed: {res.getErrorMessage().strip()} */\n"
    return assembly, owner, f.getName(), body, res.decompileCompleted()


def filename(parts):
    return os.path.join(*[UNSAFE.sub("_", p) or "_" for p in parts]) + ".c"


def main():
    script, out = list(getScriptArgs())[:2]
    stats = {}
    t = time.time()
    parse_header(script)
    stats["header_s"] = round(time.time() - t)
    t = time.time()
    run_inspector(script)
    stats["inspector_s"] = round(time.time() - t)
    items = game_functions()
    stats["game_functions"] = len(items)
    print(f"header {stats['header_s']}s, inspector {stats['inspector_s']}s, {len(items)} game functions, {WORKERS} workers", flush=True)

    lo, hi = image_range()
    files = {}
    failed = 0
    t = time.time()
    with ThreadPoolExecutor(WORKERS) as pool:
        for i, (assembly, owner, name, body, ok) in enumerate(pool.map(decompile, items), 1):
            failed += not ok
            files.setdefault(filename([assembly, *owner]), []).append((name, normalize(body, lo, hi)))
            if i % 2000 == 0:
                rate = i / (time.time() - t)
                print(f"[{i}/{len(items)}] {rate:.1f}/s, eta {(len(items) - i) / rate / 60:.0f} min", flush=True)
    stats["decompile_s"] = round(time.time() - t)
    stats["failed"] = failed
    stats["files"] = len(files)

    for path, funcs in files.items():
        full = os.path.join(out, path)
        os.makedirs(os.path.dirname(full), exist_ok=True)
        with open(full, "w", encoding="utf-8") as fh:
            for name, body in sorted(funcs):
                fh.write(body.rstrip() + "\n\n")
    with open(os.path.join(out, "stats.json"), "w") as fh:
        json.dump(stats, fh, indent=4)
    print(json.dumps(stats), flush=True)


main()
