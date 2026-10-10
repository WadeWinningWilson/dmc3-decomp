"""Generate the destructors of CWork-derived classes (single-inheritance chains).

Many game classes (the CUID* UI screens, the particle classes, ...) derive from
CWork through a chain of single-inheritance bases, and their deleting
destructors share one shape: for each level, from the class itself down to the
root, store that level's vtable and destroy its members in reverse order
(`jal <member dtor>` with a1 = -1, or `__destroy_arr(this + off, dtor, size,
count)` for arrays); the base levels are inline destructors, so each is
guarded by its own `beqz this`. Then CWork (vtable 0x5A6F50, m24 CLib10) and
`delete` when flagged.

Class names and vtables come from MW RTTI (config/SLUS_209.64/rtti.txt, written by
tools/rtti_scan.py). This reads each candidate's asm, rebuilds the hierarchy
and member layout, compiles, and keeps ONLY the byte-identical destructors in
src/game/auto/cwork_dtors.cpp (+ config/SLUS_209.64/symbols.auto_cwork.txt).
Classes used as bases get inline destructors (their out-of-line copies are
mapped to the original only when they match too). Member classes stay
placeholders (CUnk<dtor addr>), sized from array strides.

usage: python -I tools/gen_cwork_dtors.py
"""
import contextlib
import importlib.util
import io
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "src/game/auto/cwork_dtors.cpp"
SYMS = ROOT / "config/SLUS_209.64/symbols.auto_cwork.txt"
CWORK_VT, CLIB10_DT = 0x5A6F50, 0x13D240

spec = importlib.util.spec_from_file_location("funcdiff", ROOT / "tools/funcdiff.py")
fd = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fd)


def asm_functions():
    """{addr: [instruction text]} for every function of the original asm, minus
    those provided by hand-written sources (named in config/SLUS_209.64/symbols.txt)."""
    taken = {int(m.group(1), 16) for m in re.finditer(r"(?m)^\w+\s*=\s*(0x[0-9A-Fa-f]+);",
                                                    (ROOT / "config/SLUS_209.64/symbols.txt").read_text())}
    funcs = {}
    for part in re.split(r"(?m)^(?=nonmatching )", (ROOT / "asm/us/text.s").read_text())[1:]:
        ins = re.findall(r"(?m)^\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(.*)$", part)
        if ins and int(ins[0][0], 16) not in taken:
            funcs[int(ins[0][0], 16)] = [t.strip() for _, t in ins]
    return funcs


def known_names():
    names = {}
    for f in ("config/SLUS_209.64/symbols.txt", "config/SLUS_209.64/symbols.auto.txt"):
        for m in re.finditer(r"(?m)^(__dt__(\d+)(\w+?)Fv)\s*=\s*(0x[0-9A-Fa-f]+);", (ROOT / f).read_text()):
            names[int(m.group(4), 16)] = m.group(3)
    return names


def parse(ins, vt):
    """[(vtable, [(off, dtor, size, count)] in destruction order)] per level, or None."""
    m = re.match(r"daddu\s+(\$s[01]), \$a0, \$zero", next((l for l in ins if l.endswith("$a0, $zero")), ""))
    if not m:
        return None
    this = m.group(1)
    text = "\n".join(ins)
    if f"%hi(D_{vt:08X})" not in text or f"%hi(D_{CWORK_VT:08X})" not in text:
        return None
    start = re.search(rf"(?m)^lui\s+\$v0, %hi\(D_{vt:08X}\)", text)
    if not start:
        return None
    stop = text.index(f"%hi(D_{CWORK_VT:08X})")
    body = text[start.start():text.rindex("\n", 0, stop)]
    lines = body.split("\n")
    i = 0
    while i < len(lines) - 1:  # evaluate each jal after its delay slot
        if lines[i].startswith("jal"):
            lines[i], lines[i + 1] = lines[i + 1], lines[i]
            i += 1
        i += 1
    levels, regs = [], {}
    for ln in lines:
        m = re.match(r"(\w+)\s+(.*)", ln)
        if not m:
            continue
        op, args = m.group(1), [a.strip() for a in m.group(2).split(",")]
        if op == "lui":
            v = re.search(r"%hi\(D_([0-9A-F]{8})\)", args[1])
            if v and args[0] == "$v0":
                levels.append((int(v.group(1), 16), []))
            elif "%hi(func_" not in args[1]:
                return None
        elif op == "addiu" and len(args) == 3:
            if args[1] == this and re.fullmatch(r"0x[0-9A-F]+", args[2]):
                regs[args[0]] = ("this", int(args[2], 16))
            elif args[1] == "$zero":
                regs[args[0]] = ("imm", int(args[2], 16) if not args[2].startswith("-") else -int(args[2][1:], 16))
            elif "%lo(func_" in args[2]:
                regs[args[0]] = ("func", int(re.search(r"func_([0-9A-F]{8})", args[2]).group(1), 16))
            elif "%lo(D_" in args[2] and args[0] == "$v0":
                pass
            else:
                return None
        elif op == "jal":
            callee = int(re.search(r"func_([0-9A-F]{8})", args[0]).group(1), 16)
            a0, a1 = regs.get("$a0"), regs.get("$a1")
            if not levels:
                return None
            if callee == 0x1003E0:
                a2, a3 = regs.get("$a2"), regs.get("$a3")
                if not (a0 and a0[0] == "this" and a1 and a1[0] == "func" and a2 and a3):
                    return None
                levels[-1][1].append((a0[1], a1[1], a2[1], a3[1]))
            else:
                if not (a0 and a0[0] == "this" and a1 == ("imm", -1)):
                    return None
                levels[-1][1].append((a0[1], callee, None, 1))
            regs = {}
        elif op == "sw":
            if args != ["$v0", f"0x0({this})"]:
                return None
        elif op not in ("nop", "beqz"):
            return None
    offs = [o for _, mem in levels for o, *_ in mem]
    if not levels or levels[0][0] != vt or offs != sorted(offs, reverse=True) or (offs and min(offs) < 0x3C):
        return None
    return levels


def main():
    funcs = asm_functions()
    names = known_names()
    rows = [l.split() for l in (ROOT / "config/SLUS_209.64/rtti.txt").read_text().splitlines() if l[:1].isalnum() and not l.startswith("bases")]
    multi = {r[1] for r in rows if r[2] != "0"}
    vt_name = {int(r[0], 16): r[1] for r in rows if r[2] == "0" and r[1] not in multi}
    dtor_of = {r[1]: int(r[4], 16) for r in rows if r[2] == "0" and r[1] not in multi}
    vt_of = {n: v for v, n in vt_name.items()}

    parent, members, cands, sizes, bad = {}, {}, {}, {}, set()
    for vt, cls in vt_name.items():
        dt = dtor_of[cls]
        if dt not in funcs:
            continue
        lv = parse(funcs[dt], vt)
        if not lv or any(v not in vt_name for v, _ in lv):
            continue
        chain = [vt_name[v] for v, _ in lv] + ["CWork"]
        ok = True
        for i, (v, mem) in enumerate(lv):
            c = chain[i]
            for prev, new in ((parent.get(c), chain[i + 1]), (members.get(c), mem)):
                if prev is not None and prev != new:
                    ok = False
        if not ok:
            bad.update(chain[:-1])
            continue
        for i, (v, mem) in enumerate(lv):
            parent[chain[i]], members[chain[i]] = chain[i + 1], mem
            for off, d, size, cnt in mem:
                if size:
                    sizes[d] = size
        cands[cls] = dt

    mclass = lambda d: "CLib10" if d == CLIB10_DT else names.get(d, f"CUnk{d:X}")

    def emit(keep):
        need = set()
        for c in keep:
            while c != "CWork":
                need.add(c)
                c = parent[c]
        bases = {parent[c] for c in need}
        used = sorted({d for c in need for _, d, _, _ in members[c] if d != CLIB10_DT})
        src = ["// AUTO-GENERATED by tools/gen_cwork_dtors.py: destructors of CWork-derived classes.",
               "// Class names are from MW RTTI; members are placeholders. Verified byte-for-byte.",
               '#include "game/work.h"', ""]
        src += [f"class {mclass(d)} {{ public: ~{mclass(d)}(); char pad[{sizes.get(d, 1):#x}]; }};" for d in used]
        src.append("")
        end = {"CWork": 0x3C}

        def define(c):
            if c in end:
                return
            define(parent[c])
            body = [f"class {c} : public {parent[c]} {{", "public:",
                    f"    virtual ~{c}()" + (" {}" if c in bases else ";")]
            pos = end[parent[c]]
            for off, d, size, cnt in reversed(members[c]):
                if off > pos:
                    body.append(f"    char pad{pos:X}[{off - pos:#x}];")
                body.append(f"    {mclass(d)} m{off:X}" + (f"[{cnt}];" if size else ";"))
                pos = off + (size or sizes.get(d, 1)) * cnt
            end[c] = pos
            body.append("};")
            if c not in bases:
                body.append(f"{c}::~{c}() {{}}")
            src.extend(body + [""])

        for c in sorted(need, key=lambda c: dtor_of[c]):
            define(c)
        OUT.write_text("\n".join(src) + "\n")
        return need, used

    keep = sorted(c for c in cands if c not in bad)
    for _ in range(3):
        need, used = emit(keep)
        obj = "scratch/cwork_dtors.o"
        r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                            "MWCIncludes=. wibo tools/compilers/mwcps2-3.0b52-030722/mwccps2.exe -c -O3,p "
                            f"-fl divbyzerocheck -inline depth=8 -lang c++ -Cpp_exceptions off -nostdinc -Iinclude -o {obj} "
                            f"{OUT.relative_to(ROOT).as_posix()}"], capture_output=True, text=True)
        if r.returncode:
            raise SystemExit(r.stdout + r.stderr)
        ok = set()
        for c in need:
            if dtor_of[c] in funcs:
                with contextlib.redirect_stdout(io.StringIO()):
                    try:
                        if fd.main(str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(ROOT / obj),
                                   f"__dt__{len(c)}{c}Fv", hex(dtor_of[c])) == 0:
                            ok.add(c)
                    except Exception:
                        pass
        new_keep = sorted(c for c in keep if c in ok)
        if new_keep == keep:
            break
        keep = new_keep
    syms = []
    for c in sorted(need, key=lambda c: dtor_of[c]):
        syms.append(f"__vt__{len(c)}{c} = 0x{vt_of[c]:X};")
        if c in ok:
            syms.append(f"__dt__{len(c)}{c}Fv = 0x{dtor_of[c]:X};")
    for d in used:
        if d not in names:
            syms.append(f"__dt__{len(mclass(d))}{mclass(d)}Fv = 0x{d:X};")
    SYMS.write_text("// AUTO-GENERATED by tools/gen_cwork_dtors.py\n" + "\n".join(syms) + "\n")
    print(f"CWork-derived destructors: {len(ok)} match ({len(keep)} leaf candidates kept of {len(cands)})")


if __name__ == "__main__":
    main()
