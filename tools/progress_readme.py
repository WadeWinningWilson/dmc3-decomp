"""Copy the numbers from build/<ver>/progress.json into README.md's progress table.

usage: python -I tools/progress_readme.py [us]   (run after a successful tools/build.py)
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def main(ver="us"):
    rep = json.loads((ROOT / f"build/{ver}/progress.json").read_text())
    c = rep["categories"]
    a, g, l_ = c["all"], c["game"], c["libs"]
    rows = (f"| Code | **{a['code_pct']:.2f}%** (game code {g['code_pct']:.2f}%, libraries {l_['code_pct']:.2f}%) |\n"
            f"| Functions | {a['matched_functions']:,} / {a['functions']:,} ({a['functions_pct']:.2f}%) |")
    p = ROOT / "README.md"
    s = p.read_text(encoding="utf-8")
    new, n = re.subn(r"\| Code \| .*\|\n\| Functions \| .*\|", lambda m: rows, s)
    if n != 1:
        raise SystemExit("progress rows not found in README.md")
    p.write_text(new, encoding="utf-8")
    print(rows)


if __name__ == "__main__":
    main(*sys.argv[1:])
