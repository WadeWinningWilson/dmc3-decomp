// cc: ee-gcc2.96 -O2 -G0
int func_00108018(p0) int p0; {
    int tmp0;
    tmp0 = ((*(int *)0x10002010 & 0xff7fffff) | (p0 << 23));
    *(int *)0x10002010 = ((*(int *)0x10002010 & 0xff7fffff) | (p0 << 23));
    return tmp0;
}
