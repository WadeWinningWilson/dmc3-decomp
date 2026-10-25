#include "game/mt_rand.h"
/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-11. */
extern short D_00563DC0[];
unsigned char func_0024E800(char *);
void func_0024DA80(char *, int, int);
void func_003A0CD0(char *, short);
void func_0039D800(char *);
void func_003A0F20(char *);
unsigned char func_003A2080(char *, char *, float, float);
unsigned char func_0039DDF0(char *, float);

typedef struct { short s0; short s2; short s4; short s6; float f8; float fC; float f10; float f14; float f18; float f1C; float f20; unsigned char b24; } E3A1;

typedef struct { float v[4]; } F3A1;

extern E3A1 D_00563FB0 __attribute__((aligned(16)));
extern E3A1 D_00563FE0 __attribute__((aligned(16)));
extern E3A1 D_00564010 __attribute__((aligned(16)));
extern E3A1 D_00564040 __attribute__((aligned(16)));
extern F3A1 D_00564070 __attribute__((aligned(16)));
extern char D_005BE098[8];
void func_0028C5C0(char *, int, float);
void func_00195E20(char *, char *);
void func_00131650(char *, char *);
extern char D_01DFABA0[];
extern float D_005BDEAC;
void func_00206730(char *);
void func_00286040(char *);
char *func_004D2740(char *);
void func_00330BD0(char *, int, char *, int, int);
void func_004E6FF0(char *);
float func_001324E0(float *);
void func_001318E0(float *, float *, float *);
void func_00105230(float *, float *, float *);
void func_00104B80(char *, float *, char *);

static inline void play3A1(char *p, int s) { *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC); *(short *)(p + 0x2DDC) = s; func_0024DA80(p + 0x29D0, 0, s); func_0024DA80(p + 0x2AA0, 0, s); }

static inline void xz3A1(char *v, float x, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = 0.0f; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }

static inline unsigned char both3A1(char *p) { unsigned char r; if (func_0024E800(p + 0x29D0) == 1 && func_0024E800(p + 0x2AA0) == 1) r = 1; else r = 0; return r; }

unsigned char func_003A1320(char *p, int k) {
    E3A1 a __attribute__((aligned(16))) = D_00563FB0;
    E3A1 b __attribute__((aligned(16))) = D_00563FE0;
    E3A1 c __attribute__((aligned(16))) = D_00564010;
    E3A1 d __attribute__((aligned(16))) = D_00564040;
    E3A1 *t[4] = { &a, &b, &c, &d };
    F3A1 f __attribute__((aligned(16))) = D_00564070;
    E3A1 *e;
    unsigned char r;
    int s;
    e = t[(unsigned char)k];
    *(unsigned char *)(p + 0x2DE8) = 0;
    r = 0;
    if (e->b24 > 0) func_003A0CD0(p, D_00563DC0[e->b24]);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if ((s = e->s0) >= 0) play3A1(p, s);
        *(unsigned char *)(p + 5) = 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
        break;
    case 1:
        if (both3A1(p) == 1) {
            if ((s = e->s2) >= 0) play3A1(p, s);
            *(unsigned char *)(p + 5) = 2;
            func_0039D800(p);
            *(float *)(p + 0x60) = 0.0f; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
            xz3A1(p + 0x70, e->f8, e->fC);
            xz3A1(p + 0x2E00, e->f10, e->f14);
            *(float *)(p + 0x2E30) = e->f18;
        }
        break;
    case 2:
        func_003A0F20(p);
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1 && both3A1(p) != 0) {
            if ((s = e->s4) >= 0) play3A1(p, s);
            xz3A1(p + 0x70, e->f1C, e->f20);
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 5) = 3;
        }
        break;
    case 3:
        func_003A0F20(p);
        if (both3A1(p) == 1) {
            if ((s = e->s6) >= 0) play3A1(p, s);
            *(unsigned char *)(p + 5) = 4;
            func_0039D800(p);
        }
        break;
    case 4:
        func_003A0F20(p);
        if (func_0039DDF0(p, f.v[(unsigned char)k]) == 1) {
            *(float *)(p + 0x60) = 0.0f; r = 0; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
        } else if (both3A1(p) == 1) {
            *(float *)(p + 0x60) = 0.0f; r = 1; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 5) = 5;
        }
        break;
    case 5:
        r = 1;
        break;
    }
    return r;
}

void func_004E6D10(char *p) {
    short o;
    char *t;
    func_00206730(p + 0x470);
    func_00286040(p + 0x474);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        break;
    case 1:
        t = *(char **)(*(char **)(func_004D2740(*(char **)(p + 0x478)) + 0xC) + 0x104) + 0x30;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x50), "r"(t) : "memory");
        *(float *)(p + 0xFC) = 1.0f;
        if (func_001324E0((float *)(p + 0xF0)) < 100.0f) {
            *(unsigned char *)(p + 4) = 4;
            break;
        }
        func_00131650(p + 0xF0, p + 0xF0);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0xF0), "f"(D_005BDEAC * *(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vadd.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(p + 0xF0) : "memory");
        break;
    }
    o = *(short *)(p + 0xB10);
    *(short *)(p + 0xB10) += 5461.0f * *(float *)(p + 0x10);
    if (*(short *)(p + 0xB10) * o < 0) func_00330BD0(D_01DFABA0, 0x73, p + 0x50, 0x23, 0);
    func_004E6FF0(p);
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}

typedef struct { float v[4]; } V209 __attribute__((aligned(16)));

extern V209 D_00541C90;
float func_0011DBE0(float, float);
extern int D_005BE09C;
float func_00132470(float *, char *);
char *func_00207470(int, int, float *);
extern char D_01CAFF0C[];
void func_00332AE0(char *, float *, float, float);
extern float D_00577A40[];
extern float D_00577A68[];
extern float D_00577A64[];

void func_00209A30(char *d, char *s) {
    float m[16] __attribute__((aligned(16)));
    V209 r;
    float c[4] __attribute__((aligned(16)));
    r = D_00541C90;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(c), "r"(s) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(s + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(s + 0x20) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(s + 0x30) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(c), "f"(0.25f) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x10), "r"(s + 0x10), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x20), "r"(s + 0x20), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x30), "r"(s + 0x30), "r"(c) : "memory");
    *(float *)(d + 0xC) = *(float *)(d + 0x1C) = *(float *)(d + 0x2C) = *(float *)(d + 0x3C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_001318E0(m, m, r.v);
    func_00105230(m, m, c);
    func_00104B80(d, m, d);
    func_00104B80(d + 0x10, m, d + 0x10);
    func_00104B80(d + 0x20, m, d + 0x20);
    func_00104B80(d + 0x30, m, d + 0x30);
    *(float *)(d + 0x40) = *(float *)(s + 0x40);
}

typedef struct { float v[4]; } V48C __attribute__((aligned(16)));

void func_00133890(char *, char *, V48C *);
extern V48C D_0057BAE0;
float func_00132630(char *, float *);
short func_00131CB0(float);
void func_00131EA0(float *, float *, int);
void func_00132600(char *, float *, char *);
void func_00105578(float *, float *, float);
void func_00105760(float *, float *, float);
void func_00104C00(float *, float *, float *);
int func_002D9EB0(char *);
void func_00105300(char *, char *);
void func_00132300(char *, float, float, float);
extern char D_01DF5D20[];
void func_001AD100(char *);
void func_002EF940(char *, char *);
float func_001F9C40(char *, int);
void func_003305E0(char *, int, int, char *, int, int, int);
int func_0022CBA0(char *);
void func_0022CBB0(char *, char *);
int func_0012B1A0(char *, char *);
int func_0022CD60(char *);
float func_0022CD90(char *);
short func_0020F9B0(char *);
int func_002F7400(char *);
int func_002F7460(char *);
extern char D_005BC350[8];
extern char D_005BC358[8];
extern char D_005BC360[8];
extern char D_005BC368[4];
extern char D_005BC36C[4];
extern char D_005BC370[8];
extern char D_005BC378[8];
extern char D_005BC380[8];
extern char D_005BC388[8];
extern char D_005BC390[8];
extern char D_005BC398[8];
extern char D_005BC3A0[4];
extern char D_005BC3A4[4];
extern char D_005BC3A8[4];
extern char D_005BC3AC[4];
extern char D_005BC3B0[4];
extern char D_005BC3B4[4];
extern char D_005BC3B8[8];
extern char D_005BC3C0[8];
extern char D_005BC3C8[8];
extern char D_005BC3D0[8];
extern char D_005BC3D8[8];
extern char D_005572E8[];

void func_004726C0(char *p) {
    float tmp[4] __attribute__((aligned(16)));
    V48C up;
    char *o;
    int f;
    func_00206730(p + 0x460);
    if ((*(float *)(p + 0x468) -= *(float *)(p + 0x10)) < 0.0f) {
        *(unsigned char *)(p + 4) = 3;
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0xF0), "f"(*(float *)(p + 0x10)) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vadd.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(tmp) : "memory");
    if ((unsigned char)*(unsigned char *)(p + 0x46C) == 0) {
        o = *(char **)(*(char **)&D_005BE09C + 0x23C);
        if (o != 0 && func_00132470((float *)(o + 0x70), p + 0x50) < 300.0f) {
            func_00330BD0(D_01DFABA0, 0x1F, p + 0x50, 0x22, 0);
            *(unsigned char *)(p + 0x46C) = 1;
        }
    }
    if (*(char **)(p + 0x20C) != 0 && (f = *(int *)(*(char **)(p + 0x20C) + 8)) != 0) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        func_00207470(3, 0xA, (float *)(p + 0x150));
        if (f & 0x30000) func_00330BD0(D_01DFABA0, (mt_rand() & 1) + 0x20, p + 0x50, 0x22, 0);
        return;
    }
    if (*(char **)(p + 0x210) != 0 && (*(int *)(*(char **)(p + 0x210) + 8) & 3)) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        func_00207470(3, 0x1D9, (float *)(p + 0x150));
        func_00330BD0(D_01DFABA0, 0x2F, p + 0x50, 0x22, 0);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_00577A40, D_00577A68[0], D_00577A64[0]);
        return;
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    up = D_0057BAE0;
    func_00133890(p + 0x150, p + 0xF0, &up);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
}

void func_004FEA70(char *p, float *tgt) {
    float d[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float l;
    float c;
    int a;
    unsigned char r;
    func_00131650(p + 0x150, p + 0x150);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(tgt), "r"(p + 0x50) : "memory");
    if ((l = func_001324E0(d)) <= 0.0f) return;
    c = func_00132630(p + 0x150, d) / l;
    if (!(c <= 1.0f)) c = 1.0f;
    else c = c < -1.0f ? -1.0f : c;
    a = func_00131CB0(c);
    if (*(short *)(p + 0x198) < a) a = *(short *)(p + 0x198);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vopmula.xyz $ACC, $vf4, $vf5
	vopmsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%2)" : : "r"(p + 0x150), "r"(d), "r"(d) : "memory");
    __asm__ volatile("lqc2 $vf10, 0x0(%1)
	vabs.xyz $vf10, $vf10
	vaddy.x $vf10, $vf10, $vf10y
	vaddz.x $vf10, $vf10, $vf10z
	sqc2 $vf10, 0x0(%0)" : : "r"(s), "r"(d) : "memory");
    r = s[0] > 0.0f;
    if (r) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00131EA0(m, d, a);
        func_00132600(p + 0x150, m, p + 0x150);
    }
}

void func_004F5230(char *p, int a) {
    float v[4] __attribute__((aligned(16)));
    float m3[16] __attribute__((aligned(16)));
    float m2[16] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    char *b;
    char *q;
    char *r;
    short ang;
    b = *(char **)(*(char **)(func_004D2740(*(char **)(p + 0x484)) + 0xC) + 0x104) + 0x30;
    ang = 5461.5f * (0.5f + (float)*(int *)(p + 0xBC0)) + (float)a;
    v[0] = 100.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m3), "r"(v) : "memory");
    func_00105578(m2, m3, 6.283185f * ((float)ang / 65536.0f));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m1) : "memory");
    func_00105760(m1, m1, 6.283185f * ((float)(short)(int)*(short *)(*(char **)(p + 0x484) + 0x90) / 65536.0f));
    func_00104C00(m2, m1, m2);
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(m2) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v), "r"(b) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
    q = *(char **)(*(char **)D_01CAFF0C + 0xC);
    r = *(char **)(((char **)(q + 0x1388))[func_002D9EB0(q)] + 0x104) + 0x30;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x50), "r"(r) : "memory");
    *(unsigned char *)(p + 0xBEC) = 1;
}

static inline int tst470(short s) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    unsigned int *w;
    unsigned int m;
    if (s < 32) {
        w = (unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18);
        m = 1 << (s & 31);
        return (*w & m) != 0;
    } else {
        w = (unsigned int *)((char *)((s - 32) / 32 * 4) + (int)g + 0x44);
        m = 1 << ((s - 32) & 31);
        return (*w & m) != 0;
    }
}

static inline void setf470(short s) { char *g = *(char **)(*(char **)D_01CAFF0C + 0x18); int k = s; if (k < 32) { ((int *)(g + 0x18))[k / 32] |= 1 << (k & 31); } else { k -= 32; ((int *)(g + 0x44))[k / 32] |= 1 << (k & 31); } }

void func_004707C0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float d;
    float t;
    if (*(unsigned char *)(p + 0x560) == 0) return;
    func_001AD100(p);
    switch (*(unsigned char *)(p + 0xDC)) {
    case 0:
        *(unsigned char *)(p + 0xDC) = 1;
        *(float *)(p + 0x8D4) = *(float *)(p + 0x5A4);
        *(float *)(p + 0x8D0) = 0.0f;
    case 1:
        if (*(short *)(p + 0x562) != -1 && tst470(*(short *)(p + 0x562))) {
            func_00470CE0(p);
            break;
        }
        func_0028C5C0(p + 0x5B0, 0, 1.0f);
        func_002EF940(*(char **)D_01CAFF0C, p + 0x840);
        if (*(float *)(p + 0x8D0) <= 0.0f) break;
        d = 10.0f * *(float *)(p + 0x10);
        if (func_001F9C40(D_01DF5D20, 0x40) < 0.95f) d *= 0.3f;
        t = (*(float *)(p + 0x8D0) -= d);
        if (t < 0.0f) d += t;
        t = (*(float *)(p + 0x8D4) -= d);
        if (t < 0.0f) d += t;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x590) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(v), "f"(d) : "t0", "memory");
        func_00105230((float *)(p + 0x520), (float *)(p + 0x520), v);
        func_00105300(p + 0x890, p + 0x520);
        func_00132300(p + 0x890, 0.0f, 100.0f, 0.0f);
        if (*(float *)(p + 0x8D4) <= 0.0f) {
            func_003305E0(D_01DFABA0, 8, 0x94, p + 0x550, 0x12, 0, 0);
            func_00470CE0(p);
        } else if (*(float *)(p + 0x8D0) <= 0.0f) {
            *(unsigned char *)(p + 0xDC) = 1;
        }
        break;
    case 3:
        func_0028C5C0(p + 0x5B0, 0, 1.0f);
        break;
    }
    func_00195E20(D_005BE098, p);
}

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; } S2ECh;

typedef struct { unsigned char a; char pad[3]; int b; int c; } S2ECe;

typedef struct { unsigned char b0; char pad[3]; int i4; unsigned char c8; unsigned char c9; short hA; short hC; char padE[2]; float vv[2][3]; unsigned char m28; char pad29[3]; int one2C; int cnt; S2ECe ent[8]; } S2ECo;

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; } S2ECs;

typedef struct { int x0; int x4; short x8; char pad[2]; unsigned int flags; unsigned char mode; char pad2[3]; float v[3]; int z; } S2ECt;

typedef struct { S2ECo o; S2ECs u; S2ECt t; } S2ECx;

char *func_002ECAE0(char *, int *, S2ECh *, S2ECo *, short);
int func_002F6690(S2ECh *, char *, char *);
int func_002F69A0(S2ECs *, char *, char *);
int func_002F6D40(S2ECt *, char *, char *);
extern float D_005656C0[];
extern float D_00565680[];
extern char D_005BE1A8[8];
void func_0031E570(char *);
void func_002D6F20(char *, int);
short func_002D6DB0(void);
int func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
void func_0024DB10(char *, int, int, int, int, int, int);
void func_001ACC30(int, int, int, int, int);
void func_0036DF10(char *, int, int, int, int, int);
char *func_00207480(int, int, char *, int);
void func_002D6C60(char *, int);

char *func_002EC460(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S2ECh s;
    S2ECx x;
    char *e;
    unsigned char k;
    short id;
    s.a1 = 0;
    s.a3 = 0;
    s.f10[0] = 0.0f;
    s.f10[1] = 0.0f;
    s.a0 = -1;
    s.a2 = -1;
    s.f10[2] = 0.0f;
    s.f10[3] = 1.0f;
    s.f10[4] = 0.0f;
    s.f10[5] = 0.0f;
    s.f10[6] = 0.0f;
    s.f10[7] = 1.0f;
    s.f10[8] = 1.0f;
    s.f10[9] = 1.0f;
    s.f10[10] = 1.0f;
    s.f10[11] = 1.0f;
    x.o.b0 = 0;
    x.o.i4 = -1;
    x.o.hA = -1;
    x.o.hC = -1;
    x.o.vv[0][0] = x.o.vv[0][1] = x.o.vv[0][2] = x.o.vv[1][0] = x.o.vv[1][1] = x.o.vv[1][2] = 0.0f;
    x.o.m28 = 0;
    x.o.one2C = 1;
    x.o.cnt = 0;
    x.u.b0 = -1;
    x.u.b1 = -1;
    x.u.b2 = 0;
    x.u.e8 = 0;
    x.u.e4 = 0;
    x.u.e0 = 0;
    x.t.x0 = 0;
    x.t.x4 = 0xF000;
    x.t.x8 = 0x180C;
    x.t.flags = 0;
    x.t.mode = 0;
    x.t.z = 0;
    k = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BC350) == 0) {
            e = 0;
            id = func_0020F9B0(*(char **)(*(char **)D_01CAFF0C + 0x18));
            if (id != -1)
                e = func_002ECAE0(p, q, &s, &x.o, id);
            return e;
        }
        if (func_002F6690(&s, name, r) == 0 && func_002F69A0(&x.u, name, r) == 0 && func_002F6D40(&x.t, name, r) == 0) {
            if (func_0012B1A0(name, D_005BC358) == 0) {
                x.o.i4 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC360) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC368) == 0)
                    x.o.b0 = 1;
                else
                    x.o.b0 = 0;
            } else if (func_0012B1A0(name, D_005BC36C) == 0) {
                func_0022CBB0(r, w);
                x.o.c8 = func_002F7400(w);
                x.o.hA = func_0022CD60(r);
                k = 0;
            } else if (func_0012B1A0(name, D_005BC370) == 0) {
                func_0022CBB0(r, w);
                x.o.c9 = func_002F7400(w);
                x.o.hC = func_0022CD60(r);
                k = 1;
            } else if (func_0012B1A0(name, D_005BC378) == 0) {
                x.o.vv[k][0] = func_0022CD90(r);
                x.o.vv[k][1] = func_0022CD90(r);
                x.o.vv[k][2] = func_0022CD90(r);
            } else if (func_0012B1A0(name, D_005BC380) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC388) == 0) x.o.m28 = 2;
                else if (func_0012B1A0(w, D_005BC368) == 0) x.o.m28 = 1;
            } else if (func_0012B1A0(name, D_005BC390) == 0) {
                x.o.one2C = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BC398) == 0) {
                func_0022CBB0(r, w);
                x.o.ent[x.o.cnt].a = func_002F7460(w);
                x.o.ent[x.o.cnt].b = func_0022CD60(r);
                x.o.ent[x.o.cnt].c = func_0022CD60(r);
                x.o.cnt++;
            } else if (func_0012B1A0(name, D_005BC3A0) == 0) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC3A4) == 0) x.t.flags |= 1;
                else if (func_0012B1A0(w, D_005BC3A8) == 0) x.t.flags |= 2;
                else if (func_0012B1A0(w, D_005BC3AC) == 0) x.t.flags |= 4;
                else if (func_0012B1A0(w, D_005BC3B0) == 0) x.t.flags |= 8;
                else if (func_0012B1A0(w, D_005BC3B4) == 0) x.t.flags |= 0x30000;
            } else if (func_0012B1A0(name, D_005BC3B8) == 0) {
                x.t.v[0] = func_0022CD90(r);
                x.t.v[1] = func_0022CD90(r);
                x.t.v[2] = func_0022CD90(r);
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BC3C0) == 0) x.t.mode = 1;
                else if (func_0012B1A0(w, D_005BC3C8) == 0) x.t.mode = 2;
                else if (func_0012B1A0(w, D_005BC3D0) == 0) x.t.mode = 3;
                else if (func_0012B1A0(w, D_005572E8) == 0) x.t.mode = 4;
            } else if (func_0012B1A0(name, D_005BC3D8) == 0) {
                x.t.z = func_0022CD60(r);
            }
        }
    }
    return 0;
}

void func_002D3270(char *p) {
    int s;
    short v;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
        (*(signed char *)(p + 0x3906))++;
        *(short *)(p + 0x38FE) = *(short *)(p + 0x38FC);
        if (100.0f * (2.3283064e-10f * mt_rand()) < D_005656C0[*(int *)(p + 0x38F8)]) {
            func_002D6F20(p, 1);
        }
    case 1:
        if ((*(float *)(p + 0x38DC) -= *(float *)(p + 0x10)) < 0.0f) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x38DC) = 60.0f;
        }
        break;
    case 2:
        if ((*(float *)(p + 0x38DC) -= *(float *)(p + 0x10)) <= 0.0f) {
            (*(unsigned char *)(p + 5))++;
            break;
        }
        s = func_002D6DB0();
        if (s < 0) s += 0x10000;
        v = (float)s / *(float *)(p + 0x38DC);
        v = v < 0x71C ? v : 0x71C;
        *(short *)(p + 0x38FC) += (float)v * *(float *)(p + 0x10);
        break;
    case 3:
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 1);
            if (100.0f * (2.3283064e-10f * mt_rand()) < D_00565680[*(unsigned char *)(p + 0x38D0)]) {
                func_0024DB10(p + 0x2F70, 3, 6, 0, 0, 1, 10);
                func_0024DB10(p + 0x3040, 3, 6, 0, 0, 1, 10);
                *(unsigned char *)(p + 0x37DA) = 0x12;
                *(unsigned char *)(p + 5) = 0;
                break;
            }
        }
        if (func_0024E800(p + 0x2F70) == 1) {
            func_0024DB10(p + 0x2F70, 0, 7, 0x6F, 0, 1, 4);
            func_0024DB10(p + 0x3040, 0, 7, 0x6F, 0, 1, 4);
            *(unsigned char *)(p + 0x37DA) = 2;
            *(unsigned char *)(p + 5) = 0x32;
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 2) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 2);
        func_001ACC30(D_005BE09C, 2, 0x1E, 10, 0);
        func_0036DF10(D_005BE1A8, 0, 1, 0x32, 10, 0);
        func_00207480(3, 0x319, p + 0x1EF0, 0x10);
    }
    func_002D6C60(p, *(short *)(p + 0x38FE));
}
