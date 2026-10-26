extern char D_005B2838[];

void func_00100580();

int func_00406170(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005B2838;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

char *func_00406130(char *p0) {
    *(char **)(p0 + 0) = D_005B2838;
    *(char *)(p0 + 67) = 0;
    *(char *)(p0 + 68) = 0;
    *(char *)(p0 + 69) = 0;
    *(char *)(p0 + 70) = 0;
    *(char *)(p0 + 71) = 0;
    *(char *)(p0 + 72) = 0;
    *(char *)(p0 + 73) = 0;
    *(char *)(p0 + 74) = 0;
    return p0;
}
