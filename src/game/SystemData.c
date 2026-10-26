extern char D_005A7AD0[];

void func_0022C850(char *, int);

char *func_001ED5B0(char *p, short flag) {
    void func_00100580(char *);
    char *m;
    if (p != 0) {
        m = p + 0xC3C;
        if (m != 0) {
            *(char **)(p + 0xC3C) = D_005A7AD0;
            func_0022C850(m, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_005A7930[];

void func_0013D6A0();

char *func_001ED620(char *p0) {
    *(char **)(p0 + 0) = D_005A7930;
    func_0013D6A0((p0 + 12));
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 28) = -1;
    *(char **)(p0 + 0) = D_005A7AD0;
    return p0;
}

extern char D_005A7348[];

int func_001ED560(p0, p1) int p0; int p1; {
    void func_00100580();
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7348;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}
