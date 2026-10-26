// cc: ee-gcc2.96 -O2 -G0
int func_001411E8(p0, p1, p2) char *p0; char *p1; char *p2; {
    *(short *)(p0 + 0) = (*(unsigned short *)(p2 + 0) + (*(unsigned short *)(p0 + 0) * *(unsigned short *)(p1 + 0)));
    return 0;
}
