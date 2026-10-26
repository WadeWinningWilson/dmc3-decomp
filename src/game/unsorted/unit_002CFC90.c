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

void func_00204CD0();

void func_00204C70();

void func_00313E20(char *);

extern char D_005A7790[];

extern char D_005A7780[];

void func_0024D930(char *);

void func_00277D30(char *);

void func_0031E4A0(char *);

void func_00400FF0(char *);

extern char D_005AAA98[];

extern char D_005AFA60[];

void func_0024D9A0();

void func_002E1BC0(char *);

void func_002E8370(char *);

void func_003AD780(char *);

extern char D_005AA6D0[];

extern char D_005AA6F4[];

extern char D_005AA774[];

extern char D_005AA808[];

extern char D_005AA8D4[];

extern char D_005AA98C[];

char *func_002D01A0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AA6D0;
    *(char **)(p + 0x40) = D_005AA6F4;
    *(char **)(p + 0xA0) = D_005AA774;
    *(char **)(p + 0xD0) = D_005AA808;
    *(char **)(p + 0x130) = D_005AA8D4;
    *(char **)(p + 0x1D0) = D_005AA98C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x41);
    func_002790E0(p + 0x780);
    func_002790E0(p + 0xD80);
    func_002790E0(p + 0x1380);
    func_0031DCB0(p + 0x1980);
    func_0031DCB0(p + 0x1A10);
    func_0031DCB0(p + 0x1AA0);
    q = p + 0x1B30;
    *(char **)(p + 0x1B40) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x1BD0;
    *(char **)(p + 0x1BE0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x1CD0, func_00204CD0, func_00204C70, 0xA0, 3);
    p[0x1EB0] = 0;
    func_00100450(p + 0x2F70, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0024D930(p + 0x3110);
    func_0024D930(p + 0x31E0);
    func_00400FF0(p + 0x32B0);
    func_00400FF0(p + 0x32CC);
    func_0028C110(p + 0x3330);
    p[0x3550] = 0;
    p[0x3551] = 0;
    *(short *)(p + 0x3552) = 0;
    *(int *)(p + 0x3558) = 0;
    *(int *)(p + 0x355C) = 0;
    *(int *)(p + 0x3560) = 0;
    *(int *)(p + 0x3570) = 0;
    *(int *)(p + 0x3574) = 0;
    *(int *)(p + 0x3578) = 0;
    *(float *)(p + 0x357C) = 1.0f;
    *(float *)(p + 0x3580) = 100000.0f;
    p[0x3584] = 0;
    p[0x3585] = 0;
    *(short *)(p + 0x3586) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x3588) = -1;
    func_002E8370(p + 0x35B0);
    func_002E8A10(p + 0x35F4);
    func_00313E20(p + 0x360C);
    q = p + 0x3630;
    *(char **)(p + 0x3640) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x3690;
    *(char **)(p + 0x36A0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x3720;
    *(char **)(p + 0x3730) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x37E0;
    *(char **)(p + 0x38C0) = D_005A7790;
    *(int *)(p + 0x38C8) = 0;
    *(int *)(p + 0x38C4) = 0;
    *(char **)(p + 0x38C0) = D_005A7780;
    func_00277D30(q);
    *(int *)(p + 0x37D4) = 0;
    *(int *)(p + 0x390C) = 0;
    *(int *)(p + 0x3910) = 0;
    *(int *)(p + 0x3914) = 0;
    *(int *)(p + 0x3918) = 0;
    return p;
}
