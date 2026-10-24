/* Hand-matched C++ (virtual calls), part 7: functions whose callee prototypes conflict
 * with declarations in vcalls.cpp .. vcalls6.cpp. */
typedef struct { short s0; short s2; short s4; short s6; float f8; float fC; float f10; float f14; float f18; float f1C; float f20; unsigned char b24; } E3A1;
typedef struct { float v[4]; } F3A1;
extern "C" E3A1 D_00563FB0 __attribute__((aligned(16)));
extern "C" E3A1 D_00563FE0 __attribute__((aligned(16)));
extern "C" E3A1 D_00564010 __attribute__((aligned(16)));
extern "C" E3A1 D_00564040 __attribute__((aligned(16)));
extern "C" F3A1 D_00564070 __attribute__((aligned(16)));
extern "C" short D_00563DC0[];
extern "C" void func_003A0CD0(char *, short);
extern "C" unsigned char func_0024E800(char *);
extern "C" void func_0024DA80(char *, int, int);
extern "C" void func_0039D800(char *);
extern "C" void func_003A0F20(char *);
extern "C" unsigned char func_003A2080(char *, char *, float, float);
extern "C" unsigned char func_0039DDF0(char *, float);
static inline void play3A1(char *p, int s) { *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC); *(short *)(p + 0x2DDC) = s; func_0024DA80(p + 0x29D0, 0, s); func_0024DA80(p + 0x2AA0, 0, s); }
static inline void xz3A1(char *v, float x, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = 0.0f; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }
static inline unsigned char both3A1(char *p) { unsigned char r; if (func_0024E800(p + 0x29D0) == 1 && func_0024E800(p + 0x2AA0) == 1) r = 1; else r = 0; return r; }
class V3A1 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8();
    virtual int m1BC();
};

typedef struct { unsigned char b0; short s2; short s4; short s6; short s8; short sA; float fC; float f10; float f14; float f18; float f1C; float f20; float f24; float f28; float f2C; float f30; float f34; float f38; } G3A1;
extern "C" G3A1 D_00564080 __attribute__((aligned(16)));
extern "C" G3A1 D_005640C0 __attribute__((aligned(16)));
extern "C" G3A1 D_00564100 __attribute__((aligned(16)));
extern "C" G3A1 D_00564140 __attribute__((aligned(16)));
extern "C" G3A1 D_00564180 __attribute__((aligned(16)));
extern "C" G3A1 D_005641C0 __attribute__((aligned(16)));
extern "C" void func_003A1180(char *);
extern "C" char *D_005BDC30;
extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" void func_0028C3A0(char *, int, int, char *);
extern "C" void func_004B7F80(char *, int);
extern "C" int func_002DA0B0(char *, int);
extern "C" void func_00496570(char *);
extern "C" void func_004962A0(char *);
extern "C" int func_0033DA60(char *);
extern "C" int func_0011FA58(float);
extern "C" int func_00100330(int, int);
extern "C" void func_00104B80(float *, char *, char *);
extern "C" void func_00104C00(char *, int, char *);
extern "C" char *func_002F7C10(int, int);
extern "C" char D_01DFABA0[];
extern "C" int D_00578A50[];
extern "C" char *func_00207480(int, int, char *, int);
extern "C" void func_001AD140(char *);
extern "C" void func_003305E0(char *, int, int, float *, int, int, int);
extern "C" void func_0028C790(char *, int);
extern "C" void func_0034C3E0(int);

static inline void set3A1(char *v, float x, float y, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = y; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }

extern "C" unsigned char func_003A1890(char *p, int k) {
    G3A1 a __attribute__((aligned(16))) = D_00564080;
    G3A1 b __attribute__((aligned(16))) = D_005640C0;
    G3A1 c __attribute__((aligned(16))) = D_00564100;
    G3A1 d __attribute__((aligned(16))) = D_00564140;
    G3A1 f __attribute__((aligned(16))) = D_00564180;
    G3A1 g __attribute__((aligned(16))) = D_005641C0;
    G3A1 *t[6] = { &a, &b, &c, &d, &f, &g };
    G3A1 *e;
    e = t[(unsigned char)k];
    *(unsigned char *)(p + 0x2DE8) = 0;
    if (e->b0 > 0) func_003A0CD0(p, D_00563DC0[e->b0]);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        play3A1(p, e->s4);
        *(unsigned char *)(p + 6) = 1;
        *(unsigned char *)(p + 0x2DE0) = 0;
        break;
    case 1:
        if (both3A1(p) == 1) {
            play3A1(p, e->s6);
            *(unsigned char *)(p + 6) = 0xA;
            set3A1(p + 0x60, 0.0f, e->fC, 0.0f);
            set3A1(p + 0x70, e->f14, e->f10, e->f18);
            set3A1(p + 0x2E00, e->f1C, 0.0f, e->f20);
            *(unsigned char *)(p + 0x2DE3) = 0;
            *(unsigned char *)(p + 0x2DE4) = 0;
        }
        break;
    case 0xA:
        *(unsigned char *)(p + 6) = 0xB;
    case 0xB:
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(unsigned char *)(p + 6) = 0x14;
            set3A1(p + 0x70, e->f2C, e->f24, e->f30);
            set3A1(p + 0x2E00, e->f34, e->f28, e->f38);
        }
        break;
    case 0x14:
        *(unsigned char *)(p + 6) = 0x15;
        play3A1(p, e->s8);
    case 0x15:
        if ((unsigned char)((V3A1 *)p)->m1BC() == 1) {
            *(unsigned char *)(p + 6) = 0x1E;
            play3A1(p, e->sA);
            func_0039D800(p);
            *(unsigned char *)(p + 0x2DE3) = 1;
            *(unsigned char *)(p + 0x2DE4) = 1;
        }
        break;
    case 0x1E:
        *(unsigned char *)(p + 6) = 0x1F;
        *(float *)(p + 0x60) = 0.0f; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 0x1F:
        if (func_0039DDF0(p, 85.0f) != 1 && both3A1(p) == 1) {
            *(unsigned char *)(p + 6) = 0x28;
            return 1;
        }
        break;
    case 0x28:
        return 1;
    }
    if (!(*(unsigned char *)(p + 6) < 0xA) && *(unsigned char *)(p + 6) < 0x1F) {
        func_003A0F20(p);
        func_003A1180(p);
    }
    return 0;
}

class O4B6E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual void m2C(char *, char *);
    virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C();
    virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC();
    virtual void mB0(char *, char *);
};

static inline char *ent4B6(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch4B6(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent4B6(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_004B6E40(char *p) {
    char *x;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(char **)(p + 0x7C0) = gch4B6(*(char **)(p + 0x1B0), 0);
    if (*(unsigned char *)(p + 0xA34) == 0) x = gch4B6(*(char **)(p + 0x1B0), 2);
    else x = gch4B6(*(char **)(p + 0x1B0), 3);
    *(char **)(p + 0x7C4) = gch4B6(*(char **)(p + 0x1B0), 0x13);
    ((O4B6E *)(p + 0x1C0))->m2C(x, *(char **)(p + 0x7C0));
    ((O4B6E *)(p + 0x1C0))->mB0(*(char **)(p + 0x7C4), p + 0x1B4);
    *(unsigned char *)(p + 0xA5E) = 5;
    *(unsigned char *)(p + 0xA5F) = 0;
    *(short *)(p + 0xA60) = 0;
    *(unsigned char *)(p + 0xA70) = 2;
    *(float *)(p + 0xA80) = 0.0f;
    *(float *)(p + 0xA84) = 100.0f;
    *(float *)(p + 0xA88) = 0.0f;
    *(float *)(p + 0xA8C) = 1.0f;
    *(float *)(p + 0xA90) = 50.0f;
    func_0028C200(p + 0x7D0, p + 0xA5E, p + 0xA70, 3, D_005BDC30, p, 0);
    *(int *)(p + 0x8A8) = 0x35000;
    *(float *)(p + 0x8B4) = 1.0f;
    *(unsigned char *)(p + 0x7D3) = 1;
    func_0028C8E0(p + 0x7D0, 7);
    func_0028C910(p + 0x7D0);
    func_0028C3A0(p + 0x7D0, 0, -1, p + 0x170);
    *(unsigned char *)(p + 0xA5E) = 4;
    *(float *)(p + 0x50) = 0.0f;
    *(float *)(p + 0x54) = 0.0f;
    *(float *)(p + 0x58) = 0.0f;
    *(float *)(p + 0x5C) = 1.0f;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 0.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 0.0f;
    *(float *)(p + 0xA40) = 0.0f;
    *(float *)(p + 0xA44) = 0.0f;
    *(float *)(p + 0xA48) = 0.0f;
    *(float *)(p + 0xA4C) = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x170) : "memory");
    *(short *)(p + 0xAD4) = 0;
    *(short *)(p + 0x90) = 0;
    *(short *)(p + 0xAD6) = 0;
    *(float *)(p + 0x1A0) = *(float *)(p + 0x50);
    *(float *)(p + 0x1A4) = *(float *)(p + 0x54);
    *(float *)(p + 0x1A8) = *(float *)(p + 0x58);
    *(short *)(p + 0xA5A) = -1;
    func_004B7F80(p, 0);
    *(unsigned char *)(p + 0xA5C) = 1;
    (*(unsigned char *)(p + 4))++;
}

class V495 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C();
    virtual void g120(float *);
    virtual void d124(); virtual void d128(); virtual void d12C(); virtual void d130();
    virtual char *g134(int);
};

extern "C" void func_00495A70(char *p) {
    float v[4] __attribute__((aligned(16)));
    float f;
    unsigned char ok;
    char *o;
    if ((unsigned char)func_002DA0B0(*(char **)(p + 0x3F0), 9) == 2) {
        func_00496570(p);
        return;
    }
    if ((*(float *)(p + 0x37C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_004962A0(p);
        return;
    }
    if ((*(float *)(p + 0x380) -= *(float *)(p + 0x10)) < 0.0f) {
        func_00496570(p);
        return;
    }
    ok = 1;
    if (*(char **)(p + 0x3F4) == 0) {
        func_004962A0(p);
        return;
    }
    if ((unsigned char)func_0033DA60(*(char **)(p + 0x3F4)) == 0) {
        func_004962A0(p);
        return;
    }
    if (ok == 1) {
        f = -1.0f;
        (*(V495 **)(p + 0x3F4))->g120(&f);
        if (func_00100330(func_0011FA58(f), 0) != 0) {
            func_004962A0(p);
            return;
        }
        o = (*(V495 **)(p + 0x3F4))->g134(*(unsigned char *)(p + 0x373));
        if (o == 0) {
            func_004962A0(p);
            return;
        }
    }
    if (ok) {
        func_00104B80(v, *(char **)(o + 0x104), p + 0x390);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3B0) : "memory");
        func_00104C00(p + 0x3B0, *(int *)(o + 0x104), p + 0x3B0);
        *(float *)(p + 0x3E0) = v[0];
        *(float *)(p + 0x3E4) = v[1];
        *(float *)(p + 0x3E8) = v[2];
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x3E0);
    *(float *)(p + 0x54) = *(float *)(p + 0x3E4);
    *(float *)(p + 0x58) = *(float *)(p + 0x3E8);
}

class O451 {
public:
    virtual void d8();
    virtual void gC(int);
};

static inline void col451(unsigned char *o, int r, int g, int b) {
    o[0x9C] = r;
    o[0x9D] = g;
    o[0x9E] = b;
    o[0x9B] = 2;
}

extern "C" int func_004514E0(char *p) {
    float v[4] __attribute__((aligned(16)));
    O451 *o;
    int i;
    if (*(unsigned char *)(p + 0xE5) != 0) {
        *(unsigned char *)(p + 0xE5) = 0;
        func_00207480(3, 0x1EA, p + *(unsigned char *)(p + 0xEA) * 64 + 0x120, 0x40);
        if (*(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320) != 0) {
            func_001AD140(*(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320));
            *(char **)((char *)(*(unsigned char *)(p + 0xEA) * 4) + (int)p + 0x320) = 0;
        }
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(p + *(unsigned char *)(p + 0xEA) * 64 + 0x120) : "memory");
        v[3] = 1.0f;
        func_003305E0(D_01DFABA0, 8, 0xA, v, 0x29, 0, 0);
        *(unsigned char *)((char *)*(unsigned char *)(p + 0xEA) + (int)p + 0xDD) = 1;
        o = (O451 *)func_002F7C10(D_00578A50[*(unsigned char *)(p + 0xEA)], 0);
        if (o != 0) o->gC(0);
        func_0028C790(p + 0x340, 0);
        func_0034C3E0(0);
        (*(unsigned char *)(p + 0xEC))++;
        if (*(unsigned char *)(p + 0xEC) >= 2) {
            for (i = 0; i < 8; i++) {
                if (*(unsigned char *)((char *)i + (int)p + 0xDD) == 0) {
                    char *a = (char *)(i * 4) + (int)p;
                    char *e = *(char **)(a + 0x320);
                    if (e != 0) {
                        e[0x7A3] = 0;
                        e[0x7A4] = 1;
                        col451(*(unsigned char **)(a + 0x320), 0x80, 0x80, 0x80);
                    }
                }
            }
            *(unsigned char *)(p + 0xEB) = 2;
            return 1;
        }
        for (i = 0; i < 8; i++) {
            if (*(unsigned char *)((char *)i + (int)p + 0xDD) == 0) *(float *)((char *)(i * 4) + (int)p + 0xF0) = 1000.0f;
        }
    }
    return 0;
}
