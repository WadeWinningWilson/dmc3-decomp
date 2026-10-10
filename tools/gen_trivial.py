"""Generate C for trivially-shaped two-instruction functions in the MW game
code, compile them, keep ONLY the ones that match the original bytes, and
write the survivors to src/game/auto/*.c.

Shapes (USA MW range only, 0x195158-0x50FE28):
  jr ra ; nop                         -> empty function
  jr ra ; addiu/daddu v0 <- const     -> return constant
  jr ra ; l{b,bu,h,hu,w} v0, N(a0)    -> field getter
  jr ra ; lwc1 f0, N(a0)              -> float getter
  jr ra ; s{b,h,w} a1|zero, N(a0)     -> field setter / clear
  jr ra ; swc1 f12, N(a0)             -> float setter
  jr ra ; addiu v0, a0, N             -> member address
  jr ra ; daddu v0, a0, zero          -> return this
  j f ; nop / addiu a0,a0,N / addiu a1,zero,N -> forwarders

Names stay func_XXXXXXXX; types are placeholders (char *p + offset), so these
are "matched", not "identified". usage: python -I tools/gen_trivial.py
"""
import importlib.util
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LO, HI = 0x195158, 0x50FE28
CC, FLAGS = "mwcps2-3.0b52-030722", "-O3,p -fl divbyzerocheck"
OUT = ROOT / "src/game/auto"

spec = importlib.util.spec_from_file_location("funcdiff", ROOT / "tools/funcdiff.py")
fd = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fd)

LOADT = {"lb": "signed char", "lbu": "unsigned char", "lh": "short", "lhu": "unsigned short", "lw": "int"}
STORT = {"sb": "char", "sh": "short", "sw": "int"}


def imm(s):
    return int(s, 0)


def gen(name, ins):
    a, b = ins
    if a == "jr $ra":
        if b == "nop":
            return "leaf", f"void {name}(void) {{}}"
        if m := re.fullmatch(r"addiu \$v0, \$zero, (-?0x[0-9A-F]+|\d+)", b):
            return "leaf", f"int {name}(void) {{ return {imm(m.group(1))}; }}"
        if b == "daddu $v0, $zero, $zero":
            return "leaf", f"int {name}(void) {{ return 0; }}"
        if m := re.fullmatch(r"(lb|lbu|lh|lhu|lw) \$v0, (-?0x[0-9A-F]+|\d+)\(\$a0\)", b):
            t = LOADT[m.group(1)]
            return "leaf", f"{t} {name}(char *p) {{ return *({t} *)(p + {imm(m.group(2))}); }}"
        if m := re.fullmatch(r"lwc1 \$f0, (-?0x[0-9A-F]+|\d+)\(\$a0\)", b):
            return "leaf", f"float {name}(char *p) {{ return *(float *)(p + {imm(m.group(1))}); }}"
        if m := re.fullmatch(r"(sb|sh|sw) \$a1, (-?0x[0-9A-F]+|\d+)\(\$a0\)", b):
            t = STORT[m.group(1)]
            return "leaf", f"void {name}(char *p, {t} v) {{ *({t} *)(p + {imm(m.group(2))}) = v; }}"
        if m := re.fullmatch(r"(sb|sh|sw) \$zero, (-?0x[0-9A-F]+|\d+)\(\$a0\)", b):
            t = STORT[m.group(1)]
            return "leaf", f"void {name}(char *p) {{ *({t} *)(p + {imm(m.group(2))}) = 0; }}"
        if m := re.fullmatch(r"swc1 \$f12, (-?0x[0-9A-F]+|\d+)\(\$a0\)", b):
            return "leaf", f"void {name}(char *p, float v) {{ *(float *)(p + {imm(m.group(1))}) = v; }}"
        if m := re.fullmatch(r"addiu \$v0, \$a0, (-?0x[0-9A-F]+|\d+)", b):
            return "leaf", f"char *{name}(char *p) {{ return p + {imm(m.group(1))}; }}"
        if b == "daddu $v0, $a0, $zero":
            return "leaf", f"void *{name}(void *p) {{ return p; }}"
    if m := re.fullmatch(r"j (func_[0-9A-F]{8})", a):
        t = m.group(1)
        if b == "nop":
            return ("fwd", t), f"void {name}(void) {{ {t}(); }}"
        if m2 := re.fullmatch(r"addiu \$a0, \$a0, (-?0x[0-9A-F]+|\d+)", b):
            return ("fwd", t), f"void {name}(char *p) {{ {t}(p + {imm(m2.group(1))}); }}"
        if m2 := re.fullmatch(r"addiu \$a1, \$zero, (-?0x[0-9A-F]+|\d+)", b):
            return ("fwd", t), f"void {name}(void *p) {{ {t}(p, {imm(m2.group(1))}); }}"
    return None, None


def compile_and_check(cfile, names, addrs):
    obj = ROOT / "scratch/gen" / (cfile.stem + ".o")
    obj.parent.mkdir(parents=True, exist_ok=True)
    rel = cfile.relative_to(ROOT).as_posix()
    r = subprocess.run(["docker", "exec", "-w", "/w", "dmc3b", "sh", "-c",
                        f"MWCIncludes=. wibo tools/compilers/{CC}/mwccps2.exe -c {FLAGS} -nostdinc "
                        f"-o {obj.relative_to(ROOT).as_posix()} {rel}"], capture_output=True, text=True)
    if r.returncode:
        raise SystemExit(r.stdout + r.stderr)
    ok = set()
    import contextlib, io
    for n in names:
        with contextlib.redirect_stdout(io.StringIO()):
            try:
                if fd.main(str(ROOT / "orig/SLUS_209.64/SLUS_209.64"), str(obj), n, hex(addrs[n])) == 0:
                    ok.add(n)
            except SystemExit:
                pass
    return ok


def main():
    src = (ROOT / "asm/us/text.s").read_text()
    blocks = re.findall(r"^glabel (func_([0-9A-F]+))\n(.*?)^endlabel", src, re.M | re.S)
    existing = set()
    for p in (ROOT / "src").rglob("*.c*"):
        if OUT not in p.parents:
            existing |= set(re.findall(r"\b(func_[0-9A-F]{8})\s*\(", p.read_text()))
    leaf, fwd, addrs = {}, {}, {}
    for name, a, body in blocks:
        A = int(a, 16)
        if not (LO <= A < HI) or name in existing:
            continue
        ins = [re.sub(r"\s+", " ", l.split("*/", 1)[1].strip()) for l in body.splitlines() if "*/" in l]
        if len(ins) != 2:
            continue
        kind, code = gen(name, ins)
        if kind == "leaf":
            leaf[name] = code
        elif kind:
            fwd[name] = (kind[1], code)
        if kind:
            addrs[name] = A

    hdr = ("/* AUTO-GENERATED by tools/gen_trivial.py from the original asm, then\n"
           " * verified byte-for-byte; only matching functions are kept. Types are\n"
           " * placeholders (offset-based); move functions to their real TUs as they\n"
           " * are identified. */\n")
    OUT.mkdir(parents=True, exist_ok=True)
    stats = {}
    # leaves: no calls, one file
    lf = OUT / "leaf.c"
    lf.write_text(hdr + "\n".join(leaf[n] for n in sorted(leaf)) + "\n")
    ok_leaf = compile_and_check(lf, list(leaf), addrs)
    lf.write_text(hdr + "\n".join(leaf[n] for n in sorted(ok_leaf)) + "\n")
    stats["leaf"] = (len(ok_leaf), len(leaf))
    # forwarders: never define a function that is also called in the same file
    files, placed = [], {}
    for n in sorted(fwd):
        t, code = fwd[n]
        for i, f in enumerate(files):
            if t not in f["defs"] and n not in f["calls"]:
                break
        else:
            files.append({"defs": set(), "calls": set(), "code": []})
            i = len(files) - 1
        files[i]["defs"].add(n); files[i]["calls"].add(t); files[i]["code"].append(code)
    ok_fwd = set()
    for i, f in enumerate(files):
        path = OUT / f"forward{i}.c"
        ext = "".join(f"extern void {t}();\n" for t in sorted(f["calls"]))
        path.write_text(hdr + ext + "\n".join(f["code"]) + "\n")
        good = compile_and_check(path, sorted(f["defs"]), addrs)
        ok_fwd |= good
        keep = [c for c in f["code"] if re.search(r"(func_[0-9A-F]{8})\(", c).group(1) in good]
        calls = sorted({re.search(r"\{ (func_[0-9A-F]{8})\(", c).group(1) for c in keep})
        path.write_text(hdr + "".join(f"extern void {t}();\n" for t in calls) + "\n".join(keep) + "\n")
    stats["forward"] = (len(ok_fwd), len(fwd))
    for k, (g, t) in stats.items():
        print(f"{k:8s}: {g}/{t} generated functions match")
    bad = sorted(set(leaf) - ok_leaf)[:10] + sorted(set(fwd) - ok_fwd)[:10]
    if bad:
        print("non-matching examples:", bad)


if __name__ == "__main__":
    main()
