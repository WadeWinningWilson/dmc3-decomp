/* Steps an angle by a rate * dt, then moves along it (short += float). */
float func_00131BA0(int);

void func_003C0110(char *p, int a, float f) {
    *(short *)(p + 0x1664) += a * *(float *)(p + 0x10);
    *(float *)(p + 0x54) += *(float *)(p + 0x10) * (f * func_00131BA0(*(short *)(p + 0x1664)));
}

void func_00252850(char *, int, int);

void func_003C0890(char *p, unsigned char k, int a, int b) {
    if (*(unsigned char *)(p + 333) == 3) {
        return;
    }
    switch (k) {
    case 0:
    case 1:
    case 4:
        break;
    case 2:
    case 3:
        func_00252850(p, a, b);
        break;
    }
}

void func_0024DA80(char *, int, int);

void func_003C04A0(char *p, int a, int b) {
    if (a >= 0 && b >= 0) {
        *(int *)(p + 0x1BBC) = a;
        *(int *)(p + 0x1BC0) = b;
        func_0024DA80(p + 0x1680, *(int *)(p + 0x1BBC), *(int *)(p + 0x1BC0));
        func_0024DA80(p + 0x1750, *(int *)(p + 0x1BBC), *(int *)(p + 0x1BC0));
    }
}

void func_0028C110(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0013D240();

void func_002790E0();

void func_002791E0();

extern char D_005A77A0[];

extern char D_005AA6B8[];

extern char D_005B0890[];

void func_0022C820(char *);

void func_0024D930();

void func_0024D9A0();

void func_0024FE00(char *);

void func_002E8A10(char *);

void func_00313E20(char *);

void func_00320540(char *);

void func_003C9D90(char *);

extern char D_005A78F8[];

extern char D_005B0070[];

extern char D_005B0094[];

extern char D_005B0114[];

extern char D_005B01A8[];

extern char D_005B0274[];

extern char D_005B032C[];

void func_00204A70();

void func_00204AD0();

void func_0022B5A0(char *);

void func_002E7BF0(char *);

void func_0031E400(char *);

void func_00400FF0(char *);

char *func_003BBDB0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B0070;
    *(char **)(p + 0x40) = D_005B0094;
    *(char **)(p + 0xA0) = D_005B0114;
    *(char **)(p + 0xD0) = D_005B01A8;
    *(char **)(p + 0x130) = D_005B0274;
    *(char **)(p + 0x1D0) = D_005B032C;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0x37);
    func_00100450(p + 0x5A0, func_00204AD0, func_00204A70, 0xC0, 3);
    q = p + 0x7E0;
    *(char **)(p + 0x7F0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x9C0, func_002790E0, func_002791E0, 0x600, 2);
    func_00400FF0(p + 0x15C0);
    p[0x15E0] = 0;
    func_00100450(p + 0x1680, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0028C110(p + 0x1830);
    p[0x1A50] = 0;
    p[0x1A51] = 0;
    *(short *)(p + 0x1A52) = 0;
    *(int *)(p + 0x1A58) = 0;
    *(int *)(p + 0x1A5C) = 0;
    *(int *)(p + 0x1A60) = 0;
    *(int *)(p + 0x1A70) = 0;
    *(int *)(p + 0x1A74) = 0;
    *(int *)(p + 0x1A78) = 0;
    *(float *)(p + 0x1A7C) = 1.0f;
    *(float *)(p + 0x1A80) = 100000.0f;
    p[0x1A84] = 0;
    p[0x1A85] = 0;
    *(short *)(p + 0x1A86) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x1A88) = -1;
    func_002E7BF0(p + 0x1AB4);
    func_002E8A10(p + 0x1B00);
    func_00313E20(p + 0x1B18);
    q = p + 0x1B30;
    *(char **)(p + 0x1B40) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    *(char **)(p + 0x1BD0) = D_005AA6B8;
    *(int *)(p + 0x26E0) = -1;
    p[0x2701] = 0;
    *(int *)(p + 0x2704) = 0;
    *(int *)(p + 0x2714) = 0;
    *(int *)(p + 0x2718) = 0;
    *(int *)(p + 0x271C) = 0;
    *(int *)(p + 0x2720) = 0;
    *(int *)(p + 0x2724) = 0;
    *(int *)(p + 0x2728) = 0;
    *(int *)(p + 0xC8) = 0;
    p[0x1BC7] = 0;
    p[0x1BC9] = 0;
    return p;
}

int func_003C0350(char *, int);

void func_003C0390(char *p, int a, short lim) {
    short t = func_003C0350(p, a);
    short d = t - *(short *)(p + 0x90);
    short v = d * *(float *)(p + 0x10);
    if (lim < v) v = lim;
    else if (v < -lim) v = -lim;
    *(short *)(p + 0x90) += v;
}

void func_00206730(char *);

void func_00228350(char *);

void func_003C0950(char *p) {
    int i;
    for (i = 0; i < 6; i++) {
        func_00206730(p + i * 4 + 0x2714);
    }
    func_00228350(p + 0xC8);
}

extern char D_01DFABA0[];

char *func_00207480(int, int, char *, int);

void func_003305E0(char *, int, int, int, int, int, int);

void func_003C05E0(char *p) {
    char *q;
    *(unsigned char *)(p + 0x1BC7) = 0;
    *(char **)(p + 0x2720) = func_00207480(3, 0xE9, 0, 16);
    q = *(char **)(p + 0x2720);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x8B8) + 0x104);
        q[0x9A] = 1;
        *(*(char **)(p + 0x2720) + 0x3A) = 1;
        q = *(char **)(p + 0x2720);
        q[0x9C] = 0x40;
        q[0x9D] = 0x20;
        *(unsigned char *)(q + 0x9E) = 0x80;
        q[0x9B] = 2;
    }
    func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
}

void func_003C0520(char *p) {
    char *q;
    *(unsigned char *)(p + 0x1BC7) = 1;
    *(char **)(p + 0x271C) = func_00207480(3, 0xDC, 0, 16);
    q = *(char **)(p + 0x271C);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x8B8) + 0x104);
        q[0x9A] = 1;
        *(*(char **)(p + 0x271C) + 0x3A) = 1;
        q = *(char **)(p + 0x271C);
        q[0x9C] = 0x40;
        q[0x9D] = 0x20;
        *(unsigned char *)(q + 0x9E) = 0x80;
        q[0x9B] = 2;
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

void func_001003E0();

void func_0024FEA0();

void func_0028C1A0();

void func_002E7C40();

void func_002E8A50();

void func_00313E60();

void func_0031E440();

void func_00320590();

void func_00401030();

char *func_003BBFF0(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005B0070;
        *(char * *)(p + 64) = D_005B0094;
        *(char * *)(p + 160) = D_005B0114;
        *(char * *)(p + 208) = D_005B01A8;
        *(char * *)(p + 304) = D_005B0274;
        *(char * *)(p + 464) = D_005B032C;
        if (p + 7120 != 0) {
            *(char * *)(p + 7120) = D_005AA6B8;
        }
        if (p + 6960 != 0) {
            *(char * *)(p + 6976) = D_005B0890;
            if (p + 6960 != 0) {
                *(char * *)(p + 6976) = D_005A77A0;
            }
        }
        func_00313E60(p + 6936, -1);
        func_002E8A50(p + 6912, -1);
        func_002E7C40(p + 6836, -1);
        func_0028C1A0(p + 6192, -1);
        func_001003E0(p + 5760, (void *)func_0024D9A0, 208, 2);
        func_00401030(p + 5568, -1);
        func_001003E0(p + 2496, (void *)func_002791E0, 1536, 2);
        if (p + 2016 != 0) {
            *(char * *)(p + 2032) = D_005A78F8;
            if (p + 2016 != 0) {
                *(char * *)(p + 2032) = D_005A77A0;
            }
        }
        func_001003E0(p + 1440, (void *)func_00204A70, 192, 3);
        func_001003E0(p + 472, (void *)func_0013D240, 16, 55);
        func_0031E440(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_001AD140();

int func_003BC5C0();

int func_003BC580(p0) int p0; {
    int v0;
    int v1;
    v1 = func_003BC5C0();
    v0 = p0;
    if ((v1 & 255) == 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

int func_003BF840();

int func_003BF9C0();

int func_003BFCA0();

int func_003BF7D0(p0) char *p0; {
    int v1;
    int v0;
    int tmp0;
    v0 = *(unsigned short *)(*(char **)(p0 + 308) + 34);
    tmp0 = 2;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            v1 = func_003BF840(p0, v0);
            break;
        case 1:
            v1 = func_003BF9C0();
            break;
        }
    } else {
        v1 = func_003BFCA0();
    }
    return v1;
}

void func_003C0190(char *p0, char *p1, float f0) {
    *(float *)(p0 + 84) = (*(float *)(p0 + 84) + (*(float *)(p0 + 16) * ((*(float *)(p1 + 4) - *(float *)(p0 + 84)) / f0)));
}

void func_003C0920(p0, p1) char *p0; char *p1; {
    *(float *)(p1 + 0) = *(float *)(*(char **)(p0 + 6832) + 44);
}

int func_003C0930(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 28)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 2224);
    }
    return (int)v0;
}

int func_001AD100();

void func_003BD090();

int func_003BD260();

int func_003C0500();

int func_003C09B0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v1;
    char *v0;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v2 = func_001AD100();
    v1 = *(unsigned char *)(v0 + 4);
    tmp0 = 2;
    if (v1 != tmp0) {
        switch (v1) {
        case 0:
            func_003BD090(v0);
            /* fall through */
        case 1:
            v2 = func_003BD260(v0);
            break;
        }
    } else {
        v2 = func_003C0500(v0);
    }
    return v2;
}

extern char D_01CAFF0C[];

int func_002F2D30();

int func_003C0F30(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char *v5;
    int v6;
    int v7;
    v0 = (char *)p0;
    v1 = *(int *)(*(char **)D_01CAFF0C + 32);
    v2 = (int)v0;
    if (v1 != 0) {
        v7 = func_002F2D30(v1, v2);
    }
    v3 = 0;
    v5 = v0;
    do {
        v4 = *(int *)(v5 + 10004);
        if (v4 != 0) {
            v7 = func_001AD140(v4);
            *(int *)(v5 + 10004) = 0;
        }
        v3 = (v3 + 1);
        v5 = (v5 + 4);
    } while ((v3 < 6));
    v6 = *(int *)(v0 + 200);
    if (v6 != 0) {
        v7 = func_001AD140(v6);
    }
    return v7;
}

extern void func_003C0910();

void func_003C0FF0(char *p) { func_003C0910(p + -64); }

extern void func_003C0690();

void func_003C1010(char *p) { func_003C0690(p + -64); }

extern void func_003BD8A0();

void func_003C1050(char *p) { func_003BD8A0(p + -304); }

extern void func_003C0510();

void func_003C1080(char *p) { func_003C0510(p + -304); }

extern void func_003BD8C0();

void func_003C10A0(char *p) { func_003BD8C0(p + -304); }

extern void func_003C0490();

void func_003C10C0(char *p) { func_003C0490(p + -464); }

extern void func_003C0480();

void func_003C10D0(char *p) { func_003C0480(p + -464); }

extern void func_003C0470();

void func_003C10E0(char *p) { func_003C0470(p + -464); }

extern void func_003C0460();

void func_003C10F0(char *p) { func_003C0460(p + -464); }

extern void func_003C0450();

void func_003C1100(char *p) { func_003C0450(p + -464); }

extern void func_003C0440();

void func_003C1110(char *p) { func_003C0440(p + -464); }

extern void func_003BE540();

void func_003C1120(char *p) { func_003BE540(p + -464); }

extern void func_003BE680();

void func_003C1130(char *p) { func_003BE680(p + -464); }

void func_003BE510(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 308) = p1;
    *(int *)(p0 + 10028) = p2;
    *(int *)(p0 + 320) = p3;
    *(char *)(p0 + 10033) = 0;
    *(char *)(p0 + 10034) = 0;
    *(char *)(p0 + 10035) = 0;
    *(char *)(p0 + 10036) = 0;
    *(char *)(p0 + 10037) = 0;
}
