// cc: ee-gcc2.96 -O2 -G0
extern char D_0052C260[];

void func_00159F60();

void func_0015A050(p0, p1) int p0; int p1; {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = D_0052C260;
    *(int *)((char *)p1 + 0) = 0;
    v2 = p1;
    *(int *)((char *)p1 + 4) = 0;
    v3 = *(int *)(v1 + 0);
    v4 = v3;
    if (v3 != 0) {
        func_00159F60(v2, v0, v4, *(int *)(v1 + 4));
        return;
    } else {
        return;
    }
}
