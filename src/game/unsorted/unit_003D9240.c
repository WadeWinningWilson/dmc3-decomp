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

void func_0031E4A0(char *);

void func_00400FF0(char *);

extern char D_005B14D0[];

extern char D_005B14F4[];

extern char D_005B1574[];

extern char D_005B1608[];

extern char D_005B16D4[];

extern char D_005B178C[];

void func_002E7BF0(char *);

char *func_003D9620(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B14D0;
    *(char **)(p + 0x40) = D_005B14F4;
    *(char **)(p + 0xA0) = D_005B1574;
    *(char **)(p + 0xD0) = D_005B1608;
    *(char **)(p + 0x130) = D_005B16D4;
    *(char **)(p + 0x1D0) = D_005B178C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 8);
    func_002790E0(p + 0x340);
    func_00400FF0(p + 0x940);
    q = p + 0x9E0;
    p[0x960] = 0;
    *(char **)(p + 0x9F0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    p[0xAF0] = 0;
    p[0xAF1] = 0;
    *(short *)(p + 0xAF2) = 0;
    *(int *)(p + 0xAF8) = 0;
    *(int *)(p + 0xAFC) = 0;
    *(int *)(p + 0xB00) = 0;
    *(int *)(p + 0xB10) = 0;
    *(int *)(p + 0xB14) = 0;
    *(int *)(p + 0xB18) = 0;
    *(float *)(p + 0xB1C) = 1.0f;
    *(float *)(p + 0xB20) = 100000.0f;
    p[0xB24] = 0;
    p[0xB25] = 0;
    *(short *)(p + 0xB26) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xB28) = -1;
    func_002E7BF0(p + 0xB50);
    func_002E8A10(p + 0xB9C);
    func_00313E20(p + 0xBB4);
    func_0028C110(p + 0xBD0);
    p[0xEFD] = 0;
    *(int *)(p + 0xEC4) = 0;
    p[0xEFC] = 0;
    *(int *)(p + 0x308) = 0;
    p[0xEFE] = 0;
    *(unsigned char *)(p + 0xEFF) = 0x80;
    *(int *)(p + 0xEA0) = 0;
    *(int *)(p + 0xEDC) = 0;
    *(int *)(p + 0xEE0) = 0;
    *(int *)(p + 0xEE4) = 0;
    *(int *)(p + 0xEE8) = 0;
    *(int *)(p + 0xEEC) = 0;
    *(int *)(p + 0xEF0) = 0;
    *(int *)(p + 0xEF4) = 0;
    p[0xEF8] = 2;
    *(int *)(p + 0xED4) = 0;
    *(int *)(p + 0xED0) = 0;
    *(int *)(p + 0xECC) = 0;
    *(int *)(p + 0xEC8) = 0;
    *(int *)(p + 0xED8) = 0;
    *(short *)(p + 0xEFA) = 0;
    p[0xF01] = 0;
    p[0xF02] = 0;
    p[0xF03] = 0;
    p[0xF04] = 0;
    p[0xF05] = 0;
    p[0xF06] = 1;
    p[0xF07] = 0;
    p[0xF0A] = 0;
    p[0xF09] = 0;
    p[0xF08] = 0;
    p[0xF0B] = 0;
    p[0xF0C] = 0;
    p[0xF0D] = 0;
    return p;
}
