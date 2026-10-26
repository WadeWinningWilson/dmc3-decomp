int func_0010BEB0(p0, p1, p2, p3) char *p0; int p1; int p2; int p3; {
    char *tmp0;
    tmp0 = *(char **)(p0 + 64);
    *(int *)(*(char **)(p0 + 64) + 180) = p3;
    *(int *)(tmp0 + 172) = p1;
    *(int *)(tmp0 + 176) = p2;
    return (int)tmp0;
}
