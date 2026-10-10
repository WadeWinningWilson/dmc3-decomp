#!/usr/bin/env bash
# usage: tools/poc_check.sh <compiler-id> "<mwcc flags>" [-v]
# Compiles src/poc/poc.c with the given MW PS2 compiler under wibo (Docker)
# and compares each poc_XXXXXXXX function with the JP retail ELF at 0xXXXXXXXX.
set -u
cd "$(dirname "$0")/.."
CC_ID="$1"; FLAGS="$2"; VERB="${3:-}"
OUT="build/poc/$CC_ID"
mkdir -p "$OUT"
MSYS_NO_PATHCONV=1 docker run --rm -v "$PWD:/w" -w /w ubuntu:22.04 \
  sh -c "chmod +x tools/wibo/wibo && MWCIncludes=. tools/wibo/wibo tools/compilers/$CC_ID/mwccps2.exe -c $FLAGS -nostdinc -o $OUT/poc.o src/poc/poc.c" \
  || { echo "compile failed"; exit 2; }
pass=0; total=0
for sym in $(grep -o 'poc_[0-9A-F]\{8\}(' src/poc/poc.c | tr -d '(' | sort -u); do
  addr="0x${sym#poc_}"
  total=$((total+1))
  if .venv/Scripts/python -I tools/funcdiff.py orig/SLPM_658.80/SLPM_658.80 "$OUT/poc.o" "$sym" "$addr" $VERB; then
    pass=$((pass+1))
  fi
done
echo "== $CC_ID [$FLAGS]: $pass/$total functions match"
