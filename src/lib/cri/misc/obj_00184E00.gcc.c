// cc: ee-gcc2.96 -O2 -G0
void func_00185338(p0, p1) char *p0; char *p1; {
    unsigned char tmp7;
    *(int *)(p1 + 0) = *(int *)(p0 + 16);
    *(int *)(p1 + 4) = *(int *)(p0 + 28);
    *(int *)(p1 + 8) = *(int *)(p0 + 32);
    *(int *)(p1 + 12) = *(int *)(p0 + 36);
    *(int *)(p1 + 16) = *(int *)(p0 + 40);
    *(int *)(p1 + 20) = *(int *)(p0 + 44);
    *(int *)(p1 + 24) = *(int *)(p0 + 20);
    tmp7 = *(unsigned char *)(p0 + 84);
    *(short *)(p1 + 30) = 0;
    *(short *)(p1 + 28) = ((tmp7 << 24) >> 24);
}
