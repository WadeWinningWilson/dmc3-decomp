extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005B61E0[];

extern char D_005B6204[];

extern char D_005B6284[];

extern char D_005B6318[];

void func_001003E0();

void func_00100580();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_00401030();

char *func_00472CC0(char *p, short flag) {
    void func_0013D240();
    if (p != 0) {
        *(char **)p = D_005B61E0;
        *(char **)(p + 64) = D_005B6204;
        *(char **)(p + 160) = D_005B6284;
        *(char **)(p + 208) = D_005B6318;
        func_0028C1A0((p + 2272), -1);
        func_00401030((p + 2240), -1);
        if (p + 2048 != 0) {
            *(char **)(p + 2064) = D_005A78F8;
            if (p + 2048 != 0) {
                *(char **)(p + 2064) = D_005A77A0;
            }
        }
        func_002791E0((p + 512), -1);
        func_001003E0((p + 308), (void *)func_0013D240, 16, 5);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0024FE00(char *);

void func_001AAD30(void);

void func_00100450(char *, void *, void *, int, int);

void func_002790E0(char *);

void func_0022C820(char *);

void func_0022B5A0(char *);

void func_00400FF0(char *);

void func_0028C110(char *);

char *func_00472B80(char *p) {
    void func_0013D240(void);
    int i;
    char *q;
    func_0024FE00(p);
    *(char **)(p + 0x0) = D_005B61E0;
    *(char **)(p + 0x40) = D_005B6204;
    *(char **)(p + 0xA0) = D_005B6284;
    *(char **)(p + 0xD0) = D_005B6318;
    func_00100450(p + 0x134, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 5);
    func_002790E0(p + 0x200);
    q = p + 0x800;
    *(char **)(p + 0x810) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00400FF0(p + 0x8C0);
    func_0028C110(p + 0x8E0);
    *(unsigned char *)(p + 0xB00) = 0;
    *(unsigned char *)(p + 0xB01) = 0;
    *(short *)(p + 0xB02) = 0;
    *(int *)(p + 0xB08) = 0;
    *(int *)(p + 0xB0C) = 0;
    *(int *)(p + 0xB10) = 0;
    *(int *)(p + 0xB20) = 0;
    *(int *)(p + 0xB24) = 0;
    *(int *)(p + 0xB28) = 0;
    *(float *)(p + 0xB2C) = 1.0f;
    *(float *)(p + 0xB30) = 100000.0f;
    *(unsigned char *)(p + 0xB34) = 0;
    *(unsigned char *)(p + 0xB35) = 0;
    *(short *)(p + 0xB36) = 0;
    for (i = 0; i < 10; i++) {
        *(short *)(p + i * 2 + 0xB38) = -1;
    }
    *(int *)(p + 0xBB0) = 0;
    return p;
}

int func_001AD140();

int func_004743E0(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(int *)(p0 + 2992);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

extern void func_00473100();

void func_00474410(char *p) { func_00473100(p + -64); }

void func_004736A0(char *p0) {
    *(char *)(p0 + 2896) = 1;
}
