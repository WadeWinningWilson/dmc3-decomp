extern char D_005A7770[];

char *func_00202D90(char *p, short flag) {
    void func_00100580(char *);
    if (p != 0) {
        if (p + 0x814 != 0) {
            *(char **)(p + 0x814) = D_005A7770;
        }
        if (p + 4 != 0) {
            *(char **)(p + 4) = D_005A7770;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_005A7760[];

void func_0013D240();

void func_0013D5D0();

char *func_00202CD0(char *p, short flag) {
    void func_00100580();
    if (p != 0) {
        *(char * *)(p) = D_005A7760;
        func_0013D5D0(p + 4);
        func_0013D240(p + 4, -1);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00202E10(p0, p1) int p0; int p1; {
    void func_00100580();
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005A7770;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

extern char D_005A7780[];

extern char D_005A7790[];

int func_00202E60(p0, p1) int p0; int p1; {
    void func_00100580();
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = (int)(v0 + 224);
    if (v0 != 0) {
        if (v1 != 0) {
            *(char **)(v0 + 224) = D_005A7780;
            if (v1 != 0) {
                *(char **)(v0 + 224) = D_005A7790;
            }
        }
        v3 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v3);
        }
    }
    return (int)v0;
}
