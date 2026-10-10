"""Extract the PoC's original functions from splat asm into one .s whose
symbols are renamed to match src/poc/poc.c (func_XXXXXXXX -> poc_XXXXXXXX),
so objdiff can pair target and base functions by name.

usage: python -I tools/make_poc_target.py <splat text.s> <poc.c> <out.s>
"""
import re
import sys


def main(text_s, poc_c, out_s):
    want = sorted(set(re.findall(r"poc_([0-9A-F]{8})\(", open(poc_c).read())))
    src = open(text_s).read()
    out = ['.include "macro.inc"', ".set noat", ".set noreorder", '.section .text, "ax"', ""]
    for addr in want:
        m = re.search(rf"^glabel func_{addr}\n.*?^endlabel func_{addr}\n", src, re.M | re.S)
        if not m:
            raise SystemExit(f"func_{addr} not found in {text_s}")
        body = m.group(0).replace(f"func_{addr}", f"poc_{addr}")
        # local labels are global per file in gas: make them unique per function
        out.append(body)
    open(out_s, "w").write("\n".join(out))
    print(f"wrote {len(want)} functions to {out_s}")


if __name__ == "__main__":
    main(*sys.argv[1:4])
