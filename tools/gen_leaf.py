"""Generate C for short branch-free functions in the MW game code.

Covers functions of at most MAX_INS instructions with no branches and no stack
frame, built from loads, stores, constants, simple integer/float arithmetic
and global data accesses, ending in `jr $ra` (leaf) or `j func` (tail call).
The asm is translated symbolically: argument registers become parameters
(`char *` when used as a base address), each store becomes an assignment,
$v0/$f0 at `jr $ra` becomes the return value, and a tail call becomes a call
with the argument registers it sets. Loads are copied into locals before any
later store, so memory order is kept. Globals become `extern char D_x[];`
(absolute addressing) or `extern <type> D_x;` ($gp-relative small data).

Every candidate is compiled and kept ONLY if byte-identical:
src/game/auto/leaf2.c (leaves) and src/game/auto/tail.c (tail calls). Names
stay func_XXXXXXXX; types are offset-based placeholders.

usage: python -I tools/gen_leaf.py
"""
import contextlib
import importlib.util
import io
import re
import struct
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT_LEAF = ROOT / "src/game/auto/leaf2.c"
OUT_TAIL = ROOT / "src/game/auto/tail.c"
OUT_CALLS = ROOT / "src/game/auto/calls.c"
LO, HI = 0x195158, 0x50FE28
MAX_INS = 30
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
NUM = r"-?0x[0-9A-F]+|-?\d+"


def num(s):
    s = s.strip()
    neg = s.startswith("-")
    v = int(s.lstrip("-"), 0)
    return -v if neg else v


class Fail(Exception):
    pass


def translate(name, ins, externs):
    """(C source, callee or None). `externs` {sym: decl} is shared by a whole file."""
    # put every delay slot (nops included) before its jump, then drop the nops
    seq, i = list(ins), 0
    while i < len(seq) - 1:
        if re.match(r"(jal|j|jr)\b", seq[i]):
            seq[i], seq[i + 1] = seq[i + 1], seq[i]
            i += 1
        i += 1
    body = [x for x in seq if x != "nop"]
    # stack frame: drop the prologue/epilogue (saved $ra/$sN/$fN), refuse other stack use
    frame = [x for x in body if re.fullmatch(r"addiu \$sp, \$sp, -?0x[0-9A-F]+|(sd|ld) \$ra, 0x[0-9A-F]+\(\$sp\)|"
                                            r"(sq|lq) \$s[0-7], 0x[0-9A-F]+\(\$sp\)|(swc1|lwc1) \$f(2[0-9]|3[01]), 0x[0-9A-F]+\(\$sp\)", x)]
    body = [x for x in body if x not in frame]
    if any("$sp" in x for x in body):
        raise Fail
    if not body or len(body) > MAX_INS:
        raise Fail
    if not (body[-1] == "jr $ra" or re.fullmatch(r"j func_[0-9A-F]{8}", body[-1])):
        raise Fail
    if any(x == "jr $ra" or re.fullmatch(r"j\b.*", x) for x in body[:-1]):
        raise Fail
    term = body[-1]
    callee = term[2:] if term.startswith("j ") else None
    body = body[:-1]
    ops = []
    for i in body:
        m = re.match(r"(\w+(?:\.\w+)?)\s*(.*)", i)
        ops.append((m.group(1), [a.strip() for a in m.group(2).split(",")] if m.group(2) else []))

    based = set()
    for op, a in ops:
        if op in LOADS or op in STORES or op in ("lqc2", "sqc2"):
            mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", a[1])
            if mm:
                based.add(mm.group(2))
    regs, types = {}, {}
    params, stmts, locs, memdep = {}, [], [], set()
    local_ext = {}
    calls = {}  # callee -> return type used

    def need(sym, decl):
        if externs.get(sym, decl) != decl or local_ext.get(sym, decl) != decl:
            raise Fail
        local_ext[sym] = decl

    def val(r):
        if r == "$zero":
            return "0", "int"
        if r in regs:
            if types[r] == "hi":
                raise Fail
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
        return (f"(int){e}", "int") if t == "char *" else (e, t)

    def define(r, e, t, mem=False):
        regs[r], types[r] = e, t
        (memdep.add if mem else memdep.discard)(r)

    def flush():
        for r in sorted(memdep):
            nm = f"t{len(locs)}"
            locs.append(f"{types[r]} {nm};")
            stmts.append(f"{nm} = {regs[r]};")
            regs[r] = nm
        memdep.clear()

    def lvalue(arg, t):
        """C lvalue for a memory operand of type t."""
        mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", arg)
        if mm:
            be, bt = val(mm.group(2))
            if bt != "char *":
                raise Fail
            return f"*({t} *)({be} + {num(mm.group(1))})"
        mm = re.fullmatch(r"%lo\((D_[0-9A-F]{8})\)\((\$\w+)\)", arg)
        if mm and regs.get(mm.group(2)) == mm.group(1) and types[mm.group(2)] == "hi":
            need(mm.group(1), f"extern char {mm.group(1)}[];")
            return f"*({t} *){mm.group(1)}"
        mm = re.fullmatch(r"%gp_rel\((D_[0-9A-F]{8})\)\(\$gp\)", arg)
        if mm:
            need(mm.group(1), f"extern {t} {mm.group(1)};")
            return mm.group(1)
        raise Fail

    # which call results are read later (v0/f0 read before being rewritten)
    used_after = {}
    for idx, (op, a) in enumerate(ops):
        if op == "jal":
            for r in ("$v0", "$f0"):
                for op2, a2 in ops[idx + 1:]:
                    reads = a2[1:] if op2 not in STORES else a2
                    if any(r == x or f"({r})" in x for x in reads):
                        used_after[(idx, r)] = True
                        break
                    if a2 and a2[0] == r and op2 not in STORES:
                        break
            if "$v0" in [x for x in [a[0]] if False]:
                pass
    if any(op == "jal" for op, _ in ops) and not frame:
        raise Fail
    written = set()
    vu_run = []

    def is_vu(o):
        return o in ("lqc2", "sqc2", "vnop") or o.startswith(("qmtc2", "vadd", "vsub", "vmul", "vmadd", "vmsub",
                                                            "vmove", "vmr32", "vdiv", "vsqrt", "vrsqrt", "vabs",
                                                            "vmax", "vmini", "vopmula", "vopmsub", "vwaitq",
                                                            "vitof", "vftoi", "vclip", "vsqi", "vlqi", "viadd"))

    def emit_vu(run):
        """One __asm__ statement for a run of VU0 macro instructions; GPRs become operands."""
        operands, text = [], []
        for o, args in run:
            out = []
            for arg in args:
                mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", arg)
                reg = mm.group(2) if mm else (arg if re.fullmatch(r"\$(a[0-3]|v[01]|t\d|s[0-7])", arg) else None)
                if reg:
                    e = val(reg)[0]
                    if e not in operands:
                        operands.append(e)
                    k = operands.index(e)
                    arg = f"{mm.group(1)}(%{k})" if mm else f"%{k}"
                out.append(arg)
            text.append(f"{o} {', '.join(out)}".strip())
        flush()
        ops_ = ", ".join(f'"r"({e})' for e in operands)
        stmts.append('__asm__ volatile("' + "\\n\\t".join(text) + f'" : : {ops_} : "memory");')

    for idx, (op, a) in enumerate(ops):
        if is_vu(op):
            vu_run.append((op, a))
            if not (idx + 1 < len(ops) and is_vu(ops[idx + 1][0])):
                emit_vu(vu_run)
                vu_run = []
            continue
        if op == "jal":
            fn = a[0]
            if not re.fullmatch(r"func_[0-9A-F]{8}", fn):
                raise Fail
            n = max((ARGS.index(r) + 1 for r in written if r in ARGS), default=0)
            cargs = [val(ARGS[i])[0] for i in range(n)]
            flush()
            call = f"{fn}({', '.join(cargs)})"
            for r in list(regs):  # caller-saved registers die
                if not re.fullmatch(r"\$s[0-7]|\$f(2[0-9]|3[01])", r):
                    del regs[r]
                    types.pop(r, None)
            written.clear()
            if used_after.get((idx, "$f0")):
                rt = "float"
                nm = f"t{len(locs)}"
                locs.append(f"float {nm};")
                stmts.append(f"{nm} = {call};")
                define("$f0", nm, "float")
            elif used_after.get((idx, "$v0")):
                rt = "char *" if "$v0" in based else "int"
                nm = f"t{len(locs)}"
                locs.append(f"{rt} {nm};")
                stmts.append(f"{nm} = {call};")
                define("$v0", nm, rt)
            else:
                rt = "void"
                stmts.append(f"{call};")
            calls[fn] = calls.get(fn, rt) if calls.get(fn, rt) == rt else None
            if calls[fn] is None:
                raise Fail
            continue
        if a and op not in STORES:
            written.add(a[0])
        if op in LOADS:
            t = LOADS[op]
            if op == "lw" and a[0] in based:
                t = "char *"
            define(a[0], lvalue(a[1], t), t, mem=True)
        elif op in STORES:
            ve, vt = val(a[0])
            t = "char *" if (op == "sw" and vt == "char *") else STORES[op]
            if vt == "char *" and t != "char *":
                ve = f"(int){ve}"
            lv = lvalue(a[1], t)
            flush()
            stmts.append(f"{lv} = {ve};")
        elif op == "lui" and re.fullmatch(r"%hi\(D_[0-9A-F]{8}\)", a[1]):
            define(a[0], a[1][4:-1], "hi")
        elif op == "addiu" and len(a) == 3 and re.fullmatch(r"%lo\(D_[0-9A-F]{8}\)", a[2]):
            sym = a[2][4:-1]
            if regs.get(a[1]) != sym or types.get(a[1]) != "hi":
                raise Fail
            need(sym, f"extern char {sym}[];")
            define(a[0], sym, "char *")
        elif op == "addiu" and len(a) == 3 and a[1] == "$gp" and re.fullmatch(r"%gp_rel\(D_[0-9A-F]{8}\)", a[2]):
            sym = a[2][8:-1]
            need(sym, f"extern char {sym};")
            define(a[0], f"&{sym}", "char *")
        elif op == "addiu" and len(a) == 3 and re.fullmatch(NUM, a[2]):
            e, t = val(a[1])
            k = num(a[2])
            define(a[0], str(k) if e == "0" else f"({e} + {k})", t, a[1] in memdep)
        elif op == "daddu" and len(a) == 3 and a[2] == "$zero":
            e, t = val(a[1])
            define(a[0], e, t, a[1] in memdep)
        elif op in ("addu", "subu", "and", "or", "xor") and len(a) == 3:
            x, tx = val(a[1])
            y, ty = ival(a[2])
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
            elif op in ("sltu", "sltiu"):
                e = f"((unsigned int){x} < (unsigned int){y})"
            else:
                e = f"({x} < {y})"
            define(a[0], e, "int", a[1] in memdep or (len(a) > 2 and a[2] in memdep))
        elif op == "lui" and re.fullmatch(r"0x[0-9A-F]+|\d+|\(0x[0-9A-F]+ >> 16\)", a[1]):
            mm = re.fullmatch(r"\((0x[0-9A-F]+) >> 16\)", a[1])
            k = (int(mm.group(1), 16) >> 16) if mm else num(a[1])
            define(a[0], f"{(k << 16) & 0xFFFFFFFF:#x}", "int")
        elif op == "mtc1":
            e, t = val(a[0])
            if e == "0":
                define(a[1], "0.0f", "float")
            elif re.fullmatch(r"0x[0-9a-f]+", e):
                f = struct.unpack("<f", struct.pack("<I", int(e, 16)))[0]
                define(a[1], repr(float(f)) + "f", "float")
            else:
                raise Fail
        elif op in ("add.s", "sub.s", "mul.s", "div.s"):
            x, _ = val(a[1])
            y, _ = val(a[2])
            sym = {"add.s": "+", "sub.s": "-", "mul.s": "*", "div.s": "/"}[op]
            define(a[0], f"({x} {sym} {y})", "float", a[1] in memdep or a[2] in memdep)
        elif op in ("mov.s", "neg.s", "abs.s"):
            x, _ = val(a[1])
            define(a[0], {"mov.s": x, "neg.s": f"-{x}", "abs.s": f"__builtin_fabsf({x})"}[op],
                   "float", a[1] in memdep)
        else:
            raise Fail

    ret, rtype = None, "void"
    if callee:
        if "$v0" in regs or "$f0" in regs or any(r in regs for r in FARGS):
            raise Fail
        n = max((ARGS.index(r) + 1 for r in regs if r in ARGS), default=0)
        cargs = [val(ARGS[i])[0] for i in range(n)]
        stmts.append(f"{callee}({', '.join(cargs)});")
    elif "$v0" in regs:
        ret, rtype = regs["$v0"], types["$v0"]
    elif "$f0" in regs:
        ret, rtype = regs["$f0"], "float"
    if rtype == "hi":
        raise Fail
    order = sorted(params, key=lambda r: (r in FARGS, (ARGS + FARGS).index(r)))
    ints = [r for r in order if r in ARGS]
    plist = []
    if ints:
        for i in range(ARGS.index(ints[-1]) + 1):
            plist.append(f"{params.get(ARGS[i], 'int')} p{i}")
    plist += [f"float f{FARGS.index(r)}" for r in order if r in FARGS]
    lines = [f"{rtype} {name}({', '.join(plist) or 'void'}) {{"]
    lines += [f"    {l}" for l in locs] + [f"    {s}" for s in stmts]
    if ret is not None:
        lines.append(f"    return {ret};")
    lines.append("}")
    externs.update(local_ext)
    return "\n".join(lines).replace("char * ", "char *"), callee, calls


def check(path, cands):
    """Compile `path`; return the names among `cands` {name: addr} that match."""
    obj = f"scratch/{path.stem}.o"
    r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                        f"{CC} -o {obj} {path.relative_to(ROOT).as_posix()}"], capture_output=True, text=True)
    if r.returncode:
        raise SystemExit(r.stdout[-4000:] + r.stderr[-2000:])
    ok = set()
    for n, A in cands.items():
        with contextlib.redirect_stdout(io.StringIO()):
            try:
                if fd.main(str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(ROOT / obj), n, hex(A)) == 0:
                    ok.add(n)
            except (SystemExit, Exception):
                pass
    return ok


def write(path, hdr, funcs, externs, callees):
    """funcs: (name, code, callee) where callee is a tail-call name or {callee: return type}."""
    used = {s for _, code, _ in funcs for s in re.findall(r"\bD_[0-9A-F]{8}\b", code)}
    decl = [externs[s] for s in sorted(used)]
    protos = {}
    for _, _, c in funcs:
        for fn, rt in (c.items() if isinstance(c, dict) else ([(c, "void")] if c else [])):
            protos.setdefault(fn, rt)
    decl += [f"{rt} {fn}();".replace("* ", "*") for fn, rt in sorted(protos.items())]
    path.write_text(hdr + "\n".join(decl) + ("\n\n" if decl else "\n") + "\n\n".join(c for _, c, _ in funcs) + "\n")


def main():
    taken = set()
    for p in (ROOT / "src").rglob("*.c*"):
        if p not in (OUT_LEAF, OUT_TAIL, OUT_CALLS):
            taken |= {int(x, 16) for x in re.findall(r"\bfunc_([0-9A-F]{8})\s*\([^;{}\n]*\)\s*\{", p.read_text())}
    taken |= {int(m, 16) for m in re.findall(r"=\s*0x([0-9A-Fa-f]+);",
                                             "".join(f.read_text() for f in (ROOT / "config/SLUS_209.64").glob("symbols*.txt")))}
    src = (ROOT / "asm/us/text.s").read_text()
    externs = {}
    leaf, tail, nonleaf, addr = [], [], [], {}
    for name, a, body in re.findall(r"^glabel (func_([0-9A-F]+))\n(.*?)^endlabel", src, re.M | re.S):
        A = int(a, 16)
        if not (LO <= A < HI) or A in taken:
            continue
        ins = [re.sub(r"\s+", " ", l.split("*/", 1)[1].strip()) for l in body.splitlines() if "*/" in l]
        if any(re.match(r"(jalr|b\w*|mult\w*|div\w*)\b", i) for i in ins):
            continue
        if any(re.match(r"j\b", i) and not re.fullmatch(r"j func_[0-9A-F]{8}", i) for i in ins):
            continue
        try:
            code, callee, calls = translate(name, ins, externs)
        except (Fail, ValueError, KeyError, AttributeError, IndexError):
            continue
        addr[name] = A
        if calls:
            nonleaf.append((name, code, calls))
        else:
            (tail if callee else leaf).append((name, code, callee))
    # a tail call to a function defined in the same file could be inlined: drop such callers
    tail_defs = {n for n, _, _ in tail}
    tail = [t for t in tail if t[2] not in tail_defs]
    # same for calls; and one return type per callee in the file
    call_defs = {n for n, _, _ in nonleaf}
    seen, kept_calls = {}, []
    for n, code, calls in nonleaf:
        if any(c in call_defs for c in calls) or any(seen.get(c, rt) != rt for c, rt in calls.items()):
            continue
        seen.update(calls)
        kept_calls.append((n, code, calls))
    nonleaf = kept_calls
    hdr = ("/* AUTO-GENERATED by tools/gen_leaf.py: short branch-free functions translated from the\n"
           " * original asm and verified byte-for-byte (only matches are kept). Types are\n"
           " * offset-based placeholders; move functions to their real TUs as they are identified. */\n")
    total = 0
    for path, funcs in ((OUT_LEAF, leaf), (OUT_TAIL, tail), (OUT_CALLS, nonleaf)):
        write(path, hdr, funcs, externs, None)
        ok = check(path, {n: addr[n] for n, _, _ in funcs})
        kept = [f for f in funcs if f[0] in ok]
        write(path, hdr, kept, externs, None)
        print(f"{path.name}: {len(kept)} match of {len(funcs)} candidates")
        total += len(kept)
    print(f"total {total}")


if __name__ == "__main__":
    main()
