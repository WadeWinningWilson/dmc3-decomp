"""Re-verify generated sources and drop functions that no longer match.

Run after tools/funcdiff.py gets stricter: every `func_XXXXXXXX` defined in the
given files is compiled and diffed again; failing definitions are removed.

usage: python -I tools/prune_auto.py src/game/auto/flow.c src/game/auto/flow_v.cpp ...
"""
import contextlib
import importlib.util
import io
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
CC = ("MWCIncludes=. wibo tools/compilers/mwcps2-3.0b52-030722/mwccps2.exe -c -O3,p "
      "-fl divbyzerocheck -inline depth=8 -nostdinc -Iinclude")

spec = importlib.util.spec_from_file_location("funcdiff", ROOT / "tools/funcdiff.py")
fd = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fd)


def prune(path):
    path = Path(path)
    cc = CC + (" -lang c++ -Cpp_exceptions off" if path.suffix == ".cpp" else "")
    while True:
        obj = f"scratch/prune_{path.stem}.o"
        r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                            f"{cc} -o {obj} {path.relative_to(ROOT).as_posix() if path.is_absolute() else path.as_posix()}"],
                           capture_output=True, text=True, cwd=ROOT)
        if r.returncode:
            raise SystemExit(r.stdout[-2000:])
        lines = path.read_text().split("\n")
        names = [m.group(1) for l in lines for m in [re.match(r"\w[\w *]* (func_[0-9A-F]{8})\(.*\{$", l)] if m]
        bad = set()
        for n in names:
            with contextlib.redirect_stdout(io.StringIO()):
                try:
                    if fd.main(str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(ROOT / obj), n, hex(int(n[5:], 16))):
                        bad.add(n)
                except SystemExit:
                    bad.add(n)
        if not bad:
            print(f"{path}: {len(names)} functions verified")
            return
        out, skip = [], False
        for l in lines:
            m = re.match(r"\w[\w *]* (func_[0-9A-F]{8})\(.*\{$", l)
            if m and m.group(1) in bad:
                skip = True
            if not skip:
                out.append(l)
            elif l == "}":
                skip = False
        path.write_text("\n".join(out))
        print(f"{path}: removed {len(bad)}: {sorted(bad)[:8]}{'...' if len(bad) > 8 else ''}")


if __name__ == "__main__":
    for f in sys.argv[1:]:
        prune(f)
