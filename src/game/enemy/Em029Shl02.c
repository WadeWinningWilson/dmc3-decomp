#include "game/mt_rand.h"
short func_0034B940(char *, char *);

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];

float func_0041DB20(char *);

static inline float frand3D1(void) { return 2.3283064e-10f * (float)mt_rand(); }

void func_003D18E0(char *p) {
    void func_0041E190(char *, char *, float);
    float v[4] __attribute__((aligned(16)));
    float r;
    v[1] = 60.0f;
    v[0] = 0.0f;
    v[2] = 150.0f;
    v[3] = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 30.0f;
    *(float *)(p + 0x68) = 20.0f;
    *(float *)(p + 0x6C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(*(char **)(p + 0x194) + 0x104) + 0x30) : "memory");
    func_0041E190((char *)v, (char *)v, 6.283185f * ((float)*(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(v) : "memory");
    r = 20.0f * frand3D1();
    *(float *)(p + 0x68) = func_0041DB20(p + 0x50) / (65.0f + r);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    if (*(int *)(p + 0xB88) == 5) {
        *(float *)(p + 0xB70) = 0.0f;
        *(float *)(p + 0xB74) = 0.0f;
        *(float *)(p + 0xB78) = 0.0f;
        *(float *)(p + 0xB7C) = 1.0f;
    } else {
        *(float *)(p + 0xB70) = 0.0f;
        *(float *)(p + 0xB74) = 0.0f;
        *(float *)(p + 0xB78) = 300.0f;
        *(float *)(p + 0xB7C) = 1.0f;
        func_0041E190(p + 0xB70, p + 0xB70, 6.283185f * (60.0f * (float)*(unsigned int *)(p + 0xB88) / 360.0f));
    }
}

extern char D_01CAFF0C[];

void func_003D14C0(char *p) {
    void func_0041E190(float *, float *, float);
    float v[4] __attribute__((aligned(16)));
    float d;
    v[1] = 60.0f;
    v[0] = 0.0f;
    v[2] = 150.0f;
    v[3] = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 30.0f;
    *(float *)(p + 0x68) = 20.0f;
    *(float *)(p + 0x6C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(*(char **)(p + 0x194) + 0x104) + 0x30) : "memory");
    func_0041E190(v, v, 6.283185f * ((float)*(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(v) : "memory");
    d = func_0041DB20(p + 0x50);
    if (!(d <= 4000.0f)) d = 4000.0f;
    if (d < 1000.0f) d = 1000.0f;
    *(float *)(p + 0x68) = d / (85.0f - (float)(*(unsigned int *)(p + 0xB88) * 2));
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    *(short *)(p + 0x90) = *(short *)(p + 0x90) - 0x222;
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + (short)(*(unsigned int *)(p + 0xB88) % 3 * 0x222);
    *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
}

void func_003D1B90(char *p) {
    void func_0041E190(float *, float *, float);
    float v[4] __attribute__((aligned(16)));
    unsigned char n;
    float d;
    n = *(unsigned int *)(p + 0xB88) & 0xF;
    v[1] = 60.0f;
    v[2] = 150.0f;
    v[0] = 0.0f;
    v[3] = 1.0f;
    *(int *)(p + 0x60) = 0;
    *(float *)(p + 0x64) = 30.0f;
    *(float *)(p + 0x68) = 20.0f;
    *(float *)(p + 0x6C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(*(char **)(p + 0x194) + 0x104) + 0x30) : "memory");
    func_0041E190(v, v, 6.283185f * ((float)*(short *)(*(char **)(p + 0xD0) + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x50), "r"(v) : "memory");
    d = func_0041DB20(p + 0x50);
    if (!(d <= 4000.0f)) {
        d = 4000.0f;
    }
    if (d < 1000.0f) {
        d = 1000.0f;
    }
    switch (*(unsigned int *)(p + 0xB88) >> 4) {
    case 0:
        *(float *)(p + 0x68) = d / (85.0f - (float)(n * 2));
        break;
    case 1:
        *(float *)(p + 0x68) = d / (80.0f - (float)(n * 2));
        break;
    case 2:
        *(float *)(p + 0x68) = d / (75.0f - (float)(n * 2));
        break;
    }
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
    *(short *)(p + 0x90) = *(short *)(p + 0x90) - 0x400;
    *(short *)(p + 0x90) = *(short *)(p + 0x90) + (short)(n << 10);
    *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
}

char *func_00279290(char *);

void func_00206730(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

int func_0041D600(char *p);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_001A5C30(char *);

void func_001A5D00(char *);

void func_0041D840(char *a, char *b, float s);

void func_003D16B0(char *);

void func_003D13B0(char *p) {
    char *b;
    if ((unsigned char)func_0041D600(p) != 0) {
        if (*(unsigned char *)(*(char **)(p + 0xD0) + 0x976) == 0) {
            func_001A5C30(func_00279290(p + 0x240));
        } else {
            func_001A5D00(func_00279290(p + 0x240));
        }
        func_001AD100(p);
        func_00206730(p + 0xB80);
        *(unsigned char *)(p + 0xB91) = 0;
        switch (*(int *)(p + 0xB84)) {
        case 0:
        case 1:
        case 2:
            func_003D16B0(p);
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x1B0, 1.0f);
        if (*(unsigned char *)(p + 0xB91) & 1) {
            func_0028C5C0(p + 0x8F0, 0, 1.0f);
        }
        if (*(unsigned char *)(p + 0xB91) & 2) {
            func_00195E20(D_005BE098, p);
        }
    }
}

void func_001AD140(char *);

int func_0041D6B0(float *x, float d);

char *func_00207480(int, int, char *, int);

void func_0041D6E0(char *, char *, int, float);

void func_003D1DE0(char *);

void func_0034B8C0(char *, short *, int);

void func_0041D7F0(char *, float);

void func_0041D9E0(float *, char *, char *);

void func_003D16B0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    short s;
    unsigned int f;
    int b;
    char *q;
    switch (*(unsigned char *)(p + 0xB90)) {
    case 0:
        { char *m = p + 0x1F0; func_00207480(3, 0x249, m, 0x10); }
        *(float *)(p + 0xB8C) = 200.0f;
        *(unsigned char *)(p + 0xB90) = 1;
    case 1:
        *(unsigned char *)(p + 0xB91) = *(unsigned char *)(p + 0xB91) | 3;
        if (*(char **)(p + 0x96C) != 0) {
            f = *(unsigned int *)(*(char **)(p + 0x96C) + 8);
            b = 0;
            if (f & 0x40) {
                b = 1;
            }
            if ((f & 0x20000) && *(float *)(p + 0x64) < 0.0f) {
                b = 1;
            }
            if (b) {
                func_003D1DE0(p);
                *(int *)(p + 0x60) = 0;
                *(int *)(p + 0x64) = 0;
                *(int *)(p + 0x68) = 0;
                *(float *)(p + 0x6C) = 1.0f;
                *(float *)(p + 0xB8C) = 30.0f;
                *(unsigned char *)(p + 0xB90) = 2;
            }
        }
        if (*(unsigned char *)(p + 0xB92) == 1 && !(*(float *)(p + 0xB8C) <= 160.0f)) {
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0xB70), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
            s = func_0034B940((char *)v, p + 0x50);
            s = s - *(short *)(p + 0x90);
            func_0034B8C0(p + 0x90, &s, 0xB6);
        }
    case 2:
        if ((unsigned char)func_0041D6B0((float *)(p + 0xB8C), *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
    }
    if (*(unsigned char *)(p + 0xB90) == 1) {
        func_0041D7F0(p + 0x64, -1.0f * *(float *)(p + 0x10));
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(w), "r"(p + 0x50) : "memory");
        *(float *)(p + 0x80) = 0.0f;
        q = p;
        if (q != 0) {
            q += 0x40;
        }
        func_0041D6E0(q, p + 0x60, 1, *(float *)(p + 0x10));
        func_0041D9E0(w, p + 0x50, p + 0x80);
    }
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

typedef struct { float f[4]; } SF4;

char *func_003D1F90(char *sc, char *pa, char *pb, char *pc, char *pd, char *pe) {
    void func_003D2180(char *);
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xB80, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xB80, t);
        if (r != 0) {
            func_003D2180(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o != 0) {
        *(signed char *)(o + 0x150) = *(signed char *)sc;
        *(SF4 *)(o + 0x160) = *(SF4 *)(sc + 0x10);
        *(short *)(o + 0x170) = *(short *)(sc + 0x20);
        *(unsigned short *)(o + 0x172) = *(unsigned short *)(sc + 0x22);
        *(unsigned short *)(o + 0x174) = *(unsigned short *)(sc + 0x24);
        *(SF4 *)(o + 0x178) = *(SF4 *)(sc + 0x28);
        *(char **)(ret + 0x190) = pa;
        *(char **)(ret + 0xD0) = pb;
        *(char **)(ret + 0x194) = pc;
        *(char **)(ret + 0xB58) = pd;
        *(char **)(ret + 0xB5C) = pe;
    }
    return ret;
}

void func_0028C740();

void func_0041D670();

void func_003D1E80(p) char *p; {
    func_0028C740(p + 2288);
    func_0041D670(p + 2944);
}

extern void func_003D0F10();

void func_003D1F60(char *p) { func_003D0F10(p + -64); }

extern void func_003D1EB0();

void func_003D1F70(char *p) { func_003D1EB0(p + -64); }

void func_003D1F80(char *p) { func_003D1EB0(p + -160); }
