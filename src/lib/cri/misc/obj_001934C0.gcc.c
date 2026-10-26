// cc: ee-gcc2.96 -O2 -G0
int func_001934C0(p0, p1) char *p0; int p1; {
    int tmp0;
    int tmp1;
    int tmp2;
    tmp0 = *(int *)(p0 + 0);
    tmp1 = (*(int *)(p0 + 8) - p1);
    tmp2 = (p1 * *(int *)(p0 + 4));
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) - p1);
    *(int *)(p0 + 0) = (tmp0 + tmp2);
    return tmp1;
}
