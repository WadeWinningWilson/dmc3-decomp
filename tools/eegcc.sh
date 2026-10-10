#!/bin/sh
# Run a 32-bit ee-gcc from container-local storage (32-bit stat() overflows on
# the Windows bind mount). usage: tools/eegcc.sh <compiler-id> <out.o> <src> <gcc args...>
set -e
ID="$1"; OUT="$2"; SRC="$3"; shift 3
[ -d "/opt/$ID" ] || { cp -r "tools/compilers/$ID" "/opt/$ID"; chmod -R +x "/opt/$ID"; }
T=$(mktemp -d)
cp "$SRC" "$T/"
( cd "$T" && "/opt/$ID/bin/ee-gcc" "$@" -c -o out.o "$(basename "$SRC")" )
cp "$T/out.o" "$OUT"
