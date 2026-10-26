#include "game/mt_rand.h"
void func_00104B80(float *, float *, float *);

extern float D_005BDCD4;

extern float D_005BDCD8;

extern float D_005BDCDC;

void func_00133890(float *, float *, float *);

static inline float frand485(void) { return 2.3283064e-10f * (float)mt_rand(); }

void func_00485F70(char *p, float *out, float t) {
    float v[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float up[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    v[0] = (1.0f - t) * (D_005BDCD4 * (frand485() - 0.5f));
    v[1] = (1.0f - t) * (D_005BDCDC + D_005BDCD8 * (frand485() - 0.5f));
    v[2] = *(float *)(p + 0x158) * t;
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x400), "r"(p + 0x3F0) : "memory");
    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    up[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00133890(m, d, up);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(v), "r"(p + 0x3F0) : "memory");
    out[3] = 1.0f;
}

extern char D_01CAFF0C[];

unsigned int func_002EFB20(int);

char *func_002EFB30(int, unsigned int);

float func_00132470(float *, char *);

int func_00486220(char *p, float *out) {
    float pos[4] __attribute__((aligned(16)));
    float best[4] __attribute__((aligned(16)));
    unsigned int n = func_002EFB20(*(int *)D_01CAFF0C);
    float d;
    float q;
    float min;
    unsigned int i;
    char *o;
    d = min = 0.0f;
    for (i = 0; i < n; i++) {
        o = func_002EFB30(*(int *)D_01CAFF0C, i);
        if (o != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(pos), "r"(*(char **)(o + 0x10) + 0x30) : "memory");
            d = func_00132470(pos, p + 0x50);
        }
        if (i == 0) {
            min = d;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(best), "r"(pos) : "memory");
        } else if (d < min) {
            min = d;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(best), "r"(pos) : "memory");
        }
    }
    if (min > 0.0f) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(out), "r"(best) : "memory");
        return 1;
    }
    return 0;
}

void func_002DFFD0(char *, char *, int, char *, int, float, float, float, float);

void func_00485ED0(char *p, char *q, int c, float x, float y, float z) {
    func_002DFFD0(*(char **)(p + 0x390), q, c, q, 0, x, y, z, *(float *)(q + 0x28));
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00485420(char *);

char *func_00485520(char *p0, float *p1, float *p2, char p3, char p4) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x430, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_00485420(t);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
        r = *b.pp; r[0x18] = 1;
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x3F0), "r"(p1) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x400), "r"(p2) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p1) : "memory");
        *(char *)(ret + 0x150) = p3;
        *(char *)(ret + 0x151) = p4;
        *(char **)(ret + 0x390) = p0;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
    }
    return ret;
}

int func_001AD140();

int func_00485F30(p0) char *p0; {
    char *v0;
    int v1;
    v0 = *(char **)(p0 + 1056);
    if (v0 != 0) {
        *(char *)(v0 + 58) = 1;
        v1 = func_001AD140(*(int *)(p0 + 1056));
    }
    return v1;
}

extern void func_00485EF0();

void func_00486360(char *p) { func_00485EF0(p + -64); }

extern void func_00485490();

void func_00486370(char *p) { func_00485490(p + -64); }

void func_00486380(char *p) { func_00485490(p + -160); }

void func_00485F20(void) {}
