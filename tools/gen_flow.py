"""Generate C for small functions with forward branches (if/else, early returns).

Extends tools/gen_leaf.py to control flow. The asm is cut into basic blocks
(delay slots resolved), the CFG must be acyclic (no loops yet), and it is
structured with post-dominators into if/else in Metrowerks' layout: the
fall-through path is the `then` block. Registers that carry a value from one
block into another become C locals (assigned in place); values used inside one
block stay expressions. Calls, globals, VU0 runs and float compares are
handled like in gen_leaf.

Only byte-identical results are kept (call targets included):
src/game/auto/flow.c. Names stay func_XXXXXXXX; types are placeholders.

usage: python -I tools/gen_flow.py [max instructions, default 80] [permutation rounds, default 0]
"""
import contextlib
import importlib.util
import io
import re
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "src/game/auto/flow.c"
ORIG = (ROOT / "orig/SLUS_209.64/SLUS_209.64").read_bytes()
LO, HI = 0x195158, 0x50FE28
MAX_INS = int(sys.argv[1]) if len(sys.argv) > 1 else 80
SWITCH_MIN = 3  # compare chains this long become switch statements
NEAR = 0.6  # minimum match ratio for a function to get permutation rounds
CC = ("MWCIncludes=. wibo tools/compilers/mwcps2-3.0b52-030722/mwccps2.exe -c -O3,p "
      "-fl divbyzerocheck -inline depth=8 -nostdinc")

spec = importlib.util.spec_from_file_location("funcdiff", ROOT / "tools/funcdiff.py")
fd = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fd)

LOADS = {"lb": "signed char", "lbu": "unsigned char", "lh": "short", "lhu": "unsigned short",
         "lw": "int", "lwc1": "float"}
STORES = {"sb": "char", "sh": "short", "sw": "int", "swc1": "float"}
ARGS = ["$a0", "$a1", "$a2", "$a3", "$t0", "$t1", "$t2", "$t3"]  # EABI: 8 integer argument registers
FARGS = ["$f12", "$f13", "$f14", "$f15"]
NUM = r"-?0x[0-9A-F]+|-?\d+|\(0x[0-9A-F]+ & 0xFFFF\)"
COND1 = {"beqz": "==", "bnez": "!=", "blez": "<=", "bgtz": ">", "bltz": "<", "bgez": ">="}
NEG = {"==": "!=", "!=": "==", "<": ">=", ">=": "<", ">": "<=", "<=": ">"}
FCMP = {"c.eq.s": "==", "c.lt.s": "<", "c.le.s": "<="}
VU_PREFIX = ("qmtc2", "vadd", "vsub", "vmul", "vmadd", "vmsub", "vmove", "vmr32", "vdiv", "vsqrt",
             "vrsqrt", "vabs", "vmax", "vmini", "vopmula", "vopmsub", "vwaitq", "vitof", "vftoi", "vclip")


class Fail(Exception):
    pass


def num(s):
    s = s.strip()
    m = re.fullmatch(r"\((0x[0-9A-F]+) & 0xFFFF\)", s)
    if m:
        return int(m.group(1), 16) & 0xFFFF
    m = re.fullmatch(r"\((0x[0-9A-F]+) >> 16\)", s)
    if m:
        return int(m.group(1), 16) >> 16
    neg = s.startswith("-")
    v = int(s.lstrip("-"), 0)
    return -v if neg else v


def is_vu(op):
    return op in ("lqc2", "sqc2", "vnop") or op.startswith(VU_PREFIX)


def split(i):
    m = re.match(r"(\w+(?:\.\w+)*)\s*(.*)", i)
    if not m:
        raise Fail  # e.g. ".word" data inside a function
    return m.group(1), [a.strip() for a in m.group(2).split(",")] if m.group(2) else []


def regs_of(op, a):
    """(read, written) GPR/FPR names of one instruction (for liveness)."""
    if op in LOADS:
        mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", a[1])
        return ({mm.group(2)} if mm else set()), {a[0]}
    if op in STORES:
        mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", a[1])
        return {a[0]} | ({mm.group(2)} if mm else set()), set()
    if is_vu(op):
        rd = set()
        for x in a:
            mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", x)
            if mm:
                rd.add(mm.group(2))
            elif re.fullmatch(r"\$(a[0-3]|v[01]|t\d|s[0-7])", x):
                rd.add(x)
        return rd, set()
    if op == "jal":
        return set(ARGS), {"$v0", "$f0"}
    if op == "jalr":
        return set(ARGS) | {"$t9"}, {"$v0", "$f0"}
    if op in ("beq", "bne"):
        return {a[0], a[1]}, set()
    if op in COND1:
        return {a[0]}, set()
    if op in FCMP:
        return {a[0], a[1]}, set()
    if op in ("bc1t", "bc1f", "b", "jr", "j", "nop"):
        return set(), set()
    if op == "mtc1":
        return {a[0]}, {a[1]}
    if op in ("movn", "movz"):
        return {a[0], a[1], a[2]}, {a[0]}
    if op in ("mult", "mult1", "multu", "multu1"):
        rd = {a[0]} if len(a) == 3 and a[0] != "$zero" else set()
        return set(a[-2:]), rd | {"LO", "HI"}
    if op in ("div", "div1", "divu", "divu1"):
        return set(a[-2:]) - {"$zero"}, {"LO", "HI"}
    if op in ("mflo", "mflo1"):
        return {"LO"}, {a[0]}
    if op in ("mfhi", "mfhi1"):
        return {"HI"}, {a[0]}
    if op == "lui":
        return set(), {a[0]}
    if a:
        return {x for x in a[1:] if x.startswith("$")}, {a[0]}
    return set(), set()


def fix_word(t):
    """`.word 0x46000864 # cvt.w.s $f1` (an R5900 encoding spimdisasm does not decode)."""
    m = re.match(r"\.word (0x[0-9A-F]{8}) # cvt\.w\.s ", t)
    if m:
        w = int(m.group(1), 16)
        return f"cvt.w.s $f{(w >> 6) & 31}, $f{(w >> 11) & 31}"
    return t


def prepare(ins):
    ins = [(a, fix_word(t)) for a, t in ins]
    """[(addr, text)] -> list of instructions with delay slots resolved and the frame removed."""
    clean, j = [], 0
    while j < len(ins):
        a0_, t0_ = ins[j]
        mm = re.fullmatch(r"(bnez \$\w+|bne \$\w+, \$zero), \.L([0-9A-F]{8})", t0_)
        if mm and j + 3 < len(ins) and ins[j + 2][1].startswith("break") and int(mm.group(2), 16) == ins[j + 3][0]:
            if ins[j + 1][1] != "nop":
                clean.append(ins[j + 1])
            j += 3
            continue
        clean.append(ins[j])
        j += 1
    ins = clean
    if any(t.startswith("break") for _, t in ins):
        raise Fail
    targets = {int(t, 16) for _, t in ins for t in re.findall(r"\.L([0-9A-F]{8})", t)}
    seq = []
    i = 0
    while i < len(ins):
        addr, t = ins[i]
        op, a = split(t)
        if re.match(r"(b\w*|j|jal|jalr|jr)$", op) and op != "break":
            if op.endswith("l") and op not in ("jal",) and op.startswith("b"):
                raise Fail  # branch-likely: delay slot is nullified
            if i + 1 >= len(ins):
                raise Fail
            daddr, d = ins[i + 1]
            dop, da = split(d)
            if d != "nop" and op not in ("b", "j", "jal", "jalr", "jr") and regs_of(dop, da)[1] & regs_of(op, a)[0]:
                # the delay slot overwrites a register the branch reads: the branch sees the
                # old value, so the slot runs after the condition (kept on the branch line)
                seq.append((addr, f"{t} || {d}"))
            else:
                if d != "nop":
                    seq.append((addr, d))
                seq.append((addr, t))
            if daddr in targets:   # someone jumps to the delay slot: keep it there too
                seq.append((daddr, d))
                i += 2
                continue
            i += 2
            continue
        seq.append((addr, t))
        i += 1
    frame = re.compile(r"addiu \$sp, \$sp, -?0x[0-9A-F]+|(sd|ld) \$ra, 0x[0-9A-F]+\(\$sp\)|"
                       r"(sq|lq) \$(s[0-7]|fp), 0x[0-9A-F]+\(\$sp\)|(swc1|lwc1) \$f(2[0-9]|3[01]), 0x[0-9A-F]+\(\$sp\)")
    out = [(a, t) for a, t in seq if t != "nop" and not frame.fullmatch(t)]
    global STACK
    STACK = None
    if any("$sp" in t for _, t in out):
        fsz = [num(m.group(1)) for _, t in seq for m in [re.fullmatch(r"addiu \$sp, \$sp, -(0x[0-9A-F]+)", t)] if m]
        saves = []
        for _, t in seq:
            m = re.fullmatch(r"(sd|sq|swc1) \$\w+, (0x[0-9A-F]+)\(\$sp\)", t)
            if m and frame.fullmatch(t):
                saves.append(num(m.group(2)) + {"sd": 8, "sq": 16, "swc1": 4}[m.group(1)])
        offs = [num(m.group(1)) for _, t in out for m in re.finditer(r"(-?0x[0-9A-F]+|\d+)\(\$sp\)", t)]
        offs += [num(m.group(1)) for _, t in out for m in [re.fullmatch(r"addiu \$\w+, \$sp, (0x[0-9A-F]+)", t)] if m]
        if not fsz or not offs:
            raise Fail
        base = (max(saves, default=0) + 15) & ~15
        if min(offs) < base or any(re.match(r"(addiu|daddu|addu) \$sp", t) for _, t in out):
            raise Fail
        STACK = (base, fsz[0] - base)
    # a branch may target a nop or a frame instruction that was just dropped:
    # retarget it to the next instruction that is kept (all original addresses, in order)
    kept = sorted({a for a, _ in out})
    every = sorted({a for a, _ in ins})

    def retarget(m):
        t_ = int(m.group(1), 16)
        if t_ in kept:
            return m.group(0)
        nxt = next((a for a in kept if a > t_), None)
        if nxt is None:
            # past the last kept instruction: the function's end (a return)
            raise Fail
        return f".L{nxt:08X}"
    out = [(a, re.sub(r"\.L([0-9A-F]{8})", retarget, t)) for a, t in out]
    return out, frame, seq


def blocks_of(seq):
    """Basic blocks: list of (start addr, [instr]); terminators last."""
    targets = {int(t, 16) for _, t in seq for t in re.findall(r"\.L([0-9A-F]{8})", t)}
    blocks, cur, prev_term, prev_addr = [], None, True, None
    for addr, t in seq:
        op, _ = split(t.split(" || ")[0])
        # a block starts after a jump, or at the FIRST instruction carrying a target address
        # (a delay slot moved before its jump shares the jump's address)
        if cur is None or prev_term or (addr in targets and addr != prev_addr):
            cur = [addr, []]
            blocks.append(cur)
        cur[1].append(t)
        prev_term = bool(re.match(r"(b\w*|j|jr)$", op)) and op != "break"
        prev_addr = addr
    return [(a, b) for a, b in blocks]



def reorder(lines, rng, rate=0.35):
    """Randomly swap adjacent independent statements (units: a line, or a whole
    if/else/do block) at the same indentation. Units touching memory, calls,
    returns, loops control or asm never move."""
    def units(ls):
        out, i = [], 0
        while i < len(ls):
            ind = len(ls[i]) - len(ls[i].lstrip())
            j = i + 1
            if ls[i].rstrip().endswith("{"):
                while j < len(ls) and not (len(ls[j]) - len(ls[j].lstrip()) == ind and
                                           ls[j].strip().startswith("}") and not ls[j].rstrip().endswith("{")):
                    j += 1
                j += 1
            out.append(ls[i:j])
            i = j
        return out

    def info(u):
        text = "\n".join(u)
        if re.search(r"\*\(|->|func_|return|break|continue|__asm__|do \{|while", text):
            return None
        writes = set(re.findall(r"\b(\w+) [-+*/&|^]?=(?!=)", text))
        reads = set(re.findall(r"\b[a-z]\w*\b", text))
        return writes, reads

    def walk(ls):
        us = units(ls)
        for k in range(len(us) - 1):
            a, b = us[k], us[k + 1]
            ia, ib = info(a), info(b)
            if ia and ib and rng.random() < rate:
                wa, ra = ia
                wb, rb = ib
                if not (wa & (rb | wb)) and not (wb & ra):
                    us[k], us[k + 1] = b, a
        out = []
        for u in us:
            if len(u) > 2:
                out += [u[0]] + walk(u[1:-1]) + [u[-1]]
            else:
                out += u
        return out

    return walk(lines)



def ternaries(lines, rng, rate=0.5):
    """if (c) { v = A; } else { v = B; }  ->  v = c ? A : B;  (seeded)."""
    out, i = [], 0
    while i < len(lines):
        if i + 4 < len(lines):
            m0 = re.fullmatch(r"(\s*)if \((.*)\) \{", lines[i])
            m1 = re.fullmatch(r"\s*(\w+) = (.*);", lines[i + 1])
            m3 = re.fullmatch(r"\s*(\w+) = (.*);", lines[i + 3])
            if m0 and m1 and m3 and lines[i + 2].strip() == "} else {" and lines[i + 4].strip() == "}" \
                    and m1.group(1) == m3.group(1) and rng.random() < rate:
                out.append(f"{m0.group(1)}{m1.group(1)} = ({m0.group(2)}) ? {m1.group(2)} : {m3.group(2)};")
                i += 5
                continue
        out.append(lines[i])
        i += 1
    return out



def top_xor(e):
    """(a, b) when e is the expression (a ^ b) split at its top level, else None."""
    if not (e.startswith("(") and e.endswith(")")):
        return None
    depth = 0
    for i, ch in enumerate(e[1:-1], 1):
        depth += ch == "("
        depth -= ch == ")"
        if depth < 0:
            return None
        if depth == 0 and e.startswith(" ^ ", i):
            return e[1:i], e[i + 3:-1]
    return None


def mul_form(e):
    """(base, k) when e is base * k written as shifts/multiplies, else None."""
    m = re.fullmatch(r"\((.+) \* (\d+)\)", e)
    if m:
        return m.group(1), int(m.group(2))
    m = re.fullmatch(r"\((.+) << (\d+)\)", e)
    if m and int(m.group(2)) < 31:
        return m.group(1), 1 << int(m.group(2))
    return None


def fold_mul(op, x, y):
    """MW strength-reduces x * k into shifts and adds; map them back to a multiply."""
    for a_, b_, sign in ((x, y, 1), (y, x, 1 if op == "addu" else None)):
        if sign is None:
            continue
        mf = mul_form(a_)
        if mf and mf[0] == b_:
            k = mf[1] + 1 if op == "addu" else mf[1] - 1
            return f"({b_} * {k})"
        mb = mul_form(b_) if op == "addu" else None
        if mf and mb and mf[0] == mb[0]:
            return f"({mf[0]} * {mf[1] + mb[1]})"
    if op == "subu":
        mf, mb = mul_form(x), mul_form(y)
        if mf and mb and mf[0] == mb[0] and mf[1] > mb[1]:
            return f"({mf[0]} * {mf[1] - mb[1]})"
    return None


def translate(name, raw, externs, opts=None):
    opts = opts or {}
    import random
    rng = random.Random(opts["seed"]) if "seed" in opts else None

    def coin(p=0.5):
        """A seeded choice (only when permuting); deterministic default otherwise."""
        return rng is not None and rng.random() < p
    seq, _, _ = prepare(raw)
    stack = STACK
    if not seq or len(seq) > MAX_INS:
        raise Fail
    bl = blocks_of(seq)
    addrs = [a for a, _ in bl]
    index = {a: k for k, a in enumerate(addrs)}
    succ, term, loops = {}, {}, {}
    for k, (a, ins) in enumerate(bl):
        op, args = split(ins[-1].split(" || ")[0])
        nxt = k + 1 if k + 1 < len(bl) else None
        if op == "jr" and args != ["$ra"]:
            sym = next((m.group(1) for t in ins for m in [re.search(r"%lo\((jtbl_[0-9A-F]{8})\)", t)] if m), None)
            cnt = next((num(m.group(1)) for _, t in seq for m in [re.fullmatch(r"sltiu \$at, \$\w+, (0x[0-9A-F]+|\d+)", t)] if m), None)
            if not sym or not cnt or cnt > 256:
                raise Fail
            tbl = struct.unpack_from(f"<{cnt}I", ORIG, int(sym[5:], 16) - 0x100000 + 0x80)
            kept = sorted(index)
            targets = []
            for tv in tbl:
                if tv not in index:
                    nxt_ = next((a_ for a_ in kept if a_ > tv), None)
                    if nxt_ is None or tv < addrs[0]:
                        raise Fail
                    tv = nxt_
                targets.append(index[tv])
            succ[k], term[k] = sorted(set(targets)), ("jtbl", targets)
        elif op == "jr":
            succ[k], term[k] = [], ("ret",)
        elif op == "j":
            if not re.fullmatch(r"func_[0-9A-F]{8}", args[0]):
                raise Fail
            succ[k], term[k] = [], ("tail", args[0])
        elif op == "b":
            t = int(re.search(r"\.L([0-9A-F]{8})", args[0]).group(1), 16)
            if t not in index:
                raise Fail
            if index[t] <= k:   # for (;;) latch
                if index[t] in loops:
                    raise Fail
                loops[index[t]] = (k, "forever")
            succ[k], term[k] = [index[t]], ("goto",)
        elif op in COND1 or op in ("beq", "bne", "bc1t", "bc1f"):
            t = int(re.search(r"\.L([0-9A-F]{8})", args[-1]).group(1), 16)
            if t not in index or nxt is None:
                raise Fail
            if index[t] <= k:   # do-while latch
                if index[t] in loops:
                    raise Fail
                loops[index[t]] = (k, "dowhile")
            succ[k], term[k] = [nxt, index[t]], ("cond", op, args)
        else:
            if nxt is None:
                raise Fail
            succ[k], term[k] = [nxt], ("fall",)
    if opts.get("early") if rng is None else coin(0.3):
        # `b` to a bare `jr $ra` block: an early return statement in the source
        for k in range(len(bl)):
            if term[k] == ("goto",) and term[succ[k][0]] == ("ret",) and len(bl[succ[k][0]][1]) == 1:
                succ[k], term[k] = [], ("ret",)
    n = len(bl)
    EXIT = n
    def exit_path(b, seen=None):
        seen = seen or set()
        while b is not None and b < n and b not in seen:
            seen.add(b)
            if term[b][0] in ("ret", "tail"):
                return True
            if term[b][0] in ("fall", "goto") and len(succ[b]) == 1:
                b = succ[b][0]
                continue
            return False
        return False

    latch_of = {L: h for h, (L, _) in loops.items()}
    exit_of = {}
    for h, (L, kind) in loops.items():
        if kind == "dowhile":
            exit_of[h] = L + 1
        else:  # for (;;): the exit is where the first forward edge out of the loop goes
            outs = sorted(s2 for k2 in range(h, L + 1) for s2 in succ[k2] if s2 > L)
            exit_of[h] = outs[0] if outs else EXIT
        # every edge out of the body must go to the exit; no edge may enter the body from outside
        for k2 in range(h, L + 1):
            for s2 in succ[k2]:
                if s2 > L and s2 != exit_of[h] and not exit_path(s2):
                    raise Fail
                if s2 < h:
                    raise Fail
        for k2 in list(range(0, h)) + list(range(L + 1, n)):
            if any(h < s2 <= L for s2 in succ[k2]):
                raise Fail
    dsucc = {}
    for k in range(n):
        if k in latch_of:
            h = latch_of[k]
            dsucc[k] = [s2 for s2 in succ[k] if s2 > k] or [exit_of[h]]
        else:
            dsucc[k] = [s2 for s2 in succ[k] if s2 > k]
            if len(dsucc[k]) != len(succ[k]):
                raise Fail
    # post-dominators on the DAG (blocks are in topological = address order)
    pdom = {EXIT: {EXIT}}
    for k in reversed(range(n)):
        ss = dsucc[k] or [EXIT]
        common = set.intersection(*(pdom[s] for s in ss))
        pdom[k] = {k} | common

    def ipdom(k):
        cands = pdom[k] - {k}
        return min(cands, key=lambda c: len(pdom[c]) * -1) if cands else EXIT

    # liveness (registers), to decide which ones become C variables
    use, df = {}, {}
    for k, (a, ins) in enumerate(bl):
        u, d = set(), set()
        for t in [x for y in ins for x in y.split(" || ")]:
            op, args = split(t)
            r, w = regs_of(op, args)
            u |= (r - d)
            d |= w
            if op in ("jal", "jalr"):
                d |= {f"$t{i}" for i in range(10)} | {"$v1", "$at"} | set(ARGS)
        if term[k][0] == "ret":
            u |= ({"$v0"} - d)
        use[k], df[k] = u, d
    live_in = {k: set() for k in range(n + 1)}
    changed = True
    while changed:
        changed = False
        for k in reversed(range(n)):
            out = set().union(*(live_in[s] for s in (succ[k] or [EXIT])))
            new_in = use[k] | (out - df[k])
            if new_in != live_in[k]:
                live_in[k], changed = new_in, True
    last_ret = None  # whichever of $v0/$f0 is written last (in address order) carries the result
    for _b, _ins in bl:
        for _t in _ins:
            for _x in _t.split(" || "):
                _o, _a = split(_x)
                if _o not in ("jal", "jalr"):
                    _w = regs_of(_o, _a)[1]
                    if "$v0" in _w:
                        last_ret = "$v0"
                    if "$f0" in _w:
                        last_ret = "$f0"
    fret = last_ret == "$f0" and (opts.get("new") if rng is None else coin())
    RETREG = "$f0" if fret else "$v0"
    # ---- webs: definitions connected through shared uses (reaching definitions) ----
    CALLER_SAVED = {f"$t{i}" for i in range(10)} | {"$v0", "$v1", "$at"} | set(ARGS) | \
        {f"$f{i}" for i in range(20)}

    def bseq(k):
        """(body, has_term, post) instruction tuples of block k, in block_code's order."""
        ins = bl[k][1]
        has_term = term[k][0] in ("ret", "tail", "goto", "cond")
        body = [split(x) for x in (ins[:-1] if has_term else ins)]
        post = [split(x) for x in (ins[-1].split(" || ")[1:] if term[k][0] == "cond" else [])]
        return body, has_term, post

    def positions(k):
        """[(pos, reads, writes, clobbers)] for block k."""
        body, has_term, post = bseq(k)
        out, pos = [], 0
        for op, a in body:
            rd, wr = regs_of(op, a)
            out.append((pos, rd, wr, CALLER_SAVED - wr if op in ("jal", "jalr") else set()))
            pos += 1
        if has_term:
            tk = term[k]
            rd = set()
            if tk[0] == "cond":
                rd = regs_of(tk[1], tk[2])[0]
            elif tk[0] == "ret":
                rd = {RETREG}
            elif tk[0] == "tail":
                rd = set(ARGS)
            out.append((pos, rd, set(), set()))
            pos += 1
        for op, a in post:
            rd, wr = regs_of(op, a)
            out.append((pos, rd, wr, set()))
            pos += 1
        return out

    entry_defs = {r: ("entry", r) for r in ARGS + FARGS}
    pos_of = {k: positions(k) for k in range(n)}
    gen = {}
    for k in range(n):
        cur = {}
        for pos, rd, wr, clob in pos_of[k]:
            for r in clob:
                cur[r] = {("clobber", k, pos, r)}
            for r in wr:
                cur[r] = {(k, pos, r)}
        gen[k] = cur
    preds = {k: [] for k in range(n)}
    for k in range(n):
        for s2 in succ[k]:
            preds[s2].append(k)
    IN = {k: {} for k in range(n)}
    OUT = {k: {} for k in range(n)}
    changed = True
    while changed:
        changed = False
        for k in range(n):
            inn = {}
            if k == 0:
                for r, d in entry_defs.items():
                    inn[r] = {d}
            for p_ in preds[k]:
                for r, ds in OUT[p_].items():
                    inn.setdefault(r, set()).update(ds)
            outd = {r: set(ds) for r, ds in inn.items()}
            outd.update({r: set(ds) for r, ds in gen[k].items()})
            if inn != IN[k] or outd != OUT[k]:
                IN[k], OUT[k], changed = inn, outd, True
    parent = {}

    def find(x):
        parent.setdefault(x, x)
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x

    def union(x, y):
        parent[find(x)] = find(y)

    crossing = set()      # webs whose value flows across a block boundary
    ptr_web = set()       # webs used as a base address
    useweb = {}           # (k, pos, reg) -> reaching def set
    for k in range(n):
        cur = {r: set(ds) for r, ds in IN[k].items()}
        local = set()
        body, has_term, post = bseq(k)
        flat = body + ([None] if has_term else []) + post
        for (pos, rd, wr, clob), ins_ in zip(pos_of[k], flat):
            for r in rd:
                if r in ("$zero", "$gp", "$sp"):
                    continue
                ds = cur.get(r, set())
                if not ds:
                    continue
                ds = list(ds)
                for d in ds[1:]:
                    union(ds[0], d)
                find(ds[0])
                useweb[(k, pos, r)] = ds
                if r not in local:
                    for d in ds:
                        crossing.add(d)
                if (opts.get("coalesce") if rng is None else coin()) and r in wr and not r.startswith("$f"):
                    # in-place update (x = x op y): one source variable, keep it in one web
                    union((k, pos, r), ds[0])
            if ins_ is not None:
                op, a = ins_
                if op in LOADS or op in STORES or op in ("lqc2", "sqc2"):
                    mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", a[1])
                    if mm and cur.get(mm.group(2)):
                        for d in cur[mm.group(2)]:
                            ptr_web.add(d)
            for r in clob:
                cur[r] = {("clobber", k, pos, r)}
                local.add(r)
            for r in wr:
                cur[r] = {(k, pos, r)}
                find((k, pos, r))
                local.add(r)
    crossing = {find(d) for d in crossing}
    ptr_web = {find(d) for d in ptr_web}
    webvar, webtype, varnames = {}, {}, set()
    used_entry = {r for r, d in entry_defs.items() if d in parent and any(find(d) == find(x) for ds in useweb.values() for x in ds)}
    params = {r for r in used_entry}
    top = max((ARGS.index(r) for r in params if r in ARGS), default=-1)
    params |= set(ARGS[:top + 1])
    for r in params:
        d = entry_defs[r]
        w = find(d)
        webvar[w] = f"p{ARGS.index(r)}" if r in ARGS else f"f{FARGS.index(r)}"
        webtype[w] = "float" if r in FARGS else ("char *" if w in ptr_web else "int")
    nv = 0
    # webs whose every definition loads the same constant stay literals
    defconst = {}
    for k in range(n):
        body_, has_term_, post_ = bseq(k)
        flat_ = list(enumerate(body_)) + [(len(body_) + 1 + i_, x_) for i_, x_ in enumerate(post_)]
        for pos, (op, a) in flat_:
            val_ = None
            if op in ("addiu", "daddiu", "ori") and len(a) == 3 and a[1] == "$zero" and re.fullmatch(NUM, a[2]):
                val_ = str(num(a[2]))
            elif op == "daddu" and a[1:] == ["$zero", "$zero"]:
                val_ = "0"
            if a and (k, pos, a[0]) in parent:
                defconst[(k, pos, a[0])] = val_
    webconst = {}
    for d, v_ in defconst.items():
        w = find(d)
        webconst.setdefault(w, set()).add(v_)
    for d in parent:
        if d not in defconst and isinstance(d[0], int):
            webconst.setdefault(find(d), set()).add(None)
    webconst = {w: vs.pop() for w, vs in webconst.items() if len(vs) == 1 and None not in vs}
    if not (opts.get("new") if rng is None else coin()):
        webconst = {}
    for w in sorted(crossing, key=str):
        if w in webvar or w in webconst:
            continue
        if w[0] in ("clobber", "entry"):
            continue
        webvar[w] = f"v{nv}"
        nv += 1
        reg = w[2]
        webtype[w] = "float" if reg.startswith("$f") else ("char *" if w in ptr_web else "int")
    for k in range(n):
        body_, _, post_ = bseq(k)
        for pos, (op, a) in enumerate(body_):
            if op == "daddiu" and len(a) == 3 and a[1] == "$zero" and (opts.get("new") if rng is None else coin()):
                w = find((k, pos, a[0])) if (k, pos, a[0]) in parent else None
                if w in webtype and webtype[w] == "int":
                    webtype[w] = "unsigned char"
    varnames = set(webvar.values())
    # register -> web of the value that enters block k
    inweb = {}
    inconst = {}
    for k in range(n):
        m, mc = {}, {}
        for r, ds in IN[k].items():
            ws = {find(d) for d in ds}
            if len(ws) == 1:
                w = ws.pop()
                if w in webvar:
                    m[r] = w
                elif w in webconst:
                    mc[r] = webconst[w]
        inweb[k], inconst[k] = m, mc
    based = set()  # kept for the jal / lw type heuristics
    for _, ins in bl:
        for t in ins:
            op, a = split(t)
            if op in LOADS or op in STORES or op in ("lqc2", "sqc2"):
                mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", a[1])
                if mm:
                    based.add(mm.group(2))

    # does the value reaching each `jr $ra` have other readers? then it is a temporary
    ret_uses = [(k, pos) for k in range(n) if term[k][0] == "ret"
                for pos, rd, _, _ in pos_of[k] if RETREG in rd and pos == len(bseq(k)[0])]
    other_use = {}
    for (k_, pos_, r_), ds_ in useweb.items():
        if r_ == RETREG and (k_, pos_) not in ret_uses:
            for d_ in ds_:
                other_use[d_] = True
    ret_is_temp = bool(ret_uses) and all(
        any(other_use.get(d_) for d_ in useweb.get((k_, p_, RETREG), [])) or not useweb.get((k_, p_, RETREG))
        for k_, p_ in ret_uses)

    def defweb(k, pos, r):
        d = (k, pos, r)
        return find(d) if d in parent else None

    vtypes = {}
    locs, calls, local_ext = [], {}, {}

    def argcount(written, at):
        """Arguments of a call: registers written in this block or set in an earlier one
        (reaching definitions), $t0-$t3 only after all of $a0-$a3."""
        got = {r for r in written if r in ARGS}
        for r_ in ARGS:
            if any(isinstance(d_[0], int) for d_ in useweb.get((at[0], at[1], r_), [])):
                got.add(r_)
        n_ = 0
        for i_, r_ in enumerate(ARGS):
            if r_ in got and (i_ < 4 or n_ >= 4):
                n_ = max(n_, i_ + 1)
        if n_ > 4 and not all(r_ in got for r_ in ARGS[4:n_]):
            n_ = 4
        return n_
    callsig, vclasses = {}, {}

    def vclass(slot, sig, rt):
        """Name of a synthetic class whose virtual method m(sig) -> rt sits at vtable byte `slot`."""
        name_ = f"V{slot:X}_{len(sig)}_" + "".join("p" if x == "char *" else "f" if x == "float" else "i" for x in sig) + \
            {"void": "v", "int": "i", "char *": "p", "float": "f"}[rt]
        vclasses[name_] = (slot, sig, rt)
        return name_
    ntemp = [0]

    def need(sym, decl):
        if externs.get(sym, decl) != decl or local_ext.get(sym, decl) != decl:
            raise Fail
        local_ext[sym] = decl

    bc_cache = {}
    use_switch = coin()

    def block_code(k):
        if k not in bc_cache:
            bc_cache[k] = block_code_(k)
        return bc_cache[k]

    def block_code_(k):
        """Statements of block k (without its terminator) and the branch condition."""
        regs, types, memdep, stmts = {}, {}, set(), []
        for r, w in inweb[k].items():
            regs[r], types[r] = webvar[w], webtype[w]
        for r, c_ in inconst[k].items():
            regs[r], types[r] = c_, "int"
        cur = [0]

        def val(r):
            if r == "$zero":
                return "0", "int"
            if r == "$sp" and stack:
                return f"(stk + {-stack[0]})", "char *"
            if r in regs:
                if types[r] in ("hi", "fbits", "fint") or types[r].startswith("sh32"):
                    raise Fail
                return regs[r], types[r]
            raise Fail

        def ival(r):
            e, t = val(r)
            return (f"(int){e}", "int") if t == "char *" else (e, t)

        def tmp(t, e):
            nm = f"tmp{ntemp[0]}"
            ntemp[0] += 1
            locs.append(f"{t} {nm};")
            stmts.append(f"{nm} = {e};")
            return nm

        def flush():
            for r in sorted(memdep):
                if regs[r] not in varnames:
                    regs[r] = tmp(types[r], regs[r])
            memdep.clear()

        def define(r, e, t, mem=False):
            w = defweb(k, cur[0], r)
            if w is not None and w in webvar:
                var = webvar[w]
                # values still pending that read the variable's old value must be kept first
                for o in list(regs):
                    if o != r and regs[o] not in varnames and re.search(rf"\b{var}\b", regs[o]):
                        regs[o] = tmp(types[o], regs[o])
                        memdep.discard(o)
                if t != "hi":
                    vt = webtype[w]
                    if vt == "char *" and t != "char *" and e != "0":
                        e = f"(char *){e}"
                    elif vt != "char *" and t == "char *":
                        e = f"(int){e}"
                    stmts.append(f"{var} = {e};")
                    regs[r], types[r] = var, vt
                    return
            regs[r], types[r] = e, t
            (memdep.add if mem else memdep.discard)(r)

        def lvalue(arg, t):
            mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", arg)
            if mm:
                be, bt = val(mm.group(2))
                off_ = num(mm.group(1))
                if mm.group(1).startswith("(") and off_ & 0x8000:
                    off_ -= 0x10000
                if bt != "char *":
                    if not (opts.get("intbase") if rng is None else coin()) and not re.fullmatch(r"0x[0-9a-f]+", be):
                        raise Fail
                    if re.fullmatch(r"0x[0-9a-f]+", be):
                        return f"*({t} *){(int(be, 16) + off_) & 0xFFFFFFFF:#x}"
                    be = f"(char *){be}"
                return f"*({t} *)({be} + {off_})"
            mm = re.fullmatch(r"%lo\((D_[0-9A-F]{8})\)\((\$\w+)\)", arg)
            if mm and regs.get(mm.group(2)) == mm.group(1) and types.get(mm.group(2)) == "hi":
                need(mm.group(1), f"extern char {mm.group(1)}[];")
                return f"*({t} *){mm.group(1)}"
            mm = re.fullmatch(r"%gp_rel\((D_[0-9A-F]{8})\)\(\$gp\)", arg)
            if mm:
                need(mm.group(1), f"extern {t} {mm.group(1)};")
                return mm.group(1)
            raise Fail

        a_, ins = bl[k]
        if term[k][0] == "jtbl":
            return [], None, None
        body = ins[:-1] if term[k][0] in ("ret", "tail", "goto", "cond") else ins
        post = ins[-1].split(" || ")[1:] if term[k][0] == "cond" else []
        st = {"fcmp": None, "vu": []}
        written = set()

        skip_ = [None]

        def run(body, base=0):
          for idx, t in enumerate(body):
              op, a = split(t)
              cur[0] = base + idx
              if skip_[0] == idx and op in ("dsra32", "dsrl32"):
                  skip_[0] = None
                  sh = int(types[a[1]].split(":")[1])
                  cast = {(16, "dsra32"): "short", (24, "dsra32"): "signed char", (0, "dsra32"): "int",
                          (16, "dsrl32"): "unsigned short", (24, "dsrl32"): "unsigned char",
                          (0, "dsrl32"): "unsigned int"}[(sh, op)]
                  define(a[0], f"({cast}){regs[a[1]]}", "int", False)
                  continue
              if is_vu(op):
                  st["vu"].append((op, a))
                  nxt_vu = idx + 1 < len(body) and is_vu(split(body[idx + 1])[0])
                  if not nxt_vu:
                      operands, text = [], []
                      for o, args in st["vu"]:
                          out = []
                          for arg in args:
                              mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", arg)
                              reg = mm.group(2) if mm else (arg if re.fullmatch(r"\$(a[0-3]|v[01]|t\d|s[0-7])", arg) else None)
                              if reg:
                                  e = val(reg)[0]
                                  if e not in operands:
                                      operands.append(e)
                                  kk = operands.index(e)
                                  arg = f"{mm.group(1)}(%{kk})" if mm else f"%{kk}"
                              out.append(arg)
                          text.append(f"{o} {', '.join(out)}".strip())
                      flush()
                      ops_ = ", ".join(f'"r"({e})' for e in operands)
                      stmts.append('__asm__ volatile("' + "\\n\\t".join(text) + f'" : : {ops_} : "memory");')
                      st["vu"] = []
                  continue
              if op in ("jal", "jalr"):
                  nargs = argcount(written, (k, cur[0]))
                  if op == "jalr":
                      if a != ["$t9"] or types.get("$t9") != "vslot":
                          raise Fail
                      obj, slot = regs["$t9"].rsplit("|", 1)
                      slot = int(slot)
                      this, tt_ = val("$a0")
                      if this != obj or slot < 8 or slot % 4:
                          raise Fail
                      nargs = max(nargs, 1)
                      cv = [val(ARGS[i]) for i in range(1, nargs)]
                      fn = None
                  else:
                      fn = a[0]
                      if not re.fullmatch(r"func_[0-9A-F]{8}", fn):
                          raise Fail
                      cv = [val(ARGS[i]) for i in range(nargs)]
                  cargs = [e for e, _ in cv]
                  sig = tuple("char *" if t_ == "char *" else ("float" if t_ == "float" else "int") for _, t_ in cv)
                  flush()
                  if op == "jalr":
                      vkey = (slot, sig)
                      call = f"(({{VCLS:{slot}:{'/'.join(sig)}:RT}} *){this})->m({', '.join(cargs)})"
                  else:
                      call = f"{fn}({', '.join(cargs)})"
                      if opts.get("cpp") and callsig.get(fn, sig) != sig:
                          raise Fail
                      callsig[fn] = sig
                  for r in list(regs):  # caller-saved registers are dead after the call
                      if not re.fullmatch(r"\$s[0-7]|\$fp|\$f(2[0-9]|3[01])", r):
                          del regs[r]
                          types.pop(r, None)
                  written.clear()
                  # result used later in this block or live out?
                  rest = body[idx + 1:]
                  def read_later(rr):
                      for t2 in rest:
                          o2, a2 = split(t2)
                          rd, wr = regs_of(o2, a2)
                          if rr in rd:
                              return True
                          if rr in wr:
                              return False
                      return rr in set().union(*(live_in[s] for s in (succ[k] or [EXIT]))) or \
                          (term[k][0] == "ret" and rr == "$v0") or \
                          (term[k][0] == "cond" and rr in regs_of(term[k][1], term[k][2])[0])
                  wf, wv = defweb(k, cur[0], "$f0"), defweb(k, cur[0], "$v0")
                  if read_later("$f0"):
                      rt = "float"
                      if wf in webvar:
                          define("$f0", call, "float")
                      else:
                          regs["$f0"], types["$f0"] = tmp("float", call), "float"
                  elif read_later("$v0"):
                      rt = "char *" if wv in ptr_web else "int"
                      if wv in webvar:
                          define("$v0", call, rt)
                      else:
                          regs["$v0"], types["$v0"] = tmp(rt, call), rt
                  else:
                      rt = "void"
                      stmts.append(f"{call};")
                  if op == "jalr":
                      cls = vclass(slot, sig, rt)
                      for i_, x_ in enumerate(stmts):
                          stmts[i_] = x_.replace(f"{{VCLS:{slot}:{'/'.join(sig)}:RT}}", cls)
                      for r_ in list(regs):
                          regs[r_] = regs[r_].replace(f"{{VCLS:{slot}:{'/'.join(sig)}:RT}}", cls)
                      continue
                  prev = calls.get(fn, rt)
                  if prev != rt:
                      # one declaration for every call: an ignored result is fine, a pointer is cast
                      if rt == "void":
                          rt = prev
                      elif prev == "void":
                          pass
                      elif {prev, rt} == {"int", "char *"} and not opts.get("cpp"):
                          cast_ = f"({rt}){call}"
                          for r_ in list(regs):
                              regs[r_] = regs[r_].replace(call, cast_)
                          stmts[-1:] = [x_.replace(call, cast_) for x_ in stmts[-1:]]
                          rt = prev
                      else:
                          raise Fail
                  calls[fn] = rt
                  continue
              if op == "lw" and a[0] == "$t9":
                  if not opts.get("cpp"):
                      raise Fail
                  mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", a[1])
                  if not mm:
                      raise Fail
                  off, vbase = num(mm.group(1)), mm.group(2)
                  if vbase == "$t9" and types.get("$t9") == "vptr":
                      regs["$t9"], types["$t9"] = f"{regs['$t9']}|{off}", "vslot"
                  elif vbase != "$t9":
                      obj, ot = val(vbase)
                      if ot != "char *":
                          raise Fail
                      if off:  # vptr of a secondary base: `this` is the adjusted pointer
                          obj = f"({obj} + {off})"
                      regs["$t9"], types["$t9"] = obj, "vptr"
                  else:
                      raise Fail
                  continue
              if a and op not in STORES and op not in FCMP:
                  written.add(a[0])
              if op in LOADS:
                  tt = LOADS[op]
                  if op == "lw" and defweb(k, cur[0], a[0]) in ptr_web:
                      tt = "char *"
                  define(a[0], lvalue(a[1], tt), tt, mem=True)
              elif op in STORES:
                  ve, vt = val(a[0])
                  tt = "char *" if (op == "sw" and vt == "char *") else STORES[op]
                  if vt == "char *" and tt != "char *":
                      ve = f"(int){ve}"
                  lv = lvalue(a[1], tt)
                  flush()
                  mm_ = re.fullmatch(r"\((.+) ([-+*/&|^]|<<|>>) (.+)\)", ve) if opts.get("compound") else None
                  if mm_ and mm_.group(1) == lv:
                      stmts.append(f"{lv} {mm_.group(2)}= {mm_.group(3)};")
                  else:
                      stmts.append(f"{lv} = {ve};")
              elif op in FCMP:
                  x, _ = val(a[0])
                  y, _ = val(a[1])
                  st["fcmp"] = (x, FCMP[op], y)
              elif op == "lui" and re.fullmatch(r"%hi\(jtbl_[0-9A-F]{8}\)", a[1]):
                  regs[a[0]], types[a[0]] = a[1], "hi"
              elif op == "lui" and re.fullmatch(r"%hi\((?:D|func)_[0-9A-F]{8}\)", a[1]):
                  regs[a[0]], types[a[0]] = a[1][4:-1], "hi"
              elif op == "addiu" and len(a) == 3 and re.fullmatch(r"%lo\(func_[0-9A-F]{8}\)", a[2]):
                  sym = a[2][4:-1]
                  if regs.get(a[1]) != sym or types.get(a[1]) != "hi":
                      raise Fail
                  calls.setdefault(sym, "void")
                  define(a[0], f"(char *){sym}", "char *")
              elif op == "addiu" and len(a) == 3 and re.fullmatch(r"%lo\(D_[0-9A-F]{8}\)", a[2]):
                  sym = a[2][4:-1]
                  # the %hi may sit in an earlier block (a branch delay slot)
                  if (regs.get(a[1]) != sym or types.get(a[1]) != "hi") and not (
                          a[1] == a[0] and useweb.get((k, cur[0], a[1])) and all(
                              isinstance(d_[0], int) and d_[1] < len(bseq(d_[0])[0])
                              and bseq(d_[0])[0][d_[1]] == ("lui", [a[1], f"%hi({sym})"])
                              for d_ in useweb[(k, cur[0], a[1])])):
                      raise Fail
                  need(sym, f"extern char {sym}[];")
                  define(a[0], sym, "char *")
              elif op == "addiu" and len(a) == 3 and a[1] == "$gp" and re.fullmatch(r"%gp_rel\(D_[0-9A-F]{8}\)", a[2]):
                  sym = a[2][8:-1]
                  need(sym, f"extern char {sym};")
                  define(a[0], f"&{sym}", "char *")
              elif op == "addiu" and len(a) == 3 and re.fullmatch(NUM, a[2]):
                  e, tt = val(a[1])
                  kk = num(a[2])
                  if a[2].startswith("(") and kk & 0x8000:
                      kk -= 0x10000  # %lo of an absolute address is sign-extended
                  if re.fullmatch(r"0x[0-9a-f]+", e) and tt == "int":
                      define(a[0], f"{(int(e, 16) + kk) & 0xFFFFFFFF:#x}", "int")
                  else:
                      define(a[0], str(kk) if e == "0" else f"({e} + {kk})", tt, a[1] in memdep)
              elif op == "daddu" and len(a) == 3 and a[2] == "$zero":
                  e, tt = val(a[1])
                  define(a[0], e, tt, a[1] in memdep)
              elif op in ("addu", "subu", "and", "or", "xor") and len(a) == 3:
                  x, tx = val(a[1])
                  y, _ = ival(a[2])
                  if op != "addu" and tx == "char *":
                      x, tx = ival(a[1])
                  sym = {"addu": "+", "subu": "-", "and": "&", "or": "|", "xor": "^"}[op]
                  folded = fold_mul(op, x, y) if op in ("addu", "subu") and tx != "char *" and not coin(0.2) else None
                  if folded:
                      define(a[0], folded, "int", a[1] in memdep or a[2] in memdep)
                      continue
                  if op != "subu" and (coin() if rng is not None else opts.get("rev")):
                      x, y = y, x  # commutative: the other operand order
                  define(a[0], f"({x} {sym} {y})", tx if tx == "char *" else "int", a[1] in memdep or a[2] in memdep)
              elif op in ("andi", "ori", "xori") and re.fullmatch(r"-?\d+|0x[0-9a-f]+", val(a[1])[0]):
                  b_ = int(val(a[1])[0], 0)
                  kk = num(a[2])
                  r_ = (b_ | kk) if op == "ori" else (b_ & kk) if op == "andi" else (b_ ^ kk)
                  define(a[0], f"{r_ & 0xFFFFFFFF:#x}", "int")
              elif op in ("andi", "ori", "xori"):
                  x, _ = ival(a[1])
                  sym = {"andi": "&", "ori": "|", "xori": "^"}[op]
                  define(a[0], f"({x} {sym} {num(a[2])})", "int", a[1] in memdep)
              elif op in ("sll", "sra", "srl"):
                  x, _ = ival(a[1])
                  mf = mul_form(x) if op == "sll" else None
                  e = f"((unsigned int){x} >> {num(a[2])})" if op == "srl" else \
                      (f"({mf[0]} * {mf[1] << num(a[2])})" if mf and "*" in x and not coin(0.2) else
                       f"({x} {'<<' if op == 'sll' else '>>'} {num(a[2])})")
                  define(a[0], e, "int", a[1] in memdep)
              elif op in ("slt", "sltu", "slti", "sltiu"):
                  x, _ = ival(a[1])
                  y = ival(a[2])[0] if op in ("slt", "sltu") else str(num(a[2]))
                  if op == "sltiu" and y == "1":
                      xo = top_xor(x)
                      e = f"({xo[0]} == {xo[1]})" if xo and not coin(0.15) else f"({x} == 0)"
                  elif op == "sltu" and x == "0":
                      xo = top_xor(y)
                      e = f"({xo[0]} != {xo[1]})" if xo and not coin(0.15) else f"({y} != 0)"
                  elif op in ("sltu", "sltiu"):
                      e = f"((unsigned int){x} < (unsigned int){y})"
                  else:
                      e = f"({x} < {y})"
                  define(a[0], e, "int", a[1] in memdep or (len(a) > 2 and a[2] in memdep))
              elif op == "lui" and re.fullmatch(r"0x[0-9A-F]+|\d+|\(0x[0-9A-F]+ >> 16\)", a[1]):
                  mm = re.fullmatch(r"\((0x[0-9A-F]+) >> 16\)", a[1])
                  kk = (int(mm.group(1), 16) >> 16) if mm else num(a[1])
                  define(a[0], f"{(kk << 16) & 0xFFFFFFFF:#x}", "int")
              elif op == "mtc1" and re.fullmatch(r"0|0x[0-9a-f]+", val(a[0])[0]):
                  e, _ = val(a[0])
                  if e == "0":
                      define(a[1], "0.0f", "float")
                  elif re.fullmatch(r"0x[0-9a-f]+", e):
                      f = struct.unpack("<f", struct.pack("<I", int(e, 16)))[0]
                      define(a[1], repr(float(f)) + "f", "float")
                  else:
                      raise Fail
              elif op == "dsll32" and idx + 1 < len(body) and re.fullmatch(
                      rf"dsr[al]32 \{a[0]}, \{a[0]}, {re.escape(a[2])}", body[idx + 1]) and num(a[2]) in (0, 16, 24):
                  # sign/zero extension pair: fold both into a cast now (the target may be a variable)
                  x, _ = ival(a[1])
                  regs[a[0]], types[a[0]] = x, f"sh32:{num(a[2])}"
                  skip_[0] = idx + 1
              elif op == "dsll32" and defweb(k, cur[0], a[0]) not in webvar:
                  x, _ = ival(a[1])
                  regs[a[0]], types[a[0]] = x, f"sh32:{num(a[2])}"
              elif op in ("dsra32", "dsrl32") and types.get(a[1], "").startswith("sh32"):
                  sh = int(types[a[1]].split(":")[1])
                  if sh != num(a[2]) or sh not in (0, 16, 24):
                      raise Fail
                  cast = {(16, "dsra32"): "short", (24, "dsra32"): "signed char", (0, "dsra32"): "int",
                          (16, "dsrl32"): "unsigned short", (24, "dsrl32"): "unsigned char",
                          (0, "dsrl32"): "unsigned int"}[(sh, op)]
                  x = regs[a[1]]
                  define(a[0], f"({cast}){x}", "int", False)
              elif op == "daddiu" and len(a) == 3 and re.fullmatch(NUM, a[2]):
                  e, tt = val(a[1])
                  kk = num(a[2])
                  define(a[0], str(kk) if e == "0" else f"({e} + {kk})", tt, a[1] in memdep)
              elif op == "dsubu" and len(a) == 3:
                  x, _ = ival(a[1])
                  y, _ = ival(a[2])
                  define(a[0], "0" if (x, y) == ("0", "0") else f"({x} - {y})" if x != "0" else f"-{y}", "int",
                         a[1] in memdep or a[2] in memdep)
              elif op in ("sllv", "srav", "srlv"):
                  x, _ = ival(a[1])
                  y, _ = ival(a[2])
                  e = f"((unsigned int){x} >> {y})" if op == "srlv" else \
                      f"({x} {'<<' if op == 'sllv' else '>>'} {y})"
                  define(a[0], e, "int", a[1] in memdep or a[2] in memdep)
              elif op == "not":
                  x, _ = ival(a[1])
                  define(a[0], f"~{x}", "int", a[1] in memdep)
              elif op == "negu":
                  x, _ = ival(a[1])
                  define(a[0], f"-{x}", "int", a[1] in memdep)
              elif op in ("movn", "movz"):
                  x, tx = val(a[1])
                  c_, _ = ival(a[2])
                  old, to = val(a[0])
                  test = f"{c_} != 0" if op == "movn" else f"{c_} == 0"
                  define(a[0], f"({test} ? {x} : {old})", tx if tx == to else "int",
                         a[1] in memdep or a[2] in memdep)
              elif op == "mtc1" and not re.fullmatch(r"0|0x[0-9a-f]+", val(a[0])[0]):
                  x, _ = ival(a[0])
                  regs[a[1]], types[a[1]] = x, "fbits"
              elif op == "cvt.s.w":
                  if types.get(a[1]) != "fbits":
                      raise Fail
                  define(a[0], f"(float){regs[a[1]]}", "float", False)
              elif op == "cvt.w.s":
                  x, _ = val(a[1])
                  regs[a[0]], types[a[0]] = f"(int){x}", "fint"
              elif op == "mfc1":
                  if types.get(a[1]) != "fint":
                      raise Fail
                  define(a[0], regs[a[1]], "int", False)
              elif op in ("mult", "mult1", "multu", "multu1"):
                  x, _ = ival(a[-2])
                  y, _ = ival(a[-1])
                  regs["LO"], types["LO"] = f"({x} * {y})", "int"
                  regs.pop("HI", None)
                  if len(a) == 3 and a[0] != "$zero":
                      define(a[0], f"({x} * {y})", "int", a[-2] in memdep or a[-1] in memdep)
              elif op in ("div", "div1", "divu", "divu1"):
                  x, _ = ival(a[-2])
                  y, _ = ival(a[-1])
                  if op.startswith("divu"):
                      x, y = f"(unsigned int){x}", f"(unsigned int){y}"
                  regs["LO"], types["LO"] = f"({x} / {y})", "int"
                  regs["HI"], types["HI"] = f"({x} % {y})", "int"
              elif op in ("mflo", "mflo1", "mfhi", "mfhi1"):
                  src_ = "LO" if op.startswith("mflo") else "HI"
                  if src_ not in regs:
                      raise Fail  # e.g. the high half of a multiply (division by a constant)
                  define(a[0], regs[src_], "int", False)
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
        run(body)
        # terminator
        tk = term[k]
        cond = None
        if tk[0] == "cond":
            op, a = tk[1], tk[2]
            if op in COND1:
                x, tx = val(a[0])
                if tx == "char *" and COND1[op] not in ("==", "!="):
                    x = f"(int){x}"
                cond = (x, COND1[op], "0")
            elif op in ("beq", "bne"):
                x, tx = val(a[0])
                y, ty = val(a[1])
                if (tx == "char *") != (ty == "char *") and "0" not in (x, y):
                    x, y = (f"(int){x}" if tx == "char *" else x), (f"(int){y}" if ty == "char *" else y)
                cond = (x, "==" if op == "beq" else "!=", y)
            else:
                if st["fcmp"] is None:
                    raise Fail
                cond = st["fcmp"] if op == "bc1t" else ("!", st["fcmp"])
        if post:
            # the delay slot runs after the condition: keep the operands it overwrites
            pw = set().union(*(regs_of(*split(x))[1] for x in post))
            names = {regs[r] for r in pw if r in regs}

            def snap(e):
                if any(re.search(rf"(?<![\w]){re.escape(nm)}(?![\w])", e) for nm in names):
                    return tmp("char *" if e in [regs.get(r) for r in regs if types.get(r) == "char *"] else "int", e)
                return e
            if cond[0] == "!":
                x, o, y = cond[1]
                cond = ("!", (snap(x), o, snap(y)))
            else:
                x, o, y = cond
                cond = (snap(x), o, snap(y))
            run(post, len(body) + 1)
        ret = None
        if tk[0] == "ret":
            ret = regs.get(RETREG) if RETREG in regs and types.get(RETREG) not in ("hi", "fbits", "fint") else None
            if ret is not None and types.get(RETREG) == "char *":
                ret = f"(int){ret}"
        if tk[0] == "tail":
            nargs = argcount(written, (k, len(body)))
            cargs = [val(ARGS[i])[0] for i in range(nargs)]
            stmts.append(f"{tk[1]}({', '.join(cargs)});")
            calls.setdefault(tk[1], "void")
        return stmts, cond, ret

    def cstr(cond, negate):
        if cond[0] == "!":
            cond, negate = cond[1], not negate
        x, o, y = cond
        if negate:
            o = NEG[o]
        if y != "0" and coin(0.3):
            x, o, y = y, {"==": "==", "!=": "!=", "<": ">", ">": "<", "<=": ">=", ">=": "<="}[o], x
        if y == "0" and o in ("!=", "==") and re.fullmatch(r"\(.*(==|<|<=|>|>=|!=).*\)", x):
            if o == "==" and coin(0.5):
                mm_ = re.fullmatch(r"\((.+) (<|>|<=|>=|==|!=) (.+)\)", x)
                if mm_ and mm_.group(1).count("(") == mm_.group(1).count(")"):
                    return f"{mm_.group(1)} {NEG[mm_.group(2)]} {mm_.group(3)}"
            return x if o == "!=" else f"!{x}"
        return f"{x} {o} {y}"

    rets = []
    out = []

    def reaches(t, nxt):
        if nxt is None:
            return False
        b = t
        seen = set()
        while b is not None and b < n and b not in seen:
            seen.add(b)
            if b == nxt:
                return True
            if term[b][0] in ("ret", "tail"):
                return False
            b = ipdom(b)
            if b == nxt:
                return True
        return False

    def switch_at(k):
        """(var, [(const, target)] in chain order, default target, chain blocks) or None."""
        if term[k][0] != "cond" or term[k][1] not in ("beq", "beqz"):
            return None
        chain, blocks_, x0 = [], [], None
        b = k
        while b < n and term[b][0] == "cond" and term[b][1] in ("beq", "beqz"):
            st_, cond_, _ = block_code(b)
            if b != k and st_:
                break
            if cond_[0] == "!" or cond_[1] != "==" or not re.fullmatch(r"-?\d+", cond_[2]):
                break
            if x0 is None:
                x0 = cond_[0]
            elif cond_[0] != x0:
                break
            chain.append((int(cond_[2]), succ[b][1]))
            blocks_.append(b)
            b = succ[b][0]
        if len(chain) < SWITCH_MIN or not (opts.get("new") if rng is None else use_switch):
            return None
        default = b
        if b < n and term[b][0] == "goto" and not block_code(b)[0] and len(bl[b][1]) == 1:
            blocks_.append(b)
            default = succ[b][0]
        return x0, chain, default, blocks_

    def emit_switch(x0, labels, default, j, ind, ctx, active):
        """switch (x0) with labels [(value, target)] in source order, bodies in address order."""
        for b2 in [t for _, t in labels] + [default]:
            if b2 != j and b2 != EXIT and not (b2 < (j if j != EXIT else n + 1)):
                raise Fail
        groups = []
        for c_, t_ in labels:
            if groups and groups[-1][0] == t_:
                groups[-1][1].append(c_)
            else:
                groups.append((t_, [c_]))
        bodies = [t_ for t_, _ in groups if t_ != j]
        if bodies != sorted(bodies) or len(set(bodies)) != len(bodies):
            raise Fail
        if default != j:
            # the default body goes where its address puts it
            if default in bodies:
                raise Fail
            pos_ = next((i_ for i_, (t_, _) in enumerate(groups) if t_ != j and t_ > default), len(groups))
            groups.insert(pos_, (default, ["default"]))
        out.append(ind + f"switch ({x0}) {{")
        order = [t_ for t_, _ in groups if t_ != j]
        for t_, cs in groups:
            for c_ in cs:
                out.append(ind + ("default:" if c_ == "default" else f"case {c_}:"))
            if t_ == j:
                out.append(ind + "    break;")
                continue
            nxt = order[order.index(t_) + 1] if order.index(t_) + 1 < len(order) else None
            before = len(out)
            emit(t_, {x for x in (nxt, j) if x is not None}, ind + "    ", ctx, active)
            last = out[-1].strip() if len(out) > before else ""
            if not last.startswith("return"):
                out.append(ind + "    break;" if not reaches(t_, nxt) else ind + "    /* fall through */")
        out.append(ind + "}")

    def jtbl_at(k):
        """Bounds check + table dispatch: (var, labels, default, dispatch block) or None."""
        if term[k][0] != "cond" or term[k][1] not in ("beqz",):
            return None
        J = succ[k][0]
        if J >= n or term[J][0] != "jtbl":
            return None
        _, cond_, _ = block_code(k)
        if cond_[0] == "!" or cond_[1] != "==" or cond_[2] != "0":
            return None
        m_ = re.fullmatch(r"\(\(unsigned int\)(.+) < \(unsigned int\)(\d+)\)", cond_[0])
        if not m_ or int(m_.group(2)) != len(term[J][1]):
            return None
        x0, shift = m_.group(1), 0
        m2 = re.fullmatch(r"\((.+) \+ (-?\d+)\)", x0)
        if m2:
            x0, shift = m2.group(1), -int(m2.group(2))
        default = succ[k][1]
        table = term[J][1]
        labels = sorted(((i + shift, t) for i, t in enumerate(table) if t != default), key=lambda x: (x[1], x[0]))
        return x0, labels, default, J

    def emit(k, stop, ind, ctx=None, active=frozenset()):
        stops = stop if isinstance(stop, (set, frozenset)) else {stop}
        while k is not None and k not in stops and k != EXIT:
            sw = switch_at(k) if k not in loops else None
            if sw:
                x0, chain, default, blocks_ = sw
                stmts, _, _ = block_code(k)
                out.extend(ind + x for x in stmts)
                j = ipdom(blocks_[-1]) if blocks_ else ipdom(k)
                # source order of label groups is the reverse of the compare chain
                emit_switch(x0, list(reversed(chain)), default, j, ind, ctx, active)
                k = j
                continue
            jt = jtbl_at(k) if k not in loops else None
            if jt:
                x0, labels, default, J = jt
                stmts, _, _ = block_code(k)
                out.extend(ind + x for x in stmts)
                j = ipdom(J)
                emit_switch(x0, labels, default, j, ind, ctx, active)
                k = j
                continue
            if k in loops and k not in active:
                L, kind = loops[k]
                X = exit_of[k]
                inner = (k, L, X)
                out.append(ind + ("do {" if kind == "dowhile" else "for (;;) {"))
                if L != k:
                    emit(k, L, ind + "    ", inner, active | {k})
                stmts, cond, ret = block_code(L)
                out.extend(ind + "    " + x for x in stmts)
                if kind == "dowhile":
                    out.append(ind + f"}} while ({cstr(cond, False)});")
                else:
                    out.append(ind + "}")
                k = X
                continue
            stmts, cond, ret = block_code(k)
            out.extend(ind + x for x in stmts)
            tk = term[k]
            if tk[0] == "ret":
                rets.append(ret)
                out.append(ind + (f"return {ret};" if ret else "return;"))
                return
            if tk[0] == "tail":
                out.append(ind + "return;")
                return
            if tk[0] in ("goto", "fall"):
                nk = succ[k][0]
                if ctx and nk == ctx[2] and k != ctx[1]:
                    out.append(ind + "break;")
                    return
                k = nk
                continue
            fall, taken = succ[k]
            if ctx:
                h, L, X = ctx
                if taken == X:
                    out.append(ind + f"if ({cstr(cond, False)}) break;")
                    k = fall
                    continue
                if fall == X:
                    out.append(ind + f"if ({cstr(cond, True)}) break;")
                    k = taken
                    continue
                if taken > L and taken != X and exit_path(taken):
                    out.append(ind + f"if ({cstr(cond, False)}) {{")
                    emit(taken, EXIT, ind + "    ", None, active)
                    out.append(ind + "}")
                    k = fall
                    continue
                if fall > L and fall != X and exit_path(fall):
                    out.append(ind + f"if ({cstr(cond, True)}) {{")
                    emit(fall, EXIT, ind + "    ", None, active)
                    out.append(ind + "}")
                    k = taken
                    continue
            j = ipdom(k)
            if ctx and (j > ctx[1] or j == EXIT):
                j = ctx[1]  # inside a loop every region ends at the latch at the latest
            if taken == j:
                out.append(ind + f"if ({cstr(cond, True)}) {{")
                emit(fall, j, ind + "    ", ctx, active)
                out.append(ind + "}")
            elif fall == j:
                out.append(ind + f"if ({cstr(cond, False)}) {{")
                emit(taken, j, ind + "    ", ctx, active)
                out.append(ind + "}")
            else:
                out.append(ind + f"if ({cstr(cond, True)}) {{")
                emit(fall, j, ind + "    ", ctx, active)
                out.append(ind + "} else {")
                emit(taken, j, ind + "    ", ctx, active)
                out.append(ind + "}")
            k = j

    emit(0, EXIT, "    ")
    if not rets:
        raise Fail
    rtype = "void"
    void_ = ret_is_temp and (opts.get("new") if rng is None else coin())
    if all(r is not None for r in rets) and not void_:
        rtype = "float" if fret else "int"
    else:
        out = [l.replace("return r_v0;", "return;") for l in out]
        out = [re.sub(r"return [^;]+;", "return;", l) for l in out]
    # drop a final bare `return;`
    while out and out[-1].strip() == "return;":
        out.pop()
    ints = sorted((r for r in params if r in ARGS), key=ARGS.index)
    plist = []
    if ints:
        for i in range(ARGS.index(ints[-1]) + 1):
            plist.append(f"{webtype.get(find(entry_defs[ARGS[i]]), 'int') if entry_defs[ARGS[i]] in parent else 'int'} p{i}")
    plist += [f"float f{FARGS.index(r)}" for r in sorted(params) if r in FARGS]
    while True:
        dead = []
        for l in out:
            mm_ = re.match(r"\s*(tmp\d+) = (.*);$", l)
            if mm_ and not re.search(r"func_[0-9A-F]{8}\(|->m\(", mm_.group(2)):
                nm_ = mm_.group(1)
                if not any(re.search(rf"\b{nm_}\b", o) for o in out if o is not l):
                    dead.append(l)
        if not dead:
            break
        out = [l for l in out if l not in dead]
    used_tmp = {t for l in out for t in re.findall(r"\btmp\d+\b", l)}
    locs[:] = [d for d in locs if re.search(r"\b(tmp\d+);", d).group(1) in used_tmp]
    vtype = {v: webtype[w] for w, v in webvar.items()}
    if opts.get("narrow"):
        # a variable whose every assignment is a (char/short) cast or a small constant was
        # most likely declared with that type: declare it so and drop the casts
        NARROW = {"signed char": (-128, 127), "short": (-32768, 32767),
                  "unsigned char": (0, 255), "unsigned short": (0, 65535)}
        for v in list(vtype):
            if re.fullmatch(r"[pf]\d", v) or vtype[v] != "int":
                continue
            rhs = [m.group(1) for l in out for m in [re.match(rf"\s*{v} = (.*);$", l)] if m]
            kinds = set()
            for e in rhs:
                mm = re.match(r"\((signed char|short|unsigned char|unsigned short)\)", e)
                if mm:
                    kinds.add(mm.group(1))
                elif re.fullmatch(r"-?\d+", e):
                    kinds.add(("const", int(e)))
                else:
                    kinds.add("other")
            casts = {k for k in kinds if isinstance(k, str)}
            if len(casts) == 1 and "other" not in casts:
                nt = casts.pop()
                lo, hi = NARROW[nt]
                if all(lo <= k[1] <= hi for k in kinds if isinstance(k, tuple)):
                    vtype[v] = nt
                    out = [re.sub(rf"^(\s*{v} = )\({re.escape(nt)}\)", r"\1", l) for l in out]
    decl = [f"    {vtype[v]} {v};" for w, v in sorted(webvar.items(), key=lambda x: x[1])
            if not re.fullmatch(r"[pf]\d", v)]
    if rng is not None and coin(0.7):
        rng.shuffle(decl)  # MW's register allocation follows declaration order
    elif "declseed" in opts:
        random.Random(opts["declseed"]).shuffle(decl)  # only the declaration order varies
    if rng is not None and coin(0.6):
        out = reorder(out, rng)
    if rng is not None and coin(0.4):
        out = ternaries(out, rng)
    if stack:
        decl = [f"    char stk[{stack[1]:#x}] __attribute__((aligned(16)));"] + decl
    lines = [f"{rtype} {name}({', '.join(plist) or 'void'}) {{"] + decl + [f"    {l}" for l in locs] + out + ["}"]
    externs.update(local_ext)
    return "\n".join(lines).replace("char * ", "char *"), calls, {"callsig": callsig, "vclasses": vclasses}


def check(path, cands):
    obj = f"scratch/{path.stem}.o"  # compiled by compile_ok() with the right language flags
    ok = set()
    for n, A in cands.items():
        buf = io.StringIO()
        with contextlib.redirect_stdout(buf):
            try:
                if fd.main(str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(ROOT / obj), n, hex(A)) == 0:
                    ok.add(n)
            except (SystemExit, Exception):
                pass
        m = re.search(r"(\d+)/(\d+) instructions", buf.getvalue())
        if m:
            sc = int(m.group(1)) / max(int(m.group(2)), 1)
            if sc > SCORES.get(n, -1.0):
                SCORES[n] = sc
                if CUR_OPTS[0] is not None:
                    BEST_OPTS[n] = CUR_OPTS[0]
    return ok


SCORES = {}  # best instruction-match ratio seen per function
BEST_OPTS = {}  # the translation options that scored it
CUR_OPTS = [{}]


def write(path, funcs, externs):
    used = {s for _, code, _ in funcs for s in re.findall(r"\bD_[0-9A-F]{8}\b", code)}
    decl = [externs[s] for s in sorted(used)]
    protos = {}
    for _, _, c in funcs:
        for fn, rt in c.items():
            protos.setdefault(fn, rt)
    decl += [f"{rt} {fn}();".replace("* ", "*") for fn, rt in sorted(protos.items())]
    hdr = ("/* AUTO-GENERATED by tools/gen_flow.py: small functions with forward branches, translated\n"
           " * from the original asm and verified byte-for-byte (only matches are kept). Types are\n"
           " * offset-based placeholders; move functions to their real TUs as they are identified. */\n")
    path.write_text(hdr + "\n".join(decl) + "\n\n" + "\n\n".join(c for _, c, _ in funcs) + "\n")


def write_cpp(path, funcs, externs):
    """C++ file: extern "C" declarations, synthetic classes for virtual calls, definitions."""
    used = {s for _, code, _ in funcs for s in re.findall(r"\bD_[0-9A-F]{8}\b", code)}
    protos, classes = {}, {}
    for name, _, calls in funcs:
        meta = META[name]
        for fn, rt in calls.items():
            protos[fn] = (rt, meta["callsig"].get(fn, ()))
        classes.update(meta["vclasses"])
    out = [CPP_HDR, 'extern "C" {']
    out += [externs[s] for s in sorted(used)]
    for fn, (rt, sig) in sorted(protos.items()):
        out.append(f"{rt} {fn}({', '.join(sig) or 'void'});".replace("* ", "*"))
    out.append("}\n")
    for cname, (slot, sig, rt) in sorted(classes.items()):
        body = [f"    virtual void d{i}();" for i in range((slot - 8) // 4)]
        body.append(f"    virtual {rt} m({', '.join(sig) or 'void'});".replace("* ", "*"))
        out.append(f"class {cname} {{\npublic:\n" + "\n".join(body) + "\n};")
    out.append('\nextern "C" {\n')
    out.append("\n\n".join(c for _, c, _ in funcs))
    out.append("\n}\n")
    path.write_text("\n".join(out))


CPP_HDR = ("/* AUTO-GENERATED by tools/gen_flow.py: functions that make C++ virtual calls, translated\n"
           " * from the original asm and verified byte-for-byte (only matches are kept). The V* classes\n"
           " * are synthetic: each has one method at the vtable slot a call site uses. */")

# translation variants, tried in order on what is still unmatched: (options, output kind)
OPTIONS = [({}, "c"), ({"coalesce": True}, "c"), ({"new": True}, "c"), ({"new": True, "intbase": True}, "c"),
           ({"cpp": True}, "cpp"), ({"cpp": True, "coalesce": True}, "cpp"), ({"cpp": True, "new": True}, "cpp"), ({"cpp": True, "new": True, "intbase": True}, "cpp"),
           ({"new": True, "intbase": True, "early": True}, "c"), ({"cpp": True, "new": True, "early": True}, "cpp")]
# "new": switch statements, float returns, constant literals across blocks, char-typed daddiu
OUT_CPP = ROOT / "src/game/auto/flow_v.cpp"
META = {}


def compile_ok(path, funcs, externs, kind):
    """Write funcs to path, dropping functions the compiler rejects, until it compiles."""
    cc = CC + (" -lang c++ -Cpp_exceptions off" if kind == "cpp" else "")
    for _ in range(400):
        (write_cpp if kind == "cpp" else write)(path, funcs, externs)
        r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                            f"{cc} -o scratch/{path.stem}.o {path.relative_to(ROOT).as_posix()}"],
                           capture_output=True, text=True)
        if not r.returncode:
            return funcs
        bad_lines = {int(x) for x in re.findall(r"#\s+(\d+):", r.stdout + r.stderr)}
        text = path.read_text().split("\n")
        bad = set()
        for ln in bad_lines:
            for j in range(min(ln, len(text)) - 1, -1, -1):
                mm = re.match(r"\w[\w *]* (func_[0-9A-F]{8})\(", text[j])
                if mm:
                    bad.add(mm.group(1))
                    break
        if not bad:
            raise SystemExit(r.stdout[-3000:])
        funcs = [f for f in funcs if f[0] not in bad]
    raise SystemExit("too many compile errors")


def main():
    taken = set()
    for p in (ROOT / "src").rglob("*.c*"):
        if p not in (OUT, OUT_CPP):
            taken |= {int(x, 16) for x in re.findall(r"\bfunc_([0-9A-F]{8})\s*\([^;{}\n]*\)\s*\{", p.read_text())}
    taken |= {int(m, 16) for m in re.findall(r"=\s*0x([0-9A-Fa-f]+);",
                                             "".join(f.read_text() for f in (ROOT / "config/SLUS_209.64").glob("symbols*.txt")))}
    src = (ROOT / "asm/us/text.s").read_text()
    work = []
    for name, a, body in re.findall(r"^glabel (func_([0-9A-F]+))\n(.*?)^endlabel", src, re.M | re.S):
        A = int(a, 16)
        if not (LO <= A < HI) or A in taken:
            continue
        raw = [(int(m.group(1), 16), re.sub(r"\s+", " ", m.group(2).strip()))
               for m in re.finditer(r"/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(.*)", body)]
        has_branch = any(re.match(r"b\w*\b", t) and not t.startswith("break") for _, t in raw)
        has_vcall = any(t.startswith("jalr") for _, t in raw)
        # branch-free functions that tools/gen_leaf.py already matched are excluded by `taken`;
        # the rest are tried here too (richer instruction set, webs, stack locals)
        work.append((name, A, raw, has_vcall))
    addr = {n: A for n, A, _, _ in work}
    externs, matched = {}, {"c": {}, "cpp": {}}
    for opts, kind in OPTIONS:
        funcs, fails = [], 0
        for name, A, raw, has_vcall in work:
            if name in matched["c"] or name in matched["cpp"] or has_vcall != (kind == "cpp"):
                continue
            try:
                code, calls, meta = translate(name, raw, externs, opts)
            except (Fail, ValueError, KeyError, AttributeError, IndexError, TypeError):
                fails += 1
                continue
            META[name] = meta
            funcs.append((name, code, calls))
        defs = {n for n, _, _ in funcs} | set(matched["c"]) | set(matched["cpp"])
        seen = {c: rt for d in matched.values() for _, _, cl in d.values() for c, rt in cl.items()}
        keep = []
        for f in funcs:
            if any(c in defs for c in f[2]) or any(seen.get(c, rt) != rt for c, rt in f[2].items()):
                continue
            seen.update(f[2])
            keep.append(f)
        tmpfile = ROOT / ("scratch/flow_pass.cpp" if kind == "cpp" else "scratch/flow_pass.c")
        keep = compile_ok(tmpfile, keep, externs, kind)
        CUR_OPTS[0] = opts
        ok = check(tmpfile, {n: addr[n] for n, _, _ in keep})
        # keep each pass's candidates for diagnosis (scratch/ is git-ignored)
        npass = OPTIONS.index((opts, kind))
        (ROOT / f"scratch/flow_pass{npass}{tmpfile.suffix}").write_text(tmpfile.read_text())
        (ROOT / f"scratch/flow_pass{npass}.addr").write_text(
            "\n".join(f"{n} {addr[n]:#x} {'ok' if n in ok else 'no'}" for n, _, _ in keep))
        import shutil
        shutil.copy(ROOT / f"scratch/{tmpfile.stem}.o", ROOT / f"scratch/flow_pass{npass}.o")
        for f in keep:
            if f[0] in ok:
                matched[kind][f[0]] = f
        print(f"pass {opts}: {len(ok)} match of {len(keep)} candidates ({fails} not translatable)", flush=True)
    # permutation rounds: near misses get seeded variants (variable merging, operand
    # orders), batched into one compile per round and kind
    rounds = int(sys.argv[2]) if len(sys.argv) > 2 else 0
    near = {n for n, sc in SCORES.items() if sc >= NEAR and n not in matched["c"] and n not in matched["cpp"]}
    by_name = {n: (raw, has_vcall) for n, A, raw, has_vcall in work}
    for rnd in range(rounds):
        got = 0
        for kind in ("c", "cpp"):
            funcs = []
            for name in sorted(near):
                raw, has_vcall = by_name[name]
                if has_vcall != (kind == "cpp"):
                    continue
                # odd rounds: the best pass's translation with only the declarations reordered
                o_ = (dict(BEST_OPTS.get(name, {}), declseed=f"{name}:{rnd}") if rnd % 2 else
                      {"seed": f"{name}:{rnd}", "cpp": kind == "cpp"})
                try:
                    code, calls, meta = translate(name, raw, externs, o_)
                except (Fail, ValueError, KeyError, AttributeError, IndexError, TypeError):
                    continue
                META[name] = meta
                funcs.append((name, code, calls))
            defs = {n for n, _, _ in funcs} | set(matched["c"]) | set(matched["cpp"])
            seen = {c: rt for d in matched.values() for _, _, cl in d.values() for c, rt in cl.items()}
            keep = []
            for f in funcs:
                if any(c in defs for c in f[2]) or any(seen.get(c, rt) != rt for c, rt in f[2].items()):
                    continue
                seen.update(f[2])
                keep.append(f)
            if not keep:
                continue
            tmpfile = ROOT / ("scratch/flow_perm.cpp" if kind == "cpp" else "scratch/flow_perm.c")
            keep = compile_ok(tmpfile, keep, externs, kind)
            CUR_OPTS[0] = None  # a seeded variant cannot be reproduced from options alone
            ok = check(tmpfile, {n: addr[n] for n, _, _ in keep})
            for f in keep:
                if f[0] in ok:
                    matched[kind][f[0]] = f
                    near.discard(f[0])
            got += len(ok)
        print(f"permute round {rnd + 1}/{rounds}: {got} new matches, {len(near)} near misses left", flush=True)
    # final files: re-verify everything together (a callee in the same file can change a caller)
    for kind, path in (("c", OUT), ("cpp", OUT_CPP)):
        final = [matched[kind][n] for n in sorted(matched[kind], key=lambda n: addr[n])]
        while True:
            final = compile_ok(path, final, externs, kind)
            ok = check(path, {n: addr[n] for n, _, _ in final})
            if len(ok) == len(final):
                break
            final = [f for f in final if f[0] in ok]
        print(f"{path.name}: {len(final)} functions")


if __name__ == "__main__":
    main()
