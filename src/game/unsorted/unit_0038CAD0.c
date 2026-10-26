void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_0022C820(char *);

void func_0022B5A0(char *);

extern char D_005A77A0[];

extern char D_005A78F8[];

void func_0024FE00(char *);

void func_00320540(char *);

void func_002E8A10(char *);

void func_00313E20(char *);

void func_0024D930(char *);

void func_0031E4A0(char *);

void func_00400FF0(char *);

void func_002E7840(char *);

extern char D_005AF030[];

extern char D_005AF054[];

extern char D_005AF0D4[];

extern char D_005AF168[];

extern char D_005AF234[];

extern char D_005AF2EC[];

void func_00203040();

void func_00202FE0();

char *func_0038CDF0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AF030;
    *(char **)(p + 0x40) = D_005AF054;
    *(char **)(p + 0xA0) = D_005AF0D4;
    *(char **)(p + 0xD0) = D_005AF168;
    *(char **)(p + 0x130) = D_005AF234;
    *(char **)(p + 0x1D0) = D_005AF2EC;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x15);
    p[0x390] = 0;
    q = p + 0x530;
    *(char **)(p + 0x540) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_002790E0(p + 0x600);
    func_00400FF0(p + 0xC00);
    func_0024D930(p + 0xC20);
    func_0028C110(p + 0xCF0);
    p[0xF10] = 0;
    p[0xF11] = 0;
    *(short *)(p + 0xF12) = 0;
    *(int *)(p + 0xF18) = 0;
    *(int *)(p + 0xF1C) = 0;
    *(int *)(p + 0xF20) = 0;
    *(float *)(p + 0xF30) = 0.0f;
    *(float *)(p + 0xF34) = 0.0f;
    *(float *)(p + 0xF38) = 0.0f;
    *(float *)(p + 0xF3C) = 1.0f;
    *(float *)(p + 0xF40) = 100000.0f;
    p[0xF44] = 0;
    p[0xF45] = 0;
    *(short *)(p + 0xF46) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xF48) = -1;
    func_002E7840(p + 0xF70);
    func_002E8A10(p + 0xFB4);
    func_00313E20(p + 0xFCC);
    func_00100450(p + 0xFF0, func_00203040, func_00202FE0, 0x60, 5);
    *(int *)(p + 0x43C) = 0;
    *(int *)(p + 0x410) = 0;
    return p;
}
