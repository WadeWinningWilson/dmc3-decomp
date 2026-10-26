#include "game/mt_rand.h"
extern "C" char D_01CAFF0C[];

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_003A5C70(char *);

extern "C" void func_003A5D20(char *, int);

extern "C" void func_0024E7B0(char *, int, int);

extern "C" void func_003AB360(char *);

extern "C" void func_003AA8F0(char *);

extern "C" short func_0034B940(char *, char *);

extern "C" {
void func_003A8070(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_0024E800(char *);
    extern int func_003ACB40(char *);
    extern void func_002EF940(char *, char *);
    char *e;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        e = func_00207480(3, 0x17A, 0, 0x10);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x2100;
            e[0x9A] = 0;
        }
        func_003A5C70(p);
    case 1:
        func_003A5D20(p, 0);
        if ((unsigned char)func_0024E780(p + 0x4BF0, 0, 0) == 2) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            func_003AB360(p);
        }
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(float *)(p + 0x4E08) = 40.0f;
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        }
        break;
    case 2:
        *(float *)(p + 0x4E08) = *(float *)(p + 0x4E08) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x4E08) < 0.0f && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        func_003A5D20(p, 1);
        break;
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0x5080);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
}
}

extern "C" void func_00105760(float *, float *, float);

class ObjPosC4 {
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
    virtual float *mC4();
};

#define QCOPYA(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define SETPOSA(m,s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

#define GETPOSA(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

#define VADDIPA(d,s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_003ABF70(char *p) {
    float m2[16];
    float m[16];
    float *src = ((ObjPosC4 *)(p + 0x880))->mC4();
    QCOPYA(p + 0x60, src);
    SETPOSA(m2, p + 0x60);
    func_00105760(m, m2, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    GETPOSA(p + 0x60, m);
    VADDIPA(p + 0x50, p + 0x60);
    *(float *)(p + 0x5C) = 1.0f;
}

extern "C" void func_00206730(char *);

class ObjSnd {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual int m2C();
};

class Obj1E0 {
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
    virtual float m1E0(int);
};

extern "C" void func_003AD5C0(char *);

extern "C" {
void func_003AA050(char *p) {
    extern void func_001AD140(char *);
    extern ObjSnd *D_005BC1A8;
    extern void func_002F2D30(char *, Obj1E0 *);
    int i;
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), (Obj1E0 *)p);
    }
    for (i = 0; i < 9; i++) {
        func_00206730(p + i * 4 + 0x4AD0);
        if (*(char **)(p + i * 4 + 0x4AD0) != 0) {
            func_001AD140(*(char **)(p + i * 4 + 0x4AD0));
            *(int *)(p + i * 4 + 0x4AD0) = 0;
        }
    }
    for (i = 0; i < 8; i++) {
        func_00206730(p + i * 4 + 0x4AF4);
        if (*(char **)(p + i * 4 + 0x4AF4) != 0) {
            func_001AD140(*(char **)(p + i * 4 + 0x4AF4));
            *(int *)(p + i * 4 + 0x4AF4) = 0;
        }
    }
    func_003AD5C0(p + 0x515C);
    if (*(char **)(p + 0x515C) != 0) {
        func_001AD140(*(char **)(p + 0x515C));
    }
    D_005BC1A8->m14(0x80000000, 5);
}
}

extern "C" char *func_00279290(char *);

extern "C" short func_001A5DA0(char *);

extern "C" void func_001A5D70(char *, short);

extern "C" void func_001F3880(char *, char *, int);

class VCC {
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
    virtual void mCC(char *);
};

typedef struct { int w[16]; } W64;

extern "C" void func_003A9F20(char *p) {
    W64 m;
    int n;
    n = func_001A5DA0(func_00279290(p + 0x880)) - 1;
    func_001A5D70(func_00279290(p + 0xE80), n);
    func_001A5D70(func_00279290(p + 0x1480), n);
    func_001A5D70(func_00279290(p + 0x1A80), n);
    if (*(char **)(p + 0x4ADC) != 0) func_001F3880(*(char **)(p + 0x4ADC), p + 0x1480, -1);
    m = *(W64 *)(p + 0x2100);
    ((VCC *)(p + 0x880))->mCC((char *)&m);
    ((VCC *)(p + 0xE80))->mCC(*(char **)(*(char **)(p + 0x718) + 0x104));
    ((VCC *)(p + 0x1480))->mCC(*(char **)(*(char **)(p + 0x718) + 0x104));
    ((VCC *)(p + 0x1A80))->mCC((char *)&m);
}

extern "C" unsigned char func_003AC650(char *);

extern "C" void func_003AB610(char *, char *, char *);

extern "C" float D_005BE1B8;

class V368 {
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
    virtual void d212();
    virtual void d213();
    virtual void d214();
    virtual void d215();
    virtual void m368(int);
};

extern "C" void func_003AC2F0(char *p, char *s, char *t) {
    if (s != 0 && t != 0) {
        if (*(unsigned char *)(p + 0x14D) != 3) {
            *(signed char *)(p + 0x16C) = *(signed char *)(s + 0);
            *(signed char *)(p + 0x16D) = *(signed char *)(s + 1);
            *(signed char *)(p + 0x16E) = *(signed char *)(s + 2);
            *(float *)(p + 0x170) = *(float *)(s + 4);
            *(float *)(p + 0x174) = *(float *)(s + 8);
            *(float *)(p + 0x178) = *(float *)(s + 0xC);
            *(float *)(p + 0x17C) = *(float *)(s + 0x10);
            *(float *)(p + 0x180) = *(float *)(s + 0x14);
            *(signed char *)(p + 0x184) = *(signed char *)(s + 0x18);
            *(float *)(p + 0x188) = *(float *)(s + 0x1C);
            *(signed char *)(p + 0x18C) = *(signed char *)(s + 0x20);
            *(float *)(p + 0x190) = *(float *)(s + 0x24);
            *(float *)(p + 0x194) = *(float *)(s + 0x28);
            *(float *)(p + 0x198) = *(float *)(s + 0x2C);
            *(unsigned char *)(p + 0x19C) = *(unsigned char *)(s + 0x30);
            *(int *)(p + 0x1A0) = *(int *)(s + 0x34);
            *(float *)(p + 0x1A4) = *(float *)(s + 0x38);
            *(signed char *)(p + 0x1A8) = *(signed char *)(s + 0x3C);
            *(signed char *)(p + 0x1A9) = *(signed char *)(s + 0x3D);
            *(signed char *)(p + 0x1AA) = *(signed char *)(s + 0x3E);
            D_005BE1B8 = 15.0f;
            if (*(signed char *)(s + 2) == 0) ((V368 *)p)->m368(0x10);
            if (func_003AC650(p) == 0) func_003AB610(p, s, t);
        }
    }
}

extern "C" float D_005BE1F8;

extern "C" unsigned char D_00569240[];

extern "C" unsigned char D_00569250[];

extern "C" unsigned char D_00569260[];

extern "C" float D_005692B0[];

extern "C" void func_00456D70(char *, int, int, unsigned char, unsigned char, float);

extern "C" {
void func_003A8350(char *p) {
    extern int func_0024E800(char *);
    extern ObjSnd *D_005BC1A8;
    extern int func_003ACB40(char *);
    extern void func_002EF940(char *, char *);
    int i;
    float f = 0.0f;
    unsigned char m;
    int j;
    unsigned char k;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        if (mt_rand() & 1) {
            if (mt_rand() & 1) {
                for (i = 0; i < D_00569240[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)]; i++) {
                    func_00456D70(p, 0, 0, (unsigned char)i, 0, 0.0f);
                }
            } else {
                k = 1;
                for (i = 0; i < D_00569250[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)]; i++) {
                    if (i % 2 == 0) {
                        func_00456D70(p, 0, 0, 0, k, f);
                        func_00456D70(p, 0, 0, 1, k, f);
                        func_00456D70(p, 0, 0, 2, k, f);
                    } else {
                        func_00456D70(p, 0, 0, 0, k, f);
                        func_00456D70(p, 0, 0, 1, k, f);
                    }
                    f += D_005692B0[*(unsigned char *)(p + 0x4E18) + *(unsigned char *)(p + 0x4E17) * 3];
                    if (++k == 3) k = 1;
                }
            }
        } else {
            m = mt_rand() & 3;
            for (j = 0; j < D_00569260[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)]; j++) {
                func_00456D70(p, 0, 1, 0, m, f);
                func_00456D70(p, 0, 1, 1, m, f);
                m++;
                f += D_005692B0[*(unsigned char *)(p + 0x4E18) + *(unsigned char *)(p + 0x4E17) * 3];
                if (m == 4) m = 0;
            }
        }
    case 1:
        if ((unsigned char)func_0024E780(p + 0x4BF0, 0, 0) == 4) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            D_005BE1F8 = 3.0f;
            D_005BC1A8->m14(0x80FFFFFF, 0x14);
        }
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && !(unsigned char)func_003ACB40(p)) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0x5080);
}
}

class S3A7 {
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
    virtual float m1E0(unsigned int);
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void m1F0(int, char *);
};

class L3A7 {
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
    virtual void m94(int, int);
    virtual void m98(int, int);
    virtual void m9C(int, unsigned char);
    virtual void mA0(int, unsigned char);
};

class G3A7 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
};

extern "C" char D_00568C50[];

extern "C" float D_00568C7C[];

extern "C" float D_00568C94[];

extern "C" void func_0034BA60(int, char *, signed char, int, int);

#define G (*(char **)D_01CAFF0C)

#define L(o) ((L3A7 *)(p + (o)))
extern "C" {
void func_003A7690(char *p) {
    extern G3A7 *D_005BC1A8;
    extern void func_002F2D30(char *, char *);
    extern char *func_00207480(int, int, int, int);
    extern unsigned char func_0024E800(char *);
    int i;
    unsigned int v;
    float x;
    float t;
    char *e;
    *(unsigned char *)(p + 0x5160) = 0;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        ((S3A7 *)p)->m1F0(*(int *)(p + 0x148), D_00568C50);
        *(int *)(*(char **)(G + 0x18) + 0x100) = ((S3A7 *)p)->m1E0(D_00568C7C[0]);
        *(float *)(*(char **)(G + 0x18) + 0x104) = D_00568C94[0];
        if (*(char **)(G + 0x20) != 0) func_002F2D30(*(char **)(G + 0x20), p);
        func_0034BA60(0x41, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        (*(unsigned char *)(p + 6))++;
        D_005BC1A8->m14(0x80000000, 5);
        *(float *)(p + 0x4E08) = 30.0f;
        for (i = 0; i < 4; i++) {
            L(0x880)->m94(i, 0);
            L(0x880)->m98(i, 0);
            L(0xE80)->m94(i, 0);
            L(0xE80)->m98(i, 0);
            L(0x1480)->m94(i, 0);
            L(0x1480)->m98(i, 0);
            L(0x1A80)->m94(i, 0);
            L(0x1A80)->m98(i, 0);
        }
        e = func_00207480(2, 0x1A8, *(int *)(*(char **)(p + 0x724) + 0x104), 0x10);
        if (e != 0) *(float *)(e + 0x40) = 15.0f;
    case 1:
        t = *(float *)(p + 0x10);
        x = *(float *)(p + 0x4E08) - t;
        *(float *)(p + 0x4E08) = x;
        if (x < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x4E08) = 30.0f;
        } else {
            v = (128.0f - 128.0f * (*(float *)(p + 0x4E08) / 30.0f)) * *(float *)(p + 0x10);
            for (i = 0; i < 4; i++) {
                L(0x880)->m9C(i, v);
                L(0x880)->mA0(i, v);
                L(0xE80)->m9C(i, v);
                L(0xE80)->mA0(i, v);
                L(0x1480)->m9C(i, v);
                L(0x1480)->mA0(i, v);
                L(0x1A80)->m9C(i, v);
                L(0x1A80)->mA0(i, v);
            }
        }
        break;
    case 2:
        t = *(float *)(p + 0x10);
        x = *(float *)(p + 0x4E08) - t;
        *(float *)(p + 0x4E08) = x;
        if (x < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            if (*(char **)(p + 0x4AD0) != 0) *(unsigned char *)(*(char **)(p + 0x4AD0) + 0x3B) = 1;
            if (*(char **)(p + 0x4AD4) != 0) *(unsigned char *)(*(char **)(p + 0x4AD4) + 0x3B) = 1;
        } else {
            *(unsigned char *)(p + 0x5161) = (unsigned int)(128.0f * (*(float *)(p + 0x4E08) / 30.0f) * *(float *)(p + 0x10));
        }
        *(unsigned char *)(p + 0x5160) = 1;
        break;
    case 3:
        if (func_0024E800(p + 0x4BF0) == 1) (*(unsigned char *)(p + 4))++;
        *(unsigned char *)(p + 0x5160) = 1;
        break;
    }
}
}
#undef L

class L3A6 {
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
    virtual void m94(int, int);
    virtual void m98(int, int);
    virtual void m9C(int, unsigned char);
    virtual void mA0(int, unsigned char);
};

extern "C" void func_003AB680(char *);

extern "C" void func_003AA990(char *, int);

#define TICK()     t = *(float *)(p + 0x10);     x = *(float *)(p + 0x4E08) - t;     *(float *)(p + 0x4E08) = x;

#define L(o) ((L3A6 *)(p + (o)))
extern "C" {
void func_003A6760(char *p) {
    extern char *func_00207480(int, int, int, int);
    extern int func_003ACB40(char *);
    extern void func_002EF940(char *, char *);
    int i;
    unsigned int v;
    int k;
    unsigned int w;
    float x;
    float t;
    char *e;
    *(unsigned char *)(p + 0x5160) = 0;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (*(unsigned char *)(p + 0x5166) == 0) {
            (*(unsigned char *)(p + 6))++;
        } else {
            *(unsigned char *)(p + 0x5166) = 0;
            *(unsigned char *)(p + 6) = 3;
            break;
        }
        *(float *)(p + 0x4E08) = 30.0f;
        for (i = 0; i < 4; i++) {
            L(0x880)->m94(i, 0);
            L(0x880)->m98(i, 0);
            L(0xE80)->m94(i, 0);
            L(0xE80)->m98(i, 0);
            L(0x1480)->m94(i, 0);
            L(0x1480)->m98(i, 0);
            L(0x1A80)->m94(i, 0);
            L(0x1A80)->m98(i, 0);
        }
        e = func_00207480(2, 0xE, *(int *)(*(char **)(p + 0x724) + 0x104), 0x10);
        if (e != 0) *(float *)(e + 0x40) = 15.0f;
    case 1:
        TICK()
        if (x < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x4E08) = 30.0f;
        } else {
            v = (128.0f - 128.0f * (*(float *)(p + 0x4E08) / 30.0f)) * *(float *)(p + 0x10);
            for (i = 0; i < 4; i++) {
                L(0x880)->m9C(i, v);
                L(0x880)->mA0(i, v);
                L(0xE80)->m9C(i, v);
                L(0xE80)->mA0(i, v);
                L(0x1480)->m9C(i, v);
                L(0x1480)->mA0(i, v);
                L(0x1A80)->m9C(i, v);
                L(0x1A80)->mA0(i, v);
            }
        }
        break;
    case 2:
        TICK()
        if (x < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            if (*(char **)(p + 0x4AD0) != 0) *(unsigned char *)(*(char **)(p + 0x4AD0) + 0x3B) = 1;
            if (*(char **)(p + 0x4AD4) != 0) *(unsigned char *)(*(char **)(p + 0x4AD4) + 0x3B) = 1;
        } else {
            *(unsigned char *)(p + 0x5161) = (unsigned int)(128.0f * (*(float *)(p + 0x4E08) / 30.0f) * *(float *)(p + 0x10));
        }
        *(unsigned char *)(p + 0x5160) = 1;
        break;
    case 3:
        (*(unsigned char *)(p + 6))++;
        func_003AB680(p);
        *(short *)(p + 0x90) = func_0034B940(*(char **)(G + 0xC) + 0x50, p + 0x50);
        *(unsigned char *)(p + 0x5160) = 1;
        break;
    case 4:
        (*(unsigned char *)(p + 6))++;
        *(float *)(p + 0x4E08) = 15.0f;
        func_00207480(2, 0x93, *(int *)(*(char **)(p + 0x724) + 0x104), 0x10);
        func_0034BA60(0x17, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        *(unsigned char *)(p + 0x5160) = 1;
        break;
    case 5:
        TICK()
        if (x < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x4E08) = 30.0f;
            if (*(char **)(p + 0x4AD0) != 0) *(unsigned char *)(*(char **)(p + 0x4AD0) + 0x3B) = 0;
            if (*(char **)(p + 0x4AD4) != 0) *(unsigned char *)(*(char **)(p + 0x4AD4) + 0x3B) = 0;
        }
        *(unsigned char *)(p + 0x5160) = 1;
        break;
    case 6:
        TICK()
        if (x < 0.0f) {
            (*(unsigned char *)(p + 6))++;
            *(float *)(p + 0x4E08) = 30.0f;
            break;
        } else {
            *(unsigned char *)(p + 0x5161) = (unsigned int)((128.0f - 128.0f * (*(float *)(p + 0x4E08) / 30.0f)) * *(float *)(p + 0x10));
        }
        *(unsigned char *)(p + 0x5160) = 1;
        break;
    case 7:
        TICK()
        if (x < 0.0f) {
            if ((unsigned char)func_003ACB40(p) == 0) {
                if (*(unsigned char *)(p + 0x4E16) == 0xE) {
                    *(signed char *)(p + 0x4E1A) = -1;
                    *(unsigned char *)(p + 0x4E1B) = 0;
                    func_003AA990(p, 0x1B);
                } else if (*(unsigned char *)(p + 0x4E16) == 0x16) {
                    *(signed char *)(p + 0x4E1A) = -1;
                    *(unsigned char *)(p + 0x4E1B) = 0;
                    func_003AA990(p, 0x26);
                } else if (*(unsigned char *)(p + 0x4E1D) == 3) {
                    *(signed char *)(p + 0x4E1A) = -1;
                    *(unsigned char *)(p + 0x4E1B) = 0;
                    func_003AA990(p, 0x1B);
                } else {
                    *(signed char *)(p + 0x4E1A) = -1;
                    *(unsigned char *)(p + 0x4E1B) = 0;
                    *(unsigned char *)(p + 0x4E16) = 0;
                    func_003AA8F0(p);
                }
            }
        } else {
            w = 128.0f * (*(float *)(p + 0x4E08) / 30.0f) * *(float *)(p + 0x10);
            for (k = 0; k < 4; k++) {
                L(0x880)->m9C(k, w);
                L(0x880)->mA0(k, w);
                L(0xE80)->m9C(k, w);
                L(0xE80)->mA0(k, w);
                L(0x1480)->m9C(k, w);
                L(0x1480)->mA0(k, w);
                L(0x1A80)->m9C(k, w);
                L(0x1A80)->mA0(k, w);
            }
        }
        break;
    }
    func_002EF940(G, p + 0x5080);
}
}
#undef L

extern "C" void func_00105300(char *, char *);

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" int func_001F9A70(int, char *, float);

extern "C" {
void func_0022C520(int key, char *o, char *m1, char *m2);
}

class ObjC8 {
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

static inline void vcpy(void *d, void *s) { __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory"); }

static inline void vcpz(void *d, void *s) { __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(s), "r"(d) : "memory"); }

static inline int get8(char *q) { return *(int *)(q + 8); }

extern "C" {
void func_003AA150(char *p) {
    int func_001AD140(char *p);
    float v[4] __attribute__((aligned(16)));
    int i;
    vcpz(v, p + 0x5030);
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
    vcpy(p + 0x20D0, p + 0x50);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x2100) : "memory");
    func_00131700(p + 0x2100, p + 0x2100, p + 0x20E0);
    func_00105230(p + 0x2100, p + 0x2100, p + 0x20D0);
    func_001318E0(p + 0x2100, p + 0x2100, p + 0x20F0);
    for (i = 0; i < 23; i++) {
        if (((char **)(p + 0x718))[i] != 0 && *(char **)(((char **)(p + 0x718))[i] + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x718))[i] + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(((char **)(p + 0x718))[i] + 0x104) + 0x3C) = 1.0f;
        }
    }
    func_0022C520((int)(p + 0x2B60), p + 0xE80, *(char **)(*(char **)(p + 0x718) + 0x104), p + 0x4A50);
    ((ObjC8 *)(p + 0xE80))->mC8(*(char **)(*(char **)(p + 0x718) + 0x104));
    func_00105300(p + 0x4A50, *(char **)(*(char **)(p + 0x718) + 0x104));
    func_0022C520((int)(p + 0x3A60), p + 0x1480, *(char **)(*(char **)(p + 0x718) + 0x104), p + 0x4A90);
    ((ObjC8 *)(p + 0x1480))->mC8(*(char **)(*(char **)(p + 0x718) + 0x104));
    func_00105300(p + 0x4A90, *(char **)(*(char **)(p + 0x718) + 0x104));
    {
        char *m = p + 0x2100;
        ((ObjC8 *)(p + 0x1A80))->mC8(m);
    }
    vcpy(p + 0xE0, v);
    vcpz(p + 0xF0, p + 0x5070);
    if ((unsigned char)func_001F9A70(get8(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548), p + 0x50, 1000.0f) == 0) {
        *(unsigned char *)(p + 4) = 2;
        func_001AD140(p);
    }
}
}

extern "C" void func_003AB550(char *);

extern "C" void func_003AA6C0(char *);

extern "C" void func_0042C9B0(char *, char *, int);

extern "C" {
void func_003A9C60(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0024E800(char *);
    unsigned char func_003ACB40(char *p);
    extern char *D_005BC1A8;
    extern void func_002EF940(int, char *);
    char m[64] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *o;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        o = *(char **)D_01CAFF0C;
        v[0] = *(float *)(*(char **)(o + 0xC) + 0x50);
        v[1] = 10.0f + *(float *)(*(char **)(o + 0xC) + 0x2924);
        v[2] = *(float *)(*(char **)(o + 0xC) + 0x58);
        v[3] = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105230(m, m, (char *)v);
        func_00207480(3, 0x175, m, 0x10);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x724) + 0x104)) : "memory");
        v[3] = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105230(m, m, (char *)v);
        func_0042C9B0(p, m, *(int *)(p + 0x5190));
    case 1:
        if ((unsigned char)func_0024E780(p + 0x4BF0, 0, 0) == 10) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            func_003AB550(p);
            func_003AA6C0(p);
            ((ObjSnd *)D_005BC1A8)->m14(0x80FFFFFF, 0x28);
            *(unsigned char *)(p + 0x5165) = 1;
        }
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1 && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        break;
    }
    func_002EF940(*(int *)D_01CAFF0C, p + 0x5080);
}
}

extern "C" float D_00569860[];

extern "C" float D_005697A0[];

extern "C" float D_005697D0[];

extern "C" float D_00569800[];

extern "C" void func_0024D6A0(char *, int, unsigned int);

extern "C" void func_003A9A80(char *);

extern "C" void func_0034B330(int);

extern "C" float func_0021CCF0(char *, float);

extern "C" int func_0024D6B0(char *, unsigned char *);

extern "C" int func_0021D320(char *, int, int, unsigned char, unsigned char);

extern "C" {
void func_003A9700(char *p) {
    extern void func_002EF940(char *, char *);
    extern ObjSnd *D_005BC1A8;
    unsigned char c;
    unsigned char k;
    unsigned char m;
    unsigned char b;
    char *o;
    unsigned char a;
    int n;
    unsigned char d;
    k = 0x14;
    m = 0;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0024D6A0(o, 0, (unsigned int)D_00569860[*(unsigned char *)(p + 0x4E18) * (*(unsigned char *)(p + 0x4E17) * 3)]);
        *(float *)(p + 0x517C) = D_005697A0[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)];
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_003A9A80(p);
        func_0034B330(1);
        D_005BC1A8->m18(0x18FF80FF, 0x28);
    case 1:
        if (!(func_0021CCF0(o, *(float *)(p + 0x10) * D_005697D0[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)]) <= 0.0f)) {
            n = *(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18);
            *(float *)(p + 0x50D4) = *(float *)(p + 0x50D4) + *(float *)(p + 0x10) * (D_005697D0[n] * D_00569800[n]);
            if (!(*(float *)(p + 0x50D4) <= *(float *)(p + 0x5168))) {
                *(float *)(p + 0x50D4) = *(float *)(p + 0x5168);
            }
        }
        a = 0;
        b = 0;
        d = 0;
        if ((unsigned char)func_0024D6B0(o, &c) == 1) {
            a = 1;
            k = 0x15;
            m = 0;
        } else {
            *(float *)(p + 0x517C) = *(float *)(p + 0x517C) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x517C) < 0.0f) {
                b = 1;
                k = 0x16;
                m = b;
            }
        }
        if ((unsigned char)func_0021D320(o, 2, *(unsigned char *)(p + 0x5162), m, k) == 0) {
            d = 1;
        }
        if (a == 1) {
            *(unsigned char *)(p + 0x5189) = 1;
            *(unsigned char *)(p + 0x5164) = 0;
            func_0034B330(0);
            D_005BC1A8->m14(0x80000000, 0x14);
        } else if (b == 1) {
            func_003AA990(p, 0x25);
            *(unsigned char *)(p + 0x5164) = 0;
            func_0034B330(0);
            D_005BC1A8->m14(0x80000000, 0x14);
        } else if (d == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 9;
            func_003AA8F0(p);
            *(unsigned char *)(p + 0x5164) = 0;
            func_0034B330(0);
            D_005BC1A8->m14(0x80000000, 0x14);
        }
        break;
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0x5080);
}
}

class V130_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_003A3520(char *p0) {
    int func_003A47D0(char *, int);
    int func_003A9E40(char *, int);
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    tmp0 = 2;
    if (tmp0 != v0) {
        switch (v0) {
        case 0:
            v1 = ((V130_1_ii *)p0)->m(v0);
            break;
        case 1:
            v1 = func_003A47D0(p0, v0);
            break;
        }
    } else {
        v1 = func_003A9E40(p0, v0);
    }
    return v1;
}
}

class V94_2_iiv {
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
    virtual void m(int, int);
};

class V98_2_iiv {
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
    virtual void m(int, int);
};

class V9C_2_iiv {
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
    virtual void m(int, int);
};

class VA0_2_iii {
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
    virtual int m(int, int);
};

class VA0_2_iiv {
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
    virtual void m(int, int);
};

extern "C" {
int func_003A6F20(int p0) {
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    char *v5;
    int v6;
    v2 = 0;
    v0 = (char *)p0;
    do {
        ((V94_2_iiv *)(v0 + 2176))->m(v2, 0);
        ((V98_2_iiv *)(v0 + 2176))->m(v2, 0);
        ((V94_2_iiv *)(v0 + 3712))->m(v2, 0);
        ((V98_2_iiv *)(v0 + 3712))->m(v2, 0);
        ((V94_2_iiv *)(v0 + 5248))->m(v2, 0);
        ((V98_2_iiv *)(v0 + 5248))->m(v2, 0);
        ((V94_2_iiv *)(v0 + 6784))->m(v2, 0);
        ((V98_2_iiv *)(v0 + 6784))->m(v2, 0);
        ((V9C_2_iiv *)(v0 + 2176))->m(v2, 128);
        ((VA0_2_iiv *)(v0 + 2176))->m(v2, 128);
        ((V9C_2_iiv *)(v0 + 3712))->m(v2, 128);
        ((VA0_2_iiv *)(v0 + 3712))->m(v2, 128);
        ((V9C_2_iiv *)(v0 + 5248))->m(v2, 128);
        ((VA0_2_iiv *)(v0 + 5248))->m(v2, 128);
        ((V9C_2_iiv *)(v0 + 6784))->m(v2, 128);
        v1 = ((VA0_2_iii *)(v0 + 6784))->m(v2, 128);
        v2 = (v2 + 1);
    } while ((v2 < 4));
    v3 = *(char **)(v0 + 19152);
    v4 = 1;
    if (v3 != 0) {
        *(char *)(v3 + 59) = v4;
    }
    v5 = *(char **)(v0 + 19156);
    v6 = 1;
    if (v5 != 0) {
        *(char *)(v5 + 59) = v6;
    }
    *(char *)(v0 + 20833) = 0;
    *(char *)(v0 + 20832) = 1;
    return v1;
}
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

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
int func_003A9E50(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 2176))->m();
    ((VD0_0_v *)(v0 + 3712))->m();
    ((VD0_0_v *)(v0 + 5248))->m();
    ((VD0_0_v *)(v0 + 6784))->m();
    ((V14_0_v *)(v0 + 8320))->m();
    v1 = ((V14_0_i *)(v0 + 8348))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 528))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 532));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 528)));
    }
    return v1;
}
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class V18_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(void);
};

class V368_1_ii {
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
    virtual void d212();
    virtual void d213();
    virtual void d214();
    virtual void d215();
    virtual int m(int);
};

class V368_1_iv {
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
    virtual void d212();
    virtual void d213();
    virtual void d214();
    virtual void d215();
    virtual void m(int);
};

extern "C" {
int func_003AC140(int p0, char *p1, int p2) {
    int v1;
    int v2;
    char *v0;
    int tmp21;
    v0 = (char *)p0;
    if (p1 != 0) {
        if (p2 != 0) {
            if (*(int *)(v0 + 316) != 0) {
                if (*(unsigned char *)(v0 + 333) != 3) {
                    *(char *)(v0 + 364) = *(signed char *)(p1 + 0);
                    *(char *)(v0 + 365) = *(signed char *)(p1 + 1);
                    *(char *)(v0 + 366) = *(signed char *)(p1 + 2);
                    *(float *)(v0 + 368) = *(float *)(p1 + 4);
                    *(float *)(v0 + 372) = *(float *)(p1 + 8);
                    *(float *)(v0 + 376) = *(float *)(p1 + 12);
                    *(float *)(v0 + 380) = *(float *)(p1 + 16);
                    *(float *)(v0 + 384) = *(float *)(p1 + 20);
                    *(char *)(v0 + 388) = *(signed char *)(p1 + 24);
                    *(float *)(v0 + 392) = *(float *)(p1 + 28);
                    *(char *)(v0 + 396) = *(signed char *)(p1 + 32);
                    *(float *)(v0 + 400) = *(float *)(p1 + 36);
                    *(float *)(v0 + 404) = *(float *)(p1 + 40);
                    *(float *)(v0 + 408) = *(float *)(p1 + 44);
                    *(char *)(v0 + 412) = *(unsigned char *)(p1 + 48);
                    *(int *)(v0 + 416) = *(int *)(p1 + 52);
                    *(float *)(v0 + 420) = *(float *)(p1 + 56);
                    *(char *)(v0 + 424) = *(signed char *)(p1 + 60);
                    *(char *)(v0 + 425) = *(signed char *)(p1 + 61);
                    *(char *)(v0 + 426) = *(signed char *)(p1 + 62);
                    tmp21 = ((V14_0_i *)*(char **)(v0 + 316))->m();
                    if ((tmp21 & 255) == 1) {
                        ((V368_1_iv *)v0)->m(16);
                    }
                    v1 = ((V10_0_i *)*(char **)(v0 + 316))->m();
                    v2 = (v1 & 255);
                    switch (v2) {
                    case 0:
                        v1 = ((V368_1_ii *)v0)->m(22);
                        break;
                    case 1:
                        v1 = ((V18_0_i *)*(char **)(v0 + 316))->m();
                        if ((v1 & 255) != 0) {
                            v1 = ((V368_1_ii *)v0)->m(8);
                        }
                        break;
                    }
                }
            }
        }
    }
    return v1;
}
}

class V10_1_pi {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(char *);
};

extern "C" {
int func_003AC430(char *p0, int p1, int p2, int p3) {
    char *v0;
    int v1;
    if (p2 != 0) {
        if (p3 != 0) {
            v0 = *(char **)(p0 + 316);
            if (v0 != 0) {
                if (*(unsigned char *)(p0 + 333) != 3) {
                    v1 = ((V10_1_pi *)v0)->m(v0);
                }
            }
        }
    }
    return v1;
}
}
