#include "game/mt_rand.h"
void func_00100580(char *);

void func_001003E0(char *, void *, int, int);

void func_0028C1A0(char *, int);

void func_0024FEA0(char *, int);

void func_002E83B0(char *, int);

extern char D_005B9A90[];

extern char D_005B9AB4[];

extern char D_005B9B34[];

extern char D_005B9BC8[];

void func_00401030(char *, int);

void func_0027A660(char *, int);

char *func_004DD450(char *p, short flag) {
    void func_002047C0(void);
    if (p != 0) {
        *(char **)p = D_005B9A90;
        *(char **)(p + 64) = D_005B9AB4;
        *(char **)(p + 160) = D_005B9B34;
        *(char **)(p + 208) = D_005B9BC8;
        func_0028C1A0(p + 4896, -1);
        func_002E83B0(p + 4544, -1);
        func_001003E0(p + 1552, (void *)func_002047C0, 80, 31);
        func_00401030(p + 1472, -1);
        func_0027A660(p + 384, -1);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0034BA60(int, char *, signed char, int, int);

char *func_0027A710(char *);

char *func_00207470(int, int, char *);

void func_002EC050(int, char *, float);

void func_004E0540(char *p, int a, int b, int c, int k) {
    char *e;
    char *o = func_0027A710(p + 0x180);
    e = *(char **)(o + 0x108) + k * 64;
    *(float *)((char *)(k * 4) + (int)p + 0x1638) = *(float *)((char *)(k * 4) + (int)p + 0x1638) - 10.0f;
    func_00207470(3, 0x225, e);
    func_002EC050(1, e + 0x30, 0.0f);
    func_0034BA60(0x3A, e + 0x30, 0x1C, 0, 1);
}

void func_001A20C0(char *, int);

void func_004E05E0(char *p) {
    int i;
    if (*(unsigned char *)(p + 4) != 0) {
        for (i = 0; i < *(unsigned char *)(*(char **)(p + 0x5DC) + 0x11); i++) {
            if (!(*(float *)(p + i * 4 + 0x1638) <= 0.0f)) {
                char *m = *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 0x40;
                *(float *)(p + i * 4 + 0x1638) -= 10.0f;
                func_001A20C0(func_0027A710(p + 0x180), i - 1);
                func_00207470(3, 0x225, m);
                func_002EC050(1, m + 0x30, 0.0f);
                func_0034BA60(0x3A, m + 0x30, 0x1C, 0, 1);
            }
        }
    }
}

void func_00133890(float *, float *, float *);

static inline float frand4DE(void) { return 2.3283064e-10f * (float)mt_rand(); }

void func_004DE570(char *p, int i) {
    float v[4] __attribute__((aligned(16)));
    char *m;
    ((float *)(p + 0x1540))[i] -= *(float *)(p + 0x10);
    m = *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 64;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    *(float *)(m + 0x30) = *(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x850) + 0x104) + 0x30);
    *(float *)(m + 0x34) = *(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x850) + 0x104) + 0x34);
    *(float *)(m + 0x38) = *(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x850) + 0x104) + 0x38);
    *(float *)(m + 0x3C) = 1.0f;
    if (((float *)(p + 0x1540))[i] <= 0.0f) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x850) + 0x104) + 0x20) : "memory");
        v[0] = v[0] * (-1.0f + 0.2f * frand4DE());
        v[1] = 0.0f;
        v[2] = v[2] * (-1.0f + 0.2f * frand4DE());
        func_00133890((float *)m, v, (float *)(m + 0x10));
        ((float *)(p + 0x16B4))[i] = 5.0f + 10.0f * frand4DE();
        ((int *)(p + 0x1828))[i] = 0;
        ((unsigned char *)(p + 0x5EC))[i] = 9;
    }
}

void func_004DE930(char *p, int k) {
    char *m;
    m = *(char **)(func_0027A710(p + 0x180) + 0x108) + k * 0x40;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    *(float *)(m + 0x30) = ((*(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x820) + 0x104) + 0x30) + *(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x8D0) + 0x104) + 0x30)) / 2.0f + 10.0f * frand4DE()) - 5.0f;
    *(float *)(m + 0x34) = (*(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x820) + 0x104) + 0x34) + *(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x8D0) + 0x104) + 0x34)) / 2.0f;
    *(float *)(m + 0x38) = ((*(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x820) + 0x104) + 0x38) + *(float *)(*(char **)(*(char **)(*(char **)(p + 0x5E8) + 0x8D0) + 0x104) + 0x38)) / 2.0f + 10.0f * frand4DE()) - 5.0f;
    *(float *)(m + 0x3C) = 1.0f;
    ((float *)(p + 0x17AC))[k] = *(float *)(*(char **)(p + 0x5E8) + 0x714);
    p[k + 0x5EC] = 8;
}

void func_00100450();

int func_0024FE00();

void func_0027A570();

int func_0028C110();

int func_00291100();

int func_002E8370();

void func_00400FF0();

int func_004DD3B0(p0) int p0; {
    void func_002047C0();
    func_0024FE00();
    *(char **)((char *)p0 + 0) = D_005B9A90;
    *(char **)((char *)p0 + 64) = D_005B9AB4;
    *(char **)((char *)p0 + 160) = D_005B9B34;
    *(char **)((char *)p0 + 208) = D_005B9BC8;
    func_0027A570((p0 + 384));
    func_00400FF0((p0 + 1472));
    func_00100450((p0 + 1552), (char *)func_00291100, (char *)func_002047C0, 80, 31);
    func_002E8370((p0 + 4544));
    func_0028C110((p0 + 4896));
    return p0;
}

void func_004DE560(p0, p1) int p0; int p1; {
    *(char *)((char *)(p1 + p0) + 1516) = 8;
}

void func_004DE920(p0, p1) int p0; int p1; {
    *(char *)((char *)(p1 + p0) + 1516) = 8;
}

void func_004DF0B0(p0, p1) int p0; int p1; {
    *(char *)((char *)(p1 + p0) + 1516) = 8;
}

extern char D_01CAFF0C[];

int func_002F2D30();

int func_004E0740(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(*(char **)D_01CAFF0C + 32);
    if (v1 != 0) {
        v2 = func_002F2D30(v1, v0);
    }
    return v2;
}

extern void func_004DD860();

void func_004E07F0(char *p) { func_004DD860(p + -64); }

extern void func_004E07D0();

void func_004E0800(char *p) { func_004E07D0(p + -64); }

extern void func_004E07E0();

void func_004E0810(char *p) { func_004E07E0(p + -64); }

extern void func_004E0530();

void func_004E0820(char *p) { func_004E0530(p + -64); }

int func_004E07C0(void) { return 0; }
