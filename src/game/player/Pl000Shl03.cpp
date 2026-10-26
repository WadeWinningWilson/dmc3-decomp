#include "game/vthunk.h"
class V210 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49();virtual void d50();virtual void d51();virtual void d52();virtual void d53();virtual void d54();virtual void d55();virtual void d56();virtual void d57();virtual void d58();virtual void d59();virtual void d60();virtual void d61();virtual void d62();virtual void d63();virtual void d64();virtual void d65();virtual void d66();virtual void d67();virtual void d68();virtual void d69();virtual void d70();virtual void d71();virtual void d72();virtual void d73();virtual void d74();virtual void d75();virtual void d76();virtual void d77();virtual void d78();virtual void d79();virtual void d80();virtual void d81();virtual void d82();virtual void d83();virtual void d84();virtual void d85();virtual void d86();virtual void d87();virtual void d88();virtual void d89();virtual void d90();virtual void d91();virtual void d92();virtual void d93();virtual void d94();virtual void d95();virtual void d96();virtual void d97();virtual void d98();virtual void d99();virtual void d100();virtual void d101();virtual void d102();virtual void d103();virtual void d104();virtual void d105();virtual void d106();virtual void d107();virtual void d108();virtual void d109();virtual void d110();virtual void d111();virtual void d112();virtual void d113();virtual void d114();virtual void d115();virtual void d116();virtual void d117();virtual void d118();virtual void d119();virtual void d120();virtual void d121();virtual void d122();virtual void d123();virtual void d124();virtual void d125();virtual void d126();virtual void d127();virtual void d128();virtual void d129(); virtual unsigned char f();
};

extern "C" unsigned char func_0048AEE0(class V210 *);

extern "C" unsigned char func_0038F250(class V210 *);

extern "C" int func_0033DA60(V210 *p) {
    switch (*(signed char *)((char *)p + 0x46)) {
    case 0x1B:
    case 0x2B:
    case 0x1E:
    case 0x37:
    case 0x34:
    case 0x35:
    case 0x3A:
    case 0x2C:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x31:
    case 0x2A:
        return 0;
    case 0x1D:
        if (*(unsigned char *)((char *)p + 0x134D) == 1) return 0;
        break;
    case 0x20:
        if (func_0038F250(p) == 0) return 0;
        break;
    case 0x22:
        if (func_0048AEE0(p) == 0) return 0;
        break;
    case 0x1A:
        if (p->f() == 0) return 0;
        break;
    }
    return 1;
}

extern "C" void func_00104B80(float *, char *, char *);

extern "C" char D_01CAFF0C[];

extern "C" unsigned char func_002D9FA0(char *, float *);

extern "C" short func_0034B940(float *, float *);

extern "C" void func_00131700(float *, float *, float *);

extern "C" void func_00131650(char *, char *);

extern "C" void func_0033CC60(char *);

extern "C" void func_0033D430(char *);

extern "C" void func_0033D310(char *);

extern "C" void func_0033D350(char *);

static inline unsigned char on33D(char *q) {
    if (*(unsigned char *)(q + 0x28A6)) return 1;
    return 0;
}

extern "C" void func_0033D810(char *p) {
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *o;
    *(unsigned char *)(p + 0xB42) = 0;
    o = *(char **)D_01CAFF0C;
    a[0] = *(float *)(p + 0x50);
    a[1] = *(float *)(p + 0x54);
    a[2] = *(float *)(p + 0x58);
    a[3] = 1.0f;
    b[0] = *(float *)(*(char **)(o + 0xC) + 0x50);
    b[1] = *(float *)(*(char **)(o + 0xC) + 0x54);
    b[2] = *(float *)(*(char **)(o + 0xC) + 0x58);
    b[3] = 1.0f;
    if (on33D(*(char **)(p + 0xBC0)) == 1 && func_002D9FA0(*(char **)(p + 0xBC0), a) == 1) {
        b[0] = *(float *)(p + 0x50);
        b[1] = *(float *)(p + 0x54);
        b[2] = *(float *)(p + 0x58);
        b[3] = 1.0f;
    }
    *(short *)(p + 0x90) = func_0034B940(a, b);
    b[0] = *(float *)(p + 0x50);
    b[1] = *(float *)(p + 0x54);
    b[2] = *(float *)(p + 0x58);
    b[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    c[0] = 0.0f;
    c[1] = 0.0f;
    c[2] = 800.0f;
    c[3] = 1.0f;
    func_00104B80(d, (char *)m, (char *)c);
    a[0] = *(float *)(p + 0x50) + d[0];
    a[1] = *(float *)(p + 0x54);
    a[2] = *(float *)(p + 0x58) + d[2];
    a[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xB70), "r"(a), "r"(b) : "memory");
    func_00131650(p + 0xB70, p + 0xB70);
    *(float *)(p + 0xB7C) = 1.0f;
    *(float *)(p + 0xB44) = 1.0f;
    func_0033CC60(p);
    func_0033D430(p);
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    func_0033D310(p);
    func_0033D350(p);
}

class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" {
extern "C" void func_0033CBE0(char *p) {
    ((SubCCc *)(p + 0x540))->mCC(p + 0xB80);
}
}

extern "C" {
int func_0033BFC0(char *);
}

class V130_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_0033BBD0(char *p0) {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        ((V130_1_iv *)p0)->m(v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        /* fall through */
    case 1:
        v2 = func_0033BFC0(v1);
        break;
    }
    return v2;
}
}

extern "C" void func_0033CAD0(char *p) { ((VThunk *)*(char **)(p + 0xBC0))->v57(); }

extern "C" void func_0033CBD0(void) {}

extern "C" void func_0033CAB0(char *p) { ((VThunk *)*(char **)(p + 0xBC0))->v68(); }

extern "C" void func_0033CBB0(char *p) { ((VThunk *)(p + 0x540))->v50(); }
