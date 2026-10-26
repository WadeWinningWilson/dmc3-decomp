extern "C" char D_01CAFF0C[];

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

class ObjF1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

static inline float cur_f1c() {
    char *g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0) {
        ObjF1C *o = *(ObjF1C **)(g + 0x10);
        if (o != 0) {
            return o->m1C();
        }
    }
    return 0.0f;
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void v4set(char *v, float x, float y, float z, float w) {
    *(float *)(v + 0) = x;
    *(float *)(v + 4) = y;
    *(float *)(v + 8) = z;
    *(float *)(v + 0xC) = w;
}

extern "C" void func_00373660(char *p) {
    unsigned char i;
    float f;
    QCOPY(p + 0x840, p + 0x50);
    QCOPY(p + 0x850, p + 0x50);
    *(unsigned char *)(p + 0x860) = 0;
    v4set(p + 0x870, 0.0f, 0.0f, 0.0f, 1.0f);
    v4set(p + 0x880, 0.0f, 0.0f, 0.0f, 1.0f);
    v4set(p + 0x890, 1.0f, 1.0f, 1.0f, 1.0f);
    UNIT(p + 0x8A0);
    func_00131700(p + 0x8A0, p + 0x8A0, p + 0x880);
    func_00105230(p + 0x8A0, p + 0x8A0, p + 0x870);
    func_001318E0(p + 0x8A0, p + 0x8A0, p + 0x890);
    *(int *)(p + 0x8E0) = 0;
    *(int *)(p + 0x8E4) = 0;
    *(unsigned char *)(p + 0x8E8) = 0;
    *(unsigned char *)(p + 0x8E9) = 0;
    *(unsigned char *)(p + 0x8EA) = 0xFF;
    f = cur_f1c();
    *(float *)(p + 0x144) = f;
    if (f < 300.0f) {
        *(unsigned char *)(p + 0x8EB) = 0;
    } else if (f < 500.0f) {
        *(unsigned char *)(p + 0x8EB) = 1;
    } else if (f < 800.0f) {
        *(unsigned char *)(p + 0x8EB) = 2;
    } else {
        *(unsigned char *)(p + 0x8EB) = 3;
    }
    *(float *)(p + 0x8EC) = 300.0f;
    *(float *)(p + 0x8F0) = 1.0f;
    *(float *)(p + 0x8F4) = 0.0f;
    *(float *)(p + 0x8F8) = 0.0f;
    *(float *)(p + 0x8FC) = 0.0f;
    *(float *)(p + 0x900) = 1.0f;
    *(float *)(p + 0x904) = 300.0f;
    *(float *)(p + 0x908) = 0.0f;
    for (i = 0; i < 8; i++) {
        ((int *)(p + 0x914))[i] = 0;
    }
    *(int *)(p + 0x934) = 0;
    *(int *)(p + 0x938) = 0;
    *(int *)(p + 0x93C) = 0;
    *(int *)(p + 0x940) = 0;
    *(int *)(p + 0x944) = 0;
    *(float *)(p + 0x948) = 600.0f;
    *(int *)(p + 0x94C) = 0;
    *(int *)(p + 0x950) = 0;
    *(int *)(p + 0x954) = 0;
    *(int *)(p + 0x958) = 0;
    *(float *)(p + 0x95C) = 64.0f;
    *(int *)(p + 0x960) = 0;
    *(int *)(p + 0x964) = 0;
    *(int *)(p + 0x968) = 0;
    *(short *)(p + 0x96C) = 0;
    *(short *)(p + 0x96E) = 0;
    *(short *)(p + 0x970) = 0;
    *(unsigned char *)(p + 0x972) = 0;
    *(unsigned char *)(p + 0x973) = 0;
    *(unsigned char *)(p + 0x974) = 0;
    *(unsigned char *)(p + 0x975) = 0;
    *(unsigned char *)(p + 0x976) = 0;
    *(unsigned char *)(p + 0x977) = 0;
    *(unsigned char *)(p + 0x978) = 0;
    *(unsigned char *)(p + 0x979) = 0;
    *(unsigned char *)(p + 0x97A) = 0;
    *(int *)(p + 0x3C50) = 0;
}

class VO376;

class A376 {
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
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void d191();
    virtual void d192();
    virtual void d193();
    virtual void d194();
    virtual void d195();
    virtual void d196();
    virtual void d197();
    virtual void d198();
    virtual void d199();
    virtual void d200();
    virtual void d201();
    virtual void d202();
    virtual void d203();
    virtual void d204();
    virtual void d205();
    virtual void d206();
    virtual void d207();
    virtual void d208();
    virtual void d209();
    virtual void d210();
    virtual void d211();
    virtual void m358(char *, VO376 *);
    char pad[0x3C];
};

class B376 {
public:
    int x;
};

class VO376 {
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
    virtual void m34(char *, B376 *);
    virtual void m38(char *, B376 *);
};

class P376 : public A376, public B376 {
public:
    int y;
};

class V1D0376 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual unsigned char m1C();
};

class V3A94376 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int, char *, char *, VO376 *, char *);
};

class V97C376 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(char *, VO376 *, int);
};

extern "C" void func_0034BA60(int, char *, signed char, int, int);

extern "C" void func_00376B40(P376 *, int);

static inline int fl376(void) { return (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2898) & 2) != 0; }

static inline int fm376(char *p, unsigned int m) { return (*(unsigned int *)(p + 0x8FC) & m) != 0; }

extern "C" void func_003761B0(P376 *q, char *e, VO376 *o, char *pos, int k) {
    char *p = (char *)q;
    unsigned char f;
    f = 0;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    if (*(float *)(p + 0x998) <= 0.0f) return;
    *(float *)(p + 0x3B00) = 5.0f;
    *(unsigned char *)(p + 0x3ABC) = 1;
    if (!(*(int *)(p + 0x110) & 2)) *(float *)(p + 0x964) = 60.0f;
    switch (*(signed char *)(e + 2)) {
    case 0:
        switch (((V1D0376 *)(p + 0x1D0))->m1C()) {
        case 0:
            func_0034BA60(*(int *)(e + 0x34), pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A94376 *)(p + 0x3A94))->m18(0, pos, e, o, *(char **)(*(char **)(p + 0xA5C) + 0x104));
            switch (*(signed char *)e) {
            case 0:
            case 1:
            case 2:
            case 6:
                break;
            case 3:
            case 4:
            case 5:
            case 7:
                if (!(*(int *)(p + 0x110) & 2) && !fm376(p, 0x4000000) && k == 6) func_00376B40(q, 0xD);
                break;
            }
            ((V97C376 *)(p + 0x97C))->m14(e, o, *(int *)(p + 0x11C));
            if (k == 6) f = 1;
            else if (*(unsigned short *)(p + 0x970) != 0) f = 1;
            else if (*(float *)(p + 0x68) < 5.0f) f = 1;
            else if (!fl376()) f = 1;
            if (f == 1) o->m38(e, q);
            else o->m34(e, q);
            break;
        case 2:
            func_0034BA60(*(int *)(e + 0x34), pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A94376 *)(p + 0x3A94))->m18(2, pos, e, o, *(char **)(*(char **)(p + 0xA5C) + 0x104));
            q->m358(e, o);
            break;
        }
        break;
    case 1:
        switch (((V1D0376 *)(p + 0x1D0))->m1C()) {
        case 0:
            func_0034BA60(*(int *)(e + 0x34), pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A94376 *)(p + 0x3A94))->m18(0, pos, e, o, *(char **)(*(char **)(p + 0xA5C) + 0x104));
            ((V97C376 *)(p + 0x97C))->m14(e, o, *(int *)(p + 0x11C));
            o->m38(e, q);
            break;
        case 2:
            func_0034BA60(*(int *)(e + 0x34), pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A94376 *)(p + 0x3A94))->m18(2, pos, e, o, *(char **)(*(char **)(p + 0xA5C) + 0x104));
            q->m358(e, o);
            break;
        }
        break;
    }
}

extern "C" char *func_00279290(char *);

extern "C" char *D_005BC1A8;

extern "C" void func_001A5C30(char *);

extern "C" void func_001A5D00(char *);

class Snd14 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void m14(unsigned int, int);
};

extern "C" void func_00377100(char *p, unsigned char on) {
    unsigned char i;
    char *q;
    if (on == 0) {
        *(unsigned char *)(p + 0x976) = 0;
        func_001A5C30(func_00279290(p + 0xC00));
        for (i = 0, q = p; i < 3; i++, q += 0x600) {
            func_001A5C30(func_00279290(q + 0x1200));
        }
        func_001A5C30(func_00279290(p + 0x2400));
        if (*(char **)(p + 0x910) != 0) {
            func_001A5C30(func_00279290(*(char **)(p + 0x910) + 0xC00));
            *(unsigned char *)(*(char **)(p + 0x910) + 0x976) = 0;
        }
    } else {
        ((Snd14 *)D_005BC1A8)->m14(0x80FFFFFF, 10);
        *(unsigned char *)(p + 0x976) = 1;
        func_001A5D00(func_00279290(p + 0xC00));
        {
            char *r;
            unsigned char j;
            for (j = 0, r = p; j < 3; j++, r += 0x600) {
                func_001A5D00(func_00279290(r + 0x1200));
            }
        }
        func_001A5D00(func_00279290(p + 0x2400));
        if (*(char **)(p + 0x910) != 0) {
            func_001A5D00(func_00279290(*(char **)(p + 0x910) + 0xC00));
            *(unsigned char *)(*(char **)(p + 0x910) + 0x976) = 1;
        }
    }
}

extern "C" void func_0024DA80(char *, int, int);

extern "C" void func_00493440(char *);

class V64b {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22(); virtual void f(char *, int, int);
};

static inline bool func_00376B80_f(char *p, unsigned int m) {
    return (*(unsigned int *)(p + 0x8FC) & m) != 0;
}

static inline char *func_00376B80_t(char *t, int i) {
    int v;
    if (*(unsigned int *)(t + 4) < i + 1U) return 0;
    v = *(int *)((char *)(i * 4) + (int)t + 8);
    if (v == 0) return 0;
    return t + v;
}

extern "C" void func_00376B80(char *p, int k) {
    unsigned int i;
    char *q;
    char *o;
    if (k == -1) k = *(unsigned char *)(p + 5);
    if (*(unsigned char *)(p + 0x8EA) == k) return;
    func_0024DA80(p + 0x2B20, 0, k);
    if (*(char **)(p + 0x910) != 0) {
        if (func_00376B80_f(p, 0x10) == true) {
            *(unsigned int *)(p + 0x8FC) |= 0x20;
        }
        if (func_00376B80_f(p, 0x20) == false) {
            func_0024DA80(*(char **)(p + 0x910) + 0x2B20, 0, k);
            o = *(char **)(p + 0x910);
            ((V64b *)(o + 0x3850))->f(func_00376B80_t(*(char **)(o + 0xA08), k), 0, 0);
            func_00493440(*(char **)(p + 0x910));
        }
    }
    for (i = 0, q = p; i < 3; i++, q += 0xD0) {
        func_0024DA80(q + 0x2BF0, 0, 0);
    }
    func_0024DA80(p + 0x2E60, 0, 0);
    *(unsigned char *)(p + 0x8EA) = k;
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_0028C790(char *, int);
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
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
int func_00375FC0(char *p0) {
    int v2;
    int v5;
    int v6;
    int v7;
    char *v0;
    char *v1;
    char *v3;
    int v4;
    *(int *)(p0 + 272) = 0;
    v0 = p0;
    ((VD0_0_v *)(v0 + 3072))->m();
    v2 = 0;
    v1 = v0;
    do {
        ((VD0_0_v *)(v1 + 4608))->m();
        v2 = (v2 + 1);
        v1 = (v1 + 1536);
    } while ((v2 < 3));
    ((VD0_0_v *)(v0 + 9216))->m();
    ((V14_0_v *)(v0 + 10896))->m();
    ((V14_0_v *)(v0 + 11008))->m();
    v4 = 0;
    v3 = v0;
    do {
        ((V14_0_v *)(v3 + 10924))->m();
        v4 = (v4 + 1);
        v3 = (v3 + 28);
    } while ((v4 < 3));
    ((V14_0_v *)(v0 + 10752))->m();
    v5 = func_0028C790((v0 + 13696), 0);
    v6 = 0;
    if ((0 < *(int *)(v0 + 528))) {
        v7 = (int)v0;
        do {
            v5 = func_0013D5D0((v7 + 532));
            v6 = (v6 + 1);
            v7 = (v7 + 16);
        } while ((v6 < *(int *)(v0 + 528)));
    }
    return v5;
}
}
