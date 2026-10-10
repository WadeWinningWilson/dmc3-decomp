// cc: ee-gcc3.2-040921 -O2 -G0
/*
 * Lower code block (0x100000-0x195130) is ee-gcc-built, not MW: see
 * DMC3_TOOLCHAIN_RESEARCH.md "Two compilation populations". The exact GCC
 * version and flags are still provisional (2.96 -O2 and 3.2 -O2 both match).
 */

/* thin wrapper with constant id */
extern void func_00180180(void *a0, unsigned int id);
void func_00190BC8(void *a0) { func_00180180(a0, 0xFF000701); }
