/* Hand-matched C++ (virtual calls), part 3: functions whose callee prototypes conflict
 * with declarations in vcalls.cpp / vcalls2.cpp (e.g. func_0034BA60 with a signed char arg). */

class Sub40 {
public:
    int x;
};

class Pad40 {
public:
    virtual void p0();
    char pad40[0x3C];
};

class Hit40 : public Pad40, public Sub40 {
};

extern "C" void func_0034BA60(int, char *, signed char, int, int);
extern "C" void func_00204FB0(char *);
extern int D_005BBEF0[];
extern int D_005BBEE0[];
extern char D_00557220[];

class B33A {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual void m38(char *, Sub40 *);
};

class O33Ab {
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
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4(); virtual void d2F8(); virtual void d2FC(); virtual void d300(); virtual void d304();
    virtual void d308(); virtual void d30C(); virtual void d310(); virtual void d314();
    virtual int m318(int);
};

class U33A {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(char *, B33A *, char *);
};

class W33A {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual void m14(int, char *, char *, B33A *);
};

class X33A {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40();
    virtual void m44(char *, Sub40 *);
};

extern "C" void func_0033A930(Hit40 *h, char *a, B33A *b, char *c) {
    char *p = (char *)h;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    switch ((unsigned char)((O33Ab *)p)->m318(*(unsigned char *)(p + 0x14D))) {
    case 0:
        func_0034BA60(*(int *)(a + 0x34), c, *(signed char *)(p + 0x46), 0, 1);
        ((U33A *)(p + 0x11F4))->m14(a, b, p + 0x1150);
        b->m38(a, h);
        ((W33A *)(p + 0x120C))->m14(0, c, a, b);
        break;
    case 2:
        ((W33A *)(p + 0x120C))->m14(2, c, a, b);
        if (*(unsigned char *)(p + 0x1350) != 2) {
            (*(X33A **)(p + 0x140))->m44(a, h);
        }
        switch (*(signed char *)(a + 2)) {
        case 0:
            func_0034BA60(8, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            break;
        case 1:
            func_0034BA60(6, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            break;
        }
        break;
    }
}

class C278 {
public:
    virtual void d8();
    virtual void mC(char *, char *, Sub40 *, int);
};

struct V4_278 { float x, y, z, w; };
struct F2_278 { float a, b; };
struct B2_278 { unsigned char a, b; };
struct P278 {
    V4_278 a;
    V4_278 b;
    F2_278 c;
    B2_278 d;
    float e0, e1, e2, e3, e4, e5, e6, e7, e8, e9;
};

extern "C" void func_002E7920(char *, char *, char *, char *, Sub40 *, int);
extern P278 *D_005BC2EC;
extern "C" unsigned char func_002013D0(char *, int, float *, float *, int, int);
extern "C" bool func_0022A240(int, int, float *, float *, int, int, int, int);
extern "C" unsigned char func_00200FF0(char *, float *, float *, int, int);
struct M207 { float m[16]; };
extern "C" char *func_001B4250(M207 *, int, int, int);
extern "C" char *func_001EDE80(M207 *, int, int, int);
extern "C" char *func_001B11B0(M207 *, int, int, int);
extern "C" char *func_00205A00(M207 *, int, int, int);
extern "C" void func_002F7CF0(int);
extern "C" char *func_002F7D10(void);
extern int D_005BE0B8;
extern "C" void func_001AD100(char *);
extern "C" void func_00195E20(char *, char *);
extern "C" char D_005BE098[4];
extern "C" void func_00376E40(char *);
extern "C" void func_00376B80(char *, int);
extern "C" unsigned char func_00376F40(char *);
extern "C" void func_00376B40(char *, int);

extern "C" void func_002780D0(Hit40 *h, char *q) {
    char *p = (char *)h;
    func_00204FB0(p);
    *(unsigned char *)(p + 0x3D4C) = 0xC;
    *(unsigned char *)(p + 0x3D4D) = 0xD;
    *(unsigned char *)(p + 0x3D4E) = 9;
    *(unsigned char *)(p + 0x3D4F) = 0xA;
    *(unsigned char *)(p + 0x3D50) = 0xB;
    *(signed char *)(p + 0x3C6C) = *(signed char *)(q + 0x12);
    *(unsigned char *)(p + 0x28B0) = 0;
    *(int *)(p + 0x2830) = D_005BBEF0[0];
    *(int *)(p + 0x2834) = D_005BBEE0[0];
    *(char **)(p + 0x2838) = D_00557220;
    *(P278 *)(p + 0x2A7C) = *D_005BC2EC;
    func_002E7920(p + 0x2A20, p + 0x2A7C, p + 0x2AD0, p + 0x2A64, h, 0);
    ((C278 *)(p + 0x2A64))->mC(p + 0x2A7C, p + 0x2AD0, h, 1);
    *(float *)(p + 0x28C4) = 10000.0f;
    *(float *)(p + 0x28C8) = 10000.0f;
    *(signed char *)(q + 0xA) = *(signed char *)(p + 0x3D4A);
    *(signed char *)(q + 0xB) = *(signed char *)(p + 0x3D4B);
    *(signed char *)(q + 0xC) = *(signed char *)(p + 0x3D49);
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" bool func_002018A0(char *p, int a, float *b, float *c, int d, int e) {
    float v[4] __attribute__((aligned(16)));
    bool r = false;
    if (func_002013D0(p, a, b, c, d, e) == 1) {
        QCOPY(v, c);
        r = true;
    } else {
        QCOPY(v, b);
    }
    r = r | func_0022A240(*(int *)(p + 0x10), a, v, c, d, 0xE, e, 0);
    r = r | func_0022A240(*(int *)(p + 0x10), a, v, c, d, 0x11, e, 0);
    if (!r) {
        QCOPY(c, b);
    }
    return r;
}

extern "C" bool func_00201770(char *p, float *a, float *b, int d, int e) {
    float v[4] __attribute__((aligned(16)));
    bool r = false;
    if (func_00200FF0(p, a, b, d, e) == 1) {
        QCOPY(v, b);
        r = true;
    } else {
        QCOPY(v, a);
        v[1] = v[1] - 1500.0f;
    }
    r = r | func_0022A240(*(int *)(p + 0x10), (int)a, v, b, d, 0xE, e, 1);
    r = r | func_0022A240(*(int *)(p + 0x10), (int)a, v, b, d, 0x11, e, 1);
    if (!r) {
        QCOPY(b, a);
    }
    return r;
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl) {
    M207 m __attribute__((aligned(16)));
    char *o;
    if (mat != 0) {
        m = *mat;
    } else {
        UNIT(&m);
    }
    switch (type) {
    case 0:
        o = func_001B4250(&m, 0, id, 0);
        break;
    case 1:
        o = func_001EDE80(&m, 0, id, 0);
        break;
    case 2:
        o = func_001B11B0(&m, 0, id, 0);
        break;
    case 3:
        o = func_00205A00(&m, 0, id, 0);
        break;
    }
    if (o != 0) {
        *(int *)(o + 0xC) |= fl;
    }
    return o;
}

class V2F21 {
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
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194();
    virtual void m198();
};

static inline char *nx_2F21(char *p) {
    char *r = 0;
    char *n = *(char **)(p + 0x83C);
    if (((n != 0) ^ 1) == 0) {
        r = *(char **)n;
        *(char **)(p + 0x83C) = *(char **)(n + 4);
    }
    return r;
}

extern "C" void func_002F21E0(char *p) {
    char *e;
    *(char **)(p + 0x83C) = *(char **)(p + 0x834);
    while ((e = nx_2F21(p)) != 0) {
        ((V2F21 *)e)->m198();
    }
    *(unsigned char *)(p + 0x18) = 1;
}

class V20ED {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual void m2C(int, int);
};

extern "C" void func_0020ED10(char *a, int **b) {
    char *o;
    func_002F7CF0((*b)[1]);
    while ((o = func_002F7D10()) != 0) {
        ((V20ED *)o)->m2C((*b)[2], (*b)[3]);
    }
}

class V1B29 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void m28();
    virtual void m2C();
    virtual void m30();
};

extern "C" void func_001B29C0(V1B29 *p) {
    switch (*((unsigned char *)p + 4)) {
    case 0:
        D_005BE0B8++;
        p->m28();
        break;
    case 1:
        p->m2C();
        break;
    case 2:
        p->m30();
        break;
    }
}

class V383 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8();
    virtual void mBC(float);
    virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_00383C20(char *p) {
    int i;
    func_001AD100(p);
    ((V383 *)(p + 0x780))->mBC(*(float *)(p + 0x10) * *(float *)(p + 0x10));
    for (i = 0; i < *(int *)(p + 0xDC0); i++) {
        *(float *)(p + i * 0xC0 + 0x370) = *(float *)(p + 0x10) * *(float *)(p + 0x10);
    }
    ((V383 *)(p + 0x780))->mC8(p + 0xD80);
    func_00195E20(D_005BE098, p);
}

class V410 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8();
    virtual void mCC(char *);
};

extern "C" void func_004102E0(char *p) {
    int i;
    char *e;
    for (i = 0; i < *(short *)(p + 0xE2); i++) {
        e = *(char **)(p + i * 4 + 0x108);
        if (*(unsigned char *)e == 1 && *(unsigned char *)(e + 1) == 1) {
            ((V410 *)(e + 0x10))->mCC(e + 0x450);
        }
    }
}

class V2D9 {
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
    virtual void d128(); virtual void d12C(); virtual void d130();
    virtual int m134(int);
    virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144(); virtual void d148();
    virtual int m14C();
};

static inline signed char find_2D9(char *p, signed char k) {
    unsigned int i;
    if (k != -1) {
        for (i = 0; i < 5; i++) {
            signed char c = *(signed char *)(p + i + 0x3D4C);
            if (c == k) return i;
        }
    }
    return -1;
}

static inline V2D9 *get_2D9(char *p, signed char k) {
    signed char idx = find_2D9(p, k);
    if (idx != -1) return *(V2D9 **)((char *)(idx * 4) + (int)p + 0x3D54);
    return 0;
}

extern "C" int func_002D9BD0(char *p, signed char k) {
    V2D9 *o = get_2D9(p, k);
    if (o != 0) return o->m14C();
    return 0;
}

extern "C" int func_002D9C80(char *p, signed char k, int a) {
    V2D9 *o = get_2D9(p, k);
    if (o != 0) return o->m134(a);
    return 0;
}

extern "C" void func_0041D6E0(Sub40 *, char *, int, float);
extern "C" void func_003E6750(char *, int, int, int);
extern "C" char *func_002075D0(int, int, char *, int, int);
extern "C" void func_002FFBF0(char *);
extern "C" void func_0038F300(char *, int);
extern "C" int func_0024E800(char *);
extern "C" int func_003215A0(char *);
extern "C" void func_0038F2C0(char *, int);

extern "C" void func_004AE3F0(Hit40 *h) {
    char *p = (char *)h;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 50.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041D6E0(h, p + 0x60, 1, *(float *)(p + 0x10));
        if (func_00376F40(p) == 1) {
            func_00376B40(p, 8);
            return;
        }
        break;
    }
}

class V3EE {
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
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
};

extern "C" void func_003EEA50(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *o;
    if (*(unsigned char *)(p + 0x342C) == 0x4F) return;
    ((V3EE *)p)->m2F8(0x20);
    *(unsigned char *)(p + 0x3A80) = 0;
    *(unsigned char *)(p + 0x3A81) = 1;
    if (*(int *)(p + 0x1F94) == 6) return;
    func_003E6750(p, 6, 0, 0);
    if (*(char **)(p + 0x3BD4) != 0) return;
    UNIT(m);
    *(char **)(p + 0x3BD4) = func_002075D0(3, 0x2A1, (char *)m, 0, 0x10);
    o = *(char **)(p + 0x3BD4);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x6E0;
        *(unsigned char *)(o + 0x9A) = 0;
        char *o2 = *(char **)(p + 0x3BD4);
        *(unsigned char *)(o2 + 0x3A) = 1;
    }
}

class V302 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60();
    virtual void m64(int);
    virtual void m68(float, float);
};

extern "C" void func_003023F0(char *p) {
    if (*(unsigned char *)(p + 0x38) == 1) {
        *(int *)(p + 0x688) = 0;
        if (*(unsigned char *)(p + 0x680) == 0) {
            *(unsigned char *)(p + 0x680) = 1;
            func_002FFBF0(p);
            if (*(unsigned char *)(p + 0x39) == 3) {
                ((V302 *)(p + 0x80))->m64(*(unsigned char *)((char *)(*(short *)(p + 0x3A) * 0xB0) + *(int *)(p + 0x40) + 0x70) | *(unsigned char *)((char *)(*(short *)(p + 0x3A) * 0xB0) + *(int *)(p + 0x40) + 0x71) << 1);
                ((V302 *)(p + 0x80))->m68(*(float *)((char *)(*(short *)(p + 0x3A) * 0xB0) + *(int *)(p + 0x40) + 0x98), *(float *)((char *)(*(short *)(p + 0x3A) * 0xB0) + *(int *)(p + 0x40) + 0x9C));
            }
            *(int *)(p + 0x690) = 0;
        }
    }
}

class V41F {
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
    virtual void d128(); virtual void d12C();
    virtual void m130();
};

extern "C" V41F *func_0042EED0(char *, int);
extern "C" void func_00205000(char *);
extern "C" char D_00567CF0[];
extern "C" int func_00507060(char *, int, int, int, char *, int, float, int, float);
extern "C" void func_0037BD20(char *, int);
extern "C" void func_00206730(char *);
extern "C" void func_004810C0(char *);
extern "C" void func_00481D70(char *);
extern "C" void func_0028C5C0(char *, int, float);
extern "C" void func_00480FF0(char *);

extern "C" void func_0041FF10(char *p) {
    *(unsigned int *)(p + 0x42C) |= 0x2000;
    *(unsigned int *)(p + 0x110) |= 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0038F300(p, -1);
        *(V41F **)(p + 0x43C) = func_0042EED0(p, *(unsigned char *)(p + 0x41B));
        if (*(V41F **)(p + 0x43C) != 0) {
            (*(V41F **)(p + 0x43C))->m130();
        }
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0xC20) == 1) {
            if ((unsigned char)func_003215A0(p + 0x130) == 1) {
                func_0038F2C0(p, 0);
            } else {
                func_0038F2C0(p, 0xF);
            }
        }
        break;
    }
}

class V204 {
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
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158();
    virtual void m15C(signed char *);
    virtual void m160();
};

extern "C" void func_00204E40(V204 *o, signed char *q) {
    char *p = (char *)o;
    unsigned char a = 0;
    bool b = 0;
    p[0x24F1] = 1;
    p[0x28A0] = 0;
    p[0x2AE0] = 0;
    p[0x28A8] = 0;
    p[0x28B3] = 0;
    *(int *)(p + 0x28CC) = 0;
    p[0x3C78] = 0;
    *(int *)(p + 0x3D44) = 0;
    p[0x3C79] = 0;
    p[0x3D31] = 0;
    if (q[1] == -1) {
        q[1] = 1;
        a = 1;
    }
    if (q[3] == -1) {
        b = 1;
        q[3] = 6;
    }
    o->m15C(q);
    o->m160();
    func_00205000(p);
    func_00204FB0(p);
    if (a) {
        q[1] = -1;
        p[0x3D4D] = -1;
    }
    if (b) {
        q[3] = -1;
        p[0x3D4F] = -1;
    }
}

class V37E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78();
    virtual float m7C();
    virtual int m80(float);
};

extern "C" void func_0037E750(char *p) {
    int k;
    float s;
    int i;
    k = ((V37E *)(p + 0x130))->m80(((V37E *)(p + 0x130))->m7C());
    s = ((float (*)[3])D_00567CF0)[k][*(int *)(p + 0x77CC)];
    if (*(int *)(p + 0x6E50) == 0) {
        for (i = 0; i < 3; i++) {
            if (*(int *)(*(char **)(p + i * 4 + 0x69F8) + 0x144C) > 0) {
                func_0037BD20(p, func_00507060(p + 0x710, *(int *)(p + 0x750), i, 0, p, *(int *)(p + 0x77CC), s, k, s));
            }
        }
    }
}

class V480 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_00480D80(char *p) {
    func_001AD100(p);
    func_00206730(p + 0x710);
    if (*(unsigned char *)(p + 0x280) != 0) {
        switch (*(unsigned char *)(p + 4)) {
        case 0:
            *(char **)(p + 0x710) = func_00207480(3, 0x352, 0, 0x10);
            {
                char *e = *(char **)(p + 0x710);
                if (e != 0) {
                    *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x27C) + 0x104);
                    e[0x9A] = 0;
                    {
                        char *o2 = *(char **)(p + 0x710);
                        o2[0x3A] = 1;
                    }
                }
            }
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
            break;
        case 1:
            func_004810C0(p);
            break;
        }
        func_00481D70(p);
        func_0028C5C0(p + 0xD40, 0, *(float *)(p + 0x10));
        UNIT(*(char **)(*(char **)(p + 0x240) + 0x100));
        ((V480 *)(p + 0x740))->mC8(p + 0x2C0);
        func_00480FF0(p);
        func_00195E20(D_005BE098, p);
    }
}
