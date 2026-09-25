import sys
print("decompile.py started", flush=True)
import os
import time

from ghidra.app.decompiler import DecompInterface
from ghidra.app.util.cparser.C import CParserUtils
from ghidra.util.task import ConsoleTaskMonitor

script, out, sample = list(getScriptArgs())
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

header = os.path.join(os.path.dirname(script), "cpp", "appdata", "il2cpp-types.h")
combined = "/tmp/il2cpp-types-ghidra.h"
ptr = "long long" if currentProgram.getDefaultPointerSize() == 8 else "int"
with open(combined, "w") as fh:
    fh.write(PRELUDE.format(ptr=ptr))
    fh.write(open(header).read())
t = time.time()
tx = currentProgram.startTransaction("il2cpp types")
try:
    parsed = CParserUtils.parseHeaderFiles(None, [combined], [], [], currentProgram.getDataTypeManager(), monitor)
    print(f"header: {time.time() - t:.0f}s, ok={parsed.successful()}, types={currentProgram.getDataTypeManager().getDataTypeCount(True)}", flush=True)
    if not parsed.successful():
        print(parsed.getFormattedParseMessage(None)[:4000], flush=True)
except Exception as e:
    print(f"header parse failed: {e}"[:4000], flush=True)
    raise
finally:
    currentProgram.endTransaction(tx, True)
t = time.time()
g = globals()
saved = {k: g.get(k) for k in ("__file__", "__name__")}
g.update(__file__=script, __name__="__main__")
exec(compile(open(script).read(), script, "exec"), g)
g.update(saved)
print(f"redux script: {time.time() - t:.0f}s")

functions = list(currentProgram.getFunctionManager().getFunctions(True))
named = [f for f in functions if not f.getName().startswith("FUN_")]
print(f"functions: {len(functions)}, named: {len(named)}")

di = DecompInterface()
di.openProgram(currentProgram)
monitor = ConsoleTaskMonitor()
picked = [f for f in named if sample in f.getName()][:15]
t = time.time()
os.makedirs(out, exist_ok=True)
with open(os.path.join(out, "sample.c"), "w") as fh:
    for f in picked:
        res = di.decompileFunction(f, 120, monitor)
        fh.write(f"// {f.getName()} @ {f.getEntryPoint()}\n")
        fh.write((res.getDecompiledFunction().getC() if res.decompileCompleted() else f"/* failed: {res.getErrorMessage()} */") + "\n\n")
print(f"decompiled {len(picked)} functions in {time.time() - t:.1f}s")
