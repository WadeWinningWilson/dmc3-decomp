#include "game/mt_rand.h"
extern char D_005A77A0[];

extern char D_005AA350[];

extern char D_005AA374[];

extern char D_005AA3F4[];

extern char D_005AA488[];

extern char D_005AA554[];

extern char D_005AA60C[];

extern char D_005AA6B8[];

extern char D_005B0890[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_00202F80();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E78A0();

void func_002E8A50();

void func_00313E60();

void func_0031E4E0();

void func_00320590();

char *func_002C4590(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AA350;
        *(char **)(p + 64) = D_005AA374;
        *(char **)(p + 160) = D_005AA3F4;
        *(char **)(p + 208) = D_005AA488;
        *(char **)(p + 304) = D_005AA554;
        *(char **)(p + 464) = D_005AA60C;
        if ((p + 12160) != 0) {
            *(char **)(p + 12160) = D_005AA6B8;
        }
        if (p + 11968 != 0) {
            *(char **)(p + 11984) = D_005B0890;
            if (p + 11968 != 0) {
                *(char **)(p + 11984) = D_005A77A0;
            }
        }
        if (p + 11872 != 0) {
            *(char **)(p + 11888) = D_005B0890;
            if (p + 11872 != 0) {
                *(char **)(p + 11888) = D_005A77A0;
            }
        }
        func_00313E60((p + 11836), -1);
        func_002E8A50((p + 11812), -1);
        func_002E78A0((p + 11744), -1);
        func_001003E0((p + 11056), (void *)func_00202F80, 144, 3);
        func_0028C1A0((p + 10336), -1);
        func_001003E0((p + 9296), (void *)func_0024D9A0, 208, 5);
        func_001003E0((p + 1600), (void *)func_002791E0, 1536, 3);
        func_001003E0((p + 532), (void *)func_0013D240, 16, 46);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

/* How many of three thresholds f exceeds, capped at 2 (char counters use daddiu). */
extern float D_005623B0[3];

unsigned char func_002C6CF0(float f) {
    unsigned char n = 0;
    int i;
    for (i = 0; i < 3; i++) {
        if (f > D_005623B0[i]) {
            n++;
        }
    }
    if (n >= 3) {
        n = 2;
    }
    return n;
}

extern float D_005BC210;

void func_002CEEA0(char *, int);

void func_002CECC0(char *, int, int);

void func_002CCDF0(char *p) {
    char *func_00207480(int, int, float *, int);
    unsigned char func_002CFA00(char *, float);
    unsigned char func_0024E800(char *);
    float tmp[4] __attribute__((aligned(16)));
    float *q;
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = D_005BC210;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        (*(unsigned char *)(p + 0x5AD))++;
    case 1:
        if (func_002CFA00(p, 0.0f) == 1) {
            q = (float *)(p + 0x1890);
            func_00207480(3, 0x14F, q, 0x10);
            if (func_0024E800(p + 0x2450) == 1) func_002CEEA0(p, 0);
            else func_002CEEA0(p, 2);
        } else if (func_0024E800(p + 0x2450) == 1) {
            func_002CECC0(p, 3, 1);
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        break;
    }
}

void func_002CCF70(char *p) {
    char *func_00207480(int, int, float *, int);
    unsigned char func_002CFA00(char *, float);
    unsigned char func_0024E800(char *);
    float tmp[4] __attribute__((aligned(16)));
    float *q;
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = D_005BC210;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        (*(unsigned char *)(p + 0x5AD))++;
    case 1:
        if (func_002CFA00(p, 0.0f) == 1) {
            q = (float *)(p + 0x1890);
            func_00207480(3, 0x14F, q, 0x10);
            if (func_0024E800(p + 0x2450) == 1) func_002CEEA0(p, 0);
            else func_002CEEA0(p, 2);
        } else if (func_0024E800(p + 0x2450) == 1) {
            func_002CECC0(p, 3, 1);
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        break;
    }
}

extern float D_005BC214;

extern float D_005BC218;

void func_002CD130(char *p) {
    char *func_00207480(int, int, float *, int);
    unsigned char func_002CFA00(char *, float);
    unsigned char func_0024E800(char *);
    void func_0024DB10(char *, int, int, int, int, int, int);
    void func_002CEB20(char *);
    float tmp[4] __attribute__((aligned(16)));
    float *q;
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = D_005BC214;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = D_005BC218;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        (*(unsigned char *)(p + 0x5AD))++;
    case 1:
        if (func_0024E800(p + 0x2450) == 1) {
            (*(unsigned char *)(p + 0x5AD))++;
        } else {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
            break;
        }
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        if (func_002CFA00(p, 0.0f) == 1) {
            q = (float *)(p + 0x1890);
            func_00207480(3, 0x14F, q, 0x10);
            *(unsigned char *)(p + 0x1E1) = 0;
            func_0024DB10(p + 0x2450, 1, 0xE, 0x6D, 0, 0, 0);
            func_0024DB10(p + 0x2520, 1, 0xE, 0x6D, 0, 0, 0);
            func_0024DB10(p + 0x25F0, 1, 0xE, 0x6D, 0, 0, 0);
            func_0024DB10(p + 0x26C0, 1, 0xE, 0x6D, 0, 0, 0);
            func_0024DB10(p + 0x2790, 1, 0xE, 0x6D, 0, 0, 0);
            (*(unsigned char *)(p + 0x5AD))++;
        }
        break;
    case 3:
        if (func_0024E800(p + 0x2450) == 1) func_002CEB20(p);
        break;
    }
}

extern float D_00562508[];

void func_002CA5F0(char *, int, int, int, int);

void func_002CB910(char *);

void func_002CA8D0(char *);

#define RETIME() \
    func_002CA5F0(p, -1, 0, 1, 10); \
    *(float *)(p + 0x2D10) = 60.0f + 120.0f * (2.3283064e-10f * mt_rand());

void func_002C7710(char *p) {
    void func_002CA740(char *, unsigned char, int, int, int, int);
    int i;
    unsigned char c;
    switch (*(unsigned char *)(p + 0x5C1)) {
    case 0:
        *(unsigned char *)(p + 0x2B3C) = 0;
        *(unsigned char *)(p + 0x2BCC) = 0;
        *(unsigned char *)(p + 0x2C5C) = 0;
        func_002CA740(p, 0, -1, 0, 1, 0x10);
        func_002CA740(p, 1, -1, 0, 1, 0x10);
        if (*(float *)(p + 0x2D78) < D_00562508[*(unsigned char *)(p + 0x5C2)]) {
            RETIME()
        } else if ((mt_rand() & 3) >= 2) {
            RETIME()
        } else {
            RETIME()
        }
        (*(unsigned char *)(p + 0x5C1))++;
    case 1:
        for (i = 2; i <= 4; i++) {
            c = *(unsigned char *)(p + i + 0x2CE4);
            if ((c == 2 || c == 7) && *(unsigned char *)(p + i + 0x2CE9) == 1) {
                func_002CA740(p, i, -1, 0, 1, 0x10);
            }
        }
        if (*(float *)(p + 0x2D78) < D_00562508[*(unsigned char *)(p + 0x5C2)]) {
            *(unsigned char *)(p + 0x5C1) = 0;
            *(unsigned char *)(p + 0x2D7C) = 4;
            *(int *)(p + 0x2B20) = 0;
            func_002CB910(p);
            if ((*(short *)(p + 0x2D2A) > 0x2000 || *(short *)(p + 0x2D2A) < -0x2000) && *(unsigned char *)(p + 0x2F2E) != 2) {
                func_002CA8D0(p);
            }
        } else {
            c = *(unsigned char *)(p + 0x2CE4);
            if (c >= 0x27 && c < 0x2A && c == 0x29 && *(unsigned char *)(p + 0x2CE9) == 1) {
                (*(int *)(p + 0x2D0C))++;
                if (*(unsigned int *)(p + 0x2D0C) > (mt_rand() & 6)) {
                    RETIME()
                } else {
                    RETIME()
                }
            }
        }
        break;
    }
}

extern float D_005624D0[];

extern float D_005624D4[];

void func_002CB6B0(unsigned char *p) {
    float range = D_005624D4[p[0x5C2] * 2] - D_005624D0[p[0x5C2] * 2];
    *(float *)(p + 0x2F30) = D_005624D0[p[0x5C2] * 2] + range * (2.3283064e-10f * mt_rand());
}

void func_002CD970(char *p) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(char *)(p + 0x1E1) = 1;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 3;
    func_0024DA80(p + 0x2450, 1, 0x1D);
    func_0024DA80(p + 0x2520, 1, 0x1D);
    func_0024DA80(p + 0x25F0, 1, 0x1D);
    func_0024DA80(p + 0x26C0, 1, 0x1D);
    func_0024DA80(p + 0x2790, 1, 0x1D);
    func_002CB900(p, 0x2C);
    *(char *)(p + 0x2CE4) = 0x2C;
    *(char *)(p + 0x2CE5) = 0x2C;
    *(char *)(p + 0x2CE6) = 0x2C;
    *(char *)(p + 0x2CE7) = 0x2C;
    *(char *)(p + 0x2CE8) = 0x2C;
    func_00128488(p + 0x5AD, 0, 4);
}

void func_002CE1F0(char *p) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(char *)(p + 0x1E1) = 0;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 4;
    func_0024DA80(p + 0x2450, 1, 7);
    func_0024DA80(p + 0x2520, 1, 7);
    func_0024DA80(p + 0x25F0, 1, 7);
    func_0024DA80(p + 0x26C0, 1, 7);
    func_0024DA80(p + 0x2790, 1, 7);
    func_002CB900(p, 0xF);
    *(char *)(p + 0x2CE4) = 0xF;
    *(char *)(p + 0x2CE5) = 0xF;
    *(char *)(p + 0x2CE6) = 0xF;
    *(char *)(p + 0x2CE7) = 0xF;
    *(char *)(p + 0x2CE8) = 0xF;
    func_00128488(p + 0x5AD, 0, 4);
}

float func_0011DA38(float);

float func_0011D798(float);

float func_0034B5E0(float *, char *);

int func_002CBF50(char *p, short a) {
    float v[4];
    float ang = 6.283185f * ((float)(a + *(short *)(p + 0x90)) / 65536.0f);
    v[0] = *(float *)(p + 0x50) + 180.0f * func_0011DA38(ang);
    v[1] = 130.0f + *(float *)(p + 0x54);
    v[2] = *(float *)(p + 0x58) + 180.0f * func_0011D798(ang);
    v[3] = 1.0f;
    return !(func_0034B5E0(v, p) < 200.0f);
}

void func_002CB020(char *p, unsigned char a) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    int m;
    *(unsigned char *)(p + 0x1E1) = 1;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 0;
    *(unsigned char *)(p + 0x1E3) = 0;
    m = *(unsigned char *)(p + 0x2F21) == 0 ? 0x13 : 0xD;
    func_0024DA80(p + 0x2450, 0, m);
    func_0024DA80(p + 0x2520, 0, m);
    func_0024DA80(p + 0x25F0, 0, m);
    func_0024DA80(p + 0x26C0, 0, m);
    func_0024DA80(p + 0x2790, 0, m);
    func_002CB900(p, 0x20);
    *(unsigned char *)(p + 0x2CE4) = 0x20;
    *(unsigned char *)(p + 0x2CE5) = 0x20;
    *(unsigned char *)(p + 0x2CE6) = 0x20;
    *(unsigned char *)(p + 0x2CE7) = 0x20;
    *(unsigned char *)(p + 0x2CE8) = 0x20;
    func_00128488(p + 0x5AD, 0, 0x14);
    if (a == 1) {
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
    }
}

void func_00105230(float *, float *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_002CB4E0(char *p, short a, int x, int y) {
    void func_001AD140(char *);
    char *func_00207480(int, int, float *, int);
    void func_00105760(float *, float *, float);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *o;
    short s = *(short *)(p + 0x90) + a;
    UNIT(m);
    func_00105760(m, m, (float)s / 65536.0f * 6.283185f);
    v[1] = -65.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[2] = 0.0f;
    func_00105230(m, m, v);
    if (*(char **)(p + 0x2F70) != 0) {
        func_001AD140(*(char **)(p + 0x2F70));
    }
    *(char **)(p + 0x2F70) = func_00207480(x, y, m, 0x10);
    {
        char *o1 = *(char **)(p + 0x2F70);
        if (o1 != 0) {
            *(int *)(o1 + 0x90) = *(int *)(*(char **)(p + 0x590) + 0x104);
            *(char *)(o1 + 0x9A) = 1;
        }
    }
    if (*(char **)(p + 0x2F74) != 0) {
        func_001AD140(*(char **)(p + 0x2F74));
    }
    *(char **)(p + 0x2F74) = func_00207480(x, y, m, 0x10);
    o = *(char **)(p + 0x2F74);
    if (o != 0) {
        *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x598) + 0x104);
        *(char *)(o + 0x9A) = 1;
    }
}

extern unsigned char D_005BCA88;

extern unsigned char D_005BCA89;

void func_002CF320(char *p, unsigned char k) {
    char *func_00207480(int, int, float *, int);
    void func_00105760(float *, float *, float);
    extern int D_0054D9D0[];
    float m[16] __attribute__((aligned(16)));
    if (*(char **)((char *)(k * 4) + (int)p + 0x2F58) == 0) {
        if (k == 2) {
            UNIT(m);
            func_00105760(m, m, 3.1415925f);
            *(char **)((char *)(k * 4) + (int)p + 0x2F58) = func_00207480(3, 0x127, m, 0x10);
        } else {
            *(char **)((char *)(k * 4) + (int)p + 0x2F58) = func_00207480(3, 0x127, 0, 0x10);
        }
        {
        char *o1;
        if (*(char **)((char *)(k * 4) + (int)p + 0x2F58) != 0) {
            o1 = *(char **)((char *)(k * 4) + (int)p + 0x2F58);
            *(int *)(o1 + 0x90) = *(int *)(*(char **)((char *)(D_0054D9D0[k] * 4) + (int)p + 0x4F4) + 0x104);
            *(unsigned char *)(o1 + 0x9A) = 3;
            *(unsigned char *)(*(char **)((char *)(k * 4) + (int)p + 0x2F58) + 0x3A) = 1;
            if (*(unsigned char *)(p + 0x5C6) == 1) {
                char *o2 = *(char **)((char *)(k * 4) + (int)p + 0x2F58);
                {
                    unsigned char b = D_005BCA89;
                    *(unsigned char *)(o2 + 0x9C) = D_005BCA88;
                    *(unsigned char *)(o2 + 0x9D) = b;
                    *(unsigned char *)(o2 + 0x9E) = b;
                }
                *(unsigned char *)(o2 + 0x9B) = 2;
            }
        }
        }
    }
}

void func_002CB130(char *p) {
    void func_0024DA80(char *, int, int);
    void *func_00128488(void *, int, unsigned int);
    void func_002CB900(char *, int);
    int v;
    *(unsigned char *)(p + 0x1E1) = 0;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 0;
    *(unsigned char *)(p + 0x1E3) = 0;
    v = *(unsigned char *)(p + 0x2F21) == 0 ? 20 : 14;
    func_0024DA80(p + 0x2450, 0, v);
    func_0024DA80(p + 0x2520, 0, v);
    func_0024DA80(p + 0x25F0, 0, v);
    func_0024DA80(p + 0x26C0, 0, v);
    func_0024DA80(p + 0x2790, 0, v);
    func_002CB900(p, 0x21);
    *(unsigned char *)(p + 0x2CE4) = 0x21;
    *(unsigned char *)(p + 0x2CE5) = 0x21;
    *(unsigned char *)(p + 0x2CE6) = 0x21;
    *(unsigned char *)(p + 0x2CE7) = 0x21;
    *(unsigned char *)(p + 0x2CE8) = 0x21;
    func_00128488(p + 0x5AD, 0, 0x14);
}

void func_002CB130(char *p);

void func_002C9FB0(char *p) {
    char *func_00207480(int, int, float *, int);
    unsigned char func_002CFA00(char *, float);
    float tmp[4] __attribute__((aligned(16)));
    float *q;
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = -1.5f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        (*(unsigned char *)(p + 0x5AD))++;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x70), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x60), "r"(tmp) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + 0x60), "f"(*(float *)(p + 0x10)) : "t0", "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(tmp) : "memory");
        break;
    }
    if (func_002CFA00(p, 0.0f) == 1) {
        q = (float *)(p + 0x1890);
        func_00207480(3, 0x14F, q, 0x10);
        func_002CB130(p);
    }
}

int func_002CB2E0(char *p) {
    unsigned int v = *(unsigned char *)(p + 0x2CE4);
    if (v - 4 <= 2 || v == 0x2E || v == 0x2F) {
        return 1;
    }
    return 0;
}

char *func_00279290(char *);

void func_001A1F90(char *);

void func_002C4ED0(char *p) {
    *(unsigned char *)(p + 0x2F21) = 0;
    func_001A1F90(func_00279290(p + 0x640));
    if (*(unsigned char *)(p + 0x1840) == 1) {
        func_001A1F90(func_00279290(p + 0xC40));
    }
}

void func_001A1E10(char *);

void func_002C4F30(char *p) {
    *(unsigned char *)(p + 0x2F21) = 1;
    func_001A1E10(func_00279290(p + 0x640));
    if (*(unsigned char *)(p + 0x1840) == 1) {
        func_001A1E10(func_00279290(p + 0xC40));
    }
}

void func_002CAF60(char *);

void func_002CA270(char *p, int k) {
    char *func_00207480(int, int, char *, int);
    int func_002CFA00(char *, float);
    if (k == 0) {
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x64) <= -30.0f) {
            *(float *)(p + 0x64) = -30.0f;
        }
        if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
            func_00207480(3, 0x14F, p + 0x1890, 16);
            func_002CAF60(p);
        }
    }
}

void func_002CE4C0(char *);

void func_002CC570(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_0024E800(char *);
    int func_002CFA00(char *, float);
    *(float *)(p + 0x2D70) = 1.0f;
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    if ((unsigned char)func_0024E800(p + 0x2450) == 1 && (unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        func_002CE4C0(p);
    }
}

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, int, int, int, int);

void func_002C6C40(char *p) {
    void func_001AD140(char *);
    char *func_00207480(int, int, char *, int);
    char *e = func_00207480(3, 0xE9, 0, 16);
    if (e != 0) {
        e[0x9C] = 0x40;
        e[0x9D] = 0x20;
        *(unsigned char *)(e + 0x9E) = 0x80;
        e[0x9B] = 2;
        *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x4FC) + 0x104);
        e[0x9A] = 1;
        e[0x3A] = 1;
    }
    if (*(char **)(p + 0x2F78) != 0) {
        func_001AD140(*(char **)(p + 0x2F78));
    }
    func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
}

void func_002CCCD0(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_0024E800(char *);
    int func_002CFA00(char *, float);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        if ((unsigned char)func_0024E800(p + 0x2450) == 1) {
            func_002CEEA0(p, 0);
        } else {
            func_002CEEA0(p, 2);
        }
    }
}

void func_002C4F30(char *p);

extern float D_005BCA80;

void func_002CF260(char *);

void func_002CF630(char *, int);

void func_002C9360(char *p, int k) {
    int v;
    if (k == 0) {
        if (*(unsigned char *)(p + 0x5C3) == 1 &&
            (*(unsigned char *)(p + 0x2F2E) == 2 || *(unsigned char *)(p + 0x2F2E) == 1) &&
            !(*(float *)(p + 0x2F34) <= D_005BCA80)) {
            *(unsigned char *)(p + 0x2F2E) = 0;
            v = *(unsigned char *)(p + 0x5C2);
            v = v < 2 ? v + 1 : v;
            *(unsigned char *)(p + 0x5C2) = v;
        }
        if (*(int *)(p + 0x5FC) == 1) {
            *(int *)(p + 0x5FC) = 0;
            *(unsigned char *)(p + 0x5C3) = 1;
            func_002CF260(p);
            func_002C4F30(p);
            func_002CF630(p, 0);
            *(float *)(p + 0x2D70) = 1.0f;
        }
    }
}

void func_002C6B60(char *p) {
    char *func_00207480(int, int, char *, int);
    char *e;
    char *q;
    e = func_00207480(3, 0xDC, 0, 16);
    if (e != 0) {
        e[0x9C] = 0x40;
        e[0x9D] = 0x20;
        *(unsigned char *)(e + 0x9E) = 0x80;
        e[0x9B] = 2;
        *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x4FC) + 0x104);
        e[0x9A] = 1;
        e[0x3A] = 1;
    }
    *(char **)(p + 0x2F78) = func_00207480(3, 0x2CF, 0, 16);
    q = *(char **)(p + 0x2F78);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x4FC) + 0x104);
        q[0x9A] = 1;
        *(*(char **)(p + 0x2F78) + 0x3A) = 1;
    }
    func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
}

void func_0034B9A0(char *, short, float, float, float);

void func_002CDFB0(char *);

void func_002CC3B0(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_002CFA00(char *, float);
    func_0034B9A0(p + 0x50, *(short *)(p + 0x90) + 0x8000, *(float *)(p + 0x68), *(float *)(p + 0x64), *(float *)(p + 0x10));
    *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if (*(float *)(p + 0x68) < 0.5f) {
        *(float *)(p + 0x68) = 0.5f;
    }
    if (*(float *)(p + 0x64) < 0.0f && (unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        func_002CDFB0(p);
    }
}

void func_002CAE70(char *p) {
    void func_0024DA80(char *, int, int);
    void func_00128488(char *, int, int);
    void func_002CB900(char *, int);
    func_0024DA80(p + 0x2450, 0, 7);
    func_0024DA80(p + 0x2520, 0, 7);
    func_0024DA80(p + 0x25F0, 0, 7);
    func_0024DA80(p + 0x26C0, 0, 7);
    func_0024DA80(p + 0x2790, 0, 7);
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = -1.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 1.0f;
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    func_002CB900(p, 0x28);
    *(unsigned char *)(p + 0x2CE4) = 0x28;
    *(unsigned char *)(p + 0x2CE5) = 0x28;
    *(unsigned char *)(p + 0x2CE6) = 0x28;
    *(unsigned char *)(p + 0x2CE7) = 0x28;
    *(unsigned char *)(p + 0x2CE8) = 0x28;
    func_00128488(p + 0x5AD, 0, 20);
}

void func_002CD620(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_002CFA00(char *, float);
    void func_002CD800(char *);
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        *(unsigned char *)(p + 0x5AD) = *(unsigned char *)(p + 0x5AD) + 1;
    case 1:
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x68) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
            func_00207480(3, 0x14F, p + 0x1890, 16);
            *(unsigned char *)(p + 0x2D7C) = 7;
            *(unsigned char *)(p + 0x5C1) = 0;
            func_002CD800(p);
        }
    }
}

void func_002CDA70(char *p, int f) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    int func_002CDA30(char *, int);
    *(unsigned char *)(p + 0x1E1) = 0;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 3;
    *(unsigned char *)(p + 0x1E3) = 2;
    func_002CB900(p, 9);
    func_0024DA80(p + 0x2450, 1, 0);
    func_0024DA80(p + 0x2520, 1, 0);
    *(unsigned char *)(p + 0x2CE5) = 9;
    *(unsigned char *)(p + 0x2CE4) = 9;
    if ((unsigned char)func_002CDA30(p, 2) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x25F0, 1, 0);
        *(unsigned char *)(p + 0x2CE6) = 9;
    }
    if ((unsigned char)func_002CDA30(p, 3) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x26C0, 1, 0);
        *(unsigned char *)(p + 0x2CE7) = 9;
    }
    if ((unsigned char)func_002CDA30(p, 4) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x2790, 1, 0);
        *(unsigned char *)(p + 0x2CE8) = 9;
    }
}

void func_002CDBB0(char *p, int f) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    int func_002CDA30(char *, int);
    *(unsigned char *)(p + 0x1E1) = 0;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 3;
    *(unsigned char *)(p + 0x1E3) = 2;
    func_002CB900(p, 49);
    func_0024DA80(p + 0x2450, 1, 31);
    func_0024DA80(p + 0x2520, 1, 31);
    *(unsigned char *)(p + 0x2CE5) = 49;
    *(unsigned char *)(p + 0x2CE4) = 49;
    if ((unsigned char)func_002CDA30(p, 2) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x25F0, 1, 31);
        *(unsigned char *)(p + 0x2CE6) = 49;
    }
    if ((unsigned char)func_002CDA30(p, 3) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x26C0, 1, 31);
        *(unsigned char *)(p + 0x2CE7) = 49;
    }
    if ((unsigned char)func_002CDA30(p, 4) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x2790, 1, 31);
        *(unsigned char *)(p + 0x2CE8) = 49;
    }
}

void func_002CDCF0(char *p, int f) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    int func_002CDA30(char *, int);
    *(unsigned char *)(p + 0x1E1) = 0;
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 3;
    *(unsigned char *)(p + 0x1E3) = 2;
    func_002CB900(p, 8);
    func_0024DA80(p + 0x2450, 1, 1);
    func_0024DA80(p + 0x2520, 1, 1);
    *(unsigned char *)(p + 0x2CE5) = 8;
    *(unsigned char *)(p + 0x2CE4) = 8;
    if ((unsigned char)func_002CDA30(p, 2) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x25F0, 1, 1);
        *(unsigned char *)(p + 0x2CE6) = 8;
    }
    if ((unsigned char)func_002CDA30(p, 3) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x26C0, 1, 1);
        *(unsigned char *)(p + 0x2CE7) = 8;
    }
    if ((unsigned char)func_002CDA30(p, 4) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x2790, 1, 1);
        *(unsigned char *)(p + 0x2CE8) = 8;
    }
}

extern char D_01CAFF0C[];

int func_001F9A70(int, char *, float);

static inline char *g548(void) {
    return *(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548;
}

void func_003DF450(char *);

void func_002C67D0(char *p) {
    void func_001AD140(char *);
    float v[4] __attribute__((aligned(16)));
    int i;
    if (*(unsigned char *)(p + 0x2D7C) != 7) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2A30), "r"(v) : "memory");
        v[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
        for (i = 0; i < 42; i++) {
            if (*(char **)((char *)(i * 4) + (int)p + 0x4F4) != 0 && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x4F4) + 0x104) != 0) {
                __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x4F4) + 0x104) + 0x30), "r"(v) : "memory");
                *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x4F4) + 0x104) + 0x3C) = 1.0f;
            }
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(v) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2A70), "r"(p + 0xF0) : "memory");
    } else {
        func_003DF450(p + 0x2F80);
    }
    if ((unsigned char)func_001F9A70(*(int *)(g548() + 8), p + 0x50, 1000.0f) == 0) {
        *(unsigned char *)(p + 4) = 3;
        func_001AD140(p);
    }
}

void func_002CE850(char *p, int f) {
    void func_0024DA80(char *, int, int);
    void func_00128488(char *, int, int);
    void func_002CB900(char *, int);
    int func_002CDA30(char *, int);
    *(unsigned char *)(p + 0x1E4) = 0;
    *(unsigned char *)(p + 0x1E5) = 0;
    *(unsigned char *)(p + 0x1E2) = 3;
    *(unsigned char *)(p + 0x1E3) = 3;
    func_0024DA80(p + 0x2450, 1, 0x17);
    func_0024DA80(p + 0x2520, 1, 0x17);
    *(unsigned char *)(p + 0x2CE5) = 0x24;
    *(unsigned char *)(p + 0x2CE4) = 0x24;
    if ((unsigned char)func_002CDA30(p, 2) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x25F0, 1, 0x17);
        *(unsigned char *)(p + 0x2CE6) = 0x24;
    }
    if ((unsigned char)func_002CDA30(p, 3) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x26C0, 1, 0x17);
        *(unsigned char *)(p + 0x2CE7) = 0x24;
    }
    if ((unsigned char)func_002CDA30(p, 4) == 0 || (unsigned char)f == 0) {
        func_0024DA80(p + 0x2790, 1, 0x17);
        *(unsigned char *)(p + 0x2CE8) = 0x24;
    }
    func_002CB900(p, 0x24);
    func_00128488(p + 0x5AD, 0, 4);
}

void func_002E7840(char *);

void func_0028C110(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_002790E0();

void func_0022C820(char *);

void func_0024D930();

void func_0024FE00(char *);

void func_002C4540();

void func_002E8A10(char *);

void func_00313E20(char *);

void func_0031E4A0(char *);

void func_00320540(char *);

void func_003C9D90(char *);

char *func_002C42B0(char *p) {
    int i;
    char *q;
    func_0024FE00(p);
    func_00320540(p + 0x130);
    func_0031E4A0(p + 0x1D0);
    *(char **)(p + 0x0) = D_005AA350;
    *(char **)(p + 0x40) = D_005AA374;
    *(char **)(p + 0xA0) = D_005AA3F4;
    *(char **)(p + 0xD0) = D_005AA488;
    *(char **)(p + 0x130) = D_005AA554;
    *(char **)(p + 0x1D0) = D_005AA60C;
    func_00100450(p + 0x214, func_001AAD30, func_0013D240, 0x10, 0x2E);
    func_00100450(p + 0x640, func_002790E0, func_002791E0, 0x600, 3);
    p[0x1850] = 0;
    func_00100450(p + 0x2450, func_0024D930, func_0024D9A0, 0xD0, 5);
    func_0028C110(p + 0x2860);
    p[0x2A80] = 0;
    func_00100450(p + 0x2B30, func_002C4540, func_00202F80, 0x90, 3);
    p[0x2D80] = 0;
    p[0x2D81] = 0;
    *(short *)(p + 0x2D82) = 0;
    *(int *)(p + 0x2D88) = 0;
    *(int *)(p + 0x2D8C) = 0;
    *(int *)(p + 0x2D90) = 0;
    *(int *)(p + 0x2DA0) = 0;
    *(int *)(p + 0x2DA4) = 0;
    *(int *)(p + 0x2DA8) = 0;
    *(float *)(p + 0x2DAC) = 1.0f;
    *(float *)(p + 0x2DB0) = 100000.0f;
    p[0x2DB4] = 0;
    p[0x2DB5] = 0;
    *(short *)(p + 0x2DB6) = 0;
    for (i = 0; i < 10; i++) *(short *)(p + i * 2 + 0x2DB8) = -1;
    func_002E7840(p + 0x2DE0);
    func_002E8A10(p + 0x2E24);
    func_00313E20(p + 0x2E3C);
    q = p + 0x2E60;
    *(char **)(p + 0x2E70) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    q = p + 0x2EC0;
    *(char **)(p + 0x2ED0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005B0890;
    func_003C9D90(q);
    *(char **)(p + 0x2F80) = D_005AA6B8;
    *(int *)(p + 0x3A90) = -1;
    p[0x3AB1] = 0;
    *(int *)(p + 0x3AB4) = 0;
    *(int *)(p + 0x2F58) = 0;
    *(int *)(p + 0x2F5C) = 0;
    *(int *)(p + 0x2F60) = 0;
    *(int *)(p + 0x2F64) = 0;
    *(int *)(p + 0x2F68) = 0;
    *(int *)(p + 0x2F6C) = 0;
    *(int *)(p + 0x2F74) = 0;
    *(int *)(p + 0x2F70) = 0;
    *(int *)(p + 0x2F78) = 0;
    p[0x5C6] = 0;
    return p;
}

extern float D_005BCA84;

void func_002CA460(char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_002C7530(char *p) {
    int func_002CFA00(char *, float);
    char *d;
    char *s;
    switch (*(unsigned char *)(p + 0x5C1)) {
    case 0:
        *(unsigned char *)(p + 0x5C1) = *(unsigned char *)(p + 0x5C1) + 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = -1.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 1.0f;
        *(unsigned char *)(p + 0x5C5) = 0;
        break;
    case 1:
        *(unsigned char *)(p + 0x5C5) = 0;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x64) <= -30.0f) {
            *(float *)(p + 0x64) = -30.0f;
        }
        QCOPY(p + 0x2B00, p + 0x50);
        QCOPY(p + 0x2B10, p + 0x80);
        if ((unsigned char)func_002CFA00(p, 0.0f) == 1) {
            (*(unsigned char *)(p + 0x5C1))++;
            QCOPY(p + 0x2B00, p + 0x50);
            QCOPY(p + 0x2B10, p + 0x80);
        }
        break;
    case 2:
        *(unsigned char *)(p + 0x5C5) = 0;
        switch (*(unsigned char *)(p + 0x1841)) {
        case 0:
            if (*(float *)(p + 0x2D78) < D_005BCA84) {
                *(unsigned char *)(p + 0x5C1) = *(unsigned char *)(p + 0x5C1) + 1;
            }
            break;
        case 1:
            *(float *)(p + 0x1844) = *(float *)(p + 0x1844) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x1844) < 0.0f) {
                *(unsigned char *)(p + 0x5C1) = *(unsigned char *)(p + 0x5C1) + 1;
            }
            break;
        }
        break;
    case 3:
        *(unsigned char *)(p + 0x5C1) = *(unsigned char *)(p + 0x5C1) + 1;
        *(unsigned char *)(p + 0x5C5) = 0;
        func_002CA460(p);
        break;
    case 4:
        break;
    }
}

int func_0024E780(char *, int, int);

void func_002CF590(char *p) {
    void func_001AD140(char *);
    int i;
    for (i = 0; i < 3; i++) {
        if (*(char **)(p + i * 4 + 0x2F58) != 0 && (unsigned char)func_0024E780((p + (i + 2) * 0xD0) + 0x2450, 0, 2) != 1) {
            func_001AD140(*(char **)(p + i * 4 + 0x2F58));
            *(char **)(p + i * 4 + 0x2F58) = 0;
        }
    }
}

void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern char D_00561F60[];

void func_0024D9F0(char *, char *, int, int, char *, char *, char *, char *, char *);

static inline char *ent2C7(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch2C7(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent2C7(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

void func_002C70D0(char *p) {
    char *h;
    char *x;
    char *y;
    h = *(char **)(p + 0x610);
    x = gch2C7(h, 0xA);
    y = gch2C7(h, 0xB);
    func_0028C200(p + 0x2860, x, y, 2, D_00561F60, p, 0);
    func_0024D9F0(p + 0x2450, gch2C7(*(char **)(p + 0x610), 3), 0, 1, p + 0x614, p + 0x644, p + 0x4F4, p + 0x2CE0, 0);
    func_0024D9F0(p + 0x2520, gch2C7(*(char **)(p + 0x610), 3), 1, 1, p + 0x614, p + 0x644, p + 0x4F4, p + 0x2CE0, p + 0x2860);
    func_0024D9F0(p + 0x25F0, gch2C7(*(char **)(p + 0x610), 3), 2, 1, p + 0x614, p + 0x644, p + 0x4F4, p + 0x2CE0, 0);
    func_0024D9F0(p + 0x26C0, gch2C7(*(char **)(p + 0x610), 3), 3, 1, p + 0x614, p + 0x644, p + 0x4F4, p + 0x2CE0, 0);
    func_0024D9F0(p + 0x2790, gch2C7(*(char **)(p + 0x610), 3), 4, 1, p + 0x614, p + 0x644, p + 0x4F4, p + 0x2CE0, 0);
}

void func_002CAB30(char *p0) {
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 0;
    *(char *)(p0 + 485) = 0;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    func_0024DA80((p0 + 9296), 0, 17);
    func_0024DA80((p0 + 9504), 0, 17);
    func_002CB900(p0, 48);
    *(char *)(p0 + 11493) = 48;
    *(char *)(p0 + 11492) = 48;
}

void func_002CDE30(char *p) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(char *)(p + 0x1E1) = 1;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 3;
    func_0024DA80(p + 0x2450, 1, 0x2);
    func_0024DA80(p + 0x2520, 1, 0x2);
    func_0024DA80(p + 0x25F0, 1, 0x2);
    func_0024DA80(p + 0x26C0, 1, 0x2);
    func_0024DA80(p + 0x2790, 1, 0x2);
    func_002CB900(p, 0xA);
    *(char *)(p + 0x2CE4) = 0xA;
    *(char *)(p + 0x2CE5) = 0xA;
    *(char *)(p + 0x2CE6) = 0xA;
    *(char *)(p + 0x2CE7) = 0xA;
    *(char *)(p + 0x2CE8) = 0xA;
    func_00128488(p + 0x5AD, 0, 4);
}

void func_002CE070(char *p) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(char *)(p + 0x1E1) = 1;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 3;
    func_0024DA80(p + 0x2450, 1, 0x5);
    func_0024DA80(p + 0x2520, 1, 0x5);
    func_0024DA80(p + 0x25F0, 1, 0x5);
    func_0024DA80(p + 0x26C0, 1, 0x5);
    func_0024DA80(p + 0x2790, 1, 0x5);
    func_002CB900(p, 0xD);
    *(char *)(p + 0x2CE4) = 0xD;
    *(char *)(p + 0x2CE5) = 0xD;
    *(char *)(p + 0x2CE6) = 0xD;
    *(char *)(p + 0x2CE7) = 0xD;
    *(char *)(p + 0x2CE8) = 0xD;
    func_00128488(p + 0x5AD, 0, 4);
}

void func_002CE130(char *p) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(char *)(p + 0x1E1) = 1;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 3;
    func_0024DA80(p + 0x2450, 1, 0x6);
    func_0024DA80(p + 0x2520, 1, 0x6);
    func_0024DA80(p + 0x25F0, 1, 0x6);
    func_0024DA80(p + 0x26C0, 1, 0x6);
    func_0024DA80(p + 0x2790, 1, 0x6);
    func_002CB900(p, 0xE);
    *(char *)(p + 0x2CE4) = 0xE;
    *(char *)(p + 0x2CE5) = 0xE;
    *(char *)(p + 0x2CE6) = 0xE;
    *(char *)(p + 0x2CE7) = 0xE;
    *(char *)(p + 0x2CE8) = 0xE;
    func_00128488(p + 0x5AD, 0, 4);
}

void func_002CF020(char *p) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(char *)(p + 0x1E1) = 1;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 3;
    func_0024DA80(p + 0x2450, 1, 0xC);
    func_0024DA80(p + 0x2520, 1, 0xC);
    func_0024DA80(p + 0x25F0, 1, 0xC);
    func_0024DA80(p + 0x26C0, 1, 0xC);
    func_0024DA80(p + 0x2790, 1, 0xC);
    func_002CB900(p, 0x14);
    *(char *)(p + 0x2CE4) = 0x14;
    *(char *)(p + 0x2CE5) = 0x14;
    *(char *)(p + 0x2CE6) = 0x14;
    *(char *)(p + 0x2CE7) = 0x14;
    *(char *)(p + 0x2CE8) = 0x14;
    func_00128488(p + 0x5AD, 0, 4);
}

void func_002CF0E0(char *p) {
    void func_0024DA80(char *, int, int);
    void func_002CB900(char *, int);
    void func_00128488(char *, int, int);
    *(char *)(p + 0x1E1) = 1;
    *(char *)(p + 0x1E4) = 0;
    *(char *)(p + 0x1E5) = 0;
    *(char *)(p + 0x1E2) = 3;
    *(char *)(p + 0x1E3) = 3;
    func_0024DA80(p + 0x2450, 1, 0xD);
    func_0024DA80(p + 0x2520, 1, 0xD);
    func_0024DA80(p + 0x25F0, 1, 0xD);
    func_0024DA80(p + 0x26C0, 1, 0xD);
    func_0024DA80(p + 0x2790, 1, 0xD);
    func_002CB900(p, 0x15);
    *(char *)(p + 0x2CE4) = 0x15;
    *(char *)(p + 0x2CE5) = 0x15;
    *(char *)(p + 0x2CE6) = 0x15;
    *(char *)(p + 0x2CE7) = 0x15;
    *(char *)(p + 0x2CE8) = 0x15;
    func_00128488(p + 0x5AD, 0, 4);
}

void func_002CC6A0(char *p) {
    char *func_00207480(int, int, char *, int);
    int func_0024E800(char *);
    int func_002CFA00(char *, float);
    void func_002CE790(char *);
    *(float *)(p + 0x2D70) = 1.0f;
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    if ((unsigned char)func_0024E800(p + 0x2450) == 1 && (unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, p + 0x1890, 16);
        func_002CE790(p);
    }
}

void func_002CA520(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 0;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 0;
    *(char *)(p + 483) = 0;
    func_0024DA80(p + 9296, 0, 1);
    func_0024DA80(p + 9504, 0, 1);
    func_0024DA80(p + 9712, 0, 1);
    func_0024DA80(p + 9920, 0, 1);
    func_0024DA80(p + 10128, 0, 1);
    func_002CB900(p, 1);
    *(char *)(p + 11492) = 1;
    *(char *)(p + 11497) = 0;
    *(char *)(p + 11493) = 1;
    *(char *)(p + 11498) = 0;
    *(char *)(p + 11494) = 1;
    *(char *)(p + 11499) = 0;
    *(char *)(p + 11495) = 1;
    *(char *)(p + 11500) = 0;
    *(char *)(p + 11496) = 1;
    *(char *)(p + 11501) = 0;
    func_00128488(p + 1453, 0, 20);
}

void func_002CD8A0(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 0;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 2;
    func_0024DA80(p + 9296, 1, 28);
    func_0024DA80(p + 9504, 1, 28);
    func_0024DA80(p + 9712, 1, 28);
    func_0024DA80(p + 9920, 1, 28);
    func_0024DA80(p + 10128, 1, 28);
    func_002CB900(p, 43);
    *(char *)(p + 11492) = 43;
    *(char *)(p + 11493) = 43;
    *(char *)(p + 11494) = 43;
    *(char *)(p + 11495) = 43;
    *(char *)(p + 11496) = 43;
    *(char *)(p + 11068) = 0;
    *(char *)(p + 11212) = 0;
    *(char *)(p + 11356) = 0;
    func_00128488(p + 1453, 0, 4);
}

void func_002CDEF0(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 1;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 3;
    func_0024DA80(p + 9296, 1, 3);
    func_0024DA80(p + 9504, 1, 3);
    func_0024DA80(p + 9712, 1, 3);
    func_0024DA80(p + 9920, 1, 3);
    func_0024DA80(p + 10128, 1, 3);
    func_002CB900(p, 11);
    *(char *)(p + 11492) = 11;
    *(char *)(p + 11493) = 11;
    *(char *)(p + 11494) = 11;
    *(char *)(p + 11495) = 11;
    *(char *)(p + 11496) = 11;
    func_00128488(p + 1453, 0, 4);
}

void func_00330BD0();

void func_002CE2B0(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(int *)(p + 11632) = 1065353216;
    *(char *)(p + 481) = 1;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 8;
    func_0024DA80(p + 9296, 1, 15);
    func_0024DA80(p + 9504, 1, 15);
    func_0024DA80(p + 9712, 1, 15);
    func_0024DA80(p + 9920, 1, 15);
    func_0024DA80(p + 10128, 1, 15);
    func_002CB900(p, 23);
    *(char *)(p + 11492) = 23;
    *(char *)(p + 11493) = 23;
    *(char *)(p + 11494) = 23;
    *(char *)(p + 11495) = 23;
    *(char *)(p + 11496) = 23;
    func_00128488(p + 1453, 0, 4);
    func_00330BD0(D_01DFABA0, 39, p + 80, 13, 0);
}

void func_002CE3A0(p) char *p; {
    void func_00128488();
    void func_0024DB10();
    void func_002CB900();
    *(char *)(p + 481) = 1;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 3;
    func_0024DB10(p + 9296, 1, 16, 32767, 0, 1, 5);
    func_0024DB10(p + 9504, 1, 16, 32767, 0, 1, 5);
    func_0024DB10(p + 9712, 1, 16, 32767, 0, 1, 5);
    func_0024DB10(p + 9920, 1, 16, 32767, 0, 1, 5);
    func_0024DB10(p + 10128, 1, 16, 32767, 0, 1, 5);
    func_002CB900(p, 24);
    *(char *)(p + 11492) = 24;
    *(char *)(p + 11493) = 24;
    *(char *)(p + 11494) = 24;
    *(char *)(p + 11495) = 24;
    *(char *)(p + 11496) = 24;
    func_00128488(p + 1453, 0, 4);
    *(int *)(p + 100) = 0;
    *(int *)(p + 116) = 3212836864;
}

void func_002CE580(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(int *)(p + 11632) = 1065353216;
    *(char *)(p + 481) = 1;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 8;
    func_0024DA80(p + 9296, 1, 18);
    func_0024DA80(p + 9504, 1, 18);
    func_0024DA80(p + 9712, 1, 18);
    func_0024DA80(p + 9920, 1, 18);
    func_0024DA80(p + 10128, 1, 18);
    func_002CB900(p, 26);
    *(char *)(p + 11492) = 26;
    *(char *)(p + 11493) = 26;
    *(char *)(p + 11494) = 26;
    *(char *)(p + 11495) = 26;
    *(char *)(p + 11496) = 26;
    func_00128488(p + 1453, 0, 4);
    func_00330BD0(D_01DFABA0, 39, p + 80, 13, 0);
}

void func_002CE670(p) char *p; {
    void func_00128488();
    void func_0024DB10();
    void func_002CB900();
    *(char *)(p + 481) = 1;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 3;
    func_0024DB10(p + 9296, 1, 19, -1, 0, 1, 5);
    func_0024DB10(p + 9504, 1, 19, -1, 0, 1, 5);
    func_0024DB10(p + 9712, 1, 19, -1, 0, 1, 5);
    func_0024DB10(p + 9920, 1, 19, -1, 0, 1, 5);
    func_0024DB10(p + 10128, 1, 19, -1, 0, 1, 5);
    func_002CB900(p, 27);
    *(char *)(p + 11492) = 27;
    *(char *)(p + 11493) = 27;
    *(char *)(p + 11494) = 27;
    *(char *)(p + 11495) = 27;
    *(char *)(p + 11496) = 27;
    func_00128488(p + 1453, 0, 4);
    *(int *)(p + 100) = 0;
    *(int *)(p + 116) = 3212836864;
}

void func_002CE9A0(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 0;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 2;
    func_0024DA80(p + 9296, 1, 26);
    func_0024DA80(p + 9504, 1, 26);
    func_0024DA80(p + 9712, 1, 26);
    func_0024DA80(p + 9920, 1, 26);
    func_0024DA80(p + 10128, 1, 26);
    func_002CB900(p, 38);
    *(char *)(p + 11492) = 38;
    *(char *)(p + 11493) = 38;
    *(char *)(p + 11494) = 38;
    *(char *)(p + 11495) = 38;
    *(char *)(p + 11496) = 38;
    func_00128488(p + 1453, 0, 4);
}

void func_002CEA60(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 7;
    func_0024DA80(p + 9296, 1, 24);
    func_0024DA80(p + 9504, 1, 24);
    func_0024DA80(p + 9712, 1, 24);
    func_0024DA80(p + 9920, 1, 24);
    func_0024DA80(p + 10128, 1, 24);
    func_002CB900(p, 37);
    *(char *)(p + 11492) = 37;
    *(char *)(p + 11493) = 37;
    *(char *)(p + 11494) = 37;
    *(char *)(p + 11495) = 37;
    *(char *)(p + 11496) = 37;
    func_00128488(p + 1453, 0, 4);
}

void func_002CEC00(p) char *p; {
    void func_00128488();
    void func_0024DA80();
    void func_002CB900();
    *(char *)(p + 481) = 1;
    *(char *)(p + 484) = 0;
    *(char *)(p + 485) = 0;
    *(char *)(p + 482) = 3;
    *(char *)(p + 483) = 6;
    func_0024DA80(p + 9296, 1, 9);
    func_0024DA80(p + 9504, 1, 9);
    func_0024DA80(p + 9712, 1, 9);
    func_0024DA80(p + 9920, 1, 9);
    func_0024DA80(p + 10128, 1, 9);
    func_002CB900(p, 17);
    *(char *)(p + 11492) = 17;
    *(char *)(p + 11493) = 17;
    *(char *)(p + 11494) = 17;
    *(char *)(p + 11495) = 17;
    *(char *)(p + 11496) = 17;
    func_00128488(p + 1453, 0, 4);
}

int func_002C44F0(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005AA6B8;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

int func_002F2D30();

int func_002C4F90(p0) int p0; {
    int func_001AD140();
    int v15;
    int v7;
    char *v8;
    int v4;
    int v10;
    int v1;
    int v3;
    char *v14;
    char *v6;
    int v2;
    int v13;
    int v12;
    char *v11;
    int v9;
    char *v0;
    int v5;
    v0 = (char *)p0;
    v1 = *(int *)(*(char **)D_01CAFF0C + 32);
    v2 = (int)v0;
    if (v1 != 0) {
        v4 = func_002F2D30(v1, v2);
    }
    v10 = 0;
    v11 = v0;
    do {
        v12 = *(int *)(v11 + 12144);
        if (v12 != 0) {
            v4 = func_001AD140(v12);
        }
        v10 = (v10 + 1);
        v11 = (v11 + 4);
    } while ((v10 < 2));
    v13 = 0;
    v14 = v0;
    do {
        v15 = *(int *)(v14 + 12120);
        if (v15 != 0) {
            v4 = func_001AD140(v15);
        }
        v13 = (v13 + 1);
        v14 = (v14 + 4);
    } while ((v13 < 3));
    v5 = 0;
    v6 = v0;
    do {
        v3 = *(int *)(v6 + 12132);
        if (v3 != 0) {
            v4 = func_001AD140(v3);
        }
        v5 = (v5 + 1);
        v6 = (v6 + 4);
    } while ((v5 < 3));
    v7 = *(int *)(v0 + 12152);
    if (v7 != 0) {
        v4 = func_001AD140(v7);
    }
    v8 = *(char **)(v0 + 200);
    v9 = 1;
    if (v8 != 0) {
        *(char *)(v8 + 162) = v9;
    }
    return v4;
}

int func_00206730();

void func_00228350();

int func_002C5E80(p0) int p0; {
    int v0;
    int v1;
    int v6;
    int v4;
    int v5;
    int v3;
    int v2;
    int tmp0;
    v0 = p0;
    func_00228350((v0 + 200));
    v1 = 0;
    v2 = v0;
    do {
        func_00206730((v2 + 12144));
        v1 = (v1 + 1);
        v2 = (v2 + 4);
    } while ((v1 < 2));
    v3 = 0;
    v4 = v0;
    do {
        func_00206730((v4 + 12120));
        v3 = (v3 + 1);
        v4 = (v4 + 4);
    } while ((v3 < 3));
    v5 = 0;
    v6 = v0;
    do {
        func_00206730((v6 + 12132));
        v6 = (v6 + 4);
        v5 = (v5 + 1);
    } while ((v5 < 3));
    tmp0 = func_00206730((v0 + 12152));
    return tmp0;
}

extern float D_005BC220;

void func_002C9320(p0) char *p0; {
    int v0;
    float v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 5);
    switch (v0) {
    default:
        return;
    case 0:
        v1 = D_005BC220;
        v2 = (v0 + 1);
        if (*(float *)(p0 + 11640) <= v1) {
            *(char *)(p0 + 5) = v2;
        }
        /* fall through */
    case 1:
        return;
    }
}

int func_0024E7F0();

int func_002C9420(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    if (p1 == 0) {
        v1 = func_0024E7F0((v0 + 9296));
        tmp0 = (short)v1;
        v2 = 1;
        if (tmp0 > 0) {
            *(char *)(v0 + 11497) = v2;
            *(char *)(v0 + 11498) = v2;
        }
    }
    return v1;
}

extern char D_005624A0[];

int func_0024E520();

int func_002C9AE0(p0, p1) int p0; int p1; {
    int func_002CA740();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    if (p1 == 0) {
        v1 = func_0024E520((v0 + 9296));
        tmp0 = (v1 & 255);
        v2 = (int)v0;
        if (tmp0 == 4) {
            func_002CA740(v2, 0, -1, 0, 1, 16);
            v1 = func_002CA740(v0, 1, -1, 0, 1, 16);
        } else {
            *(float *)(v0 + 11632) = *(float *)((D_005624A0 + (*(unsigned char *)(v0 + 1474) << 2)) + 0);
        }
    }
    return v1;
}

int func_002C9B80(p0, p1) int p0; int p1; {
    int func_002CA740();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    if (p1 == 0) {
        v1 = func_0024E520((v0 + 9296));
        tmp0 = (v1 & 255);
        v2 = (int)v0;
        if (tmp0 == 4) {
            func_002CA740(v2, 0, -1, 0, 1, 16);
            v1 = func_002CA740(v0, 1, -1, 0, 1, 16);
        } else {
            *(float *)(v0 + 11632) = *(float *)((D_005624A0 + (*(unsigned char *)(v0 + 1474) << 2)) + 0);
        }
    }
    return v1;
}

int func_002C9C20(p0, p1) int p0; int p1; {
    int func_002CA740();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    if (p1 == 0) {
        v1 = func_0024E520((v0 + 9296));
        tmp0 = (v1 & 255);
        v2 = (int)v0;
        if (tmp0 == 4) {
            func_002CA740(v2, 0, -1, 0, 1, 16);
            v1 = func_002CA740(v0, 1, -1, 0, 1, 16);
        } else {
            *(float *)(v0 + 11632) = *(float *)((D_005624A0 + (*(unsigned char *)(v0 + 1474) << 2)) + 0);
        }
    }
    return v1;
}

int func_002C9CC0(p0, p1) int p0; int p1; {
    int func_002CA740();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    if (p1 == 0) {
        v1 = func_0024E520((v0 + 9296));
        tmp0 = (v1 & 255);
        v2 = (int)v0;
        if (tmp0 == 4) {
            func_002CA740(v2, 0, -1, 0, 1, 16);
            v1 = func_002CA740(v0, 1, -1, 0, 1, 16);
        } else {
            *(float *)(v0 + 11632) = *(float *)((D_005624A0 + (*(unsigned char *)(v0 + 1474) << 2)) + 0);
        }
    }
    return v1;
}

int func_002C9D60(p0, p1) int p0; int p1; {
    int func_002CA740();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    if (p1 == 0) {
        v1 = func_0024E520((v0 + 9296));
        tmp0 = (v1 & 255);
        v2 = (int)v0;
        if (tmp0 == 4) {
            func_002CA740(v2, 0, -1, 0, 1, 16);
            v1 = func_002CA740(v0, 1, -1, 0, 1, 16);
        } else {
            *(float *)(v0 + 11632) = *(float *)((D_005624A0 + (*(unsigned char *)(v0 + 1474) << 2)) + 0);
        }
    }
    return v1;
}

int func_002C9E00(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    if (p1 == 0) {
        v1 = func_0024E7F0((v0 + 9296));
        tmp0 = (short)v1;
        v2 = 1;
        if (tmp0 > 0) {
            *(char *)(v0 + 11497) = v2;
            *(char *)(v0 + 11498) = v2;
        }
        *(int *)(v0 + 11632) = 0x3f800000;
    }
    return v1;
}

void func_002CA310(p0, p1) int p0; int p1; {
    int func_0024E800();
    char *v0;
    float v1;
    float v2;
    int v3;
    int tmp6;
    v0 = (char *)p0;
    if (p1 == 0) {
        v1 = -30.0f;
        *(float *)(v0 + 84) = (*(float *)(v0 + 84) + (*(float *)(v0 + 100) * *(float *)(v0 + 16)));
        *(float *)(v0 + 100) += (*(float *)(v0 + 116) * *(float *)(v0 + 16));
        if (*(float *)(v0 + 100) <= v1) {
            *(float *)(v0 + 100) = v1;
        }
        tmp6 = func_0024E800((v0 + 9296));
        v3 = 1;
        if (v3 == (tmp6 & 255)) {
            *(char *)(v0 + 11497) = v3;
        }
    }
}

int func_002CA3A0(p0) char *p0; {
    void func_0024DA80();
    int func_002CB900();
    int tmp0;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 484) = 1;
    *(char *)(p0 + 485) = 1;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    func_0024DA80((p0 + 9296), 0, 0);
    func_0024DA80((p0 + 9504), 0, 0);
    func_0024DA80((p0 + 9712), 0, 0);
    func_0024DA80((p0 + 9920), 0, 0);
    func_0024DA80((p0 + 10128), 0, 0);
    tmp0 = func_002CB900(p0, 0);
    *(char *)(p0 + 11492) = 0;
    *(char *)(p0 + 11497) = 0;
    *(char *)(p0 + 11493) = 0;
    *(char *)(p0 + 11498) = 0;
    *(char *)(p0 + 11494) = 0;
    *(char *)(p0 + 11499) = 0;
    *(char *)(p0 + 11495) = 0;
    *(char *)(p0 + 11500) = 0;
    *(char *)(p0 + 11496) = 0;
    *(char *)(p0 + 11501) = 0;
    return tmp0;
}

int func_002CA7E0(p0) int p0; {
    int func_002CA740();
    int func_002CDA30();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    v1 = p0;
    func_002CA740(p0, 0, 0, 0, 2, 8);
    func_002CA740(v1, 1, 0, 0, 2, 8);
    tmp0 = func_002CDA30(v1, 2);
    v0 = 2;
    if ((tmp0 & 255) == 0) {
        func_002CA740(v1, v0, 0, 0, v0, 8);
    }
    tmp1 = func_002CDA30(v1, 3);
    v2 = v1;
    if ((tmp1 & 255) == 0) {
        func_002CA740(v2, 3, 0, 0, 2, 8);
    }
    v3 = func_002CDA30(v1, 4);
    v4 = v1;
    if ((v3 & 255) == 0) {
        v3 = func_002CA740(v4, 4, 0, 0, 2, 8);
    }
    return v3;
}

int func_002CA7E0();

int func_002CC040(p0) int p0; {
    int func_0024E800();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    v2 = func_0024E800((v0 + 9296));
    tmp0 = (v2 & 255);
    v1 = (int)v0;
    if (tmp0 == 1) {
        v2 = func_002CA7E0(v1);
        *(char *)(v0 + 11646) = 0;
    } else {
        tmp1 = *(unsigned char *)(v0 + 12078);
        v3 = 0x3f800000;
        if (tmp1 == 0) {
            *(int *)(v0 + 11632) = v3;
        }
    }
    return v2;
}

int func_002CC0A0(p0) int p0; {
    int func_0024E800();
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    v2 = func_0024E800((v0 + 9296));
    tmp0 = (v2 & 255);
    v1 = (int)v0;
    if (tmp0 == 1) {
        v2 = func_002CA7E0(v1);
        *(char *)(v0 + 11646) = 0;
    } else {
        tmp1 = *(unsigned char *)(v0 + 12078);
        v3 = 0x3f800000;
        if (tmp1 == 0) {
            *(int *)(v0 + 11632) = v3;
        }
    }
    return v2;
}

int func_002CC100(p0) int p0; {
    int func_0024E800();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v2 = func_0024E800((v0 + 9296));
    tmp0 = (v2 & 255);
    v1 = (int)v0;
    if (tmp0 == 1) {
        v2 = func_002CA7E0(v1);
        *(char *)(v0 + 11646) = 0;
    } else {
        *(int *)(v0 + 11632) = 0x3f800000;
    }
    return v2;
}

int func_002CC490(p0) char *p0; {
    int func_0024E800();
    int func_002CEB20();
    float v0;
    char *v1;
    int v2;
    int v3;
    int tmp6;
    v0 = 0.5f;
    *(float *)(p0 + 104) = (*(float *)(p0 + 104) + (*(float *)(p0 + 120) * *(float *)(p0 + 16)));
    *(float *)(p0 + 100) = (*(float *)(p0 + 100) + (*(float *)(p0 + 116) * *(float *)(p0 + 16)));
    v1 = p0;
    if (*(float *)(p0 + 104) < v0) {
        *(float *)(v1 + 104) = v0;
    }
    v3 = func_0024E800((v1 + 9296));
    tmp6 = (v3 & 255);
    v2 = (int)v1;
    if (tmp6 == 1) {
        v3 = func_002CEB20(v2);
    }
    return v3;
}

int func_002CC610(p0) int p0; {
    int func_0024E800();
    int func_002CEB20();
    int v0;
    int v1;
    int tmp0;
    v1 = func_0024E800((p0 + 9296));
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_002CEB20(v0);
    }
    return v1;
}

int func_002CC740(p0) int p0; {
    int func_0024E800();
    int func_002CEB20();
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_0024E800((v0 + 9296));
    if ((v1 & 255) == 1) {
        *(short *)(v0 + 144) = (*(short *)(v0 + 144) + -32768);
        *(float *)(v0 + 132) = (6.283185005187988f * ((float)*(short *)(v0 + 144) / 65536.0f));
        v1 = func_002CEB20(v0);
    }
    return v1;
}

int func_002CCAA0(p0) char *p0; {
    int func_0024E800();
    int func_002CEB20();
    float v0;
    char *v1;
    int v2;
    int v3;
    int tmp6;
    v0 = 0.5f;
    *(float *)(p0 + 104) = (*(float *)(p0 + 104) + (*(float *)(p0 + 120) * *(float *)(p0 + 16)));
    *(float *)(p0 + 100) = (*(float *)(p0 + 100) + (*(float *)(p0 + 116) * *(float *)(p0 + 16)));
    v1 = p0;
    if (*(float *)(p0 + 104) < v0) {
        *(float *)(v1 + 104) = v0;
    }
    v3 = func_0024E800((v1 + 9296));
    tmp6 = (v3 & 255);
    v2 = (int)v1;
    if (tmp6 == 1) {
        v3 = func_002CEB20(v2);
    }
    return v3;
}

int func_002CCD80(p0) int p0; {
    int func_0024E800();
    int func_002CEB20();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v2 = func_0024E800((v0 + 9296));
    tmp0 = (v2 & 255);
    v1 = (int)v0;
    if (tmp0 == 1) {
        v2 = func_002CEB20(v1);
        *(int *)(v0 + 96) = 0;
        *(int *)(v0 + 100) = 0;
        *(int *)(v0 + 104) = 0;
        *(int *)(v0 + 108) = 0x3f800000;
        *(int *)(v0 + 112) = 0;
        *(int *)(v0 + 116) = 0;
        *(int *)(v0 + 120) = 0;
        *(int *)(v0 + 124) = 0x3f800000;
    }
    return v2;
}

int func_002CD0F0(p0) int p0; {
    int func_0024E800();
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_0024E800((v0 + 9296));
    if ((v1 & 255) == 1) {
        *(char *)(v0 + 11646) = 0;
    }
    return v1;
}

int func_002CD3F0(p0) int p0; {
    int func_0024E800();
    int func_002CEB20();
    int v0;
    int v1;
    int tmp0;
    v1 = func_0024E800((p0 + 9296));
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_002CEB20(v0);
    }
    return v1;
}

int func_002CD710(p0) int p0; {
    int func_0024E800();
    int func_002CD800();
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = func_0024E800((v0 + 9296));
    if ((v1 & 255) == 1) {
        *(char *)(v0 + 11644) = 7;
        *(char *)(v0 + 1473) = 0;
        v1 = func_002CD800(v0);
    }
    return v1;
}

int func_002CD760(p0) int p0; {
    void func_0024DA80();
    int func_002CB900();
    int tmp0;
    func_0024DA80((p0 + 9296), 1, 25);
    func_0024DA80((p0 + 9504), 1, 25);
    func_0024DA80((p0 + 9712), 1, 25);
    func_0024DA80((p0 + 9920), 1, 25);
    func_0024DA80((p0 + 10128), 1, 25);
    tmp0 = func_002CB900(p0, 35);
    *(char *)((char *)p0 + 11492) = 35;
    *(char *)((char *)p0 + 11493) = 35;
    *(char *)((char *)p0 + 11494) = 35;
    *(char *)((char *)p0 + 11495) = 35;
    *(char *)((char *)p0 + 11496) = 35;
    *(char *)((char *)p0 + 11068) = 0;
    *(char *)((char *)p0 + 11212) = 0;
    *(char *)((char *)p0 + 11356) = 0;
    return tmp0;
}

void func_002CF460(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    extern char D_0054D9D0[];
    void func_00105760(char *, char *, float);
    int func_00207480();
    char stk[0x40] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    char *v5;
    int v6;
    unsigned char tmp3;
    char *tmp4;
    v0 = (char *)p0;
    v1 = p1;
    if ((p1 & 255) == 2) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -48) + 48)) : "memory");
        func_00105760(((stk + -48) + 48), ((stk + -48) + 48), 3.141592502593994f);
        v2 = func_00207480(3, 305, ((stk + -48) + 48), 16);
        *(int *)((char *)(((v1 & 255) << 2) + (int)v0) + 12132) = v2;
    } else {
        v2 = func_00207480(3, 305, 0, 16);
        *(int *)((char *)(((v1 & 255) << 2) + (int)v0) + 12132) = v2;
    }
    v3 = ((v1 & 255) << 2);
    v4 = (char *)(v3 + (int)v0);
    v5 = *(char **)(v4 + 12132);
    if (v5 != 0) {
        *(int *)(v5 + 144) = *(int *)(*(char **)((char *)((*(int *)((D_0054D9D0 + v3) + 0) << 2) + (int)v0) + 1268) + 260);
        *(char *)(v5 + 154) = 3;
        *(char *)(*(char **)(v4 + 12132) + 58) = 1;
        if (*(unsigned char *)(v0 + 1478) == 1) {
            tmp3 = D_005BCA89;
            tmp4 = *(char **)(v4 + 12132);
            *(char *)(*(char **)(v4 + 12132) + 156) = D_005BCA88;
            *(char *)(tmp4 + 157) = tmp3;
            *(char *)(tmp4 + 158) = tmp3;
            *(char *)(tmp4 + 155) = 2;
        }
    }
}

int func_002CFB20(p0, p1) int p0; int p1; {
    char *v0;
    v0 = 0;
    if ((p1 < 42)) {
        v0 = (char *)(p1 << 2);
        v0 = (v0 + p0);
        v0 = *(char **)(v0 + 1268);
    }
    return (int)v0;
}

extern void func_002C50A0();

void func_002CFB70(char *p) { func_002C50A0(p + -64); }

extern void func_002CFB50();

void func_002CFB80(char *p) { func_002CFB50(p + -64); }

extern void func_002CFB60();

void func_002CFB90(char *p) { func_002CFB60(p + -64); }

extern void func_002CBEF0();

void func_002CFBA0(char *p) { func_002CBEF0(p + -64); }

extern void func_002CBD60();

void func_002CFBB0(char *p) { func_002CBD60(p + -64); }

extern void func_002C6D50();

void func_002CFBC0(char *p) { func_002C6D50(p + -64); }

extern void func_002CBF30();

void func_002CFBF0(char *p) { func_002CBF30(p + -208); }

extern void func_002CB960();

void func_002CFC10(char *p) { func_002CB960(p + -304); }

extern void func_002C6B50();

void func_002CFC40(char *p) { func_002C6B50(p + -304); }

void func_002CFC50(char *p) { func_002CBD60(p + -304); }

extern void func_002CFB40();

void func_002CFC60(char *p) { func_002CFB40(p + -304); }

void func_002C7520(void) {}

void func_002C8A10(void) {}

void func_002CD430(void) {}

void func_002CD440(void) {}

void func_002C8A00(char *p0) {
    *(char *)(p0 + 11068) = 0;
    *(char *)(p0 + 11212) = 0;
    *(char *)(p0 + 11356) = 0;
}
