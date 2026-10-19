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
extern "C" void func_002E5250(char *);
extern "C" int func_002F7950(int, char *);
extern "C" unsigned char func_002F7B40(unsigned char, unsigned char);
extern "C" void func_001A5BD0(char *);
extern "C" void func_001A5C30(char *);

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

class V2E5 {
public:
    virtual void d8();
    virtual char *mC();
    virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C();
    virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80();
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
};

extern "C" int func_002F7820(V2E5 *, signed char);
extern "C" void func_00105300(char *, int);
extern "C" void func_00104C00(char *, char *, char *);
extern "C" void func_003DF450(char *);

extern "C" void func_002E5520(char *p) {
    if (*(unsigned char *)(p + 0x260) == 0) return;
    func_002E5250(p);
    if (*(unsigned char *)(p + 0x310) != 0) {
        func_0028C5C0(p + 0x320, 0, *(float *)(p + 0x10));
    }
    if (*(unsigned char *)(p + 0x263) == 0) return;
    *(unsigned char *)(p + 0x264) = func_002F7B40((unsigned char)func_002F7950(*(int *)(p + 0x39C), p + 0x300), *(unsigned char *)(p + 0x264));
    if (*(unsigned char *)(p + 0x264) >= 0x80) {
        (*(V2E5 **)(p + 0x240))->m8C();
        if ((unsigned char)func_002F7820(*(V2E5 **)(p + 0x240), *(signed char *)(p + 0x265)) == 0) {
            func_001A5BD0((*(V2E5 **)(p + 0x240))->mC());
        }
    } else {
        func_001A5C30((*(V2E5 **)(p + 0x240))->mC());
        (*(V2E5 **)(p + 0x240))->m84(*(unsigned char *)(p + 0x264), 1);
    }
}

class V3C0 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual int mB4();
    virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(int);
};

#define QCOPYR3C(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

#define VADDA3C(d, b) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(b) : "memory")

extern "C" V3C0 *func_002792A0(char *);
extern "C" int D_005785C0[];
extern "C" void func_0028C200(char *, char *, char *, int, int, char *, int);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" int func_0028C3A0(char *, int, int, int);

extern "C" void func_003C0A20(char *p) {
    float v[4] __attribute__((aligned(16)));
    char m[0x40] __attribute__((aligned(16)));
    int i;
    char *e;
    if (*(unsigned char *)(p + 0x1BC5) == 1) {
        QCOPYR3C(v, p + 0x1A00);
        v[3] = 1.0f;
        func_00105300(m, (int)(p + 0x19D0));
        VADDA3C(p + 0x50, v);
        for (i = 0; i < func_002792A0(p + 0x9C0)->mB4(); i++) {
            e = *(char **)((char *)(i * 4) + (int)p + 0x8B0);
            if (e != 0 && *(char **)(e + 0x104) != 0) {
                func_00104C00(*(char **)(e + 0x104), m, *(char **)(e + 0x104));
                *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x8B0) + 0x104) + 0x3C) = 1.0f;
            }
        }
        ((V3C0 *)(p + 0xFC0))->mC8(*(int *)(*(char **)(p + 0x8B8) + 0x104));
    } else {
        func_003DF450(p + 0x1BD0);
    }
}

class V44D {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20();
    virtual int m24(int);
};

extern "C" V44D *func_002F7C10(int, int);
extern "C" void func_00131700(char *, char *, char *);
extern "C" void func_00105230(char *, char *, char *);
extern "C" void func_001318E0(char *, char *, char *);
extern "C" char *func_00279290(char *);
extern "C" void func_001A1E70(char *, int);

extern "C" void func_0044D560(char *p) {
    int i;
    V44D *o;
    func_0028C200(p + 0x2C0, p + 0x4E0, p + 0x500, 4, 0, p, 0);
    func_0028C8E0(p + 0x2C0, 0);
    func_0028C910(p + 0x2C0);
    *(unsigned char *)(p + 0x2C3) = 0xD;
    for (i = 0; i < 5; i++) {
        *(unsigned char *)(p + i * 4 + 0x4E0) = 6;
        *(unsigned char *)(p + i * 4 + 0x4E1) = 0;
        *(short *)(p + i * 4 + 0x4E2) = i;
        *(unsigned char *)(p + i * 0x50 + 0x500) = 2;
        *(int *)(p + i * 0x50 + 0x510) = 0;
        *(int *)(p + i * 0x50 + 0x514) = 0;
        *(int *)(p + i * 0x50 + 0x518) = 0;
        *(float *)(p + i * 0x50 + 0x51C) = 1.0f;
        *(float *)(p + i * 0x50 + 0x520) = 100.0f;
        o = func_002F7C10(D_005785C0[i * 2], 0);
        if (o != 0) {
            func_0028C3A0(p + 0x2C0, i, -1, o->m24(0));
        }
    }
}

class V3B9 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34();
    virtual void m38(char *, char *);
    virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58();
    virtual void d5C(); virtual void d60();
    virtual void m64(char *, int, float, float, float);
};

extern "C" void func_003B98C0(char *p, char *a, V3B9 *o, float dt) {
    char *b;
    if (a != 0 && o != 0) {
        func_00207480(3, 0x386, (M207 *)(p + 0x250), 0x20);
        if (*(unsigned char *)(p + 0x1B4) != 0) {
            func_0034BA60(0x32, p + 0x50, *(signed char *)(*(char **)(p + 0x1DC) + 0x46), 0, 1);
        }
        o->m64(a, 0, dt, 1.0f, *(signed char *)(a + 2) ? 0.7f : 0.3f);
        b = p;
        if (b != 0) b += 0x40;
        o->m38(a, b);
        *(float *)(p + 0x1C4) = *(float *)(p + 0x1C4) - dt;
        if (*(float *)(p + 0x1C4) <= 0.0f) {
            *(unsigned char *)(p + 0x1B0) = 1;
        }
    }
}

class V414 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18();
    virtual void m1C(float);
    virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C();
    virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C();
    virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C();
    virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C();
    virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC();
    virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

typedef struct { float a; float b; } P414;

extern "C" P414 D_0056B0A0[][6];
extern "C" void func_0013D5D0(char *);
extern "C" char D_01CAFF0C[];
extern "C" int D_00582990[];
extern "C" void func_004821D0(char *);
extern "C" void func_00481E00(char *, int);
extern "C" void func_0024E530(char *, char *, unsigned char, unsigned char);
extern "C" void func_0028C740(char *);
extern "C" void func_0024E860(char *);
extern "C" char D_0055FD10[];
extern "C" char D_0055FD14[];
extern "C" char D_0055FD18[];
extern "C" char D_0055FD1C[];
extern "C" char D_00560274[];
extern "C" void func_0029FFF0(char *);
extern "C" void func_0029DE70(char *);
extern "C" void func_0029DCE0(char *, int);
extern "C" void func_00138380(int);
extern "C" void func_002F2D30(char *, char *);
extern "C" void func_001AD140(char *);
extern "C" void func_0029E0D0(char *);
extern "C" void func_0029E3D0(char *);
extern "C" void func_00104B80(char *, char *, char *);
extern "C" float func_00131BA0(short);
extern "C" float func_00131C20(short);
extern "C" short func_00131D10(float, float);
extern "C" void func_002EF940(char *, char *);
extern "C" void func_0048AFC0(char *, int);
extern "C" void func_0048B320(char *);
extern "C" void func_0041DBA0(char *, char *);
extern "C" unsigned char func_0041D6B0(char *, float);
extern "C" float func_0041DB20(float *);
extern "C" int func_0021D260(char *, int, int);
extern "C" void func_0048AF80(char *, int);
extern "C" float D_005BD9D8;
extern "C" void func_0034B8C0(char *, char *, int);
extern "C" int func_0024E780(char *, int, int);
extern "C" void func_0024E7B0(char *, int, int);

extern "C" void func_004144D0(char *p, int m, int k) {
    int r;
    float fx;
    float fy;
    switch (m) {
    case 4:
        r = 0;
        break;
    case 8:
        r = 1;
        break;
    }
    fy = D_0056B0A0[r][k].b;
    fx = D_0056B0A0[r][k].a;
    *(float *)(p + 0x3330) = fx;
    *(float *)(p + 0x3334) = fy;
    *(int *)(p + 0x3338) = 0;
    *(float *)(p + 0x333C) = 1.0f;
    UNIT(p + 0x3360);
    func_00131700(p + 0x3360, p + 0x3360, p + 0x3340);
    func_00105230(p + 0x3360, p + 0x3360, p + 0x3330);
    func_001318E0(p + 0x3360, p + 0x3360, p + 0x3350);
    func_001A1E70(func_00279290(p + 0x1FC0), 0);
    ((V414 *)func_002792A0(p + 0x1FC0))->m1C(1.0f);
    {
        char *m = p + 0x3360;
        ((V414 *)(p + 0x1FC0))->mC8(m);
    }
}

class VA8 {
public:
    virtual void m8(int);
    virtual void mC();
    virtual void m10();
    virtual int m14();
};

class VA4 {
public:
    virtual char *m8(char *, int);
};

class VA0 {
public:
    virtual void d8();
    virtual int mC(int, int);
};

extern "C" int func_0022C8C0(char *p) {
    if (*(int *)(p + 0x1C) == -2) {
        if (*(char **)(p + 8) != 0) {
            (*(char **)(p + 8))[8] = 1;
        }
        *(int *)(p + 0x1C) = -1;
    } else if (*(int *)(p + 0x1C) != -1) {
        if (*(VA8 **)(p + 8) != 0) {
            (*(VA8 **)(p + 8))->m10();
            (*(VA8 **)(p + 8))->m8(-1);
            func_0013D5D0(p + 0xC);
        }
        *(char **)(p + 8) = (*(VA4 **)(p + 4))->m8(p + 0xC, *(int *)(p + 0x1C));
        if (*(char **)(p + 8) != 0) {
            *(int *)(*(char **)(p + 8) + 4) = *(int *)(p + 0x1C);
            (*(VA8 **)(p + 8))->mC();
        }
        *(int *)(p + 0x1C) = -1;
    }
    if (*(VA8 **)(p + 8) != 0) {
        int r = (*(VA8 **)(p + 8))->m14();
        return ((VA0 *)p)->mC(*(int *)(*(char **)(p + 8) + 4), r);
    }
    return 0;
}

class V480B {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18();
    virtual float m1C();
};

#define VMOVT(d, m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

extern "C" void func_00480BE0(char *p) {
    char *o;
    int i;
    int j;
    float v;
    *(unsigned char *)(p + 0x45) = 6;
    *(float *)(p + 0x29C) = 3000.0f;
    *(float *)(p + 0x2A0) = 3000.0f;
    o = *(char **)(*(char **)D_01CAFF0C + 4);
    if (o != 0 && *(V480B **)(o + 0x10) != 0) {
        v = (*(V480B **)(o + 0x10))->m1C();
    } else {
        v = 0.0f;
    }
    *(float *)(p + 0x298) = v;
    *(unsigned char *)(p + 0x285) = 4;
    i = 0;
    while (i < 4) {
        if (*(float *)(p + 0x298) < (float)D_00582990[i]) {
            *(unsigned char *)(p + 0x285) = i;
            break;
        }
        i++;
    }
    func_004821D0(p);
    func_00481E00(p, 0);
    *(unsigned char *)(p + 0x1010) = 0;
    *(unsigned char *)(p + 0x1011) = 0;
    *(short *)(p + 0x1012) = 0;
    *(int *)(p + 0x1018) = 0;
    *(int *)(p + 0x101C) = 0;
    *(int *)(p + 0x1020) = 0;
    *(int *)(p + 0x1030) = 0;
    *(int *)(p + 0x1034) = 0;
    *(int *)(p + 0x1038) = 0;
    *(float *)(p + 0x103C) = 1.0f;
    *(float *)(p + 0x1040) = 100000.0f;
    *(unsigned char *)(p + 0x1044) = 0;
    *(unsigned char *)(p + 0x1045) = 0;
    *(short *)(p + 0x1046) = 0;
    j = 0;
    while (j < 10) {
        *(short *)((char *)(j * 2) + (int)p + 0x1048) = -1;
        j++;
    }
    *(unsigned char *)(p + 0x1010) = 0;
    *(unsigned char *)(p + 0x1011) = 0;
    *(short *)(p + 0x1012) = 0;
    *(short *)(p + 0x1014) = 0;
    *(char **)(p + 0x1018) = p;
    *(int *)(p + 0x101C) = 0;
    *(char **)(p + 0x1020) = p + 0x2C0;
    VMOVT(p + 0x1030, p + 0x2C0);
    *(unsigned int *)(p + 0xC) |= 0x10;
}

class W4D3A {
public:
    virtual void d8(); virtual void dC();
    virtual int m10();
    virtual int m14();
    virtual int m18();
};

class W4D3B {
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
    virtual int m2F8(int);
    virtual void d2FC(); virtual void d300(); virtual void d304(); virtual void d308(); virtual void d30C();
    virtual int m310();
};

extern "C" void func_004D33C0(char *p0, int p1) {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp21;
    v0 = p0;
    v1 = (char *)p1;
    if (3 != *(unsigned char *)(p0 + 333)) {
        *(char *)(v0 + 364) = *(signed char *)(v1 + 0);
        *(char *)(v0 + 365) = *(signed char *)(v1 + 1);
        *(char *)(v0 + 366) = *(signed char *)(v1 + 2);
        *(float *)(v0 + 368) = *(float *)(v1 + 4);
        *(float *)(v0 + 372) = *(float *)(v1 + 8);
        *(float *)(v0 + 376) = *(float *)(v1 + 12);
        *(float *)(v0 + 380) = *(float *)(v1 + 16);
        *(float *)(v0 + 384) = *(float *)(v1 + 20);
        *(char *)(v0 + 388) = *(signed char *)(v1 + 24);
        *(float *)(v0 + 392) = *(float *)(v1 + 28);
        *(char *)(v0 + 396) = *(signed char *)(v1 + 32);
        *(float *)(v0 + 400) = *(float *)(v1 + 36);
        *(float *)(v0 + 404) = *(float *)(v1 + 40);
        *(float *)(v0 + 408) = *(float *)(v1 + 44);
        *(char *)(v0 + 412) = *(unsigned char *)(v1 + 48);
        *(int *)(v0 + 416) = *(int *)(v1 + 52);
        *(float *)(v0 + 420) = *(float *)(v1 + 56);
        *(char *)(v0 + 424) = *(signed char *)(v1 + 60);
        *(char *)(v0 + 425) = *(signed char *)(v1 + 61);
        *(char *)(v0 + 426) = *(signed char *)(v1 + 62);
        tmp21 = ((W4D3A *)*(char **)(v0 + 316))->m14();
        if (1 == (tmp21 & 255)) {
            ((W4D3B *)v0)->m2F8(16);
        }
        v4 = ((W4D3A *)*(char **)(v0 + 316))->m10();
        v3 = (v4 & 255);
        switch (v3) {
        case 0:
            break;
        case 1:
            v4 = ((W4D3A *)*(char **)(v0 + 316))->m18();
            if ((v4 & 255) != 0) {
                v4 = ((W4D3B *)v0)->m2F8(8);
            }
            break;
        }
        v5 = *(signed char *)(v1 + 2);
        switch (v5) {
        case 0:
            break;
        case 1:
            v4 = ((W4D3B *)v0)->m310();
            v2 = (v4 & 255);
            switch (v2) {
            case 0:
                *(int *)(v0 + 0x5A10) = 0x41200000;
                *(char *)(v0 + 0x59CC) = 1;
                break;
            case 2:
                break;
            }
            break;
        }
    }
}

class A24E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C();
    virtual void m20(int, float);
    virtual void d24(); virtual void d28(); virtual void d2C();
    virtual float m30(int);
};

#define VUNIT(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

extern "C" void func_0024E0B0(char *p) {
    char *e;
    signed char a;
    signed char b;
    unsigned char c;
    unsigned char f;
    e = *(char **)(p + 0x14);
    *(char **)(p + 0x14) = e + 8;
    p[0x84] = *(unsigned char *)(e + 4);
    p[0x85] = *(unsigned char *)(e + 5);
    if ((a = *(signed char *)(p + 0x4E)) == -1) {
        a = *(signed char *)(e + 2);
    } else {
        p[0x4E] = -1;
    }
    if ((b = *(signed char *)(p + 0x4F)) == -1) {
        b = *(signed char *)(e + 1);
    } else {
        p[0x4F] = -1;
    }
    switch (b) {
    case 0:
        f = 0;
        break;
    case 1:
        f = 1;
        break;
    }
    if ((c = *(unsigned char *)(p + 0x50)) == 0xFF) {
        c = *(unsigned char *)(e + 3);
    } else {
        *(unsigned char *)(p + 0x50) = 0xFF;
    }
    if (a == 0) c = 0;
    func_0024E530(p, e, c, f);
    if (*(char **)(p + 0xCC)) {
        func_0028C740(*(char **)(p + 0xCC));
        *(int *)(*(char **)(p + 0xCC) + 0xD8) = 0;
    }
    if (*(short *)(p + 0x4C) == -1) {
        if (*(short *)(e + 6) == 0x7FFF) {
            *(short *)(p + 0x4C) = (int)(*(A24E **)(p + 0x44))->m30(*(int *)(p + 0x38));
        } else {
            *(short *)(p + 0x4C) = *(short *)(e + 6);
        }
    } else if (*(short *)(p + 0x4C) == 0x7FFF) {
        *(short *)(p + 0x4C) = (int)(*(A24E **)(p + 0x44))->m30(*(int *)(p + 0x38));
    }
    (*(A24E **)(p + 0x44))->m20(*(int *)(p + 0x38), (float)*(short *)(p + 0x4C));
    if (*(unsigned char *)(p + 0x7E) == 0) {
        VUNIT(*(char **)(**(char ***)(p + 0x6C) + 0x100));
    }
    *(int *)(p + 0x68) = 0;
    *(int *)(p + 0x88) = 0;
    func_0024E860(p);
}

class P296 {
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
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC();
    virtual float m1E0(int);
};

class Q296 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C();
    virtual void m20();
};

static inline float add3_296(float a, float b, float c) {
    return a + (b + c);
}

extern "C" void func_00296400(char *p) {
    int i;
    float t;
    func_0029FFF0(p);
    if (*(unsigned short *)(p + 0x8952) == 0) {
        func_0029DE70(p);
        if (func_0024E800(p + 0x8980)) func_0029DCE0(p, 0);
    } else {
        func_0029DE70(p);
        func_00138380(-4);
        *(float *)(p + 0xA930) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xA930) < 0.0f) {
            *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) =
                (int)((P296 *)p)->m1E0((int)(*(float *)D_0055FD1C + add3_296(*(float *)D_0055FD18, *(float *)D_0055FD10, *(float *)D_0055FD14)));
            *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = (float)(int)*(float *)D_00560274;
            if (*(char **)(*(char **)D_01CAFF0C + 0x20)) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
            func_001AD140(p);
            return;
        }
    }
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0xA9DC) == 2) ((Q296 *)(p + i * 0x20 + 0x8300))->m20();
    }
    func_0029E0D0(p);
    func_0029E3D0(p);
    func_00195E20(D_005BE098, p);
}

#define QCOPY284(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_002843F0(char *p) {
    float v[4] __attribute__((aligned(16)));
    char m[0x40] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    unsigned int n;
    unsigned int i;
    char *e;
    QCOPYR3C(v, p + 0x2110);
    v[3] = 1.0f;
    func_00105300(m, (int)(p + 0x20E0));
    func_00104B80(p + 0x50, m, p + 0x50);
    r[0] = func_00131BA0(*(short *)(p + 0x90));
    r[1] = 0.0f;
    r[2] = func_00131C20(*(short *)(p + 0x90));
    r[3] = 0.0f;
    func_00104B80((char *)r, m, (char *)r);
    *(short *)(p + 0x90) = func_00131D10(r[0], r[2]);
    QCOPY284(p + 0xE0, v);
    QCOPYR3C(p + 0xF0, p + 0x2150);
    n = func_002792A0(p + 0x4C0)->mB4();
    for (i = 0; i < n; i++) {
        e = *(char **)((char *)(i * 4) + (int)p + 0x404);
        if (e != 0 && *(char **)(e + 0x104) != 0) {
            func_00104C00(*(char **)(e + 0x104), m, *(char **)(e + 0x104));
            *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x404) + 0x104) + 0x3C) = 1.0f;
        }
    }
    if (*(unsigned char *)(p + 0x2620)) {
        *(float *)(p + 0x1D70) = *(float *)(p + 0x10);
        ((V3C0 *)(p + 0xAC0))->mC8(*(int *)(*(char **)((char *)(*(int *)(p + 0x2624) * 4) + (int)p + 0x404) + 0x104));
    }
    if (*(unsigned char *)(p + 0x2621)) {
        *(float *)(p + 0x1E30) = *(float *)(p + 0x10);
        ((V3C0 *)(p + 0x10C0))->mC8(*(int *)(*(char **)((char *)(*(int *)(p + 0x2628) * 4) + (int)p + 0x404) + 0x104));
    }
    if (*(unsigned char *)(p + 0x262C)) func_002EF940(*(char **)D_01CAFF0C, p + 0x2370);
}

class O422 {
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
    virtual char *m134(int);
};

#define QCOPYR422(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

extern "C" void func_00422620(char *p) {
    float v[4] __attribute__((aligned(16)));
    char *pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    *(int *)(p + 0x110) |= 1;
    *(float *)(p + 0x4B4) = *(float *)(p + 0x4B4) - 6.0f * *(float *)(p + 0x10);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        func_0048B320(p);
        p[0x4D0] = 0;
        *(float *)(p + 0x458) = 23.0f;
        p[6] = 1;
    case 1:
        func_0041DBA0(p, p + 0xA40);
        if (func_0041D6B0(p + 0x458, *(float *)(p + 0x10)) == 1 && *(unsigned char *)(p + 0x4D0) == 0) {
            QCOPYR422(v, *(char **)(((O422 *)p)->m134(1) + 0x104) + 0x30);
            v[1] = v[1] - 100.0f;
            if (func_0041DB20(v) < 150.0f) {
                *(unsigned char *)(p + 0x4D0) = func_0021D260(pl, 1, *(int *)(p + 0x554));
                if (*(unsigned char *)(p + 0x4D0)) {
                    p[0x4D1] = 1;
                    *(float *)(p + 0x4CC) = 15.0f;
                    *(float *)(p + 0x4C8) = 18.0f;
                    func_0048AF80(p, 0xE);
                    return;
                }
            }
        }
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) func_0048AF80(p, 0xC);
        break;
    }
}

class O434 {
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
    virtual int m2E8();
    virtual void d2EC(); virtual void d2F0();
    virtual void m2F4(int);
    virtual void d2F8();
    virtual void m2FC(int);
};

extern "C" void func_004396F0(O434 *, int);
extern "C" char D_01DFABA0[];
extern "C" char D_00582974[];
extern "C" void func_003305E0(char *, int, int, char *, int, int, int);
extern "C" void func_002D90A0(float, char *);
extern "C" void func_002EB840(int, float *, float);
extern "C" float D_005BE1CC;
extern "C" float D_005BCDB8;
extern "C" short D_005BCDB0[4];
extern "C" signed char D_005BCD60[];
extern "C" char D_00565700[];
extern "C" int D_01CAFF14[];
extern "C" void func_0031E570(char *);
extern "C" short func_002D6DB0(char *);
extern "C" void func_002D2270(char *, int);
extern "C" void func_00277DE0(char *, char *, int, int);
extern "C" void func_00277E70(char *);
extern "C" void func_00277ED0(char *);
extern "C" void func_00278060(char *, int);
extern "C" void func_002D6C50(char *);
extern "C" int D_005BE09C;
extern "C" float func_00132470(char *, char *);
extern "C" void func_00330BD0(char *, int, char *, int, int);
extern "C" int func_002D9EB0(char *);
extern "C" void func_00253110(char *, char *, int, float);
extern "C" int func_002536B0(char *, char *);
extern "C" float func_0011DBE0(float, float);

extern "C" void func_004348C0(O434 *o) {
    char *p = (char *)o;
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        (*(unsigned char *)(p + 0x47BF))++;
        o->m2FC(0x5C);
        break;
    case 1:
        *(short *)(p + 0x47BA) = *(short *)(p + 0x160) - *(short *)(p + 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, (int)(D_005BD9D8 * *(float *)(p + 0x10)));
        if (o->m2E8() == 0x90) {
            (*(unsigned char *)(p + 0x47BF))++;
            func_004396F0(o, 0x56);
        }
        break;
    case 2:
        *(short *)(p + 0x47BA) = *(short *)(p + 0x160) - *(short *)(p + 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, (int)(D_005BD9D8 * *(float *)(p + 0x10)));
        if ((unsigned char)func_0024E780(p + 0x41A0, 0, 0) == 1) func_0024E7B0(p + 0x41A0, 0, 0);
        if (o->m2E8() == 0x90) {
            (*(unsigned char *)(p + 0x47BF))++;
            o->m2FC(0x59);
        }
        break;
    case 3:
        if (o->m2E8() == 0x90) o->m2F4(0x17);
        break;
    }
}

class O481 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8();
    virtual int mBC(float);
};

#define QCOPYR481(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory")

extern "C" void func_00481620(char *p) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    unsigned char r;
    int a;
    int b;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00481E00(p, 1);
        func_003305E0(D_01DFABA0, 8, 0x72, p + 0x50, 0x28, 0, 0);
        if (*(char **)(p + 0x710)) {
            (*(char **)(p + 0x710))[0x3A] = 1;
            func_001AD140(*(char **)(p + 0x710));
            *(int *)(p + 0x710) = 0;
        }
        {
            float f = *(float *)D_00582974;
            func_002D90A0(f, *(char **)(*(char **)D_01CAFF0C + 0xC));
        }
        if (*(char **)(*(char **)D_01CAFF0C + 0x20)) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
        (*(unsigned char *)(p + 5))++;
    case 1:
        r = ((O481 *)(p + 0x740))->mBC(*(float *)(p + 0x10));
        if (r == 4 || r == 0) {
            a = *(signed char *)(p + 0x288) + 3;
            b = *(signed char *)(p + 0x289) - 1;
            if (a < b) {
                QCOPYR481(v, p + a * 16 + 0x310);
            } else {
                w[2] = 600.0f;
                w[3] = 1.0f;
                w[0] = 0.0f;
                w[1] = 0.0f;
                func_00104B80((char *)v, p + 0x2C0, (char *)w);
            }
            v[3] = 1.0f;
            func_002EB840(1000, v, 100.0f);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        ((O481 *)(p + 0x740))->mBC(*(float *)(p + 0x10));
        break;
    }
}

extern "C" void func_002D4360(char *p) {
    char *o;
    float a;
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
        break;
    case 1:
        *(float *)(p + 0x38DC) = *(float *)(p + 0x38DC) + *(float *)(p + 0x10);
        a = D_005BE1CC;
        t = *(float *)(p + 0x38DC);
        if (!(t < a) && t <= a + D_005BCDB8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            *(short *)(p + 0x37D8) = *(short *)(p + 0x37D8) + 0x5B0;
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDB0[*(unsigned char *)(p + 0x38D0)]));
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6C8) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6C8) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

extern "C" V4 D_00586520;
extern "C" void func_00133890(char *, char *, V4 *);
extern "C" float D_005BE1E0;
extern "C" float D_005BCDFC;
extern "C" short D_005BCE00;
extern "C" char D_005BE1A8[4];
extern "C" int func_0034B6B0(char *, char *, char *, float);
extern "C" void func_001ACC30(int, int, int, int, int);
extern "C" void func_0036DF10(char *, int, int, int, int, int);
extern "C" signed char D_005BC348;
extern "C" unsigned char D_005BE138;
extern "C" char *D_005BE13C;
extern "C" float D_005BC34C;
extern "C" int D_005BE140;
extern "C" void func_0043D940(char *);
extern "C" void func_0043D9F0(char *);
extern "C" void func_003FA440(char *, int);
extern "C" void func_003FA3F0(char *, int);

extern "C" void func_00484F40(char *p) {
    V4 m;
    char *q;
    char *pl;
    func_00206730(p + 0xAEC);
    if (*(unsigned char *)(p + 0xAF4) == 0) {
        q = *(char **)(D_005BE09C + 0x23C);
        if (q && func_00132470(q + 0x70, p + 0x50) < 900.0f) {
            func_00330BD0(D_01DFABA0, 0x2B, p + 0x50, 0x22, 0);
            p[0xAF4] = 1;
        }
    }
    if (*(char **)(p + 0x21C) && *(int *)(*(char **)(p + 0x21C) + 8)) {
        p[4] = 2;
        p[5] = 0;
        return;
    }
    pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    func_00253110(p, *(char **)(*(char **)((char *)(func_002D9EB0(pl) * 4) + (int)pl + 0x1390) + 0x104) + 0x30, 3, *(float *)(p + 0x10));
    if (func_002536B0(p, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50)) {
        p[4] = 2;
        p[5] = 0;
        return;
    }
    m = D_00586520;
    func_00133890(p + 0x150, p + 0xF0, &m);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
    func_00195E20(D_005BE098, p);
}

extern "C" void func_002D54E0(char *p) {
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) = *(float *)(p + 0x38DC) + *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (!(t < D_005BE1E0) && t < D_005BCDFC) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)((float)D_005BCE00 * *(float *)(p + 0x10)));
        }
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) p[0x1E1] = 1;
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 2) {
            if ((unsigned char)func_0034B6B0(p + 0x50, p + 0x32EC, p, 0.0f) == 1) {
                func_002D2270(p, 0x14);
                func_001ACC30(D_005BE09C, 2, 0x32, 0x14, 0);
                func_0036DF10(D_005BE1A8, 0, 1, 0x78, 0x1E, 0);
                func_00207480(3, 0x319, (M207 *)(p + 0x1EF0), 0x10);
            }
        }
        break;
    }
    func_002D6C50(p);
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00207480(3, 0x319, *(M207 **)(*(char **)(p + 0x674) + 0x104), 0x10);
    }
}

class O356 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
    virtual void mCC(char *);
};

extern "C" void func_00356710(char *p) {
    char *q = p + 0x7920;
    ((O356 *)(p + 0x72C0))->mC8(q);
    ((O356 *)(p + 0x72C0))->mCC(q);
    ((O356 *)(p + 0x42C0))->mCC(q);
    ((O356 *)(p + 0xC0))->mCC(q);
    ((O356 *)(p + 0x6C0))->mCC(q);
    ((O356 *)(p + 0xCC0))->mCC(q);
    ((O356 *)(p + 0x12C0))->mCC(q);
    ((O356 *)(p + 0x18C0))->mCC(q);
    ((O356 *)(p + 0x1EC0))->mCC(q);
    ((O356 *)(p + 0x24C0))->mCC(q);
    ((O356 *)(p + 0x2AC0))->mCC(q);
    ((O356 *)(p + 0x30C0))->mCC(q);
    ((O356 *)(p + 0x3CC0))->mCC(q);
    ((O356 *)(p + 0x4EC0))->mCC(q);
    ((O356 *)(p + 0x48C0))->mCC(q);
    ((O356 *)(p + 0x36C0))->mCC(q);
    ((O356 *)(p + 0x54C0))->mCC(q);
    ((O356 *)(p + 0x5AC0))->mCC(q);
    ((O356 *)(p + 0x60C0))->mCC(q);
    ((O356 *)(p + 0x66C0))->mCC(q);
    ((O356 *)(p + 0x6CC0))->mCC(q);
}

class O43D {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54();
    virtual void m58(int, int, int, int);
    virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78();
    virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98();
    virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void mB4(int, int, int, int);
};

static inline int flag_43D(int s) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    if (s < 32) {
        unsigned int *w = (unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18);
        return (*w & (1 << (s & 31))) != 0;
    } else {
        int t = s - 32;
        unsigned int *w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
        return (*w & (1 << (t & 31))) != 0;
    }
}

extern "C" void func_0043D340(char *p) {
    short s;
    p[0x45] = 6;
    if (*(unsigned char *)(p + 0x33A) == 0) return;
    p[0x1400] = 0;
    ((O43D *)(p + 0x340))->m58(*(int *)(p + 0x1404), *(int *)(p + 0x1408), 0, 0);
    ((O43D *)(p + 0x940))->m58(*(int *)(p + 0x1414), *(int *)(p + 0x1418), 0, 0);
    func_0043D940(p);
    ((O43D *)(p + 0x340))->mB4(0, 0, 0, 0);
    ((O43D *)(p + 0x940))->mB4(0, 0, 0, 0);
    ((O43D *)(p + 0xF40))->mB4(0, 0, 0, 0);
    D_005BC348 = 0;
    D_005BE138 = 1;
    D_005BE13C = p;
    D_005BC34C = 3.5f;
    D_005BE140 = 0;
    s = *(short *)(p + 0x338);
    if (s != -1 && flag_43D(s)) {
        p[0x1400] = 1;
        func_0043D9F0(p);
        D_005BE138 = 0;
        D_005BC348 = -1;
        D_005BE13C = 0;
        D_005BC34C = 1.0f;
        D_005BE140 = 0;
        p[0x1424] = 0;
    }
    *(int *)(p + 0xC) |= 0x10;
}

class O425 {
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

extern "C" O425 *func_0042E520(char *, unsigned int, int);
extern "C" void func_0024DA80(char *, int, int);
extern "C" void func_003B4D80(char *, int, int);
extern "C" void func_003B6490(char *, int);
extern "C" int func_003B3F70(char *);
extern "C" void func_003B4840(char *);
extern "C" void func_003B4B60(char *, int);
extern "C" void func_003B4F60(char *);
extern "C" int func_003B5A00(char *, short);
extern "C" void func_003B6060(char *);
extern "C" void func_003B6090(char *);
extern "C" float D_005BE1DC;
extern "C" float D_005BCDF8;
extern "C" short D_005BCDF0[4];
extern "C" int func_0034B800(char *, char *, short, short, float);
extern "C" char *func_002D6540(char *);
extern "C" char D_00565634[];
extern "C" char D_00565636[];
extern "C" char D_00565638[];
extern "C" float D_005BE1C8;
extern "C" float D_005BCDA8;
extern "C" short D_005BCDA0[4];
extern "C" char D_00565644[];
extern "C" char D_00565646[];
extern "C" char D_00565648[];
extern "C" float D_005BE1D4;
extern "C" float D_005BCDD8;
extern "C" short D_005BCDD0[4];
extern "C" char D_00565654[];
extern "C" char D_00565656[];
extern "C" char D_00565658[];
extern "C" float D_005BE1D8;
extern "C" float D_005BCDE8;
extern "C" short D_005BCDE0[4];
extern "C" void func_00248BB0(char *, int);
extern "C" void func_002D8BA0(char *);
extern "C" void func_002E0000(char *, int);
extern "C" void func_00249560(char *, int, int, int, int, int, float);
extern "C" void func_00249610(char *, int, int, int, int, int, float);
extern "C" int func_002242C0(char *);
extern "C" void func_00105760(float *, float *, float);
extern "C" char D_00666710[];
extern "C" unsigned short D_0066671A[];
extern "C" unsigned short func_001AE770(char *, int);
extern "C" void func_0021C7A0(char *, int);
extern "C" unsigned char func_0023EB30(char *);

extern "C" void func_004252D0(char *p) {
    unsigned int i;
    O425 *o;
    char *e;
    *(int *)(p + 0x110) |= 0x40000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        for (i = 0; i < 4; i++) {
            o = func_0042E520(p, i, *(unsigned char *)(p + 0x3AB));
            if (o) o->m130();
        }
        func_0034BA60(0x23, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        *(float *)(p + 0x3B8) = 80.0f;
        p[6] = 1;
    case 1:
        if (func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            func_0034BA60(0x2E, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            *(float *)(p + 0x3B8) = 20.0f;
            p[6] = 2;
        }
        break;
    case 2:
        if (func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            func_003FA440(p, -1);
            if (*(char **)(p + 0x450) == 0) {
                *(char **)(p + 0x450) = func_00207480(3, 0x1F8, 0, 0x10);
                if (*(char **)(p + 0x450)) {
                    e = *(char **)(p + 0x450);
                    *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0x520) + 0x104);
                    e[0x9A] = 0;
                    (*(char **)(p + 0x450))[0x3A] = 1;
                }
            }
            *(float *)(p + 0x3B8) = 220.0f;
            p[6] = 3;
        }
        break;
    case 3:
        if (func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) func_003FA3F0(p, 0);
        break;
    }
}

class O3B2 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual float m28(int);
};

static inline unsigned char e800_3B2(char *p) {
    return func_0024E800(p);
}

static inline unsigned char both_3B2(char *p) {
    if (e800_3B2(p + 0x1D00) == 1 && e800_3B2(p + 0x1DD0) == 1) return 1;
    return 0;
}

extern "C" void func_003B2DB0(char *p, int flag) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x25;
        func_0024DA80(p + 0x1D00, 0, 0x25);
        func_0024DA80(p + 0x1DD0, 0, 0x25);
        (*(unsigned char *)(p + 5))++;
        if (flag && *(short *)(p + 0x20D2) != 0x1F) func_003B4D80(p, 0xFFFF, 1);
        func_003B6490(p, 0);
        break;
    case 1:
        if (flag) func_003B4D80(p, 0x400, 0);
        if (!(((O3B2 *)(p + 0x704))->m28(0) < 25.0f) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            return;
        }
        if (both_3B2(p) == 1) func_003B4B60(p, 2);
        break;
    }
    func_003B4F60(p);
    if (flag && *(int *)(p + 0x2210) == *(int *)(p + 0x21FC) && (unsigned char)func_003B5A00(p, *(int *)(p + 0x21FC)) == 0) {
        func_003B6060(p);
        return;
    }
    func_003B6090(p);
}

extern "C" void func_002D5300(char *p) {
    char *o;
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 40.0f;
    case 1:
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (t < 0.0f) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x38DC) = 30.0f;
        }
        break;
    case 2:
        *(short *)(p + 0x38FC) += 1092.2667f * *(float *)(p + 0x10);
        *(float *)(p + 0x38DC) -= *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (t < 0.0f) (*(unsigned char *)(p + 5))++;
        break;
    case 3:
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6AC) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6AC) + 0x104);
            o[0x9A] = 3;
        }
    }
}

extern "C" void func_002D4A20(char *p) {
    char *o;
    float t;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) += *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (!(t <= D_005BE1DC) && t < D_005BCDF8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDF0[*(unsigned char *)(p + 0x38D0)]));
        }
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
            func_0024E7B0(p + 0x2F70, 0, 1);
            func_001ACC30(D_005BE09C, 2, 0x28, 0x1E, 0);
            func_0036DF10(D_005BE1A8, 0, 1, 0x5A, 0xA, 0);
            func_00207480(3, 0x316, (M207 *)(p + 0x1EF0), 0x10);
        }
        if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6C8) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6C8) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}

extern "C" void func_002D40C0(char *p) {
    char *o;
    float t;
    float a;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) = *(float *)(p + 0x38DC) + *(float *)(p + 0x10);
        a = D_005BE1C8;
        t = *(float *)(p + 0x38DC);
        if (!(t < a) && t <= a + D_005BCDA8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            *(short *)(p + 0x37D8) = *(short *)(p + 0x37D8) + 0x5B0;
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDA0[*(unsigned char *)(p + 0x38D0)]));
        }
    if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 2) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 2);
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)D_00565634 + *(short *)(p + 0x38FC), *(short *)D_00565636, *(float *)D_00565638) == 1) func_002D2270(p, 0xE);
        o = func_002D6540(p);
        if (o && (unsigned char)func_0034B800(o + 0x50, p + 0x50, *(short *)D_00565634 + *(short *)(p + 0x38FC), *(short *)D_00565636, *(float *)D_00565638) == 1) func_002D2270(p, 0xE);
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6AC) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6AC) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}

extern "C" void func_002D4520(char *p) {
    char *o;
    float t;
    float a;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) += *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (!(t <= D_005BE1D4) && t < D_005BCDD8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDD0[*(unsigned char *)(p + 0x38D0)]));
        }
    if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 1);
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)D_00565644 + *(short *)(p + 0x38FC), *(short *)D_00565646, *(float *)D_00565648) == 1) func_002D2270(p, 0x19);
        o = func_002D6540(p);
        if (o && (unsigned char)func_0034B800(o + 0x50, p + 0x50, *(short *)D_00565644 + *(short *)(p + 0x38FC), *(short *)D_00565646, *(float *)D_00565648) == 1) func_002D2270(p, 0x19);
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6C8) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6C8) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}

extern "C" void func_002D47A0(char *p) {
    char *o;
    float t;
    float a;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        func_0031E570(p + 0x1D0);
        *(float *)(p + 0x38DC) = 0.0f;
    case 1:
        *(float *)(p + 0x38DC) += *(float *)(p + 0x10);
        t = *(float *)(p + 0x38DC);
        if (!(t <= D_005BE1D8) && t < D_005BCDE8) {
            *(short *)(p + 0x37D8) = func_002D6DB0(p);
            func_0034B8C0(p + 0x38FC, p + 0x37D8, (int)(*(float *)(p + 0x10) * (float)D_005BCDE0[*(unsigned char *)(p + 0x38D0)]));
        }
    if ((unsigned char)func_0024E800(p + 0x2F70) == 1) func_002D2270(p, D_005BCD60[*(unsigned char *)(p + 0x38D0)]);
        if ((unsigned char)func_0024E780(p + 0x2F70, 0, 1) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 1);
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50, *(short *)D_00565654 + *(short *)(p + 0x38FC), *(short *)D_00565656, *(float *)D_00565658) == 1) func_002D2270(p, 0x1A);
        o = func_002D6540(p);
        if (o && (unsigned char)func_0034B800(o + 0x50, p + 0x50, *(short *)D_00565654 + *(short *)(p + 0x38FC), *(short *)D_00565656, *(float *)D_00565658) == 1) func_002D2270(p, 0x1A);
        }
        break;
    }
    if ((unsigned char)func_0024E780(p + 0x2F70, 0, 4) == 1) {
        func_0024E7B0(p + 0x2F70, 0, 4);
        func_00277DE0(p + 0x37E0, D_00565700, *(int *)(*(char **)(p + 0x6AC) + 0x104), 1);
        func_00277E70(p + 0x37E0);
        func_00277ED0(p + 0x37E0);
        func_00278060(p + 0x37E0, D_01CAFF14[0]);
        o = func_00207480(3, 0x17B, 0, 0x10);
        if (o) {
            *(int *)(o + 0x90) = *(int *)(*(char **)(p + 0x6AC) + 0x104);
            o[0x9A] = 3;
        }
    }
    func_002D6C50(p);
}

class V226 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124(); virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144(); virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); 
    virtual void f164();
};

extern "C" unsigned char func_00226820(char *p, unsigned char a, int b, int c) {
    if (*(unsigned short *)(p + 0x24C6) == 0x619 || *(unsigned short *)(p + 0x24C6) == 0x61A) return 0;
    if (*(unsigned char *)(p + 0x28A0) != *(unsigned char *)(p + 0x28A1)) {
    *(signed char *)(p + 0x28A0) = *(signed char *)(p + 0x28A1);
    *(unsigned char *)(p + 0x28B7) = 1;
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        *(float *)(p + 0x4884) = 1.0f;
    } else {
        *(float *)(p + 0x4884) = 1.03f;
    }
    func_00248BB0(p, 3);
    if (*(unsigned char *)(p + 0x28AA) != 2) func_002D8BA0(p);
    func_0028C740(p + 0x47A0);
    if (*(unsigned char *)(p + 0x28AE) == 1) {
        *(unsigned char *)(p + 0x2AE0) = *(signed char *)(p + 0x28A8) + 1;
    } else {
        *(unsigned char *)(p + 0x2AE0) = 0;
    }
    func_002E0000(p, *(unsigned char *)(p + 0x2AE0));
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        if (!(*(float *)(p + 0x2AD8) <= *(float *)(p + 0x2AAC))) *(float *)(p + 0x2AD8) = *(float *)(p + 0x2AAC);
        if (!(*(float *)(p + 0x2ADC) <= *(float *)(p + 0x2AB0))) *(float *)(p + 0x2ADC) = *(float *)(p + 0x2AB0);
    } else {
        *(float *)(p + 0x2AD8) = *(float *)(p + 0x2AAC);
        *(float *)(p + 0x2ADC) = *(float *)(p + 0x2AB0);
    }
    if (a == 1) {
        func_00249560(p, b, c, -1, 0, 0, -1.0f);
        func_00249610(p, b, c, -1, 0, 0, -1.0f);
    }
    ((V226 *)p)->f164();
    return 1;
    }
    return 0;
}

class V170a {
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
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void m170();
};

static inline void set4_205(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

extern "C" void func_00205480(char *p) {
    float m90[16] __attribute__((aligned(16)));
    float v80[4] __attribute__((aligned(16)));
    float m40[16] __attribute__((aligned(16)));
    unsigned int i;
    unsigned int n;
    func_00105300((char *)m90, (int)(p + 0x4940));
    if ((unsigned char)func_002242C0(p) == 1 && *(unsigned char *)(p + 0xD6) == 0)
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m90) : "memory");
    func_00104B80(p + 0x50, (char *)m90, p + 0x50);
    set4_205(v80, 0.0f, 0.0f, 1.0f, 0.0f);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m40) : "memory");
    set4_205(m40 + 12, 0.0f, 0.0f, 1.0f, 0.0f);
    func_00105760(m40, m40, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    func_00104B80((char *)v80, (char *)m40, (char *)v80);
    func_00104B80((char *)v80, (char *)m90, (char *)v80);
    *(short *)(p + 0x90) = func_00131D10(v80[0], v80[2]);
    n = *(unsigned char *)(p + 0x28A0) * 24;
    for (i = n; i < n + 24; i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x1380) && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1380) + 0x104)) {
            func_00104C00(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1380) + 0x104), (char *)m90, *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1380) + 0x104));
            *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1380) + 0x104) + 0x3C) = 1.0f;
        }
    }
    ((V170a *)p)->m170();
}

class VFCa {
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
    virtual void mFC(unsigned int);
    virtual unsigned char m100(unsigned int, float *, float *);
};

extern "C" VFCa *func_002F2EF0(char *, char *, float);
extern "C" void func_002965E0(char *, int);

extern "C" int func_0023E960(char *p) {
    VFCa *o;
    unsigned int i;
    float f;
    float v[4] __attribute__((aligned(16)));
    i = 0;
    if (*(unsigned int *)(p + 0x2898) & 2) {
        if ((*(unsigned short *)(p + 0x49C4) & D_0066671A[func_001AE770(D_00666710, 0x40)]) ||
            (*(unsigned char *)(p + 0x2848) == 0x11 && *(unsigned char *)(p + 0x2905) == 1)) {
            if (!(*(float *)(p + 0x2914) <= 0.0f)) return 0;
            o = func_002F2EF0(*(char **)(*(char **)D_01CAFF0C + 0x20), p + 0x50, 500.0f);
            if (o) {
                for (; o->m100(i, v, &f) == 1; i++) {
                    if (func_00132470((char *)v, p + 0x50) < f) {
                        o->mFC(i);
                        *(float *)(p + 0x2914) = *(float *)(*(char **)(p + 0x283C) + 0x2DC);
                        func_0021C7A0(p, 0x1E);
                        return 1;
                    }
                }
            }
            if (func_0023EB30(p) == 1) {
                func_0021C7A0(p, 0x1E);
                return 1;
            }
        }
    }
    return 0;
}

class Snd29C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void m1C(unsigned int, int, int);
    virtual void m20(unsigned int, int, int);
    virtual void m24(int, int);
    virtual void m28(int, int, int);
    virtual int m2C();
};

extern "C" Snd29C *D_005BC1A8;
extern "C" void func_003F3A90(char *);
extern "C" void func_004E1020(char *);
extern "C" void func_004E1520(char *);
extern "C" void func_004E1690(char *);
extern "C" void func_004E1990(char *);
extern "C" int func_0034E640(char *, char *, unsigned char);
extern "C" int func_0034F1C0(int);
extern "C" int func_0034F1D0(int);
extern "C" unsigned char func_00404740(char *, int);
extern "C" void func_00404720(char *);
extern "C" char D_00666750[];
extern "C" char D_01DFA310[];
extern "C" int func_001AFB90(char *, int, int, int);
extern "C" void func_0030E580(char *, char *);
extern "C" char *func_0048EB80(char *, signed char, unsigned char, unsigned char);
extern "C" int func_0048F810(char *);
extern "C" int func_0048F820(char *);
extern "C" int func_0048F850(char *);
extern "C" void func_001AF080(char *, int);
extern "C" void func_0030E910(char *, int, int);
extern "C" char *func_0050B800(char *, int);
extern "C" int func_0050C1C0(char *);
extern "C" char D_01DFC550[];
extern "C" signed char D_00666712[];
extern "C" void func_004EF480(char *, int);
extern "C" char *func_004E3A30(char *, signed char);
extern "C" int func_004F1AB0(char *);
extern "C" int func_004F1D30(char *);
extern "C" void func_004EF4C0(char *);
extern "C" int D_01CAFF38[];
extern "C" float D_0058219C[];
extern "C" float D_005821B4[];
extern "C" char D_00582170[];
extern "C" void func_0033A660(char *, int);
extern "C" void func_00196070(char *);
extern "C" void func_001960F0(char *, int);
extern "C" void func_001C3FB0(char *);
extern "C" void func_001ECBE0(char *);
extern "C" int func_001EC640(char *);
extern "C" void func_001AE8F0(char *);
extern "C" void func_001B0EF0(void);
extern "C" char *func_001AF3F0(char *, char *, int, int);
extern "C" void func_001AE9B0(char *);
extern "C" int func_0032FD00(char *, int);
extern "C" void func_002F9780(char *, int, int);
extern "C" int func_0032FCD0(char *, int);
extern "C" void func_002F9790(char *, int, int);
extern "C" int func_0013D670(char *);
extern "C" void func_002F97B0(char *, int, int, int, int);
extern "C" int func_002F9800(char *, int);
extern "C" void func_00330FE0(char *, char *);
extern "C" void func_002F9770(char *, int);
extern "C" char *D_005BE0D8;
extern "C" int D_005BBA10;
extern "C" int D_005BC768;
extern "C" char D_006480D0[];
extern "C" char D_01C61900[];
extern "C" char D_00577980[];
extern "C" float D_005BDA34;
extern "C" char D_01C61820[];
extern "C" void func_001B6D50(char *, int, int, int, unsigned int, int, int *, int);
extern "C" int func_004E5DC0(char *);
extern "C" int func_004B13B0(unsigned char *, char *);
extern "C" int func_004B1EF0(int);
extern "C" int func_004B1F00(int);
extern "C" int func_0040B300(char *, int);
extern "C" void func_0040B2F0(char *);
extern "C" int D_00577CA0[];
extern "C" char D_00577E90[];
extern "C" short func_0034B940(char *, char *);
extern "C" char D_006663C0[];
extern "C" int D_00569E90[];
extern "C" int func_003F3F30(unsigned char *, int);
extern "C" int func_003F44F0(int);
extern "C" int func_003F44E0(int);
extern "C" int func_003F44D0(int);
extern "C" unsigned short func_001AE1E0(char *, int);
extern "C" int func_00417B70(char *, int);
extern "C" int func_00417270(char *);
extern "C" void func_002F2FB0(char *);
extern "C" char *func_002F3080(char *);
extern "C" char D_01DF5D20[];
extern "C" void func_002D9450(char *, int, int, float);
extern "C" void func_002DAB90(char *, int);
extern "C" float func_001F9C40(char *, int);
extern "C" int func_0021D320(char *, int, int, int, unsigned char);
extern "C" void func_0041D670(char *);
extern "C" unsigned char D_01CAFF3C[];
extern "C" unsigned char D_01CAFF3D[];
extern "C" void func_0043EEF0(char *, int);
extern "C" int func_004B5CD0(char *, int);
extern "C" int func_004B5200(char *);
extern "C" int func_00478340(unsigned char *, char *);
extern "C" int func_00478AC0(int);
extern "C" int func_00478AF0(int);
extern "C" int func_004107B0(char *, char *);
extern "C" int func_00411E50(int);
extern "C" void func_003B6140(char *);
extern "C" void func_003B62C0(char *);
extern "C" void func_003B61B0(char *);
extern "C" int func_003B5DC0(char *, char *, float, float);
extern "C" float D_005BDE14;
extern "C" float D_005BDE0C;
extern "C" float D_005BDE08;
extern "C" int func_004D2D90(char *);
extern "C" char *func_004D2740(char *);
extern "C" float func_004D32F0(char *);
extern "C" int func_004D2890(char *, float *, int, float);
extern "C" void func_0024DD30(char *);
extern "C" void func_0033B710(char *);
extern "C" void func_003369C0(char *);
extern "C" void func_00336E60(char *);
extern "C" void func_00337330(char *);
extern "C" void func_00337730(char *);
extern "C" void func_00337A30(char *);
extern "C" void func_00337D50(char *);
extern "C" void func_00337EC0(char *);
extern "C" void func_00337FF0(char *);
extern "C" void func_00338130(char *);
extern "C" void func_003382D0(char *);
extern "C" void func_00338410(char *);
extern "C" void func_00338540(char *);
extern "C" void func_00338640(char *);
extern "C" void func_00338740(char *);
extern "C" void func_003388D0(char *);
extern "C" void func_003389A0(char *);
extern "C" void func_00338C30(char *);
extern "C" void func_00338D00(char *);
extern "C" void func_00338E50(char *);
extern "C" void func_00338FF0(char *);
extern "C" void func_00339180(char *);
extern "C" void func_00339320(char *);
extern "C" void func_00339700(char *);
extern "C" void func_00339830(char *);
extern "C" void func_00339950(char *);
extern "C" void func_00339A80(char *);
extern "C" void func_00339B80(char *);
extern "C" void func_00339C40(char *);
extern "C" void func_00339D60(char *);
extern "C" void func_00339E80(char *);
extern "C" char D_01CB1290[];
extern "C" signed char D_00666718[];
extern "C" signed char D_00666719[];
extern "C" int D_00540350[];
extern "C" int D_01CB12BC[];
extern "C" int D_01DFC55C[];
extern "C" int D_01DFC558[];
extern "C" void func_001F3BF0(char *);
extern "C" int func_001F3CC0(char *, int, int, int);
extern "C" void func_0030E440(char *, int);
extern "C" int func_0013BF20(char *);
extern "C" int func_004F1980(char *);
extern "C" void func_0022E090(char *, int, int);
extern "C" void func_0030E540(char *);
extern "C" void func_00196C40(char *, int);
extern "C" void func_001349C0(short, short);
extern "C" void func_001ED3F0(void);
extern "C" void func_001ED310(void);
extern "C" char *func_00207470(int, int, float *);
extern "C" void func_00104E78(float *, char *);
extern "C" void func_003AD5C0(char *);
extern "C" void func_0043F130(char *);
extern "C" void func_0043F490(char *);
extern "C" void func_0043F570(char *);
extern "C" void func_0043F600(char *);
extern "C" void func_0043F810(char *);
extern "C" void func_0043F920(char *);
extern "C" void func_0043FAE0(char *);
extern "C" void func_0043F070(char *);
extern "C" int func_00487B90(char *, char *, int);
extern "C" int func_004D8EA0(char *, int);
extern "C" int func_004884F0(int);
extern "C" int func_00488520(int);
extern "C" char D_00645A30[];
extern "C" char D_01C77230[];
extern "C" char D_006011B4[];
extern "C" char D_00631538[];
extern "C" char D_01CAF67B[];
extern "C" int D_005BC660;
extern "C" void func_001B1120(int);
extern "C" void func_00195870(char *, int);
extern "C" char *func_001AEA60(char *, int, int);
extern "C" int func_002DDC30(char *, int);
extern "C" void func_00239C60(char *);
extern "C" void func_00239F40(char *);
extern "C" void func_0013E020(char *, int, int);
extern "C" void func_0013E040(char *, int, int);
extern "C" void func_003310C0(char *);
extern "C" void func_003311E0(char *);
extern "C" void func_00331080(char *);
extern "C" void func_0023A340(char *);
extern "C" void func_0023A350(char *);
extern "C" void func_00239DE0(char *);
extern "C" void func_00195520(char *, int);
extern "C" int func_00415240(char *, char *);
extern "C" int func_00304F30(char *, char *);
extern "C" int func_00415EB0(int);
extern "C" int func_004495C0(char *, char *);
extern "C" int func_0044A1D0(int);
extern "C" int func_0041C9A0(char *, char *, int);
extern "C" int func_0041D3C0(int);
extern "C" int func_0041D3F0(int);
extern "C" int func_0047D9B0(char *, char *);
extern "C" int func_0047DE20(int);
extern "C" int func_004B3780(char *, int, char *);
extern "C" int func_004B42B0(int);
extern "C" short D_0056B008[];
extern "C" int func_005041E0(char *, char *, char *, signed char, signed char);
extern "C" int func_00504EC0(int);
extern "C" int func_00441020(char *, char *, char *, int, signed char, signed char, signed char);
extern "C" int func_00442AB0(int);
extern "C" unsigned char func_00442AE0(int);
extern "C" unsigned char func_00442AF0(int);
extern "C" void func_00442B40(char *, int);
extern "C" int func_00442B00(int);
extern "C" char D_006011CC[];
extern "C" char D_00631550[];
extern "C" unsigned char D_01CAF679[];
extern "C" char D_01CAF67A[];
extern "C" char D_01CAF678[];
extern "C" char D_005BE110;
extern "C" void func_002390D0(char *, int);
extern "C" void func_003303F0(char *, int, int, int, int);
extern "C" void func_00331350(char *);
extern "C" void func_00239640(char *);
extern "C" void func_00370000(char *);
extern "C" void func_0036F540(char *);
extern "C" int func_001C6790(char *);
extern "C" void func_0033A620(char *, int, int);
extern "C" void func_00335EF0(char *, int);
extern "C" float func_001324E0(float *);
extern "C" void func_00448C50(float *, float *);
extern "C" void func_0033A580(char *);
extern "C" void func_0048D950(char *, int, int, int, int);
extern "C" void func_0048D990(char *);
extern "C" int func_0048DBC0(char *);
extern "C" int func_00509AA0(char *);
extern "C" void func_00509B10(char *);
extern "C" int func_00509F90(char *);
extern "C" int func_0050F270(char *);
extern "C" int func_0050F7F0(int);

extern "C" void func_0029CD10(char *p) {
    float v[4] __attribute__((aligned(16)));
    switch ((unsigned char)func_0024E780(p + 0x8980, 0, 0)) {
    case 1:
        func_0024E7B0(p + 0x8980, 0, 0);
        break;
    case 2:
        func_0024E7B0(p + 0x8980, 0, 0);
        func_00207480(3, 0xB4, (M207 *)(p + 0x9BB0), 0x10);
        func_001ACC30(D_005BE09C, 3, 100, 0x50, 0);
        D_005BC1A8->m20(0x80808080, 4, 0xFFFFF1);
        *(unsigned char *)(p + 0xA562) = 1;
        break;
    case 3: case 5:
        D_005BC1A8->m1C(0x80808080, 4, 0xFFFFF1);
        func_0024E7B0(p + 0x8980, 0, 0);
        v[0] = *(float *)(p + 0x9BE0);
        v[1] = *(float *)(p + 0x9BE4);
        v[2] = *(float *)(p + 0x9BE8);
        v[3] = 1.0f;
        func_0034BA60(0x26, (char *)v, *(signed char *)(p + 0x46), 0, 1);
        break;
    case 6: case 8:
        func_0024E7B0(p + 0x8980, 0, 0);
        v[0] = *(float *)(p + 0x9BE0);
        v[1] = *(float *)(p + 0x9BE4);
        v[2] = *(float *)(p + 0x9BE8);
        v[3] = 1.0f;
        func_0034BA60(0x1D, (char *)v, *(signed char *)(p + 0x46), 0, 1);
        break;
    case 0: case 4: case 7:
        break;
    }
    if (func_0024E800(p + 0x8980)) {
        *(unsigned char *)(p + 0x997C) = 0;
        *(unsigned char *)(p + 0x99EC) = 0;
        *(unsigned char *)(p + 0x9A5C) = 0;
        *(unsigned char *)(p + 0x9ACC) = 0;
        *(unsigned char *)(p + 0x9B3C) = 0;
        *(unsigned char *)(p + 0xA992) = 0;
        func_002965E0(p, 0xFFFF);
    }
}

class V130 {
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
    virtual void m130();
    virtual void d75();
    virtual void m138();
    virtual void m13C();
};

extern "C" void func_004E0BC0(char *p) {
    func_003F3A90(p + 0x220);
    switch (*(unsigned char *)(p + 4)) {
    case 0: ((V130 *)p)->m130(); break;
    case 1: func_004E1020(p); break;
    case 2: func_004E1520(p); break;
    case 3: func_004E1690(p); break;
    case 4: func_004E1990(p); break;
    case 5: ((V130 *)p)->m138();
    case 6: ((V130 *)p)->m13C(); break;
    }
}

static inline int ok404(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

extern "C" void func_00404180(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok404(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) == 1) {
            (*(int *)(p + 8))++;
            *(int *)(p + 0x184) = func_0034E640(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), p + 0x5C, *(unsigned char *)(p + 0x188));
            *(unsigned char *)(p + 0x188) = 0;
            if (*(int *)(p + 0x184) == 0) {
                *(int *)(p + 8) = 8;
            } else {
                *(int *)(p + 0x10) = 0xC;
                D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
            }
        }
        break;
    case 1:
        if (--*(int *)(p + 0x10) < 0) {
            (*(int *)(p + 8))++;
            D_005BC1A8->m28(0, 1, 0xFFFFFF);
        }
        break;
    case 2:
        if (func_0034F1C0(*(int *)(p + 0x184))) {
            (*(int *)(p + 8))++;
            *(unsigned char *)(p + 0x16) = func_00404740(p, func_0034F1D0(*(int *)(p + 0x184)));
        }
        break;
    case 3:
        *(int *)(p + 4) = 5;
        (*(int *)(p + 8))++;
        break;
    case 4:
        *(int *)(p + 0x10) = 0x18;
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        (*(int *)(p + 8))++;
        break;
    case 5:
        if (--*(int *)(p + 0x10) < 0) {
            (*(int *)(p + 8))++;
            D_005BC1A8->m28(0, 1, 0xFFFFFF);
            if (*(int *)(p + 0x184)) {
                func_001AD140(*(char **)(p + 0x184));
                *(int *)(p + 0x184) = 0;
            }
        }
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 8:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

static inline int ok48D(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

static inline char *inner48D(char *q) {
    if (*(unsigned int *)(q + 4) < 0x13) return 0;
    if (*(int *)(q + 0x50) == 0) return 0;
    return q + *(int *)(q + 0x50);
}

static inline char *chunk48D(char *h) {
    if (**(unsigned short **)(h + 8) == 0) return inner48D(*(char **)(h + 0xC));
    return *(char **)(h + 0xC);
}

extern "C" void func_0048DBE0(char *p) {
    char *o;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(int *)(p + 0x1C) = func_001AFB90(D_00666750, 0x1388, 0, 8);
        (*(int *)(p + 8))++;
    case 1:
        if ((unsigned char)ok48D(*(char **)(p + 0x1C)) == 1) {
            func_0030E580(D_01DFA310, chunk48D(*(char **)(p + 0x1C)));
            if ((*(char **)(p + 0x30) = func_0048EB80(*(char **)(p + 0x1C), *(signed char *)(p + 0x34), *(unsigned char *)(p + 0x18), *(unsigned char *)(p + 0x19))) == 0) {
                *(unsigned char *)(p + 0x2B) = 2;
                *(int *)(p + 8) = 7;
            } else {
                (*(int *)(p + 8))++;
            }
        }
        break;
    case 2:
        if ((unsigned char)func_0048F810(*(char **)(p + 0x30)) == 1) {
            D_005BC1A8->m1C(0x80000000, 0x20, 0xFFFFFF);
            (*(int *)(p + 8))++;
        }
        break;
    case 3:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            D_005BC1A8->m28(0, 1, 0xFFFFFF);
            (*(int *)(p + 8))++;
        }
        break;
    case 4:
        *(unsigned char *)(p + 0x2B) = func_0048F820(*(char **)(p + 0x30));
        switch (*(unsigned char *)(p + 0x2B)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x2A) = func_0048F850(*(char **)(p + 0x30));
            (*(int *)(p + 8))++;
            break;
        case 2:
            (*(int *)(p + 8))++;
            break;
        }
        break;
    case 5:
        D_005BC1A8->m20(0x80000000, 0x20, 0xFFFFFF);
        (*(int *)(p + 8))++;
        break;
    case 6:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 8))++;
        break;
    case 7:
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        if (*(char **)(p + 0x30)) {
            func_001AD140(*(char **)(p + 0x30));
            *(int *)(p + 0x30) = 0;
        }
        (*(int *)(p + 8))++;
        break;
    case 8: case 9:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 10:
        if (*(int *)(p + 0x1C)) {
            func_001AF080(D_00666750, *(int *)(p + 0x1C));
            *(int *)(p + 0x1C) = 0;
        }
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        (*(int *)(p + 4))++;
        *(int *)(p + 8) = 0;
        break;
    }
}

static inline int ok48F(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

static inline char *inner48F(char *q) {
    if (*(unsigned int *)(q + 4) < 9) return 0;
    if (*(int *)(q + 0x28) == 0) return 0;
    return q + *(int *)(q + 0x28);
}

static inline char *chunk48F(char *h) {
    if (**(unsigned short **)(h + 8) == 0) return inner48F(*(char **)(h + 0xC));
    return *(char **)(h + 0xC);
}

extern "C" void func_0048E2A0(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(int *)(p + 0x1C) = func_001AFB90(D_00666750, 0x33F, 0, 8);
        (*(int *)(p + 8))++;
    case 1:
        if ((unsigned char)ok48F(*(char **)(p + 0x1C)) == 1) {
            func_0030E580(D_01DFA310, chunk48F(*(char **)(p + 0x1C)));
            if ((*(char **)(p + 0x3C) = func_0050B800(*(char **)(p + 0x1C), *(int *)(p + 0x40))) == 0) {
                *(unsigned char *)(p + 0x2B) = 2;
                *(int *)(p + 8) = 6;
            } else {
                D_005BC1A8->m1C(0x80000000, 0x20, 0xFFFFFF);
                (*(int *)(p + 8))++;
            }
        }
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            D_005BC1A8->m24(0, 0);
            (*(int *)(p + 8))++;
        }
        break;
    case 3:
        *(unsigned char *)(p + 0x2B) = func_0050C1C0(*(char **)(p + 0x3C));
        switch (*(unsigned char *)(p + 0x2B)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x2A) = 5;
            *(int *)(p + 0x40) = (*(int *)(*(char **)(p + 0x3C) + 0x39CC) << 16) | *(unsigned short *)(*(char **)(p + 0x3C) + 0x39C0);
            *(int *)(p + 0x44) = *(int *)(*(char **)(p + 0x3C) + 0x39D4);
            (*(int *)(p + 8))++;
            break;
        case 2:
            *(int *)(p + 0x40) = 0;
            *(int *)(p + 0x44) = -1;
            (*(int *)(p + 8))++;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x20, 0xFFFFFF);
        (*(int *)(p + 8))++;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 8))++;
        break;
    case 6:
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        if (*(char **)(p + 0x3C)) {
            func_001AD140(*(char **)(p + 0x3C));
            *(int *)(p + 0x3C) = 0;
        }
        (*(int *)(p + 8))++;
        break;
    case 7: case 8:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 9:
        if (*(int *)(p + 0x1C)) {
            func_001AF080(D_00666750, *(int *)(p + 0x1C));
            *(int *)(p + 0x1C) = 0;
        }
        func_0030E910(D_01DFA310, 0x4E20, 0x5207);
        (*(int *)(p + 4))++;
        *(int *)(p + 8) = 0;
        break;
    }
}

static inline int ok490(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

static inline char *inner490(char *q) {
    if (*(unsigned int *)(q + 4) < 0xF) return 0;
    if (*(int *)(q + 0x40) == 0) return 0;
    return q + *(int *)(q + 0x40);
}

static inline char *chunk490(char *h) {
    if (**(unsigned short **)(h + 8) == 0) return inner490(*(char **)(h + 0xC));
    return *(char **)(h + 0xC);
}

extern "C" void func_0048E5F0(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(signed char *)(p + 0x2C) = D_00666712[0];
        *(int *)(p + 0x1C) = func_001AFB90(D_00666750, 0x1B60, 0, 8);
        (*(int *)(p + 8))++;
    case 1:
        if ((unsigned char)ok490(*(char **)(p + 0x1C)) == 1) {
            func_004EF480(D_01DFC550, *(int *)(p + 0x14));
            func_0030E580(D_01DFA310, chunk490(*(char **)(p + 0x1C)));
            if ((*(char **)(p + 0x48) = func_004E3A30(*(char **)(p + 0x1C), *(signed char *)(p + 0x29))) == 0) {
                *(unsigned char *)(p + 0x2B) = 2;
                *(int *)(p + 8) = 6;
            } else {
                D_005BC1A8->m1C(0x80000000, 0x20, 0xFFFFFF);
                (*(int *)(p + 8))++;
            }
        }
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 8))++;
        break;
    case 3:
        switch (*(signed char *)(p + 0x29)) {
        case 3:
            if (func_004F1AB0(D_01DFC550)) {
                *(unsigned char *)(p + 0x2B) = 2;
                (*(int *)(p + 8))++;
            }
            break;
        case 4:
            switch (func_004F1D30(D_01DFC550)) {
            case 0:
                break;
            case 1:
                *(unsigned char *)(p + 0x2B) = 2;
                (*(int *)(p + 8))++;
                break;
            case 2:
                *(unsigned char *)(p + 0x34) = 0;
                *(unsigned char *)(p + 0x2B) = 1;
                (*(int *)(p + 8))++;
                break;
            }
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x20, 0xFFFFFF);
        (*(int *)(p + 8))++;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 8))++;
        break;
    case 6:
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        if (*(char **)(p + 0x48)) {
            func_001AD140(*(char **)(p + 0x48));
            *(int *)(p + 0x48) = 0;
        }
        (*(int *)(p + 8))++;
        break;
    case 7: case 8:
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 9:
        if (*(int *)(p + 0x1C)) {
            func_001AF080(D_00666750, *(int *)(p + 0x1C));
            *(int *)(p + 0x1C) = 0;
        }
        func_004EF4C0(D_01DFC550);
        func_0030E910(D_01DFA310, 0x4E20, 0x4E83);
        (*(int *)(p + 4))++;
        *(int *)(p + 8) = 0;
        break;
    }
}

class S376 {
public:
    virtual void z0();
    virtual void z1();
    virtual void z2();
    virtual void z3();
    virtual void z4();
    virtual void z5();
    virtual void z6();
    virtual void z7();
    virtual void z8();
    virtual void z9();
    virtual void z10();
    virtual void z11();
    virtual void z12();
    virtual void z13();
    virtual void z14();
    virtual void z15();
    virtual void z16();
    virtual void z17();
    virtual void z18();
    virtual void z19();
    virtual void z20();
    virtual void z21();
    virtual void z22();
    virtual void z23();
    virtual void z24();
    virtual void z25();
    virtual void z26();
    virtual void z27();
    virtual void z28();
    virtual void z29();
    virtual void z30();
    virtual void z31();
    virtual void z32();
    virtual void z33();
    virtual void z34();
    virtual void z35();
    virtual void z36();
    virtual void z37();
    virtual void z38();
    virtual void z39();
    virtual void z40();
    virtual void z41();
    virtual void z42();
    virtual void z43();
    virtual void z44();
    virtual void z45();
    virtual void z46();
    virtual void z47();
    virtual void z48();
    virtual void z49();
    virtual void z50();
    virtual void z51();
    virtual void z52();
    virtual void z53();
    virtual void z54();
    virtual void z55();
    virtual void z56();
    virtual void z57();
    virtual void z58();
    virtual void z59();
    virtual void z60();
    virtual void z61();
    virtual void z62();
    virtual void z63();
    virtual void z64();
    virtual void z65();
    virtual void z66();
    virtual void z67();
    virtual void z68();
    virtual void z69();
    virtual void z70();
    virtual void z71();
    virtual void z72();
    virtual void z73();
    virtual void z74();
    virtual void z75();
    virtual void z76();
    virtual void z77();
    virtual void z78();
    virtual void z79();
    virtual void z80();
    virtual void z81();
    virtual void z82();
    virtual void z83();
    virtual void z84();
    virtual void z85();
    virtual void z86();
    virtual void z87();
    virtual void z88();
    virtual void z89();
    virtual void z90();
    virtual void z91();
    virtual void z92();
    virtual void z93();
    virtual void z94();
    virtual void z95();
    virtual void z96();
    virtual void z97();
    virtual void z98();
    virtual void z99();
    virtual void z100();
    virtual void z101();
    virtual void z102();
    virtual void z103();
    virtual void z104();
    virtual void z105();
    virtual void z106();
    virtual void z107();
    virtual void z108();
    virtual void z109();
    virtual void z110();
    virtual void z111();
    virtual void z112();
    virtual void z113();
    virtual void z114();
    virtual void z115();
    virtual void z116();
    virtual void z117();
    virtual float m1E0(int);
    virtual void z119();
    virtual void z120();
    virtual void z121();
    virtual void m1F0(int, int);
};

class A376 {
public:
    virtual void z0();
    virtual void z1();
    virtual void z2();
    virtual void z3();
    virtual void z4();
    virtual void z5();
    virtual void z6();
    virtual void z7();
    virtual void z8();
    virtual void z9();
    virtual void z10();
    virtual void z11();
    virtual void z12();
    virtual void z13();
    virtual void z14();
    virtual void z15();
    virtual void z16();
    virtual void z17();
    virtual void z18();
    virtual void z19();
    virtual void z20();
    virtual void z21();
    virtual void z22();
    virtual void z23();
    virtual void z24();
    virtual void z25();
    virtual void z26();
    virtual void z27();
    virtual void z28();
    virtual void z29();
    virtual void z30();
    virtual void z31();
    virtual void z32();
    virtual void z33();
    virtual void z34();
    virtual void z35();
    virtual void z36();
    virtual void z37();
    virtual void z38();
    virtual void mA4();
};

static inline int fl376(char *p) {
    return (*(unsigned int *)(p + 0x8FC) & 0x4000000) != 0;
}

extern "C" void func_003765C0(char *p, unsigned int k) {
    if (*(unsigned char *)(p + 4) == 2) return;
    switch (k) {
    case 0: case 1: case 6: case 8: case 9: case 10: case 11: case 12: case 18: case 19:
        if (fl376(p)) break;
        (*(unsigned char *)(p + 0x978))++;
        if (*(unsigned char *)(p + 0x978) > 1) {
            *(unsigned char *)(p + 0x978) = 0;
            func_00376B40(p, 0xD);
        } else {
            func_00376B40(p, 0x14);
        }
        break;
    case 2: case 3: case 4: case 5: case 7:
        if (fl376(p)) break;
        func_00376B40(p, 0xD);
        break;
    case 20: case 21:
        if (D_01CAFF38[0] == 0xE4) {
            if (*(unsigned char *)(p + 0x972) == 1) {
                *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)((S376 *)p)->m1E0((int)D_0058219C[0]);
                *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = (float)(int)D_005821B4[0];
                if (*(char **)(*(char **)D_01CAFF0C + 0x20)) func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
            }
        } else {
            ((S376 *)p)->m1F0(*(int *)(p + 0x148), (int)D_00582170);
        }
        ((A376 *)(p + 0x130))->mA4();
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
        *(unsigned char *)(p + 6) = 0;
        *(unsigned char *)(p + 7) = 0;
        *(int *)(p + 0x998) = 0;
        *(int *)(p + 0x948) = 0;
        break;
    case 13: case 14: case 15: case 16: case 17: case 22:
        break;
    }
}

class V33A {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void m1F4(char *, int);
};

extern "C" void func_0033A350(char *p) {
    char *q;
    func_0033A660(p, 0);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(char **)(p + 0x12E0) = func_00207480(3, 0x10B, 0, 0x10);
        q = *(char **)(p + 0x12E0);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x6B0) + 0x104);
            *(unsigned char *)(q + 0x9A) = 3;
            *(unsigned char *)(*(char **)(p + 0x12E0) + 0x3A) = 1;
        }
        if (*(char **)(p + 0x12B8) != 0) {
            func_001AD140(*(char **)(p + 0x12B8));
            *(char **)(p + 0x12B8) = 0;
        }
        *(float *)(p + 0x1368) = 30.0f;
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 30.0f;
            ((V33A *)p)->m1F4(p + 0x490, 0);
        }
        break;
    case 2:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 120.0f;
        }
        break;
    case 3:
        *(float *)(p + 0x1354) = *(float *)(p + 0x1354) - 0.008333334f * *(float *)(p + 0x10);
        if (*(float *)(p + 0x1354) < 0.0f) *(float *)(p + 0x1354) = 0.0f;
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1354) = 0.0f;
            if (*(char **)(p + 0xC8) != 0) {
                func_001AD140(*(char **)(p + 0xC8));
                *(char **)(p + 0xC8) = 0;
            }
        }
        break;
    case 4:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 60.0f;
        }
        break;
    case 5:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

static inline int okC70(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" void func_001EC140(char *p) {
    switch (*(signed char *)(p + 9)) {
    case 0:
        func_00196070(D_006480D0);
        func_001960F0(D_006480D0, 8);
        func_001C3FB0(D_01C61900);
        func_001ECBE0(p);
        D_005BC1A8->d1();
        *(unsigned char *)(p + 0x26C) = 1;
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
        *(unsigned char *)(p + 0xA) = 0;
    case 1:
        if ((unsigned char)func_001EC640(p) == 1) *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
        break;
    case 2:
        func_001AE8F0(D_00666750);
        func_001B0EF0();
        *(char **)(p + 0xC70) = func_001AF3F0(D_00666750, (char *)&D_005BBA10, 0, 0);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
    case 3:
        func_001AE9B0(D_00666750);
        if ((unsigned char)okC70(*(unsigned char **)(p + 0xC70)) == 0) break;
        func_002F9780(D_01DFABA0, 0, func_0032FD00(D_01DFABA0, 0));
        func_002F9790(D_01DFABA0, 0, func_0032FCD0(D_01DFABA0, 0));
        func_002F97B0(D_01DFABA0, 0, *(int *)(*(char **)(p + 0xC70) + 0xC), func_0013D670(*(char **)(p + 0xC70) + 0x10), 0);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
    case 4:
        if (func_002F9800(D_01DFABA0, 0) != 0) break;
        func_001AF080(D_00666750, *(int *)(p + 0xC70));
        func_00330FE0(D_01DFABA0, (char *)&D_005BC768);
        func_002F9770(D_01DFABA0, 0);
        *(signed char *)(p + 9) = *(signed char *)(p + 9) + 1;
    case 5:
        *(short *)(D_005BE0D8 + 0x50) = 0;
        *(int *)(p + 0xC58) = 0;
        *(unsigned char *)(p + 0x3CC) = 1;
        *(unsigned char *)(p + 8) = 1;
        *(unsigned char *)(p + 0xB) = 0;
        *(unsigned char *)(p + 0xA) = 0;
        *(unsigned char *)(p + 9) = 0;
        *(short *)(p + 0xE) = 0;
        *(short *)(p + 0xC) = 0;
        break;
    }
}

class V437 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void m1F0(int, char *);
};

static inline int notAB(char *p) { unsigned char r = 0; if (*(unsigned char *)(p + 0x47BC) != 0x1D && *(unsigned char *)(p + 0x47BC) != 0x1E) r = 1; return r; }

extern "C" void func_00437F10(char *p, unsigned int a) {
    *(signed char *)(p + 0x47BD) = *(signed char *)(p + 0x47BC);
    switch (a) {
    case 0: case 1: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
        switch (*(unsigned char *)(p + 0x47BE)) {
        case 0x2A: case 0x2B: case 0x2C: case 0x2D: case 0x53: case 0x54: case 0x55: case 0x56: case 0x57: case 0x58: case 0x59: case 0x5C: case 0x71: case 0x72: case 0x73:
            if (*(float *)(p + 0x47A4) < D_005BDA34) {
                *(unsigned char *)(p + 0x47BC) = 0x29;
                *(unsigned char *)(p + 0x47BF) = 0;
            }
            break;
        case 0x7B: case 0x7C: case 0x7D:
            if (*(float *)(p + 0x47A4) < D_005BDA34) {
                if (*(unsigned char *)(p + 0x485C) == 1) *(unsigned char *)(p + 0x47BC) = 0x2B;
                else *(unsigned char *)(p + 0x47BC) = 0x2A;
                *(unsigned char *)(p + 0x47BF) = 0;
                *(unsigned char *)(p + 0x485C) = *(unsigned char *)(p + 0x485C) != 1;
            }
            break;
        default:
            *(float *)(p + 0x3500) = 10.0f;
            *(unsigned char *)(p + 0x34BC) = 1;
            break;
        }
        break;
    case 2: case 3:
        if ((unsigned char)notAB(p) == 1) {
            if (*(int *)(p + 0x47C8) < 3) {
                if (*(int *)(p + 0x484C) >= 2) *(unsigned char *)(p + 0x47BC) = 0x20;
                else *(unsigned char *)(p + 0x47BC) = 0x1F;
            } else {
                *(unsigned char *)(p + 0x47BC) = 0x1F;
            }
            *(unsigned char *)(p + 0x47BF) = 0;
        }
        break;
    case 20:
        *(unsigned char *)(p + 0x47BC) = a;
        *(unsigned char *)(p + 0x47BF) = 0;
        ((V437 *)p)->m1F0(*(int *)(p + 0x148), D_00577980);
        break;
    case 21:
        *(unsigned char *)(p + 0x47BC) = a;
        *(unsigned char *)(p + 0x47BF) = 0;
        ((V437 *)p)->m1F0(*(int *)(p + 0x148), D_00577980);
        break;
    default:
        *(unsigned char *)(p + 0x47BC) = a;
        *(unsigned char *)(p + 0x47BF) = 0;
        break;
    }
}

class VCC {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void mCC(char *);
};

extern "C" void func_003323F0(char *p) {
    int c[4];
    float t;
    float w;
    int v;
    if (*(int *)(p + 0x2E90) == 0) return;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 9) != 0) return;
    if (*(unsigned char *)(p + 0x2E96) == 0) return;
    switch (*(unsigned char *)(p + 0x2E94)) {
    case 0:
        break;
    case 1:
        ((VCC *)(p + 0x380))->mCC(p + 0x2E50);
        break;
    case 2:
        ((VCC *)(p + 0x980))->mCC(p + 0x2E50);
        break;
    case 3:
        ((VCC *)(p + 0xF80))->mCC(p + 0x2E50);
        break;
    case 4:
        ((VCC *)(p + 0x1580))->mCC(p + 0x2E50);
        break;
    case 5:
        ((VCC *)(p + 0x1B80))->mCC(p + 0x2E50);
        break;
    case 6:
        ((VCC *)(p + 0x2180))->mCC(p + 0x2E50);
        break;
    case 7:
        ((VCC *)(p + 0x2780))->mCC(p + 0x2E50);
        break;
    }
    if (*(unsigned char *)(p + 0x2E96) == 1 && *(unsigned char *)(p + 0x2E94) > 0 && *(unsigned char *)(p + 0x2EB0) == 1) {
        t = *(float *)(p + 0x2E98) / 700.0f;
        w = 64.0f * t;
        if (t < 0.45f) {
            v = (*(int *)(p + 0x2EAC) << 8) + 0x800000FF;
            c[0] = c[1] = c[2] = c[3] = v;
        } else {
            v = (*(int *)(p + 0x2EAC) << 8) + 0x803200FF;
            c[0] = c[1] = c[2] = c[3] = v;
        }
        func_001B6D50(D_01C61820, 0x208, 0x2F, 0xFFFFF1, (unsigned int)w, 2, c, 4);
    }
}

class W2BC0 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void mD0();
};

static inline int ok180(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" int func_004E5B50(char *p) {
    unsigned char v;
    if (*(unsigned char *)(p + 0x3896) == 1) {
        if (*(unsigned char *)(p + 0x3894) == 1) *(unsigned char *)(p + 0x3895) = 1;
        else *(unsigned char *)(p + 0x3895) = 0;
    }
    switch (*(signed char *)(p + 0x3891)) {
    case 0:
        if (*(unsigned char *)(p + 0x3895) == 0) break;
        if (*(unsigned char *)(p + 0x3892) == *(unsigned char *)(p + 0x3890) && *(unsigned char *)(p + 0x3896) == 0) {
            *(unsigned char *)(p + 0x3895) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x3894) == 1) {
            *(unsigned char *)(p + 0x3894) = 0;
            *(unsigned char *)(p + 0x3891) = 1;
        } else {
            *(unsigned char *)(p + 0x3891) = 3;
        }
        break;
    case 1:
        *(signed char *)(p + 0x3891) = *(signed char *)(p + 0x3891) + 1;
        break;
    case 2:
        ((W2BC0 *)(p + 0x2BC0))->mD0();
        *(signed char *)(p + 0x3891) = *(signed char *)(p + 0x3891) + 1;
    case 3:
        if (*(unsigned char *)(p + 0x3895) == 0) break;
        v = *(unsigned char *)(p + 0x3890);
        if (!(0 < v && v < 21)) break;
        *(unsigned char *)(p + 0x3892) = v;
        if (*(int *)(p + 0x180) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x180));
            *(int *)(p + 0x180) = 0;
        }
        *(int *)(p + 0x180) = func_001AFB90(D_00666750, *(unsigned char *)(p + 0x3892) + 0x1B76, 0, 8);
        *(unsigned char *)(p + 0x3891) = 4;
    case 4:
        if ((unsigned char)ok180(*(unsigned char **)(p + 0x180)) != 1) break;
        if (*(unsigned char *)(p + 0x3895) == 0) {
            *(unsigned char *)(p + 0x3891) = 3;
            break;
        }
        if ((unsigned char)func_004E5DC0(p) == 0) return 0;
        *(unsigned char *)(p + 0x3893) = 0;
        ((W2BC0 *)(p + 0x2BC0))->m84(*(unsigned char *)(p + 0x3893), 1);
        *(unsigned char *)(p + 0x3891) = 5;
        break;
    case 5:
        if (*(unsigned char *)(p + 0x3893) < 0x40) {
            *(unsigned char *)(p + 0x3893) = *(unsigned char *)(p + 0x3893) + 8;
            ((W2BC0 *)(p + 0x2BC0))->m84(*(unsigned char *)(p + 0x3893), 1);
        }
        if (*(unsigned char *)(p + 0x3893) >= 0x40) {
            ((W2BC0 *)(p + 0x2BC0))->m8C();
            *(unsigned char *)(p + 0x3895) = 0;
            *(unsigned char *)(p + 0x3891) = 0;
        }
        break;
    default:
        return 0;
    }
    return 1;
}

static inline int ok014(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" void func_00409980(char *p) {
    int r;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok014(*(unsigned char **)(p + 0x14)) != 1) break;
        if ((*(int *)(p + 0x174) = func_004B13B0(*(unsigned char **)(p + 0x14), p + 0x4C)) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        D_005BC1A8->m28(0x80000000, 0, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)func_004B1EF0(*(int *)(p + 0x174)) != 1) break;
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 3:
        r = func_004B1F00(*(int *)(p + 0x174));
        switch ((unsigned char)r) {
        case 0:
            break;
        case 3: case 4: case 1: case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, r);
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x174) != 0) {
            func_001AD140(*(char **)(p + 0x174));
            *(char **)(p + 0x174) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 8:
        func_0040B2F0(p);
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

class W435 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual int m2E8();
    virtual void d2EC();
    virtual void d2F0();
    virtual void m2F4(int);
    virtual void d2F8();
    virtual void m2FC(int);
};

extern "C" void func_00435920(char *p) {
    float f;
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        *(unsigned char *)(p + 0x43B3) = 0xC;
        *(int *)(p + 0x4848) = D_00577CA0[*(int *)(p + 0x484C)];
    case 1:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((W435 *)p)->m2FC(0x8F);
        break;
    case 2:
        *(short *)(p + 0x47BA) = *(short *)(p + 0x160) - *(short *)(p + 0x4850);
        func_0034B8C0(p + 0x4850, p + 0x47BA, (int)(D_005BD9D8 * *(float *)(p + 0x10)));
        if (((W435 *)p)->m2E8() != 0x90) break;
        if (--*(int *)(p + 0x4848) > 0) {
            *(unsigned char *)(p + 0x47BF) = 1;
            break;
        }
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((W435 *)p)->m2FC(0xC);
        f = func_00132470(D_00577E90, p + 0x50);
        if (f < func_00132470(D_00577E90, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50)) *(short *)(p + 0x4850) = func_0034B940(D_00577E90, p + 0x50);
        else *(short *)(p + 0x4850) = func_0034B940(D_00577E90, p + 0x50) + 0x8000;
        break;
    case 3:
        if (((W435 *)p)->m2E8() != 0x90) break;
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        *(float *)(p + 0x4824) = -20.0f;
        break;
    case 4:
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x4824) * *(float *)(p + 0x10);
        if ((unsigned char)func_0034B6B0(p + 0x50, p + 0x4344, p, 0.0f) != 1) break;
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((W435 *)p)->m2FC(0xE);
        break;
    case 5:
        if (((W435 *)p)->m2E8() != 0x90) break;
        *(unsigned char *)(p + 0x43B3) = 2;
        ((W435 *)p)->m2F4(0x17);
        break;
    }
}

static inline int ok40A(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" void func_0040A9E0(char *p) {
    int v;
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        *(int *)(p + 0x14) = func_001AFB90(D_00666750, D_00569E90[*(unsigned char *)(p + 0x198)], 0, 8);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok40A(*(unsigned char **)(p + 0x14)) != 1) break;
        *(int *)(p + 0x188) = func_003F3F30(*(unsigned char **)(p + 0x14), *(signed char *)(p + 0x198));
        if (*(int *)(p + 0x188) == 0) {
            *(int *)(p + 0xC) = 7;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        if ((unsigned char)func_003F44F0(*(int *)(p + 0x188)) == 0) break;
        if ((unsigned char)D_005BC1A8->m2C() == 0) break;
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 3:
        if ((func_001AE1E0(D_006663C0, 0) & 0x50) == 0) break;
        func_003F44E0(*(int *)(p + 0x188));
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 4:
        if ((unsigned char)func_003F44D0(*(int *)(p + 0x188)) != 1) break;
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        if (*(char **)(p + 0x188) != 0) {
            func_001AD140(*(char **)(p + 0x188));
            *(char **)(p + 0x188) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 0xC) = *(unsigned int *)(p + 0xC) + 1;
        break;
    case 7:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        v = *(unsigned short *)(p + 0x198);
        switch ((unsigned char)v) {
        case 0x12:
            *(unsigned short *)(p + 0x198) = (v & 0xFF00) | 0x13;
            *(int *)(p + 0xC) = 0;
            break;
        case 0x13:
            *(unsigned short *)(p + 0x198) = (v & 0xFF00) | 0x14;
            *(int *)(p + 0xC) = 0;
            break;
        default:
            *(int *)(p + 8) = 2;
            *(int *)(p + 0xC) = 0;
            break;
        }
        break;
    default:
        *(int *)(p + 8) = 0xA;
        *(int *)(p + 0xC) = 0;
        break;
    }
}

class W2C00 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void mD0();
};

static inline int ok1D0(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" int func_00416FD0(char *p) {
    switch (*(signed char *)(p + 0x330C)) {
    case 0:
        if (*(unsigned char *)(p + 0x3311) == 0) break;
        if (*(unsigned char *)(p + 0x330D) == *(int *)(p + 0x3300) + *(signed char *)(p + 0x32F5)) {
            *(unsigned char *)(p + 0x3311) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x3310) == 1) {
            *(unsigned char *)(p + 0x330E) = 0x40;
            *(unsigned char *)(p + 0x330C) = 1;
        } else {
            *(unsigned char *)(p + 0x330C) = 5;
        }
        break;
    case 1:
        *(unsigned char *)(p + 0x330E) = *(unsigned char *)(p + 0x330E) - 0x10;
        if (0 < *(unsigned char *)(p + 0x330E)) {
            ((W2C00 *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x330E), 1);
        } else {
            ((W2C00 *)(p + 0x2C00))->m8C();
            *(unsigned char *)(p + 0x3310) = 0;
            *(unsigned char *)(p + 0x330C) = 2;
        }
        break;
    case 2: case 3:
        *(signed char *)(p + 0x330C) = *(signed char *)(p + 0x330C) + 1;
        break;
    case 4:
        ((W2C00 *)(p + 0x2C00))->mD0();
        *(signed char *)(p + 0x330C) = *(signed char *)(p + 0x330C) + 1;
    case 5:
        if (*(unsigned char *)(p + 0x3311) == 0) break;
        *(unsigned char *)(p + 0x330D) = *(int *)(p + 0x3300) + *(signed char *)(p + 0x32F5);
        if (*(int *)(p + 0x1D0) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x1D0));
            *(int *)(p + 0x1D0) = 0;
        }
        *(int *)(p + 0x1D0) = func_001AFB90(D_00666750, func_00417B70(p, *(unsigned char *)(p + 0x330D)), 0, 8);
        *(unsigned char *)(p + 0x330C) = 6;
    case 6:
        if ((unsigned char)ok1D0(*(unsigned char **)(p + 0x1D0)) != 1) break;
        if (*(unsigned char *)(p + 0x3311) == 0) {
            *(unsigned char *)(p + 0x330C) = 5;
            break;
        }
        if ((unsigned char)func_00417270(p) == 0) return 0;
        *(unsigned char *)(p + 0x330E) = 0;
        ((W2C00 *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x330E), 1);
        *(unsigned char *)(p + 0x330C) = 7;
        break;
    case 7:
        if (*(unsigned char *)(p + 0x330E) < 0x40) {
            *(unsigned char *)(p + 0x330E) = *(unsigned char *)(p + 0x330E) + 8;
            ((W2C00 *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x330E), 1);
        }
        if (*(unsigned char *)(p + 0x330E) >= 0x40) {
            ((W2C00 *)(p + 0x2C00))->m8C();
            *(unsigned char *)(p + 0x3311) = 0;
            *(unsigned char *)(p + 0x330C) = 0;
        }
        break;
    default:
        return 0;
    }
    return 1;
}

extern "C" void func_002E02C0(char *p, char *a) {
    char *q;
    char *e;
    bool found;
    switch (*(signed char *)(a + 1)) {
    case -1: case 0: case 7:
        break;
    case 2: case 5:
        q = func_00207480(3, 0x2C3, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        break;
    case 1:
        q = func_00207480(2, 0x1AA, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        found = false;
        func_002F2FB0(*(char **)(*(char **)D_01CAFF0C + 0x20));
        for (;;) {
            e = func_002F3080(*(char **)(*(char **)D_01CAFF0C + 0x20));
            if (e == 0) break;
            if (*(signed char *)(e + 0x46) == 0x29) {
                found = true;
                break;
            }
            if (*(signed char *)(e + 0x46) == 0x31) {
                found = true;
                break;
            }
        }
        if (!found) break;
        switch (*(signed char *)(e + 0x46)) {
        case 0x29:
            func_0034BA60(0x2A, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104) + 0x30, 0x29, 0, 1);
            break;
        case 0x31:
            func_0034BA60(0x21, *(char **)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104) + 0x30, 0x31, 0, 1);
            break;
        }
        break;
    case 4:
        q = func_00207480(2, 0x1A9, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        break;
    case 6:
        q = func_00207480(2, 0x1C2, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x1388) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        break;
    case 3:
        if (*(signed char *)(a + 0x18) != 7) break;
        q = func_00207480(3, 0x12F, 0, 0x20);
        if (q != 0) {
            *(int *)(q + 0x90) = *(int *)(*(char **)((char *)(func_002D9EB0(p) * 4) + (int)p + 0x138C) + 0x104);
            *(unsigned char *)(q + 0x9A) = 1;
        }
        break;
    }
}

static inline int has4000(char *p) { return (*(int *)(p + 0x45C) & 0x4000) != 0; }

extern "C" void func_0048BC90(char *p) {
    unsigned char b;
    unsigned char n;
    char *o;
    short d;
    b = 0;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    n = 0;
    switch (*(unsigned char *)(p + 0x4D1)) {
    case 0:
        break;
    case 1:
        *(float *)(o + 0x54) = *(float *)(o + 0x54) + *(float *)(p + 0x4C8);
        b = 1;
        *(float *)(p + 0x4C8) = *(float *)(p + 0x4C8) - 0.64f;
        n = 0xF;
        if ((unsigned char)func_0041D6B0(p + 0x4CC, *(float *)(p + 0x10)) == 1) {
            *(unsigned char *)(p + 0x4D1) = 2;
            *(float *)(p + 0x4CC) = 55.0f;
        }
        break;
    case 2:
        b = 1;
        n = 0xA;
        if ((unsigned char)func_0041D6B0(p + 0x4CC, *(float *)(p + 0x10)) == 1) {
            func_002D9450(o, 4, 0xA0E26B80, 0.0f);
            *(unsigned char *)(p + 0x4D1) = 3;
        }
        break;
    case 3:
        b = 1;
        n = 0xB;
        if (has4000(p) == 1) {
            *(int *)(p + 0x45C) = *(int *)(p + 0x45C) & ~0x4000;
            *(unsigned char *)(p + 0x4D1) = 4;
        }
        break;
    case 4:
        b = 1;
        n = 0xC;
        *(float *)(p + 0x4CC) = 44.0f;
        break;
    case 5:
        func_002D9450(o, 7, 0, 0.0f);
        *(unsigned char *)(p + 0x4D1) = 6;
    case 6:
        n = 0xE;
        func_002DAB90(o, 3);
        if ((unsigned char)func_0041D6B0(p + 0x4CC, func_001F9C40(D_01DF5D20, 0x87)) == 1) {
            *(unsigned char *)(p + 0x4D1) = 0;
            *(short *)(o + 0x90) = *(short *)(o + 0x90) - 0x8000;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x4D1) == 0) return;
    if ((unsigned char)func_0021D320(o, 1, *(unsigned char *)(p + 0x4D0), 0, n) == 0) {
        func_0041D670(p + 0x4E0);
        func_002D9450(o, 7, 0, 0.0f);
        func_0048AF80(p, 0);
        *(unsigned char *)(p + 0x4D1) = 0;
        return;
    }
    if (b & 1) {
        d = *(short *)(p + 0x90) - *(short *)(o + 0x90);
        func_0034B8C0(o + 0x90, (char *)&d, (int)(1092.0f * *(float *)(p + 0x10)));
        *(float *)(o + 0x84) = 6.283185f * ((float)*(short *)(o + 0x90) / 65536.0f);
    }
}

class W440 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void m38(char *, char *);
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void m64(char *, int, float, float, float);
    virtual float m68();
};

extern "C" void func_00440430(char *p, char *a, W440 *b, float *c) {
    float m[16] __attribute__((aligned(16)));
    float f;
    char *q;
    if (a == 0) return;
    if (b == 0) return;
    if (*(unsigned char *)(p + 0x7C5) == 0) return;
    switch (*(unsigned char *)(p + 0x7C0)) {
    case 2: case 3:
        return;
    case 0: case 1: case 4: case 5:
        f = *(float *)(a + 4);
        switch (D_01CAFF3C[0]) {
        case 0:
            f = f * 2.0f;
            break;
        case 1:
            break;
        case 2:
            f = f * 0.9f;
            break;
        case 3:
            f = f * 0.7f;
            break;
        case 4:
            f = f * 0.5f;
            break;
        }
        f = f * b->m68();
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105230((char *)m, (char *)m, (char *)c);
        if (*(signed char *)(a + 2) == 0) {
            func_00207480(3, 0x370, (M207 *)m, 0x20);
            func_003305E0(D_01DFABA0, 8, 0x79, (char *)c, 0x2D, 0, 0);
        } else {
            func_00207480(3, 0x371, (M207 *)m, 0x20);
            func_003305E0(D_01DFABA0, 8, 0x78, (char *)c, 0x2D, 0, 0);
        }
        func_0043EEF0(p, 0);
        b->m64(a, 0, f, 1.0f, 1.0f);
        q = p;
        if (q) q += 0x40;
        b->m38(a, q);
        *(float *)(p + 0x7F4) = *(float *)(p + 0x7F4) - f;
        if (*(unsigned char *)(a + 0x30) != 0 && *(float *)(p + 0x7F4) <= 1.0f) *(float *)(p + 0x7F4) = 1.0f;
        if (*(float *)(p + 0x7F4) <= 0.0f || D_01CAFF3D[0] != 0) {
            *(unsigned char *)(p + 0x7C9) = 1;
            *(float *)(p + 0x7F4) = 1.0f;
        } else {
            *(unsigned char *)(p + 0x7C8) = 1;
        }
        break;
    }
}

class W2C00b {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void mD0();
};

static inline int ok4B4(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" int func_004B4F30(char *p) {
    switch (*(signed char *)(p + 0x3378)) {
    case 0:
        if (*(unsigned char *)(p + 0x3377) == 0) break;
        if (*(signed char *)(p + 0x3379) == *(signed char *)(p + 0x3375)) {
            *(unsigned char *)(p + 0x3377) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x3376) == 1) {
            *(unsigned char *)(p + 0x337A) = 0x40;
            *(unsigned char *)(p + 0x3378) = 1;
        } else {
            *(unsigned char *)(p + 0x3378) = 3;
        }
        break;
    case 1:
        *(unsigned char *)(p + 0x337A) = *(unsigned char *)(p + 0x337A) - 0x10;
        if (0 < *(unsigned char *)(p + 0x337A)) {
            ((W2C00b *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x337A), 1);
        } else {
            ((W2C00b *)(p + 0x2C00))->m8C();
            *(unsigned char *)(p + 0x3376) = 0;
            *(unsigned char *)(p + 0x337B) = 2;
            *(unsigned char *)(p + 0x3378) = 2;
        }
        break;
    case 2:
        if (--*(signed char *)(p + 0x337B) != 0) break;
        ((W2C00b *)(p + 0x2C00))->mD0();
        *(unsigned char *)(p + 0x3378) = 3;
        break;
    case 3:
        if (*(unsigned char *)(p + 0x3377) == 0) break;
        *(signed char *)(p + 0x3379) = *(signed char *)(p + 0x3375);
        if (*(int *)(p + 0x1D0) != 0) {
            if ((unsigned char)ok4B4(*(unsigned char **)(p + 0x1D0)) != 1) break;
            func_001AF080(D_00666750, *(int *)(p + 0x1D0));
            *(int *)(p + 0x1D0) = 0;
        }
        *(int *)(p + 0x1D0) = func_001AFB90(D_00666750, func_004B5CD0(p, *(signed char *)(p + 0x3379)), 0, 8);
        if (*(int *)(p + 0x1D0) == 0) return 0;
        *(unsigned char *)(p + 0x3378) = 4;
    case 4:
        if ((unsigned char)ok4B4(*(unsigned char **)(p + 0x1D0)) != 1) break;
        if (*(unsigned char *)(p + 0x3377) == 0) {
            *(unsigned char *)(p + 0x3378) = 3;
            break;
        }
        if ((unsigned char)func_004B5200(p) == 0) return 0;
        *(unsigned char *)(p + 0x337A) = 0;
        ((W2C00b *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x337A), 1);
        *(unsigned char *)(p + 0x3378) = 5;
        break;
    case 5:
        if (*(unsigned char *)(p + 0x337A) < 0x40) {
            *(unsigned char *)(p + 0x337A) = *(unsigned char *)(p + 0x337A) + 8;
            ((W2C00b *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x337A), 1);
        }
        if (*(unsigned char *)(p + 0x337A) >= 0x40) {
            ((W2C00b *)(p + 0x2C00))->m8C();
            *(unsigned char *)(p + 0x3377) = 0;
            *(unsigned char *)(p + 0x3378) = 0;
        }
        break;
    }
    return 1;
}

static inline int ok409C(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *inner409C(char *q) { if (*(unsigned int *)(q + 4) < 3) return 0; if (*(int *)(q + 0x10) == 0) return 0; return q + *(int *)(q + 0x10); }

static inline char *chunk409C(char *h) { if (**(unsigned short **)(h + 8) == 0) return inner409C(*(char **)(h + 0xC)); return *(char **)(h + 0xC); }

extern "C" void func_00409C00(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok409C(*(unsigned char **)(p + 0x14)) != 1) break;
        if (*(unsigned char *)(*(char **)(p + 0x14C) + 0xD3) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        if ((*(int *)(p + 0x178) = func_00478340(*(unsigned char **)(p + 0x14), p + 0x4C)) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        func_0030E580(D_01DFA310, chunk409C(*(char **)(p + 0x14)));
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)func_00478AC0(*(int *)(p + 0x178)) != 1) break;
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_00478AF0(*(int *)(p + 0x178));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0: case 1:
            break;
        case 3: case 4: case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, *(signed char *)(p + 0x154));
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x178) != 0) {
            func_001AD140(*(char **)(p + 0x178));
            *(char **)(p + 0x178) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 8:
        func_0040B2F0(p);
        func_0030E910(D_01DFA310, 0x4E20, 0x526C);
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

static inline int ok403E(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner403E(char *q) { if (*(unsigned int *)(q + 4) < 0x12) return 0; if (*(int *)(q + 0x4C) == 0) return 0; return q + *(int *)(q + 0x4C); }

static inline char *chunk403E(char *h) { if (**(unsigned short **)(h + 8) == 0) h = inner403E(*(char **)(h + 0xC)); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_00403E70(char *p) {
    char *c;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok403E(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) != 1) break;
        func_0030E580(D_01DFA310, chunk403E(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)));
        if ((*(int *)(p + 0x180) = func_004107B0(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), p + 0x5C)) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        switch ((unsigned char)func_00411E50(*(int *)(p + 0x180))) {
        case 0:
            break;
        case 3:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 3);
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 4);
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 1: case 2:
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        *(int *)(p + 4) = 5;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        if (*(char **)(p + 0x180) != 0) {
            func_001AD140(*(char **)(p + 0x180));
            *(char **)(p + 0x180) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 8:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

class W704 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual float m28(int);
};

static inline unsigned char both3B3(char *p) { unsigned char r; if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) r = 1; else r = 0; return r; }

extern "C" void func_003B3870(char *p) {
    *(unsigned short *)(p + 0x20CC) = *(unsigned short *)(p + 0x20CC) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x2E;
        func_0024DA80(p + 0x1D00, 0, 0x2E);
        func_0024DA80(p + 0x1DD0, 0, 0x2E);
        *(unsigned char *)(p + 5) = 2;
        *(float *)(p + 0x20C4) = 16.0f;
        func_003B6140(p);
        func_003B6060(p);
        break;
    case 1:
        if ((unsigned char)both3B3(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2E;
            func_0024DA80(p + 0x1D00, 0, 0x2E);
            func_0024DA80(p + 0x1DD0, 0, 0x2E);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if ((unsigned char)both3B3(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x34;
            func_0024DA80(p + 0x1D00, 0, 0x34);
            func_0024DA80(p + 0x1DD0, 0, 0x34);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
    case 3:
        if (((W704 *)(p + 0x704))->m28(0) < 36.0f) break;
        func_003B62C0(p);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 4:
        if (((W704 *)(p + 0x704))->m28(0) < 38.0f) break;
        func_003B61B0(p);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 5:
        if ((unsigned char)both3B3(p) == 1) {
            func_003B4B60(p, 2);
            *(unsigned char *)(p + 0x2215) = 1;
        }
        break;
    }
    func_003B4F60(p);
    if ((unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 0) func_003B4D80(p, 0x400, 0);
}

class W4C7 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual int m2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void m2F8(int);
    virtual void d2FC();
    virtual void m300(int);
};

extern "C" void func_004C7E50(char *p) {
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) == 0) break;
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        ((W4C7 *)p)->m300(0x54);
        *(short *)(p + 0x90) = *(short *)(p + 0x160);
        break;
    case 1:
        if (((W4C7 *)p)->m2EC() != 0x77) break;
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        *(float *)(p + 0xB178) = D_005BDE14;
        func_00207480(3, 0x338, *(M207 **)(*(char **)(func_004D2740(p) + 4) + 0x104), 0x10);
        *(float *)(p + 0xB2B0) = func_004D32F0(p);
        ((W4C7 *)p)->m300(0x55);
        break;
    case 2:
        v[2] = -100.0f;
        v[3] = 1.0f;
        v[0] = 0.0f;
        v[1] = 0.0f;
        if ((unsigned char)func_004D2890(p, v, 1, D_005BDE0C) != 1) break;
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105760(m, m, 3.1415925f);
        func_00104C00((char *)m, *(char **)(*(char **)(func_004D2740(p) + 4) + 0x104), (char *)m);
        func_00207480(3, 0x338, (M207 *)m, 0x10);
        break;
    case 3:
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        ((W4C7 *)p)->m300(0x54);
        *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x84) / 6.283185f);
        break;
    case 4:
        if (((W4C7 *)p)->m2EC() != 0x77) break;
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        *(float *)(p + 0xB178) = D_005BDE08;
        break;
    case 5:
        *(float *)(p + 0xB178) = *(float *)(p + 0xB178) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xB178) < 0.0f) {
            if (*(unsigned char *)(p + 0xB154) == 0x31) ((W4C7 *)p)->m2F8(0x17);
            else ((W4C7 *)p)->m2F8(0x29);
        }
        break;
    }
}

extern "C" void func_003366A0(char *p) {
    int i;
    if (!(*(float *)(p + 0x1290) <= 0.0f)) {
        *(float *)(p + 0x1290) = *(float *)(p + 0x1290) - *(float *)D_01DF5D20;
        return;
    }
    for (i = 0; i < 1; i++) func_0024DD30(p + i * 0xD0 + 0xDF0);
    switch (*(unsigned char *)(p + 0x1394)) {
    case 0:
        func_003369C0(p);
        break;
    case 1:
        func_00337330(p);
        break;
    case 2:
        func_00337730(p);
        break;
    case 3:
        func_00337A30(p);
        break;
    case 4:
        func_00336E60(p);
        break;
    case 8:
        func_00338640(p);
        break;
    case 5:
        func_00337D50(p);
        break;
    case 6:
        func_00337D50(p);
        break;
    case 7:
        func_00337EC0(p);
        break;
    case 9:
        func_00337FF0(p);
        break;
    case 10:
        func_00338130(p);
        break;
    case 11:
        func_003382D0(p);
        break;
    case 12:
        func_00338410(p);
        break;
    case 13:
        func_00338540(p);
        break;
    case 14:
        func_00338740(p);
        break;
    case 15:
        func_003388D0(p);
        break;
    case 16:
        func_003389A0(p);
        break;
    case 17:
        func_00338C30(p);
        break;
    case 18:
        func_00338D00(p);
        break;
    case 19:
        func_00338E50(p);
        break;
    case 20:
        func_00338FF0(p);
        break;
    case 21:
        func_00339180(p);
        break;
    case 22:
        func_00339320(p);
        break;
    case 23:
        func_00339700(p);
        break;
    case 24:
        func_00339830(p);
        break;
    case 25:
        func_00339950(p);
        break;
    case 26:
        func_00339A80(p);
        break;
    case 27:
        func_00339B80(p);
        break;
    case 28:
        func_00339C40(p);
        break;
    case 29:
        func_00339D60(p);
        break;
    case 30:
        func_00339E80(p);
        break;
    case 31:
        func_0033A350(p);
        break;
    case 32:
        break;
    }
    switch (*(unsigned char *)(p + 0x1394)) {
    case 0x1E: case 0x1F:
        break;
    default:
        *(float *)(p + 0x1354) = 1.0f;
        break;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(*(char **)(*(char **)(p + 0x660) + 0x100)) : "memory");
    if (*(unsigned char *)(p + 0x134F)) {
        if ((unsigned char)func_0024E800(p + 0xDF0) == 0) func_0033B710(p);
    }
}

class W3CEo {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void d1C();
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void m48(int, char *);
};

class W3CE {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual float m7C();
    virtual unsigned int m80(float);
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void mE8(int);
};

extern "C" void func_003CE760(char *p) {
    switch (*(unsigned int *)(p + 0xD4)) {
    case 0:
        if (!((*(W3CEo **)(p + 0xA8))->m28() < 140.0f)) {
            (*(W3CEo **)(p + 0xA8))->m48(0x23, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 1;
            *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
        } else {
            (*(W3CEo **)(p + 0xA8))->m24();
        }
        break;
    case 1:
        if ((*(W3CEo **)(p + 0xA8))->m2C() != 0) {
            (*(W3CEo **)(p + 0xA8))->m48(0x20, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
            *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
            *(int *)(p + 0x100) = 0;
        } else {
            (*(W3CEo **)(p + 0xA8))->m24();
        }
        break;
    case 2:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 0.0f) break;
        func_00330BD0(D_01DFABA0, 0x4D, *(char **)(p + 0x10) + 0x10, 0, 0);
        *(int *)(p + 0xD4) = 3;
        break;
    case 3:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 60.0f) break;
        (*(W3CEo **)(p + 0xA8))->m18(0x3E8);
        *(int *)(p + 0xD4) = 4;
        break;
    case 4:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 80.0f) break;
        switch (((W3CE *)p)->m80(((W3CE *)p)->m7C())) {
        case 0: case 1: case 2:
            break;
        case 3: case 4: case 5:
            (*(W3CEo **)(p + 0xA8))->m18(0x3E9);
            break;
        }
        *(int *)(p + 0xD4) = 5;
        break;
    case 5:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 100.0f) break;
        (*(W3CEo **)(p + 0xA8))->m18(0x3EA);
        *(int *)(p + 0xD4) = 6;
        break;
    case 6:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 120.0f) break;
        ((W3CE *)p)->mE8(1);
        break;
    }
}

static inline int ok22D(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *inner22D(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk22D(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return inner22D(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" int func_0022DD60(char *p) {
    char *q;
    switch (*(unsigned int *)(p + 0x10)) {
    case 0:
        func_001F3BF0(D_01CB1290);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 1:
        if ((unsigned char)func_001F3CC0(D_01CB1290, D_00666712[0], 0x1C2, 0x3FFC) == 0) break;
        *(char **)(p + 0x1C) = func_001AF3F0(D_00666750, (char *)&D_00540350[(unsigned char)D_00666712[0]], 0, 0);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
    case 2:
        if ((unsigned char)ok22D(*(unsigned char **)(p + 0x1C)) != 1) break;
        func_0030E440(D_01DFA310, D_01CB12BC[0]);
        func_0030E580(D_01DFA310, chunk22D(*(char **)(p + 0x1C), -1));
        q = chunk22D(*(char **)(p + 0x1C), 0);
        if (q != 0) *(int *)(p + 0x20) = func_0013BF20(q);
        D_005BC1A8->m24(0, 0);
        func_004EF480(D_01DFC550, 0);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 3:
        if (func_004F1980(D_01DFC550) != 0) {
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        }
        func_0022E090(p, D_01DFC55C[0], D_01DFC558[0]);
        break;
    case 4:
        D_005BC1A8->m24(0x80000000, 1);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 5:
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        func_0030E540(D_01DFA310);
        func_004EF4C0(D_01DFC550);
        if (*(int *)(p + 0x20) != 0) {
            func_00196C40(D_006480D0, *(int *)(p + 0x20));
            *(int *)(p + 0x20) = 0;
        }
        func_001349C0(-D_00666718[0], -D_00666719[0]);
        func_001ED3F0();
        func_001ED310();
        return 1;
    }
    return 0;
}

extern "C" void func_00315D60(char *p, signed char k, char *a, char *o) {
    float vc0[4] __attribute__((aligned(16)));
    float m80[16] __attribute__((aligned(16)));
    float m40[16] __attribute__((aligned(16)));
    char *e;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(vc0), "r"(a + 0x30) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(&m80[12]), "r"(a + 0x30) : "memory");
    if (o != 0) {
        func_00104E78(m40, o);
        func_00104B80((char *)&m80[12], (char *)m40, (char *)&m80[12]);
    }
    if (*(float *)(*(char **)(p + 0x10) + k * 4) <= 100.0f) return;
    switch (k) {
    case 1:
        e = func_00207470(3, 0x217, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(2, 0x1AA, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        func_0034BA60(7, (char *)vc0, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 2:
        e = func_00207470(3, 0x216, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(3, 0x2C3, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        func_0034BA60(0x10, (char *)vc0, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 3:
        e = func_00207470(3, 0x12, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(3, 0x12F, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        func_0034BA60(0x11, (char *)vc0, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 4:
        e = func_00207470(3, 0x218, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(2, 0x1A9, m80);
        if (e != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        break;
    case 5:
        e = func_00207470(3, 0x216, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(3, 0x2C3, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        break;
    case 6:
        e = func_00207470(3, 0x219, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x94) = o;
            *(unsigned char *)(e + 0x99) = 0;
        }
        e = func_00207470(2, 0x1C2, m80);
        if (e != 0 && o != 0) {
            *(char **)(e + 0x90) = o;
            *(unsigned char *)(e + 0x9A) = 0;
        }
        break;
    }
}

extern "C" void func_00315A10(char *p, signed char k, char *m, char *v) {
    char *e;
    if (*(float *)(*(char **)(p + 0x10) + k * 4) <= 100.0f) return;
    switch (k) {
    case 1:
        e = func_00207470(3, 0x217, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(2, 0x1AA, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        func_0034BA60(7, v, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 2:
        e = func_00207470(3, 0x216, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(3, 0x2C3, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        func_0034BA60(0x10, v, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 3:
        e = func_00207470(3, 0x12, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(3, 0x12F, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        func_0034BA60(0x11, v, *(signed char *)(*(char **)(p + 4) + 6), 0, 1);
        break;
    case 4:
        e = func_00207470(3, 0x218, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(2, 0x1A9, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        break;
    case 5:
        e = func_00207470(3, 0x216, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(3, 0x2C3, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        break;
    case 6:
        e = func_00207470(3, 0x219, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x99) = 1;
        }
        e = func_00207470(2, 0x1C2, (float *)m);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
            *(unsigned char *)(e + 0x9A) = 1;
        }
        break;
    }
}

class W1C0 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void m60(int, int, int, int);
};

extern "C" void func_0043EB90(char *p) {
    float v40[4] __attribute__((aligned(16)));
    float v30[4] __attribute__((aligned(16)));
    float f;
    func_001AD100(p);
    func_003AD5C0(p + 0x800);
    if (*(unsigned char *)(p + 0x7C3) == 0) return;
    func_0043F130(p);
    switch (*(unsigned char *)(p + 0x7C0)) {
    case 0: func_0043F490(p); break;
    case 1: func_0043F570(p); break;
    case 2: func_0043F600(p); break;
    case 3: func_0043F810(p); break;
    case 4: func_0043F920(p); break;
    case 5: func_0043FAE0(p); break;
    }
    if (*(signed char *)(p + 0x7C1) == 0) {
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v30), "r"(*(char **)(*(char **)(p + 0x1A4) + 0x104)) : "memory");
        v30[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v40), "r"(*(char **)(*(char **)(p + 0x1A8) + 0x104)) : "memory");
        v40[3] = 1.0f;
    } else {
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v30), "r"(*(char **)(*(char **)(p + 0x1AC) + 0x104)) : "memory");
        v30[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(v40), "r"(*(char **)(*(char **)(p + 0x1B0) + 0x104)) : "memory");
        v40[3] = 1.0f;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x8A0), "r"(v30) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x920), "r"(v40) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x850) : "memory");
    func_00131700(p + 0x850, p + 0x850, p + 0x830);
    func_00105230(p + 0x850, p + 0x850, p + 0x820);
    func_001318E0(p + 0x850, p + 0x850, p + 0x840);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x8D0) : "memory");
    func_00131700(p + 0x8D0, p + 0x8D0, p + 0x8B0);
    func_00105230(p + 0x8D0, p + 0x8D0, p + 0x8A0);
    func_001318E0(p + 0x8D0, p + 0x8D0, p + 0x8C0);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x950) : "memory");
    func_00131700(p + 0x950, p + 0x950, p + 0x930);
    func_00105230(p + 0x950, p + 0x950, p + 0x920);
    func_001318E0(p + 0x950, p + 0x950, p + 0x940);
    func_0028C5C0(p + 0x9E0, 0, *(float *)(p + 0x10));
    if (*(unsigned char *)(p + 0x7C4) != 0) {
        f = *(float *)(p + 0x10);
        *(float *)(func_00279290(p + 0x1C0) + 0x1B0) = f;
        if (*(int *)(p + 0x7CC) != -1) ((W1C0 *)(p + 0x1C0))->m60(*(int *)(p + 0x7CC), *(int *)(p + 0x7D0), (int)((float)*(int *)(p + 0x7D4) * *(float *)(p + 0x10)), (int)((float)*(int *)(p + 0x7D8) * *(float *)(p + 0x10)));
    }
    if (*(unsigned char *)(p + 0x7C5) != 0) {
        switch (*(unsigned char *)(p + 0x7C0)) {
        case 0: case 1: case 4: case 5:
            func_002EF940(*(char **)D_01CAFF0C, p + 0x990);
            break;
        case 2: case 3:
            break;
        }
    }
    func_0043F070(p);
    func_00195E20(D_005BE098, p);
}

static inline int ok409(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner409(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk409(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner409(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_00409270(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(int *)(p + 0x158) = 2;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 1:
        if ((unsigned char)ok409(*(char **)(p + 0x14)) != 1) break;
        if ((unsigned char)ok409(*(char **)(p + 0x18)) != 1) break;
        func_0030E580(D_01DFA310, chunk409(*(char **)(p + 0x14), 9));
        if ((*(int *)(p + 0x164) = func_00487B90(*(char **)(p + 0x14), p + 0x4C, *(unsigned char *)(p + 0x168))) == 0) {
            *(int *)(p + 8) = 8;
            break;
        }
        if ((*(int *)(p + 0x160) = func_004D8EA0(*(char **)(p + 0x18), 3)) == 0) {
            *(int *)(p + 8) = 5;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_004884F0(*(int *)(p + 0x164));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0: case 3: case 4:
            break;
        case 1:
            *(unsigned char *)(p + 0x12) = func_00488520(*(int *)(p + 0x164));
            if (*(unsigned char *)(p + 0x12) == 5) *(unsigned char *)(p + 0x12) = 0;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, *(signed char *)(p + 0x154));
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        *(int *)(p + 0x158) = 1;
        if (*(char **)(p + 0x164) != 0) {
            func_001AD140(*(char **)(p + 0x164));
            *(char **)(p + 0x164) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(char **)(p + 0x160) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 8:
        func_0040B2F0(p);
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 4;
        break;
    }
}

extern "C" void func_00237610(char *p) {
    char *o;
    func_001B1120(1);
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        D_005BC1A8->m24(0, 0);
        func_00195870(D_00645A30, 5);
        func_00195870(D_00645A30, 0xA);
        func_00195870(D_00645A30, 0xB);
        func_00195870(D_00645A30, 0xC);
        func_00195870(D_00645A30, 0xD);
        func_00195870(D_00645A30, 0xE);
        D_01C77230[0] = 1;
        *(int *)(p + 0x18E9C) = func_002DDC30(func_001AEA60(D_00666750, 6, 5), *(int *)(p + 0x19480));
        func_00239C60(p);
        func_00239F40(p);
        *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 1;
        func_0013E020(D_006011B4, 0x1E, 0x32);
        func_0013E020(D_00631538, 0x1E, 0x32);
        func_003310C0(D_01DFABA0);
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        break;
    case 1:
        func_0023A340(p);
        o = *(char **)(p + 0x18E9C);
        switch (*(int *)(o + 0x78)) {
        case -1:
            break;
        case 0:
            *(unsigned char *)(o + 0x6C) = 1;
            func_0023A350(p);
            D_01C77230[0] = 0;
            *(unsigned char *)(p + 0x193F4) = 0;
            *(unsigned char *)(p + 0x18) = 4;
            *(unsigned char *)(p + 0x19) = 0;
            break;
        case 1:
            *(unsigned char *)(o + 0x6C) = 1;
            func_0023A350(p);
            D_01C77230[0] = 0;
            *(unsigned char *)(p + 0x18) = 0xA;
            *(unsigned char *)(p + 0x19) = 0;
            break;
        case 2:
            func_003311E0(D_01DFABA0);
            *(unsigned char *)(*(char **)(p + 0x18E9C) + 0x6C) = 1;
            func_0023A350(p);
            D_005BC660 = 2;
            D_01C77230[0] = 0;
            *(unsigned char *)(p + 0x1B) = 8;
            *(unsigned char *)(p + 0x18) = 0xB;
            *(unsigned char *)(p + 0x19) = 0;
            func_00331080(D_01DFABA0);
            break;
        case 3:
            func_003311E0(D_01DFABA0);
            *(unsigned char *)(*(char **)(p + 0x18E9C) + 0x6C) = 1;
            func_0023A350(p);
            D_01C77230[0] = 0;
            *(unsigned char *)(p + 0x1B) = 7;
            *(unsigned char *)(p + 0x18) = 0xB;
            *(unsigned char *)(p + 0x19) = 0;
            func_00331080(D_01DFABA0);
            break;
        case 4:
            D_01CAF67B[0] = 1;
            *(unsigned char *)(p + 0x18) = 5;
            *(unsigned char *)(p + 0x19) = 0;
            break;
        case 5:
            *(unsigned char *)(o + 0x6C) = 1;
            func_0023A350(p);
            func_00239DE0(p);
            D_01C77230[0] = 0;
            *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 0;
            *(unsigned char *)(p + 0x18) = 1;
            *(unsigned char *)(p + 0x19) = 0;
            func_0013E040(D_006011B4, 0x14, 0);
            func_0013E040(D_00631538, 0x14, 0);
            func_003311E0(D_01DFABA0);
            break;
        }
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    func_001B1120(0);
}

static inline int ok4095(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner4095(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk4095(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner4095(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

static inline unsigned char rdyA4095(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x54C4) != 0) { *(unsigned char *)(o + 0x554F) = 1; r = 1; } else r = 0; return r; }

static inline unsigned char rdyB4095(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x555E) != 0) { *(unsigned char *)(o + 0x556C) = 1; r = 1; } else r = 0; return r; }

extern "C" void func_004095E0(char *p) {
    int r;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok4095(*(char **)(p + 0x14)) != 1) break;
        func_0030E580(D_01DFA310, chunk4095(*(char **)(p + 0x14), 13));
        if ((*(int *)(p + 0x16C) = func_00415240(*(char **)(p + 0x14), p + 0x4C)) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        *(int *)(p + 0x15C) = func_00304F30(func_001AEA60(D_00666750, 6, 3), p + 0x4C);
        if (*(int *)(p + 0x15C) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (rdyA4095(*(char **)(p + 0x15C)) != 1) break;
        if (rdyB4095(*(char **)(p + 0x15C)) != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        r = func_00415EB0(*(int *)(p + 0x16C));
        switch ((unsigned char)r) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x170) = 1;
        case 3: case 4: case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, r);
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        if (*(char **)(p + 0x16C) != 0) {
            func_001AD140(*(char **)(p + 0x16C));
            *(char **)(p + 0x16C) = 0;
        }
        if (*(char **)(p + 0x15C) != 0) {
            func_001AD140(*(char **)(p + 0x15C));
            *(char **)(p + 0x15C) = 0;
        }
        break;
    case 5: case 6:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 7:
        func_0040B2F0(p);
        func_0030E910(D_01DFA310, 0x4E20, 0x5207);
        *(int *)(p + 4) = 4;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

static inline int ok4037(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner4037(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk4037(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner4037(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

static inline unsigned char rdyB4037(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x555E) != 0) { *(unsigned char *)(o + 0x556C) = 1; r = 1; } else r = 0; return r; }

extern "C" void func_00403720(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok4037(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) != 1) break;
        func_0030E580(D_01DFA310, chunk4037(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), 7));
        if ((*(int *)(p + 0x178) = func_004495C0(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), p + 0x5C)) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        *(int *)(p + 0x164) = func_00304F30(func_001AEA60(D_00666750, 6, 3), p + 0x5C);
        if (*(int *)(p + 0x164) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (rdyB4037(*(char **)(p + 0x164)) != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        switch ((unsigned char)func_0044A1D0(*(int *)(p + 0x178))) {
        case 0:
            break;
        case 3:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 3);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 4);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 1: case 2:
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        func_0030E910(D_01DFA310, 0x4E20, 0x4E83);
        if (*(char **)(p + 0x178) != 0) {
            func_001AD140(*(char **)(p + 0x178));
            *(char **)(p + 0x178) = 0;
        }
        if (*(char **)(p + 0x164) != 0) {
            func_001AD140(*(char **)(p + 0x164));
            *(char **)(p + 0x164) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 7:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

static inline int ok40A0(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner40A0(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk40A0(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner40A0(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_0040A0C0(char *p) {
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        if (*(int *)(p + 0x14) == 0) *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x366, 0, 8);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok40A0(*(char **)(p + 0x14)) != 1) break;
        if ((unsigned char)ok40A0(*(char **)(p + 0x1C)) != 1) break;
        func_0030E580(D_01DFA310, chunk40A0(*(char **)(p + 0x14), 9));
        if ((*(int *)(p + 0x17C) = func_0041C9A0(*(char **)(p + 0x14), p + 0x4C, *(signed char *)(p + 0x19C))) == 0) {
            *(int *)(p + 0xC) = 8;
            break;
        }
        if ((*(int *)(p + 0x160) = func_004D8EA0(*(char **)(p + 0x1C), 3)) == 0) {
            *(int *)(p + 0xC) = 5;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_0041D3C0(*(int *)(p + 0x17C));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0:
            break;
        case 1:
            *(unsigned char *)(p + 0x19C) = func_0041D3F0(*(int *)(p + 0x17C));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 3: case 4: case 2:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, *(signed char *)(p + 0x154));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x17C) != 0) {
            func_001AD140(*(char **)(p + 0x17C));
            *(char **)(p + 0x17C) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(char **)(p + 0x160) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 0xC) = *(unsigned int *)(p + 0xC) + 1;
        break;
    case 8:
        func_0040B2F0(p);
        func_0030E910(D_01DFA310, 0x4E20, 0x4E2A);
        if (*(unsigned char *)(p + 0x154) == 1) {
            *(int *)(p + 8) = 2;
            *(int *)(p + 0xC) = 0;
        } else {
            *(int *)(p + 8) = 0xA;
            *(int *)(p + 0xC) = 0;
        }
        break;
    default:
        *(int *)(p + 8) = 0xA;
        *(int *)(p + 0xC) = 0;
        break;
    }
}

static inline int ok403AC(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner403AC(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk403AC(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner403AC(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

static inline unsigned char rdyB403AC(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x555E) != 0) { *(unsigned char *)(o + 0x556C) = 1; r = 1; } else r = 0; return r; }

extern "C" void func_00403AC0(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok403AC(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) != 1) break;
        func_0030E580(D_01DFA310, chunk403AC(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), 13));
        if ((*(int *)(p + 0x17C) = func_0047D9B0(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), p + 0x5C)) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        *(int *)(p + 0x164) = func_00304F30(func_001AEA60(D_00666750, 6, 3), p + 0x5C);
        if (*(int *)(p + 0x164) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (rdyB403AC(*(char **)(p + 0x164)) != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        switch ((unsigned char)func_0047DE20(*(int *)(p + 0x17C))) {
        case 0:
            break;
        case 3:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 3);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 4);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 1: case 2:
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        if (*(char **)(p + 0x17C) != 0) {
            func_001AD140(*(char **)(p + 0x17C));
            *(char **)(p + 0x17C) = 0;
        }
        if (*(char **)(p + 0x164) != 0) {
            func_001AD140(*(char **)(p + 0x164));
            *(char **)(p + 0x164) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 7:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

static inline int ok4033(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner4033(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk4033(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner4033(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

static inline unsigned char rdyA4033(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x54C4) != 0) { *(unsigned char *)(o + 0x554F) = 1; r = 1; } else r = 0; return r; }

static inline unsigned char rdyB4033(char *o) { unsigned char r; if (*(unsigned char *)(o + 4) == 1 && *(unsigned char *)(o + 0x555E) != 0) { *(unsigned char *)(o + 0x556C) = 1; r = 1; } else r = 0; return r; }

extern "C" void func_00403330(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if ((unsigned char)ok4033(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44)) != 1) break;
        func_0030E580(D_01DFA310, chunk4033(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), 13));
        if ((*(int *)(p + 0x174) = func_004B3780(*(char **)((char *)(*(int *)(p + 0x54) * 8) + (int)p + 0x44), *(int *)(p + 0x58), p + 0x5C)) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        *(int *)(p + 0x164) = func_00304F30(func_001AEA60(D_00666750, 6, 3), p + 0x5C);
        if (*(int *)(p + 0x164) == 0) {
            *(int *)(p + 8) = 4;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (rdyA4033(*(char **)(p + 0x164)) != 1) break;
        if (rdyB4033(*(char **)(p + 0x164)) != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        switch ((unsigned char)func_004B42B0(*(int *)(p + 0x174))) {
        case 0:
            break;
        case 3:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 3);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 4:
            *(unsigned char *)(p + 0x16) = func_00404740(p, 4);
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        case 1: case 2:
            *(int *)(p + 4) = 5;
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
            break;
        }
        break;
    case 3:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        func_0030E910(D_01DFA310, 0x4E20, 0x5207);
        if (*(char **)(p + 0x174) != 0) {
            func_001AD140(*(char **)(p + 0x174));
            *(char **)(p + 0x174) = 0;
        }
        if (*(char **)(p + 0x164) != 0) {
            func_001AD140(*(char **)(p + 0x164));
            *(char **)(p + 0x164) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 5: case 6:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 7:
        func_00404720(p);
        *(int *)(p + 4) = 8;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

static inline int ok40AC(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner40AC(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk40AC(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner40AC(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_0040AC80(char *p) {
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x371, 0, 8);
        *(int *)(p + 0x18) = func_001AFB90(D_00666750, D_0056B008[*(signed char *)(p + 0x19C)], 0, 8);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok40AC(*(char **)(p + 0x14)) != 1) break;
        if ((unsigned char)ok40AC(*(char **)(p + 0x18)) != 1) break;
        if ((unsigned char)ok40AC(*(char **)(p + 0x1C)) != 1) break;
        func_0030E580(D_01DFA310, chunk40AC(*(char **)(p + 0x14), 4));
        if ((*(int *)(p + 0x184) = func_005041E0(*(char **)(p + 0x14), *(char **)(p + 0x18), p + 0x18C, *(signed char *)(p + 0x19D), *(signed char *)(p + 0x19E))) == 0) {
            *(int *)(p + 0xC) = 8;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_00504EC0(*(int *)(p + 0x184));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0:
            break;
        case 2:
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 3: case 4:
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x184) != 0) {
            func_001AD140(*(char **)(p + 0x184));
            *(char **)(p + 0x184) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(char **)(p + 0x160) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 0xC) = *(unsigned int *)(p + 0xC) + 1;
        break;
    case 8:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        func_0030E910(D_01DFA310, 0x4E20, 0x5014);
        *(int *)(p + 8) = 2;
        *(int *)(p + 0xC) = 0;
        break;
    default:
        *(int *)(p + 8) = 0xA;
        *(int *)(p + 0xC) = 0;
        break;
    }
}

static inline int ok40A4(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner40A4(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk40A4(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner40A4(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

extern "C" void func_0040A460(char *p) {
    struct S442 { signed char a[4]; int b; int c; unsigned short d; };
    S442 t30;
    S442 t20;
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        *(int *)(p + 0x14) = func_001AFB90(D_00666750, 0x370, 0, 8);
        *(int *)(p + 0x18) = func_001AFB90(D_00666750, D_0056B008[*(signed char *)(p + 0x19C)], 0, 8);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok40A4(*(char **)(p + 0x14)) != 1) break;
        if ((unsigned char)ok40A4(*(char **)(p + 0x18)) != 1) break;
        if ((unsigned char)ok40A4(*(char **)(p + 0x1C)) != 1) break;
        func_0030E580(D_01DFA310, chunk40A4(*(char **)(p + 0x14), 13));
        if ((*(int *)(p + 0x180) = func_00441020(*(char **)(p + 0x14), *(char **)(p + 0x18), p + 0x4C, *(int *)(p + 0x1A0), *(signed char *)(p + 0x19C), *(signed char *)(p + 0x19D), *(signed char *)(p + 0x19E))) == 0) {
            *(int *)(p + 0xC) = 8;
            break;
        }
        if ((*(int *)(p + 0x160) = func_004D8EA0(*(char **)(p + 0x1C), 3)) == 0) {
            *(int *)(p + 0xC) = 5;
            break;
        }
        D_005BC1A8->m1C(0x80000000, 0xC, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m28(0, 1, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 3:
        *(unsigned char *)(p + 0x154) = func_00442AB0(*(int *)(p + 0x180));
        switch (*(unsigned char *)(p + 0x154)) {
        case 0: case 1:
            break;
        case 5:
            *(unsigned char *)(p + 0x19D) = func_00442AE0(*(int *)(p + 0x180));
            *(unsigned char *)(p + 0x19E) = func_00442AF0(*(int *)(p + 0x180));
            func_00442B40((char *)&t30, *(int *)(p + 0x180));
            *(signed char *)(p + 0x18C) = t30.a[0];
            *(signed char *)(p + 0x18D) = t30.a[1];
            *(signed char *)(p + 0x18E) = t30.a[2];
            *(signed char *)(p + 0x18F) = t30.a[3];
            *(int *)(p + 0x190) = t30.b;
            *(int *)(p + 0x194) = t30.c;
            *(unsigned short *)(p + 0x198) = t30.d;
            *(int *)(p + 0x1A0) = func_00442B00(*(int *)(p + 0x180));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 6:
            *(unsigned char *)(p + 0x19D) = func_00442AE0(*(int *)(p + 0x180));
            *(unsigned char *)(p + 0x19E) = func_00442AF0(*(int *)(p + 0x180));
            func_00442B40((char *)&t20, *(int *)(p + 0x180));
            *(signed char *)(p + 0x18C) = t20.a[0];
            *(signed char *)(p + 0x18D) = t20.a[1];
            *(signed char *)(p + 0x18E) = t20.a[2];
            *(signed char *)(p + 0x18F) = t20.a[3];
            *(int *)(p + 0x190) = t20.b;
            *(int *)(p + 0x194) = t20.c;
            *(unsigned short *)(p + 0x198) = t20.d;
            *(int *)(p + 0x1A0) = func_00442B00(*(int *)(p + 0x180));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 3: case 4:
            *(unsigned char *)(p + 0x12) = func_0040B300(p, *(signed char *)(p + 0x154));
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        case 2:
            *(unsigned char *)(p + 0x19D) = 0;
            *(unsigned char *)(p + 0x19E) = 0;
            *(int *)(p + 0x1A0) = 0;
            *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
            break;
        }
        break;
    case 4:
        D_005BC1A8->m20(0x80000000, 0x18, 0xFFFFFF);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(char **)(p + 0x180) != 0) {
            func_001AD140(*(char **)(p + 0x180));
            *(char **)(p + 0x180) = 0;
        }
        if (*(char **)(p + 0x160) != 0) {
            func_001AD140(*(char **)(p + 0x160));
            *(char **)(p + 0x160) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 6: case 7:
        *(int *)(p + 0xC) = *(unsigned int *)(p + 0xC) + 1;
        break;
    case 8:
        if (*(int *)(p + 0x14) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x14));
            *(int *)(p + 0x14) = 0;
        }
        if (*(int *)(p + 0x18) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x18));
            *(int *)(p + 0x18) = 0;
        }
        func_0030E910(D_01DFA310, 0x4E20, 0x5014);
        switch (*(unsigned char *)(p + 0x154)) {
        case 0: case 1:
            break;
        case 5:
            *(int *)(p + 8) = 3;
            *(int *)(p + 0xC) = 0;
            break;
        case 6:
            *(int *)(p + 8) = 4;
            *(int *)(p + 0xC) = 0;
            break;
        case 2:
            *(int *)(p + 8) = 1;
            *(int *)(p + 0xC) = 0;
            break;
        case 3: case 4:
            *(int *)(p + 8) = 0xA;
            *(int *)(p + 0xC) = 0;
            break;
        }
        break;
    default:
        *(int *)(p + 8) = 0xA;
        *(int *)(p + 0xC) = 0;
        break;
    }
}

class W3CFo {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void d1C();
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void m48(int, char *);
};

class W3CF {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual float m7C();
    virtual unsigned int m80(float);
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void mE8(int);
};

extern "C" void func_003CECD0(char *p) {
    switch (*(unsigned int *)(p + 0xD4)) {
    case 0:
        if ((*(W3CFo **)(p + 0xA8))->m2C() != 0) {
            (*(W3CFo **)(p + 0xA8))->m18(3);
            *(int *)(p + 0xD4) = 1;
        }
        (*(W3CFo **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(W3CFo **)(p + 0xA8))->m28() < 140.0f)) {
            (*(W3CFo **)(p + 0xA8))->m48(0x23, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
            *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
        } else {
            (*(W3CFo **)(p + 0xA8))->m24();
        }
        break;
    case 2:
        if ((*(W3CFo **)(p + 0xA8))->m2C() != 0) {
            (*(W3CFo **)(p + 0xA8))->m48(0x20, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 3;
            *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
            *(int *)(p + 0x100) = 0;
        } else {
            (*(W3CFo **)(p + 0xA8))->m24();
        }
        break;
    case 3:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 0.0f) break;
        func_00330BD0(D_01DFABA0, 0x4D, *(char **)(p + 0x10) + 0x10, 0, 0);
        *(int *)(p + 0xD4) = 4;
        break;
    case 4:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 60.0f) break;
        (*(W3CFo **)(p + 0xA8))->m18(0x3E8);
        *(int *)(p + 0xD4) = 5;
        break;
    case 5:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 80.0f) break;
        switch (((W3CF *)p)->m80(((W3CF *)p)->m7C())) {
        case 0: case 1: case 2:
            break;
        case 3: case 4: case 5:
            (*(W3CFo **)(p + 0xA8))->m18(0x3E9);
            break;
        }
        *(int *)(p + 0xD4) = 6;
        break;
    case 6:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 100.0f) break;
        (*(W3CFo **)(p + 0xA8))->m18(0x3EA);
        *(int *)(p + 0xD4) = 7;
        break;
    case 7:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 120.0f) break;
        (*(W3CFo **)(p + 0xA8))->m18(4);
        func_00330BD0(D_01DFABA0, 0x4D, *(char **)(p + 0x10) + 0x10, 0, 0);
        *(int *)(p + 0xD4) = 8;
        break;
    case 8:
        if ((*(W3CFo **)(p + 0xA8))->m2C() != 0) ((W3CF *)p)->mE8(1);
        (*(W3CFo **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_00237240(char *p) {
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        switch (*(int *)(p + 0x1C)) {
        case 0:
            D_005BC1A8->m18(0x80000000, 0x1E);
            func_0013E020(D_006011CC, 0x1E, 0);
            func_0013E020(D_00631550, 0x1E, 0);
            break;
        case 1:
            D_01C77230[0] = 1;
            func_002390D0(p, 0);
            func_003303F0(D_01DFABA0, 0, 9, 0, 0);
            *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 1;
            break;
        case 2:
            if (D_01CAF679[0] == 0) {
                D_01CAF67A[0] = 0;
                D_01CAF678[0] = 1;
            }
            break;
        case 3:
            D_005BE110 = 1;
            D_005BC1A8->m18(0x80FFFFFF, 0x3C);
            func_003303F0(D_01DFABA0, 0, 9, 0, 0);
            break;
        case 4:
            D_01C77230[0] = 1;
            func_002390D0(p, 1);
            func_003303F0(D_01DFABA0, 0, 9, 0, 0);
            *(unsigned char *)(*(char **)D_01CAFF0C + 9) = 1;
            break;
        }
        *(int *)(p + 0x20) = 0;
        switch (*(unsigned char *)(*(char **)(*(char **)(p + 0xC) + 4) + 0xF0)) {
        case 0:
            *(unsigned char *)(p + 0x1B) = 2;
            func_00331350(D_01DFABA0);
            break;
        case 1:
            *(unsigned char *)(p + 0x1B) = 3;
            break;
        case 2:
            *(unsigned char *)(p + 0x1B) = 4;
            break;
        case 3:
            *(unsigned char *)(p + 0x1B) = 5;
            break;
        }
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
    case 1:
        switch (*(int *)(p + 0x1C)) {
        case 1: case 4:
            func_00195870(D_00645A30, 0xE);
            func_00239640(p);
            *(unsigned char *)(p + 0x19) = 2;
            *(int *)(p + 0x20) = 0;
            break;
        case 2:
            func_00370000(*(char **)(p + 0xC));
            if (*(char **)(*(char **)(p + 0xC) + 0x18) != 0) func_0036F540(*(char **)(*(char **)(p + 0xC) + 0x18));
            *(unsigned char *)(p + 0x19) = 4;
            *(int *)(p + 0x20) = 0;
            break;
        default:
            *(unsigned char *)(p + 0x19) = 5;
            *(int *)(p + 0x20) = 0;
            break;
        }
        break;
    case 2:
        func_00239640(p);
        if (++*(int *)(p + 0x20) < 0x1E) break;
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        *(int *)(p + 0x20) = 0;
        break;
    case 3:
        if (++*(int *)(p + 0x20) < 5) break;
        if (func_001C6790(D_01C61900) == 0) break;
        D_01C77230[0] = 0;
        *(unsigned char *)(p + 0x18) = 0xB;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    case 4:
        func_00195520(D_00645A30, 0x3F);
        if (++*(int *)(p + 0x20) < 0x1E) break;
        *(unsigned char *)(p + 0x18) = 0xB;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    case 5:
        if (++*(int *)(p + 0x20) < 0x1E) break;
        *(unsigned char *)(p + 0x18) = 0xB;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    }
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 0xA) != 0) func_00195520(D_00645A30, 0x2C);
}

class W339o {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void m6C();
};

class W339 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void d204();
    virtual void d208();
    virtual void d20C();
    virtual void d210();
    virtual void d214();
    virtual void d218();
    virtual void d21C();
    virtual void d220();
    virtual void d224();
    virtual void d228();
    virtual void d22C();
    virtual void d230();
    virtual void d234();
    virtual void d238();
    virtual void d23C();
    virtual void d240();
    virtual void d244();
    virtual void d248();
    virtual void d24C();
    virtual void d250();
    virtual void d254();
    virtual void d258();
    virtual void d25C();
    virtual void d260();
    virtual void d264();
    virtual void d268();
    virtual void d26C();
    virtual void d270();
    virtual void d274();
    virtual void d278();
    virtual void d27C();
    virtual void d280();
    virtual void d284();
    virtual void d288();
    virtual void d28C();
    virtual void d290();
    virtual void d294();
    virtual void d298();
    virtual void d29C();
    virtual void d2A0();
    virtual void d2A4();
    virtual void d2A8();
    virtual void d2AC();
    virtual void d2B0();
    virtual void d2B4();
    virtual void d2B8();
    virtual void d2BC();
    virtual void d2C0();
    virtual void d2C4();
    virtual void d2C8();
    virtual void d2CC();
    virtual void d2D0();
    virtual void d2D4();
    virtual void d2D8();
    virtual void d2DC();
    virtual void d2E0();
    virtual void d2E4();
    virtual void d2E8();
    virtual void d2EC();
    virtual void d2F0();
    virtual void d2F4();
    virtual void d2F8();
    virtual void d2FC();
    virtual void d300();
    virtual void m304(int);
};

extern "C" void func_00339320(char *p) {
    float v50[4] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float v30[4] __attribute__((aligned(16)));
    float f;
    float d;
    char *q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1368) = 112.0f;
        func_0033A660(p, 1);
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0033A620(p, 3, 6);
        }
        func_00335EF0(p, 0x400);
        break;
    case 2:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1368) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v50), "r"(p + 0x50) : "memory");
        v50[0] = v50[0] + 100.0f * func_00131BA0(*(short *)(p + 0x90));
        v50[1] = v50[1] + 250.0f;
        v50[2] = v50[2] + 100.0f * func_00131C20(*(short *)(p + 0x90));
        ((W339o *)(p + 0x130))->m6C();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(v30), "r"(p + 0x150), "r"(p + 0x50) : "memory");
        v30[1] = 0.0f;
        d = func_001324E0(v30);
        if (d < 100.0f) f = -20.0f;
        else if (d < 300.0f) f = -16.0f;
        else if (d < 500.0f) f = -12.0f;
        else if (d < 700.0f) f = -8.0f;
        else f = -4.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v40), "r"(v50) : "memory");
        v40[0] = v40[0] + 10.0f * func_00131BA0(*(short *)(p + 0x90));
        v40[1] = v40[1] + f;
        v40[2] = v40[2] + 10.0f * func_00131C20(*(short *)(p + 0x90));
        func_00448C50(v50, v40);
        break;
    case 3:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 54.0f;
            *(unsigned char *)(p + 0x1352) = 0;
        }
        break;
    case 4:
        *(unsigned char *)(p + 0x1352) = 0;
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(unsigned char *)(p + 6) = 0;
            func_0033A620(p, 3, 7);
            *(char **)(p + 0x12DC) = func_00207480(3, 0x3BF, 0, 0x10);
            q = *(char **)(p + 0x12DC);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x684) + 0x104);
                *(unsigned char *)(q + 0x9A) = 3;
            }
            *(float *)(p + 0x136C) = 8.0f;
        }
        break;
    case 5:
        switch (*(unsigned char *)(p + 6)) {
        case 0:
            *(unsigned char *)(p + 0x1352) = 0;
            *(float *)(p + 0x136C) = *(float *)(p + 0x136C) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x136C) < 0.0f) *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            break;
        case 1:
            break;
        }
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) ((W339 *)p)->m304(0x20);
        break;
    }
    func_0033A580(p);
}

static inline int ok2FF(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

extern "C" void func_002FF1E0(char *p) {
    char *h;
    switch (*(unsigned int *)(p + 0x10)) {
    case 0:
        *(unsigned char *)(*(char **)(p + 0x34) + 0x7965) = 1;
        func_0048D950(p + 0x3C, 1, 8, 0, 0);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
    case 1:
        func_0048D990(p + 0x3C);
        switch ((unsigned char)func_0048DBC0(p + 0x3C)) {
        case 1:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        case 2:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        case 0:
            break;
        }
        break;
    case 2:
        if ((unsigned char)func_00509AA0(p + 0x88) == 1) *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        else *(int *)(p + 0x10) = 5;
        break;
    case 3:
        func_00509B10(p + 0x88);
        switch ((unsigned char)func_00509F90(p + 0x88)) {
        case 0:
            break;
        case 1:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        }
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m14(0x80000000, 0x1E);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 5:
        *(int *)(p + 0x30) = func_001AFB90(D_00666750, 0xEEE, 0, 8);
        if (*(int *)(p + 0x30) == 0) {
            *(int *)(p + 0x10) = 0xC;
            break;
        }
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 6:
        if ((unsigned char)ok2FF(*(char **)(p + 0x30)) != 1) break;
        if ((*(int *)(p + 0x38) = func_0050F270(*(char **)(p + 0x30))) == 0) {
            *(int *)(p + 0x10) = 8;
            break;
        }
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 7:
        *(unsigned char *)(p + 0x24) = func_0050F7F0(*(int *)(p + 0x38));
        switch (*(unsigned char *)(p + 0x24)) {
        case 0:
            break;
        case 1: case 2: default:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        }
        break;
    case 8:
        if (*(char **)(p + 0x38) != 0) {
            func_001AD140(*(char **)(p + 0x38));
            *(char **)(p + 0x38) = 0;
        }
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 9: case 10:
        *(int *)(p + 0x10) = *(unsigned int *)(p + 0x10) + 1;
        break;
    case 11:
        h = *(char **)(p + 0x30);
        if (h != 0) {
            if (!(unsigned char)ok2FF(h)) break;
            func_001AF080(D_00666750, (int)h);
            *(int *)(p + 0x30) = 0;
        }
        switch (*(unsigned char *)(p + 0x24)) {
        case 1: default:
            *(int *)(p + 0x10) = 0xC;
            break;
        case 2:
            *(int *)(p + 0x10) = 0xE;
            break;
        }
        break;
    case 12:
        func_0048D950(p + 0x3C, 3, 8, 0, 0);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
    case 13:
        func_0048D990(p + 0x3C);
        switch ((unsigned char)func_0048DBC0(p + 0x3C)) {
        case 1:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        case 2:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        case 0:
            break;
        }
        break;
    case 14:
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        *(int *)(p + 0x10) = 0;
        break;
    }
}

class W31Eo {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void m1C(int);
    virtual void d20();
    virtual void m24();
    virtual void d28();
    virtual int m2C();
    virtual int m30();
    virtual int m34();
    virtual short m38();
    virtual void d3C();
    virtual void d40();
    virtual void m44();
};

class W31E {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void m28(int);
};

extern "C" void func_0031EDD0(char *p) {
    switch (*(unsigned int *)(p + 0x1C)) {
    case 0:
        if ((*(W31Eo **)(p + 8))->m34() != 0) {
            *(unsigned char *)(p + 0x13) = 8;
            *(short *)(*(char **)(p + 0xC) + 0x50) = (*(W31Eo **)(p + 8))->m38();
            (*(W31Eo **)(p + 8))->m1C(0xA);
            (*(W31Eo **)(p + 8))->m44();
            *(int *)(p + 0x1C) = 2;
            break;
        }
        *(float *)(*(char **)(p + 0xC) + 0x20) = *(float *)(*(char **)(p + 0xC) + 0x20) + *(float *)(*(char **)(p + 0xC) + 0x30);
        *(float *)(*(char **)(p + 0xC) + 0x24) = *(float *)(*(char **)(p + 0xC) + 0x24) + *(float *)(*(char **)(p + 0xC) + 0x34);
        *(float *)(*(char **)(p + 0xC) + 0x28) = *(float *)(*(char **)(p + 0xC) + 0x28) + *(float *)(*(char **)(p + 0xC) + 0x38);
        if (!(*(float *)(*(char **)(p + 0xC) + 0x24) < 0.0f)) break;
        if ((*(W31Eo **)(p + 8))->m30() == 0) break;
        *(unsigned char *)(p + 0x11) = 0;
        (*(W31Eo **)(p + 8))->m1C(0x11);
        (*(W31Eo **)(p + 8))->m44();
        *(float *)(*(char **)(p + 0xC) + 0x20) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x24) = 2.0f;
        *(float *)(*(char **)(p + 0xC) + 0x28) = -20.0f;
        *(float *)(*(char **)(p + 0xC) + 0x2C) = 1.0f;
        *(float *)(*(char **)(p + 0xC) + 0x30) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x34) = -0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x38) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x3C) = 1.0f;
        *(int *)(p + 0x1C) = 5;
        break;
    case 1:
        break;
    case 2:
        if ((*(W31Eo **)(p + 8))->m2C() != 0) {
            (*(W31Eo **)(p + 8))->m1C(0xB);
            *(unsigned char *)(p + 0x13) = 4;
            *(int *)(p + 0x1C) = 3;
        }
        (*(W31Eo **)(p + 8))->m24();
        break;
    case 3:
        if ((*(W31Eo **)(p + 8))->m2C() != 0) {
            (*(W31Eo **)(p + 8))->m1C(6);
            *(unsigned char *)(p + 0x13) = 4;
            *(int *)(p + 0x1C) = 4;
        }
        (*(W31Eo **)(p + 8))->m24();
        break;
    case 4:
        if ((*(W31Eo **)(p + 8))->m2C() != 0) ((W31E *)p)->m28(0xE);
        (*(W31Eo **)(p + 8))->m24();
        break;
    case 5:
        *(float *)(*(char **)(p + 0xC) + 0x20) = *(float *)(*(char **)(p + 0xC) + 0x20) - *(float *)(*(char **)(p + 0xC) + 0x20) / 20.0f;
        *(float *)(*(char **)(p + 0xC) + 0x28) = *(float *)(*(char **)(p + 0xC) + 0x28) - *(float *)(*(char **)(p + 0xC) + 0x28) / 20.0f;
        if ((*(W31Eo **)(p + 8))->m2C() == 0) break;
        (*(W31Eo **)(p + 8))->m1C(5);
        (*(W31Eo **)(p + 8))->m44();
        *(float *)(*(char **)(p + 0xC) + 0x20) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x24) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x28) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x2C) = 1.0f;
        *(float *)(*(char **)(p + 0xC) + 0x30) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x34) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x38) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x3C) = 1.0f;
        *(int *)(p + 0x1C) = 6;
        break;
    case 6:
        if ((*(W31Eo **)(p + 8))->m2C() != 0) ((W31E *)p)->m28(0xE);
        (*(W31Eo **)(p + 8))->m24();
        break;
    }
}
