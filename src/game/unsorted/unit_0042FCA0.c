float func_00131B50(float);

void func_0021CB50(char *, int);

void func_00430AD0(char *);

void func_0021C7A0(char *, int);

int func_00430C20(char *, char *, int, int, int, int);

void func_00332AE0(char *, int, float, float);

void func_002DFFA0(char *, float);

void func_002E1AB0(char *, char *);

int func_00430820(char *p, char *b, int a, int x) {
    float f;
    *(char **)(p + 0x2AEC) = b;
    f = 0.0f;
    *(int *)(p + 0x2AE8) = a;
    switch (*(unsigned char *)(p + 0x3C80)) {
    case 0:
        if ((unsigned char)func_00430C20(p, b, a, x, 0, 0) == 0) return 0;
        func_00332AE0(p + 0x3D90, 0x1A4, *(float *)(*(char **)(p + 0x283C) + 0xB0), *(float *)(*(char **)(p + 0x283C) + 0xAC));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x148));
        f = *(float *)(b + 4);
        break;
    case 1:
        if ((unsigned char)func_00430C20(p, b, a, x, 0, 0) == 0) return 0;
        func_00332AE0(p + 0x3D90, 0x1A5, *(float *)(*(char **)(p + 0x283C) + 0xB8), *(float *)(*(char **)(p + 0x283C) + 0xB4));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x14C));
        f = *(float *)(b + 4) * *(float *)(*(char **)(p + 0x283C) + 0x188);
        break;
    case 2:
        break;
    case 3:
        func_00332AE0(p + 0x3D90, 0x2BC, *(float *)(*(char **)(p + 0x283C) + 0xA0), *(float *)(*(char **)(p + 0x283C) + 0x9C));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x150));
        f = *(float *)(b + 4) * *(float *)(*(char **)(p + 0x283C) + 0x180);
        *(float *)(p + 0x2AF0) = *(float *)(*(char **)(p + 0x283C) + 0x1F4);
        break;
    case 4:
        if ((unsigned char)func_00430C20(p, b, a, x, 4, 0) == 0) return 0;
        func_00332AE0(p + 0x3D90, 0x1A6, *(float *)(*(char **)(p + 0x283C) + 0xA8), *(float *)(*(char **)(p + 0x283C) + 0xA4));
        func_002DFFA0(p, *(float *)(*(char **)(p + 0x283C) + 0x154));
        f = *(float *)(b + 4) * *(float *)(*(char **)(p + 0x283C) + 0x184);
        break;
    case 5:
        func_0021C7A0(p, 0x14);
        *(float *)(p + 0x2AD4) = *(float *)(p + 0x2AD4) + *(float *)(b + 4) / *(float *)(*(char **)(p + 0x283C) + 0x2CC);
        if (*(float *)(p + 0x2AD4) > *(float *)(p + 0x2AA8)) *(float *)(p + 0x2AD4) = *(float *)(p + 0x2AA8);
        return 1;
    case 6:
        break;
    }
    func_0021C7A0(p, 0x14);
    func_0021CB50(p, 0x40000);
    func_002E1AB0(p, b);
    if (func_00131B50(360.0f * *(short *)(p + 0x90) / 65536.0f - 360.0f * *(short *)(p + 0x2AE4) / 65536.0f) > 20.0f) {
        *(short *)(p + 0x90) = *(short *)(p + 0x2AE4);
    }
    *(float *)(p + 0x3C88) = *(float *)(p + 0x3C88) + f;
    func_00430AD0(p);
    return 1;
}

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

void func_0031E400(char *);

void func_0031DCB0(char *);

void func_002E8A10(char *);

void func_003C9D90(char *);

void func_00204CD0();

void func_00204C70();

void func_00313E20(char *);

void func_0024D930(char *);

extern char D_005AAA98[];

extern char D_005AFA60[];

extern char D_005B4070[];

extern char D_005B4094[];

extern char D_005B4114[];

extern char D_005B41A8[];

extern char D_005B4274[];

extern char D_005B432C[];

void func_0024D9A0();

void func_002791E0();

void func_002E1BC0(char *);

void func_002E8370(char *);

void func_003AD780(char *);

char *func_00431B00(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B4070;
    *(char **)(p + 0x40) = D_005B4094;
    *(char **)(p + 0xA0) = D_005B4114;
    *(char **)(p + 0xD0) = D_005B41A8;
    *(char **)(p + 0x130) = D_005B4274;
    *(char **)(p + 0x1D0) = D_005B432C;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x2A);
    func_002790E0(p + 0x580);
    func_002790E0(p + 0xB80);
    func_002790E0(p + 0x1180);
    func_00100450(p + 0x1780, func_002790E0, func_002791E0, 0x600, 2);
    func_002790E0(p + 0x2380);
    func_002790E0(p + 0x2980);
    func_0031DCB0(p + 0x2F80);
    func_0031DCB0(p + 0x3010);
    q = p + 0x30A0;
    *(char **)(p + 0x30B0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x3140;
    *(char **)(p + 0x3150) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    func_00100450(p + 0x31E0, func_00204CD0, func_00204C70, 0xA0, 2);
    q = p + 0x3320;
    *(char **)(p + 0x3330) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x33C0;
    *(char **)(p + 0x33D0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x34B0;
    *(char **)(p + 0x34C0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x3550;
    *(char **)(p + 0x3560) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x40D0, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0024D930(p + 0x4270);
    func_0028C110(p + 0x43B0);
    p[0x45D0] = 0;
    p[0x45D1] = 0;
    *(short *)(p + 0x45D2) = 0;
    *(int *)(p + 0x45D8) = 0;
    *(int *)(p + 0x45DC) = 0;
    *(int *)(p + 0x45E0) = 0;
    *(int *)(p + 0x45F0) = 0;
    *(int *)(p + 0x45F4) = 0;
    *(int *)(p + 0x45F8) = 0;
    *(float *)(p + 0x45FC) = 1.0f;
    *(float *)(p + 0x4600) = 100000.0f;
    p[0x4604] = 0;
    p[0x4605] = 0;
    *(short *)(p + 0x4606) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x4608) = -1;
    func_002E8370(p + 0x4630);
    func_002E8A10(p + 0x4674);
    func_00313E20(p + 0x468C);
    q = p + 0x46B0;
    *(char **)(p + 0x46C0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x4710;
    *(char **)(p + 0x4720) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    *(int *)(p + 0x47AC) = 0;
    *(int *)(p + 0x47C0) = 0;
    p[0x485E] = 0;
    p[0x485F] = 0;
    return p;
}

int func_002242C0(char *);

extern int D_01DFAB70[];

extern int D_01DFAB7C[];

int func_00430DA0(char *p, unsigned char a, unsigned char b) {
    if ((*(int *)(p + 0x2898) & 2) && *(unsigned char *)(p + 0x3C83) != 0) {
        *(unsigned char *)(p + 0x3C84) = 1;
        return 0;
    }
    *(unsigned char *)(p + 0x3C82) = a;
    *(unsigned char *)(p + 0x2854) = b;
    *(unsigned char *)(p + 0x3C80) = 6;
    if ((unsigned char)b == 0 && (unsigned char)a == 1 && *(unsigned char *)(p + 0x2848) == 0x14) {
        if ((unsigned char)func_002242C0(p) == 0) {
            D_01DFAB70[0] = D_01DFAB70[0] | 0x80000000;
        } else {
            D_01DFAB7C[0] = D_01DFAB7C[0] | 0x20000;
        }
    }
    if (!(*(int *)(p + 0x2898) & 2)) {
        func_0021C7A0(p, 0x13);
        return 1;
    }
    *(unsigned char *)(p + 0x3C84) = 1;
    return 0;
}

void func_002490F0(char *, int, int, int, int, int, float);

void func_0021CA00(char *, int);

int func_00249E20(char *, int);

int func_00430EA0(char *p, int a1) {
    if (*(unsigned char *)(p + 0x3C6C) != 3) {
        return 0;
    }
    if (*(unsigned char *)(p + 0x3C84) == 1) {
        if (*(unsigned char *)(p + 0x3C83) == 0) {
            *(unsigned char *)(p + 0x3C83) = 1;
        }
    } else {
        *(unsigned char *)(p + 0x3C83) = 0;
        return 0;
    }
    switch (*(unsigned char *)(p + 0x3C83)) {
    case 0:
        break;
    case 1:
        func_002490F0(p, 0x18, 5, -1, 2, 5, -1.0f);
        *(unsigned char *)(p + 0x3C83) = 2;
        func_0021CA00(p, 0);
        break;
    case 2:
        if (*(unsigned char *)(p + 0x3C6E) != 1) {
            func_002490F0(p, 0x18, 6, -1, 2, 5, -1.0f);
            *(unsigned char *)(p + 0x3C83) = 3;
        } else if (!(*(float *)(p + 0x150) <= 0.0f)) {
            *(float *)(p + 0x150) = *(float *)(p + 0x150) + *(float *)(*(char **)(p + 0x283C) + 0x2AC);
            if (*(float *)(p + 0x150) < 0.0f) {
                *(float *)(p + 0x150) = 0.0f;
            }
        }
        break;
    case 3:
        if ((unsigned char)func_00249E20(p, 0) == 4) {
            *(unsigned char *)(p + 0x3C83) = 4;
            return 1;
        }
        break;
    case 4:
        break;
    }
    return 0;
}

int func_0021C7E0();

int func_0042FFF0(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    v0 = (p1 & 255);
    switch (v0) {
    case 0:
        if ((*(int *)(p0 + 10392) & 2) != 0) {
            *(char *)(p0 + 10649) = *(unsigned char *)(p0 + 10648);
            *(unsigned char *)(p0 + 10648) = 195;
        } else {
            *(char *)(p0 + 10649) = *(unsigned char *)(p0 + 10648);
            *(unsigned char *)(p0 + 10648) = 191;
        }
        v1 = func_0021C7E0(p0, 17, 0, -1);
        break;
    case 1:
        if ((*(int *)(p0 + 10392) & 2) != 0) {
            *(char *)(p0 + 10649) = *(unsigned char *)(p0 + 10648);
            *(unsigned char *)(p0 + 10648) = 196;
        } else {
            *(char *)(p0 + 10649) = *(unsigned char *)(p0 + 10648);
            *(unsigned char *)(p0 + 10648) = 192;
        }
        v1 = func_0021C7E0(p0, 17, 0, -1);
        break;
    case 2:
        if ((*(int *)(p0 + 10392) & 2) != 0) {
            *(char *)(p0 + 10649) = *(unsigned char *)(p0 + 10648);
            *(unsigned char *)(p0 + 10648) = 197;
        } else {
            *(char *)(p0 + 10649) = *(unsigned char *)(p0 + 10648);
            *(unsigned char *)(p0 + 10648) = 193;
        }
        v1 = func_0021C7E0(p0, 17, 0, -1);
        break;
    }
    return v1;
}
