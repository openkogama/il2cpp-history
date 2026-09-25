import sys
print("decompile.py started", flush=True)
import os
import time

from ghidra.app.decompiler import DecompInterface
from ghidra.app.util.cparser.C import CParserUtils
from ghidra.util.task import ConsoleTaskMonitor

script, out, sample = list(getScriptArgs())
header = os.path.join(os.path.dirname(script), "cpp", "appdata", "il2cpp-types.h")
t = time.time()
tx = currentProgram.startTransaction("il2cpp types")
parsed = CParserUtils.parseHeaderFiles(None, [header], [], [], currentProgram.getDataTypeManager(), monitor)
currentProgram.endTransaction(tx, True)
print(f"header: {time.time() - t:.0f}s, ok={parsed.successful()}, types={currentProgram.getDataTypeManager().getDataTypeCount(True)}", flush=True)
if not parsed.successful():
    print(parsed.getFormattedParseMessage(None)[:4000], flush=True)
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
