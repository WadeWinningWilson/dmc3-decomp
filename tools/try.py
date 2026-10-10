"""Fast single-function matching loop.

usage: python -I tools/try.py <src.c|.cpp> <func_XXXXXXXX> [<func> ...] [-v] [--cc ID] [--flags "..."]
Compiles the file (MW 3.0b52 -O3,p by default, or ee-gcc when --cc ee-gcc*,
or the file's `// cc:` line), then diffs each named function against the USA
ELF at the address in its name (or config/SLUS_209.64/symbols.txt).
"""
import os
import contextlib
import importlib.util
import io
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
spec = importlib.util.spec_from_file_location("funcdiff", ROOT / "tools/funcdiff.py")
fd = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fd)
spec2 = importlib.util.spec_from_file_location("build", ROOT / "tools/build.py")
bd = importlib.util.module_from_spec(spec2)
spec2.loader.exec_module(bd)


def main(argv):
    verbose = "-v" in argv
    argv = [a for a in argv if a != "-v"]
    cc = flags = None
    if "--cc" in argv:
        i = argv.index("--cc"); cc = argv[i + 1]; del argv[i:i + 2]
    if "--flags" in argv:
        i = argv.index("--flags"); flags = argv[i + 1]; del argv[i:i + 2]
    src = Path(argv[0]).resolve()
    names = argv[1:]
    fcc, fflags = bd.file_flags(src)
    cc = cc or fcc
    flags = flags if flags is not None else fflags
    objrel = os.environ.get("TRY_OBJ", "scratch/try.o")  # separate objects allow parallel runs
    obj = ROOT / objrel
    rel = src.relative_to(ROOT).as_posix()
    if cc.startswith("ee-gcc"):
        cmd = f"sh tools/eegcc.sh {cc} {objrel} {rel} {flags} -Iinclude"
    else:
        cmd = (f"MWCIncludes=. wibo tools/compilers/{cc}/mwccps2.exe -c {flags} -nostdinc -Iinclude "
               f"-o {objrel} {rel}")
    r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c", cmd], capture_output=True, text=True)
    if r.returncode or "rror" in r.stdout + r.stderr:
        print(r.stdout + r.stderr)
        if r.returncode:
            return 2
    syms = bd.read_symbols(ROOT / "config/SLUS_209.64/symbols.txt")
    bad = 0
    for n in names:
        m = re.fullmatch(r"func_([0-9A-F]{8})", n)
        addr = int(m.group(1), 16) if m else syms[n]
        args = [str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(obj), n, hex(addr)]
        buf = io.StringIO()
        with contextlib.redirect_stdout(buf):
            sys.argv = ["funcdiff"] + args + (["-v"] if verbose else [])
            rc = fd.main(*args)
        out = buf.getvalue().strip().splitlines()
        print("\n".join(out if verbose or rc else out[-1:]))
        bad += rc != 0
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
