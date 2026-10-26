extern char D_005AC0F0[];

extern char D_005A7B60[];

void func_0024BE40(char *, int);

char *func_0023B480(char *p, short flag) {
    void func_00100580(char *);
    if (p != 0) {
        *(char **)p = D_005AC0F0;
        if (p != 0) {
            *(char **)p = D_005A7B60;
            func_0024BE40(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_005A7AE0[];

int func_0023B350(p0, p1) int p0; int p1; {
    void func_00100580();
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7AE0;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

void func_0013D240();

int func_0023B3A0(p0, p1) int p0; int p1; {
    void func_00100580();
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_0013D240((v0 + 20), -1);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}
