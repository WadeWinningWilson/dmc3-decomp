// cc: ee-gcc2.96 -O2 -G0
char *func_0018D0E0();

int func_0018D090(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    char *v3;
    v0 = p2;
    v1 = p0;
    v3 = func_0018D0E0();
    v2 = (p1 << 2);
    if (v3 != 0) {
        v3 = (char *)(v2 + v1);
        *(int *)(v3 + 2964) = v0;
    }
    return (int)v3;
}
