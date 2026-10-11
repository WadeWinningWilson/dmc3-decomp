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
import os
import random
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
# GEN_GCC=ee-gcc2.96 (say): the SDK/CRI/library code below the game, built with ee-gcc -O2 -G0
GCC = os.environ.get("GEN_GCC")
GCC_FLAGS = os.environ.get("GEN_GCC_FLAGS", "-O2 -G0")
# GEN_MWLIB=1: MW-built code in the library range (Capcom libraries, C runtime)
MWLIB = os.environ.get("GEN_MWLIB") and not GCC
# callers of functions defined in the same file: allowed (MW -O3,p and gcc -O2 do not inline or
# use the callee's register usage for global functions); GEN_STRICT_DEFS=1 restores the old rule
STRICT_DEFS = os.environ.get("GEN_STRICT_DEFS") is not None
# permutation seeds differ per run (runs accumulate matches), GEN_SALT pins them
SALT = os.environ.get("GEN_SALT") or os.urandom(4).hex()
SCR = "gflow" if GCC else ("mflow" if MWLIB else "flow")  # scratch prefix: runs can go side by side
if MWLIB:
    LO, HI = 0x100000, 0x195158
    OUT = ROOT / "src/lib/auto/flow_mw.c"
if GCC:
    LO, HI = 0x100000, 0x195158
    OUT = ROOT / os.environ.get("GEN_GCC_OUT", "src/lib/auto/flow_gcc.c")
CC = ("MWCIncludes=. wibo tools/compilers/mwcps2-3.0b52-030722/mwccps2.exe -c -O3,p "
      "-fl divbyzerocheck -inline depth=8 -nostdinc -Iinclude")

spec = importlib.util.spec_from_file_location("funcdiff", ROOT / "tools/funcdiff.py")
fd = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fd)

LOADS = {"lb": "signed char", "lbu": "unsigned char", "lh": "short", "lhu": "unsigned short",
         "lw": "int", "lwc1": "float"}
STORES = {"sb": "char", "sh": "short", "sw": "int", "swc1": "float"}
if GCC:
    LOADS["ld"], STORES["sd"] = "long", "long"  # ee-gcc: long is 64 bits
# 128-bit copies: an aligned 16-byte struct assignment is one lq/sq pair
LOADS["lq"], STORES["sq"] = "Q", "Q"
Q_DEF = "typedef struct { int w[4]; } __attribute__((aligned(16))) Q;"
ARGS = ["$a0", "$a1", "$a2", "$a3", "$t0", "$t1", "$t2", "$t3"]  # EABI: 8 integer argument registers
FARGS = ["$f12", "$f13", "$f14", "$f15"]
CFARGS = ["$f12", "$f13", "$f14", "$f15", "$f16", "$f17", "$f18", "$f19"]  # EABI float arguments
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
        mm = re.fullmatch(rf"({NUM}|%lo\([^)]*\))\((\$\w+)\)", a[1])
        return ({mm.group(2)} if mm else set()), {a[0]}
    if op in STORES:
        mm = re.fullmatch(rf"({NUM}|%lo\([^)]*\))\((\$\w+)\)", a[1])
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
    if op == "cvtu":
        return {a[1]}, {a[0]}
    if op == "jal":
        return set(ARGS) | set(CFARGS), {"$v0", "$f0"}
    if op == "jalr":
        return set(ARGS) | set(CFARGS) | {"$t9"}, {"$v0", "$f0"}
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


STORE_OPS = ("sb", "sh", "sw", "sd", "sq", "swc1", "sqc2", "swl", "swr", "sdl", "sdr")


MT_FN = "func_FFFFFFF0"  # stands for the inlined Mersenne-Twister draw (include/game/mt_rand.h)


def fold_mtrand(raw):
    """Replace each inlined mt_rand() block by a call `jal MT_FN` whose result lands in the
    block's output register; the unrelated instructions the scheduler mixed in are kept."""
    CALLEE = re.compile(r"\$(s[0-7]|fp|f2[0-9]|f3[01]|sp|zero|gp)$")
    raw = [(a_, fix_word(t_)) for a_, t_ in raw]
    if any(t_.startswith(".word") for _, t_ in raw):
        return raw
    while True:
        s = next((i for i, (_, t) in enumerate(raw) if t == "lui $at, %hi(D_01DF8810)" and any(
                  re.fullmatch(r"lw \$\w+, %lo\(D_01DF8810\)\(\$at\)", t2) for _, t2 in raw[i + 1:i + 24])
                  and not any(re.fullmatch(r"lui \$at, .*", t2) for _, t2 in raw[i + 1:i + 2])), None)
        if s is None:
            return raw
        # the block may start in a delay slot (the scheduler hoists its harmless `lui $at` there):
        # the slot becomes a nop and the call goes after it
        in_slot = s > 0 and re.match(r"(b\w*|j|jal|jalr|jr) ", raw[s - 1][1] + " ") is not None \
            and not raw[s - 1][1].startswith("break")
        mt, keep, out = set(), [], None
        idx = base = None
        e = None
        for j in range(s, min(len(raw), s + 80)):
            t = raw[j][1]
            op, a = split(t)
            rd, wr = regs_of(op, a)
            m_ = True
            if (t == "lui $at, %hi(D_01DF8810)" or re.fullmatch(r"(lw|sw) \$\w+, %lo\(D_01DF8810\)\(\$at\)", t)
                    or re.fullmatch(r"lui \$\w+, %hi\(D_01DF7E50\)", t) or t == "jal func_00207A90"
                    or re.fullmatch(r"addiu \$\w+, \$\w+, %lo\(D_01DF7E50\)", t)
                    or re.fullmatch(r"lui \$\w+, \((0x9D2C5680|0xEFC60000) >> 16\)", t)
                    or re.fullmatch(r"ori \$\w+, \$\w+, \(0x9D2C5680 & 0xFFFF\)", t)):
                if op == "lw":
                    idx = a[0]
                if op == "addiu":
                    base = a[0]
                if op == "sw" and a[0] not in mt:
                    m_ = False
            elif re.fullmatch(r"sltiu (\$\w+), \1, 0x270", t) or (op == "bnez" and a[0] in mt):
                pass
            elif op in ("addiu", "sll", "addu", "lw", "srl", "xor", "and") and rd and rd <= mt and (
                    op != "addiu" or a[2] == "0x1"):
                pass
            else:
                m_ = False
            if m_:
                mt |= wr
                if op == "jal":
                    mt -= {"$v0", "$f0"}
            else:
                if rd & mt and not (op == "jal"):
                    return raw  # a foreign instruction reads an intermediate value
                mt -= wr
                keep.append(raw[j])
            if op == "xor" and a[0] == a[1] and raw[j - 1][1] == f"srl {a[2]}, {a[0]}, 18":
                e, out = j, a[0]
                break
        if e is None:
            return raw
        window = {a_ for a_, _ in raw[s:e + 1]}
        for k, (_, t) in enumerate(raw):
            if s <= k <= e:
                continue
            for tg in re.findall(r"\.L([0-9A-F]{8})", t):
                if raw[s][0] < int(tg, 16) <= raw[e][0]:
                    return raw
        pos_ = {id(x): k for k, x in enumerate(raw)}

        def live_out(r, k0):
            """Is the value r gets at raw[k0] still read after the block (the call clobbers it)?"""
            for k, (_, t2) in enumerate(raw[k0 + 1:], k0 + 1):
                o2, a2 = split(t2)
                rd2, wr2 = regs_of(o2, a2)
                if k > e and r in rd2:
                    return True
                if r in wr2 or (k == e and r == out):
                    return False
            return r in ("$v0", "$f0")
        info = []
        for x in keep:
            o2, a2 = split(x[1])
            info.append(regs_of(o2, a2))
        is_after = [bool(wr2) and not all(CALLEE.search(r) for r in wr2) and any(live_out(r, pos_[id(x)]) for r in wr2)
                    for x, (rd2, wr2) in zip(keep, info)]
        changed = True
        while changed:  # what an `after` instruction reads from a foreign one moves after too
            changed = False
            for k, (rd2, wr2) in enumerate(info):
                if not is_after[k]:
                    continue
                for r in rd2:
                    if CALLEE.search(r):
                        continue
                    src_ = next((k2 for k2 in range(k - 1, -1, -1) if r in info[k2][1]), None)
                    if src_ is not None and not is_after[src_]:
                        is_after[src_] = changed = True
            for k, (rd2, wr2) in enumerate(info):  # and what reads an `after` result
                if not is_after[k] and any(is_after[k2] and info[k2][1] & rd2 for k2 in range(k)):
                    is_after[k] = changed = True
        before = [x for x, f_ in zip(keep, is_after) if not f_]
        after = [x for x, f_ in zip(keep, is_after) if f_]
        for k, (rd2, wr2) in enumerate(info):
            if not is_after[k]:
                continue
            for r in rd2 - {"$zero"}:
                if CALLEE.search(r):
                    continue
                src_ = next((k2 for k2 in range(k - 1, -1, -1) if r in info[k2][1]), None)
                if src_ is None or not is_after[src_]:
                    return raw  # would read a register the call clobbers
            if any(not is_after[k2] and info[k2][0] & wr2 for k2 in range(k + 1, len(keep))):
                return raw  # a `before` instruction needs this result
        new = [t for _, t in before] + [f"jal {MT_FN}", "nop", f"daddu {out}, $v0, $zero"] + [t for _, t in after]
        addrs = sorted(window)
        if in_slot:
            new = ["nop"] + new
        if len(new) > len(addrs):
            return raw
        addrs = ([addrs[0]] + addrs[len(addrs) - len(new) + 1:]) if in_slot else addrs[len(addrs) - len(new):]
        tail_ = raw[e + 1:]
        if out in ARGS:
            # the draw held in an argument register would read as an extra argument of the next
            # call: give it a free temporary until the register is written again
            used_ = {x for _, t2 in raw for x in re.findall(r"\$\w+", t2)}
            free_ = next((x for x in ("$t4", "$t5", "$t6", "$t7", "$t8") if x not in used_), None)
            if free_ is None:
                return raw
            new = [t2.replace(f"daddu {out}, $v0", f"daddu {free_}, $v0") for t2 in new]
            pat_ = re.compile(re.escape(out) + r"(?!\w)")
            for k, (a2_, t2) in enumerate(tail_):
                o2, a2 = split(t2)
                rd2, wr2 = regs_of(o2, a2)
                if out in rd2 and o2 not in ("jal", "jalr"):
                    if out in wr2:  # read and rewritten: rename only the sources
                        t2 = f"{o2} {a2[0]}, " + pat_.sub(free_, ", ".join(a2[1:]))
                    else:
                        t2 = pat_.sub(free_, t2)
                    tail_[k] = (a2_, t2)
                if out in wr2 or o2 in ("jal", "jalr", "jr"):
                    break
        raw = raw[:s] + list(zip(addrs, new)) + tail_


def mt_call(code):
    """`func_FFFFFFF0(...)` -> `mt_rand()`."""
    while (i := code.find(MT_FN + "(")) >= 0:
        k, d = i + len(MT_FN) + 1, 1
        while d:
            d += {"(": 1, ")": -1}.get(code[k], 0)
            k += 1
        code = code[:i] + "mt_rand()" + code[k:]
    return code



def dead_at(ins, addr, regs_, depth=0):
    """True when none of regs_ is read on the path from addr before being written
    (following unconditional branches; any other control flow counts as a read)."""
    idx = next((i for i, (a, _) in enumerate(ins) if a == addr), None)
    if idx is None or depth > 4:
        return False
    left = set(regs_)
    for k_ in range(idx, len(ins)):
        op, args = split(ins[k_][1])
        rd, wr = regs_of(op, args)
        if left & rd:
            return False
        if op in ("jr", "b"):
            if k_ + 1 < len(ins):
                dop_, da_ = split(ins[k_ + 1][1])
                drd, dwr = regs_of(dop_, da_)
                if left & drd:
                    return False  # read by the delay slot
                left -= dwr
            if not left:
                return True
            if op == "jr":
                return not (left & {"$v0", "$v1", "$f0"})
            m_ = re.search(r"\.L([0-9A-F]{8})", ins[k_][1])
            return bool(m_) and dead_at(ins, int(m_.group(1), 16), left, depth + 1)
        if re.match(r"(b\w*|j|jal|jalr)$", op):
            return False  # conservative: the path continues elsewhere
        left -= wr
        if not left:
            return True
    return False


def fold_cvtu(ins):
    """[(addr, text)] with MW's float -> unsigned int expansions replaced by `cvtu`."""
    out, i = [], 0
    texts = [t for _, t in ins]
    while i < len(ins):
        t = texts[i]
        # unsigned int -> float: bltz R, A / srl T, R, 1 / mtc1 R, F / b B / cvt.s.w F, F /
        # A: andi U, R, 1 / or T, T, U / mtc1 T, F / cvt.s.w F, F / add.s F, F, F / B:
        mu = re.fullmatch(r"bltz (\$\w+), \.L([0-9A-F]{8})", t)
        if mu and i + 4 < len(ins):
            r_, la = mu.group(1), int(mu.group(2), 16)
            ms = re.fullmatch(rf"srl (\$\w+), \{r_}, 1", texts[i + 1])
            mm = re.fullmatch(rf"mtc1 \{r_}, (\$f\d+)", texts[i + 2])
            mb = re.fullmatch(r"b \.L([0-9A-F]{8})", texts[i + 3])
            if ms and mm and mb and texts[i + 4] == f"cvt.s.w {mm.group(1)}, {mm.group(1)}" and \
                    i + 5 < len(ins) and ins[i + 5][0] == la:
                tq, fq, lb = ms.group(1), mm.group(1), int(mb.group(1), 16)
                rest = []
                k = i + 5
                while k < len(ins) and ins[k][0] != lb:
                    if texts[k] != "nop":
                        rest.append(texts[k])
                    k += 1
                mu2 = re.fullmatch(rf"andi (\$\w+), \{r_}, 0x1", rest[0]) if rest else None
                if mu2 and k < len(ins) and rest[1:] == [f"or {tq}, {tq}, {mu2.group(1)}", f"mtc1 {tq}, {fq}",
                                                          f"cvt.s.w {fq}, {fq}", f"add.s {fq}, {fq}, {fq}"] and \
                        sum(x.count(f".L{la:08X}") for x in texts) == 1 and \
                        sum(x.count(f".L{lb:08X}") for x in texts) == 1:
                    out.append((ins[i][0], f"cvtuf {fq}, {r_}"))
                    i = k
                    continue
        m = re.fullmatch(r"c\.le\.s (\$f\d+), (\$f\d+)", t)
        if m and i + 1 < len(ins) and texts[i + 1].startswith("bc1t .L"):
            fa, fb = m.groups()
            l1 = int(texts[i + 1][7:], 16)
            s0 = texts[i + 2] if i + 2 < len(ins) else "nop"  # bc1t slot: runs on both paths
            j = i + 3
            pat = []
            while j < len(ins) and len(pat) < 4:
                if texts[j] != "nop" or len(pat) == 3:
                    pat.append(j)
                j += 1
            # pat: cvt.w.s, mfc1, b .L2, slot
            ok = len(pat) == 4 and texts[pat[0]] == f"cvt.w.s {fb}, {fb}"
            md = re.fullmatch(rf"mfc1 (\$\w+), \{fb}", texts[pat[1]]) if ok else None
            mb = re.fullmatch(r"b \.L([0-9A-F]{8})", texts[pat[2]]) if md else None
            if mb and pat[3] + 1 < len(ins) and ins[pat[3] + 1][0] == l1 and                     not (s0 != "nop" and (regs_of(*split(s0))[1] & {md.group(1), fb} or fb in regs_of(*split(s0))[0])):
                d, l2, slot = md.group(1), int(mb.group(1), 16), texts[pat[3]]
                k = pat[3] + 1
                body = []
                while k < len(ins) and ins[k][0] != l2:
                    if texts[k] != "nop":
                        body.append(texts[k])
                    k += 1
                y = re.fullmatch(r"lui (\$\w+), \(0x80000000 >> 16\)", body[1]) if len(body) >= 5 else None
                want = [f"sub.s {fb}, {fb}, {fa}", None, f"cvt.w.s {fb}, {fb}", f"mfc1 {d}, {fb}",
                        f"or {d}, {d}, {y.group(1)}" if y else None]
                tail = body[5:]
                refs = sum(x.count(f".L{l1:08X}") for x in texts)
                if y and body[:1] + body[2:5] == [want[0]] + want[2:] and refs == 1 and \
                        tail in ([], [slot]) and (slot == "nop" or tail == [slot]) and k < len(ins):
                    # drop the 2^31 constant load feeding the compare when it is right before it
                    while out and out[-1][1] == "nop":
                        out.pop()
                    if out and re.fullmatch(rf"mtc1 \$\w+, \{fa}", out[-1][1]):
                        x_ = out[-1][1].split()[1].rstrip(",")
                        out.pop()
                        if out and out[-1][1] == f"lui {x_}, (0x4F000000 >> 16)":
                            out.pop()
                    if s0 != "nop":
                        out.append((ins[i + 2][0], s0))
                    out.append((ins[i][0] + 1, f"cvtu {d}, {fb}"))
                    if slot != "nop":
                        out.append((ins[pat[3]][0], slot))
                    i = k
                    continue
        out.append(ins[i])
        i += 1
    return out


def prepare(ins, sink=False):
    ins = fold_cvtu([(a, fix_word(t)) for a, t in ins])
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
    at_ = {a: t for a, t in ins}
    likely = []
    for j, (a, t) in enumerate(ins):
        mm = re.match(r"(beq|bne|blez|bgtz|bltz|bgez|beqz|bnez|bc1t|bc1f)l (.*)\.L([0-9A-F]{8})$", t)
        if not mm or j + 1 >= len(ins):
            continue
        tgt, d = int(mm.group(3), 16), ins[j + 1][1]
        if d == "nop":
            likely.append((j, f"{mm.group(1)} {mm.group(2)}.L{tgt:08X}", None))
        elif tgt - 4 == ins[j + 1][0]:
            # `bxxl past-the-slot`: the slot runs only when taken -> if (cond) { slot }
            inv = {"beq": "bne", "bne": "beq", "blez": "bgtz", "bgtz": "blez", "bltz": "bgez", "bgez": "bltz",
                   "beqz": "bnez", "bnez": "beqz", "bc1t": "bc1f", "bc1f": "bc1t"}[mm.group(1)]
            likely.append((j, f"{inv} {mm.group(2)}.L{tgt:08X}", "SKIP"))
        elif at_.get(tgt - 4) == d:
            # `bxxl L+4` with the instruction at L in its slot is a plain branch to L
            likely.append((j, f"{mm.group(1)} {mm.group(2)}.L{tgt - 4:08X}", "nop"))
        elif j + 2 < len(ins):
            # general case: if (cond) { slot; goto L; } -> branch over the slot, then jump
            inv = {"beq": "bne", "bne": "beq", "blez": "bgtz", "bgtz": "blez", "bltz": "bgez", "bgez": "bltz",
                   "beqz": "bnez", "bnez": "beqz", "bc1t": "bc1f", "bc1f": "bc1t"}[mm.group(1)]
            likely.append((j, f"{inv} {mm.group(2)}.L{ins[j + 2][0]:08X}", ("GEN", tgt)))
        else:
            raise Fail
    for j, t, d in reversed(likely):
        ins[j] = (ins[j][0], t)
        if d == "SKIP":
            ins.insert(j + 1, (ins[j][0] + 2, "nop"))  # a fresh (empty) delay slot
        elif isinstance(d, tuple):
            daddr_ = ins[j + 1][0]
            ins[j + 2:j + 2] = [(daddr_ + 1, f"b .L{d[1]:08X}"), (daddr_ + 2, "nop")]
            ins.insert(j + 1, (ins[j][0] + 2, "nop"))
        elif d:
            ins[j + 1] = (ins[j + 1][0], d)
    targets = {int(t, 16) for _, t in ins for t in re.findall(r"\.L([0-9A-F]{8})", t)}
    seq = []
    later_ = {}
    i = 0
    while i < len(ins):
        addr, t = ins[i]
        if addr in later_:
            seq.append((addr, later_.pop(addr)))
        op, a = split(t)
        if re.match(r"(b\w*|j|jal|jalr|jr)$", op) and op != "break":
            if op.endswith("l") and op not in ("jal",) and op.startswith("b"):
                raise Fail  # branch-likely: delay slot is nullified
            if i + 1 >= len(ins):
                raise Fail
            daddr, d = ins[i + 1]
            dop, da = split(d)
            tgt_ = re.search(r"\.L([0-9A-F]{8})", t)
            tgt_ = int(tgt_.group(1), 16) if tgt_ else None
            if sink and d != "nop" and op not in ("b", "j", "jal", "jalr", "jr") and dop not in STORE_OPS                     and regs_of(dop, da)[1] and daddr not in targets and tgt_ is not None and tgt_ > daddr                     and not (regs_of(dop, da)[1] & regs_of(dop, da)[0]) and i + 2 < len(ins)                     and sum(t2.count(f".L{tgt_:08X}") for _, t2 in ins) == 1                     and dead_at(ins, ins[i + 2][0], regs_of(dop, da)[1]):
                ti_ = next((x for x, (a2, _) in enumerate(ins) if a2 == tgt_), None)
                if ti_ is not None and ti_ >= 2 and re.match(r"(b|j|jr)\b", ins[ti_ - 2][1])                         and not ins[ti_ - 2][1].startswith(("beq", "bne", "bgez", "bgtz", "blez", "bltz", "bc1")):
                    # filled from the branch target (nothing else reaches it): the value is
                    # computed at the start of the taken path in the source
                    later_[tgt_] = d
                    seq.append((addr, t))
                    i += 2
                    continue
            if d != "nop" and op not in ("b", "j", "jal", "jalr", "jr") and regs_of(dop, da)[1] & regs_of(op, a)[0]:
                # the delay slot overwrites a register the branch reads: the branch sees the
                # old value, so the slot runs after the condition (kept on the branch line)
                seq.append((addr, f"{t} || {d}"))
            elif sink and d != "nop" and op not in ("b", "j", "jal", "jalr", "jr") and dop not in STORE_OPS                     and regs_of(dop, da)[1] and daddr not in targets and not (regs_of(dop, da)[1] & regs_of(dop, da)[0])                     and dead_at(ins, int(re.search(r"\.L([0-9A-F]{8})", t).group(1), 16), regs_of(dop, da)[1]):
                # MW fills a delay slot from the fall-through path: the value is dead where the
                # branch goes, so in the source it belongs after the test
                seq.append((addr, t))
                seq.append((daddr, d))
                i += 2
                continue
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
    # `jr $t9` = a virtual call in tail position: return obj->m(...)
    seq = [y for a_, t_ in seq for y in ([(a_, "jalr $t9"), (a_ + 1, "jr $ra")] if t_ == "jr $t9" else [(a_, t_)])]
    frame = re.compile(r"addiu \$sp, \$sp, -?0x[0-9A-F]+|(sd|ld) \$ra, 0x[0-9A-F]+\(\$sp\)|"
                       r"(sq|lq|sd|ld) \$(s[0-7]|fp), 0x[0-9A-F]+\(\$sp\)|(swc1|lwc1) \$f(2[0-9]|3[01]), 0x[0-9A-F]+\(\$sp\)")
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
        if GCC:
            # GCC: locals at the bottom of the frame, register saves above them
            starts = [num(m.group(2)) for _, t in seq
                      for m in [re.fullmatch(r"(sd|sq|swc1) \$\w+, (0x[0-9A-F]+)\(\$sp\)", t)] if m and frame.fullmatch(t)]
            top = min(starts, default=fsz[0])
            if min(offs) < 0 or max(offs) >= top or any(re.match(r"(addiu|daddu|addu) \$sp", t) for _, t in out):
                raise Fail
            STACK = (0, top)
        else:
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



def mutate(code, rng):
    """One random source-level mutation of a generated function."""
    lines = code.split("\n")
    decl = [i for i, l in enumerate(lines) if re.fullmatch(r"    [\w ]+\*? (?:v|tmp)\d+;", l)]
    body = [i for i in range(1, len(lines) - 1) if i not in decl and not lines[i].startswith("    char stk[")]
    kind = rng.choice(["decl", "comm", "comm", "stmt"])
    if kind == "decl" and len(decl) >= 2:
        i, j = rng.sample(decl, 2)
        lines[i], lines[j] = lines[j], lines[i]
        return "\n".join(lines)
    if kind == "stmt" and body:
        new = reorder([lines[i] for i in body], rng, rate=0.3)
        for i, l in zip(body, new):
            lines[i] = l
        return "\n".join(lines)
    # commutative operands of one parenthesised expression
    spots = []
    for li in body:
        l = lines[li]
        for st in [m.start() for m in re.finditer(r"\(", l)]:
            depth = 0
            for en in range(st, len(l)):
                depth += l[en] == "("
                depth -= l[en] == ")"
                if depth == 0:
                    break
            sub = l[st:en + 1]
            for op in ("+", "*", "&", "|", "^", "==", "!=", "<", ">"):
                sp = top_split(sub, op)
                if sp and not sp[0].startswith(("char", "int", "float", "unsigned", "signed", "short", "Q")):
                    spots.append((li, st, en, sp, op))
                    break
    if not spots:
        return code
    li, st, en, (a_, b_), op = rng.choice(spots)
    nop = {"<": ">", ">": "<"}.get(op, op)
    l = lines[li]
    lines[li] = l[:st] + f"({b_} {nop} {a_})" + l[en + 1:]
    return "\n".join(lines)


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


def top_plus(e):
    """True when e is (a + b) with the + at its top level."""
    depth = 0
    for i, ch in enumerate(e[1:-1], 1):
        depth += ch == "("
        depth -= ch == ")"
        if depth < 0:
            return False
        if depth == 0 and e.startswith(" + ", i):
            return True
    return False


def top_split(e, op):
    """(a, b) when e is (a <op> b) with the operator at its top level, else None."""
    if not (e.startswith("(") and e.endswith(")")):
        return None
    depth = 0
    for i, ch in enumerate(e[1:-1], 1):
        depth += ch == "("
        depth -= ch == ")"
        if depth < 0:
            return None
        if depth == 0 and e.startswith(f" {op} ", i):
            return e[1:i], e[i + len(op) + 2:-1]
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
    seq, _, _ = prepare(raw, opts.get("sink") if rng is None else coin(0.3))
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

    pre_while = {}  # block that jumps to a while loop's test -> loop head
    for h, (L, kind) in list(loops.items()):
        A = h - 1
        if kind == "dowhile" and A >= 0 and L > h and term[A] == ("goto",) and succ[A] == [L] and \
                (opts.get("whiles", True) if rng is None else coin(0.8)):
            loops[h] = (L, "while")
            pre_while[A] = h
    latch_of = {L: h for h, (L, _) in loops.items()}
    exit_of = {}
    for h, (L, kind) in loops.items():
        if kind in ("dowhile", "while"):
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
            if any(h < s2 <= L for s2 in succ[k2]) and not (pre_while.get(k2) == h and succ[k2] == [L]):
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
    useall = {}           # the same before clobber filtering
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
                useall[(k, pos, r)] = ds
                if any(d[0] == "clobber" for d in ds) and any(isinstance(d[0], int) for d in ds):
                    # garbage on some path (a call clobbered it): do not merge the real
                    # definitions into a clobber web, which would leave them without a variable
                    ds = [d for d in ds if d[0] == "clobber"] or ds
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
            elif op == "lui" and len(a) == 2 and re.fullmatch(r"0x[0-9A-F]+|\d+|\(0x[0-9A-F]+ >> 16\)", a[1]):
                mm_ = re.fullmatch(r"\((0x[0-9A-F]+) >> 16\)", a[1])
                val_ = f"{((int(mm_.group(1), 16) >> 16) if mm_ else num(a[1])) << 16 & 0xFFFFFFFF:#x}"
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

    uses_of = {}
    for (k_, p_, r_), ds_ in useweb.items():
        for d_ in ds_:
            uses_of.setdefault(d_, []).append((k_, p_))

    def call_only(d):
        """True when every reader of definition d is a call (it is then an argument)."""
        for k_, p_ in uses_of.get(d, []):
            body_ = bseq(k_)[0]
            if p_ >= len(body_) or body_[p_][0] not in ("jal", "jalr"):
                return False
        return True

    def fargcount(written, at):
        got = {r for r in written if r in CFARGS}
        for r_ in CFARGS:
            all_ = useweb.get((at[0], at[1], r_), [])
            if all_ and all(isinstance(d_[0], int) for d_ in all_):  # garbage on some path: no arg
                got.add(r_)
        n_ = 0
        while n_ < len(CFARGS) and CFARGS[n_] in got:
            n_ += 1
        return n_

    def argcount(written, at):
        """Arguments of a call: registers written in this block or set in an earlier one
        (reaching definitions), $t0-$t3 only after all of $a0-$a3."""
        got = {r for r in written if r in ARGS}
        strict_ = opts.get("argstrict") if rng is None else coin(0.3)
        for r_ in ARGS:
            ds_ = [d_ for d_ in useweb.get((at[0], at[1], r_), []) if isinstance(d_[0], int)]
            if len(ds_) != len(useweb.get((at[0], at[1], r_), [])):
                ds_ = []  # a call clobbers (or the entry value reaches) it on some path
            if ds_ and strict_ and any(not call_only(d_) for d_ in ds_):
                continue  # the value is also read by something else (e.g. a switch test)
            if ds_:
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
        name_ = f"V{slot:X}_{len(sig)}_" + "".join({"char *": "p", "float": "f", "unsigned char": "h", "signed char": "c", "short": "s",
                                         "unsigned short": "t"}.get(x, "i") for x in sig) + \
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
        lastlit = {}  # register -> integer literal it was last set to in this block
        for r, w in inweb[k].items():
            regs[r], types[r] = webvar[w], webtype[w]
        for r, c_ in inconst[k].items():
            regs[r], types[r] = c_, "int"
        cur = [0]

        def hi_reaches(r, sym):
            """Every definition of r reaching here is `lui r, %hi(sym)` (e.g. from a delay slot)."""
            ds_ = [d_ for d_ in useall.get((k, cur[0], r), []) if d_[0] != "clobber"]
            return bool(ds_) and all(
                isinstance(d_[0], int) and d_[1] < len(bseq(d_[0])[0]) and
                bseq(d_[0])[0][d_[1]] == ("lui", [r, f"%hi({sym})"]) for d_ in ds_)

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
            locs.append(f"{'int' if t in ('fint', 'fbits', 'hi') else t} {nm};")
            stmts.append(f"{nm} = {e};")
            return nm

        def flush():
            for r in sorted(memdep):
                if regs[r] not in varnames:
                    regs[r] = tmp(types[r], regs[r])
            memdep.clear()

        def define(r, e, t, mem=False):
            if re.fullmatch(r"-?\d+|0x[0-9a-f]+", e):
                lastlit[r] = e
            else:
                lastlit.pop(r, None)
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
                big = re.fullmatch(r"\((.+) \+ (0x[0-9a-f]+0000)\)", be) if mm.group(2) == "$at" else None
                if big and top_plus(be):
                    # assembler macro for an offset beyond 16 bits: lui $at; addu $at, base, $at
                    be, off_ = big.group(1), off_ + int(big.group(2), 16)
                sp_ = top_split(be, "+")
                if sp_ and (opts.get("arr") if rng is None else coin(0.3)):
                    for ia_, ib_ in ((0, 1), (1, 0)):
                        mf_ = mul_form(sp_[ia_])
                        if mf_ and mf_[1] > 1 and not re.fullmatch(r"\d+", mf_[0]):
                            # an array of K-byte elements: MW adds the index first
                            return f"*({t} *)((char (*)[{mf_[1]}])((char *){sp_[ib_]} + {off_}))[{mf_[0]}]"
                if bt != "char *":
                    if not (opts.get("intbase") if rng is None else coin()) and not re.fullmatch(r"0x[0-9a-f]+", be):
                        raise Fail
                    if re.fullmatch(r"0x[0-9a-f]+", be):
                        return f"*({t} *){(int(be, 16) + off_) & 0xFFFFFFFF:#x}"
                    be = f"(char *){be}"
                return f"*({t} *)({be} + {off_})"
            mm = re.fullmatch(r"%lo\((D_[0-9A-F]{8})\)\((\$\w+)\)", arg)
            if mm and (regs.get(mm.group(2)) == mm.group(1) and types.get(mm.group(2)) == "hi" or
                       hi_reaches(mm.group(2), mm.group(1))):
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
                  if GCC:
                      raise Fail  # GNU as wants a different VU0 macro syntax
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
                      if len(operands) > 1 and (opts.get("asmrev") if rng is None else coin(0.5)):
                          # MW computes asm inputs in reverse: list them the other way round
                          nn_ = len(operands)
                          text = [re.sub(r"%(\d+)", lambda m_: f"%{nn_ - 1 - int(m_.group(1))}", x_) for x_ in text]
                          operands = operands[::-1]
                      ops_ = ", ".join(f'"r"({e})' for e in operands)
                      stmts.append('__asm__ volatile("' + "\\n\\t".join(text) + f'" : : {ops_} : "memory");')
                      st["vu"] = []
                  continue
              if op in ("jal", "jalr"):
                  nargs = argcount(written, (k, cur[0]))
                  nfargs = fargcount(written, (k, cur[0]))
                  fptr = None
                  if op == "jalr" and not (a == ["$t9"] and types.get("$t9") == "vslot"):
                      # a C function pointer: ((RT (*)(args))expr)(args)
                      if len(a) != 1 or a[0] in ARGS[:nargs]:
                          raise Fail
                      fptr = val(a[0])[0]
                      cv = [val(ARGS[i]) for i in range(nargs)]
                      fn = None
                  elif op == "jalr":
                      obj, slot = regs["$t9"].rsplit("|", 1)
                      slot = int(slot)
                      this, tt_ = val("$a0")
                      if this.replace("(char *)", "") != obj.replace("(char *)", "") or slot < 8 or slot % 4:
                          raise Fail
                      nargs = max(nargs, 1)
                      cv = [val(ARGS[i]) for i in range(1, nargs)]
                      fn = None
                  else:
                      fn = a[0]
                      if not re.fullmatch(r"func_[0-9A-F]{8}", fn):
                          raise Fail
                      cv = [val(ARGS[i]) for i in range(nargs)]
                  cv = cv + [val(CFARGS[i]) for i in range(nfargs)]
                  cargs = [e for e, _ in cv]
                  sig = tuple("char *" if t_ == "char *" else ("float" if t_ == "float" else "int") for _, t_ in cv)
                  if (opts.get("narrow") if rng is None else coin(0.3)):
                      # a directly loaded byte/halfword argument: the parameter has that type
                      # (MW orders the argument loads by parameter type)
                      sig = tuple(mm_.group(1) if (mm_ := re.match(
                          r"\*\((unsigned char|signed char|short|unsigned short) \*\)", e_)) and t_ == "int" else t_
                          for e_, t_ in zip(cargs, sig))
                  flush()
                  if fptr is not None:
                      call = f"((FPRT (*)({', '.join(sig) or 'void'})){fptr})({', '.join(cargs)})"
                  elif op == "jalr":
                      vkey = (slot, sig)
                      call = f"(({{VCLS:{slot}:{'/'.join(sig)}:RT}} *){this})->m({', '.join(cargs)})"
                  else:
                      call = f"{fn}({', '.join(cargs)})"
                      if opts.get("cpp") and callsig.get(fn, sig) != sig:
                          callsig[fn] = ("...",)  # called two ways: declared variadic
                      elif callsig.get(fn) != ("...",):
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
                  if fptr is not None:
                      for i_, x_ in enumerate(stmts):
                          stmts[i_] = x_.replace("FPRT (*)", f"{rt} (*)")
                      for r_ in list(regs):
                          regs[r_] = regs[r_].replace("FPRT (*)", f"{rt} (*)")
                      continue
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
              if op == "lw" and a[0] == "$t9" and opts.get("cpp"):
                  mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", a[1])
                  if not mm:
                      raise Fail
                  off, vbase = num(mm.group(1)), mm.group(2)
                  if vbase == "$t9" and types.get("$t9") == "vptr":
                      regs["$t9"], types["$t9"] = f"{regs['$t9']}|{off}", "vslot"
                  elif vbase != "$t9":
                      obj, ot = val(vbase)
                      if ot != "char *":
                          if ot != "int":
                              raise Fail
                          obj = f"(char *){obj}"
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
                  if re.fullmatch(r"\d+", ve) and (op == "sb" and 128 <= int(ve) <= 255 or
                                                   op == "sh" and 32768 <= int(ve) <= 65535):
                      tt = "unsigned " + tt  # MW's char is signed: 128 would load as -128
                  if vt == "char *" and tt != "char *":
                      ve = f"(int){ve}"
                  lv = lvalue(a[1], tt)
                  flush()
                  cop_ = None
                  if opts.get("compound") if rng is None else coin(0.3):
                      for o_ in ("+", "-", "*", "/", "&", "|", "^", "<<", ">>"):
                          sp_ = top_split(ve, o_)
                          if sp_ and sp_[0] == lv:
                              cop_ = (o_, sp_[1])
                              break
                  if cop_:
                      stmts.append(f"{lv} {cop_[0]}= {cop_[1]};")
                  else:
                      stmts.append(f"{lv} = {ve};")
                  if st.get("fcmp") and (opts.get("fwd") if rng is None else coin(0.3)) and tt == "float":
                      # x -= y; if (x < 0): the test reads the stored field
                      fx_, fo_, fy_ = st["fcmp"]
                      st["fcmp"] = (lv if fx_ == ve else fx_, fo_, lv if fy_ == ve else fy_)
                  if (opts.get("fwd") if rng is None else coin(0.3)) and tt in ("int", "float") and \
                          vt == tt and a[0] in regs and regs[a[0]] == ve and re.search(r" [-+*/&|^] ", ve) and \
                          re.match(r"\$(v[01]|a[0-3]|t\d|f\d+)$", a[0]) and defweb(k, cur[0], a[0]) not in webvar:
                      # the stored field, not a recomputation, is what the source reads next
                      regs[a[0]] = lv
                      memdep.add(a[0])
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
                  elif a[0] == "$at" and op in ("slti", "sltiu") and \
                          (opts.get("le", True) if rng is None else coin(0.7)):
                      # MW computes `x <= K` into $at (a branch macro); `x < K+1` uses a real register
                      e = (f"((unsigned int){x} <= (unsigned int){int(y) - 1})" if op == "sltiu"
                           else f"({x} <= {int(y) - 1})")
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
              elif op == "mtc1" and a[0] in lastlit and not re.fullmatch(r"0|0x[0-9a-f]+", val(a[0])[0])                       and re.fullmatch(r"0x[0-9a-f]+", lastlit[a[0]]):
                  # a float constant built in a variable register: the literal is what the source has
                  f = struct.unpack("<f", struct.pack("<I", int(lastlit[a[0]], 16)))[0]
                  define(a[1], repr(float(f)) + "f", "float")
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
              elif op == "cvtu":
                  x, _ = val(a[1])
                  define(a[0], f"(unsigned int){x}", "int", a[1] in memdep)
              elif op == "cvtuf":
                  x, _ = ival(a[1])
                  define(a[0], f"(float)(unsigned int){x}", "float", a[1] in memdep)
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
            if o == "==" and (opts.get("negcmp", True) if rng is None else coin(0.8)):
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
        smin = 2 if (opts.get("sw2") if rng is None else coin(0.3)) else SWITCH_MIN
        if len(chain) < smin or not (opts.get("new") if rng is None else use_switch):
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
            if last == "return;" and (j == EXIT or (j < n and term[j] == ("ret",) and len(bl[j][1]) == 1)) \
                    and (opts.get("brk", True) if rng is None else coin(0.7)):
                out[-1] = ind + "    break;"  # nothing follows the switch: `break` is the source form
                last = "break;"
            if not last.startswith("return") and last != "break;":
                out.append(ind + "    break;" if not reaches(t_, nxt) else ind + "    /* fall through */")
        out.append(ind + "}")
        # `default: break;` adds nothing: drop it
        for i_ in range(len(out) - 2, 0, -1):
            if out[i_].strip() == "default:" and out[i_ + 1].strip() == "break;" and out[i_].startswith(ind) \
                    and not out[i_ - 1].strip().startswith("case "):
                del out[i_:i_ + 2]
                break
            if out[i_].strip().startswith(f"switch ({x0})"):
                break

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
                if kind == "while":
                    stmts, cond, ret = block_code(L)
                    if stmts:
                        raise Fail  # the test must be a pure expression
                    out.append(ind + f"while ({cstr(cond, False)}) {{")
                    emit(k, L, ind + "    ", inner, active | {k})
                    out.append(ind + "}")
                    k = X
                    continue
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
                nk = pre_while.get(k, succ[k][0])
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
    if not rets and any(term[k_][0] == "tail" for k_ in range(n)):
        rets = [None]  # every exit is a tail call: a void function
    if not rets:
        raise Fail
    rtype = "void"
    void_ = ret_is_temp and (opts.get("new") if rng is None else coin())
    # a returned variable that is never assigned: the source function returns nothing
    if rets and all(r is not None for r in rets) and any(
            re.fullmatch(r"(?:v|tmp)\d+", r) and not any(re.match(rf"\s*{r} = ", l) for l in out) for r in rets):
        void_ = True
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
    if rtype != "void" and (opts.get("early") if rng is None else coin(0.3)):
        # v = K; if (C) { v = E; } return v;  ->  if (C) { return E; } return K;
        i = 0
        while i + 4 < len(out):
            m1 = re.fullmatch(r"(\s*)(v\d+) = (.+);", out[i])
            if m1:
                ind_, v_, k_ = m1.groups()
                m2 = re.fullmatch(re.escape(ind_) + r"if \((.+)\) \{", out[i + 1])
                m3 = re.fullmatch(re.escape(ind_) + "    " + v_ + r" = (.+);", out[i + 2])
                if m2 and m3 and out[i + 3] == ind_ + "}" and out[i + 4] == f"{ind_}return {v_};" and                         not re.search(rf"\b{v_}\b", m2.group(1) + m3.group(1) + k_):
                    out[i:i + 5] = [out[i + 1], f"{ind_}    return {m3.group(1)};", ind_ + "}", f"{ind_}return {k_};"]
            i += 1
        # v = E; *(int *)X = v; return v;  ->  return *(int *)X = E;
        i = 0
        while i + 2 < len(out):
            m1 = re.fullmatch(r"(\s*)((?:v|tmp)\d+) = (.+);", out[i])
            if m1:
                ind_, v_, e_ = m1.groups()
                m2 = re.fullmatch(re.escape(ind_) + r"(\*\((?:int|char) \*\*?\)\(.+\)) = " + v_ + ";", out[i + 1])
                if m2 and out[i + 2] == f"{ind_}return {v_};" and not re.search(rf"\b{v_}\b", m2.group(1) + e_):
                    out[i:i + 3] = [f"{ind_}return {m2.group(1)} = {e_};"]
            i += 1
    decl = [f"    {'int' if vtype[v] in ('fint', 'fbits', 'hi') else vtype[v]} {v};" for w, v in sorted(webvar.items(), key=lambda x: x[1])
            if not re.fullmatch(r"[pf]\d", v)]
    if rng is not None and coin(0.7):
        rng.shuffle(decl)  # MW's register allocation follows declaration order
    elif "declorder" in opts:
        # an explicit order (hill climbing over declaration orders): names first, others after
        order_ = {v_: i_ for i_, v_ in enumerate(opts["declorder"])}
        decl.sort(key=lambda d_: order_.get(d_.rstrip(";").split()[-1], len(order_)))
    elif "declseed" in opts:
        random.Random(opts["declseed"]).shuffle(decl)  # only the declaration order varies
    if rng is not None and coin(0.6):
        out = reorder(out, rng)
    if rng is not None and coin(0.4):
        out = ternaries(out, rng)
    if stack:
        decl = [f"    char stk[{stack[1]:#x}] __attribute__((aligned(16)));"] + decl
    text_ = "\n".join(decl + locs + out)
    used_ = lambda x: re.search(rf"\b{x.split()[-1].lstrip('*')}\b", text_)
    ip_ = [x for x in plist if not x.startswith("float ")]
    fp_ = [x for x in plist if x.startswith("float ")]
    while ip_ and not used_(ip_[-1]):
        ip_.pop()
    while fp_ and not used_(fp_[-1]):
        fp_.pop()
    if not opts.get("cpp") and not fp_:
        # K&R definition: no prototype, so same-file callers with other argument counts compile
        names_ = ", ".join(x.split()[-1].lstrip("*") for x in ip_)
        kr_ = "".join(f" {x};" for x in ip_)
        head_ = f"{rtype} {name}({names_}){kr_} {{"
    else:
        head_ = f"{rtype} {name}({', '.join(ip_ + fp_) or 'void'}) {{"
    lines = [head_] + decl + [f"    {l}" for l in locs] + out + ["}"]
    externs.update(local_ext)
    code = "\n".join(lines).replace("char * ", "char *")
    if MT_FN in calls:
        code = mt_call(code)
        calls = {c: r for c, r in calls.items() if c != MT_FN}
    return code, calls, {"callsig": callsig, "vclasses": vclasses}


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
            LAST_SCORE[n] = sc
            if sc > SCORES.get(n, -1.0):
                SCORES[n] = sc
                if CUR_OPTS[0] is not None:
                    BEST_OPTS[n] = CUR_OPTS[0]
    return ok


SCORES = {}  # best instruction-match ratio seen per function
BEST_OPTS = {}  # the translation options that scored it
LAST_SCORE = {}  # ratio of the most recent check of each function
DECL = {}  # function -> (best declaration order, its ratio) for hill climbing
BEST_CODE = {}  # function -> ((name, code, calls), ratio, meta) of its best variant
PREV = {}  # functions kept from earlier output files
DROPPED = [0]  # candidates removed by compile errors
CUR_OPTS = [{}]


def write(path, funcs, externs):
    # functions defined here: a void definition whose result a caller uses becomes that type
    # (C accepts `return;` in it), and every prototype follows the definition
    want = {}
    for _, _, c in funcs:
        for fn, rt in c.items():
            if rt != "void":
                want.setdefault(fn, rt)
    fixed, drt, fparams = [], {}, {}
    for name, code, c in funcs:
        m = re.match(r"(void|int|float|char \*) ?func_", code)
        rt = m.group(1) if m else None
        if rt == "void" and name in want:
            code = want[name] + (" " if not want[name].endswith("*") else "") + code[len("void "):]
            rt = want[name]
        if rt:
            drt[name] = rt
        hm_ = re.match(r"[\w *]*?func_[0-9A-F]{8}\(([^)]*)\) \{", code)
        if hm_ and "float" in hm_.group(1):
            fparams[name] = hm_.group(1)  # a prototyped definition: declare it the same way
        fixed.append((name, code, c))
    funcs = [(n, code, {fn: drt.get(fn, rt) for fn, rt in c.items()}) for n, code, c in fixed]
    used = {s for _, code, _ in funcs for s in re.findall(r"\bD_[0-9A-F]{8}\b", code)}
    decl = [externs[s] for s in sorted(used)]
    protos = {}
    for _, _, c in funcs:
        for fn, rt in c.items():
            protos.setdefault(fn, rt)
    # a callee taking floats needs a prototype (unprototyped calls promote float to double)
    fsig, allsig = {}, {}
    for name, _, c in funcs:
        for fn in c:
            sig = META.get(name, {}).get("callsig", {}).get(fn)
            allsig.setdefault(fn, set()).add(sig)
            if sig and any(x in ("float", "unsigned char", "signed char", "short", "unsigned short") for x in sig):
                fsig.setdefault(fn, sig)
    # a typed prototype only when every caller here agrees (else calls fail to compile one by one)
    fsig = {fn: sg for fn, sg in fsig.items() if len(allsig[fn]) == 1}
    decl += [(f"{rt} {fn}({fparams[fn]});" if fn in fparams else
              f"{rt} {fn}({', '.join(fsig[fn])});" if fn in fsig else f"{rt} {fn}();").replace("* ", "*")
             for fn, rt in sorted(protos.items())]
    if any("(Q *)" in c for _, c, _ in funcs):
        decl.insert(0, Q_DEF)
    hdr = ("/* AUTO-GENERATED by tools/gen_flow.py: small functions with forward branches, translated\n"
           " * from the original asm and verified byte-for-byte (only matches are kept). Types are\n"
           " * offset-based placeholders; move functions to their real TUs as they are identified. */\n")
    if GCC:
        hdr = f"// cc: {GCC} {GCC_FLAGS}\n" + hdr.replace("small functions", "library functions")
    if any("mt_rand()" in c for _, c, _ in funcs):
        decl.insert(0, '#include "game/mt_rand.h"\n')
    path.write_text(hdr + "\n".join(decl) + "\n\n" + "\n\n".join(c for _, c, _ in funcs) + "\n")


def write_cpp(path, funcs, externs):
    """C++ file: extern "C" declarations, synthetic classes for virtual calls, definitions."""
    used = {s for _, code, _ in funcs for s in re.findall(r"\bD_[0-9A-F]{8}\b", code)}
    protos, classes, sigs = {}, {}, {}
    defined = {n for n, _, _ in funcs}
    for name, _, calls in funcs:
        meta = META[name]
        for fn, rt in calls.items():
            sg = meta["callsig"].get(fn, ())
            protos[fn] = (rt if protos.get(fn, ("void",))[0] == "void" else protos[fn][0], sg)
            sigs.setdefault(fn, set()).add(sg)
        classes.update(meta["vclasses"])
    for fn, ss in sigs.items():
        # callers disagree on the parameters (extern "C" cannot overload): a variadic
        # declaration takes them all and the call code is the same for integer arguments
        if len(ss) > 1 and fn not in defined and not any("float" in x for sg in ss for x in sg):
            protos[fn] = (protos[fn][0], ("...",))
    out = [CPP_HDR] + ([Q_DEF] if any("(Q *)" in c for _, c, _ in funcs) else []) + \
        (['#include "game/mt_rand.h"'] if any("mt_rand()" in c for _, c, _ in funcs) else []) + ['extern "C" {']
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
OPTIONS_ALL = [({}, "c"), ({"coalesce": True}, "c"), ({"new": True}, "c"), ({"new": True, "intbase": True}, "c"),
           ({"cpp": True}, "cpp"), ({"cpp": True, "coalesce": True}, "cpp"), ({"cpp": True, "new": True}, "cpp"), ({"cpp": True, "new": True, "intbase": True}, "cpp"),
           ({"new": True, "intbase": True, "early": True}, "c"), ({"new": True, "intbase": True, "early": True, "arr": True}, "c"),
           ({"new": True, "intbase": True, "early": True, "sink": True, "sw2": True}, "c"),
           ({"cpp": True, "new": True, "early": True, "sink": True, "sw2": True}, "cpp"),
           ({"new": True, "intbase": True, "early": True, "sink": True, "arr": True, "sw2": True}, "c"),
           ({"cpp": True, "new": True, "intbase": True, "early": True, "sink": True, "arr": True, "sw2": True}, "cpp"),
           ({"new": True, "intbase": True, "early": True, "sink": True, "sw2": True, "fwd": True, "compound": True}, "c"),
           ({"cpp": True, "new": True, "early": True, "sink": True, "sw2": True, "fwd": True, "compound": True}, "cpp"),
           ({"cpp": True, "new": True, "early": True, "sink": True, "sw2": True, "argstrict": True}, "cpp"),
           ({"new": True, "intbase": True, "early": True, "sink": True, "sw2": True, "negcmp": True}, "c"),
           ({"cpp": True, "new": True, "early": True, "sink": True, "sw2": True, "negcmp": True}, "cpp"),
           ({"cpp": True, "new": True, "early": True, "sink": True, "sw2": True, "narrow": True}, "cpp"),
           ({"new": True, "intbase": True, "early": True, "sink": True, "sw2": True, "narrow": True}, "c"),
           ({"new": True, "intbase": True, "early": True, "sink": True, "sw2": True, "asmrev": True}, "c"),
           ({"cpp": True, "new": True, "early": True, "sink": True, "sw2": True, "asmrev": True}, "cpp"),
           ({"new": True, "intbase": True, "early": True, "sink": True, "sw2": True, "rev": True}, "c"),
           ({"cpp": True, "new": True, "early": True, "sink": True, "sw2": True, "rev": True}, "cpp"), ({"cpp": True, "new": True, "early": True}, "cpp")]
# "new": switch statements, float returns, constant literals across blocks, char-typed daddiu
# GEN_PASSES=i,j,...: run only those passes (diagnosis)
OPTIONS = [OPTIONS_ALL[int(i)] for i in os.environ["GEN_PASSES"].split(",")] if os.environ.get("GEN_PASSES") else OPTIONS_ALL
OUT_CPP = ROOT / ("src/lib/auto/flow_mw_v.cpp" if MWLIB else "src/game/auto/flow_v.cpp")
META = {}


def compile_ok(path, funcs, externs, kind):
    """Write funcs to path, dropping functions the compiler rejects, until it compiles."""
    cc = CC + (" -lang c++ -Cpp_exceptions off" if kind == "cpp" else "")
    if GCC:
        cc = f"sh tools/eegcc.sh {GCC} scratch/{path.stem}.o {path.relative_to(ROOT).as_posix()} {GCC_FLAGS}"
    for it_ in range(3000):
        (write_cpp if kind == "cpp" else write)(path, funcs, externs)
        r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                            cc if GCC else f"{cc} -o scratch/{path.stem}.o {path.relative_to(ROOT).as_posix()}"],
                           capture_output=True, text=True)
        if not r.returncode:
            return funcs
        bad_lines = {int(x) for x in re.findall(r"#\s+(\d+):", r.stdout + r.stderr)}
        # GNU: "file.c:123: message" (warnings are fine)
        bad_lines |= {int(m.group(1)) for m in re.finditer(r"\.c:(\d+): (?!warning)", r.stdout + r.stderr)}
        text = path.read_text().split("\n")
        bad = set()
        names_ = {f[0] for f in funcs}
        for ln in bad_lines:
            line_ = text[min(ln, len(text)) - 1]
            mp = re.match(r"\w[\w *]*[ *](func_[0-9A-F]{8})\(.*\);$", line_)
            if mp:
                # an error on a declaration: its definition here, or else its callers
                x_ = mp.group(1)
                bad |= {x_} if x_ in names_ else {f[0] for f in funcs if x_ in f[2]}
                continue
            for j in range(min(ln, len(text)) - 1, -1, -1):
                mm = re.match(r"\w[\w *]*[ *](func_[0-9A-F]{8})\(", text[j])
                if mm and not text[j].rstrip().endswith(";"):
                    bad.add(mm.group(1))
                    break
        bad &= names_
        if not bad:
            raise SystemExit(r.stdout[-3000:])
        funcs = [f for f in funcs if f[0] not in bad]
        DROPPED[0] += len(bad)
        if it_ and it_ % 50 == 0:
            print(f"  compile_ok: attempt {it_}, {len(funcs)} functions left, dropped {sorted(bad)[:3]}", flush=True)
        if os.environ.get("GEN_SHOW_ERRORS"):
            if not (ROOT / "scratch/err_src.txt").exists():  # the first failing attempt
                (ROOT / "scratch/err_src.txt").write_text("\n".join(text))
            with open(ROOT / "scratch/err_out.txt", "a") as fh_:
                fh_.write(r.stdout + r.stderr)
            print("compile errors:", sorted(bad)[:5], "; ".join([x.strip("# ") for x in re.findall(r"Error:[^\n]*\n([^\n]*)", r.stdout + r.stderr)][:40]))
    raise SystemExit("too many compile errors")


def load_previous(path, kind, externs):
    """{name: (name, code, calls)} of the functions in an earlier output file; fills externs
    and META so the file can be rewritten as it was."""
    if not path.exists():
        return {}
    text = path.read_text()
    for m in re.finditer(r"^(extern [^;\n]*\b(D_[0-9A-F]{8})\b[^;\n]*;)$", text, re.M):
        externs.setdefault(m.group(2), m.group(1))
    rts, sigs = {}, {}
    for m in re.finditer(r"^(\w[\w ]*?\**) ?(func_[0-9A-F]{8})\(([^)]*)\);$", text, re.M):
        rts[m.group(2)] = m.group(1).strip()
        args = m.group(3).strip()
        sigs[m.group(2)] = () if args in ("", "void") else tuple(a.strip() for a in args.split(","))
    classes = {}
    for m in re.finditer(r"^class (\w+) \{\npublic:\n(.*?)^\};", text, re.M | re.S):
        body = m.group(2)
        mm = re.search(r"virtual ([\w ]+?\**) ?m\(([^)]*)\);", body)
        if not mm:
            continue
        args = mm.group(2).strip()
        classes[m.group(1)] = (8 + 4 * body.count("virtual void d"), () if args in ("", "void") else
                               tuple(a.strip() for a in args.split(",")), mm.group(1).strip())
    out = {}
    for m in re.finditer(r"^(\w[\w *]*?[ *](func_[0-9A-F]{8})\([^)]*\)[^{}\n]* \{\n.*?^\})", text, re.M | re.S):
        code, name = m.group(1), m.group(2)
        hm = re.match(r"(\w[\w *]*?[ *]func_[0-9A-F]{8})\(([^)]*)\) \{\n", code)
        if kind == "c" and hm and "float" not in hm.group(2):
            # an older ANSI header: rewrite as K&R with the unused trailing parameters dropped
            rest_ = code[hm.end():]
            ps_ = [x.strip() for x in hm.group(2).split(",")] if hm.group(2) not in ("void", "") else []
            while ps_ and not re.search(rf"\b{ps_[-1].split()[-1].lstrip('*')}\b", rest_):
                ps_.pop()
            names_ = ", ".join(x.split()[-1].lstrip("*") for x in ps_)
            code = f"{hm.group(1)}({names_}){''.join(f' {x};' for x in ps_)} {{\n" + rest_
        if kind == "cpp" and hm and hm.group(2) not in ("", "void"):
            # C++ keeps ANSI headers; drop unused trailing integer parameters
            rest_ = code[hm.end():]
            ps_ = [x.strip() for x in hm.group(2).split(",")]
            fl_ = [x for x in ps_ if x.startswith("float ")]
            in_ = [x for x in ps_ if not x.startswith("float ")]
            while in_ and not re.search(rf"\b{in_[-1].split()[-1].lstrip('*')}\b", rest_):
                in_.pop()
            while fl_ and not re.search(rf"\b{fl_[-1].split()[-1]}\b", rest_):
                fl_.pop()
            code = f"{hm.group(1)}({', '.join(in_ + fl_) or 'void'}) {{\n" + rest_
        calls = {c: rts.get(c, "int") for c in set(re.findall(r"\b(func_[0-9A-F]{8})\b", code)) - {name}}
        META[name] = {"callsig": dict(sigs), "vclasses": {c: classes[c] for c in classes
                                                          if re.search(rf"\b{c}\b", code)}}
        out[name] = (name, code, calls)
    return out


# GEN_ONLY=file: translate only the functions listed there (earlier matches are still kept)
ONLY = set(open(os.environ["GEN_ONLY"]).read().split()) if os.environ.get("GEN_ONLY") else None


def main():
    taken = set()
    for p in (ROOT / "src").rglob("*.c*"):
        if p not in (OUT, OUT_CPP):
            # definitions only: a line that starts with the type (a call in `if (f(x)) {` is not one)
            taken |= {int(x, 16) for x in re.findall(
                r"^(?:extern \"C\" )?(?:static )?\w[\w *]*?[ *]func_([0-9A-F]{8})\([^;{}\n]*\)[^{}\n]*\{", p.read_text(), re.M)}
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
        jt9 = [i for i, (_, t) in enumerate(raw) if t == "jr $t9"]
        if jt9 and any(t != "nop" for _, t in raw[jt9[0] + 2:]):
            continue  # splat merged a tail-calling function with the next one
        if not GCC:
            raw = fold_mtrand(raw)
        work.append((name, A, raw, has_vcall))
    addr = {n: A for n, A, _, _ in work}
    externs, matched = {}, {"c": {}, "cpp": {}}
    if os.environ.get("GEN_FRESH") is None:
        for kind, path in (("c", OUT),) + ((("cpp", OUT_CPP),) if not GCC else ()):
            prev = {n: f for n, f in load_previous(path, kind, externs).items() if n in addr}
            matched[kind].update(prev)
            PREV.update(prev)
            print(f"kept {len(prev)} earlier matches from {path.name}", flush=True)
    for opts, kind in OPTIONS:
        if GCC and kind == "cpp":
            continue  # the library code is C
        funcs, fails = [], 0
        for name, A, raw, has_vcall in work:
            if name in matched["c"] or name in matched["cpp"] or has_vcall != (kind == "cpp") or (ONLY and name not in ONLY):
                continue
            try:
                code, calls, meta = translate(name, raw, externs, opts)
            except (Fail, ValueError, KeyError, AttributeError, IndexError, TypeError, RecursionError):
                fails += 1
                continue
            META[name] = meta
            funcs.append((name, code, calls))
        defs = {n for n, _, _ in funcs} | set(matched["c"]) | set(matched["cpp"])
        seen = {c: rt for d in matched.values() for _, _, cl in d.values() for c, rt in cl.items()}
        keep = []
        for f in funcs:
            if (STRICT_DEFS and any(c in defs for c in f[2])) or any(seen.get(c, rt) != rt for c, rt in f[2].items()):
                continue
            seen.update(f[2])
            keep.append(f)
        tmpfile = ROOT / (f"scratch/{SCR}_pass.cpp" if kind == "cpp" else f"scratch/{SCR}_pass.c")
        keep = compile_ok(tmpfile, keep, externs, kind)
        CUR_OPTS[0] = opts
        ok = check(tmpfile, {n: addr[n] for n, _, _ in keep})
        # keep each pass's candidates for diagnosis (scratch/ is git-ignored)
        npass = OPTIONS.index((opts, kind))
        (ROOT / f"scratch/{SCR}_pass{npass}{tmpfile.suffix}").write_text(tmpfile.read_text())
        (ROOT / f"scratch/{SCR}_pass{npass}.addr").write_text(
            "\n".join(f"{n} {addr[n]:#x} {'ok' if n in ok else 'no'}" for n, _, _ in keep))
        import shutil
        shutil.copy(ROOT / f"scratch/{tmpfile.stem}.o", ROOT / f"scratch/{SCR}_pass{npass}.o")
        for f in keep:
            if f[0] in ok:
                matched[kind][f[0]] = f
            elif LAST_SCORE.get(f[0], 0.0) > BEST_CODE.get(f[0], (None, -1.0))[1]:
                BEST_CODE[f[0]] = (f, LAST_SCORE[f[0]], META[f[0]])
        print(f"pass {opts}: {len(ok)} match of {len(keep)} candidates ({fails} not translatable, {DROPPED[0]} dropped by compile errors so far)", flush=True)
    # permutation rounds: near misses get seeded variants (variable merging, operand
    # orders), batched into one compile per round and kind
    rounds = int(sys.argv[2]) if len(sys.argv) > 2 else 0
    near = {n for n, sc in SCORES.items() if sc >= NEAR and n not in matched["c"] and n not in matched["cpp"]}
    by_name = {n: (raw, has_vcall) for n, A, raw, has_vcall in work}
    for rnd in range(rounds):
        got = 0
        for kind in ("c",) if GCC else ("c", "cpp"):
            funcs = []
            for name in sorted(near):
                raw, has_vcall = by_name[name]
                if has_vcall != (kind == "cpp"):
                    continue
                # rounds cycle: seeded variants, declaration hill climbing, text mutations
                if rnd % 3 == 2:
                    if name not in BEST_CODE:
                        continue
                    (bn_, bc_, bcalls_), _, bmeta_ = BEST_CODE[name]
                    META[name] = bmeta_
                    funcs.append((name, mutate(bc_, random.Random(f"{SALT}:{name}:{rnd}")), bcalls_))
                    continue
                if rnd % 3 == 1:
                    if name not in DECL:
                        try:
                            c0_ = translate(name, raw, externs, dict(BEST_OPTS.get(name, {})))[0]
                        except (Fail, ValueError, KeyError, AttributeError, IndexError, TypeError, RecursionError):
                            continue
                        names_ = re.findall(r"^    (?:[\w ]+\*?) ((?:v|tmp)\d+);$", c0_, re.M)
                        DECL[name] = (names_, SCORES.get(name, 0.0))
                    order_, _ = DECL[name]
                    if len(order_) < 2:
                        continue
                    r_ = random.Random(f"{SALT}:{name}:{rnd}")
                    i_, j_ = r_.sample(range(len(order_)), 2)
                    prop_ = list(order_)
                    prop_[i_], prop_[j_] = prop_[j_], prop_[i_]
                    o_ = dict(BEST_OPTS.get(name, {}), declorder=prop_)
                else:
                    o_ = {"seed": f"{SALT}:{name}:{rnd}", "cpp": kind == "cpp"}
                try:
                    code, calls, meta = translate(name, raw, externs, o_)
                except (Fail, ValueError, KeyError, AttributeError, IndexError, TypeError, RecursionError):
                    continue
                META[name] = meta
                funcs.append((name, code, calls))
            defs = {n for n, _, _ in funcs} | set(matched["c"]) | set(matched["cpp"])
            seen = {c: rt for d in matched.values() for _, _, cl in d.values() for c, rt in cl.items()}
            keep = []
            for f in funcs:
                if (STRICT_DEFS and any(c in defs for c in f[2])) or any(seen.get(c, rt) != rt for c, rt in f[2].items()):
                    continue
                seen.update(f[2])
                keep.append(f)
            if not keep:
                continue
            tmpfile = ROOT / (f"scratch/{SCR}_perm.cpp" if kind == "cpp" else f"scratch/{SCR}_perm.c")
            keep = compile_ok(tmpfile, keep, externs, kind)
            CUR_OPTS[0] = None  # a seeded variant cannot be reproduced from options alone
            ok = check(tmpfile, {n: addr[n] for n, _, _ in keep})
            for f in keep:
                if f[0] in ok:
                    matched[kind][f[0]] = f
                    near.discard(f[0])
                if f[0] in near and LAST_SCORE.get(f[0], 0.0) > BEST_CODE.get(f[0], (None, -1.0))[1]:
                    BEST_CODE[f[0]] = (f, LAST_SCORE[f[0]], META[f[0]])
                if rnd % 3 == 1 and f[0] in DECL and LAST_SCORE.get(f[0], 0.0) > DECL[f[0]][1]:
                    # keep the improving swap
                    names_ = re.findall(r"^    (?:[\w ]+\*?) ((?:v|tmp)\d+);$", f[1], re.M)
                    DECL[f[0]] = (names_, LAST_SCORE[f[0]])
            got += len(ok)
        print(f"permute round {rnd + 1}/{rounds}: {got} new matches, {len(near)} near misses left", flush=True)
    # final files: re-verify everything together (a callee in the same file can change a caller)
    for kind, path in (("c", OUT),) + ((("cpp", OUT_CPP),) if not GCC else ()):
        path.parent.mkdir(parents=True, exist_ok=True)
        if not matched[kind]:
            if path.exists():
                path.unlink()  # no empty generated files
            print(f"{path.name}: 0 functions")
            continue
        final = [matched[kind][n] for n in sorted(matched[kind], key=lambda n: addr[n])]
        while True:
            final = compile_ok(path, final, externs, kind)
            ok = check(path, {n: addr[n] for n, _, _ in final})
            if len(ok) == len(final):
                break
            bad = {f[0] for f in final if f[0] not in ok}
            old_bad = bad & set(PREV)
            if old_bad:
                # an earlier match broke: drop the new functions it calls or that call it,
                # or every new function when none is related, before giving up an old one
                new_ = {f[0] for f in final if f[0] not in PREV}
                rel = {f[0] for f in final if f[0] in new_ and (old_bad & set(f[2]))} | \
                      {c for f in final if f[0] in old_bad for c in f[2] if c in new_}
                drop = (rel or new_) | (bad - set(PREV))
                if drop:
                    final = [f for f in final if f[0] not in drop]
                    continue
            final = [f for f in final if f[0] in ok]
        print(f"{path.name}: {len(final)} functions")


if __name__ == "__main__":
    main()
