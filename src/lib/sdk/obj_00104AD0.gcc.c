// cc: ee-gcc2.96 -O2 -G0
int func_00104B68(p0, p1) char *p0; int p1; {
    int tmp0;
    tmp0 = *(int *)(p0 + 0);
    *(int *)(p0 + 0) = p1;
    return (((unsigned int)tmp0 >> 8) & 1);
}
