"""Generate deleting destructors that call their parent's destructor out of line.

Shape (single or multiple inheritance): store each of the class's vtables
(primary at +0, secondaries at their subobject offsets), destroy the class's
own members in reverse order (`jal <member dtor>` with a1 = -1, or
`__destroy_arr`), call `Parent::~Parent(this, 0)`, then `delete` if flagged.

Everything comes from MW RTTI (config/SLUS_209.64/rtti.txt, tools/rtti_scan.py):
class names, vtables and slot counts, and the ancestor lists with subobject
offsets. The class model needs:
  - every all-but-last vtable of the group to have the original slot count
    (the secondary vtable addends depend on it; MW appends a multiply-
    inheriting class's new virtuals to its LAST vtable),
  - each secondary base at its original offset (a base that must skip to the
    next 16-byte boundary is declared 16-aligned).
Members stay placeholders (CUnk<dtor addr>). Each candidate is compiled and
kept only if byte-identical: src/game/auto/class_dtors.cpp and
config/SLUS_209.64/symbols.auto_class.txt.

usage: python -I tools/gen_class_dtors.py
"""
import contextlib
import importlib.util
import io
import re
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "src/game/auto/class_dtors.cpp"
SYMS = ROOT / "config/SLUS_209.64/symbols.auto_class.txt"
CLIB10_DT = 0x13D240
CC = ("MWCIncludes=. wibo tools/compilers/mwcps2-3.0b52-030722/mwccps2.exe -c -O3,p -fl divbyzerocheck "
      "-inline depth=8 -lang c++ -Cpp_exceptions off -nostdinc -Iinclude")

spec = importlib.util.spec_from_file_location("g", ROOT / "tools/gen_cwork_dtors.py")
g = importlib.util.module_from_spec(spec)
spec.loader.exec_module(g)
fd = g.fd


def load_rtti():
    vts, bases = {}, {}
    for l in (ROOT / "config/SLUS_209.64/rtti.txt").read_text().splitlines():
        p = l.split()
        if l.startswith("bases"):
            bases[p[1]] = [(b.split("@")[0], int(b.split("@")[1], 16)) for b in p[2:]]
        elif l[:1].isalnum():
            vts.setdefault(p[1], []).append((int(p[0], 16), -int(p[2]), int(p[3]), [int(x, 16) for x in p[4:]]))
    # the scan stops at a pure-virtual (0) slot, so size every vtable but the
    # last of a group from the distance to the next one
    for c, lst in vts.items():
        lst.sort()
        for i in range(len(lst) - 1):
            a, off, n, slots = lst[i]
            lst[i] = (a, off, (lst[i + 1][0] - a - 8) // 4, slots)
    return vts, bases


def parse(ins, vtabs, dtor_cls):
    """(stores {off: vt}, members [(off, dtor, size, count)], parent dtor) or None."""
    m = re.match(r"daddu\s+(\$s[0-7]), \$a0, \$zero", next((l for l in ins if l.endswith("$a0, $zero")), ""))
    if not m:
        return None
    this = m.group(1)
    lines = list(ins)
    i = 0
    while i < len(lines) - 1:  # evaluate each jal after its delay slot
        if lines[i].startswith("jal"):
            lines[i], lines[i + 1] = lines[i + 1], lines[i]
            i += 1
        i += 1
    regs = {"$a0": ("this", 0)}
    stores, members, parent, state = {}, [], None, 0
    for ln in lines:
        mm = re.match(r"(\w+)\s+(.*)", ln)
        if not mm:
            continue
        op, args = mm.group(1), [a.strip() for a in mm.group(2).split(",")]
        if state == 0:  # until `daddu this, a0`
            if op == "daddu" and args == [this, "$a0", "$zero"]:
                state = 1
            continue
        if state == 2:  # after the parent call: delete sequence
            if op == "jal" and "func_00100580" not in args[0]:
                return None
            continue
        if op == "lui":
            v = re.search(r"%hi\(D_([0-9A-F]{8})\)", args[1])
            if v:
                regs[args[0]] = ("vthi", int(v.group(1), 16))
            elif "%hi(func_" not in args[1]:
                return None
        elif op == "addiu" and len(args) == 3:
            v = re.search(r"%lo\(D_([0-9A-F]{8})\)", args[2])
            if v:
                regs[args[0]] = ("vt", int(v.group(1), 16))
            elif args[1] == this and re.fullmatch(r"0x[0-9A-F]+", args[2]):
                regs[args[0]] = ("this", int(args[2], 16))
            elif args[1] == "$zero":
                regs[args[0]] = ("imm", int(args[2], 16) if not args[2].startswith("-") else -int(args[2][1:], 16))
            elif "%lo(func_" in args[2]:
                regs[args[0]] = ("func", int(re.search(r"func_([0-9A-F]{8})", args[2]).group(1), 16))
            else:
                return None
        elif op == "daddu":
            if args == ["$a1", "$zero", "$zero"]:
                regs["$a1"] = ("imm", 0)
            elif args[1:] == [this, "$zero"]:
                regs[args[0]] = ("this", 0)
            elif args == [this.replace("$s0", "$s1") if this == "$s0" else "$s0", "$a1", "$zero"]:
                pass
            else:
                return None
        elif op == "sw":
            v = regs.get(args[0])
            om = re.fullmatch(r"(0x[0-9A-F]+)\((\$\w+)\)", args[1])
            if not (v and v[0] == "vt" and om and om.group(2) == this):
                return None
            stores[int(om.group(1), 16)] = v[1]
        elif op == "jal":
            callee = int(re.search(r"func_([0-9A-F]{8})", args[0]).group(1), 16)
            a0, a1 = regs.get("$a0"), regs.get("$a1")
            if callee == 0x1003E0:
                a2, a3 = regs.get("$a2"), regs.get("$a3")
                if not (a0 and a0[0] == "this" and a1 and a1[0] == "func" and a2 and a3):
                    return None
                members.append((a0[1], a1[1], a2[1], a3[1]))
            elif callee in dtor_cls and a0 == ("this", 0) and a1 == ("imm", 0):
                parent, state = callee, 2
            elif a0 and a0[0] == "this" and a0[1] > 0 and a1 == ("imm", -1):
                members.append((a0[1], callee, None, 1))
            else:
                return None
            regs = {k: v for k, v in regs.items() if k[1] == "s"}
        elif op in ("beqz", "nop", "blez", "dsll32", "dsra32"):
            continue
        else:
            return None
    if parent is None:
        return None
    offs = [o for o, *_ in members]
    if offs != sorted(offs, reverse=True):
        return None
    return stores, members, parent


def main():
    funcs = g.asm_functions()
    names = g.known_names()
    vts, bases = load_rtti()
    primary = {c: [v for v in lst if v[1] == 0][0] for c, lst in vts.items() if any(v[1] == 0 for v in lst)}
    dtor_cls = {p[3][0]: c for c, p in primary.items() if p[3]}
    generated = set(re.findall(r"__dt__\d+(\w+?)Fv", (ROOT / "config/SLUS_209.64/symbols.auto_cwork.txt").read_text()))

    cands, sizes = {}, {}
    for c, p in primary.items():
        dt = p[3][0] if p[3] else None
        if dt not in funcs or c in generated:
            continue
        r = parse(funcs[dt], vts[c], dtor_cls)
        if not r:
            continue
        stores, members, pdt = r
        want = {off: vt for vt, off, n, _ in vts[c]}
        if stores != want:
            continue
        cands[c] = (dt, members, dtor_cls[pdt])
        for off, d, size, cnt in members:
            if size:
                sizes[d] = size

    def ancestors(x):
        return {a for a, _ in bases.get(x, [])}

    def direct_bases(c):
        anc = bases.get(c, [])
        par = [a for a, o in anc if o == 0]
        prim = par[-1] if par else None
        inherited = ancestors(prim) | ({prim} if prim else set())
        others = {(a, o) for a, o in anc if o and a not in inherited}
        sec = sorted(((a, o) for a, o in others if not any(a in ancestors(b) for b, _ in others)),
                     key=lambda x: x[1])
        return prim, sec

    mclass = lambda d: "CLib10" if d == CLIB10_DT else names.get(d, f"CUnk{d:X}")

    def build(keep):
        """C++ source for the candidates in `keep` (or None if a layout is impossible)."""
        out, defined, ends, vcount, aligned = [], {"CWork": True}, {"CWork": 0x3C}, {}, set()
        bad = set()
        flex = {}  # base sizes stretched to reach the next base: {class: size}
        own_end = {}

        def icount(c):
            """own slot count of an interface: the smallest of its users' vtables at that base"""
            counts = [nslots(user, o) for user, anc in bases.items() for a, o in anc if a == c]
            counts = [k for k in counts if k]
            return min(counts) if counts else (nslots(c, 0) or 1)

        def nslots(c, off):
            return next((n for vt, o, n, _ in vts.get(c, []) if o == off), None)

        def define(c):
            if c in defined:
                return defined[c]
            prim, sec = direct_bases(c)
            ok = True
            for b in [prim] + [a for a, _ in sec]:
                if b and not define(b):
                    ok = False
            if not ok:
                defined[c] = False
                return False
            head = f"class {c}" + (" : " + ", ".join(f"public {b}" for b in [prim] + [a for a, _ in sec] if b) if prim or sec else "")
            body = []
            # end of the bases, placing each secondary base at its offset
            end = ends.get(prim, 4) if prim else 4
            prev, prev_off = prim, 0
            for b, off in sec:
                need = off - prev_off
                if end < off and prev and prev != "CWork" and flex.get(prev, need) == need \
                        and ends.get(prev, 4) <= need and not (prev in aligned and need % 16):
                    flex[prev] = ends[prev] = need  # stretch the previous base to reach this one
                    end = off
                if end == off:
                    pass
                elif end < off and (end + 15) & ~15 == off:
                    aligned.add(b)
                else:
                    defined[c] = False
                    return False
                end = off + ends.get(b, 4)
                prev, prev_off = b, off
            virt = []
            if not prim and not sec:  # a root: declare its primary slot count
                n = nslots(c, 0) or 1
                virt = [f"    virtual void v{c}_{i:02d}();" for i in range(1, n)]
            elif sec:  # MW appends a multiply-inheriting class's new virtuals to its last vtable
                lb, lo = sec[-1]
                have, own = nslots(c, lo), icount(lb)
                if not direct_bases(lb)[0] and not direct_bases(lb)[1] and have and own and have > own:
                    virt = [f"    virtual void n{c}_{i:02d}();" for i in range(have - own)]
            body.append(f"    virtual ~{c}()" + (";" if c in cands or c in dtor_owner else ";"))
            body += virt
            members = cands[c][1] if c in cands and c in keep else []
            pos = end
            for off, d, size, cnt in reversed(members):
                if off < pos:
                    defined[c] = False
                    return False
                if off > pos:
                    body.append(f"    char pad{pos:X}[{off - pos:#x}];")
                body.append(f"    {mclass(d)} m{off:X}" + (f"[{cnt}];" if size else ";"))
                pos = off + (size or sizes.get(d, 1)) * cnt
            own_end[c] = pos
            ends[c] = max(pos, flex.get(c, 0))
            out.append((c, head, body))
            defined[c] = True
            return True

        dtor_owner = set(primary)
        # two passes: the first finds the stretched base sizes, the second lays
        # every class out with them already known
        for _pass in range(2):
            out.clear(); own_end.clear(); bad.clear()
            defined.clear(); defined["CWork"] = True
            ends.clear(); ends["CWork"] = 0x3C
            for c in sorted(keep, key=lambda c: cands[c][0]):
                if not define(c):
                    bad.add(c)
        # interfaces (secondary-only roots): slot count from the first class introducing them
        lines = ['#include "game/work.h"', ""]
        lines += [f"class {mclass(d)} {{ public: ~{mclass(d)}(); char pad[{sizes.get(d, 1):#x}]; }};"
                  for d in sorted({d for c in keep if c not in bad for _, d, _, _ in cands[c][1] if d != CLIB10_DT})]
        lines.append("")
        for c, head, body in out:
            if c == "CWork":
                continue
            prim, sec = direct_bases(c)
            if not prim and not sec:
                # interface or root: slot count from a user's vtable at this base's offset
                # the interface's own count is the smallest of its users' vtables at
                # that base (derived classes only ever append slots)
                counts = [nslots(user, o) for user, anc in bases.items() for a, o in anc if a == c]
                counts = [k for k in counts if k]
                n = min(counts) if counts else (nslots(c, 0) or 1)
                body = [body[0]] + [f"    virtual void v{c}_{i:02d}();" for i in range(1, n)]
                size = ends.get(c, 4)
                filled = 4
                if c in aligned:
                    body.append("    float align16[4] __attribute__((aligned(16)));")
                    filled = 0x20
                if size > filled:
                    body.append(f"    char pad{filled:X}[{size - filled:#x}];")
            if (prim or sec) and ends.get(c, 0) > own_end.get(c, 0):
                body.append(f"    char tail{own_end[c]:X}[{ends[c] - own_end[c]:#x}];")
            lines.append(f"{head} {{\npublic:\n" + "\n".join(body) + "\n};")
            if c in keep and c not in bad:
                lines.append(f"{c}::~{c}() {{}}")
            lines.append("")
        return "\n".join(lines) + "\n", bad

    keep = sorted(cands)
    for _ in range(4):
        src, bad = build(keep)
        OUT.write_text(src)
        if _ == 0:  # keep the all-candidates source for diagnosis
            (ROOT / "scratch/class_dtors_all.cpp").write_text(src)
        obj = "scratch/class_dtors.o"
        r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                            f"{CC} -o {obj} {OUT.relative_to(ROOT).as_posix()}"], capture_output=True, text=True)
        if r.returncode:
            raise SystemExit(r.stdout[-3000:] + r.stderr[-3000:])
        ok = set()
        if _ == 0:
            subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                            f"cp {obj} scratch/class_dtors_all.o"])
        for c in keep:
            if c in bad:
                continue
            with contextlib.redirect_stdout(io.StringIO()):
                try:
                    if fd.main(str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(ROOT / obj),
                               f"__dt__{len(c)}{c}Fv", hex(cands[c][0])) == 0:
                        ok.add(c)
                except Exception:
                    pass
        new_keep = sorted(ok)
        if new_keep == keep:
            break
        keep = new_keep
    src, _ = build(keep)
    OUT.write_text("// AUTO-GENERATED by tools/gen_class_dtors.py: destructors that call their parent's.\n"
                   "// Class names, hierarchy and vtables are from MW RTTI; members are placeholders.\n" + src)
    syms = []
    for c in keep:
        syms.append(f"__dt__{len(c)}{c}Fv = 0x{cands[c][0]:X};")
        syms.append(f"__vt__{len(c)}{c} = 0x{primary[c][0]:X};")
        pc = cands[c][2]
        if f"__dt__{len(pc)}{pc}Fv" not in "\n".join(syms) and pc not in generated and pc != "CWork":
            syms.append(f"__dt__{len(pc)}{pc}Fv = 0x{primary[pc][3][0]:X};")
    for d in sorted({d for c in keep for _, d, _, _ in cands[c][1] if d != CLIB10_DT and d not in names}):
        syms.append(f"__dt__{len(mclass(d))}{mclass(d)}Fv = 0x{d:X};")
    SYMS.write_text("// AUTO-GENERATED by tools/gen_class_dtors.py\n" + "\n".join(dict.fromkeys(syms)) + "\n")
    print(f"parent-calling destructors: {len(keep)} match of {len(cands)} candidates")


if __name__ == "__main__":
    main()
