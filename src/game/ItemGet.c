extern char D_005BAB98[];

void func_00100580();

int func_004F94C0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005BAB98;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

char *func_004F9450(char *p0) {
    *(char **)(p0 + 0) = D_005BAB98;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(char *)(p0 + 32) = 0;
    *(char *)(p0 + 33) = 0;
    *(short *)(p0 + 16) = 0;
    *(char *)(p0 + 18) = 0;
    *(short *)(p0 + 20) = 0;
    *(char *)(p0 + 22) = 0;
    *(short *)(p0 + 24) = 0;
    *(char *)(p0 + 26) = 0;
    *(short *)(p0 + 28) = 0;
    *(char *)(p0 + 30) = 0;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 48) = 0;
    *(int *)(p0 + 52) = 0;
    *(int *)(p0 + 56) = 0;
    *(int *)(p0 + 60) = 0;
    *(int *)(p0 + 64) = 0;
    *(int *)(p0 + 68) = 0;
    *(int *)(p0 + 40) = 0;
    return p0;
}
