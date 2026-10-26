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

void func_0031DCB0(char *);

void func_002E8A10(char *);

void func_003C9D90(char *);

void func_00313E20(char *);

void func_0024D930(char *);

void func_0031E4A0(char *);

void func_0024D9A0();

void func_002E8370(char *);

extern char D_005AF390[];

extern char D_005AF3B4[];

extern char D_005AF434[];

extern char D_005AF4C8[];

extern char D_005AF594[];

extern char D_005AF64C[];

char *func_00390960(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AF390;
    *(char **)(p + 0x40) = D_005AF3B4;
    *(char **)(p + 0xA0) = D_005AF434;
    *(char **)(p + 0xD0) = D_005AF4C8;
    *(char **)(p + 0x130) = D_005AF594;
    *(char **)(p + 0x1D0) = D_005AF64C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x23);
    func_002790E0(p + 0x4C0);
    p[0xB20] = 0;
    p[0xB21] = 0;
    *(short *)(p + 0xB22) = 0;
    *(int *)(p + 0xB28) = 0;
    *(int *)(p + 0xB2C) = 0;
    *(int *)(p + 0xB30) = 0;
    *(int *)(p + 0xB40) = 0;
    *(int *)(p + 0xB44) = 0;
    *(int *)(p + 0xB48) = 0;
    *(float *)(p + 0xB4C) = 1.0f;
    *(float *)(p + 0xB50) = 100000.0f;
    p[0xB54] = 0;
    p[0xB55] = 0;
    *(short *)(p + 0xB56) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xB58) = -1;
    func_002E8370(p + 0xBD4);
    func_002E8A10(p + 0xC18);
    func_00313E20(p + 0xC30);
    q = p + 0xC50;
    *(char **)(p + 0xC60) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    func_002790E0(p + 0xD80);
    func_002790E0(p + 0x1380);
    func_002790E0(p + 0x1980);
    func_002790E0(p + 0x1F80);
    func_0031DCB0(p + 0x2580);
    func_0031DCB0(p + 0x2610);
    func_0031DCB0(p + 0x26A0);
    func_0031DCB0(p + 0x2730);
    func_0031DCB0(p + 0x27C0);
    q = p + 0x2850;
    *(char **)(p + 0x2860) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x2910;
    *(char **)(p + 0x2920) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x29D0, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0028C110(p + 0x2B70);
    *(int *)(p + 0x2DD0) = 0;
    return p;
}
