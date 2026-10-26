#include "game/mt_rand.h"
extern int D_005BE09C;

void func_001ACC30(int, int, int, int, int);

unsigned char func_004820F0(char *);

void func_00482070(char *);

float func_0034C160(float, float, float);

float func_00131BA0(short);

void func_00481310(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    float f;
    if (*(unsigned char *)(p + 0x281) == 0 && func_004820F0(p) == 1) {
        if (*(unsigned char *)(p + 0x281) == 1) {
            func_001ACC30(D_005BE09C, 3, 0x32, 0x1E, 0);
        } else {
            func_00482070(p);
            func_001ACC30(D_005BE09C, 3, 0xF, 0xA, 0);
        }
    }
    if (*(unsigned char *)(p + 0x281) == 0) {
        *(float *)(p + 0x2A8) = func_0034C160(*(float *)(p + 0x2A8), 13.0f, 0.05f * *(float *)(p + 0x10));
        *(short *)(p + 0x28C) += 1024.0f * *(float *)(p + 0x10);
        f = *(float *)(p + 0x2A8) + 12.0f * func_00131BA0(*(short *)(p + 0x28C));
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x300), "f"(f) : "t0", "memory");
        *(float *)(p + 0x50) += tmp[0] * *(float *)(p + 0x10);
        *(float *)(p + 0x54) += tmp[1] * *(float *)(p + 0x10);
        *(float *)(p + 0x58) += tmp[2] * *(float *)(p + 0x10);
    }
}

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, char *, int, int, int);

void func_00482470(char *p) {
    *(float *)(p + 0x2B0) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x2B0) < 0.0f) {
        *(float *)(p + 0x2B0) = 30.0f;
        func_003305E0(D_01DFABA0, 8, (mt_rand() & 3) + 0x67, p + 0x50, 0x28, 0, 0);
    }
}

void func_00481C60(int a, int b, int c, char *pos) {
    func_003305E0(D_01DFABA0, 8, 0x6C, pos, 0x28, 0, 0);
}

void func_00482580(char *p) {
    if (*(unsigned char *)(p + 0x284) == 0) {
        return;
    }
    switch (*(signed char *)(p + 0x28A)) {
    case 0:
        if (mt_rand() & 1) {
            func_003305E0(D_01DFABA0, 8, 0x6F, p + 0x50, 0x28, 0, 0);
        } else {
            func_003305E0(D_01DFABA0, 8, 0x70, p + 0x50, 0x28, 0, 0);
        }
        *(float *)(p + 0x2B4) = 60.0f;
        (*(signed char *)(p + 0x28A))++;
        break;
    case 1:
        *(float *)(p + 0x2B4) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0x2B4) < 0.0f) {
            if (mt_rand() & 1) {
                func_003305E0(D_01DFABA0, 8, 0x6D, p + 0x50, 0x28, 0, 0);
            } else {
                func_003305E0(D_01DFABA0, 8, 0x6E, p + 0x50, 0x28, 0, 0);
            }
            p[0x284] = 0;
        }
        break;
    }
}

void func_00481800(char *p) {
    char stk[0x10] __attribute__((aligned(16)));
    int i;
    char *o;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 3856), "r"(stk) : "memory");
    *(float *)(stk + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 80), "r"(stk) : "memory");
    *(float *)(p + 92) = 1.0f;
    for (i = 0; i < 15; i++) {
        o = ((char **)(p + 576))[i];
        if (o != 0 && *(int *)(o + 260) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 576))[i] + 260) + 48), "r"(stk) : "memory");
            *(float *)(*(char **)(((char **)(p + 576))[i] + 260) + 60) = 1.0f;
        }
    }
}

void func_0028C790(char *, int);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_00481E00(char *p, unsigned char a) {
    void func_0028C3A0(char *, int, int, char *);
    char *e;
    func_0028C790(p + 0xD40, 0);
    func_0028C790(p + 0xD40, 1);
    func_0028C200(p + 0xD40, p + 0xF60, p + 0xF70, 4, 0, p, 0);
    *(unsigned char *)(p + 0xD43) = 0xD;
    func_0028C8E0(p + 0xD40, 0);
    func_0028C910(p + 0xD40);
    *(unsigned char *)(p + 0xF60) = 6;
    *(unsigned char *)(p + 0xF61) = 0;
    *(short *)(p + 0xF62) = 0;
    *(unsigned char *)(p + 0xF70) = 2;
    *(float *)(p + 0xF80) = 0.0f;
    *(float *)(p + 0xF84) = 0.0f;
    *(float *)(p + 0xF88) = 0.0f;
    *(float *)(p + 0xF8C) = 1.0f;
    if (a == 0) {
        *(float *)(p + 0xF90) = 500.0f;
    } else {
        *(float *)(p + 0xF90) = 700.0f;
    }
    func_0028C3A0(p + 0xD40, 0, -1, p + 0x2C0);
    e = *(char **)(p + 0xDBC);
    if (e != 0) {
        *(unsigned int *)(e + 0xC) &= 0xFFFCFFFF;
        *(unsigned char *)(e + 0xC4) = 0;
        *(unsigned char *)(e + 0xC5) = 0;
        *(unsigned char *)(e + 0xC6) = 0;
        *(unsigned char *)(e + 0xC7) = 0x18;
    }
}

void func_00480E90(char *, int);

extern unsigned char D_01CAFF3D[];

void func_00481B70(char *p, char *e, int c) {
    float d;
    if (e != 0 && c != 0) {
        if (*(signed char *)(p + 0x287) != 4) {
            d = *(float *)(e + 4);
            func_00480E90(p, 0);
            *(float *)(p + 0x2AC) = *(float *)(p + 0x2AC) + d;
            *(float *)(p + 0x29C) = *(float *)(p + 0x29C) - d;
            *(float *)(p + 0x2A8) = 0.0f;
            if (*(float *)(p + 0x29C) < 0.0f || D_01CAFF3D[0] != 0) {
                *(float *)(p + 0x29C) = -1.0f;
                *(unsigned char *)(p + 0x282) = 1;
            } else {
                *(unsigned char *)(p + 0x283) = 1;
                *(float *)(p + 0x2AC) = 0.0f;
            }
        }
        func_003305E0(D_01DFABA0, 8, 0x65, p + 0x50, 0x28, 0, 0);
    }
}

extern char D_01CAFF0C[];

void func_002F2E30(char *, char *);

void func_004827C0(char *p) {
    char *g;
    *(char *)(p + 0x280) = 1;
    *(char *)(p + 0x44) = -1;
    *(char *)(p + 0x45) = 3;
    *(char *)(p + 0x46) = 0x3B;
    *(char *)(p + 0x47) = 0x29;
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2E30(g, p);
    }
}

char *func_00279290(char *);

void func_001A29A0(char *);

void func_00480FF0(char *p) {
    switch (*(unsigned char *)(p + 0x28B)) {
    case 0:
        func_00480E90(p, 2);
        break;
    case 1:
        func_00480E90(p, 3);
        break;
    case 2:
    case 3:
        *(float *)(p + 0x294) = *(float *)(p + 0x294) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x294) < 0.0f) {
            func_00480E90(p, 4);
        }
        break;
    case 4:
        return;
    }
    func_001A29A0(func_00279290(p + 0x740));
}

char *func_00207480(int, int, char *, int);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00481CE0(char *p, signed char k, float *t) {
    void func_00105230(char *, char *, float *);
    float m[16];
    UNIT(m);
    func_00105230((char *)m, (char *)m, t);
    m[15] = 1.0f;
    if (k == 0) {
        func_00207480(3, 0x22C, (char *)m, 0x20);
    } else {
        func_00207480(3, 0x22B, (char *)m, 0x20);
    }
}

extern char D_005828F0[];

void func_00481F20(char *p) {
    char *func_0028C3A0(char *, int, int, char *);
    int i;
    char *e;
    func_0028C790(p + 0xD40, 0);
    func_0028C790(p + 0xD40, 1);
    func_0028C200(p + 0xD40, p + 0xF60, p + 0xF70, 4, D_005828F0, p, 0);
    *(unsigned char *)(p + 0xD43) = 0xD;
    func_0028C8E0(p + 0xD40, 0);
    func_0028C910(p + 0xD40);
    *(unsigned char *)(p + 0xF60) = 6;
    *(unsigned char *)(p + 0xF61) = 0;
    *(short *)(p + 0xF62) = 0;
    *(unsigned char *)(p + 0xF70) = 2;
    *(float *)(p + 0xF80) = 0.0f;
    *(float *)(p + 0xF84) = 0.0f;
    *(float *)(p + 0xF88) = 0.0f;
    *(float *)(p + 0xF8C) = 1.0f;
    *(float *)(p + 0xF90) = 500.0f;
    *(unsigned char *)(p + 0xF64) = 1;
    *(unsigned char *)(p + 0xF65) = 0;
    *(short *)(p + 0xF66) = 1;
    *(unsigned char *)(p + 0xFC0) = 2;
    *(float *)(p + 0xFD0) = 0.0f;
    *(float *)(p + 0xFD4) = -100.0f;
    *(float *)(p + 0xFD8) = 380.0f;
    *(float *)(p + 0xFDC) = 1.0f;
    *(float *)(p + 0xFE0) = 200.0f;
    func_0028C3A0(p + 0xD40, 0, -1, p + 0x2C0);
    func_0028C3A0(p + 0xD40, 1, 10, p + 0x2C0);
    for (i = 0; i < 2; i++, p += 4) {
        e = *(char **)(p + 0xDBC);
        if (e != 0) {
            *(int *)(e + 0xC) = *(int *)(e + 0xC) & 0xFFFCFFFF;
            e[0xC4] = 0;
            e[0xC5] = 0;
            e[0xC6] = 0;
            e[0xC7] = 0x18;
        }
    }
}

void func_00131700(char *, char *, char *);

void func_00481D70(char *p) {
    void func_00105230(char *, char *, char *);
    float v[4];
    v[0] = 0.0f;
    v[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    v[2] = 0.0f;
    v[3] = 1.0f;
    UNIT(p + 0x2C0);
    func_00131700(p + 0x2C0, p + 0x2C0, (char *)v);
    func_00105230(p + 0x2C0, p + 0x2C0, p + 0x50);
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005AADD0[];

extern char D_005B6B00[];

extern char D_005B6B24[];

extern char D_005B6BA4[];

extern char D_005B6C38[];

extern char D_005B6D04[];

void func_001003E0();

void func_0013D240();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

char *func_00482870(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005B6B00;
        *(char * *)(p + 64) = D_005B6B24;
        *(char * *)(p + 160) = D_005B6BA4;
        *(char * *)(p + 208) = D_005B6C38;
        *(char * *)(p + 304) = D_005B6D04;
        func_0028C1A0(p + 3392, -1);
        func_002791E0(p + 1856, -1);
        func_001003E0(p + 320, (void *)func_0013D240, 16, 16);
        if (p + 304 != 0) {
            *(char * *)(p + 304) = D_005AADD0;
        }
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00100450();

void func_001AAD30();

int func_0024FE00();

void func_002790E0();

int func_0028C110();

int func_00480950(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    func_0024FE00();
    *(char **)(v0 + 304) = D_005AADD0;
    *(int *)(v0 + 312) = -1;
    *(char **)(v0 + 0) = D_005B6B00;
    *(char **)(v0 + 64) = D_005B6B24;
    *(char **)(v0 + 160) = D_005B6BA4;
    *(char **)(v0 + 208) = D_005B6C38;
    *(char **)(v0 + 304) = D_005B6D04;
    func_00100450((v0 + 320), (char *)func_001AAD30, (char *)func_0013D240, 16, 16);
    func_002790E0((v0 + 1856));
    func_0028C110((v0 + 3392));
    *(char *)(v0 + 4112) = 0;
    *(char *)(v0 + 4113) = 0;
    *(short *)(v0 + 4114) = 0;
    *(int *)(v0 + 4120) = 0;
    v1 = 0;
    *(int *)(v0 + 4124) = 0;
    *(int *)(v0 + 4128) = 0;
    *(int *)(v0 + 4144) = 0;
    *(int *)(v0 + 4148) = 0;
    *(int *)(v0 + 4152) = 0;
    *(int *)(v0 + 4156) = 0x3f800000;
    *(int *)(v0 + 4160) = 0x47c35000;
    *(char *)(v0 + 4164) = 0;
    *(char *)(v0 + 4165) = 0;
    *(short *)(v0 + 4166) = 0;
    while ((v1 < 10)) {
        tmp0 = ((v1 << 1) + (int)v0);
        v1 = (v1 + 1);
        *(short *)((char *)tmp0 + 4168) = -1;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((v0 + 704)) : "memory");
    *(char *)(v0 + 640) = 1;
    *(char *)(v0 + 642) = 0;
    *(char *)(v0 + 643) = 0;
    *(char *)(v0 + 641) = 0;
    *(char *)(v0 + 644) = 0;
    *(char *)(v0 + 645) = 0;
    *(char *)(v0 + 646) = 0;
    *(char *)(v0 + 647) = -1;
    *(char *)(v0 + 648) = 0;
    *(char *)(v0 + 649) = 0;
    *(char *)(v0 + 650) = 0;
    *(short *)(v0 + 652) = 0;
    *(float *)(v0 + 660) = 0.0f;
    *(int *)(v0 + 656) = 0;
    *(char *)(v0 + 651) = 4;
    *(float *)(v0 + 664) = 0.0f;
    *(float *)(v0 + 668) = 0.0f;
    *(float *)(v0 + 672) = 0.0f;
    *(float *)(v0 + 676) = 0.0f;
    *(float *)(v0 + 680) = 0.0f;
    *(float *)(v0 + 684) = 0.0f;
    *(float *)(v0 + 688) = 0.0f;
    *(float *)(v0 + 692) = 0.0f;
    *(int *)(v0 + 1808) = 0;
    return (int)v0;
}

int func_001AD140();

int func_00206730();

int func_00480B10(p0) int p0; {
    char *v0;
    char *v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 1808));
    v1 = *(char **)(v0 + 1808);
    if (v1 != 0) {
        *(char *)(v1 + 58) = 1;
        v2 = func_001AD140(*(int *)(v0 + 1808));
        *(int *)(v0 + 1808) = 0;
    }
    return v2;
}

int func_00482410();

int func_00481C80(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 642) != 0) {
        *(char *)(p0 + 642) = 0;
        v0 = func_00482410();
    }
    return v0;
}

int func_004823B0();

int func_00481CB0(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 643) != 0) {
        *(char *)(p0 + 643) = 0;
        v0 = func_004823B0();
    }
    return v0;
}

float func_00132470();

int func_00482180(p0) int p0; {
    int v0;
    float tmp2;
    tmp2 = func_00132470((*(int *)(*(char **)D_01CAFF0C + 12) + 80), (p0 + 80));
    v0 = 1;
    if (tmp2 > 750.0f) {
        v0 = 0;
    }
    return v0;
}

void func_00482560(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 644);
    v0 = 1;
    if (tmp0 == 0) {
        *(char *)(p0 + 644) = v0;
        *(char *)(p0 + 650) = 0;
        *(int *)(p0 + 692) = 0;
    }
}

int func_00482830(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 16)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 576);
    }
    return (int)v0;
}

extern void func_00480BE0();

void func_00482950(char *p) { func_00480BE0(p + -64); }

extern void func_00482850();

void func_00482960(char *p) { func_00482850(p + -64); }

extern void func_00482860();

void func_00482970(char *p) { func_00482860(p + -64); }

extern void func_004818D0();

void func_004829A0(char *p) { func_004818D0(p + -64); }

extern void func_00482820();

void func_004829E0(char *p) { func_00482820(p + -304); }
