#include "game/mt_rand.h"
extern "C" char D_01CAFF0C[];

extern "C" char D_00645A30[];

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_0013D6A0(char *);

extern "C" void func_004DD3B0(char *);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_002F2E30(char *, char *);

class O4DD {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual float m1C();
};

typedef struct { float f[4]; } SF4;

static inline char *ent10(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(t + i * 4 + 8) == 0) { r = 0; } else { r = t + *(int *)(t + i * 4 + 8); } return r; }

static inline char *gch(char *m, int i) { char *r; if (*(unsigned short *)*(char **)(m + 8) == 0) { r = ent10(*(char **)(m + 0xC), i); } else { r = *(char **)(m + 0xC); } return r; }

extern "C" char *func_004DD520(char *p0, char p1) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    char *o;
    char *v;
    char *w;
    float f;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x21B0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_004DD3B0(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x6, **q);
        (**q)[0x18] = 1;
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
    if (ret != 0) {
        *(char **)(ret + 0x5E8) = p0;
        o = ret;
        *(signed char *)(o + 0x130) = *(signed char *)(p0 + 0x7B0);
        *(SF4 *)(o + 0x140) = *(SF4 *)(p0 + 0x7C0);
        *(short *)(o + 0x150) = *(short *)(p0 + 0x7D0);
        *(unsigned short *)(o + 0x152) = *(unsigned short *)(p0 + 0x7D2);
        *(unsigned short *)(o + 0x154) = *(unsigned short *)(p0 + 0x7D4);
        *(SF4 *)(o + 0x158) = *(SF4 *)(p0 + 0x7D8);
        *(char **)(ret + 0x170) = *(char **)(p0 + 0x7F0);
        *(char **)(ret + 0x5E0) = gch(*(char **)(p0 + 0x7F0), 4);
        *(char **)(ret + 0x5DC) = gch(*(char **)(p0 + 0x7F0), 5);
        *(char **)(ret + 0x5E4) = gch(*(char **)(p0 + 0x7F0), 6);
        *(char *)(ret + 0x21A7) = p1;
        *(char *)(ret + 0x46) = 0x1B;
        v = *(char **)(*(char **)D_01CAFF0C + 4);
        if (v != 0 && (w = *(char **)(v + 0x10)) != 0) {
            f = ((O4DD *)w)->m1C();
        } else {
            f = 0.0f;
        }
        *(float *)(ret + 0x21A8) = f;
        {
            char *x = *(char **)(*(char **)D_01CAFF0C + 0x20);
            char *r = ret;
            if (x != 0) func_002F2E30(x, r);
        }
    }
    return ret;
}

extern "C" char *func_00207470(int, int, char *);

extern "C" void func_0034BA60(int, char *, int, int, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" char *func_0027A710(char *);

extern "C" char *func_002D9F00(char *, int);

extern "C" void func_00104C00(char *, char *, char *);

extern "C" float func_001324E0(float *);

extern "C" int func_0024D850(char *);

extern "C" void func_00133450(char *, float *, char *);

static inline float frand4E0(void) { return 2.3283064e-10f * (float)mt_rand(); }

static inline int chk4E0(void) { char *o = *(char **)(*(char **)D_01CAFF0C + 0xC); unsigned char r; if (o == 0) return 0; if (*(unsigned char *)(o + 0x28A7) == 0) r = 0; else r = 1; return r; }

extern "C" void func_004E01F0(char *p, int i) {
    float v[4];
    float d[4] __attribute__((aligned(16)));
    char *o;
    char *m;
    float f;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    m = *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 64;
    func_00104C00(m, func_002D9F00(o, 2), p + i * 64 + 0x18B0);
    *(float *)(m + 0x3C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(m + 0x30), "r"(o + 0x50) : "memory");
    d[1] = 0.0f;
    if (!(func_001324E0(d) <= 50.0f)) {
        ((unsigned char *)(p + 0x5EC))[i] = 9;
        return;
    }
    ((signed char *)(p + 0x2187))[i] -= (signed char)func_0024D850(o);
    if (((signed char *)(p + 0x2187))[i] < 0) {
        v[1] = 1.0f;
        v[0] = 0.0f;
        v[2] = 0.0f;
        v[3] = 0.0f;
        func_00133450(m, v, m + 0x20);
        ((float *)(p + 0x16B4))[i] = 1.0f + frand4E0();
        ((unsigned char *)(p + 0x5EC))[i] = 8;
        return;
    }
    ((float *)(p + 0x1540))[i] -= *(float *)(p + 0x10);
    f = ((float *)(p + 0x1540))[i];
    if (f < 0.0f) {
        func_0028C910(p + 0x1320);
        if (func_0028C3A0(p + 0x1320, 0, -1, *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 64) != 0) {
            ((float *)(p + 0x1638))[i] -= 10.0f;
            func_00207470(3, 0x226, *(char **)(func_0027A710(p + 0x180) + 0x108) + i * 64);
            func_0034BA60(0x3C, m + 0x30, 0x1C, 0, 1);
        } else {
            ((unsigned char *)(p + 0x5EC))[i] = 9;
        }
    }
    if (chk4E0() != 0) {
        ((unsigned char *)(p + 0x5EC))[i] = 9;
    }
}

extern "C" {
int func_003F3A90(char *);
}

extern "C" {
int func_004DE0B0(char *);
}

class V130_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual int m(void);
};

extern "C" {
int func_004DE040(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_003F3A90((v0 + 1512));
    v2 = *(unsigned char *)(v0 + 4);
    switch (v2) {
    default:
        return v1;
    case 0:
        tmp0 = ((V130_0_i *)v0)->m();
        return tmp0;
    case 1:
        v3 = func_004DE0B0(v0);
        return v3;
    }
}
}

class VCC_1_pi {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual int m(char *);
};

extern "C" {
int func_004E0700(char *p0) {
    char stk[0x40] __attribute__((aligned(16)));
    int tmp0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -16) + 16)) : "memory");
    p0 = (p0 + 384);
    tmp0 = ((VCC_1_pi *)p0)->m(((stk + -16) + 16));
    return tmp0;
}
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

class VD0_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void m(void);
};

extern "C" {
int func_004E0780(int p0) {
    int tmp0;
    ((VD0_0_v *)(p0 + 384))->m();
    tmp0 = ((V14_0_i *)(p0 + 1472))->m();
    return tmp0;
}
}
