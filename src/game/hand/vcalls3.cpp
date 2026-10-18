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
