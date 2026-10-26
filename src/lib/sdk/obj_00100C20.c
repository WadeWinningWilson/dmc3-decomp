extern char D_005BE3C8[];

int func_00100C20(p0, p1, p2) int p0; int p1; char *p2; {
    *(int *)(p2 + 0) = *(int *)D_005BE3C8;
    *(int *)(p2 + 4) = p1;
    *(int *)(p2 + 8) = p0;
    *(char **)D_005BE3C8 = p2;
    return p0;
}
