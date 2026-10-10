"""Inspect a PS2 ISO: list files, parse SYSTEM.CNF, extract boot ELF + any
symbol/map/elf/irx files, and hash everything extracted.

usage: python -I tools/iso_inspect.py <iso> <outdir>
"""
import hashlib
import json
import os
import re
import sys
import zlib

import pycdlib

INTERESTING = re.compile(r"(\.(ELF|MAP|SYM|IRX|CNF|TXT|INI)$)|^/S[LC][A-Z]{2}_\d{3}\.\d{2}", re.I)


def hashes(data):
    return {
        "size": len(data),
        "crc32": f"{zlib.crc32(data) & 0xFFFFFFFF:08x}",
        "md5": hashlib.md5(data).hexdigest(),
        "sha1": hashlib.sha1(data).hexdigest(),
    }


def main(iso_path, out_dir):
    os.makedirs(out_dir, exist_ok=True)
    iso = pycdlib.PyCdlib()
    iso.open(iso_path)
    pvd = iso.pvd
    report = {
        "iso": os.path.basename(iso_path),
        "volume_id": pvd.volume_identifier.decode(errors="replace").strip(),
        "volume_set_id": pvd.volume_set_identifier.decode(errors="replace").strip(),
        "creation_date": str(pvd.volume_creation_date.year) + "-" + str(pvd.volume_creation_date.month).zfill(2) + "-" + str(pvd.volume_creation_date.dayofmonth).zfill(2),
        "files": [],
        "extracted": {},
    }
    for dirname, _dirs, files in iso.walk(iso_path="/"):
        for f in files:
            p = (dirname.rstrip("/") + "/" + f).split(";")[0]
            rec = iso.get_record(iso_path=dirname.rstrip("/") + "/" + f)
            report["files"].append({"path": p, "size": rec.get_data_length()})

    def grab(p_full):
        import io
        buf = io.BytesIO()
        iso.get_file_from_iso_fp(buf, iso_path=p_full)
        return buf.getvalue()

    for entry in report["files"]:
        p = entry["path"]
        if INTERESTING.search(p) and entry["size"] < 64 * 1024 * 1024:
            data = grab(p + ";1")
            dst = os.path.join(out_dir, p.lstrip("/").replace("/", "__"))
            with open(dst, "wb") as fh:
                fh.write(data)
            report["extracted"][p] = hashes(data)
            if p.upper().endswith("SYSTEM.CNF"):
                report["system_cnf"] = data.decode(errors="replace")
    iso.close()
    with open(os.path.join(out_dir, "iso_report.json"), "w") as fh:
        json.dump(report, fh, indent=2)
    print(json.dumps({k: v for k, v in report.items() if k != "files"}, indent=2))
    print(f"{len(report['files'])} files on disc")


if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
