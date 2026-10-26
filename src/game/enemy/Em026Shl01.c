/* Two 16-bit angles to radians, then a rotation matrix (VU0) placed at +0x50. */
void func_00131760(char *, char *, char *);

void func_004D8120(char *p) {
    *(float *)(p + 0x80) = 6.283185f * (*(short *)(p + 0x514) / 65536.0f);
    *(float *)(p + 0x84) = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x4B0) : "memory");
    func_00131760(p + 0x4B0, p + 0x4B0, p + 0x80);
    __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(p + 0x4B0), "r"(p + 0x50) : "memory");
}

void func_001AD140(char *);

void func_00206730(char *);

void func_0028C790(char *, int);

static inline short ang4D7(float r) {
    return (int)(0.5f + 65536.0f * r / 6.283185f);
}

void func_004D7DB0(char *p) {
    void func_00104B80(char *, float *, float *);
    void func_00105760(float, float *, float *);
    int func_004D8510(float, float, char *, char *);
    float v[4] __attribute__((aligned(16)));
    int k;
    int i;
    float r;
    short t;
    func_00206730(p + 0x138);
    k = *(int *)(p + 0x1BC);
    if ((unsigned char)func_004D8510(1.0f, 0.0f, p, p + 0x504) == 0) {
        *(float *)(p + 0x630) += 20.0f * *(float *)(p + 0x10);
    }
    if ((unsigned char)func_004D8510(1.0f, 0.0f, p, p + 0x500) == 1) {
        if (k != 0) {
            for (i = 0; i < 4; i++) func_0028C790(p + 0x140, i);
        }
    } else {
        r = 0.14726216f * *(float *)(p + 0x10);
        t = ang4D7(r);
        *(short *)(p + 0x634) += (short)(unsigned short)t;
        for (i = 0; i < 4; i++) {
            r = 6.283185f * ((float)(short)(*(short *)(p + 0x90) + *(short *)(p + 0x634) + i * 0x4000) / 65536.0f);
            v[0] = 0.0f;
            v[1] = 0.0f;
            v[2] = *(float *)(p + 0x630);
            v[3] = 1.0f;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + (i << 6) + 0x530) : "memory");
            func_00105760(r, (float *)(p + (i << 6) + 0x530), (float *)(p + (i << 6) + 0x530));
            func_00104B80((char *)v, (float *)(p + (i << 6) + 0x530), v);
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x50), "r"(v) : "memory");
            v[3] = 1.0f;
            __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(p + (i << 6) + 0x530), "r"(v) : "memory");
        }
    }
    if (*(int *)(p + 0x138) == 0) {
        if (k != 0) {
            for (i = 0; i < 4; i++) func_0028C790(p + 0x140, i);
        }
        func_001AD140(p);
    }
}

extern char D_01CAFF0C[];

void func_0028C910(char *);

void func_0028C8E0(char *, int);

short func_004D8420(char *, short, int);

void func_004D6C20(char *, int, int, short, float *, int);

void func_004D8560(char *, int);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define G (*(char **)D_01CAFF0C)

void func_004D75A0(char *p) {
    extern int D_005BDC30;
    unsigned char func_004D8510(char *, char *, float, float);
    void func_0028C200(char *, char *, char *, int, int, char *, int);
    void func_0028C3A0(char *, int, int, char *);
    short func_00131D10(float, float);
    void func_00105760(float *, float *, float);
    void func_00104B80(float *, float *, float *);
    float m[16] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    int i;
    int x;
    short d;
    float a;
    func_00206730(p + 0x138);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (func_004D8510(p, p + 0x500, 1.0f, 0.0f) == 1) {
            *(float *)(p + 0x500) = 32.0f;
            *(float *)(p + 0x504) = 3.0f;
            func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BDC30, p, 0);
            func_0028C910(p + 0x140);
            *(float *)(p + 0x224) = 1.0f;
            *(int *)(p + 0x218) = 0x30040;
            func_0028C8E0(p + 0x140, 0xB);
            for (i = 0; i < 2; i++) {
                if (i == 0) {
                    *(unsigned char *)(p + 0x360) = 5;
                } else {
                    *(unsigned char *)((char *)(i * 4) + (int)p + 0x360) = 1;
                }
                *(unsigned char *)((char *)(i * 4) + (int)p + 0x361) = 0;
                *(short *)((char *)(i * 4) + (int)p + 0x362) = i;
                *(unsigned char *)((char *)(i * 0x50) + (int)p + 0x370) = 2;
                *(float *)((char *)(i * 0x50) + (int)p + 0x380) = 0.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x384) = 150.0f + 112.5f * (float)i;
                *(float *)((char *)(i * 0x50) + (int)p + 0x388) = 0.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x38C) = 1.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x390) = 75.0f;
                func_0028C3A0(p + 0x140, i, -1, p + 0x4B0);
            }
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 1:
        x = *(int *)(p + 0x508);
        if (*(char **)(p + 0x1BC) == 0) break;
        if (*(int *)(*(char **)(p + 0x1BC) + 8) & 0x30000) {
            for (i = 0; i < 2; i++) func_0028C790(p + 0x140, i);
            *(float *)(p + 0x504) = 0.0f;
            break;
        }
        if (*(int *)(p + 0x510) < 0xC && !(*(float *)(p + 0x504) <= 0.0f) && func_004D8510(p, p + 0x504, 1.0f, 0.0f) == 1) {
            VCOPY(t, *(char **)(G + 0xC) + 0x50);
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(t), "r"(t), "r"(p + 0x50) : "memory");
            d = func_004D8420(p, (short)(func_00131D10(t[0], t[2]) - *(short *)(p + 0x90)), 0x800);
            a = 6.283185f * ((float)d / 65536.0f);
            UNIT(m);
            func_00105760(m, m, a);
            t[0] = 0.0f;
            t[1] = 0.0f;
            t[2] = 200.0f;
            t[3] = 0.0f;
            func_00104B80(t, m, t);
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(t), "r"(p + 0x50) : "memory");
            func_004D6C20(*(char **)(p + 0x130), x, 3, d, t, *(int *)(p + 0x510) + 1);
            *(unsigned char *)(p + 0x520) = 1;
        }
        if (!(*(float *)(p + 0x500) <= 0.0f) && func_004D8510(p, p + 0x500, 1.0f, 0.0f) == 1) {
            for (i = 0; i < 2; i++) func_0028C790(p + 0x140, i);
        }
        break;
    }
    if (*(char **)(p + 0x138) == 0) {
        if (*(char **)(p + 0x1BC) != 0) {
            for (i = 0; i < 2; i++) func_0028C790(p + 0x140, i);
        }
        func_001AD140(p);
    } else if (*(unsigned char *)(p + 0x520) == 0) {
        func_004D8560(p, 0x27);
    }
}

/* Turn angle from degrees, two position updates, keeps 20 units above the target. */
extern char D_01CAFF0C[];

extern unsigned char D_01CAFF3C[];

void func_004D8550(char *, float);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VSUBR(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

typedef struct { float v[5]; } T4D6;

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

extern T4D6 D_0058B100;

void func_004D6FA0(char *p) {
    void func_0028C200(char *, char *, char *, int, char *, char *, char *);
    void func_0028C3A0(char *, int, int, char *);
    char *func_00207480(int, int, float *, int);
    extern char *D_005BDC30;
    int func_00131D10(float, float);
    T4D6 tbl;
    float v[4] __attribute__((aligned(16)));
    float d;
    float f;
    char *o;
    char *e;
    tbl = D_0058B100;
    p[0x360] = 5;
    p[0x361] = 0;
    *(short *)(p + 0x362) = 0;
    p[0x370] = 2;
    *(int *)(p + 0x380) = 0;
    *(int *)(p + 0x384) = 0;
    *(int *)(p + 0x388) = 0;
    *(float *)(p + 0x38C) = 1.0f;
    *(float *)(p + 0x390) = 75.0f;
    func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BDC30, p, 0);
    *(int *)(p + 0x218) = 0x30040;
    *(float *)(p + 0x224) = 1.0f;
    func_0028C8E0(p + 0x140, 8);
    func_0028C910(p + 0x140);
    func_0028C3A0(p + 0x140, 0, -1, p + 0x4B0);
    *(char **)(p + 0x138) = func_00207480(3, 0x28F, 0, 0x10);
    if ((o = *(char **)(p + 0x138)) != 0) {
        *(char **)(o + 0x90) = p + 0x4B0;
        o[0x9A] = 0;
        e = *(char **)(p + 0x138);
        e[0x3A] = 1;
    }
    QCOPY(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    VSUBR(v, v, p + 0x50);
    v[1] = v[1] + 100.0f;
    d = fsqrt(v[0] * v[0] + v[2] * v[2]);
    func_00131D10(v[0], v[2]);
    *(short *)(p + 0x514) = -(short)func_00131D10(v[1], d);
    if (*(short *)(p + 0x514) > 0) {
        *(short *)(p + 0x514) = 0;
    } else if (*(short *)(p + 0x514) < -0x2000) {
        *(short *)(p + 0x514) = -0x2000;
    }
    f = tbl.v[D_01CAFF3C[0]];
    *(float *)(p + 0x68) = f;
    *(float *)(p + 0x4F8) = f;
    func_004D8550(p, 20.0f);
}

void func_004D8060(char *p) {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 784), "r"(stk) : "memory");
    *(float *)(stk + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 80), "r"(stk) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 224), "r"(stk) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 848), "r"(p + 240) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 1248), "r"(stk) : "memory");
    *(float *)(p + 1260) = 1.0f;
}

void func_0034BA60(int, char *, signed char, int, int);

void func_004D85E0(char *p, int k) {
    func_0034BA60(k, p + 0x50, *(signed char *)(*(char **)(p + 0x508) + 0x46), 0, 1);
}

void func_004D72B0(char *p) {
    char *func_0028C3A0(char *, int, int, char *);
    void func_0028C200(char *, char *, char *, int, char *, char *, int);
    char *func_00207480(int, int, int, int);
    extern char *D_005BDC30;
    int i;
    char *a;
    char *b;
    char *c;
    char *o;
    *(float *)(p + 0x500) = 32.0f;
    *(float *)(p + 0x504) = 30.0f;
    *(float *)(p + 0x630) = 50.0f;
    *(short *)(p + 0x634) = 0;
    func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BDC30, p, 0);
    func_0028C910(p + 0x140);
    *(float *)(p + 0x224) = 1.0f;
    *(int *)(p + 0x218) = 0x40;
    func_0028C8E0(p + 0x140, 0xD);
    for (i = 0, a = p, b = p, c = p; i < 4; i++, a += 4, b += 0x50, c += 0x40) {
        *(char *)(a + 0x360) = 1;
        *(char *)(a + 0x361) = 0;
        *(short *)(a + 0x362) = i;
        *(char *)(b + 0x370) = 2;
        *(int *)(b + 0x380) = 0;
        *(int *)(b + 0x384) = 0;
        *(int *)(b + 0x388) = 0;
        *(float *)(b + 0x38C) = 1.0f;
        *(float *)(b + 0x390) = 100.0f;
        func_0028C3A0(p + 0x140, i, -1, c + 0x530);
    }
    *(char **)(p + 0x138) = func_00207480(3, 0x297, 0, 0x10);
    o = *(char **)(p + 0x138);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x4B0;
        *(char *)(o + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x138) + 0x3A) = 1;
    }
}

void func_00100580(char *);

void func_0028C1A0(char *, int);

char *func_004D8600(char *p, short flag) {
    extern char D_005B9410[];
    extern char D_005B9434[];
    extern char D_005B94B4[];
    extern char D_005B9548[];
    void func_0024FEA0(char *, int);
    if (p != 0) {
        *(char **)p = D_005B9410;
        *(char **)(p + 64) = D_005B9434;
        *(char **)(p + 160) = D_005B94B4;
        *(char **)(p + 208) = D_005B9548;
        func_0028C1A0(p + 320, -1);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern void func_004D6E40();

void func_004D86A0(char *p) { func_004D6E40(p + -64); }

void func_004D80F0(void) {}

void func_004D8100(void) {}

void func_004D8110(void) {}
