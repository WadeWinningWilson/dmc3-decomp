// cc: ee-gcc2.96 -O2 -G0
int func_0017D050(p0) char *p0; {
    int v0;
    v0 = 2;
    do {
        v0 = (v0 + -1);
        *(int *)(p0 + 0) = 0;
        *(int *)(p0 + 4) = 0;
        *(int *)(p0 + 8) = 0;
        *(int *)(p0 + 12) = 0;
        p0 = (p0 + 16);
    } while (v0 >= 0);
    return v0;
}
