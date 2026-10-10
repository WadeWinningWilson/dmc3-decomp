"""Try alternative versions of a snippet in a source file; keep the best-scoring one.

usage: python -I tools/variants.py <src> <function> <variants file>
The variants file holds blocks separated by lines `=====`; the FIRST block must
appear verbatim in <src> and is replaced by each block in turn. Scores come from
tools/try.py; the best block (earliest on ties) is left in <src>.
Generate the variants file with itertools (e.g. statement permutations).
Set TRY_OBJ=scratch/x.o to run several of these in parallel.
"""
import re
import subprocess
import sys

src, func, bf = sys.argv[1:4]
blocks = open(bf).read().split("=====\n")
orig = blocks[0]
base = open(src).read()
assert orig in base, "the first block is not in the source"
res = []
for i, v in enumerate(blocks):
    open(src, "w").write(base.replace(orig, v, 1))
    out = subprocess.run([sys.executable, "-I", "tools/try.py", src, func], capture_output=True, text=True).stdout
    m = re.search(r"(\d+)/(\d+)", out)
    sc = (int(m.group(1)), int(m.group(2))) if m else (0, 1)
    res.append((sc[0], i, sc))
    print(i, sc, flush=True)
    if sc[0] == sc[1]:
        break
res.sort(key=lambda r: (r[0], -r[1]))
print("best", res[-1])
open(src, "w").write(base.replace(orig, blocks[res[-1][1]], 1))
