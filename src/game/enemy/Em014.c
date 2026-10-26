#include "game/mt_rand.h"
extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005AF030[];

extern char D_005AF054[];

extern char D_005AF0D4[];

extern char D_005AF168[];

extern char D_005AF234[];

extern char D_005AF2EC[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_00202FE0();

void func_0024D9A0();

void func_0024FEA0();

void func_002791E0();

void func_0028C1A0();

void func_002E78A0();

void func_002E8A50();

void func_00313E60();

void func_0031E4E0();

void func_00320590();

void func_00401030();

char *func_0038FCE0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AF030;
        *(char **)(p + 64) = D_005AF054;
        *(char **)(p + 160) = D_005AF0D4;
        *(char **)(p + 208) = D_005AF168;
        *(char **)(p + 304) = D_005AF234;
        *(char **)(p + 464) = D_005AF2EC;
        func_001003E0((p + 4080), (void *)func_00202FE0, 96, 5);
        func_00313E60((p + 4044), -1);
        func_002E8A50((p + 4020), -1);
        func_002E78A0((p + 3952), -1);
        func_0028C1A0((p + 3312), -1);
        func_0024D9A0((p + 3104), -1);
        func_00401030((p + 3072), -1);
        func_002791E0((p + 1536), -1);
        if (p + 1328 != 0) {
            *(char **)(p + 1344) = D_005A78F8;
            if (p + 1328 != 0) {
                *(char **)(p + 1344) = D_005A77A0;
            }
        }
        func_001003E0((p + 532), (void *)func_0013D240, 16, 21);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

typedef struct Rng2C {
    float base[4];
    float range[4];
    char pad[0xC];
} Rng2C;

extern Rng2C D_0056C010[];

/* A random value in [base, base + range) from the row of the current state. */
void func_0038F360(unsigned char *p) {
    Rng2C *t = &D_0056C010[p[5]];
    *(float *)(p + 0x428) = t->base[p[0x41B]] + t->range[p[0x41B]] * (2.3283064e-10f * mt_rand());
}

extern char D_01CAFF0C[];

int func_0041D6B0(char *, float);

unsigned int func_002F3020(char *, int);

float func_0041DB20(char *);

unsigned int func_002F2FC0(char *, int);

static inline unsigned char has_8000(char *p) {
    return (*(int *)(p + 0x42C) & 0x8000) != 0;
}

int func_0038F630(char *p) {
    float d;
    float q;
    if (*(int *)(p + 0x110) & 1) {
        return 0;
    }
    if (has_8000(p) == 1) {
        return 0;
    }
    d = func_0041DB20(p + 0x50);
    if (d < 1000.0f) {
        d = 1000.0f;
    }
    q = 1000000.0f / (d * d);
    if ((unsigned char)func_0041D6B0(p + 0x454, q * *(float *)(p + 0x10)) == 0) {
        return 0;
    }
    if (func_002F2FC0(*(char **)(*(char **)D_01CAFF0C + 0x20), 0x80000000)) {
        return 0;
    }
    if (!(func_002F3020(*(char **)(*(char **)D_01CAFF0C + 0x20), *(signed char *)(p + 0x46)) < *(unsigned char *)(p + 0x461))) {
        return 0;
    }
    if (100.0f * (2.3283064e-10f * mt_rand()) > 75.0f) {
        return 0;
    }
    return *(int *)(p + 0x45C) > 0;
}

extern unsigned char D_0056C030[][44];

short func_0038F490(char *p) {
    return (short)(unsigned short)(short)(int)(0.5f + 65536.0f * (*(float *)(p + 16) * (unsigned int)D_0056C030[*(unsigned char *)(p + 5)][*(unsigned char *)(p + 1051)]) / 360.0f);
}

void func_0024DA80(char *, int, int);

void func_0038F300(char *p, int c) {
    if (c == -1) {
        c = *(unsigned char *)(p + 5);
    }
    if (*(unsigned char *)(p + 0x41A) != c) {
        func_0024DA80(p + 0xC20, 0, c);
        *(unsigned char *)(p + 0x41A) = c;
    }
}

void func_0034BA60(int, char *, signed char, int, int);

void func_0038EB10(char *p) {
    func_0034BA60(0x18, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
}

typedef struct { float x, y, z, w; } V4g;

int func_0038EAA0(char *p, int k, V4g *out, float *r) {
    switch (k) {
    case 0:
        *out = *(V4g *)(p + 0x50);
        *r = 150.0f;
        out->y += 150.0f;
        return 1;
    }
    return 0;
}

void func_001AD140(char *);

void func_002F2D30(char *, char *);

void func_0041D670(char *);

void func_0038E6F0(char *p) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2D30(g, p);
    }
    *(int *)(p + 0x110) = 0;
    if (*(char **)(p + 0x43C) != 0) {
        func_001AD140(*(char **)(p + 0x43C));
        *(char **)(p + 0x43C) = 0;
    }
    func_0041D670(p + 0x410);
}

extern char D_01DFABA0[];

char *func_00207480(int, int, char *, int);

void func_003305E0(char *, int, int, int, int, int, int);

void func_0038E9E0(char *p) {
    char *e;
    if (*(int *)(p + 0x410) != 0) {
        func_0041D670(p + 0x410);
        e = func_00207480(3, 0xE9, 0, 16);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x4E0) + 0x104);
            e[0x9A] = 1;
            e[0x3A] = 1;
            e[0x9C] = 0x40;
            e[0x9D] = 0x20;
            *(unsigned char *)(e + 0x9E) = 0x80;
            e[0x9B] = 2;
        }
        func_003305E0(D_01DFABA0, 0, 0x5C, (int)(p + 0x50), 0, 0, 0);
    }
}

void func_0038E8F0(char *p) {
    char *q;
    char *e;
    if (*(int *)(p + 0x410) == 0) {
        *(char **)(p + 0x410) = func_00207480(3, 0x2D0, 0, 16);
        q = *(char **)(p + 0x410);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x4E0) + 0x104);
            q[0x9A] = 1;
            *(*(char **)(p + 0x410) + 0x3A) = 1;
        }
        e = func_00207480(3, 0xDC, 0, 16);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x4E0) + 0x104);
            e[0x9A] = 1;
            e[0x3A] = 1;
            e[0x9C] = 0x40;
            e[0x9D] = 0x20;
            *(unsigned char *)(e + 0x9E) = 0x80;
            e[0x9B] = 2;
        }
        func_003305E0(D_01DFABA0, 0, 0x5A, (int)(p + 0x50), 0, 0, 0);
    }
}

void func_00105300(char *, char *);

void func_00104B80(char *, char *, char *);

short func_00131D10(float, float);

float func_00131BA0(int);

float func_00131C20(int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_00104C00(char *, char *, char *);

int func_001F9A70(int, char *, float);

#define QCOPYR(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

static inline unsigned char func_0038E760_f(char *p) {
    return (*(int *)(p + 0x42C) & 0x4000000) != 0;
}

static inline char *func_0038E760_g(void) {
    return *(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548;
}

void func_0038E760(char *p) {
    float v[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    int i;
    *(float *)(p + 0x5C) = 1.0f;
    QCOPYR(v, p + 0xEC0);
    v[3] = 1.0f;
    {
        char *src = p + 0xE90;
        func_00105300((char *)m, src);
    }
    func_00104B80(p + 0x50, (char *)m, p + 0x50);
    if (func_0038E760_f(p) == 1) {
        *(float *)(p + 0x54) = *(float *)(p + 0x54) - 25.0f;
    }
    d[0] = func_00131BA0(*(short *)(p + 0x90));
    d[1] = 0.0f;
    d[2] = func_00131C20(*(short *)(p + 0x90));
    d[3] = 0.0f;
    func_00104B80((char *)d, (char *)m, (char *)d);
    *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
    for (i = 0; i < 20; i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x4DC) != 0 && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x4DC) + 0x104) != 0) {
            func_00104C00(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x4DC) + 0x104), (char *)m, *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x4DC) + 0x104));
            *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x4DC) + 0x104) + 0x3C) = 1.0f;
        }
    }
    QCOPY(p + 0xE0, v);
    QCOPYR(p + 0xF0, p + 0xF00);
    if ((unsigned char)func_001F9A70(*(int *)(func_0038E760_g() + 8), p + 0x50, 1000.0f) == 0) {
        func_001AD140(p);
    }
}

void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

void func_001318E0(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_0038D0C0(char *p) {
    QCOPY(p + 0x370, p + 0x50);
    QCOPY(p + 0x380, p + 0x50);
    *(unsigned char *)(p + 0x390) = 0;
    *(float *)(p + 0x3A0) = 0.0f;
    *(float *)(p + 0x3A4) = 0.0f;
    *(float *)(p + 0x3A8) = 0.0f;
    *(float *)(p + 0x3AC) = 1.0f;
    *(float *)(p + 0x3B0) = 0.0f;
    *(float *)(p + 0x3B4) = 0.0f;
    *(float *)(p + 0x3B8) = 0.0f;
    *(float *)(p + 0x3BC) = 1.0f;
    *(float *)(p + 0x3C0) = 1.0f;
    *(float *)(p + 0x3C4) = 1.0f;
    *(float *)(p + 0x3C8) = 1.0f;
    *(float *)(p + 0x3CC) = 1.0f;
    UNIT(p + 0x3D0);
    func_00131700(p + 0x3D0, p + 0x3D0, p + 0x3B0);
    func_00105230(p + 0x3D0, p + 0x3D0, p + 0x3A0);
    func_001318E0(p + 0x3D0, p + 0x3D0, p + 0x3C0);
    *(int *)(p + 0x410) = 0;
    *(int *)(p + 0x414) = 0;
    *(unsigned char *)(p + 0x418) = 0;
    *(unsigned char *)(p + 0x419) = 0;
    *(unsigned char *)(p + 0x41A) = 0xFF;
    *(unsigned char *)(p + 0x41B) = 0;
    *(float *)(p + 0x41C) = 300.0f;
    *(float *)(p + 0x420) = 1.0f;
    *(int *)(p + 0x424) = 0;
    *(int *)(p + 0x428) = 0;
    *(int *)(p + 0x42C) = 0;
    *(float *)(p + 0x430) = 1.0f;
    *(float *)(p + 0x434) = 300.0f;
    *(int *)(p + 0x438) = 0;
    *(int *)(p + 0x43C) = 0;
    *(float *)(p + 0x440) = 50.0f;
    *(float *)(p + 0x444) = 300.0f;
    *(int *)(p + 0x448) = 0;
    *(int *)(p + 0x44C) = 0;
    *(int *)(p + 0x450) = 0;
    *(float *)(p + 0x454) = 300.0f;
    *(int *)(p + 0x458) = 0;
    *(int *)(p + 0x45C) = 5;
    *(unsigned char *)(p + 0x460) = 0;
    *(unsigned char *)(p + 0x461) = 5;
}

void func_00206730();

void func_0038FE50();

void func_0038D040(int p0) {
    func_0038FE50((p0 + 1084));
    func_00206730((p0 + 1040));
}

void func_001AD100(char *);

void func_0038CFA0(char *p) {
    void func_0038D070(char *);
    void func_0038DD00(char *);
    void func_0038E490(char *);
    func_001AD100(p);
    *(float *)(p + 0x420) = *(float *)(p + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x370), "r"(p + 0x50) : "memory");
    *(int *)(p + 0x110) = 0;

    switch ((unsigned char)*(unsigned char *)(p + 4)) {
    case 0:
        func_0038D070(p);
        break;
    case 1:
        func_0038DD00(p);
        break;
    case 2:
        func_0038E490(p);
        break;
    case 3:
        break;
    }
}

int func_0038F250(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    tmp0 = 2;
    v0 = 0;
    if (tmp0 == *(unsigned char *)(p0 + 4)) {
        return v0;
    } else {
        v1 = 0;
        tmp1 = 3;
        if (tmp1 == *(unsigned char *)(p0 + 333)) {
            return v1;
        } else {
            v2 = 0;
            if (*(float *)(p0 + 3940) <= 0.0f) {
                return v2;
            } else {
                v3 = *(int *)(p0 + 1068);
                v3 = (v3 & 32768);
                v3 = (v3 != 0);
                v3 = (v3 != 0);
                return v3;
            }
        }
    }
}

int func_0038F2C0(p0, p1) char *p0; int p1; {
    if (*(float *)(p0 + 3940) > 0.0f) {
        if (*(unsigned char *)(p0 + 5) != p1) {
            *(char *)(p0 + 5) = p1;
            *(char *)(p0 + 6) = 0;
            *(char *)(p0 + 7) = 0;
        }
    }
}

int func_0038FCB0(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 2) + p0) + 1244);
}

extern void func_0038FCC0();

void func_0038FEA0(char *p) { func_0038FCC0(p + -64); }

extern void func_0038FCD0();

void func_0038FEB0(char *p) { func_0038FCD0(p + -64); }

extern void func_0038EA90();

void func_0038FED0(char *p) { func_0038EA90(p + -64); }

extern void func_0038EB30();

void func_0038FEF0(char *p) { func_0038EB30(p + -64); }

extern void func_0038EB00();

void func_0038FF00(char *p) { func_0038EB00(p + -64); }

extern void func_0038EBB0();

void func_0038FF10(char *p) { func_0038EBB0(p + -64); }

extern void func_0038F1C0();

void func_0038FF50(char *p) { func_0038F1C0(p + -304); }

extern void func_0038EBA0();

void func_0038FF80(char *p) { func_0038EBA0(p + -304); }

void func_0038FFA0(char *p) { func_0038EB30(p + -304); }

void func_0038FFB0(char *p) { func_0038EB00(p + -304); }
