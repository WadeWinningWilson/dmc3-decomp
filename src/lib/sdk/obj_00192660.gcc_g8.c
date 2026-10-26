// cc: ee-gcc2.96 -O2 -G8
int func_001926D8(p0, p1, p2, p3) char *p0; char *p1; char *p2; char *p3; {
    int tmp2;
    p0 = (p0 + 8);
    *(int *)(p3 + 0) = *(int *)(p0 + 0);
    *(int *)(p1 + 0) = *(int *)(p0 + 4);
    tmp2 = *(int *)(p0 + 8);
    *(int *)(p2 + 0) = *(int *)(p0 + 8);
    return tmp2;
}
