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
extern "C" float func_00131BA0(int);
extern "C" float func_00131C20(int);
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
