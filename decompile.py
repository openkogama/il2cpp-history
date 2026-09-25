print("decompile.py started", flush=True)
import os
import time

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

script, out, sample = list(getScriptArgs())
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
