void func_0034AE70(void);

void func_0034B040(void);

int func_0034ADE0(char *p) {
    switch (*(int *)(p + 16)) {
    case 0:
        func_0034AE70();
        break;
    case 1:
        func_0034B040();
        break;
    case 2:
        if (*(int *)(p + 12) == 1) {
            return -1;
        }
        return 1;
    }
    return 0;
}

extern char D_00666200[];

extern char D_01CAF51F[];

void func_001AB140();

void func_0034ADB0(void) {
    func_001AB140(D_00666200);
    *(char *)D_01CAF51F = 0;
}

extern char D_005A7910[];

extern char D_005AD310[];

void func_00100580();

int func_0034B210(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005AD310;
        if (v0 != 0) {
            *(char **)(v0 + 0) = D_005A7910;
        }
        v2 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}
