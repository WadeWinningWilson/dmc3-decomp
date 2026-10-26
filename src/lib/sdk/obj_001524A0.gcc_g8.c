// cc: ee-gcc2.96 -O2 -G8
int func_001524C8(p0, p1, p2) char *p0; char *p1; char *p2; {
    unsigned short tmp3;
    *(short *)(p0 + 40) = *(unsigned short *)(p1 + 0);
    *(short *)(p0 + 42) = *(unsigned short *)(p2 + 0);
    *(short *)(p0 + 44) = *(unsigned short *)(p1 + 2);
    tmp3 = *(unsigned short *)(p2 + 2);
    *(short *)(p0 + 46) = *(unsigned short *)(p2 + 2);
    return tmp3;
}
