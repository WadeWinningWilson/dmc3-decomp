extern char D_005A8D48[];

void func_00100580();

int func_0027CE20(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A8D48;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

char *func_0027CE00(char *p0) {
    *(char **)(p0 + 0) = D_005A8D48;
    return p0;
}
