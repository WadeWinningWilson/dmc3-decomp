// cc: ee-gcc2.96 -O2 -G0
int func_001931D0(p0, p1, p2) char *p0; char *p1; char *p2; {
    int tmp0;
    tmp0 = *(int *)(p0 + 12);
    *(int *)(p1 + 0) = *(int *)(p0 + 12);
    *(int *)(p2 + 0) = *(int *)(p0 + 16);
    return tmp0;
}

void func_001931E8(p0, p1) char *p0; int p1; {
    *(int *)(p0 + 20) = p1;
}
