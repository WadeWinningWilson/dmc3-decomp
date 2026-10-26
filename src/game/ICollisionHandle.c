extern char D_005A7D70[];

void func_00100580();

int func_0024FD30(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7D70;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

char *func_0024FD10(char *p0) {
    *(char **)(p0 + 0) = D_005A7D70;
    return p0;
}
