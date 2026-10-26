void func_0028C110(char *);

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_0022C820(char *);

extern char D_005A77A0[];

extern char D_005B0890[];

void func_0024FE00(char *);

void func_00320540(char *);

void func_002E8A10(char *);

void func_003C9D90(char *);

void func_00313E20(char *);

void func_0024D930(char *);

extern char D_005B1CB0[];

extern char D_005B1CD4[];

extern char D_005B1D54[];

extern char D_005B1DE8[];

extern char D_005B1EB4[];

extern char D_005B1F6C[];

void func_0031E4A0(char *);

void func_00400FF0(char *);

void func_002E7840(char *);

char *func_003F5160(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)p = D_005B1CB0;
    *(char **)(p + 0x40) = D_005B1CD4;
    *(char **)(p + 0xA0) = D_005B1D54;
    *(char **)(p + 0xD0) = D_005B1DE8;
    *(char **)(p + 0x130) = D_005B1EB4;
    *(char **)(p + 0x1D0) = D_005B1F6C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0xE);
    p[0x320] = 0;
    func_002790E0(p + 0x540);
    func_00400FF0(p + 0xB40);
    func_0024D930(p + 0xB60);
    func_0028C110(p + 0xC30);
    p[0xE50] = 0;
    p[0xE51] = 0;
    *(short *)(p + 0xE52) = 0;
    *(int *)(p + 0xE58) = 0;
    *(int *)(p + 0xE5C) = 0;
    *(int *)(p + 0xE60) = 0;
    *(float *)(p + 0xE70) = 0.0f;
    *(float *)(p + 0xE74) = 0.0f;
    *(float *)(p + 0xE78) = 0.0f;
    *(float *)(p + 0xE7C) = 1.0f;
    *(float *)(p + 0xE80) = 100000.0f;
    p[0xE84] = 0;
    p[0xE85] = 0;
    *(short *)(p + 0xE86) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xE88) = -1;
    func_002E7840(p + 0xEB0);
    func_002E8A10(p + 0xEF4);
    func_00313E20(p + 0xF0C);
    q = p + 0xF30;
    *(char **)(p + 0xF40) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    *(int *)(p + 0x450) = 0;
    *(int *)(p + 0x454) = 0;
    *(int *)(p + 0x458) = 0;
    *(int *)(p + 0x45C) = 0;
    *(int *)(p + 0x460) = 0;
    *(int *)(p + 0x464) = 0;
    *(int *)(p + 0x3A0) = 0;
    return p;
}

unsigned char func_003F4E00(char *p) { return *(unsigned char *)(p + 1793); }

unsigned char func_003F4E10(char *p) { return *(unsigned char *)(p + 1792); }

void func_003F4E20(char *p0) {
    *(char *)(p0 + 1792) = 1;
}

int func_003F4E30(char *p0) {
    return ((*(unsigned char *)(p0 + 4) < 2) ^ 1);
}
