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

usage: python -I tools/gen_flow.py [max instructions, default 40]
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
LO, HI = 0x195158, 0x50FE28
MAX_INS = int(sys.argv[1]) if len(sys.argv) > 1 else 80
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
COND1 = {"beqz": "==", "bnez": "!=", "blez": "<=", "bgtz": ">", "bltz": "<", "bgez": ">="}
NEG = {"==": "!=", "!=": "==", "<": ">=", ">=": "<", ">": "<=", "<=": ">"}
FCMP = {"c.eq.s": "==", "c.lt.s": "<", "c.le.s": "<="}
VU_PREFIX = ("qmtc2", "vadd", "vsub", "vmul", "vmadd", "vmsub", "vmove", "vmr32", "vdiv", "vsqrt",
             "vrsqrt", "vabs", "vmax", "vmini", "vopmula", "vopmsub", "vwaitq", "vitof", "vftoi", "vclip")


class Fail(Exception):
    pass


def num(s):
    s = s.strip()
    neg = s.startswith("-")
    v = int(s.lstrip("-"), 0)
    return -v if neg else v


def is_vu(op):
    return op in ("lqc2", "sqc2", "vnop") or op.startswith(VU_PREFIX)


def split(i):
    m = re.match(r"(\w+(?:\.\w+)?)\s*(.*)", i)
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
    if op == "lui":
        return set(), {a[0]}
    if a:
        return {x for x in a[1:] if x.startswith("$")}, {a[0]}
    return set(), set()


def prepare(ins):
    """[(addr, text)] -> list of instructions with delay slots resolved and the frame removed."""
    targets = {int(t, 16) for _, t in ins for t in re.findall(r"\.L([0-9A-F]{8})", t)}
    seq = []
    i = 0
    while i < len(ins):
        addr, t = ins[i]
        op, a = split(t)
        if re.match(r"(b\w*|j|jal|jr)$", op) and op != "break":
            if op.endswith("l") and op not in ("jal",) and op.startswith("b"):
                raise Fail  # branch-likely: delay slot is nullified
            if i + 1 >= len(ins):
                raise Fail
            daddr, d = ins[i + 1]
            dop, da = split(d)
            if d != "nop" and op not in ("b", "j", "jal", "jr") and regs_of(dop, da)[1] & regs_of(op, a)[0]:
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
    if any("$sp" in t for _, t in out):
        raise Fail
    return out, frame, seq


def blocks_of(seq):
    """Basic blocks: list of (start addr, [instr]); terminators last."""
    targets = {int(t, 16) for _, t in seq for t in re.findall(r"\.L([0-9A-F]{8})", t)}
    leaders, prev_term = set(), True
    for addr, t in seq:
        op, _ = split(t)
        if prev_term or addr in targets:
            leaders.add(addr)
        prev_term = bool(re.match(r"(b\w*|j|jr)$", op)) and op != "break"
    blocks, cur = [], None
    for addr, t in seq:
        if addr in leaders and (cur is None or cur[0] != addr or cur[1]):
            if cur is None or cur[1] or cur[0] != addr:
                cur = [addr, []]
                blocks.append(cur)
        cur[1].append(t)
    # a label inside a block (from a duplicated delay slot) is fine: leaders split by address
    return [(a, b) for a, b in blocks]


def translate(name, raw, externs, opts=None):
    opts = opts or {}
    seq, _, _ = prepare(raw)
    if not seq or len(seq) > MAX_INS:
        raise Fail
    bl = blocks_of(seq)
    addrs = [a for a, _ in bl]
    index = {a: k for k, a in enumerate(addrs)}
    succ, term, loops = {}, {}, {}
    for k, (a, ins) in enumerate(bl):
        op, args = split(ins[-1].split(" || ")[0])
        nxt = k + 1 if k + 1 < len(bl) else None
        if op == "jr":
            if args != ["$ra"]:
                raise Fail
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
    n = len(bl)
    EXIT = n
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
                if s2 > L and s2 != exit_of[h]:
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
            if op == "jal":
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
            out.append((pos, rd, wr, CALLER_SAVED - wr if op == "jal" else set()))
            pos += 1
        if has_term:
            tk = term[k]
            rd = set()
            if tk[0] == "cond":
                rd = regs_of(tk[1], tk[2])[0]
            elif tk[0] == "ret":
                rd = {"$v0"}
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
                if opts.get("coalesce") and r in wr and not r.startswith("$f"):
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
    for w in sorted(crossing, key=str):
        if w in webvar:
            continue
        if w[0] in ("clobber", "entry"):
            continue
        webvar[w] = f"v{nv}"
        nv += 1
        reg = w[2]
        webtype[w] = "float" if reg.startswith("$f") else ("char *" if w in ptr_web else "int")
    varnames = set(webvar.values())
    # register -> web of the value that enters block k
    inweb = {}
    for k in range(n):
        m = {}
        for r, ds in IN[k].items():
            ws = {find(d) for d in ds}
            if len(ws) == 1:
                w = ws.pop()
                if w in webvar:
                    m[r] = w
        inweb[k] = m
    based = set()  # kept for the jal / lw type heuristics
    for _, ins in bl:
        for t in ins:
            op, a = split(t)
            if op in LOADS or op in STORES or op in ("lqc2", "sqc2"):
                mm = re.fullmatch(rf"({NUM})\((\$\w+)\)", a[1])
                if mm:
                    based.add(mm.group(2))

    def defweb(k, pos, r):
        d = (k, pos, r)
        return find(d) if d in parent else None

    vtypes = {}
    locs, calls, local_ext = [], {}, {}
    ntemp = [0]

    def need(sym, decl):
        if externs.get(sym, decl) != decl or local_ext.get(sym, decl) != decl:
            raise Fail
        local_ext[sym] = decl

    def block_code(k):
        """Statements of block k (without its terminator) and the branch condition."""
        regs, types, memdep, stmts = {}, {}, set(), []
        for r, w in inweb[k].items():
            regs[r], types[r] = webvar[w], webtype[w]
        cur = [0]

        def val(r):
            if r == "$zero":
                return "0", "int"
            if r in regs:
                if types[r] == "hi" or types[r].startswith("sh32"):
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
                if bt != "char *":
                    raise Fail
                return f"*({t} *)({be} + {num(mm.group(1))})"
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
        body = ins[:-1] if term[k][0] in ("ret", "tail", "goto", "cond") else ins
        post = ins[-1].split(" || ")[1:] if term[k][0] == "cond" else []
        st = {"fcmp": None, "vu": []}
        written = set()

        def run(body, base=0):
          for idx, t in enumerate(body):
              op, a = split(t)
              cur[0] = base + idx
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
              if op == "jal":
                  fn = a[0]
                  if not re.fullmatch(r"func_[0-9A-F]{8}", fn):
                      raise Fail
                  nargs = max((ARGS.index(r) + 1 for r in written if r in ARGS), default=0)
                  cargs = [val(ARGS[i])[0] for i in range(nargs)]
                  flush()
                  call = f"{fn}({', '.join(cargs)})"
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
                  if calls.get(fn, rt) != rt:
                      raise Fail
                  calls[fn] = rt
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
                  stmts.append(f"{lv} = {ve};")
              elif op in FCMP:
                  x, _ = val(a[0])
                  y, _ = val(a[1])
                  st["fcmp"] = (x, FCMP[op], y)
              elif op == "lui" and re.fullmatch(r"%hi\(D_[0-9A-F]{8}\)", a[1]):
                  regs[a[0]], types[a[0]] = a[1][4:-1], "hi"
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
                  e, tt = val(a[1])
                  kk = num(a[2])
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
                  define(a[0], f"({x} {sym} {y})", tx if tx == "char *" else "int", a[1] in memdep or a[2] in memdep)
              elif op in ("andi", "ori", "xori"):
                  x, _ = ival(a[1])
                  sym = {"andi": "&", "ori": "|", "xori": "^"}[op]
                  define(a[0], f"({x} {sym} {num(a[2])})", "int", a[1] in memdep)
              elif op in ("sll", "sra", "srl"):
                  x, _ = ival(a[1])
                  e = f"((unsigned int){x} >> {num(a[2])})" if op == "srl" else \
                      f"({x} {'<<' if op == 'sll' else '>>'} {num(a[2])})"
                  define(a[0], e, "int", a[1] in memdep)
              elif op in ("slt", "sltu", "slti", "sltiu"):
                  x, _ = ival(a[1])
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
                  kk = (int(mm.group(1), 16) >> 16) if mm else num(a[1])
                  define(a[0], f"{(kk << 16) & 0xFFFFFFFF:#x}", "int")
              elif op == "mtc1":
                  e, _ = val(a[0])
                  if e == "0":
                      define(a[1], "0.0f", "float")
                  elif re.fullmatch(r"0x[0-9a-f]+", e):
                      f = struct.unpack("<f", struct.pack("<I", int(e, 16)))[0]
                      define(a[1], repr(float(f)) + "f", "float")
                  else:
                      raise Fail
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
            ret = regs.get("$v0") if "$v0" in regs and types.get("$v0") != "hi" else None
            if ret is not None and types.get("$v0") == "char *":
                ret = f"(int){ret}"
        if tk[0] == "tail":
            nargs = max((ARGS.index(r) + 1 for r in written if r in ARGS), default=0)
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
        if y == "0" and o in ("!=", "==") and re.fullmatch(r"\(.*(==|<|<=|>|>=|!=).*\)", x):
            return x if o == "!=" else f"!{x}"
        return f"{x} {o} {y}"

    rets = []
    out = []

    def emit(k, stop, ind, ctx=None, active=frozenset()):
        while k is not None and k != stop and k != EXIT:
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
                if taken == X or taken == L and k != L:
                    if taken == L and len(bl[L][1]) > 1:
                        raise Fail  # `continue` would skip the latch's statements
                    out.append(ind + f"if ({cstr(cond, False)}) {'break' if taken == X else 'continue'};")
                    k = fall
                    continue
                if fall == X:
                    out.append(ind + f"if ({cstr(cond, True)}) break;")
                    k = taken
                    continue
            j = ipdom(k)
            if ctx and not (j <= ctx[1] or j == ctx[2]):
                raise Fail
            if ctx and j == ctx[2]:
                j = ctx[1]
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
    if all(r is not None for r in rets):
        rtype = "int"
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
    decl = [f"    {webtype[w]} {v};" for w, v in sorted(webvar.items(), key=lambda x: x[1])
            if not re.fullmatch(r"[pf]\d", v)]
    lines = [f"{rtype} {name}({', '.join(plist) or 'void'}) {{"] + decl + [f"    {l}" for l in locs] + out + ["}"]
    externs.update(local_ext)
    return "\n".join(lines).replace("char * ", "char *"), calls


def check(path, cands):
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


OPTIONS = [{}, {"coalesce": True}]  # translation variants, tried in order on what is still unmatched


def compile_ok(path, funcs, externs):
    """Write funcs to path, dropping functions the compiler rejects, until it compiles."""
    for _ in range(400):
        write(path, funcs, externs)
        r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                            f"{CC} -o scratch/{path.stem}.o {path.relative_to(ROOT).as_posix()}"],
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
        if p != OUT:
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
        if not any(re.match(r"b\w*\b", t) and not t.startswith("break") for _, t in raw):
            continue  # branch-free functions belong to gen_leaf
        if any(re.match(r"(jalr|mult\w*|div\w*|break)\b", t) for _, t in raw):
            continue
        work.append((name, A, raw))
    addr = {n: A for n, A, _ in work}
    externs, matched = {}, {}
    tmpfile = ROOT / "scratch/flow_pass.c"
    for opts in OPTIONS:
        funcs, fails = [], 0
        for name, A, raw in work:
            if name in matched:
                continue
            try:
                code, calls = translate(name, raw, externs, opts)
            except (Fail, ValueError, KeyError, AttributeError, IndexError, TypeError):
                fails += 1
                continue
            funcs.append((name, code, calls))
        defs = {n for n, _, _ in funcs} | set(matched)
        seen = {c: rt for _, _, cl in matched.values() for c, rt in cl.items()}
        keep = []
        for f in funcs:
            if any(c in defs for c in f[2]) or any(seen.get(c, rt) != rt for c, rt in f[2].items()):
                continue
            seen.update(f[2])
            keep.append(f)
        keep = compile_ok(tmpfile, keep, externs)
        ok = check(tmpfile, {n: addr[n] for n, _, _ in keep})
        for f in keep:
            if f[0] in ok:
                matched[f[0]] = f
        print(f"pass {opts}: {len(ok)} match of {len(keep)} candidates ({fails} not translatable)", flush=True)
    # final file: re-verify everything together (a callee in the same file can change a caller)
    final = [matched[n] for n in sorted(matched, key=lambda n: addr[n])]
    while True:
        final = compile_ok(OUT, final, externs)
        ok = check(OUT, {n: addr[n] for n, _, _ in final})
        if len(ok) == len(final):
            break
        final = [f for f in final if f[0] in ok]
    print(f"flow.c: {len(final)} functions")


if __name__ == "__main__":
    main()
