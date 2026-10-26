// cc: ee-gcc2.96 -O2 -G0
int func_00193180(p0, p1) char *p0; int p1; {
    char *tmp0;
    tmp0 = *(char **)(p0 + 40);
    *(int *)(*(char **)(p0 + 40) + 68) = p1;
    return (int)tmp0;
}
