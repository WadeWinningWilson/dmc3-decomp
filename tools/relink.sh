#!/bin/sh
# Re-assemble splat output for one version and rebuild the ELF byte-for-byte.
# Runs inside the dmc3-build container:  docker run --rm -v "$PWD":/w dmc3-build sh tools/relink.sh us SLUS_209.64
set -e
V="$1"; ELF="$2"; B="build/$V"
AS="mips-linux-gnu-as -EL -march=r5900 -mabi=eabi -G0 -no-pad-sections -Iinclude"
mkdir -p "$B/asm/$V/data"
for s in asm/$V/text.s asm/$V/sinit.s asm/$V/data/data.data.s asm/$V/data/ctors_data.data.s asm/$V/data/*.bss.s; do
  o="$B/${s%.s}.o"; mkdir -p "$(dirname "$o")"
  [ "$o" -nt "$s" ] || $AS -o "$o" "$s"
done
mips-linux-gnu-ld -EL -T "config/$ELF/undefined_syms_auto.txt" -T "config/$ELF/undefined_funcs_auto.txt" -T "config/$ELF/main.ld" -Map "$B/$ELF.map" -o "$B/$ELF.main.elf" --no-check-sections
mips-linux-gnu-objcopy -O binary -j .main "$B/$ELF.main.elf" "$B/main.bin"
# header (0x80) and section-header tail are copied from the original ELF
ORIG="orig/$ELF/$ELF"
SZ=$(stat -c %s "$ORIG"); MAIN=$(stat -c %s "$B/main.bin")
head -c 128 "$ORIG" > "$B/$ELF"
cat "$B/main.bin" >> "$B/$ELF"
tail -c +$((128 + MAIN + 1)) "$ORIG" >> "$B/$ELF"
echo "main.bin $MAIN bytes; rebuilt $(stat -c %s "$B/$ELF") vs original $SZ"
sha1sum "$ORIG" "$B/$ELF"
