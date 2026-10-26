void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_0022C820(char *);

void func_0022B5A0(char *);

extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005B0890[];

void func_0024FE00(char *);

void func_00320540(char *);

void func_002E8A10(char *);

void func_003C9D90(char *);

void func_00204CD0();

void func_00204C70();

void func_00313E20(char *);

void func_0024D930(char *);

void func_0031E4A0(char *);

void func_0024D9A0();

void func_002E8370(char *);

extern char D_005AFA70[];

extern char D_005AFA94[];

extern char D_005AFB14[];

extern char D_005AFBA8[];

extern char D_005AFC74[];

extern char D_005AFD2C[];

void func_0031DED0();

void func_0031DF20();

char *func_003ADE70(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AFA70;
    *(char **)(p + 0x40) = D_005AFA94;
    *(char **)(p + 0xA0) = D_005AFB14;
    *(char **)(p + 0xD0) = D_005AFBA8;
    *(char **)(p + 0x130) = D_005AFC74;
    *(char **)(p + 0x1D0) = D_005AFD2C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x22);
    p[0x4D0] = 0;
    p[0x4D1] = 0;
    *(short *)(p + 0x4D2) = 0;
    *(int *)(p + 0x4D8) = 0;
    *(int *)(p + 0x4DC) = 0;
    *(int *)(p + 0x4E0) = 0;
    *(int *)(p + 0x4F0) = 0;
    *(int *)(p + 0x4F4) = 0;
    *(int *)(p + 0x4F8) = 0;
    *(float *)(p + 0x4FC) = 1.0f;
    *(float *)(p + 0x500) = 100000.0f;
    p[0x504] = 0;
    p[0x505] = 0;
    *(short *)(p + 0x506) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x508) = -1;
    func_002E8370(p + 0x584);
    func_002E8A10(p + 0x5C8);
    func_00313E20(p + 0x5E0);
    q = p + 0x600;
    *(char **)(p + 0x610) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    func_002790E0(p + 0x700);
    func_002790E0(p + 0xD00);
    func_002790E0(p + 0x1300);
    func_00100450(p + 0x1900, func_0031DED0, func_0031DF20, 0x20, 0xB);
    func_00100450(p + 0x1A60, func_00204CD0, func_00204C70, 0xA0, 3);
    q = p + 0x1C40;
    *(char **)(p + 0x1C50) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x1D00, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0028C110(p + 0x1EA0);
    *(int *)(p + 0x21E4) = 0;
    return p;
}
