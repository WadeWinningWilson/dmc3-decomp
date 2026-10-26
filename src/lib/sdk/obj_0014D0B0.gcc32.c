// cc: ee-gcc3.2-040921 -O2 -G0
int func_0014D0D0(int p0, int p1, int p2) {
    int v0;
    char *v1;
    v0 = (p1 << 2);
    v1 = (char *)(p0 + v0);
    if (((unsigned int)p1 < (unsigned int)2)) {
        *(int *)(v1 + 4) = p2;
    }
    return v0;
}
