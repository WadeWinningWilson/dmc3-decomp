"""List functions still in asm (not provided by C) after the last `tools/build.py`.

usage: python -I tools/remaining.py [us] [lo hi] [--max N] [--min-size B] [--max-size B]
Reads build/<ver>/chunks/*.s (the asm pieces that were linked), so run build.py first.
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def main(argv):
    ver = "us"
    if argv and argv[0] in ("us", "jp"):
        ver = argv.pop(0)
    opt = {"--max": 60, "--min-size": 0, "--max-size": 1 << 30}
    for k in list(opt):
        if k in argv:
            i = argv.index(k); opt[k] = int(argv[i + 1], 0); del argv[i:i + 2]
    lo, hi = (int(argv[0], 16), int(argv[1], 16)) if len(argv) >= 2 else (0, 1 << 32)
    rows = []
    for s in sorted((ROOT / f"build/{ver}/chunks").glob("text_*.s")):
        for m in re.finditer(r"(?m)^nonmatching (\w+), (0x[0-9A-F]+)\n(?:.*\n)*?\s*/\* [0-9A-F]+ ([0-9A-F]{8}) ",
                             s.read_text()):
            a, size = int(m.group(3), 16), int(m.group(2), 16)
            if lo <= a < hi and opt["--min-size"] <= size <= opt["--max-size"]:
                rows.append((a, m.group(1), size))
    rows.sort()
    print(f"{len(rows)} asm functions in range; total {sum(r[2] for r in rows):#x} bytes")
    for a, n, size in rows[:opt["--max"]]:
        print(f"{a:08X} {n} {size:#x}")


if __name__ == "__main__":
    main(sys.argv[1:])
