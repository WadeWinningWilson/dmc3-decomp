extern char D_01CAFF0C[];

void func_00131650(float *, float *);

float func_001324E0(float *);

extern float D_005BDF44;

void func_004D30B0(char *p) {
    float d[4] __attribute__((aligned(16)));
    float l;
    char *g;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x50), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
    l = func_001324E0(d);
    l /= 100.0f;
    l = 1.0f > l ? 1.0f : l;
    l = D_005BDF44 / (l * l);
    func_00131650(d, d);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "f"(l * *(float *)(p + 0x10)) : "t0", "memory");
    g = *(char **)D_01CAFF0C;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%2)" : : "r"(*(char **)(g + 0xC) + 0x50), "r"(d), "r"(*(char **)(g + 0xC) + 0x50) : "memory");
    *(float *)(*(char **)(g + 0xC) + 0x5C) = 1.0f;
}

char *func_004D2740(char *p) {
    char *r;
    switch (*(unsigned char *)(p + 45769)) {
    case 0:
    case 1:
        r = p + 3700;
        break;
    case 2:
        r = p + 3952;
        break;
    case 3:
        r = p + 4292;
        break;
    default:
        r = p + 3700;
        break;
    }
    return r;
}

void func_0024DA80(char *, int, int);

void func_004CFBD0(char *p, int k, int b, int m) {
    switch (m) {
    case -1:
        func_0024DA80(*(char **)(p + 0xAB00), (unsigned char)k, b);
        func_0024DA80(*(char **)(p + 0xAB04), (unsigned char)k, b);
        break;
    case 0:
        func_0024DA80(*(char **)(p + 0xAB00), (unsigned char)k, b);
        break;
    case 1:
        func_0024DA80(*(char **)(p + 0xAB04), (unsigned char)k, b);
        break;
    }
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

void func_00204AD0();

void func_00204A70();

void func_002E8A10(char *);

void func_003C9D90(char *);

void func_00204CD0();

void func_00204C70();

void func_00313E20(char *);

extern char D_005A7790[];

extern char D_005A7780[];

void func_0024D930(char *);

void func_00277D30(char *);

void func_00400FF0(char *);

extern char D_005AAA98[];

extern char D_005AFA60[];

void func_0024D9A0();

void func_002E1BC0(char *);

void func_002E8370(char *);

void func_003AD780(char *);

extern char D_005B8F80[];

extern char D_005B8FA4[];

extern char D_005B9024[];

extern char D_005B90B8[];

extern char D_005B9184[];

extern char D_005B923C[];

extern char D_01CAF2B0[];

void func_004BFDB0(char *, int);

char *func_004BFDC0(char *, int);

char *func_004BF580(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E400(p + 0x1D0);
    *(char **)(p + 0x0) = D_005B8F80;
    *(char **)(p + 0x40) = D_005B8FA4;
    *(char **)(p + 0xA0) = D_005B9024;
    *(char **)(p + 0xD0) = D_005B90B8;
    *(char **)(p + 0x130) = D_005B9184;
    *(char **)(p + 0x1D0) = D_005B923C;
    func_00100450(p + 0x1D8, func_001AAD30, func_0013D240, 0x10, 0xC5);
    func_002790E0(p + 0x11C0);
    func_002790E0(p + 0x17C0);
    func_002790E0(p + 0x1DC0);
    func_002790E0(p + 0x23C0);
    func_002790E0(p + 0x29C0);
    func_002790E0(p + 0x2FC0);
    func_002790E0(p + 0x35C0);
    func_002790E0(p + 0x3BC0);
    func_002790E0(p + 0x41C0);
    func_002790E0(p + 0x47C0);
    func_002790E0(p + 0x4DC0);
    func_002790E0(p + 0x53C0);
    q = p + 0x59C0;
    *(char **)(p + 0x59D0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    func_00100450(p + 0x5A60, func_00204AD0, func_00204A70, 0xC0, 2);
    func_00100450(p + 0x5E00, func_00204CD0, func_00204C70, 0xA0, 3);
    q = p + 0x5FE0;
    *(char **)(p + 0x5FF0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x62C0, func_00204CD0, func_00204C70, 0xA0, 3);
    q = p + 0x64A0;
    *(char **)(p + 0x64B0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x6780;
    *(char **)(p + 0x6790) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    func_00100450(p + 0x6880, func_00204CD0, func_00204C70, 0xA0, 4);
    q = p + 0x6B00;
    *(char **)(p + 0x6B10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x6C00;
    *(char **)(p + 0x6C10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x6CA0;
    *(char **)(p + 0x6CB0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x6D40;
    *(char **)(p + 0x6D50) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    q = p + 0x6DE0;
    *(char **)(p + 0x6DF0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AFA60;
    func_003AD780(q);
    func_00100450(p + 0x6E80, func_00204CD0, func_00204C70, 0xA0, 0xA);
    func_00400FF0(p + 0x74C4);
    func_00100450(p + 0xA620, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_00100450(p + 0xA7C0, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_00100450(p + 0xA960, func_0024D930, func_0024D9A0, 0xD0, 2);
    func_0024D930(p + 0xAB10);
    func_0024D930(p + 0xABE0);
    func_0028C110(p + 0xAD20);
    p[0xAF40] = 0;
    p[0xAF41] = 0;
    *(short *)(p + 0xAF42) = 0;
    *(int *)(p + 0xAF48) = 0;
    *(int *)(p + 0xAF4C) = 0;
    *(int *)(p + 0xAF50) = 0;
    *(int *)(p + 0xAF60) = 0;
    *(int *)(p + 0xAF64) = 0;
    *(int *)(p + 0xAF68) = 0;
    *(float *)(p + 0xAF6C) = 1.0f;
    *(float *)(p + 0xAF70) = 100000.0f;
    p[0xAF74] = 0;
    p[0xAF75] = 0;
    *(short *)(p + 0xAF76) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0xAF78) = -1;
    func_002E8370(p + 0xAFA0);
    func_002E8A10(p + 0xAFE4);
    func_00313E20(p + 0xAFFC);
    q = p + 0xB020;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0xB080;
    *(char **)(q + 0x10) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0xB190;
    *(char **)(q + 0xE0) = D_005A7790;
    *(int *)(q + 0xE8) = 0;
    *(int *)(q + 0xE4) = 0;
    *(char **)(q + 0xE0) = D_005A7780;
    func_00277D30(q);
    *(int *)(p + 0xB118) = 0;
    *(int *)(p + 0xB308) = 0;
    *(int *)(p + 0xB30C) = 0;
    *(int *)(p + 0xB310) = 0;
    *(int *)(p + 0xB314) = 0;
    p[0xB2C9] = 0;
    p[0xB2CC] = 0;
    p[0xB2CD] = 0;
    p[0xB2CE] = 0;
    p[0x74C0] = 0;
    p[0x74C1] = 0;
    p[0x74C2] = 0;
    p[0x74C3] = 0;
    p[0xB2CF] = 1;
    p[0xB2D0] = 1;
    p[0xB2D1] = 0;
    p[0xB2D2] = 0;
    *(int *)(p + 0xB288) = 0;
    *(int *)(p + 0xB28C) = 0;
    *(int *)(p + 0xB290) = 0;
    *(int *)(p + 0xB294) = 0;
    *(int *)(p + 0xB298) = 0;
    *(float *)(p + 0xB29C) = 1000.0f;
    p[0xB2CB] = 0;
    p[0xB2D3] = 0;
    *(int *)(p + 0xB2A0) = 0;
    *(int *)(p + 0xB2A4) = 0;
    *(int *)(p + 0xB2A8) = 0;
    p[0xB2CA] = 0;
    p[0xB2D4] = 0;
    *(int *)(p + 0xB2C4) = 1;
    p[0xB2D5] = 0;
    *(float *)(p + 0xB2AC) = 1.0f;
    p[0xB2D6] = 0;
    p[0xB2D7] = 0;
    *(int *)(p + 0xB114) = 0;
    *(int *)(p + 0xB2B4) = 0;
    p[0xB2D8] = 0;
    *(float *)(p + 0xB2B8) = 1.0f;
    *(int *)(p + 0xB2C0) = 0;
    *(int *)(p + 0xB2BC) = 0;
    p[0xB2D9] = 0;
    func_004BFDB0(func_004BFDC0(D_01CAF2B0, 1), 0);
    *(int *)(p + 0xB2DC) = 0;
    *(int *)(p + 0xB2E0) = 0;
    *(int *)(p + 0xB2E4) = 0;
    *(int *)(p + 0xB2E8) = 0;
    *(int *)(p + 0xB2EC) = 0;
    *(int *)(p + 0xB2F0) = 0;
    *(int *)(p + 0xB2F4) = 0;
    *(int *)(p + 0xB2F8) = 0;
    *(int *)(p + 0xB2FC) = 0;
    *(int *)(p + 0xB300) = 0;
    *(int *)(p + 0xB304) = 0;
    *(int *)(p + 0xB280) = 0;
    p[0xB318] = 0;
    return p;
}

float func_004D2B70(char *);

int func_004D2CB0(char *p) {
    if (*(unsigned char *)(p + 0xB2C8) == 1 && *(unsigned char *)(p + 0xB2D7) == 1 && func_004D2B70(p) < 40.0f) {
        return 1;
    }
    return 0;
}

char *func_00279290(char *);

void func_001A1E10(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

void func_001A1F90(char *);

void func_004D2510(char *p, int k) {
    if ((unsigned char)k == 1) {
        func_001A1E10(func_00279290(p + 0x53C0));
        func_001A1E70(func_00279290(p + 0x11C0), 7);
        func_001A1E70(func_00279290(p + 0x11C0), 9);
        func_001A2000(func_00279290(p + 0x11C0), 8);
        func_001A2000(func_00279290(p + 0x11C0), 10);
    } else {
        func_001A1F90(func_00279290(p + 0x53C0));
        func_001A2000(func_00279290(p + 0x11C0), 7);
        func_001A2000(func_00279290(p + 0x11C0), 9);
        func_001A1E70(func_00279290(p + 0x11C0), 8);
        func_001A1E70(func_00279290(p + 0x11C0), 10);
    }
}

int func_004D2BB0(char *p) {
    if (*(unsigned char *)(p + 0xB154) == 0x39) {
        return 0;
    }
    if (*(unsigned char *)(p + 0xB2C8) == 1 && *(unsigned char *)(p + 0xB2D4) == 0 && func_004D2B70(p) < 75.0f) {
        return 1;
    }
    if (*(unsigned char *)(p + 0xB2C8) == 2 && *(unsigned char *)(p + 0xB2D3) == 0 && *(float *)(p + 0xB2A8) <= 0.0f &&
        *(unsigned char *)(p + 0xB2D8) == 1) {
        return 1;
    }
    return 0;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_00201770(char *, float *, float *, float *, int);

static inline unsigned char gnd_4D3(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return 0;
    return 1;
}

float func_004D32F0(char *p) {
    float r[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float h[4] __attribute__((aligned(16)));
    QCOPY(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    if (gnd_4D3()) {
        v[1] = v[1] + 130.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, h, r, 0) == 0) {
            return *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x54);
        }
    }
    return h[1];
}

unsigned char func_004CD3C0(char *p, int k) {
    int func_004D2D20(char *, unsigned char);
    unsigned char r = 0;
    switch (k) {
    case 0x21: case 0x22: case 0x23: case 0x25: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2A: case 0x2B: case 0x2D: case 0x2E: case 0x2F: case 0x3A: case 0x3B: case 0x3C: case 0x3F: case 0x40: case 0x41:
        if ((unsigned char)func_004D2D20(p, k) == 1) {
            if (--*(int *)(p + 0xB2C4) <= 0) r = 1;
        }
        break;
    case 0x17: case 0x18: case 0x19: case 0x1A: case 0x1B: case 0x1C: case 0x1D: case 0x1E: case 0x1F: case 0x20: case 0x24: case 0x2C: case 0x30: case 0x31: case 0x32: case 0x33: case 0x34: case 0x35: case 0x36: case 0x37: case 0x38: case 0x39: case 0x3D: case 0x3E: case 0x42: case 0x43: case 0x44:
        break;
    }
    return r;
}

void func_004D2F30(char *p, unsigned char a1) {
    if (a1 == 1) {
        func_001A1E70(func_00279290(p + 0x11C0), 5);
        func_001A1E70(func_00279290(p + 0x11C0), 6);
        func_001A2000(func_00279290(p + 0x11C0), 7);
        func_001A2000(func_00279290(p + 0x11C0), 8);
        func_001A2000(func_00279290(p + 0x11C0), 9);
        func_001A2000(func_00279290(p + 0x11C0), 0xA);
        func_001A2000(func_00279290(p + 0x11C0), 0xB);
        func_001A2000(func_00279290(p + 0x11C0), 0xC);
    } else {
        func_001A2000(func_00279290(p + 0x11C0), 5);
        func_001A2000(func_00279290(p + 0x11C0), 6);
        func_001A1E70(func_00279290(p + 0x11C0), 7);
        func_001A1E70(func_00279290(p + 0x11C0), 8);
        func_001A1E70(func_00279290(p + 0x11C0), 9);
        func_001A1E70(func_00279290(p + 0x11C0), 0xA);
        func_001A1E70(func_00279290(p + 0x11C0), 0xB);
        func_001A1E70(func_00279290(p + 0x11C0), 0xC);
    }
}

extern float D_005BDEF4;

extern float D_005BDEF8;

extern float D_005BDEFC;

extern float D_005BDF00;

static inline unsigned char mode_36(char *p) {
    unsigned char r = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB154) - 0x36) > 1) {
        r = 0;
    }
    return r;
}

static inline unsigned char mode_34(char *p) {
    unsigned char r = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB154) - 0x34) > 1) {
        r = 0;
    }
    return r;
}

int func_004D1CA0(char *p) {
    int func_0024E780(char *, int, int);
    if (!(*(float *)(p + 0xB28C) <= *(float *)(p + 0xB290))) {
        return 0;
    }
    if (mode_36(p) == 1) {
        return 1;
    }
    if ((unsigned char)func_0024E780(*(char **)(p + 0xAB00), 1, 4) == 1) {
        if ((unsigned char)mode_36(p) == 0) {
            *(float *)(p + 0xB28C) = 0.0f;
            *(float *)(p + 0xB290) = D_005BDEF4;
            *(float *)(p + 0xB294) = 0.0f;
            *(float *)(p + 0xB298) = D_005BDEFC;
        }
        return 1;
    }
    if (mode_34(p) == 1) {
        *(float *)(p + 0xB28C) = 0.0f;
        *(float *)(p + 0xB290) = D_005BDEF8;
        *(float *)(p + 0xB294) = 0.0f;
        *(float *)(p + 0xB298) = D_005BDF00;
        return 1;
    }
    return 0;
}

void func_0034B8C0(short *, short *, int);

void func_004D1AF0(char *p, char *r, short a) {
    float v = *(float *)(p + 0xB284);
    if (!(v < *(float *)(r + 0)) && v < *(float *)(r + 4)) {
        *(short *)(p + 0xB150) = a + (*(short *)(p + 0x160) - *(short *)(p + 0x90));
        func_0034B8C0((short *)(p + 0x90), (short *)(p + 0xB150), (int)((float)*(short *)(r + 8) * *(float *)(p + 0x10)));
    }
}

unsigned char func_004D1F40(char *p) {
    unsigned char r = 0;
    switch (*(unsigned char *)(p + 0xB2C8)) {
    case 0:
    case 1:
        break;
    case 2:
        r = 1;
        break;
    }
    return r;
}

extern unsigned char D_0058AEF0[];

int func_004D2E40(char *p, int a, int *tbl) {
    int func_004D2D20(char *, int, int *);
    int i;
    int *e;
    int m;
    unsigned int k;
    if (*(unsigned char *)(p + 0xB2C8) != 1) return a;
    if ((unsigned char)func_004D2D20(p, a, tbl) == 1) return a;
    i = 0;
    if (tbl[0] != 0) {
        e = tbl;
        m = 1 << *(unsigned char *)(p + 0xB2D7);
        do {
            k = e[0] - 0x17;
            if ((((D_0058AEF0[k] & m) != 0) ^ 1) == 0) {
                return *(unsigned char *)(tbl + i * 2);
            }
            e += 2;
            i++;
        } while (e[0] != 0);
    }
    return 0x17;
}

extern signed char D_005BDDC8[8];

extern signed char D_005BDDD0[8];

unsigned char func_004CD2B0(char *p, int k) {
    unsigned char r = 0;
    switch (*(unsigned char *)(p + 0xB2C8)) {
    case 0:
        return 0;
    case 1:
        if (*(unsigned char *)(p + 0xB2D4) == 0) return 0;
        break;
    case 2:
        break;
    }
    switch (k) {
    case 0x21: case 0x22: case 0x23: case 0x25: case 0x26: case 0x27: case 0x28: case 0x29: case 0x2A: case 0x2B: case 0x2D: case 0x2E: case 0x2F: case 0x30: case 0x32: case 0x33: case 0x3A: case 0x3B: case 0x3C: case 0x3F: case 0x40: case 0x41:
        (*(signed char *)(p + 0xB2CB))--;
        if (*(signed char *)(p + 0xB2CB) <= 0) {
            r = (unsigned char)1;
            *(signed char *)(p + 0xB2CB) = D_005BDDC8[*(int *)(p + 0xB2C0)];
            *(int *)(p + 0xB2C4) = D_005BDDD0[*(int *)(p + 0xB2C0)];
        }
        break;
    case 0x17: case 0x18: case 0x19: case 0x1A: case 0x1B: case 0x1C: case 0x1D: case 0x1E: case 0x1F: case 0x20: case 0x24: case 0x2C: case 0x31: case 0x34: case 0x35: case 0x36: case 0x37: case 0x38: case 0x39: case 0x3D: case 0x3E: case 0x42: case 0x43: case 0x44:
        break;
    }
    return r;
}

extern char *D_005875F0[];

extern char *D_00587604[];

extern char *D_00587618[];

extern char *D_00587630[];

extern char *D_00587644[];

extern char *D_00587658[];

extern char *D_00587670[];

extern char *D_00587684[];

extern char *D_00587698[];

extern char *D_005876B0[];

extern char *D_005876C4[];

extern char *D_005876D8[];

extern char *D_005876F0[];

extern char *D_00587704[];

extern char *D_00587718[];

extern char *D_00587730[];

extern char *D_00587744[];

extern char *D_00587758[];

extern char *D_00587770[];

extern char *D_00587784[];

extern char *D_00587798[];

extern char *D_005877B0[];

extern char *D_005877C4[];

extern char *D_005877D8[];

extern char *D_005877F0[];

extern char *D_00587804[];

extern char *D_00587818[];

extern char *D_00587830[];

extern char *D_00587844[];

extern char *D_00587858[];

extern char *D_00587870[];

extern char *D_00587884[];

extern char *D_00587898[];

extern char *D_0058A6D0[];

extern char *D_0058A6D4[];

extern char *D_0058A6D8[];

extern char *D_0058A6DC[];

extern char *D_0058A6E0[];

extern char *D_0058A6F0[];

extern char *D_0058A6F4[];

extern char *D_0058A6F8[];

extern char *D_0058A6FC[];

extern char *D_0058A700[];

extern char *D_0058A710[];

extern char *D_0058A714[];

extern char *D_0058A718[];

extern char *D_0058A71C[];

extern char *D_0058A720[];

void func_004D1F90(char *p) {
    unsigned char ok;
    char *b;
    char *a;
    char *c;
    if (*(unsigned char *)(p + 0xB2D3) == 1) {
        switch (*(unsigned char *)(p + 0xB2C8)) {
        case 2:
            b = D_00587870[*(int *)(p + 0xB2C0)];
            a = D_00587884[*(int *)(p + 0xB2C0)];
            c = D_00587898[*(int *)(p + 0xB2C0)];
            break;
        case 0:
        case 1:
            break;
        }
    } else {
        ok = 1;
        if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) ok = 0;
        if (ok == 0) {
            if (*(unsigned char *)(p + 0xB2D8) == 0) {
        switch (*(unsigned char *)(p + 0xB2C8)) {
        case 0:
            b = D_005875F0[*(int *)(p + 0xB2C0)];
            a = D_00587604[*(int *)(p + 0xB2C0)];
            c = D_00587618[*(int *)(p + 0xB2C0)];
            break;
        case 1:
            b = D_00587630[*(int *)(p + 0xB2C0)];
            a = D_00587644[*(int *)(p + 0xB2C0)];
            c = D_00587658[*(int *)(p + 0xB2C0)];
            break;
        case 2:
            b = D_00587670[*(int *)(p + 0xB2C0)];
            a = D_00587684[*(int *)(p + 0xB2C0)];
            c = D_00587698[*(int *)(p + 0xB2C0)];
            break;
        }
            } else {
        switch (*(unsigned char *)(p + 0xB2C8)) {
        case 0:
            b = D_005876B0[*(int *)(p + 0xB2C0)];
            a = D_005876C4[*(int *)(p + 0xB2C0)];
            c = D_005876D8[*(int *)(p + 0xB2C0)];
            break;
        case 1:
            b = D_005876F0[*(int *)(p + 0xB2C0)];
            a = D_00587704[*(int *)(p + 0xB2C0)];
            c = D_00587718[*(int *)(p + 0xB2C0)];
            break;
        case 2:
            b = D_00587730[*(int *)(p + 0xB2C0)];
            a = D_00587744[*(int *)(p + 0xB2C0)];
            c = D_00587758[*(int *)(p + 0xB2C0)];
            break;
        }
            }
        } else {
            if (*(unsigned char *)(p + 0xB2D8) == 0) {
        switch (*(unsigned char *)(p + 0xB2C8)) {
        case 0:
            b = D_005875F0[*(int *)(p + 0xB2C0)];
            a = D_00587604[*(int *)(p + 0xB2C0)];
            c = D_00587618[*(int *)(p + 0xB2C0)];
            break;
        case 1:
            b = D_00587770[*(int *)(p + 0xB2C0)];
            a = D_00587784[*(int *)(p + 0xB2C0)];
            c = D_00587798[*(int *)(p + 0xB2C0)];
            break;
        case 2:
            b = D_005877B0[*(int *)(p + 0xB2C0)];
            a = D_005877C4[*(int *)(p + 0xB2C0)];
            c = D_005877D8[*(int *)(p + 0xB2C0)];
            break;
        }
            } else {
        switch (*(unsigned char *)(p + 0xB2C8)) {
        case 0:
            b = D_005876B0[*(int *)(p + 0xB2C0)];
            a = D_005876C4[*(int *)(p + 0xB2C0)];
            c = D_005876D8[*(int *)(p + 0xB2C0)];
            break;
        case 1:
            b = D_005877F0[*(int *)(p + 0xB2C0)];
            a = D_00587804[*(int *)(p + 0xB2C0)];
            c = D_00587818[*(int *)(p + 0xB2C0)];
            break;
        case 2:
            b = D_00587830[*(int *)(p + 0xB2C0)];
            a = D_00587844[*(int *)(p + 0xB2C0)];
            c = D_00587858[*(int *)(p + 0xB2C0)];
            break;
        }
            }
        }
    }
    D_0058A6D0[0] = b;
    D_0058A6F0[0] = a;
    D_0058A710[0] = c;
    D_0058A6D4[0] = b;
    D_0058A6F4[0] = a;
    D_0058A714[0] = c;
    D_0058A6D8[0] = b;
    D_0058A6F8[0] = a;
    D_0058A718[0] = c;
    D_0058A6DC[0] = b;
    D_0058A6E0[0] = b;
    D_0058A6FC[0] = a;
    D_0058A700[0] = a;
    D_0058A71C[0] = c;
    D_0058A720[0] = c;
}

int func_004D1CA0(char *p);

int func_004D1B90(char *p, unsigned char k) {
    unsigned char t;
    unsigned char x;
    if (k != 1) goto a;
    if (*(unsigned char *)(p + 0xB2D2) != 0) goto a;
    return 0;
a:
    if (*(unsigned char *)(p + 0xB120) != 1) goto b;
    return 0;
b:
    t = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) <= 1) goto c;
    t = 0;
c:
    if (t != 1) goto d;
    if (*(unsigned char *)(p + 0xB2CC) != 0) goto d;
    return 0;
d:
    x = *(unsigned char *)(p + 0xB154);
    if (x != 0x44) goto e;
    return 0;
e:
    if (x != 0x32) goto g;
    return 0;
g:
    if ((unsigned char)func_004D1CA0(p) == 1) return 2;
    return 1;
}

void func_004D1A90(char *p0) {
    void func_004D1120();
    signed char t0;
    signed char t1;
    signed char t2;
    t0 = *(signed char *)(p0 + 29888);
    func_004D1120(p0, 0, *(signed char *)(p0 + 29888));
    t1 = *(signed char *)(p0 + 29889);
    func_004D1120(p0, 1, *(signed char *)(p0 + 29889));
    t2 = *(signed char *)(p0 + 29890);
    func_004D1120(p0, 2, *(signed char *)(p0 + 29890));
    func_004D1120(p0, 3, 1);
}

void func_004D4980(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

void func_001003E0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E83B0();

void func_002E8A50();

void func_00313E60();

void func_0031E440();

void func_00320590();

void func_00401030();

char *func_004D44C0(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005B8F80;
        *(char * *)(p + 64) = D_005B8FA4;
        *(char * *)(p + 160) = D_005B9024;
        *(char * *)(p + 208) = D_005B90B8;
        *(char * *)(p + 304) = D_005B9184;
        *(char * *)(p + 464) = D_005B923C;
        if (p + 45456 != 0) {
            if (p + 45680 != 0) {
                *(char * *)(p + 45680) = D_005A7780;
                if (p + 45680 != 0) {
                    *(char * *)(p + 45680) = D_005A7790;
                }
            }
        }
        if (p + 45184 != 0) {
            *(char * *)(p + 45200) = D_005AAA98;
            if (p + 45184 != 0) {
                *(char * *)(p + 45200) = D_005A77A0;
            }
        }
        if (p + 45088 != 0) {
            *(char * *)(p + 45104) = D_005B0890;
            if (p + 45088 != 0) {
                *(char * *)(p + 45104) = D_005A77A0;
            }
        }
        func_00313E60(p + 45052, -1);
        func_002E8A50(p + 45028, -1);
        func_002E83B0(p + 44960, -1);
        func_0028C1A0(p + 44320, -1);
        func_0024D9A0(p + 44000, -1);
        func_0024D9A0(p + 43792, -1);
        func_001003E0(p + 43360, (void *)func_0024D9A0, 208, 2);
        func_001003E0(p + 42944, (void *)func_0024D9A0, 208, 2);
        func_001003E0(p + 42528, (void *)func_0024D9A0, 208, 2);
        func_00401030(p + 29892, -1);
        func_001003E0(p + 28288, (void *)func_00204C70, 160, 10);
        if (p + 28128 != 0) {
            *(char * *)(p + 28144) = D_005AFA60;
            if (p + 28128 != 0) {
                *(char * *)(p + 28144) = D_005A77A0;
            }
        }
        if (p + 27968 != 0) {
            *(char * *)(p + 27984) = D_005AFA60;
            if (p + 27968 != 0) {
                *(char * *)(p + 27984) = D_005A77A0;
            }
        }
        if (p + 27808 != 0) {
            *(char * *)(p + 27824) = D_005AFA60;
            if (p + 27808 != 0) {
                *(char * *)(p + 27824) = D_005A77A0;
            }
        }
        if (p + 27648 != 0) {
            *(char * *)(p + 27664) = D_005AFA60;
            if (p + 27648 != 0) {
                *(char * *)(p + 27664) = D_005A77A0;
            }
        }
        if (p + 27392 != 0) {
            *(char * *)(p + 27408) = D_005A78F8;
            if (p + 27392 != 0) {
                *(char * *)(p + 27408) = D_005A77A0;
            }
        }
        func_001003E0(p + 26752, (void *)func_00204C70, 160, 4);
        if (p + 26496 != 0) {
            *(char * *)(p + 26512) = D_005A78F8;
            if (p + 26496 != 0) {
                *(char * *)(p + 26512) = D_005A77A0;
            }
        }
        if (p + 25760 != 0) {
            *(char * *)(p + 25776) = D_005A78F8;
            if (p + 25760 != 0) {
                *(char * *)(p + 25776) = D_005A77A0;
            }
        }
        func_001003E0(p + 25280, (void *)func_00204C70, 160, 3);
        if (p + 24544 != 0) {
            *(char * *)(p + 24560) = D_005A78F8;
            if (p + 24544 != 0) {
                *(char * *)(p + 24560) = D_005A77A0;
            }
        }
        func_001003E0(p + 24064, (void *)func_00204C70, 160, 3);
        func_001003E0(p + 23136, (void *)func_00204A70, 192, 2);
        if (p + 22976 != 0) {
            *(char * *)(p + 22992) = D_005B0890;
            if (p + 22976 != 0) {
                *(char * *)(p + 22992) = D_005A77A0;
            }
        }
        func_002791E0(p + 21440, -1);
        func_002791E0(p + 19904, -1);
        func_002791E0(p + 18368, -1);
        func_002791E0(p + 16832, -1);
        func_002791E0(p + 15296, -1);
        func_002791E0(p + 13760, -1);
        func_002791E0(p + 12224, -1);
        func_002791E0(p + 10688, -1);
        func_002791E0(p + 9152, -1);
        func_002791E0(p + 7616, -1);
        func_002791E0(p + 6080, -1);
        func_002791E0(p + 4544, -1);
        func_001003E0(p + 472, (void *)func_0013D240, 16, 197);
        func_0031E440(p + 464, 0);
        func_00320590(p + 304, 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_004C56A0(p0) int p0; {
    return *(unsigned char *)((char *)p0 + 45399);
}

int func_001AD140();

int func_002F2D30();

int func_004D0CE0(p0) int p0; {
    char *v0;
    int v1;
    char *v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v2;
    int v20;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    v0 = (char *)p0;
    v1 = *(int *)((char *)p0 + 45788);
    if (v1 != 0) {
        v14 = func_001AD140(v1);
    }
    v7 = *(int *)(v0 + 45792);
    if (v7 != 0) {
        v14 = func_001AD140(v7);
    }
    v18 = *(int *)(v0 + 45804);
    if (v18 != 0) {
        v14 = func_001AD140(v18);
    }
    v19 = *(int *)(v0 + 45808);
    if (v19 != 0) {
        v14 = func_001AD140(v19);
    }
    v20 = *(int *)(v0 + 45796);
    if (v20 != 0) {
        v14 = func_001AD140(v20);
    }
    v2 = *(int *)(v0 + 45800);
    if (v2 != 0) {
        v14 = func_001AD140(v2);
    }
    v3 = *(int *)(v0 + 45812);
    if (v3 != 0) {
        v14 = func_001AD140(v3);
    }
    v4 = *(int *)(v0 + 45816);
    if (v4 != 0) {
        v14 = func_001AD140(v4);
    }
    v5 = *(int *)(v0 + 45820);
    if (v5 != 0) {
        v14 = func_001AD140(v5);
    }
    v6 = *(int *)(v0 + 45824);
    if (v6 != 0) {
        v14 = func_001AD140(v6);
    }
    v8 = *(int *)(v0 + 45828);
    if (v8 != 0) {
        v14 = func_001AD140(v8);
    }
    v9 = *(int *)(v0 + 45696);
    if (v9 != 0) {
        v14 = func_001AD140(v9);
    }
    v10 = *(char **)(v0 + 200);
    if (v10 != 0) {
        *(char *)(v10 + 162) = 1;
    }
    v11 = 0;
    v12 = (int)v0;
    do {
        v13 = *(int *)((char *)v12 + 45832);
        if (v13 != 0) {
            v14 = func_001AD140(v13);
        }
        v11 = (v11 + 1);
        v12 = (v12 + 4);
    } while ((v11 < 4));
    v15 = *(int *)(v0 + 45336);
    if (v15 != 0) {
        v14 = func_001AD140(v15);
    }
    v16 = *(int *)(*(char **)D_01CAFF0C + 32);
    v17 = (int)v0;
    if (v16 != 0) {
        v14 = func_002F2D30(v16, v17);
    }
    return v14;
}

int func_004D1A10(p0) int p0; {
    int func_004D1120();
    int tmp0;
    *(char *)((char *)p0 + 45773) = 0;
    *(char *)((char *)p0 + 45774) = 0;
    func_004D1120(p0, 0, 0);
    func_004D1120(p0, 1, 0);
    func_004D1120(p0, 2, 0);
    tmp0 = func_004D1120(p0, 3, 1);
    return tmp0;
}

int func_004D1E30(p0) int p0; {
    int func_0024E780();
    int tmp1;
    tmp1 = func_0024E780(*(int *)((char *)p0 + 43776), 1, 3);
    return ((tmp1 & 255) == 1);
}

int func_004D1E70(p0) int p0; {
    int func_0024E780();
    int tmp1;
    tmp1 = func_0024E780(*(int *)((char *)p0 + 43776), 1, 3);
    return ((tmp1 & 255) == 2);
}

int func_004D1EB0(p0) int p0; {
    int func_0024E780();
    int tmp1;
    tmp1 = func_0024E780(*(int *)((char *)p0 + 43776), 1, 3);
    return ((tmp1 & 255) == 3);
}

int func_004D1EF0(p0) char *p0; {
    int v0;
    *(float *)(p0 + 45708) = (*(float *)(p0 + 45708) + *(float *)(p0 + 16));
    v0 = 1;
    if (*(float *)(p0 + 45716) <= *(float *)(p0 + 45720)) {
        v0 = 0;
    }
    return (v0 ^ 1);
}

void func_004D27B0(p0) char *p0; {
    char *v0;
    int v1;
    int v10;
    char *v11;
    int v12;
    char *v13;
    int v14;
    char *v2;
    int v3;
    char *v4;
    int v5;
    char *v6;
    char *v7;
    int v8;
    char *v9;
    *(char *)(p0 + 45775) = 0;
    v0 = *(char **)(p0 + 45804);
    v1 = 1;
    if (v0 != 0) {
        *(char *)(v0 + 59) = v1;
    }
    v7 = *(char **)(p0 + 45808);
    v8 = 1;
    if (v7 != 0) {
        *(char *)(v7 + 59) = v8;
    }
    v9 = *(char **)(p0 + 45796);
    v10 = 1;
    if (v9 != 0) {
        *(char *)(v9 + 59) = v10;
    }
    v11 = *(char **)(p0 + 45800);
    v12 = 1;
    if (v11 != 0) {
        *(char *)(v11 + 59) = v12;
    }
    v13 = *(char **)(p0 + 45816);
    v14 = 1;
    if (v13 != 0) {
        *(char *)(v13 + 59) = v14;
    }
    v2 = *(char **)(p0 + 45820);
    v3 = 1;
    if (v2 != 0) {
        *(char *)(v2 + 59) = v3;
    }
    v4 = *(char **)(p0 + 45824);
    v5 = 1;
    if (v4 != 0) {
        *(char *)(v4 + 59) = v5;
    }
    v6 = *(char **)(p0 + 200);
    if (v6 != 0) {
        *(char *)(v6 + 161) = 0;
    }
    *(char *)(p0 + 45776) = 0;
}

int func_00105300();

int func_004D2A80(p0, p1, p2) int p0; int p1; int p2; {
    int v4;
    int v6;
    int v7;
    char *v0;
    char *v1;
    char *v2;
    char *v3;
    int v5;
    v7 = 0;
    v0 = (char *)p1;
    v1 = (char *)p2;
    do {
        v2 = *(char **)(v0 + 0);
        if (v2 != 0) {
            v3 = *(char **)(v1 + 0);
            if (v3 != 0) {
                v4 = *(int *)(v2 + 260);
                if (v4 != 0) {
                    v5 = *(int *)(v3 + 260);
                    if (v5 != 0) {
                        v6 = func_00105300(v4, v5);
                    }
                }
            }
        }
        v7 = (v7 + 1);
        v0 = (v0 + 4);
        v1 = (v1 + 4);
    } while ((v7 < 24));
    return v6;
}

int func_004F3630();

int func_004D2B10(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = p1;
    v2 = 0;
    do {
        v3 = func_004F3630(v0, v1, v2);
        v2 = (v2 + 1);
    } while ((v2 < 6));
    return v3;
}

int func_004D35B0(p0) int p0; {
    return *(signed char *)((char *)p0 + 45348);
}

int func_004D4080(p0) int p0; {
    return *(signed char *)((char *)p0 + 45347);
}

void func_004D4410(p0, p1) int p0; char *p1; {
    *(float *)((char *)p0 + 45332) = *(float *)(p1 + 44);
}

int func_004D4430(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 24)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 3700);
    }
    return (int)v0;
}

void func_004D4450(p0, p1) int p0; char *p1; {
    *(float *)(p1 + 0) = *(float *)((char *)p0 + 45328);
}

void func_004D4470(p0, p1) int p0; char *p1; {
    *(float *)(p1 + 0) = *(float *)((char *)p0 + 44948);
}

float func_004D4490(p0) int p0; {
    return *(float *)((char *)p0 + 45752);
}

int func_004D44A0(p0) int p0; {
    return *(signed char *)((char *)p0 + 45346);
}

int func_004D44B0(p0) int p0; {
    return *(signed char *)((char *)p0 + 45345);
}

extern void func_004BFE60();

void func_004D49D0(char *p) { func_004BFE60(p + -64); }

extern void func_004D4110();

void func_004D4A10(char *p) { func_004D4110(p + -64); }

extern void func_004D4090();

void func_004D4A20(char *p) { func_004D4090(p + -64); }

extern void func_004D33C0();

void func_004D4A30(char *p) { func_004D33C0(p + -64); }

extern void func_004D4120();

void func_004D4A40(char *p) { func_004D4120(p + -64); }

extern void func_004D35C0();

void func_004D4A50(char *p) { func_004D35C0(p + -64); }

extern void func_004CBEF0();

void func_004D4A90(char *p) { func_004CBEF0(p + -304); }

void func_004D4AB0(char *p) { func_004D4110(p + -304); }

void func_004D4AC0(char *p) { func_004D4090(p + -304); }

void func_004D4AD0(char *p) { func_004D33C0(p + -304); }

void func_004D4AE0(char *p) { func_004D4120(p + -304); }

extern void func_004C3AD0();

void func_004D4AF0(char *p) { func_004C3AD0(p + -304); }

extern void func_002F42A0();

void func_004D4B50(char *p) { func_002F42A0(p + -464); }

extern void func_004CD450();

void func_004D4B70(char *p) { func_004CD450(p + -464); }

extern void func_004CC7E0();

void func_004D4B80(char *p) { func_004CC7E0(p + -464); }

void func_004CC3A0(char *p0, int p1, int p2, int p3) {
    *(int *)(p0 + 308) = p1;
    *(int *)((p0 + 0x10000) + -20196) = p2;
    *(int *)(p0 + 320) = p3;
    *(char *)((p0 + 0x10000) + -20192) = 0;
    *(char *)((p0 + 0x10000) + -20191) = 0;
    *(char *)((p0 + 0x10000) + -20190) = 0;
    *(char *)((p0 + 0x10000) + -20189) = 0;
    *(char *)((p0 + 0x10000) + -20188) = 0;
}
