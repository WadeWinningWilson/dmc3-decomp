"""Generate flat deleting destructors straight from the original asm, verified byte-for-byte.

Shape: `char *f(char *p, short flag) { if (p != 0) { BODY; if (flag > 0) delete(p); } return p; }`
(prologue `daddu s1,a0; beqz s1,end; daddu s0,a1`, tail `(short)s0 > 0 -> jal func_00100580`).
BODY is interpreted symbolically from the asm between: vtable stores, member null checks
(`if (p + K != 0)`, `if (*(char **)(p + K) != 0)`), stores of zero, and calls whose arguments
are `p + K`, constants, symbols or function addresses. Only byte-matching functions are kept.
Output: src/game/auto/flat_dtors.c

usage: python -I tools/gen_flat_dtors.py
"""
import re, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "src/game/auto/flat_dtors.c"
funcs, cur = {}, None
for l in open(ROOT / "asm/us/text.s"):
    m = re.match(r"glabel (func_\w+)", l)
    if m:
        cur = m.group(1)
        funcs[cur] = []
        continue
    if l.startswith("endlabel"):
        cur = None
        continue
    if cur is None:
        continue
    m = re.match(r"\s*(\.L\w+):", l)
    if m:
        funcs[cur].append(("label", m.group(1)))
        continue
    m = re.search(r"\*/\s+(.*)$", l)
    if m:
        funcs[cur].append(("ins", m.group(1).strip()))

PRO = ["addiu $sp, $sp, -0x30", "sd $ra, 0x20($sp)", "sq $s1, 0x10($sp)", "sq $s0, 0x0($sp)",
       "daddu $s1, $a0, $zero"]
TAIL = ["dsll32 $v0, $s0, 16", "dsra32 $v0, $v0, 16"]
BRANCH = ("beqz", "bnez", "b", "jal", "blez", "beq", "bne")


def norm(i):
    return re.sub(r"\s+", " ", i.replace(", ", ",")).replace(",", ", ")


def num(x):
    return int(x, 0)


class Fail(Exception):
    pass


def gen(name, items):
    ins = [norm(x) if k == "ins" else x for k, x in items]
    kinds = [k for k, _ in items]
    if [ins[i] for i in range(5)] != PRO or kinds[:5] != ["ins"] * 5:
        raise Fail("prologue")
    m = re.match(r"beqz \$s1, (\.L\w+)$", ins[5])
    if not m or ins[6] != "daddu $s0, $a1, $zero":
        raise Fail("null check")
    end_label = m.group(1)
    # find the flag test
    try:
        t = ins.index(TAIL[0])
    except ValueError:
        raise Fail("no tail")
    if ins[t + 1] != TAIL[1] or not ins[t + 2].startswith("blez $v0, " + end_label) \
            or ins[t + 3] != "daddu $a0, $s1, $zero" or ins[t + 4] != "jal func_00100580":
        raise Fail("tail shape")
    body = list(zip(kinds[7:t], ins[7:t]))
    # reorder delay slots: a branch/jal is followed by its delay-slot instruction
    seq, i = [], 0
    while i < len(body):
        k, x = body[i]
        if k == "ins" and x.split()[0] in BRANCH:
            if i + 1 < len(body) and body[i + 1][0] == "ins":
                op0 = x.split()[0]
                if op0 in ("beqz", "bnez"):
                    seq.append(("cond", x))
                seq.append(body[i + 1])
                seq.append((k, x))
                i += 2
                continue
        seq.append((k, x))
        i += 1
    regs = {"$s1": "p", "$zero": "0"}
    fnrefs = set()
    hi = {}
    decls = set()
    lines, stack = [], []
    argset = set()
    ind = lambda: "    " * (2 + len(stack))

    def val(r):
        if r not in regs:
            raise Fail("unknown reg " + r)
        return regs[r]

    def addr(base, off):
        b = val(base)
        if off == 0:
            return b
        if b.startswith("p + "):
            return "p + %d" % (int(b[4:]) + off)
        if b == "p":
            return "p + %d" % off
        if b.startswith("*("):
            return "%s + %d" % (b, off)
        raise Fail("addr base " + b)

    pending = {}
    for k, x in seq:
        if k == "cond":
            r = x.split(" ", 1)[1].split(",")[0].strip()
            pending[x] = val(r)
            continue
        if k == "label":
            while stack and stack[-1] == x:
                stack.pop()
                lines.append(ind() + "}")
            continue
        op, *rest = x.split(" ", 1)
        a = [s.strip() for s in rest[0].split(",")] if rest else []
        if op == "lui":
            m = re.match(r"%hi\((\w+)\)", a[1])
            if m:
                hi[a[0]] = m.group(1)
                regs.pop(a[0], None)
                continue
            m = re.match(r"\((0x[0-9A-Fa-f]+) >> 16\)", a[1])
            if m:
                hi[a[0]] = num(m.group(1))
                regs[a[0]] = str(num(m.group(1)) & 0xFFFF0000)
                continue
            raise Fail("lui " + x)
        if op == "addiu":
            m = re.match(r"%lo\((\w+)\)", a[2])
            if m:
                sym = m.group(1)
                if hi.get(a[1]) != sym:
                    raise Fail("lo mismatch")
                if sym.startswith("func_"):
                    decls.add("void %s();" % sym)
                    regs[a[0]] = "(void *)%s" % sym
                    fnrefs.add(sym)
                else:
                    decls.add("extern char %s[];" % sym)
                    regs[a[0]] = sym
                if a[0] in ("$a0", "$a1", "$a2", "$a3"):
                    argset.add(a[0])
                continue
            imm = num(a[2])
            if a[1] == "$zero":
                regs[a[0]] = str(imm)
            elif a[1] == "$s1":
                regs[a[0]] = "p + %d" % imm if imm else "p"
            else:
                b = val(a[1])
                if b.startswith("p + "):
                    regs[a[0]] = "p + %d" % (int(b[4:]) + imm)
                else:
                    raise Fail("addiu base")
            if a[0] in ("$a0", "$a1", "$a2", "$a3"):
                argset.add(a[0])
            continue
        if op == "ori" and a[1] == "$zero":
            regs[a[0]] = str(num(a[2]))
            if a[0] in ("$a0", "$a1", "$a2", "$a3"):
                argset.add(a[0])
            continue
        if op == "ori":
            m = re.match(r"\((0x[0-9A-Fa-f]+) & 0xFFFF\)", a[2])
            if not m or not isinstance(hi.get(a[1]), int):
                raise Fail("ori")
            regs[a[0]] = str(num(m.group(1)))
            if a[0] in ("$a0", "$a1", "$a2", "$a3"):
                argset.add(a[0])
            continue
        if op == "addu":
            x1, x2 = val(a[1]), val(a[2])
            if x1 == "p" and x2.lstrip("-").isdigit():
                regs[a[0]] = "p + %s" % x2
            elif x2 == "p" and x1.lstrip("-").isdigit():
                regs[a[0]] = "p + %s" % x1
            else:
                raise Fail("addu")
            if a[0] in ("$a0", "$a1", "$a2", "$a3"):
                argset.add(a[0])
            continue
        if op == "daddu":
            regs[a[0]] = val(a[1]) if a[2] == "$zero" else None
            if regs[a[0]] is None:
                raise Fail("daddu")
            if a[0] in ("$a0", "$a1", "$a2", "$a3"):
                argset.add(a[0])
            continue
        if op == "lw":
            m = re.match(r"(-?0x[0-9A-Fa-f]+|\d+)\((\$\w+)\)", a[1])
            regs[a[0]] = "*(char **)(%s)" % addr(m.group(2), num(m.group(1)))
            if a[0] in ("$a0", "$a1", "$a2", "$a3"):
                argset.add(a[0])
            continue
        if op in ("sw", "sb", "sh"):
            m = re.match(r"(-?0x[0-9A-Fa-f]+|\d+)\((\$\w+)\)", a[1])
            ty = {"sw": "char *", "sb": "char", "sh": "short"}[op]
            v = val(a[0])
            if op == "sw" and v == "0":
                ty = "int"
            lines.append(ind() + "*(%s *)(%s) = %s;" % (ty, addr(m.group(2), num(m.group(1))), v))
            continue
        if op in ("beqz", "bnez"):
            if op != "beqz":
                raise Fail("bnez")
            v = pending.pop(x) if x in pending else val(a[0])
            lines.append(ind() + "if (%s != 0) {" % v)
            stack.append(a[1])
            continue
        if op == "jal":
            n = 0
            for idx, r in enumerate(("$a0", "$a1", "$a2", "$a3")):
                if r in argset:
                    n = idx + 1
            args = [val(r) for r in ("$a0", "$a1", "$a2", "$a3")[:n]]
            decls.add("void %s();" % a[0])
            lines.append(ind() + "%s(%s);" % (a[0], ", ".join(args)))
            for r in ("$a0", "$a1", "$a2", "$a3", "$v0", "$v1", "$at"):
                regs.pop(r, None)
            argset = set()
            continue
        if op == "nop":
            continue
        raise Fail("op " + op)
    if stack:
        raise Fail("unclosed")
    code = "char *%s(char *p, short flag) {\n    if (p != 0) {\n" % name
    code += "\n".join(lines) + ("\n" if lines else "")
    code += "        if (flag > 0) {\n            func_00100580(p);\n        }\n    }\n    return p;\n}\n"
    return code, decls




def defined():
    out = set()
    for p in (ROOT / "src").rglob("*"):
        if p.suffix not in (".c", ".cpp") or p == OUT:
            continue
        for l in p.read_text(errors="replace").splitlines():
            m = re.match(r"^[^ #/].*?\b(func_[0-9A-F]{8})\(.*\{", l)
            if m and "\x08" not in m.group(0):
                out.add(m.group(1))
    # addresses already named in the symbol files (C++ placeholders, library names)
    for p in (ROOT / "config/SLUS_209.64").glob("symbols*.txt"):
        for l in p.read_text(errors="replace").splitlines():
            m = re.match(r"\s*(\S+)\s*=\s*0x([0-9A-Fa-f]+)", l)
            if m and not m.group(1).startswith("func_"):
                out.add("func_%08X" % int(m.group(2), 16))
    return out


def write(ok, alld):
    names = {n for n, _ in ok}
    decls = sorted(d for d in alld if d != "void func_00100580();" and not any(n in d for n in names))
    with open(OUT, "w", newline="\n") as f:
        f.write("/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from\n"
                " * the original asm and verified byte-for-byte (only matches are kept). */\n")
        f.write("void func_00100580();\n")
        f.write("".join("char *%s(char *, short);\n" % n for n, _ in ok))
        f.write("\n".join(decls) + "\n\n")
        for _, code in ok:
            f.write(code + "\n")


def main():
    defd = defined()
    ok, alld, fails = [], set(), 0
    for name, items in funcs.items():
        if name in defd:
            continue
        try:
            code, decls = gen(name, items)
        except Exception:
            fails += 1
            continue
        ok.append((name, code))
        alld |= decls
    write(ok, alld)
    r = subprocess.run([sys.executable, "-I", str(ROOT / "tools/try.py"), str(OUT)] + [n for n, _ in ok],
                       capture_output=True, text=True, cwd=ROOT)
    good = set(re.findall(r"(func_[0-9A-F]{8}) @ 0x[0-9a-f]+: \d+/\d+ instructions match .*MATCH", r.stdout))
    kept = [(n, c) for n, c in ok if n in good]
    write(kept, alld)
    print("%d generated, %d match" % (len(ok), len(kept)))


if __name__ == "__main__":
    main()
