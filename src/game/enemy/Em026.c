#include "game/mt_rand.h"
extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005AF390[];

extern char D_005AF3B4[];

extern char D_005AF434[];

extern char D_005AF4C8[];

extern char D_005AF594[];

extern char D_005AF64C[];

extern char D_005B0890[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E83B0();

void func_002E8A50();

void func_00313E60();

void func_0031DD00();

void func_0031E4E0();

void func_00320590();

char *func_003A2610(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AF390;
        *(char **)(p + 64) = D_005AF3B4;
        *(char **)(p + 160) = D_005AF434;
        *(char **)(p + 208) = D_005AF4C8;
        *(char **)(p + 304) = D_005AF594;
        *(char **)(p + 464) = D_005AF64C;
        func_0028C1A0((p + 11120), -1);
        func_001003E0((p + 10704), (void *)func_0024D9A0, 208, 2);
        if (p + 10512 != 0) {
            *(char **)(p + 10528) = D_005A78F8;
            if (p + 10512 != 0) {
                *(char **)(p + 10528) = D_005A77A0;
            }
        }
        if (p + 10320 != 0) {
            *(char **)(p + 10336) = D_005A78F8;
            if (p + 10320 != 0) {
                *(char **)(p + 10336) = D_005A77A0;
            }
        }
        func_0031DD00((p + 10176), -1);
        func_0031DD00((p + 10032), -1);
        func_0031DD00((p + 9888), -1);
        func_0031DD00((p + 9744), -1);
        func_0031DD00((p + 9600), -1);
        func_002791E0((p + 8064), -1);
        func_002791E0((p + 6528), -1);
        func_002791E0((p + 4992), -1);
        func_002791E0((p + 3456), -1);
        if (p + 3152 != 0) {
            *(char **)(p + 3168) = D_005B0890;
            if (p + 3152 != 0) {
                *(char **)(p + 3168) = D_005A77A0;
            }
        }
        func_00313E60((p + 3120), -1);
        func_002E8A50((p + 3096), -1);
        func_002E83B0((p + 3028), -1);
        func_002791E0((p + 1216), -1);
        func_001003E0((p + 532), (void *)func_0013D240, 16, 35);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00131760(float *, float *, float *);

void func_00105230(float *, float *, float *);

void func_00104C00(float *, char *, float *);

#define M39D(p, k) ((float *)((p) + (k) * 64 + 0x2E40))

typedef struct { unsigned char id; char pad[15]; float pos[4]; float rot[4]; } T39D __attribute__((aligned(16)));

extern T39D D_00563EE0;

extern T39D D_00563F10;

extern T39D D_00563F40;

extern T39D D_00563F70;

void func_0039D0F0(char *p, unsigned char k) {
    char *func_00279290(char *);
    T39D a = D_00563EE0;
    T39D b = D_00563F10;
    T39D c = D_00563F40;
    T39D d = D_00563F70;
    T39D *t[4] = { &a, &b, &c, &d };
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    T39D *e;
    unsigned char id;
    char *bn;
    e = t[((unsigned char *)(p + 0x2EC0))[k]];
    v[0] = e->pos[0];
    v[1] = e->pos[1];
    v[2] = e->pos[2];
    v[3] = 1.0f;
    r[0] = e->rot[0];
    r[1] = e->rot[1];
    r[2] = e->rot[2];
    r[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(M39D(p, k)) : "memory");
    func_00131760(M39D(p, k), M39D(p, k), r);
    func_00105230(M39D(p, k), M39D(p, k), v);
    id = e->id;
    if (!(id & 0x80)) {
        bn = *(char **)(func_00279290(p + 0x4C0) + 0x108) + id * 64;
    } else {
        id &= 0x7F;
        bn = *(char **)(func_00279290((k ^ 1) ? p + 0x1380 : p + 0xD80) + 0x108) + id * 64;
    }
    func_00104C00(M39D(p, k), bn, M39D(p, k));
}

/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-11. */
extern short D_00563DC0[];

unsigned char func_0024E800(char *);

void func_0024DA80(char *, int, int);

void func_0039D800(char *);

void func_003A0F20(char *);

unsigned char func_0039DDF0(char *, float);

typedef struct { short s0; short s2; short s4; short s6; float f8; float fC; float f10; float f14; float f18; float f1C; float f20; unsigned char b24; } E3A1;

typedef struct { float v[4]; } F3A1;

extern E3A1 D_00563FB0 __attribute__((aligned(16)));

extern E3A1 D_00563FE0 __attribute__((aligned(16)));

extern E3A1 D_00564010 __attribute__((aligned(16)));

extern E3A1 D_00564040 __attribute__((aligned(16)));

extern F3A1 D_00564070 __attribute__((aligned(16)));

static inline void play3A1(char *p, int s) { *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC); *(short *)(p + 0x2DDC) = s; func_0024DA80(p + 0x29D0, 0, s); func_0024DA80(p + 0x2AA0, 0, s); }

static inline void xz3A1(char *v, float x, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = 0.0f; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }

static inline unsigned char both3A1(char *p) { unsigned char r; if (func_0024E800(p + 0x29D0) == 1 && func_0024E800(p + 0x2AA0) == 1) r = 1; else r = 0; return r; }

unsigned char func_003A1320(char *p, int k) {
    void func_003A0CD0(char *, short);
    unsigned char func_003A2080(char *, char *, float, float);
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

/* Two-state setup (offset table swap, reset vectors to (0,0,-1.8194,0)); per-entry scaled update. */
void func_0024DA80(char *, int, int);

int func_0039DED0(char *);

void func_003A0230(char *);

void func_00394450(char *p) {
    void func_003A0CD0(char *, int);
    p[0x2DE8] = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(short *)(p + 0x2DDC) != 0x5E) {
            *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
            *(short *)(p + 0x2DDC) = 0x5E;
            func_0024DA80(p + 0x29D0, 0, 0x5E);
            func_0024DA80(p + 0x2AA0, 0, 0x5E);
        }
        (*(unsigned char *)(p + 5))++;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(unsigned int *)(p + 0x68) = 0xBFE8E38E;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x2E00) = 0;
        *(int *)(p + 0x2E04) = 0;
        *(unsigned int *)(p + 0x2E08) = 0xBFE8E38E;
        *(int *)(p + 0x2E0C) = 0;
        p[0x2DE0] = 1;
    case 1:
        func_003A0CD0(p, 0x300);
        func_003A0F20(p);
        if ((unsigned char)func_0039DED0(p) == 1) {
            func_003A0230(p);
        }
        break;
    }
}

void func_00105668(float *, float *, float);

void func_0039A470(char *p) {
    void func_00105760(float *, float *, float);
    void func_00104B80(float *, float *, float *);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a;
    float b;
    a = 6.283185f * ((float)*(short *)(p + 0x2DEA) / 65536.0f);
    b = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x60) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(v), "f"(*(float *)(p + 0x10)) : "t0", "memory");
    v[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105668(m, m, a);
    func_00105760(m, m, b);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
}

int func_003A0800(unsigned char *);

void func_003A07B0(unsigned char *);

int func_0039FD40(unsigned char *p) {
    if ((unsigned char)func_003A0800(p) == 1) {
        func_003A07B0(p);
        switch (p[0x2DD5]) {
        case 1:
            *(short *)(p + 0x2DDA) = 0x39;
            return 1;
        case 2:
            *(short *)(p + 0x2DDA) = 0x3A;
            return 1;
        default:
            if (mt_rand() & 4) {
                *(short *)(p + 0x2DDA) = 0x39;
                return 1;
            }
            *(short *)(p + 0x2DDA) = 0x3A;
            return 1;
        }
    }
    return 0;
}

int func_003A0670(char *p) {
    int func_003A2080(char *, char *, float, float);
    if (*(unsigned char *)(p + 0x2F3C) == 2) {
        return 0;
    }
    if (!(*(unsigned char *)(p + 0x2EE4) ? 1 : 0)) {
        return 0;
    }
    return func_003A2080(p, p + 0x2EEC, 1.0f, 0.0f);
}

int func_003A25A0(char *p, int i) {
    char *func_00279290(char *);
    if (i < *(unsigned short *)(func_00279290(p + 0x4C0) + 0xAA)) {
        return *(int *)(p + 0xCCC);
    }
    return 0;
}

extern float D_01DF5D20[];

int func_003A20C0(char *p, float *v, float rate, float floor) {
    float d;
    if (*(float *)(p + 0x10) <= 0.0f) {
        return 0;
    }
    d = D_01DF5D20[0];
    *v = *v - rate * d;
    if (*v <= floor) {
        *v = floor;
        return 1;
    }
    return 0;
}

unsigned char func_003A1180(char *p) {
    float old;
    float v;
    unsigned char r;
    *(float *)(p + 84) += *(float *)(p + 100) * *(float *)(p + 16);
    old = *(float *)(p + 100);
    v = old + *(float *)(p + 116) * *(float *)(p + 16);
    r = 0;
    if (v < 0.0f && old >= 0.0f) {
        r = 1;
    }
    if (v < 0.0f || v != *(float *)(p + 11780)) {
        if (v < *(float *)(p + 11780)) {
            v = *(float *)(p + 11780);
        }
    }
    *(float *)(p + 100) = v;
    return r;
}

void func_003A2060(char *p, int k) {
    void func_0034BA60(int, char *, signed char, int, int);
    func_0034BA60(k, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
}

void func_00393DF0(char *p, char *a, char *b) {
    void func_0034BA60(int, char *, signed char, int, int);
    short k;
    if (*(signed char *)(b + 5) != 0) {
        return;
    }
    if (*(signed char *)(a + 1) == 2) {
        func_0034BA60(0x2A, b + 0x10, *(signed char *)(p + 0x46), 0, 1);
        return;
    }
    k = *(short *)(p + 0xAC0);
    if (k == 0x38 || k == 0x41) {
        func_0034BA60(0x5F, b + 0x10, *(signed char *)(p + 0x46), 0, 1);
        return;
    }
    if (*(unsigned char *)(a + 0x3D) != 7) {
        func_0034BA60(0x5E, b + 0x10, *(signed char *)(p + 0x46), 0, 1);
    }
}

extern int D_005BE09C;

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_003A1FA0(char *p, int k, int flag) {
    int func_003A2080(char *, char *, float, float);
    void func_0034BA60(int, char *, signed char, int, int);
    float v[4];
    if ((unsigned char)func_003A2080(p, p + 0x2F34, 1.0f, 0.0f) == 1) {
        if (flag == 0) {
            func_0034BA60(k, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        } else {
            QCOPY(v, *(char **)((char *)D_005BE09C + 0x23C) + 0x70);
            func_0034BA60(k, (char *)v, *(signed char *)(p + 0x46), 0, 1);
        }
        *(float *)(p + 0x2F34) = *(float *)(p + 0x2F30);
    }
}

int func_0039D440(char *p, int k) {
    int func_001AD140(int, int, int);
    int r;
    int m = k & 255;
    int *slot;
    if (m == 0) {
        *(unsigned char *)(p + 12004) &= 2;
    } else if (m == 1) {
        *(unsigned char *)(p + 12004) &= 1;
    }
    slot = (int *)(k ? p + 12028 : p + 12024);
    if (*slot != 0) {
        r = func_001AD140(*slot, k, m);
        *slot = 0;
    }
    return r;
}

void func_00393A70(char *p, int a) {
    *(char *)(p + 0x2EC2) = a;
    if (*(unsigned char *)(p + 0x2F3C) == 2) {
        if (*(unsigned char *)(p + 0x2EE1) <= 1 || !(*(unsigned short *)(p + 0x2EDE) & 0x100)) {
            *(char *)(p + 0x2DE6) = 2;
        }
    }
}

void func_001A1F90(char *);

void func_001A1DC0(char *);

void func_0039CEE0(char *p) {
    char *func_00279290(char *);
    switch (*(unsigned char *)(p + 0x2F3C)) {
    case 0:
        func_001A1F90(func_00279290(p + 0xD80));
        func_001A1DC0(func_00279290(p + 0xD80));
        break;
    case 1:
        func_001A1F90(func_00279290(p + 0x1380));
        func_001A1DC0(func_00279290(p + 0x1380));
        break;
    default:
        func_001A1F90(func_00279290(p + 0xD80));
        func_001A1DC0(func_00279290(p + 0xD80));
        func_001A1F90(func_00279290(p + 0x1380));
        func_001A1DC0(func_00279290(p + 0x1380));
        break;
    }
}

void func_001A1E10(char *);

void func_001A1D90(char *);

void func_0039CFB0(char *p) {
    char *func_00279290(char *);
    switch (*(unsigned char *)(p + 0x2F3C)) {
    case 0:
        func_001A1E10(func_00279290(p + 0xD80));
        func_001A1D90(func_00279290(p + 0xD80));
        break;
    case 1:
        func_001A1D90(func_00279290(p + 0x1380));
        func_001A1E10(func_00279290(p + 0x1380));
        break;
    default:
        func_001A1E10(func_00279290(p + 0xD80));
        func_001A1D90(func_00279290(p + 0xD80));
        func_001A1D90(func_00279290(p + 0x1380));
        func_001A1E10(func_00279290(p + 0x1380));
        break;
    }
}

void func_003023F0(int);

int func_0039D080(char *, int);

static inline unsigned char is_set(unsigned char v) {
    return v != 0;
}

static inline unsigned char has_flag(char *p) {
    return (*(unsigned short *)(p + 0x2DD8) & 0x100) != 0;
}

void func_0039D600(char *p) {
    if (is_set(*(unsigned char *)(p + 0x2EE4)) == 1) {
        if (has_flag(p) == 1) {
            if (*(int *)(p + 0x2F04) != 0 && (unsigned char)func_0039D080(p, 0) == 1) {
                func_003023F0(*(int *)(p + 0x2F04));
            }
            if (*(int *)(p + 0x2F0C) != 0 && (unsigned char)func_0039D080(p, 1) == 1) {
                func_003023F0(*(int *)(p + 0x2F0C));
            }
        }
    } else {
        if (has_flag(p) == 1) {
            if (*(int *)(p + 0x2F00) != 0 && (unsigned char)func_0039D080(p, 0) == 1) {
                func_003023F0(*(int *)(p + 0x2F00));
            }
            if (*(int *)(p + 0x2F08) != 0 && (unsigned char)func_0039D080(p, 1) == 1) {
                func_003023F0(*(int *)(p + 0x2F08));
            }
        }
    }
}

static inline void v4set(char *v, float x, float y, float z, float w) {
    *(float *)(v + 0) = x;
    *(float *)(v + 4) = y;
    *(float *)(v + 8) = z;
    *(float *)(v + 0xC) = w;
}

static inline void mot_set(char *p, short m) {
    if (*(short *)(p + 0x2DDC) != m) {
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = m;
        func_0024DA80(p + 0x29D0, 0, m);
        func_0024DA80(p + 0x2AA0, 0, m);
    }
}

void func_00394560(char *p, int k) {
    void func_003A0CD0(char *, int);
    *(unsigned char *)(p + 0x2DE8) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        mot_set(p, 0x60);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        switch ((unsigned char)k) {
        case 0:
            v4set(p + 0x60, 1.3902438879013062f, 0.0f, 0.0f, 0.0f);
            v4set(p + 0x2E00, 1.3902438879013062f, 0.0f, 0.0f, 0.0f);
            break;
        case 1:
            v4set(p + 0x60, 1.0426828861236572f, 0.0f, 0.6274510025978088f, 0.0f);
            v4set(p + 0x2E00, 1.0426828861236572f, 0.0f, 0.6274510025978088f, 0.0f);
            break;
        case 2:
            v4set(p + 0x60, 1.0426828861236572f, 0.0f, -0.9097222089767456f, 0.0f);
            v4set(p + 0x2E00, 1.0426828861236572f, 0.0f, -0.9097222089767456f, 0.0f);
            break;
        }
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        func_003A0CD0(p, 0x300);
        func_003A0F20(p);
        if ((unsigned char)func_0039DED0(p) == 1) {
            func_003A0230(p);
        }
        break;
    }
}

void func_00394730(char *p, int k) {
    void func_003A0CD0(char *, int);
    *(unsigned char *)(p + 0x2DE8) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        mot_set(p, 0x5F);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        switch ((unsigned char)k) {
        case 0:
            v4set(p + 0x60, -2.1710526943206787f, 0.0f, 0.0f, 0.0f);
            v4set(p + 0x2E00, -2.1710526943206787f, 0.0f, 0.0f, 0.0f);
            break;
        case 1:
            v4set(p + 0x60, -1.6282894611358643f, 0.0f, 0.6274510025978088f, 0.0f);
            v4set(p + 0x2E00, -1.6282894611358643f, 0.0f, 0.6274510025978088f, 0.0f);
            break;
        case 2:
            v4set(p + 0x60, -1.6282894611358643f, 0.0f, -0.9097222089767456f, 0.0f);
            v4set(p + 0x2E00, -1.6282894611358643f, 0.0f, -0.9097222089767456f, 0.0f);
            break;
        }
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        func_003A0CD0(p, 0x300);
        func_003A0F20(p);
        if ((unsigned char)func_0039DED0(p) == 1) {
            func_003A0230(p);
        }
        break;
    }
}

void func_004D6C20(int, char *, int, short, char *, int);

void func_0039DA50(char *p) {
    func_004D6C20(*(int *)(p + 0xB10), p, 4, *(short *)(p + 0x90), p + 0x50, 0);
}

void func_003A0650(char *p) {
    int func_003A2080(char *, char *, float, float);
    func_003A2080(p, p + 0x2E24, 1.0f, 0.0f);
}

void func_0039D580(char *p, int a) {
    void func_001AD140(char *);
    char **q;
    q = a ? (char **)(p + 0x2F08) : (char **)(p + 0x2F00);
    if (*q != 0) {
        func_001AD140(*q);
    }
    q = a ? (char **)(p + 0x2F0C) : (char **)(p + 0x2F04);
    if (*q != 0) {
        func_001AD140(*q);
    }
}

extern char D_01CAFF0C[];

void func_00332AE0(char *, char *, float, float);

extern char *D_005BDC4C;

void func_003A2320(char *p) {
    unsigned char k = 0;
    float y = 0.0f;
    switch (*(unsigned char *)(p + 0x2F3C)) {
    case 0:
        y = 400.0f;
        break;
    case 1:
        k = 1;
        y = 400.0f;
        break;
    case 2:
        k = 2;
        y = 600.0f;
        break;
    }
    func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005BDC4C + k * 64, 1.0f, y);
}

char *func_002FF740(short, char *);

void func_0039D4C0(char *p, int a) {
    char *func_00279290(char *);
    char *o = a ? p + 0x1380 : p + 0xD80;
    char **slot = a ? (char **)(p + 0x2F08) : (char **)(p + 0x2F00);
    int id = a ? 0xE : 0xD;
    *slot = func_002FF740((short)id, *(char **)(func_00279290(o) + 0x108));
    slot = a ? (char **)(p + 0x2F0C) : (char **)(p + 0x2F04);
    id = a ? 0x10 : 0xF;
    *slot = func_002FF740((short)id, *(char **)(func_00279290(o) + 0x108));
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern V4 D_00563FA0;

void func_0039D980(char *p) {
    void func_00104B80(char *, char *, char *);
    void func_00105760(char *, char *, float);
    float m[16];
    V4 v;
    float a;
    v = D_00563FA0;
    a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    UNIT(m);
    func_00105760((char *)m, (char *)m, a);
    func_00104B80((char *)&v, (char *)m, (char *)&v);
    VADDIP(&v, p + 0x50);
    func_004D6C20(*(int *)(p + 0xB10), p, 3, *(short *)(p + 0x90), (char *)&v, 0);
}

int func_00201770(char *, float *, float *, char *, int);

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

static inline unsigned char func_003A1E20_h(unsigned char c) {
    if (c == 1) return 1;
    return 0;
}

int func_003A1E20(char *p) {
    float v[4] __attribute__((aligned(16)));
    float h[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float d;
    if (func_003A1E20_h(*(unsigned char *)(p + 0x2DE1)) == 0) return 0;
    if (func_003A1E20_h(*(unsigned char *)(p + 0x2DE0)) == 0) return 0;
    QCOPY(v, p + 0x50);
    v[1] = v[1] + 100.0f;
    v[3] = 1.0f;
    if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, h, p + 0x2D90, 0) == 1) {
        *(float *)(p + 0x2DC8) = h[1];
        QCOPYR(w, p + 0x2D40);
        if (w[1] <= 0.0f) {
            d = *(float *)(p + 0x54) - *(float *)(p + 0x2DC8);
            if (!(d <= 10.0f) && !(d <= 100.0f)) return 1;
        }
    }
    return 0;
}

static inline float mul_3A0(float k, float v) {
    return k * v;
}

void func_003A0AB0(char *p) {
    float d = *(float *)(p + 0x154) - *(float *)(p + 0x54);
    if (!(d <= 300.0f)) {
        *(unsigned char *)(p + 0x2DF6) = 1;
        *(float *)(p + 0x2F38) = *(float *)(p + 0x2F38) + mul_3A0(1.0f, *(float *)(p + 0x10));
    } else if (d < -200.0f) {
        *(unsigned char *)(p + 0x2DF6) = 2;
        *(float *)(p + 0x2F38) = 0.0f;
    } else {
        *(unsigned char *)(p + 0x2DF6) = 0;
        *(float *)(p + 0x2F38) = 0.0f;
    }
}

void func_0039D330(char *p, int w) {
    char *func_00279290(char *);
    char *func_00207480(int, int, int, int);
    char **slot = w ? (char **)(p + 0x2EFC) : (char **)(p + 0x2EF8);
    char *o = w ? p + 0x1380 : p + 0xD80;
    unsigned char s;
    if (*slot == 0) {
        s = w;
        if (s == 0) {
            *slot = func_00207480(3, 0x24C, 0, 0x10);
        } else if (s == 1) {
            *slot = func_00207480(3, 0x24D, 0, 0x10);
        }
        if (*slot != 0) {
            char *e;
            int v = *(int *)(func_00279290(o) + 0x108);
            e = *slot;
            *(int *)(e + 0x90) = v;
            e[0x9A] = 0;
            {
                char *e2 = *slot;
                e2[0x3A] = 1;
            }
            if (s == 0) {
                *(unsigned char *)(p + 0x2EE4) |= 1;
            } else if (s == 1) {
                *(unsigned char *)(p + 0x2EE4) |= 2;
            }
            *(float *)(p + 0x2EEC) = 1800.0f;
        }
    }
}

extern int D_01CAFF38[];

void func_0039DA70(char *p) {
    char *o;
    int j;
    int i;
    char *e;
    short h;
    int m;
    *(int *)(p + 0x2ED4) = 0;
    *(int *)(p + 0x2ED0) = 0;
    *(int *)(p + 0x2ECC) = 0;
    *(int *)(p + 0x2EC8) = 0;
    if (*(unsigned char *)(p + 0x2F3D) > 3) return;
    o = *(char **)(p + 0x2ED8);
    if (o == 0) return;
    *(unsigned char *)(p + 0x2EE1) = *(short *)(o + 0x276);
    j = 0;
    for (i = 0; i < *(unsigned char *)(p + 0x2EE1); i++) {
        e = *(char **)(o + i * 4 + 0x264);
        if (e != 0) {
            if (e == p) {
                *(unsigned char *)(p + 0x2EE0) = j;
                *(unsigned short *)(p + 0x2EDE) = *(unsigned short *)(o + j * 2 + 0x27C);
            } else {
                *(char **)(p + j * 4 + 0x2EC8) = e;
            }
            j++;
        }
    }
    h = *(short *)(o + 0x27A);
    if (*(short *)(p + 0x2EDC) != h) {
        m = D_01CAFF38[0];
        if ((m == 0x79 || m == 0x19E) && *(unsigned char *)(p + 0x2EE1) > 1) {
            if (h != 0x8000) {
                unsigned char v = *(unsigned char *)(o + 0x284);
                if (*(unsigned char *)(p + 0x2EE1) > 1) {
                    *(unsigned char *)(p + 0x2DE7) = v;
                }
            }
        }
    }
    *(short *)(p + 0x2EDC) = *(short *)(o + 0x27A);
}

static inline int bit_3A0(unsigned int x) {
    return x != 0;
}

void func_003A0480(char *p) {
    int func_003A2080(char *, char *, float, float);
    float s;
    unsigned short fl;
    char *q;
    char *o;
    int i;
    int n;
    if (bit_3A0(*(unsigned short *)(p + 0x2DD8) & 1) == 1) return;
    if (bit_3A0(*(unsigned char *)(p + 0x2DE6)) == 1) return;
    s = (1.0f + (1.0f - *(float *)(p + 0x2E2C))) * *(float *)(p + 0x10);
    n = *(unsigned char *)(p + 0x2EE1);
    if (n > 1) {
        fl = *(unsigned short *)(p + 0x2EDE);
        if (fl & 0x100) return;
        q = *(char **)(p + 0x2ED8);
        if (q) {
            for (i = 0; i < n; i++) {
                o = *(char **)(q + 0x264);
                if (o && o != p && *(short *)(o + 0xAC0) == 0x24) {
                    s = s * 2.5f;
                    break;
                }
                q += 4;
            }
        }
        if (fl & 0x200) return;
    }
    if (*(unsigned char *)(p + 0x2F3C) == 2) s = s * 2.0f;
    if (*(unsigned char *)(p + 0x2DF4) < 3) {
        s = s * 0.75f;
    } else if (!(*(unsigned char *)(p + 0x2DF4) < 3)) {
        s = s * 0.5f;
    }
    if ((unsigned char)func_003A2080(p, p + 0x2E20, s, 0.0f) == 1) {
        if (*(unsigned char *)(p + 0x2EE1) > 1 && (*(unsigned short *)(p + 0x2EDE) & 0x100)) return;
        if (*(unsigned char *)(p + 0x2DE6) == 0) p[0x2DE6] = 1;
    }
}

extern char *D_005BDC34;

extern char *D_005BDC38;

extern char *D_005BDC3C;

extern char *D_005BDC40;

void func_003A23C0(char *p) {
    char *t;
    char *o;
    unsigned char f;
    if (*(unsigned char *)(p + 0x2F3C) == 2) {
        t = D_005BDC40;
    } else {
        switch (*(unsigned char *)(p + 0x2DD5)) {
        case 1:
            t = D_005BDC38;
            break;
        case 2:
            t = D_005BDC3C;
            break;
        default:
            t = D_005BDC34;
            break;
        }
    }
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    f = 0;
    if (o != 0 && *(unsigned char *)(o + 0x3C78) == 1) {
        f = 1;
    }
    *(unsigned char *)(p + 0x2EE9) = 0;
    if (*(short *)(p + 0xAC0) == 0x24) {
        if (*(unsigned char *)(p + 5) < 0x32) {
            if (*(unsigned char *)(p + 5) == 0x14) {
                *(unsigned char *)(p + 0x2EE9) = 1;
            } else if (!f) {
                *(unsigned char *)(p + 0x2EE9) = 1;
            }
        }
    } else if (*(short *)(p + 0xAC0) == 0x40) {
        if (*(unsigned char *)(p + 5) >= 0x14 && *(unsigned char *)(p + 5) < 0x28) {
            *(unsigned char *)(p + 0x2EE9) = 2;
        }
    }
    if (t != 0) {
        switch (*(unsigned char *)(p + 0x2EE9)) {
        case 0:
            *(float *)(p + 0xB90) = *(float *)(t + 0x20);
            *(float *)(p + 0xB94) = *(float *)(t + 0x24);
            *(float *)(p + 0xB80) = *(float *)(t + 0x10);
            break;
        case 1:
            *(float *)(p + 0xB90) = 2.0f * *(float *)(t + 0x20);
            *(float *)(p + 0xB94) = 2.0f * *(float *)(t + 0x24);
            *(float *)(p + 0xB80) = 0.875f * *(float *)(t + 0x10);
            break;
        case 2:
            if (f) {
                *(float *)(p + 0xB90) = 0.25f * *(float *)(t + 0x20);
                *(float *)(p + 0xB94) = 0.25f * *(float *)(t + 0x24);
            } else {
                *(float *)(p + 0xB90) = 0.5f * *(float *)(t + 0x20);
                *(float *)(p + 0xB94) = 0.5f * *(float *)(t + 0x24);
            }
            break;
        }
    }
}

int func_003A0C00();

int func_003A0BD0(char *p0) {
    short t0;
    int t1;
    t0 = *(short *)(p0 + 11756);
    t1 = func_003A0C00(p0, *(short *)(p0 + 11756));
    *(char *)(p0 + 11765) = t1;
    return t1;
}

void func_003A2820(char **h) {
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

int func_003A02B0();

int func_003A1890();

int func_003951E0(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1890(p0, 0);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

int func_00395220(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1890(p0, 1);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

int func_00395260(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1890(p0, 2);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

int func_003952A0(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1890(p0, 3);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

int func_003952E0(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    v1 = func_003A1890(p0, 4);
    tmp0 = (v1 & 255);
    v0 = p0;
    if (tmp0 == 1) {
        v1 = func_003A02B0(v0, 2);
    }
    return v1;
}

int func_0039D720(p0, p1) int p0; int p1; {
    int func_00207480();
    char *func_00279290();
    int func_0034BA60();
    char *v0;
    int v4;
    char *v3;
    int v2;
    int v5;
    int v1;
    int tmp0;
    int tmp1;
    char *tmp2;
    char *tmp4;
    int tmp8;
    v0 = (char *)p0;
    if (p1 != 0) {
        v1 = (int)(v0 + 4992);
    } else {
        v1 = (int)(v0 + 3456);
    }
    v2 = (p1 & 255);
    v3 = 0;
    if (v2 == 0) {
        tmp0 = func_00207480(3, 947, 0, 16);
        v3 = (char *)tmp0;
    } else {
        v4 = 3;
        if (v2 == 1) {
            tmp1 = func_00207480(v4, 948, 0, 16);
            v3 = (char *)tmp1;
        }
    }
    v5 = v1;
    if (v3 != 0) {
        tmp2 = func_00279290(v5);
        *(int *)(v3 + 144) = *(int *)(tmp2 + 264);
        *(char *)(v3 + 154) = 0;
        *(char *)(v3 + 58) = 1;
    }
    tmp4 = func_00279290(v1);
    tmp8 = func_0034BA60(89, (*(char **)(tmp4 + 264) + 176), *(signed char *)(v0 + 70), 0, 1);
    return tmp8;
}

void func_0039D840(p0) char *p0; {
    int func_00207480();
    char *v0;
    int v1;
    char *v2;
    v0 = p0;
    if (*(int *)(p0 + 12048) == 0) {
        v1 = func_00207480(2, 469, (v0 + 1104), 16);
        *(int *)(v0 + 12048) = v1;
        v2 = *(char **)(v0 + 12048);
        if (v2 != 0) {
            *(char *)(v2 + 58) = 1;
        }
    }
}

int func_0039D890(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 12048);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 12048) = 0;
    }
    return v2;
}

void func_0039D8D0(p0) char *p0; {
    int func_00207480();
    char *v0;
    int v1;
    char *v2;
    v0 = p0;
    if (*(int *)(p0 + 12052) == 0) {
        v1 = func_00207480(3, 784, 0, 16);
        *(int *)(v0 + 12052) = v1;
        v2 = *(char **)(v0 + 12052);
        if (v2 != 0) {
            *(int *)(v2 + 144) = *(int *)(*(char **)(v0 + 3264) + 260);
            *(char *)(v2 + 154) = 0;
            *(char *)(*(char **)(v0 + 12052) + 58) = 1;
        }
    }
}

int func_0039D940(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 12052);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 12052) = 0;
    }
    return v2;
}

int func_003A01F0(p0) char *p0; {
    int v0;
    if ((*(unsigned char *)(p0 + 11765) & 1) != 0) {
        *(short *)(p0 + 11738) = 0;
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}

extern char D_00563DF0[];

extern char D_01CAFF3C[];

void func_003A0620(p0) char *p0; {
    *(float *)(p0 + 11808) = *(float *)((D_00563DF0 + (*(unsigned char *)D_01CAFF3C << 2)) + 0);
}

int func_0024E780();

int func_003A06D0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = (char *)p0;
    tmp0 = func_0024E780((v0 + 10704), 0, 0);
    if (tmp0 != 0) {
        tmp1 = ((*(unsigned char *)(v0 + 12005) < (*(unsigned char *)(v0 + 12006) + -1)) ^ 1);
        tmp2 = 1;
        v1 = 3;
        if (tmp1 == tmp2) {
            *(char *)(v0 + 484) = v1;
        } else {
            *(char *)(v0 + 484) = 4;
        }
    } else {
        *(char *)(v0 + 484) = 0;
        *(char *)(v0 + 485) = 0;
    }
    v2 = func_0024E780((v0 + 10704), 0, 1);
    if (v2 != 0) {
        *(short *)(v0 + 11736) = (*(unsigned short *)(v0 + 11736) | 256);
    }
    return v2;
}

extern char D_005BCC70;

void func_003A0770(p0) char *p0; {
    *(char *)(p0 + 12006) = *(unsigned char *)((&D_005BCC70 + *(unsigned char *)D_01CAFF3C) + 0);
    if (*(unsigned char *)(p0 + 12092) == 2) {
        *(char *)(p0 + 12006) = (*(unsigned char *)(p0 + 12006) << 1);
    }
}

void func_003A0B30(p0) char *p0; {
    float v0;
    int v1;
    int v2;
    int v3;
    v0 = *(float *)(p0 + 356);
    if (v0 <= 210.0f) {
        *(char *)(p0 + 11764) = 0;
    } else {
        v1 = 1;
        if (v0 <= 350.0f) {
            *(char *)(p0 + 11764) = v1;
        } else {
            v2 = 2;
            if (v0 <= 650.0f) {
                *(char *)(p0 + 11764) = v2;
            } else {
                v3 = 3;
                if (v0 <= 1000.0f) {
                    *(char *)(p0 + 11764) = v3;
                } else {
                    *(char *)(p0 + 11764) = 4;
                }
            }
        }
    }
}

void func_003A0DB0(p0, p1) char *p0; int p1; {
    float v0;
    if (p1 != 0) {
        v0 = *(float *)(p0 + 16);
        if (1.0f != v0) {
            p1 = ((short)(int)(0.5f + ((65536.0f * ((6.283185005187988f * ((float)p1 / 65536.0f)) * v0)) / 6.283185005187988f)) & 65535);
        }
        p1 = (short)p1;
        *(short *)(p0 + 11754) = (*(short *)(p0 + 11754) + p1);
    }
}

void func_003A0E50(p0, p1) char *p0; int p1; {
    float v0;
    if (p1 != 0) {
        v0 = *(float *)(p0 + 16);
        if (1.0f != v0) {
            p1 = ((short)(int)(0.5f + ((65536.0f * ((6.283185005187988f * ((float)p1 / 65536.0f)) * v0)) / 6.283185005187988f)) & 65535);
        }
        p1 = (short)p1;
        *(short *)(p0 + 144) = (*(short *)(p0 + 144) + p1);
    }
}

void func_003A2120(p0) char *p0; {
    float v0;
    float v1;
    v0 = *(float *)(p0 + 2972);
    v1 = *(float *)(p0 + 3016);
    if (v0 > 0.0f) {
        *(float *)(p0 + 11820) = (v1 / v0);
    } else {
        *(int *)(p0 + 11820) = 0x3f800000;
    }
}

int func_0021CAD0();

void func_003A2190(p0) int p0; {
    int tmp2;
    tmp2 = func_0021CAD0(*(int *)(*(char **)D_01CAFF0C + 12));
    *(char *)((char *)p0 + 11971) = tmp2;
}

extern void func_003992B0();

void func_00399280(void) { func_003992B0(); }

void func_00399290(void) { func_003992B0(); }

void func_003992A0(void) { func_003992B0(); }

void func_0039AA20(void *p) {
    extern void func_0039AA30(); func_0039AA30(p, 1); }

void func_0039B220(void *p) {
    extern void func_0039B230(); func_0039B230(p, 1); }

void func_0039BA20(void *p) {
    extern void func_0039BA30(); func_0039BA30(p, 1); }

extern void func_0039EED0();

void func_0039EEC0(void) { func_0039EED0(); }

extern void func_00390C00();

void func_003A2870(char *p) { func_00390C00(p + -64); }

extern void func_003A25F0();

void func_003A2880(char *p) { func_003A25F0(p + -64); }

extern void func_003A2600();

void func_003A2890(char *p) { func_003A2600(p + -64); }

extern void func_00393890();

void func_003A28A0(char *p) { func_00393890(p + -64); }

extern void func_00393570();

void func_003A28C0(char *p) { func_00393570(p + -64); }

extern void func_00393B50();

void func_003A28D0(char *p) { func_00393B50(p + -64); }

extern void func_00393CA0();

void func_003A28E0(char *p) { func_00393CA0(p + -64); }

extern void func_00393AC0();

void func_003A28F0(char *p) { func_00393AC0(p + -64); }

extern void func_00393EB0();

void func_003A2910(char *p) { func_00393EB0(p + -64); }

extern void func_00393DE0();

void func_003A2920(char *p) { func_00393DE0(p + -64); }

extern void func_00392AF0();

void func_003A2930(char *p) { func_00392AF0(p + -64); }

extern void func_00393F10();

void func_003A2970(char *p) { func_00393F10(p + -304); }

extern void func_00393F00();

void func_003A2980(char *p) { func_00393F00(p + -304); }

void func_003A2990(char *p) { func_00393890(p + -304); }

void func_003A29B0(char *p) { func_00393570(p + -304); }

void func_003A29C0(char *p) { func_00393B50(p + -304); }

void func_003A29D0(char *p) { func_00393CA0(p + -304); }

void func_003A29E0(char *p) { func_00393AC0(p + -304); }

void func_003A2A00(char *p) { func_00393DE0(p + -304); }

int func_003A0220(char *p0) {
    return ((unsigned int)0 < (unsigned int)(*(unsigned short *)(p0 + 11998) & 32768));
}

void func_003A0EF0(char *p0) {
    unsigned short t0;
    int t1;
    t0 = *(unsigned short *)(*(char **)(*(char **)D_01CAFF0C + 12) + 144);
    t1 = ((*(unsigned short *)(*(char **)(*(char **)D_01CAFF0C + 12) + 144) - *(unsigned short *)(p0 + 144)) + -16384);
    *(short *)(p0 + 11758) = ((*(unsigned short *)(*(char **)(*(char **)D_01CAFF0C + 12) + 144) - *(unsigned short *)(p0 + 144)) + -16384);
}

void func_003A1F90(char *p0, float f0) {
    *(float *)(p0 + 12080) = f0;
    *(int *)(p0 + 12084) = 0;
}

extern char D_005BCC78;

void func_003A2170(char *p0) {
    unsigned char t0;
    unsigned char t1;
    t0 = *(unsigned char *)D_01CAFF3C;
    t1 = *(unsigned char *)((&D_005BCC78 + *(unsigned char *)D_01CAFF3C) + 0);
    *(char *)(p0 + 11973) = *(unsigned char *)((&D_005BCC78 + *(unsigned char *)D_01CAFF3C) + 0);
}

int func_003A21D0(int p0, int p1) {
    return ((*(unsigned char *)D_01CAFF3C < (p1 & 255)) ^ 1);
}

void func_0039AA10(int p0) {
    void func_0039AA30();
    func_0039AA30(p0, 0);
}

void func_0039B210(int p0) {
    void func_0039B230();
    func_0039B230(p0, 0);
}

void func_0039BA10(int p0) {
    void func_0039BA30();
    func_0039BA30(p0, 0);
}

void func_0039D820(int p0) {
    void func_00207480();
    func_00207480(3, 123, (p0 + 1104), 16);
}
