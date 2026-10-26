extern char D_005AB180[];

void func_00100580();

int func_002E77F0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005AB180;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

char *func_002E77D0(char *p0) {
    *(char **)(p0 + 0) = D_005AB180;
    return p0;
}
