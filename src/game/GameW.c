extern char D_005A7970[];

void func_00100580();

int func_0022D7B0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7970;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}
