/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-10 (part 2). */
void func_002FB930(int, int, int *);
void func_002FB9F0(int, int);

typedef struct { unsigned short u0; unsigned char b2, b3, b4, b5, b6, b7; short h8, hA, hC, hE; unsigned char b10, b11, b12, b13; unsigned int w14; int w18; } S2FAA;

typedef struct { unsigned char b0; char p1[3]; unsigned short h4; unsigned char b6; unsigned char b7; unsigned char b8; unsigned char b9; unsigned char bA; unsigned char bB; unsigned char bC; unsigned char bD; short hE; int w10; unsigned char b14; char p15; unsigned short h16; unsigned short h18; unsigned short h1A; unsigned short h1C; unsigned short h1E; } G2FB2;

G2FB2 *func_002FB170(int, int);
void func_002FB1C0(G2FB2 *, S2FAA *, int, int);
int func_002FAA00(S2FAA *, unsigned short, unsigned short, unsigned short, unsigned short);
void func_002FAB10(S2FAA *);
void func_002FAB00(S2FAA *);
void func_001318E0(float *, float *, float *);
void func_00105230(float *, float *, float *);
void func_00104B80(char *, float *, char *);
float func_00131B50(float);
float func_00131B80(float);

int func_002FB250(int a, int b, int *prm) {
    S2FAA s = { 0 };
    G2FB2 *g;
    for (;;) {
        g = func_002FB170((unsigned short)a, (unsigned short)b);
        if (g == 0) return -1;
        s.u0 = g->h4;
        s.b4 = a;
        s.b5 = g->b7;
        s.h8 = g->bC;
        s.hA = g->bD;
        s.hC = g->hE;
        s.b3 = g->b9;
        s.b6 = g->bA;
        s.b7 = g->bB;
        s.w14 = g->w10;
        s.b2 = g->b8;
        s.b10 = g->b14;
        s.b5 += prm[1];
        s.b6 += prm[2];
        s.b7 += prm[3];
        s.b3 += prm[4];
        s.h8 += prm[5];
        s.hA += prm[6];
        s.hC += prm[7];
        s.w14 += prm[8];
        s.b10 += prm[9];
        s.h8 = s.h8 * prm[10] / 100;
        s.b2 |= prm[11];
        if (g->h1E) {
            s.b2 &= 0x7F;
            s.b2 |= 1;
        }
        switch (g->b0) {
        case 6: func_002FB930((unsigned short)a, (unsigned short)b, prm); break;
        case 7: func_002FB9F0((unsigned short)a, (unsigned short)b); break;
        case 1: func_002FB1C0(g, &s, (unsigned short)a, g->b6 + prm[0]); break;
        case 2: func_002FAB10(&s); break;
        case 3: func_002FAB00(&s); break;
        case 5: func_002FAA00(&s, g->h18, g->h1A, g->h1C, g->h1E); break;
        case 8: case 9: case 10: case 11: case 12: break;
        }
        if (g->h16 == 0xFFFF || g->h16 == (unsigned short)b) break;
        b = g->h16;
    }
    return 0;
}

typedef struct { float v[4]; } V209 __attribute__((aligned(16)));

extern V209 D_0054D9B0;
extern char D_01CAFF0C[];
extern char D_005601B0[];
extern float D_005601D8[];
extern float D_005601D4[];
extern char D_005601F0[];
extern float D_00560218[];
extern float D_00560214[];
void func_002282B0(char *);
float func_001324E0(float *);
void func_002EC050(int, char *, float);
void func_00332AE0(char *, char *, float, float);
char *func_00207480(int, int, char *, int);
void func_0034BA60(int, char *, int, int, int);
void func_001AD140(char *);

void func_002B4830(char *d, float *s) {
    float m[16] __attribute__((aligned(16)));
    V209 r;
    float c[4] __attribute__((aligned(16)));
    float x;
    float z;
    float w;
    x = s[4] * s[10] - s[8] * s[6] + 0.5f * ((s[0] + s[12]) * (s[6] - s[10])) - 0.5f * ((s[4] - s[8]) * (s[2] + s[18]));
    z = func_00131B80(func_00131B50(x));
    w = (z - 60.0f) / z;
    r = D_0054D9B0;
    r.v[0] = w;
    r.v[2] = w;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(c), "r"((char *)s) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"((char *)s + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"((char *)s + 0x20) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"((char *)s + 0x30) : "memory");
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
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"((char *)s), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x10), "r"((char *)s + 0x10), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x20), "r"((char *)s + 0x20), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x30), "r"((char *)s + 0x30), "r"(c) : "memory");
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
    *(float *)(d + 0x40) = s[16];
}

typedef struct { int w[16]; } S3FE;
void func_00105300(char *, char *);
void func_00131650(float *, float *);
void func_00104E78(float *, float *);
void func_00104C00(float *, float *, char *);
extern char D_01DFABA0[];
extern char D_005BE1A8[4];
void func_003305E0(char *, int, int, char *, int, int, int);
void func_0036DF70(char *, int);
void func_00207470(int, int, float *);
void func_00387970(char *);
void func_0022CB30(char *);
void func_0022CB50(char *, char *);
int func_0022CBA0(char *);
char *func_0022CBB0(char *, char *);
int func_0012B1A0(char *, char *);
int func_0022CD60(char *);
int func_002F64E0(char *, char *);
int func_002F6FC0(char *, char *);
void func_002F62C0(char *, char *);
short func_0020F9B0(char *);
extern char D_005BC3F0[4];
extern char D_005BC3F4[4];
char *func_002E3DE0(char *, char *, char *);
char *func_002EC460(char *, char *, char *);
char *func_00357900(char *, char *, char *);
char *func_00311E70(char *, char *, char *);
char *func_002FBA30(char *, char *, char *);
char *func_003831D0(char *, char *, char *);
char *func_00384AC0(char *, char *, char *);
char *func_00385BF0(char *, char *, char *);
char *func_004DA480(char *, char *, char *);
char *func_0038A620(char *, char *, char *);
char *func_0038B410(char *, char *, char *);
char *func_003CF150(char *, char *, char *);
char *func_003D3E10(char *, char *, char *);
char *func_003DFF00(char *, char *, char *);
char *func_003E0B10(char *, char *, char *);
char *func_004011B0(char *, char *, char *);
char *func_0040E090(char *, char *, char *);
char *func_0043C580(char *, char *, char *);
char *func_0043DD20(char *, char *, char *);
char *func_0044C820(char *);
char *func_0044D7E0(char *, char *, char *);
char *func_00450770(char *);
char *func_00451C00(char *, char *, char *);
char *func_00454440(char *, char *, char *);
char *func_0046FDD0(char *, char *, char *);
char *func_00474450(char *, char *, char *);
char *func_0047C5A0(char *, char *, char *);
char *func_004801E0(char *, char *, char *);
char *func_00482A10(char *, char *, char *);
char *func_004D9280(char *, char *, char *);
char *func_004FC2E0(char *, char *, char *);
char *func_002E3A40(char *, char *, char *);
extern char D_0056C470[];
void func_0041D840(char *, char *, float);
void func_0028C200(char *, char *, char *, int, void *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);

void func_003FE180(char *p, S3FE *s, int unused, float *pos) {
    float v[4];
    volatile S3FE c;
    float w[4] __attribute__((aligned(16)));
    float l;
    char *o;
    func_002282B0(p + 0x428);
    if (*(int *)(p + 0x428) == 0) return;
    c = *s;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    v[0] = *(float *)(o + 0x50) - pos[0];
    v[1] = *(float *)(o + 0x54) - pos[1];
    v[2] = *(float *)(o + 0x58) - pos[2];
    v[3] = 1.0f;
    l = func_001324E0(v);
    if (((signed char *)s)[2] != 0) return;
    v[0] = *(float *)(p + 0x470);
    v[1] = *(float *)(p + 0x474);
    v[2] = *(float *)(p + 0x478);
    v[3] = 1.0f;
    if (!(*(float *)((char *)s + 4) < 100.0f) && l < 500.0f) {
        func_002EC050(10, (char *)v, 100.0f);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005601F0, D_00560218[0], D_00560214[0]);
    } else {
        func_002EC050(3, (char *)v, 100.0f);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005601B0, D_005601D8[0], D_005601D4[0]);
    }
    func_00207480(3, 0x5A, p + 0x440, 0x10);
    w[0] = *(float *)(p + 0x470);
    w[1] = *(float *)(p + 0x474);
    w[2] = *(float *)(p + 0x478);
    w[3] = 1.0f;
    func_0034BA60(0x1D, (char *)w, *(signed char *)(*(char **)(p + 0x428) + 0x46), 0, 1);
    func_001AD140(p);
}

void func_00322DC0(char *p, S3FE *s, int unused, float *pos) {
    float v[4];
    volatile S3FE c;
    float w[4] __attribute__((aligned(16)));
    float l;
    char *o;
    c = *s;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    v[0] = *(float *)(o + 0x50) - pos[0];
    v[1] = *(float *)(o + 0x54) - pos[1];
    v[2] = *(float *)(o + 0x58) - pos[2];
    v[3] = 1.0f;
    l = func_001324E0(v);
    if (((signed char *)s)[2] != 0) return;
    v[0] = *(float *)(p + 0x180);
    v[1] = *(float *)(p + 0x184);
    v[2] = *(float *)(p + 0x188);
    v[3] = 1.0f;
    if (!(*(float *)((char *)s + 4) < 100.0f) && l < 500.0f) {
        func_002EC050(10, (char *)v, 100.0f);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005601F0, D_00560218[0], D_00560214[0]);
    } else {
        func_002EC050(3, (char *)v, 100.0f);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005601B0, D_005601D8[0], D_005601D4[0]);
    }
    func_00207480(3, 0x5A, p + 0x150, 0x10);
    w[0] = *(float *)(p + 0x180);
    w[1] = *(float *)(p + 0x184);
    w[2] = *(float *)(p + 0x188);
    w[3] = 1.0f;
    func_0034BA60(0x37, (char *)w, *(signed char *)(*(char **)(p + 0x1A4) + 0x46), 0, 1);
    func_001AD140(p);
}

void func_001FD820(char *p, int n) {
    float m2[16] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    float m0[16] __attribute__((aligned(16)));
    int i;
    char *e;
    if (*(unsigned char *)(p + 0x104) == 0) {
        volatile float f = (float)n;
        *(int *)(p + 0x148) = 0;
        *(float *)(p + 0x168) = 1.0f / (1.0f + f);
        for (i = 0; i < *(int *)(p + 0x10); i++) {
            e = *(char **)(*(char **)(p + 0x14) + i * 4);
            if (*(char **)(e + 0xF0) != 0) {
                func_00105300((char *)m0, *(char **)(*(char **)(e + 0xF0) + 0x104));
                func_00131650(m0, m0);
                func_00131650(m0 + 4, m0 + 4);
                func_00131650(m0 + 8, m0 + 8);
                func_00104E78(m1, m0);
                func_00104C00(m2, m1, *(char **)(e + 0x104));
                m2[12] = m2[12] / *(float *)(*(char **)(e + 0xF0) + 0xE0);
                m2[13] = m2[13] / *(float *)(*(char **)(e + 0xF0) + 0xE4);
                m2[14] = m2[14] / *(float *)(*(char **)(e + 0xF0) + 0xE8);
                func_00105300(e, (char *)m2);
            } else {
                func_00105300(e, *(char **)(e + 0x100));
            }
            *(float *)(e + 0x90) = *(float *)(e + 0x184);
            *(float *)(e + 0x94) = *(float *)(e + 0x198);
            *(float *)(e + 0x98) = *(float *)(e + 0x1AC);
            *(float *)(e + 0x9C) = 0.0f;
        }
    } else {
        volatile float f = (float)n;
        *(int *)(p + 0x148) = 0;
        *(float *)(p + 0x168) = 1.0f / (1.0f + f);
        for (i = 0; i < *(int *)(p + 0x10); i++) {
            e = *(char **)(*(char **)(p + 0x14) + i * 4);
            func_00105300(e, *(char **)(e + 0x100));
            *(float *)(e + 0x90) = *(float *)(e + 0x184);
            *(float *)(e + 0x94) = *(float *)(e + 0x198);
            *(float *)(e + 0x98) = *(float *)(e + 0x1AC);
            *(float *)(e + 0x9C) = 0.0f;
        }
    }
}

void func_001FDA70(char *p, int k, int n) {
    float m2[16] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    float m0[16] __attribute__((aligned(16)));
    int i;
    int q;
    char *e;
    char *a;
    int *kp = &k;
    if (*(unsigned char *)(p + 0x104) == 0) {
        a = (char *)(k * 4) + (int)p;
        *(int *)(a + 0x148) = 0;
        *(float *)(a + 0x168) = 1.0f / (1.0f + (float)n);
        for (i = 0; i < *(int *)(p + 0x10); i++) {
            e = *(char **)(*(char **)(p + 0x14) + i * 4);
            if (*(short *)(e + 0xF4) == k) {
                if (*(char **)(e + 0xF0) != 0) {
                    func_00105300((char *)m0, *(char **)(*(char **)(e + 0xF0) + 0x104));
                    func_00131650(m0, m0);
                    func_00131650(m0 + 4, m0 + 4);
                    func_00131650(m0 + 8, m0 + 8);
                    func_00104E78(m1, m0);
                    func_00104C00(m2, m1, *(char **)(e + 0x104));
                    m2[12] = m2[12] / *(float *)(*(char **)(e + 0xF0) + 0xE0);
                    m2[13] = m2[13] / *(float *)(*(char **)(e + 0xF0) + 0xE4);
                    m2[14] = m2[14] / *(float *)(*(char **)(e + 0xF0) + 0xE8);
                    func_00105300(e, (char *)m2);
                } else {
                    func_00105300(e, *(char **)(e + 0x100));
                }
                *(float *)(e + 0x90) = *(float *)(e + 0x184);
                *(float *)(e + 0x94) = *(float *)(e + 0x198);
                *(float *)(e + 0x98) = *(float *)(e + 0x1AC);
            }
        }
    } else {
        a = (char *)(k * 4) + (int)p;
        *(int *)(a + 0x148) = 0;
        *(float *)(a + 0x168) = 1.0f / (1.0f + (float)n);
        for (q = 0; q < *(int *)(p + 0x10); q++) {
            e = *(char **)(*(char **)(p + 0x14) + q * 4);
            if (*(short *)(e + 0xF4) == k) {
                func_00105300(e, *(char **)(e + 0x100));
                *(float *)(e + 0x90) = *(float *)(e + 0x184);
                *(float *)(e + 0x94) = *(float *)(e + 0x198);
                *(float *)(e + 0x98) = *(float *)(e + 0x1AC);
            }
        }
    }
}

void func_00388370(char *p, char *s, int u, float *pos) {
    float d[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float l;
    switch (*(unsigned char *)(p + 5)) {
    case 1:
    case 2:
        return;
    }
    if (*(signed char *)(s + 2) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(pos), "r"(p + 0xCE0) : "memory");
        l = func_001324E0(d);
        w[0] = *(float *)(p + 0x10) * (*(float *)(s + 4) * (d[0] / l) / *(float *)(p + 0xDA0));
        w[1] = *(float *)(p + 0x10) * (*(float *)(s + 4) * (d[1] / l) / *(float *)(p + 0xDA0) / 2.0f);
        w[2] = *(float *)(p + 0x10) * (*(float *)(s + 4) * (d[2] / l) / *(float *)(p + 0xDA0));
        w[3] = 0.0f;
        *(float *)(p + 0xD80) = *(float *)(p + 0xD80) + w[0] * *(float *)(p + 0x10);
        *(float *)(p + 0xD84) = *(float *)(p + 0xD84) + w[1] * *(float *)(p + 0x10);
        *(float *)(p + 0xD88) = *(float *)(p + 0xD88) + w[2] * *(float *)(p + 0x10);
        func_003305E0(D_01DFABA0, 8, 0x3D, p + 0xCE0, 0x21, 0, 0);
        func_0036DF70(D_005BE1A8, 8);
        *(unsigned char *)(p + 0xDCD) = 1;
        *(float *)(p + 0xDC4) = 60.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        m[12] = pos[0];
        m[13] = pos[1];
        m[14] = pos[2];
        func_00207470(3, 0x91, m);
        if ((*(float *)(p + 0xDAC) -= *(float *)(s + 4)) < 0.0f) func_00387970(p);
    } else {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        m[12] = pos[0];
        m[13] = pos[1];
        m[14] = pos[2];
        func_00207470(3, 6, m);
        func_003305E0(D_01DFABA0, 8, 0x95, p + 0xCE0, 0x21, 0, 0);
    }
}

static inline char *ent2F5(int *q, unsigned int *c, int n) { if (*c < n + 1) return 0; if (*(int *)((char *)q + n * 4 + 8) == 0) return 0; return (char *)q + *(int *)((char *)q + n * 4 + 8); }

void func_002F5AC0(char *p, int *h, unsigned char mode) {
    char r[16];
    char w[32];
    char *tp;
    int t;
    int k;
    char *a;
    char *b;
    int st;
    char *o;
    unsigned int *c;
    c = (unsigned int *)(h + 1);
    if (*c <= 4) return;
    *(char **)p = ent2F5(h, c, 4);
    *(unsigned char *)(p + 4) = mode;
    a = ent2F5(h, c, 1);
    b = ent2F5(h, c, 5);
    func_0022CB30(r);
    st = 0;
    *(unsigned char *)(p + 0x10) = 1;
    *(float *)(p + 0x14) = -1.0f;
    *(float *)(p + 0x18) = -1.0f;
    *(float *)(p + 0x1C) = -1.0f;
    *(float *)(p + 0x20) = -1.0f;
    *(unsigned char *)(p + 0xB0) = 0;
    func_0022CB50(r, *(char **)p);
    while (!func_0022CBA0(r)) {
        switch (st) {
        case 0:
            if (func_002F64E0(p, r)) st = 1;
            break;
        case 1:
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BC3F0) == 0) st = 2;
            break;
        case 2:
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BC3F4) == 0) {
                k = func_0022CD60(r);
                t = func_002F6FC0(p, func_0022CBB0(r, w));
                if ((unsigned char)t == 1 || (unsigned char)t == 0) {
                    st = 1;
                } else if (*(unsigned char *)(p + 4) == 0) {
                    switch ((unsigned char)t) {
                    case 2:
                        tp = func_002E3DE0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 3:
                        tp = func_002EC460(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 4:
                        tp = func_00357900(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 5:
                        tp = func_00311E70(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 6:
                        tp = func_002FBA30(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 7:
                        tp = func_003831D0(a, b, r);
                        if (tp != 0) tp += 0x38;
                        o = tp;
                        break;
                    case 8:
                        tp = func_00384AC0(a, b, r);
                        if (tp != 0) tp += 0x38;
                        o = tp;
                        break;
                    case 9:
                        tp = func_00385BF0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 10:
                        tp = func_004DA480(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 11:
                        tp = func_0038A620(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 12:
                        tp = func_0038B410(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 13:
                        tp = func_003CF150(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 14:
                        tp = func_003D3E10(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 15:
                        tp = func_003DFF00(a, b, r);
                        if (tp != 0) tp += 0x38;
                        o = tp;
                        break;
                    case 16:
                        tp = func_003E0B10(a, b, r);
                        if (tp != 0) tp += 0x38;
                        o = tp;
                        break;
                    case 17:
                        tp = func_004011B0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 18:
                        tp = func_0040E090(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 19:
                        tp = func_0043C580(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 20:
                        tp = func_0043DD20(a, b, r);
                        if (tp != 0) tp += 0x130;
                        o = tp;
                        break;
                    case 21:
                        tp = func_0044C820(r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 22:
                        tp = func_0044D7E0(a, b, r);
                        if (tp != 0) tp += 0x130;
                        o = tp;
                        break;
                    case 23:
                        tp = func_00450770(r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 24:
                        tp = func_00451C00(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 25:
                        tp = func_00454440(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 26:
                        tp = func_0046FDD0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 27:
                        tp = func_00474450(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 28:
                        tp = func_0047C5A0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 29:
                        tp = func_004801E0(a, b, r);
                        if (tp != 0) tp += 0x130;
                        o = tp;
                        break;
                    case 30:
                        tp = func_00482A10(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 31:
                        tp = func_004D9280(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 32:
                        tp = func_004FC2E0(a, b, r);
                        if (tp != 0) tp += 0xD0;
                        o = tp;
                        break;
                    case 33:
                        func_002F62C0(p, r);
                        o = 0;
                        break;
                    }
                    if (o != 0) {
                        *(int *)(o + 8) = k;
                        *(unsigned char *)(o + 4) = t;
                    }
                } else if (*(unsigned char *)(p + 4) == 1) {
                    switch ((unsigned char)t) {
                    case 2:
                    case 3:
                        if (*(unsigned char *)(p + 5) != 0) {
                            tp = func_002E3A40(a, b, r);
                            if (tp != 0) tp += 0xD0;
                            if (tp != 0) {
                                *(int *)(tp + 8) = k;
                                *(unsigned char *)(tp + 4) = t;
                            }
                        }
                        break;
                    case 4:
                        func_0020F9B0(*(char **)(*(char **)D_01CAFF0C + 0x18));
                        break;
                    case 0:
                    case 1:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                        break;
                    }
                }
            } else {
                st = 0;
            }
            break;
        }
    }
}

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline short ang42D(float d) { return 0.5f + 65536.0f * d / 6.283185f; }

static inline char *base42D(char *p) { char *q = p; if (q != 0) q += 0x40; return q; }

void func_0042D460(char *p) {
    char *q;
    char *r;
    char *t;
    char *e;
    {
        char *o = *(char **)(p + 0xD0);
        *(signed char *)(p + 0x44) = -1;
        *(unsigned char *)(p + 0x45) = 4;
        VCOPY(p + 0x50, o + 0x50);
        VCOPY(p + 0x80, o + 0x80);
    }
    {
        short a = 0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f;
        *(short *)(p + 0x90) = (unsigned short)a;
    }
    func_0041D840(base42D(p), p + 0x150, 1.0f);
    *(char **)(p + 0x450) = func_00207480(3, 0x36C, 0, 0x10);
    e = *(char **)(p + 0x450);
    if (e == 0) {
        func_001AD140(p);
        return;
    }
    t = p + 0x190;
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 0;
    q = *(char **)(p + 0x450);
    *(unsigned char *)(q + 0x3A) = 1;
    *(unsigned char *)(p + 0x3F0) = 1;
    *(unsigned char *)(p + 0x3F1) = 0;
    *(short *)(p + 0x3F2) = 0;
    *(unsigned char *)(p + 0x400) = 6;
    *(float *)(p + 0x410) = 0.0f;
    *(float *)(p + 0x414) = 0.0f;
    *(float *)(p + 0x418) = 0.0f;
    *(float *)(p + 0x41C) = 1.0f;
    *(float *)(p + 0x424) = 5.0f;
    *(float *)(p + 0x420) = 100.0f;
    func_0028C200(p + 0x1D0, p + 0x3F0, p + 0x400, 3, D_0056C470, p, 0);
    *(int *)(p + 0x2A8) = 0x40;
    func_0028C8E0(p + 0x1D0, 0);
    func_0028C910(p + 0x1D0);
    r = p + 0x190;
    func_0028C3A0(p + 0x1D0, 0, -1, r);
    *(int *)(p + 0x454) = 0;
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
}
