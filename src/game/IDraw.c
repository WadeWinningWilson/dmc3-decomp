extern char D_005A8840[];

void func_00100580();

int func_00279090(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A8840;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

char *func_00279070(char *p0) {
    *(char **)(p0 + 0) = D_005A8840;
    return p0;
}
