"""Infer translation-unit (source file) boundaries in the USA .text and name the units.

The ELF is stripped and every section is merged, so units have to be recovered from what
linking leaves behind. Evidence, strongest first:

- RTTI vtables (config/<elf>/rtti.txt). A class's own virtual functions sit in the unit
  that emits its vtable, and vtables are emitted in link order. Each class with own
  methods gives an anchored span named after the class.
- `__sinit_*` (asm/us/sinit.s): one per C++ unit with constructed globals. The ctor and
  dtor callbacks they register are anchors for that unit.
- Data locality: a data symbol whose referencing functions all lie within a short span
  belongs to one unit, so no boundary can fall inside that span.
- Known source names: real source files already in src/ (mcsys.c, movie.cpp, ...) and the
  one surviving filename string (eflSifRpc.c).
- Below GAME_START the code is ee-gcc, which aligns functions to 8 but object .text to
  16. A padding gap in front of a function therefore marks an object boundary.

Overlapping spans are merged into clusters. Functions between clusters go to the
neighbour they share the most calls with. Unanchored stretches stay unnamed (unit_XXXXXXXX).
The result is an estimate: boundaries inside an unanchored stretch are not recoverable from
the binary alone, and some units may be merged or split. tus.txt records the evidence for
each unit.

usage: python -I tools/tu_map.py            (writes config/SLUS_209.64/tus.txt)
"""
import collections
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
CFG = ROOT / "config/SLUS_209.64"
GAME_START = 0x195158
TEXT_END = 0x50FF08
LOCAL_SPAN = 0x800       # data referenced only within this many bytes is unit-local
CLASS_SPAN = 0x30000     # a class whose own methods spread wider than this is not used as an anchor
SMALL_GAP = 0x400        # an unconnected stretch shorter than this joins the unit before it


def load_text():
    """Functions (start -> size), call edges, and data references from the splat asm."""
    sizes, calls, drefs = {}, collections.defaultdict(set), collections.defaultdict(set)
    cur = None
    for line in open(ROOT / "asm/us/text.s", errors="ignore"):
        m = re.match(r"nonmatching (func_([0-9A-F]{8})), (0x[0-9A-F]+)", line)
        if m:
            sizes[int(m.group(2), 16)] = int(m.group(3), 16)
            continue
        if line.startswith("glabel "):
            name = line.split()[1]
            cur = int(name[5:], 16) if re.match(r"func_[0-9A-F]{8}$", name) else cur
            continue
        if cur is None:
            continue
        for t in re.findall(r"jal\s+func_([0-9A-F]{8})", line):
            calls[cur].add(int(t, 16))
        for t in re.findall(r"%(?:hi|lo|gp_rel)\((?:D|jtbl)_([0-9A-F]{8})\)", line):
            drefs[cur].add(int(t, 16))
    return sizes, calls, drefs


def load_classes():
    """class -> sorted own method addresses (functions used by exactly one class's vtables)."""
    rows = []
    for line in open(CFG / "rtti.txt"):
        if not line[:1].isdigit():
            continue
        p = line.split()
        rows.append((int(p[0], 16), p[1], [int(x, 16) for x in p[4:]]))
    users = collections.defaultdict(set)
    for _, cls, fs in rows:
        for f in fs:
            users[f].add(cls)
    own, order = collections.defaultdict(set), []
    for vt, cls, fs in rows:
        if cls not in order:
            order.append(cls)
        own[cls].update(f for f in fs if len(users[f]) == 1)
    return [(cls, sorted(own[cls])) for cls in order if own[cls]]


def load_sinits():
    """Function addresses referenced by each __sinit (registered ctor/dtor callbacks)."""
    groups, cur = [], None
    for line in open(ROOT / "asm/us/sinit.s", errors="ignore"):
        if line.startswith("glabel "):
            cur = []
            groups.append(cur)
        elif cur is not None:
            cur += [int(t, 16) for t in re.findall(r"%hi\(func_([0-9A-F]{8})\)", line)]
    return [g for g in groups if g]


def known_sources(func_set):
    """Real source files already in src/ (not generated or bucket files): name -> addresses."""
    out = {}
    # files written by tools/split_tus.py from an earlier map are not evidence
    made = set()
    if (CFG / "tus.txt").exists():
        for l in (CFG / "tus.txt").read_text().splitlines():
            f = l.split()
            if len(f) >= 4 and not l.startswith("#") and "source" not in f[3]:
                made.add(f[2].split("/")[-1])
    for p in (ROOT / "src").rglob("*"):
        if p.suffix not in (".c", ".cpp") or p.parent.name in ("hand", "auto", "unsorted", "poc"):
            continue
        unit = re.sub(r"(_\d+)?(\.\w+)*$", "", p.stem)
        if unit in made or "lib" in p.relative_to(ROOT / "src").parts[:1]:
            continue
        addrs = [int(a, 16) for a in re.findall(r"^[^\n;]*\bfunc_([0-9A-F]{8})\([^;\n]*\)\s*\{", p.read_text(errors="ignore"), re.M)]
        addrs = [a for a in addrs if a in func_set]
        if addrs:
            out[p.stem] = addrs
    return out


def gcc_objects(funcs, sizes):
    """Object starts in the ee-gcc range: a 16-aligned function preceded by padding."""
    starts = [funcs[0]]
    for prev, f in zip(funcs, funcs[1:]):
        if f >= GAME_START:
            break
        if f % 16 == 0 and prev + sizes.get(prev, f - prev) < f:
            starts.append(f)
    return starts


# library of an ee-gcc object, from the strings its functions reference
LIBS = [(r"^libpad", "sce/libpad"), (r"^libdma", "sce/libdma"), (r"^libmc|mcserv|mcman", "sce/libmc"),
        (r"libkernl|TLB over", "sce/libkernl"), (r"^libgraph|sceGs", "sce/libgraph"), (r"^libipu|sceIpu", "sce/libipu"),
        (r"sceCd|cdvd", "sce/libcdvd"), (r"^libvu0", "sce/libvu0"), (r"sceSif|sif", "sce/libsif"),
        (r"ADXT|ADXRNA|ADXF|ADX[A-Z_]", "cri/adx"), (r"^SJ|SJX|SJRBF|SJMEM", "cri/sj"), (r"mw_sfd|MWSFD|Sofdec|SFD", "cri/sofdec"),
        (r"PS2RNA|DTX", "cri/ps2rna"), (r"htCi|dvCi|mfCi|CVFS|cvFs", "cri/cvfs"), (r"CRI", "cri/misc"),
        (r"CAPCOM RD3", "capcom/mcsys")]


def load_strings():
    """D_ address -> string literal, from the data asm."""
    out, cur = {}, None
    for line in open(ROOT / "asm/us/data/data.data.s", errors="ignore"):
        m = re.match(r"dlabel D_([0-9A-F]{8})", line)
        if m:
            cur = int(m.group(1), 16)
            continue
        m = re.search(r'\.asciz "(.*)"', line)
        if m and cur is not None and cur not in out:
            out[cur] = m.group(1)
    return out


def lib_labels(objs, drefs, funcs):
    """Label each ee-gcc object with a library; unlabelled runs between two objects of the same
    library take that library."""
    strings = load_strings()
    label = {}
    for k, o in enumerate(objs):
        end = objs[k + 1] if k + 1 < len(objs) else GAME_START
        hits = collections.Counter()
        for f in funcs:
            if o <= f < end:
                for d in drefs.get(f, ()):
                    s = strings.get(d, "")
                    for pat, lib in LIBS:
                        if re.search(pat, s):
                            hits[lib] += 1
                            break
        if hits:
            label[o] = hits.most_common(1)[0][0]
    out, last = {}, None
    for k, o in enumerate(objs):
        if o in label:
            last = label[o]
        nxt = next((label[x] for x in objs[k:] if x in label), None)
        out[o] = label.get(o) or (last if last == nxt else "sdk")
    return out


def main():
    sizes, calls, drefs = load_text()
    funcs = sorted(sizes)
    fset = set(funcs)
    idx = {f: i for i, f in enumerate(funcs)}
    game = [f for f in funcs if GAME_START <= f < TEXT_END]
    gi = {f: i for i, f in enumerate(game)}

    # anchored spans: (lo, hi, label, kind)
    spans = []
    for cls, ms in load_classes():
        ms = [m for m in ms if m in gi]
        if ms and ms[-1] - ms[0] <= CLASS_SPAN:
            spans.append((ms[0], ms[-1], cls, "class"))
    sinits = load_sinits()
    shared = collections.Counter(f for g in sinits for f in set(g))
    for g in sinits:
        g = sorted(f for f in g if f in gi and shared[f] == 1)
        if g and g[-1] - g[0] <= CLASS_SPAN:
            spans.append((g[0], g[-1], None, "sinit"))
    for name, addrs in known_sources(fset).items():
        addrs = [a for a in addrs if a in gi]
        if addrs and max(addrs) - min(addrs) <= CLASS_SPAN:
            spans.append((min(addrs), max(addrs), name, "source"))
    # the one surviving filename string
    users = collections.defaultdict(set)
    for f, ds in drefs.items():
        for d in ds:
            users[d].add(f)
    for f in users.get(0x005587E0, ()):
        if f in gi:
            spans.append((f, f, "eflSifRpc", "string"))
    # data locality: no boundary inside a span of functions sharing local data
    for d, fs in users.items():
        fs = [f for f in fs if f in gi]
        if len(fs) >= 2 and max(fs) - min(fs) <= LOCAL_SPAN:
            spans.append((min(fs), max(fs), None, "data"))

    # merge overlapping spans over the game function index
    spans.sort(key=lambda s: (gi[s[0]], gi[s[1]]))
    clusters = []
    for lo, hi, label, kind in spans:
        if clusters and gi[lo] <= gi[clusters[-1]["hi"]]:
            c = clusters[-1]
            if gi[hi] > gi[c["hi"]]:
                c["hi"] = hi
        else:
            clusters.append({"lo": lo, "hi": hi, "labels": [], "kinds": collections.Counter()})
            c = clusters[-1]
        if label and label not in c["labels"]:
            c["labels"].append(label)
        c["kinds"][kind] += 1
    # keep clusters with real anchors; data-only clusters are absorbed below
    anchored = [c for c in clusters if c["labels"] or c["kinds"]["sinit"]]
    assign = {}
    for k, c in enumerate(anchored):
        for f in game[gi[c["lo"]]:gi[c["hi"]] + 1]:
            assign[f] = k
    # undirected call affinity
    nbr = collections.defaultdict(collections.Counter)
    for f, ts in calls.items():
        for t in ts:
            if f in gi and t in gi:
                nbr[f][t] += 1
                nbr[t][f] += 1
    # fill gaps between consecutive anchored clusters: the prefix that calls into (or is called
    # from) the left cluster joins it, the suffix tied to the right cluster joins that one, and an
    # unconnected middle becomes its own unnamed unit
    for k in range(len(anchored) + 1):
        a = gi[anchored[k - 1]["hi"]] + 1 if k > 0 else 0
        b = gi[anchored[k]["lo"]] if k < len(anchored) else len(game)
        gap = game[a:b]
        if not gap:
            continue
        left, right = (k - 1 if k > 0 else None), (k if k < len(anchored) else None)
        aff_l = [sum(n for t, n in nbr[f].items() if left is not None and assign.get(t) == left) for f in gap]
        aff_r = [sum(n for t, n in nbr[f].items() if right is not None and assign.get(t) == right) for f in gap]
        p, run, best = 0, 0, 0
        for j, v in enumerate(aff_l):
            run += v
            if run > best:
                p, best = j + 1, run
        q, run, best = len(gap), 0, 0
        for j in range(len(gap) - 1, p - 1, -1):
            run += aff_r[j]
            if run > best:
                q, best = j, run
        mid = gap[p:q]
        if mid and mid[-1] + sizes[mid[-1]] - mid[0] < SMALL_GAP:
            # a few unconnected functions between two units: keep them with the left one
            p = q if left is not None else p
            q = p if left is None else q
        for j, f in enumerate(gap):
            assign[f] = left if j < p else (right if j >= q else ("gap", a + p))

    # build units in address order
    units = []
    for f in game:
        key = assign[f]
        if units and units[-1]["key"] == key:
            units[-1]["end"] = f + sizes[f]
        else:
            units.append({"key": key, "start": f, "end": f + sizes[f]})
    names = collections.Counter()
    lines = ["# Inferred translation units (USA). Generated by tools/tu_map.py; boundaries are estimates.",
             "# start    end      name                         evidence"]
    objs = gcc_objects(funcs, sizes)
    libs = lib_labels(objs, drefs, funcs)
    for k, o in enumerate(objs):
        end = objs[k + 1] if k + 1 < len(objs) else GAME_START
        lines.append("%08X %08X %-28s %s" % (o, end, "lib/%s/obj_%08X" % (libs[o], o), "gcc-align"))
    for u in units:
        if isinstance(u["key"], int):
            c = anchored[u["key"]]
            base = c["labels"][0] if c["labels"] else "unit_%08X" % u["start"]
            ev = ",".join("%s:%d" % kv for kv in sorted(c["kinds"].items()))
        else:
            base, ev = "unit_%08X" % u["start"], "none"
        base = re.sub(r"^C(?=[A-Z])", "", base)
        names[base] += 1
        name = base if names[base] == 1 else "%s_%d" % (base, names[base])
        lines.append("%08X %08X %-28s %s" % (u["start"], u["end"], name, ev))
    (CFG / "tus.txt").write_text("\n".join(lines) + "\n")
    named = sum(1 for u in units if isinstance(u["key"], int) and anchored[u["key"]]["labels"])
    print("%d game units (%d named), %d library objects" % (len(units), named, len(objs)))


if __name__ == "__main__":
    main()
