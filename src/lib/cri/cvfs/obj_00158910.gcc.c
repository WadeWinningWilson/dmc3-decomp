// cc: ee-gcc2.96 -O2 -G0
extern char D_0052BEC0[];

int func_00158940() {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    v3 = 0;
    v4 = D_0052BEC0;
    v0 = 1;
    v1 = 2;
    do {
        if (*(signed char *)(v4 + 0) == v0) {
            v2 = 1;
            if (*(signed char *)(v4 + 2) == v1) {
                return v2;
            }
        }
        v3 = (v3 + 1);
        v4 = (v4 + 48);
    } while ((v3 < 13));
    v2 = 0;
    return v2;
}

void func_00155AD8();

int func_00155D70();

int func_00158990(p0) int p0; {
    char *v0;
    int v1;
    int tmp1;
    func_00155AD8(16384);
    v0 = (char *)(p0 + 20);
    tmp1 = func_00155D70(*(int *)((char *)p0 + 24), 1, v0);
    func_00155AD8(16385);
    v1 = 0;
    if (tmp1 >= 0) {
        v1 = (*(int *)(v0 + 0) != 1);
    }
    return v1;
}
