extern char D_005A7910[];

extern char D_005A7A00[];

void func_00100580();

int func_0022EC60(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7A00;
        if (v0 != 0) {
            *(char **)(v0 + 0) = D_005A7910;
        }
        v2 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

extern char D_00666200[];

extern char D_01CAF51F[];

void func_001AB140();

void func_0022E980(void) {
    *(char *)D_01CAF51F = 0;
    func_001AB140(D_00666200);
}
