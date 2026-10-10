"""Generate C for short branch-free leaf functions in the MW game code.

Covers functions of at most MAX_INS instructions with no branches, calls or
stack frame, built from loads, stores, constants and simple integer/float
arithmetic. The asm is translated symbolically: argument registers become
parameters (`char *` when used as a base address), each store becomes an
assignment, and $v0/$f0 at `jr $ra` becomes the return value. Loads are copied
into locals before any later store, so memory order is kept.

Every candidate is compiled and kept ONLY if byte-identical:
src/game/auto/leaf2.c. Names stay func_XXXXXXXX and the types are offset-based
placeholders, like tools/gen_trivial.py.

usage: python -I tools/gen_leaf.py
"""
import contextlib
import importlib.util
import io
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "src/game/auto/leaf2.c"
LO, HI = 0x195158, 0x50FE28
MAX_INS = 10
CC = ("MWCIncludes=. wibo tools/compilers/mwcps2-3.0b52-030722/mwccps2.exe -c -O3,p "
      "-fl divbyzerocheck -inline depth=8 -nostdinc")

spec = importlib.util.spec_from_file_location("funcdiff", ROOT / "tools/funcdiff.py")
fd = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fd)

LOADS = {"lb": "signed char", "lbu": "unsigned char", "lh": "short", "lhu": "unsigned short",
         "lw": "int", "lwc1": "float"}
STORES = {"sb": "char", "sh": "short", "sw": "int", "swc1": "float"}
ARGS = ["$a0", "$a1", "$a2", "$a3"]
FARGS = ["$f12", "$f13", "$f14", "$f15"]


def num(s):
    s = s.strip()
    neg = s.startswith("-")
    v = int(s.lstrip("-"), 0)
    return -v if neg else v


class Fail(Exception):
    pass


def translate(name, ins):
    """C source for one function, or raise Fail."""
    body = [i for i in ins if i != "nop"]
    if not body or len(body) > MAX_INS:
        raise Fail
    # move the jr's delay slot before it
    j = next((k for k, i in enumerate(body) if i == "jr $ra"), None)
    if j is None or j not in (len(body) - 1, len(body) - 2):
        raise Fail
    if j == len(body) - 2:
        body[j], body[j + 1] = body[j + 1], body[j]
    body = body[:-1]
    ops = []
    for i in body:
        m = re.match(r"(\w+(?:\.\w+)?)\s*(.*)", i)
        args = [a.strip() for a in m.group(2).split(",")] if m.group(2) else []
        ops.append((m.group(1), args))

    # pre-pass: which registers are used as a base address
    based = set()
    for op, a in ops:
        if op in LOADS or op in STORES:
            mm = re.fullmatch(r"(-?0x[0-9A-F]+|-?\d+)\((\$\w+)\)", a[1])
            if not mm:
                raise Fail
            based.add(mm.group(2))
    regs, types = {}, {}       # reg -> C expression, C type
    params = {}                # arg reg -> type
    stmts, locs = [], []
    memdep = set()             # regs whose expression reads memory

    def val(r, want=None):
        if r == "$zero":
            return "0", "int"
        if r in regs:
            return regs[r], types[r]
        if r in ARGS:
            t = "char *" if r in based else "int"
            params[r] = t
            return f"p{ARGS.index(r)}", t
        if r in FARGS:
            params[r] = "float"
            return f"f{FARGS.index(r)}", "float"
        raise Fail

    def ival(r):
        e, t = val(r)
        return (f"(int){e}" if t == "char *" else e), t

    def define(r, e, t, mem=False):
        regs[r], types[r] = e, t
        (memdep.add if mem else memdep.discard)(r)

    def flush():
        for r in sorted(memdep):
            name_ = f"t{len(locs)}"
            locs.append(f"{types[r]} {name_};")
            stmts.append(f"{name_} = {regs[r]};")
            regs[r] = name_
        memdep.clear()

    for op, a in ops:
        if op in LOADS:
            off, base = re.fullmatch(r"(-?0x[0-9A-F]+|-?\d+)\((\$\w+)\)", a[1]).groups()
            be, bt = val(base)
            if bt != "char *":
                raise Fail
            t = LOADS[op]
            if op == "lw" and a[0] in based:
                t = "char *"
            define(a[0], f"*({t} *)({be} + {num(off)})", t, mem=True)
        elif op in STORES:
            off, base = re.fullmatch(r"(-?0x[0-9A-F]+|-?\d+)\((\$\w+)\)", a[1]).groups()
            ve, vt = val(a[0])
            be, bt = val(base)
            if bt != "char *":
                raise Fail
            flush()
            st = "char *" if (op == "sw" and vt == "char *") else STORES[op]
            stmts.append(f"*({st} *)({be} + {num(off)}) = {ve};")
        elif op == "addiu" and len(a) == 3 and re.fullmatch(r"-?0x[0-9A-F]+|-?\d+", a[2]):
            e, t = val(a[1])
            k = num(a[2])
            define(a[0], str(k) if e == "0" else f"({e} + {k})", t, a[1] in memdep)
        elif op == "daddu" and a[2] == "$zero":
            e, t = val(a[1])
            define(a[0], e, t, a[1] in memdep)
        elif op in ("addu", "subu", "and", "or", "xor") and len(a) == 3:
            x, tx = val(a[1]); y, ty = ival(a[2])
            if op != "addu" and tx == "char *":
                x, tx = ival(a[1])
            sym = {"addu": "+", "subu": "-", "and": "&", "or": "|", "xor": "^"}[op]
            define(a[0], f"({x} {sym} {y})", tx if tx == "char *" else "int",
                   a[1] in memdep or a[2] in memdep)
        elif op in ("andi", "ori", "xori"):
            x, tx = ival(a[1])
            sym = {"andi": "&", "ori": "|", "xori": "^"}[op]
            define(a[0], f"({x} {sym} {num(a[2])})", "int", a[1] in memdep)
        elif op in ("sll", "sra", "srl"):
            x, tx = ival(a[1])
            e = f"((unsigned int){x} >> {num(a[2])})" if op == "srl" else \
                f"({x} {'<<' if op == 'sll' else '>>'} {num(a[2])})"
            define(a[0], e, "int", a[1] in memdep)
        elif op in ("slt", "sltu", "slti", "sltiu"):
            x, tx = ival(a[1])
            y = ival(a[2])[0] if op in ("slt", "sltu") else str(num(a[2]))
            if op == "sltiu" and y == "1":
                e = f"({x} == 0)"
            elif op.startswith("sltu") or op == "sltiu":
                e = f"((unsigned int){x} < (unsigned int){y})"
            else:
                e = f"({x} < {y})"
            define(a[0], e, "int", a[1] in memdep or (len(a) > 2 and a[2] in memdep))
        elif op == "lui" and re.fullmatch(r"0x[0-9A-F]+|\d+|\(0x[0-9A-F]+ >> 16\)", a[1]):
            v = a[1]
            mm = re.fullmatch(r"\((0x[0-9A-F]+) >> 16\)", v)
            k = (int(mm.group(1), 16) >> 16) if mm else num(v)
            define(a[0], f"{(k << 16) & 0xFFFFFFFF:#x}", "int")
        elif op == "mtc1":
            e, t = val(a[0])
            if e == "0":
                define(a[1], "0.0f", "float")
            elif re.fullmatch(r"0x[0-9a-f]+", e):
                import struct
                f = struct.unpack("<f", struct.pack("<I", int(e, 16)))[0]
                define(a[1], repr(float(f)) + "f", "float")
            else:
                raise Fail
        elif op in ("add.s", "sub.s", "mul.s", "div.s"):
            x, _ = val(a[1]); y, _ = val(a[2])
            sym = {"add.s": "+", "sub.s": "-", "mul.s": "*", "div.s": "/"}[op]
            define(a[0], f"({x} {sym} {y})", "float", a[1] in memdep or a[2] in memdep)
        elif op in ("mov.s", "neg.s", "abs.s"):
            x, _ = val(a[1])
            define(a[0], {"mov.s": x, "neg.s": f"-{x}", "abs.s": f"__builtin_fabsf({x})"}[op],
                   "float", a[1] in memdep)
        else:
            raise Fail
    ret, rtype = None, "void"
    if "$v0" in regs:
        ret, rtype = regs["$v0"], types["$v0"]
    elif "$f0" in regs:
        ret, rtype = regs["$f0"], "float"
    order = sorted(params, key=lambda r: (r in FARGS, (ARGS + FARGS).index(r)))
    # keep positional slots for unused leading integer args
    ints = [r for r in order if r in ARGS]
    plist = []
    if ints:
        for k in range(ARGS.index(ints[-1]) + 1):
            r = ARGS[k]
            plist.append(f"{params.get(r, 'int')} p{k}")
    plist += [f"float f{FARGS.index(r)}" for r in order if r in FARGS]
    lines = [f"{rtype} {name}({', '.join(plist) or 'void'}) {{"]
    lines += [f"    {l}" for l in locs] + [f"    {s}" for s in stmts]
    if ret is not None:
        lines.append(f"    return {ret};")
    lines.append("}")
    return "\n".join(lines).replace("char * ", "char *")


def main():
    taken = set()
    for p in (ROOT / "src").rglob("*.c*"):
        if p != OUT:
            taken |= {int(x, 16) for x in re.findall(r"\bfunc_([0-9A-F]{8})\s*\([^;{}\n]*\)\s*\{", p.read_text())}
    taken |= {int(m, 16) for m in re.findall(r"=\s*0x([0-9A-Fa-f]+);",
                                             "".join(f.read_text() for f in (ROOT / "config/SLUS_209.64").glob("symbols*.txt")))}
    src = (ROOT / "asm/us/text.s").read_text()
    cands = {}
    for name, a, body in re.findall(r"^glabel (func_([0-9A-F]+))\n(.*?)^endlabel", src, re.M | re.S):
        A = int(a, 16)
        if not (LO <= A < HI) or A in taken:
            continue
        ins = [re.sub(r"\s+", " ", l.split("*/", 1)[1].strip()) for l in body.splitlines() if "*/" in l]
        if any(re.match(r"(j|jal|jalr|b\w*|lq|sq|sd|ld|mult\w*|div\w*)\b", i) and i != "jr $ra" for i in ins):
            continue
        try:
            cands[name] = (A, translate(name, ins))
        except (Fail, ValueError, KeyError, AttributeError):
            pass
    hdr = ("/* AUTO-GENERATED by tools/gen_leaf.py: short branch-free leaf functions, translated\n"
           " * from the original asm and verified byte-for-byte (only matches are kept).\n"
           " * Types are offset-based placeholders; move functions to their real TUs. */\n")
    OUT.write_text(hdr + "\n\n".join(c for _, c in cands.values()) + "\n")
    obj = "scratch/leaf2.o"
    r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                        f"{CC} -o {obj} {OUT.relative_to(ROOT).as_posix()}"], capture_output=True, text=True)
    if r.returncode:
        raise SystemExit(r.stdout[-4000:] + r.stderr[-2000:])
    ok = []
    for n, (A, code) in cands.items():
        with contextlib.redirect_stdout(io.StringIO()):
            try:
                if fd.main(str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(ROOT / obj), n, hex(A)) == 0:
                    ok.append(code)
            except (SystemExit, Exception):
                pass
    OUT.write_text(hdr + "\n" + "\n\n".join(ok) + "\n")
    print(f"leaf functions: {len(ok)} match of {len(cands)} candidates")


if __name__ == "__main__":
    main()
