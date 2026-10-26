extern "C" char *func_00279290(char *);

extern "C" void func_001A2180(char *, int, int);

extern "C" void func_001A3370(char *, int);

class Obj240Snd {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual int m2C(int, int); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void mB0(int, char *);
};

extern "C" {
void func_00284A10(char *p) {
    extern void func_001AD140(char *);
    float y;
    float x;
    char *q;
    if (((Obj240Snd *)(p + 0x240))->m2C(*(int *)(p + 0x1B0), *(int *)(p + 0x1B4)) == 0) {
        func_001AD140(p);
        return;
    }
    ((Obj240Snd *)(p + 0x240))->mB0(*(int *)(p + 0x1B8), p + 0x1C0);
    *(float *)(p + 0xE40) = 80.0f;
    *(float *)(p + 0xE44) = 20.0f;
    *(float *)(p + 0xE48) = 10.0f;
    func_001A2180(func_00279290(p + 0x240), 0x80, 1);
    func_001A3370(func_00279290(p + 0x240), 1);
    x = *(float *)(p + 0xE48);
    y = *(float *)(p + 0xE44);
    q = func_00279290(p + 0x240);
    *(float *)(q + 0x190) = y;
    *(float *)(q + 0x194) = x;
    *(int *)(p + 0xE4C) = *(int *)(p + 0x1AC);
}
}

extern "C" char D_01CAFF0C[];

extern "C" int func_00201770(char *, float *, float *, float *, int);

extern "C" {
void func_0024DD30(char *p);
}

#define QCOPYB(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_0024E830(char *, char *, float *, char *);

#define VZERO20(d) __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"(d) : "memory")

static inline bool stage_on(void) {
    unsigned char r;
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}

extern "C" void func_0027D620(char *p) {
    float z[4];
    float a[4];
    float b[4];
    VZERO20(z);
    if (stage_on()) {
        QCOPYB(a, p + 0x50);
        a[1] = a[1] + 100.0f;
        a[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, a, b, (float *)(p + 0x2B50), 0) == 1) {
            func_0024E830(p + 0x2160, p + 0x50, z, p + 0x2B50);
            func_0024E830(p + 0x2230, p + 0x50, z, p + 0x2B50);
        }
    }
    func_0024DD30(p + 0x2160);
    func_0024DD30(p + 0x2230);
}

class V285 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual int m2C(int, int);
    virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C();
    virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC();
    virtual void mB0(int, char *);
};

static inline void func_00285560_s(char *p, char *o) {
    float b;
    float a;
    char *q;
    *(float *)(p + 0xEC0) = 80.0f;
    *(float *)(p + 0xEC4) = 20.0f;
    *(float *)(p + 0xEC8) = 10.0f;
    func_001A2180(func_00279290(o), 0x80, 1);
    func_001A3370(func_00279290(o), 1);
    a = *(float *)(p + 0xEC8);
    b = *(float *)(p + 0xEC4);
    q = func_00279290(o);
    *(float *)(q + 0x190) = b;
    *(float *)(q + 0x194) = a;
}

extern "C" {
void func_00285560(char *p) {
    int func_001AD140(char *p);
    *(int *)(p + 0xECC) = *(int *)(p + 0x20C);
    if (((V285 *)(p + 0x2C0))->m2C(*(int *)(p + 0x210), *(int *)(p + 0x214)) == 0) {
        func_001AD140(p);
        return;
    }
    ((V285 *)(p + 0x2C0))->mB0(*(int *)(p + 0x218), p + 0x228);
    func_00285560_s(p, p + 0x2C0);
    if (((V285 *)(p + 0x8C0))->m2C(*(int *)(p + 0x220), *(int *)(p + 0x214)) == 0) {
        func_001AD140(p);
        return;
    }
    ((V285 *)(p + 0x8C0))->mB0(*(int *)(p + 0x218), p + 0x284);
    func_00285560_s(p, p + 0x8C0);
    *(float *)(p + 0xEC0) = 72.0f;
}
}

extern "C" void func_00105300(char *, int);

extern "C" void func_00104C00(char *, char *, char *);

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

extern "C" V3C0 *func_002792A0(char *);

extern "C" void func_00104B80(char *, char *, char *);

extern "C" float func_00131BA0(short);

extern "C" float func_00131C20(short);

extern "C" short func_00131D10(float, float);

extern "C" void func_002EF940(char *, char *);

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

extern "C" void func_001A5CC0(char *);

extern "C" void func_00138340(int);

extern "C" void func_001A23D0(char *);

extern "C" int func_001A5DA0(char *);

extern "C" void func_001A5D70(char *, short);

class S40D {
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
    virtual int m200(unsigned char *, float *, char *);
};

class A40D {
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

typedef struct { int v[16]; } M40D;

extern "C" {
void func_00283F80(char *p) {
    extern void func_001A5C30(char *);
    unsigned char c;
    float x;
    M40D m2;
    char m[64];
    unsigned char r;
    short n;
    r = ((S40D *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x410) + 0x104) + 0x30);
    if (r == 1) {
        func_001A5CC0(func_00279290(p + 0x4C0));
        func_00138340(c);
    } else {
        func_001A23D0(func_00279290(p + 0x4C0));
        func_001A5C30(func_00279290(p + 0x4C0));
    }
    m2 = *(M40D *)(p + 0x1E80);
    ((A40D *)(p + 0x4C0))->mCC((char *)&m2);
    if (*(unsigned char *)(p + 0x2620) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0xAC0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0xAC0));
            func_001A5C30(func_00279290(p + 0xAC0));
        }
        n = func_001A5DA0(func_00279290(p + 0x4C0));
        func_001A5D70(func_00279290(p + 0xAC0), n - 1);
        ((A40D *)(p + 0xAC0))->mCC(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2624)] + 0x104));
    }
    if (*(unsigned char *)(p + 0x2621) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0x10C0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0x10C0));
            func_001A5C30(func_00279290(p + 0x10C0));
        }
        n = func_001A5DA0(func_00279290(p + 0x4C0));
        func_001A5D70(func_00279290(p + 0x10C0), n - 1);
        ((A40D *)(p + 0x10C0))->mCC(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2628)] + 0x104));
    }
    if (*(unsigned char *)(p + 0x2622) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0x16C0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0x16C0));
            func_001A5C30(func_00279290(p + 0x16C0));
        }
        func_00104C00(m, *(char **)(*(char **)(p + 0x428) + 0x104), p + 0x1F00);
        ((A40D *)(p + 0x16C0))->mCC(m);
    }
}
}

class P281 {
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
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void m1D0();
    virtual void m1D4(int, char *);
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void m22C();
    virtual void m230();
};

class VC8281 {
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
    virtual void mC8(char *);
};

class V24281 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24();
};

typedef struct { char *p; char *c; int a; int b; char *d; } S281;

static inline char *en281(char *t, int i) {
    char *r;
    if (*(unsigned int *)(t + 4) < i + 1) {
        r = 0;
    } else if (*(int *)(t + i * 4 + 8) == 0) {
        r = 0;
    } else {
        r = t + *(int *)(t + i * 4 + 8);
    }
    return r;
}

static inline char *gc281(char *h, int i) {
    char *r;
    if (**(unsigned short **)(h + 8) == 0) {
        r = en281(*(char **)(h + 0xC), i);
    } else {
        r = *(char **)(h + 0xC);
    }
    return r;
}

extern "C" V24281 *func_00284750(S281 *);

extern "C" void func_00281D00(P281 *q) {
    char *p = (char *)q;
    S281 s;
    V24281 *o;
    if (*(unsigned char *)(p + 0x23C0) != 0) {
        switch (*(int *)(p + 0x23C4)) {
        case 0:
            if (*(unsigned char *)(p + 0x2620) != 0) {
                *(unsigned char *)(p + 0x1CCC) = 0;
                *(float *)(p + 0x1D70) = *(float *)(p + 0x10);
                ((VC8281 *)(p + 0xAC0))->mC8(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2624)] + 0x104));
                *(unsigned char *)(p + 0x1CCC) = 1;
            }
            if (*(unsigned char *)(p + 0x2621) != 0) {
                *(unsigned char *)(p + 0x1D8C) = 0;
                *(float *)(p + 0x1E30) = *(float *)(p + 0x10);
                ((VC8281 *)(p + 0x10C0))->mC8(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2628)] + 0x104));
                *(unsigned char *)(p + 0x1D8C) = 1;
            }
            s.p = p;
            s.c = gc281(*(char **)(p + 0x3F0), 4);
            s.a = *(int *)(p + 0x3FC);
            s.b = *(int *)(p + 0x400);
            s.d = p + 0x404;
            o = func_00284750(&s);
            if (o != 0) {
                o->m24();
                *(V24281 **)(p + 0x2630) = o;
                q->m1D0();
            }
            *(float *)(p + 0x23C8) = 64.0f;
            *(int *)(p + 0x23C4) = 1;
            break;
        case 1:
            if ((*(float *)(p + 0x23C8) -= *(float *)(p + 0x10)) <= 0.0f) {
                q->m1D0();
                *(int *)(p + 0x23C4) = 2;
                *(unsigned char *)(p + 0x23C0) = 0;
            }
            break;
        case 2:
            break;
        }
    }
    if (*(unsigned char *)(p + 0x23CC) != 0) {
        switch (*(int *)(p + 0x23D0)) {
        case 0:
            q->m1D4(8, p + 0x50);
            q->m22C();
            *(float *)(p + 0x23D4) = 40.0f;
            *(int *)(p + 0x23D0) = 1;
            break;
        case 1:
            if ((*(float *)(p + 0x23D4) -= *(float *)(p + 0x10)) <= 0.0f) {
                q->m230();
                *(int *)(p + 0x23D0) = 2;
                *(unsigned char *)(p + 0x23CC) = 0;
            }
            break;
        case 2:
            break;
        }
    }
    if (*(unsigned char *)(p + 0x23D8) != 0) {
        switch (*(int *)(p + 0x23DC)) {
        case 0:
            q->m22C();
            *(float *)(p + 0x23E0) = 30.0f;
            *(int *)(p + 0x23DC) = 1;
            break;
        case 1:
            if ((*(float *)(p + 0x23E0) -= *(float *)(p + 0x10)) <= 0.0f) {
                q->m230();
                *(float *)(p + 0x23E0) = 30.0f;
                *(int *)(p + 0x23DC) = 2;
            }
            break;
        case 2:
            if ((*(float *)(p + 0x23E0) -= *(float *)(p + 0x10)) <= 0.0f) {
                *(int *)(p + 0x23DC) = 3;
                *(unsigned char *)(p + 0x23D8) = 0;
            }
            break;
        case 3:
            break;
        }
    }
}

class VC4_0_p {
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
    virtual char *m(void);
};

extern "C" {
int func_0027D720(int p0) {
    char *tmp0;
    tmp0 = ((VC4_0_p *)(p0 + 1216))->m();
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(tmp0), "r"((p0 + 96)) : "memory");
    return (int)tmp0;
}
}

class VC4_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_0027D760(int p0) {
    int tmp0;
    tmp0 = ((VC4_0_i *)(p0 + 1216))->m();
    return tmp0;
}
}

extern "C" {
int func_001A5C80(int);
}

class VC_0_i {
public:
    virtual void d0();
    virtual int m(void);
};

extern "C" {
int func_0027D7B0(int p0) {
    char *v0;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    v0 = (char *)p0;
    tmp0 = ((VC_0_i *)(v0 + 1216))->m();
    func_001A5C80(tmp0);
    if (*(unsigned char *)(v0 + 9760) != 0) {
        tmp1 = ((VC_0_i *)(v0 + 2752))->m();
        func_001A5C80(tmp1);
    }
    if (*(unsigned char *)(v0 + 9761) != 0) {
        tmp2 = ((VC_0_i *)(v0 + 4288))->m();
        func_001A5C80(tmp2);
    }
    tmp3 = ((VC_0_i *)(v0 + 5824))->m();
    tmp4 = func_001A5C80(tmp3);
    return tmp4;
}
}

extern "C" {
int func_0027D850(int p0) {
    int func_001A5C30(int);
    char *v0;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    v0 = (char *)p0;
    tmp0 = ((VC_0_i *)(v0 + 1216))->m();
    func_001A5C30(tmp0);
    if (*(unsigned char *)(v0 + 9760) != 0) {
        tmp1 = ((VC_0_i *)(v0 + 2752))->m();
        func_001A5C30(tmp1);
    }
    if (*(unsigned char *)(v0 + 9761) != 0) {
        tmp2 = ((VC_0_i *)(v0 + 4288))->m();
        func_001A5C30(tmp2);
    }
    tmp3 = ((VC_0_i *)(v0 + 5824))->m();
    tmp4 = func_001A5C30(tmp3);
    return tmp4;
}
}

extern "C" {
int func_0013D5D0(...);
}

class V24_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m(void);
};

class VD0_0_i {
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
int func_00283E90(int p0) {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 5824))->m();
    if (*(unsigned char *)(v0 + 9760) != 0) {
        ((VD0_0_v *)(v0 + 2752))->m();
    }
    if (*(unsigned char *)(v0 + 9761) != 0) {
        ((VD0_0_v *)(v0 + 4288))->m();
    }
    v1 = 0;
    v2 = v0;
    do {
        ((V24_0_v *)(v2 + 9272))->m();
        v1 = (v1 + 1);
        v2 = (v2 + 32);
    } while ((v1 < 10));
    v3 = ((VD0_0_i *)(v0 + 1216))->m();
    v4 = 0;
    if ((0 < *(int *)(v0 + 308))) {
        v5 = (int)v0;
        do {
            v3 = func_0013D5D0((v5 + 312));
            v4 = (v4 + 1);
            v5 = (v5 + 16);
        } while ((v4 < *(int *)(v0 + 308)));
    }
    return v3;
}
}

extern "C" {
int func_00284F90(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 576))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 56))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 60));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 56)));
    }
    return v1;
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
int func_00285010(char *p0) {
    char stk[0x40] __attribute__((aligned(16)));
    int tmp0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -16) + 16)) : "memory");
    p0 = (p0 + 576);
    tmp0 = ((VCC_1_pi *)p0)->m(((stk + -16) + 16));
    return tmp0;
}
}

extern "C" {
int func_00285F40(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 704))->m();
    v1 = ((VD0_0_i *)(v0 + 2240))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 56))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 60));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 56)));
    }
    return v1;
}
}

class VCC_1_pv {
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
    virtual void m(char *);
};

extern "C" {
int func_00285FD0(int p0) {
    char stk[0x40] __attribute__((aligned(16)));
    int tmp0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 32)) : "memory");
    ((VCC_1_pv *)(p0 + 704))->m(((stk + -32) + 32));
    tmp0 = ((VCC_1_pi *)(p0 + 2240))->m(((stk + -32) + 32));
    return tmp0;
}
}

class V1D8_1_ii {
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
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual int m(int);
};

extern "C" {
int func_00283800(char *p0) {
    int tmp0;
    tmp0 = ((V1D8_1_ii *)p0)->m(0);
    return tmp0;
}
}
