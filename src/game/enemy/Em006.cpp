class P40D {
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

class V1040D {
public:
    virtual void d0();
    virtual void d1();
    virtual void m10(float);
};

class VC840D {
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

class V2440D {
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

typedef struct { char *p; char *c; int a; int b; char *d; char *e; char *f; } S40D;

static inline char *en40D(char *t, int i) {
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

static inline char *gc40D(char *h, int i) {
    char *r;
    if (**(unsigned short **)(h + 8) == 0) {
        r = en40D(*(char **)(h + 0xC), i);
    } else {
        r = *(char **)(h + 0xC);
    }
    return r;
}

extern "C" V2440D *func_002851D0(S40D *);

extern "C" void func_0040D260(P40D *q) {
    char *p = (char *)q;
    S40D s;
    V2440D *o;
    ((V1040D *)(p + 0x2BD0))->m10(*(float *)(p + 0x10));
    ((V1040D *)(p + 0x2BEC))->m10(*(float *)(p + 0x10));
    if (*(unsigned char *)(p + 0x23C0) != 0) {
        switch (*(int *)(p + 0x23C4)) {
        case 0:
            if (*(unsigned char *)(p + 0x2620) != 0) {
                *(unsigned char *)(p + 0x1CCC) = 0;
                *(float *)(p + 0x1D70) = *(float *)(p + 0x10);
                ((VC840D *)(p + 0xAC0))->mC8(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2624)] + 0x104));
                *(unsigned char *)(p + 0x1CCC) = 1;
            }
            if (*(unsigned char *)(p + 0x2621) != 0) {
                *(unsigned char *)(p + 0x1D8C) = 0;
                *(float *)(p + 0x1E30) = *(float *)(p + 0x10);
                ((VC840D *)(p + 0x10C0))->mC8(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2628)] + 0x104));
                *(unsigned char *)(p + 0x1D8C) = 1;
            }
            s.p = p;
            s.c = gc40D(*(char **)(p + 0x3F0), 4);
            s.a = *(int *)(p + 0x3FC);
            s.b = *(int *)(p + 0x2BC0);
            s.d = p + 0x404;
            s.e = gc40D(*(char **)(p + 0x3F0), 5);
            s.f = p + 0x460;
            o = func_002851D0(&s);
            if (o != 0) {
                o->m24();
                *(V2440D **)(p + 0x2634) = o;
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

extern "C" char *func_00279290(char *);

extern "C" void func_001A1F90(char *);

extern "C" void func_001A2180(char *, unsigned char, int);

extern "C" void func_001A2210(char *, int, unsigned char, int);

class P40E {
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
    virtual void m1A0();
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
    virtual void m1D4(int, char *);
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void m1F4(char *, int);
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
};

static inline void st40E(char *m, unsigned int k, unsigned char a) {
    if (k < *(unsigned short *)(m + 0xA8)) *(int *)(*(char **)(m + 0xBC) + k * 0x340 + 0x15C) = a;
}

static inline void fd40E(char *p, char *o) {
    char *m;
    int j;
    unsigned char a;
    func_001A2180(func_00279290(o), *(unsigned char *)(p + 0x241C), 1);
    func_001A2210(func_00279290(o), 0, *(unsigned char *)(p + 0x241C), 1);
    func_001A2210(func_00279290(o), 1, *(unsigned char *)(p + 0x241C), 3);
    a = *(unsigned char *)(p + 0x241C);
    m = func_00279290(o);
    for (j = 0; j < *(unsigned short *)(m + 0xA8); j++) st40E(m, j, a);
}

extern "C" void func_0040D690(P40E *q) {
    char *p = (char *)q;
    int i;
    char *r;
    char *fl;
    if (*(unsigned char *)(p + 0x23E4) != 0) {
        switch (*(int *)(p + 0x23E8)) {
        case 0:
            q->m1D4(0x69, p + 0x50);
            func_001A1F90(func_00279290(p + 0x16C0));
            q->m1D4(0x28, p + 0x50);
            q->m1D4(0xC8, p + 0x50);
            *(unsigned char *)(p + 0x2414) = 1;
            q->m1D4(0xCA, p + 0x50);
            q->m1D4(0xCB, p + 0x50);
            *(unsigned char *)(p + 0x2415) = 1;
            q->m1D4(0xC9, p + 0x50);
            *(unsigned char *)(p + 0x2416) = 1;
            q->m1D4(0xCD, p + 0x50);
            *(unsigned char *)(p + 0x2417) = 1;
            q->m1D4(0xCC, p + 0x50);
            *(unsigned char *)(p + 0x2418) = 1;
            q->m1D4(0xCE, p + 0x50);
            *(unsigned char *)(p + 0x2419) = 1;
            break;
        }
        if (*(int *)(p + 0x23E8) == 0x46) {
            q->m1F4(p + 0x3B0, 0);
            q->m22C();
            q->m1A0();
            return;
        }
        (*(int *)(p + 0x23E8))++;
    }
    if (*(unsigned char *)(p + 0x23FC) != 0) {
        switch (*(int *)(p + 0x2400)) {
        case 0x46:
            q->m1F4(p + 0x3B0, 0);
            q->m1D4(0x69, p + 0x50);
            func_001A1F90(func_00279290(p + 0x16C0));
            q->m1D4(0x28, p + 0x50);
            break;
        case 0x5A:
            q->m1D4(0xC8, p + 0x50);
            q->m1D4(0x67, p + 0x50);
            *(unsigned char *)(p + 0x2414) = 1;
            q->m1D4(0xCA, p + 0x50);
            q->m1D4(0xCB, p + 0x50);
            *(unsigned char *)(p + 0x2415) = 1;
            q->m1D4(0xC9, p + 0x50);
            q->m1D4(0x67, p + 0x50);
            *(unsigned char *)(p + 0x2416) = 1;
            q->m1D4(0xCD, p + 0x50);
            *(unsigned char *)(p + 0x2417) = 1;
            q->m1D4(0xCC, p + 0x50);
            q->m1D4(0x67, p + 0x50);
            *(unsigned char *)(p + 0x2418) = 1;
            q->m1D4(0xCE, p + 0x50);
            *(unsigned char *)(p + 0x2419) = 1;
            break;
        }
        if (*(int *)(p + 0x2400) == 0xC8) {
            q->m22C();
            q->m1A0();
            return;
        }
        (*(int *)(p + 0x2400))++;
    }
    for (i = 0, r = p; i < 6; i++, r += 4) {
        fl = p + i + 0x2414;
        if (*(unsigned char *)fl == 0) continue;
        if (*(int *)(r + 0x241C) > 0) {
            fd40E(p, p + 0x4C0);
            fd40E(p, p + 0xAC0);
            *(int *)(r + 0x241C) -= 0x40;
        } else {
            func_001A1F90(func_00279290(p + 0x4C0));
            func_001A1F90(func_00279290(p + 0xAC0));
            *(int *)(r + 0x241C) = 0;
            *(unsigned char *)fl = 0;
        }
    }
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
};

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
int func_0040DD10(int p0) {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)p0;
    ((V14_0_v *)(v0 + 11216))->m();
    ((V14_0_v *)(v0 + 11244))->m();
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
