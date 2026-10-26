void func_001003E0();

void func_00100580();

void func_0021B240();

int func_0021B1D0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_001003E0((v0 + 20), (char *)func_0021B240, 12, 10);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}

char *func_0021B290(char *p0) {
    *(int *)(p0 + 8) = 0;
    return p0;
}
