/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls13. */

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

extern "C" char D_01CAFF0C[];
extern "C" void func_0034BA60(int, char *, signed char, int, int);
extern "C" char *func_00207480(int, int, int, int);
extern "C" void func_003AB680(char *);
extern "C" short func_0034B940(char *, char *);
extern "C" int func_003ACB40(char *);
extern "C" void func_003AA990(char *, int);
extern "C" void func_003AA8F0(char *);
extern "C" void func_002EF940(char *, char *);

#define L(o) ((L3A6 *)(p + (o)))
#define G (*(char **)D_01CAFF0C)
#define TICK()     t = *(float *)(p + 0x10);     x = *(float *)(p + 0x4E08) - t;     *(float *)(p + 0x4E08) = x;

extern "C" void func_003A6760(char *p) {
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

class Self362 {
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
    virtual void m6C();
    virtual void m70();
    virtual void m74();
    virtual short m78(int, int);
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};
class Ai362 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" float D_005550B0[];
extern "C" float D_005550B4[];
extern "C" float D_005550B8[];
static inline short deg362(float d) { return 0.5f + 65536.0f * d / 360.0f; }
#define SELF ((Self362 *)p)
#define AI (*(Ai362 **)(p + 0xA8))
#define M (*(char **)(p + 0x10))
#define ANG (*(short *)(M + 0x50))
#define F(o) (*(float *)(p + (o)))
#define ID()     *(float *)(M + 0x20) = 0.0f; *(float *)(M + 0x24) = 0.0f; *(float *)(M + 0x28) = 0.0f; *(float *)(M + 0x2C) = 1.0f;     *(float *)(M + 0x30) = 0.0f; *(float *)(M + 0x34) = 0.0f; *(float *)(M + 0x38) = 0.0f; *(float *)(M + 0x3C) = 1.0f;

extern "C" void func_00362AE0(char *p) {
    short s;
    short a;
    unsigned short u;
    float t;
    float x;
    if (!(AI->m28() < D_005550B0[0]) && AI->m28() <= D_005550B4[0]) {
        SELF->m6C();
        SELF->m70();
        s = SELF->m78(*(short *)(p + 0x30), ANG);
        a = deg362(D_005550B8[0]);
        u = a;
        t = (float)(int)u * F(0xB0);
        if (!((float)s <= t)) ANG = (float)ANG + t;
        t = (float)(int)u * F(0xB0);
        if ((float)s < -t) ANG = (float)ANG - t;
    }
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (AI->m2C()) {
            AI->m18(0x48);
            ID()
            SELF->m6C();
            SELF->m70();
            s = SELF->m78(*(short *)(p + 0x30), ANG);
            *(short *)(p + 0xC0) = s / 100;
            F(0xC4) = 10.0f;
            *(int *)(p + 0xD4) = 1;
        }
        AI->m24();
        break;
    case 1:
        t = F(0xB0);
        x = F(0xC4) - t;
        F(0xC4) = x;
        if (!(x <= 0.0f)) ANG = (float)ANG + (float)*(short *)(p + 0xC0) * F(0xB0);
        if (!(AI->m28() < 9.0f)) {
            *(unsigned char *)(p + 0xCD) = 1;
            AI->m18(0x49);
            SELF->m6C();
            SELF->m74();
            t = (F(0x34) - 150.0f) / 44.0f;
            if (!(t <= 15.0f)) t = 15.0f;
            if (t < 8.0f) t = 8.0f;
            F(0xE0) = 0.0f;
            F(0xE4) = 33.0f;
            F(0xE8) = 8.0f;
            F(0xEC) = 1.0f;
            F(0xF0) = 0.0f;
            F(0xF4) = -1.5f;
            F(0xF8) = 0.0f;
            F(0xFC) = 1.0f;
            F(0xE8) = t;
            SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
            *(int *)(p + 0xD4) = 2;
        }
        break;
    case 2:
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (*(float *)(M + 0x24) < 0.0f && AI->m30()) {
            *(unsigned char *)(p + 0xCD) = 0;
            AI->m18(0x4A);
            AI->m48(0xF, M + 0x10);
            ID()
            *(int *)(p + 0xD4) = 3;
        }
        break;
    case 3:
        if (AI->m2C()) SELF->mEC(0xE);
        break;
    }
}

class Self369 {
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
    virtual void m6C();
    virtual void m70();
    virtual void d27();
    virtual short m78(int, int);
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};
class Ai369 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" float D_005550C8[];
extern "C" float D_005550CC[];
extern "C" float D_005550D0[];
static inline short deg369(float d) { return 0.5f + 65536.0f * d / 360.0f; }
#define SELF ((Self369 *)p)
#define AI (*(Ai369 **)(p + 0xA8))
#define M (*(char **)(p + 0x10))
#define ANG (*(short *)(M + 0x50))
#define F(o) (*(float *)(p + (o)))
#define MF(o) (*(float *)(M + (o)))
#define TURN(s, a, u, t)     s = SELF->m78(*(short *)(p + 0x30), ANG);     a = deg369(D_005550D0[0]);     u = a;     t = (float)(int)u * F(0xB0);     if (!((float)s <= t)) ANG = (float)ANG + t;     t = (float)(int)u * F(0xB0);     if ((float)s < -t) ANG = (float)ANG - t;
#define ID(z)     MF(0x20) = 0.0f; MF(0x24) = 0.0f; MF(0x28) = 0.0f; MF(0x2C) = 1.0f;     MF(0x30) = 0.0f; MF(0x34) = 0.0f; MF(0x38) = z; MF(0x3C) = 1.0f;

extern "C" void func_00369630(char *p) {
    short s;
    short a;
    unsigned short u;
    float t;
    short s2;
    short a2;
    unsigned short u2;
    float t2;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!(AI->m28() < D_005550C8[0]) && AI->m28() <= D_005550CC[0]) {
            SELF->m6C();
            SELF->m70();
            TURN(s, a, u, t)
        }
        if (AI->m2C()) {
            *(unsigned char *)(p + 0xCD) = 1;
            AI->m18(0x4E);
            F(0xE0) = 0.0f;
            F(0xE4) = 18.0f;
            F(0xE8) = -20.0f;
            F(0xEC) = 1.0f;
            F(0xF0) = 0.0f;
            F(0xF4) = -1.5f;
            F(0xF8) = 0.0f;
            F(0xFC) = 1.0f;
            SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (MF(0x24) < 0.0f && AI->m30()) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCE) = 4;
            *(unsigned char *)(p + 0xCF) = 0;
            AI->m18(0x4F);
            AI->m48(0x13, M + 0x10);
            ID(0.0f)
            *(int *)(p + 0xD4) = 2;
        }
        break;
    case 2:
        SELF->m6C();
        SELF->m70();
        TURN(s2, a2, u2, t2)
        if (AI->m2C()) {
            AI->m18(0x32);
            ID(30.0f)
            *(int *)(p + 0xD4) = 3;
        }
        break;
    case 3:
        if (AI->m28() == 30.0f) AI->m48(0xC, M + 0x10);
        if (AI->m2C()) SELF->mEC(0xE);
        AI->m24();
        MF(0x20) = MF(0x20) + MF(0x30) * F(0xB0);
        MF(0x24) = MF(0x24) + MF(0x34) * F(0xB0);
        MF(0x28) = MF(0x28) + MF(0x38) * F(0xB0);
        MF(0x30) = MF(0x30) - MF(0x30) / 10.0f * F(0xB0);
        MF(0x34) = MF(0x34) - MF(0x34) / 10.0f * F(0xB0);
        MF(0x38) = MF(0x38) - MF(0x38) / 10.0f * F(0xB0);
        break;
    }
}

#include "game/mt_rand.h"
class Self49C {
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
    virtual void m6C();
    virtual void m70();
    virtual void d27();
    virtual short m78(int, int);
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};
class Ai49C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void m44();
    virtual void m48(int, char *);
};

extern "C" float D_005550A4[];
extern "C" float D_005550A8[];
extern "C" float D_005550AC[];
extern "C" char D_01DFABA0[];
extern "C" void func_00330BD0(char *, int, char *, int, int);
static inline short deg49C(float d) { return 0.5f + 65536.0f * d / 360.0f; }
#define SELF ((Self49C *)p)
#define AI (*(Ai49C **)(p + 0xA8))
#define M (*(char **)(p + 0x10))
#define ANG (*(short *)(M + 0x50))
#define F(o) (*(float *)(p + (o)))
#define MF(o) (*(float *)(M + (o)))
#define ID(z)     MF(0x20) = 0.0f; MF(0x24) = 0.0f; MF(0x28) = 0.0f; MF(0x2C) = 1.0f;     MF(0x30) = 0.0f; MF(0x34) = 0.0f; MF(0x38) = z; MF(0x3C) = 1.0f;
#define JUMP(e4, e8, f4)     F(0xE0) = 0.0f; F(0xE4) = e4; F(0xE8) = e8; F(0xEC) = 1.0f;     F(0xF0) = 0.0f; F(0xF4) = f4; F(0xF8) = 0.0f; F(0xFC) = 1.0f;     SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);

extern "C" void func_0049CDD0(char *p) {
    short s;
    short a;
    unsigned short u;
    float t;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (MF(0x24) < 0.0f && AI->m30()) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCF) = 1;
            AI->m1C(0x11);
            AI->m44();
            AI->m48(0xB, M + 0x10);
            JUMP(6.0f, 20.0f, -0.54f)
            func_00330BD0(D_01DFABA0, 0x27, M + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        F(0xE0) = F(0xE0) - F(0xE0) / 14.0f * F(0xB0);
        F(0xE8) = F(0xE8) - F(0xE8) / 14.0f * F(0xB0);
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (AI->m30()) AI->m48(0x12, M + 0x10);
        if (!(AI->m28() < 40.0f)) {
            *(unsigned char *)(p + 0xCD) = 1;
            *(unsigned char *)(p + 0xCF) = 1;
            AI->m18(0x4E);
            JUMP(18.0f, -5.0f, -1.5f)
            ANG = ANG + 0x8000;
            *(int *)(p + 0xD4) = 2;
            F(0x104) = 45.0f + 45.0f * (2.3283064e-10f * mt_rand());
        }
        break;
    case 2:
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (MF(0x24) < 0.0f && AI->m30()) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCE) = 4;
            *(unsigned char *)(p + 0xCF) = 0;
            AI->m18(0x4F);
            AI->m48(0x27, M + 0x10);
            AI->m48(0x12, M + 0x10);
            ID(0.0f)
            *(int *)(p + 0xD4) = 3;
        }
        break;
    case 3:
        if (AI->m2C()) {
            AI->m18(0x32);
            ID(30.0f)
            *(int *)(p + 0xD4) = 4;
        }
        break;
    case 4:
        if (AI->m28() == 30.0f) AI->m48(0xC, M + 0x10);
        if (AI->m2C()) SELF->mEC(0xE);
        AI->m24();
        MF(0x20) = MF(0x20) + MF(0x30) * F(0xB0);
        MF(0x24) = MF(0x24) + MF(0x34) * F(0xB0);
        MF(0x28) = MF(0x28) + MF(0x38) * F(0xB0);
        MF(0x30) = MF(0x30) - MF(0x30) / 10.0f * F(0xB0);
        MF(0x34) = MF(0x34) - MF(0x34) / 10.0f * F(0xB0);
        MF(0x38) = MF(0x38) - MF(0x38) / 10.0f * F(0xB0);
        break;
    case 0xD:
        if (AI->m2C()) {
            AI->m18(0x58);
            AI->m48(0x13, M + 0x10);
            *(int *)(p + 0xD4) = 4;
        }
        break;
    case 0xE:
        if (!(AI->m28() < D_005550A4[0]) && AI->m28() <= D_005550A8[0]) {
            SELF->m6C();
            SELF->m70();
            s = SELF->m78(*(short *)(p + 0x30), ANG);
            a = deg49C(D_005550AC[0]);
            u = a;
            t = (float)(int)u * F(0xB0);
            if (!((float)s <= t)) ANG = (float)ANG + t;
            t = (float)(int)u * F(0xB0);
            if ((float)s < -t) ANG = (float)ANG - t;
        }
        if (AI->m2C()) {
            AI->m18(0x59);
            *(int *)(p + 0xD4) = 5;
        }
        AI->m24();
        break;
    case 0xF:
        if (!(AI->m28() < 8.0f)) *(unsigned char *)(p + 0xCD) = 1;
        if (!(AI->m28() < 38.0f)) *(unsigned char *)(p + 0xCD) = 0;
        if (AI->m2C()) SELF->mEC(0xE);
        AI->m24();
        MF(0x24) = MF(0x24) * 2.0f;
        break;
    }
}

#include "game/mt_rand.h"
class Self49B {
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
    virtual void m6C();
    virtual void m70();
    virtual void d27();
    virtual short m78(int, int);
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};
class Ai49B {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual int m34();
    virtual short m38();
    virtual void d13();
    virtual void d14();
    virtual void m44();
    virtual void m48(int, char *);
};

extern "C" float D_005550A4[];
extern "C" float D_005550A8[];
extern "C" float D_005550AC[];
extern "C" char D_01DFABA0[];
extern "C" void func_00330BD0(char *, int, char *, int, int);
static inline short deg49B(float d) { return 0.5f + 65536.0f * d / 360.0f; }
#define SELF ((Self49B *)p)
#define AI (*(Ai49B **)(p + 0xA8))
#define M (*(char **)(p + 0x10))
#define ANG (*(short *)(M + 0x50))
#define F(o) (*(float *)(p + (o)))
#define MF(o) (*(float *)(M + (o)))
#define ID(z)     MF(0x20) = 0.0f; MF(0x24) = 0.0f; MF(0x28) = 0.0f; MF(0x2C) = 1.0f;     MF(0x30) = 0.0f; MF(0x34) = 0.0f; MF(0x38) = z; MF(0x3C) = 1.0f;
#define JUMP(e4, e8, f4)     F(0xE0) = 0.0f; F(0xE4) = e4; F(0xE8) = e8; F(0xEC) = 1.0f;     F(0xF0) = 0.0f; F(0xF4) = f4; F(0xF8) = 0.0f; F(0xFC) = 1.0f;     SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);

extern "C" void func_0049BFA0(char *p) {
    short s;
    short a;
    unsigned short u;
    float t;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (AI->m34()) {
            *(unsigned char *)(p + 0xCF) = 8;
            ANG = AI->m38();
            AI->m1C(0xA);
            AI->m24();
            AI->m44();
            AI->m48(0xD, M + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, M + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 2;
        } else {
            SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
            if (MF(0x24) < 0.0f && AI->m30()) {
                *(unsigned char *)(p + 0xCD) = 0;
                *(unsigned char *)(p + 0xCF) = 1;
                AI->m1C(0x11);
                JUMP(2.0f, -20.0f, -0.54f)
                AI->m44();
                AI->m48(0x12, M + 0x10);
                AI->m48(0xB, M + 0x10);
                func_00330BD0(D_01DFABA0, 0x27, M + 0x10, 6, 0);
                *(int *)(p + 0xD4) = 6;
            }
        }
        break;
    case 2:
        AI->m24();
        if (AI->m2C()) {
            AI->m1C(0xB);
            JUMP(0.0f, 0.0f, -0.54f)
            AI->m48(0x11, M + 0x10);
            *(int *)(p + 0xD4) = 3;
        }
        break;
    case 3:
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (AI->m2C()) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCF) = 4;
            AI->m1C(0x17);
            AI->m24();
            *(int *)(p + 0xD4) = 4;
        }
        break;
    case 4:
        AI->m24();
        if (AI->m2C()) {
            *(unsigned char *)(p + 0xCF) = 2;
            AI->m1C(6);
            AI->m24();
            *(int *)(p + 0xD4) = 5;
        }
        break;
    case 5:
        AI->m24();
        if (AI->m2C()) {
            SELF->mEC(0xE);
            AI->m24();
        }
        break;
    case 6:
        F(0xE0) = F(0xE0) - F(0xE0) / 14.0f * F(0xB0);
        F(0xE8) = F(0xE8) - F(0xE8) / 14.0f * F(0xB0);
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (AI->m30()) AI->m48(0x12, M + 0x10);
        if (!(AI->m28() < 40.0f)) {
            *(unsigned char *)(p + 0xCD) = 1;
            *(unsigned char *)(p + 0xCF) = 1;
            AI->m18(0x4E);
            JUMP(18.0f, -5.0f, -1.5f)
            *(int *)(p + 0xD4) = 7;
            F(0x104) = 45.0f + 45.0f * (2.3283064e-10f * mt_rand());
        }
        break;
    case 7:
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (MF(0x24) < 0.0f && AI->m30()) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCE) = 4;
            *(unsigned char *)(p + 0xCF) = 0;
            AI->m18(0x4F);
            AI->m48(0x27, M + 0x10);
            AI->m48(0x12, M + 0x10);
            JUMP(0.0f, 0.0f, 0.0f)
            *(int *)(p + 0xD4) = 8;
        }
        break;
    case 8:
        if (AI->m2C()) {
            AI->m18(0x32);
            ID(30.0f)
            *(int *)(p + 0xD4) = 9;
        }
        break;
    case 9:
        if (AI->m28() == 30.0f) AI->m48(0xC, M + 0x10);
        if (AI->m2C()) SELF->mEC(0xE);
        AI->m24();
        MF(0x20) = MF(0x20) + MF(0x30) * F(0xB0);
        MF(0x24) = MF(0x24) + MF(0x34) * F(0xB0);
        MF(0x28) = MF(0x28) + MF(0x38) * F(0xB0);
        MF(0x30) = MF(0x30) - MF(0x30) / 10.0f * F(0xB0);
        MF(0x34) = MF(0x34) - MF(0x34) / 10.0f * F(0xB0);
        MF(0x38) = MF(0x38) - MF(0x38) / 10.0f * F(0xB0);
        break;
    case 0x12:
        if (AI->m2C()) {
            AI->m18(0x58);
            AI->m48(0x13, M + 0x10);
            *(int *)(p + 0xD4) = 9;
        }
        break;
    case 0x13:
        if (!(AI->m28() < D_005550A4[0]) && AI->m28() <= D_005550A8[0]) {
            SELF->m6C();
            SELF->m70();
            s = SELF->m78(*(short *)(p + 0x30), ANG);
            a = deg49B(D_005550AC[0]);
            u = a;
            t = (float)(int)u * F(0xB0);
            if (!((float)s <= t)) ANG = (float)ANG + t;
            t = (float)(int)u * F(0xB0);
            if ((float)s < -t) ANG = (float)ANG - t;
        }
        if (AI->m2C()) {
            AI->m18(0x59);
            *(int *)(p + 0xD4) = 0xA;
        }
        AI->m24();
        break;
    case 0x6E:
        if (!(AI->m28() < 8.0f)) *(unsigned char *)(p + 0xCD) = 1;
        if (!(AI->m28() < 38.0f)) *(unsigned char *)(p + 0xCD) = 0;
        if (AI->m2C()) SELF->mEC(0xE);
        AI->m24();
        MF(0x24) = MF(0x24) * 2.0f;
        break;
    }
}

#include "game/mt_rand.h"
struct V360 { float x; float y; float z; float w; };
class Self360 {
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
    virtual void m6C();
    virtual void m70();
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
    virtual void mEC(int);
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
    virtual void m334();
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
    virtual void d216();
    virtual void d217();
    virtual void d218();
    virtual void d219();
    virtual void d220();
    virtual void d221();
    virtual void d222();
    virtual void d223();
    virtual void d224();
    virtual void d225();
    virtual void d226();
    virtual void d227();
    virtual void d228();
    virtual void d229();
    virtual void d230();
    virtual void d231();
    virtual void d232();
    virtual void d233();
    virtual void d234();
    virtual void d235();
    virtual void d236();
    virtual void m3BC();
    virtual void d238();
    virtual void m3C4();
    virtual void d240();
    virtual void m3CC();
    virtual void d242();
    virtual void m3D4();
    virtual void d244();
    virtual void m3DC();
    virtual void d246();
    virtual void m3E4();
    virtual void d248();
    virtual void m3EC();
    virtual void d250();
    virtual void m3F4();
    virtual void d252();
    virtual void m3FC();
    virtual void d254();
    virtual void d255();
    virtual void d256();
    virtual void d257();
    virtual void d258();
    virtual void d259();
    virtual void d260();
    virtual void d261();
    virtual void d262();
    virtual void m424();
};
class Ai360 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void m40();
    virtual void d15();
    virtual void m48(int, void *);
};

extern "C" char D_01DFABA0[];
extern "C" void func_00330BD0(char *, int, char *, int, int);
#define SELF ((Self360 *)p)
#define AI (*(Ai360 **)(p + 0xA8))
#define M (*(char **)(p + 0x10))
#define POS (M + 0x10)
#define H (*(char **)(p + 4))
#define C8(n) *(int *)(p + 0xC8) = n;
#define HIT(n)     switch (*H) {     default:         func_00330BD0(D_01DFABA0, n, POS, 0, 0);         break;     case 0x19:         func_00330BD0(D_01DFABA0, n, POS, 7, 0);         break;     }
#define HIT2(n)     if (*H != 0x19) {         func_00330BD0(D_01DFABA0, n, POS, 0, 0);     } else {         func_00330BD0(D_01DFABA0, n, POS, 7, 0);     }
#define FLIP()     switch (mt_rand() & 1) {     case 0:         AI->m18(0x2A);         break;     case 1:         AI->m18(0x2D);         break;     }
#define WARP(x, y, z, a, m)     *(float *)(M + 0x10) = x;     *(float *)(M + 0x14) = y;     *(float *)(M + 0x18) = z;     *(short *)(M + 0x50) = a;     SELF->m();

extern "C" void func_00360EE0(char *p) {
    *(unsigned char *)(p + 0xCD) = 0;
    *(unsigned char *)(p + 0xCE) = 0;
    *(unsigned char *)(p + 0xCF) = 0;
    AI->m48(0x384, POS);
    switch (*H) {
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
        switch (*(unsigned short *)(H + 0x22)) {
        default: {
            V360 va;
            va.y = 0.0f;
            va.x = 53.0f;
            AI->m48(0xBB8, &va);
            SELF->mEC(0xE);
            AI->m48(6, POS);
            HIT(0x14)
            break;
        }
        case 0x63: {
            V360 vb;
            vb.y = 0.0f;
            vb.x = 53.0f;
            AI->m48(0xBB8, &vb);
            SELF->mEC(0xE);
            HIT(0x14)
            break;
        }
        }
        return;
    }
    {
        switch (*(unsigned short *)(H + 0x22)) {
        case 0:
            switch (*H) {
            default:
                switch (mt_rand() & 1) {
                case 0:
                    C8(1)
                    AI->m48(0x3E5, POS);
                    *(float *)(M + 0x14) = *(float *)(M + 0x14) + 150.0f;
                    SELF->m334();
                    AI->m40();
                    HIT(0x16)
                    break;
                case 1:
                    C8(2)
                    SELF->m6C();
                    SELF->m70();
                    *(short *)(M + 0x50) = *(short *)(p + 0x30);
                    FLIP()
                    AI->m48(6, POS);
                    HIT(0x14)
                    break;
                }
                break;
            case 0x19:
                C8(0xF)
                *(unsigned char *)(p + 0xCD) = 0;
                AI->m18(0x2D);
                AI->m48(0x21, POS);
                AI->m48(0x3E6, POS);
                AI->m48(0x7D7, POS);
                AI->m40();
                break;
            }
            break;
        case 1:
            C8(1)
            AI->m48(0x3E5, POS);
            *(float *)(M + 0x14) = *(float *)(M + 0x14) + 150.0f;
            SELF->m334();
            AI->m40();
            HIT(0x16)
            break;
        case 2:
            C8(2)
            SELF->m6C();
            SELF->m70();
            *(short *)(M + 0x50) = *(short *)(p + 0x30);
            FLIP()
            AI->m48(6, POS);
            HIT(0x14)
            break;
        case 3:
            C8(3)
            *(unsigned char *)(p + 0xCD) = 1;
            AI->m18(0x2B);
            AI->m48(0x10, POS);
            AI->m48(0x3E4, POS);
            AI->m48(0x3E6, POS);
            AI->m40();
            break;
        case 4:
            C8(4)
            SELF->m3CC();
            AI->m48(0x3E4, POS);
            break;
        case 5:
            C8(5)
            SELF->m3D4();
            break;
        case 6:
            C8(6)
            SELF->m3BC();
            HIT(0x14)
            break;
        case 7:
            C8(7)
            AI->m48(0x3E5, POS);
            *(float *)(M + 0x14) = *(float *)(M + 0x14) + 150.0f;
            SELF->m3C4();
            AI->m40();
            HIT(0x16)
            break;
        case 8:
            C8(8)
            SELF->m3DC();
            break;
        case 9:
            C8(9)
            WARP(3426.0f, 569.0f, 2503.0f, -0x40CB, m3E4)
            break;
        case 0xA:
            C8(0xA)
            WARP(3506.0f, 462.0f, 2548.0f, -0x3264, m3EC)
            break;
        case 0xB:
            C8(0xB)
            WARP(3528.0f, 462.0f, 2453.0f, -0x5199, m3F4)
            break;
        case 0xC:
            C8(0xC)
            SELF->m3FC();
            break;
        case 0xE:
            C8(0xE)
            SELF->m424();
            break;
        case 0xF:
            C8(0xF)
            *(unsigned char *)(p + 0xCD) = 1;
            AI->m18(0x2D);
            AI->m48(0x21, POS);
            AI->m48(0x3E6, POS);
            AI->m48(0x7D7, POS);
            AI->m40();
            func_00330BD0(D_01DFABA0, 0x33, POS, 7, 0);
            break;
        case 0x63: {
            V360 vc;
            vc.x = 0.0f;
            vc.y = 0.0f;
            AI->m48(0xBB8, &vc);
            AI->m48(0x384, POS);
            SELF->mEC(0xE);
            break;
        }
        }
    }
}

class O501 {
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
    virtual void m88(int, int, int);
    virtual void d33();
    virtual void m90(int);
};

struct S501 {
    char b0;
    signed char st;
    char b2;
    unsigned char b3;
    signed char b4;
    unsigned char a5;
};

extern "C" char D_0058BF10[];
extern "C" char D_0058BF14[];
extern "C" char *func_00279290(char *);
extern "C" void func_001A1E70(char *, int);
extern "C" void func_001A2000(char *, int);
extern "C" void func_001A3B20(char *, int, int, int);
extern "C" void func_005012F0(char *, S501 *);

#define O(o) ((O501 *)(p + (o)))
#define SH3()     func_001A1E70(func_00279290(p + 0xC0), 1);     func_001A1E70(func_00279290(p + 0xC0), 2);     func_001A1E70(func_00279290(p + 0x6C0), 2);
#define HD3()     func_001A2000(func_00279290(p + 0xC0), 1);     func_001A2000(func_00279290(p + 0xC0), 2);     func_001A2000(func_00279290(p + 0x6C0), 2);
#define FADE3()     O(0xC0)->m88(1, q->a5, 1);     O(0xC0)->m88(2, q->a5, 1);     O(0x6C0)->m88(2, q->a5, 1);
#define STOP3()     O(0xC0)->m90(1);     O(0xC0)->m90(2);     O(0x6C0)->m90(2);
#define DIG(k, d)     func_001A3B20(func_00279290(p + 0xC0), k, *(int *)(D_0058BF10 + (d) * 8) << 4, *(int *)(D_0058BF14 + (d) * 8) << 4);
#define DIGITS()     DIG(1, *(unsigned char *)(p + 0x13E6) / 10)     DIG(2, *(unsigned char *)(p + 0x13E6) % 10)

extern "C" void func_005019F0(char *p, S501 *q) {
    switch (q->st) {
    case 0:
        SH3()
        DIGITS()
        q->a5 = 0;
        q->b3 = 0;
        q->st++;
    case 1:
        q->a5 += 4;
        if (q->a5 < 0x40) {
            FADE3()
        } else {
            STOP3()
            q->b3 = 1;
            q->st++;
        }
        break;
    case 2:
        if (q->b4 == 0) {
            q->a5 = 0x40;
            FADE3()
            DIGITS()
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        } else if (q->b4 == 2) {
            HD3()
            q->b4 = -1;
            q->b3 = 2;
            q->st = 4;
        }
        break;
    case 3:
        q->a5 -= 4;
        if (0 < q->a5) {
            FADE3()
        } else {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case 4:
        if (q->b4 == 0) {
            SH3()
            q->b4 = -1;
            q->b3 = 1;
            q->st = 2;
        }
        break;
    case -1:
    default:
        STOP3()
        HD3()
        func_005012F0(p, q);
        break;
    }
}

class L2A4 {
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

extern "C" float func_0034C200(int, int, float);
#define T (*(float *)(p + 0xAA9C))
#define L(o) ((L2A4 *)(p + (o)))
#define SET(o, k)     L(o)->m94(k, r1);     L(o)->m98(k, r0);     L(o)->m9C(k, c7);     L(o)->mA0(k, c6);

extern "C" void func_002A4290(char *p, float lim, float rate, int a0, int a1, int b0, int b1, int c0, int c1, int d0, int d1, int e0, int e1, int f0, int f1, int g0, int g1, int h0, int h1) {
    unsigned int k3;
    unsigned int r0;
    unsigned int c7;
    unsigned int k2;
    unsigned int r1;
    unsigned int k4;
    unsigned int c6;
    unsigned int k0;
    unsigned int k1;
    int i;
    unsigned int k5;
    T += rate * *(float *)(p + 0x10);
    if (!(T < lim)) T = 0.0f;
    k0 = func_0034C200(a0, a1, T);
    k1 = func_0034C200(c0, c1, T);
    k2 = func_0034C200(e0, e1, T);
    r0 = k0 + (k1 << 8) + (k2 << 16);
    k3 = func_0034C200(b0, b1, T);
    k4 = func_0034C200(d0, d1, T);
    k5 = func_0034C200(f0, f1, T);
    r1 = k3 + (k4 << 8) + (k5 << 16);
    c6 = func_0034C200(g0, g1, T);
    c7 = func_0034C200(h0, h1, T);
    SET(0x1D00, 0)
    SET(0x1D00, 2)
    for (i = 0; i < 3; i++) {
        SET(0x2900, 0)
        SET(0x2900, 2)
        p += 0x600;
    }
}

extern "C" {
/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-11. */
extern short D_00563DC0[];
unsigned char func_0024E800(char *);
void func_0024DA80(char *, int, int);
void func_003A0CD0(char *, short);
void func_0039D800(char *);
void func_003A0F20(char *);
unsigned char func_003A2080(char *, char *, float, float);
unsigned char func_0039DDF0(char *, float);

typedef struct { short s0; short s2; short s4; short s6; float f8; float fC; float f10; float f14; float f18; float f1C; float f20; unsigned char b24; } E3A1;

typedef struct { float v[4]; } F3A1;

extern E3A1 D_00563FB0 __attribute__((aligned(16)));
extern E3A1 D_00563FE0 __attribute__((aligned(16)));
extern E3A1 D_00564010 __attribute__((aligned(16)));
extern E3A1 D_00564040 __attribute__((aligned(16)));
extern F3A1 D_00564070 __attribute__((aligned(16)));
extern char D_005BE098[8];
void func_0028C5C0(char *, int, float);
void func_00195E20(char *, char *);
void func_00131650(char *, char *);
extern char D_01DFABA0[];
extern float D_005BDEAC;
void func_00206730(char *);
void func_00286040(char *);
char *func_004D2740(char *);
void func_00330BD0(char *, int, char *, int, int);
void func_004E6FF0(char *);
float func_001324E0(float *);
void func_001318E0(float *, float *, float *);
void func_00105230(float *, float *, float *);
void func_00104B80(char *, float *, char *);

static inline void play3A1(char *p, int s) { *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC); *(short *)(p + 0x2DDC) = s; func_0024DA80(p + 0x29D0, 0, s); func_0024DA80(p + 0x2AA0, 0, s); }

static inline void xz3A1(char *v, float x, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = 0.0f; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }

static inline unsigned char both3A1(char *p) { unsigned char r; if (func_0024E800(p + 0x29D0) == 1 && func_0024E800(p + 0x2AA0) == 1) r = 1; else r = 0; return r; }
unsigned char func_003A21D0(char *, int);
void func_00394EE0(char *);
void func_003A02B0(char *, int);
void func_00395090(char *);

}
class Self396 {
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
    virtual unsigned char m1BC();
    virtual unsigned char m1C0();
};
class Mot396 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};
#define ZALL() \
    *(float *)(p + 0x60) = 0.0f; *(float *)(p + 0x64) = 0.0f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f; \
    *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f; \
    *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
#define VC(o) (**(void ***)(p + (o)))

extern "C" void func_003A0770(char *);
extern "C" void func_0039D890(char *);
extern "C" void func_0039D440(char *, int);
extern "C" void func_0039CEE0(char *);
extern "C" unsigned char func_003A20C0(char *, char *, float, float);
extern "C" void func_0039CFB0(char *);
extern "C" void func_0039D330(char *, int);
extern "C" void func_003A0E50(char *, int);
extern "C" void func_003A1180(char *);
extern "C" float D_00563DD0[];
extern "C" unsigned char D_01CAFF3C[];
static inline short deg396(float d) { return 0.5f + 65536.0f * d / 360.0f; }

extern "C" void func_00396F90(char *p) {
    float f;
    short a;
    f = ((Mot396 *)(p + 0x4C4))->m28(0);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        play3A1(p, 0x2E);
        *(unsigned char *)(p + 5) = 10;
        *(unsigned char *)(p + 0x2DE0) = 0;
        *(unsigned char *)(p + 0x2DE3) = 0;
        *(unsigned char *)(p + 0x2EE5) = 0;
        func_003A0770(p);
        if (*(unsigned char *)(p + 0x2EE1) <= 1 || (*(unsigned short *)(p + 0x2EDE) & 0x100) == 0) *(unsigned char *)(p + 0x2DE6) = 4;
        func_0039D890(p);
        *(int *)(p + 0x2EEC) = 0;
        switch (*(unsigned char *)(p + 0x2F3C)) {
        case 0:
            func_0039D440(p, 0);
            break;
        case 1:
            func_0039D440(p, 1);
            break;
        case 2:
            func_0039D440(p, 0);
            func_0039D440(p, 1);
            break;
        }
        func_0039CEE0(p);
        *(unsigned char *)(p + 0x1E4) = 0;
        *(unsigned char *)(p + 0x1E5) = 0;
        *(short *)(p + 0x2F3E) = 0;
        break;
    case 10:
        if (both3A1(p) == 1) {
            play3A1(p, 0x2F);
            *(unsigned char *)(p + 5) = 0x14;
            *(float *)(p + 0x2E30) = D_00563DD0[D_01CAFF3C[0]];
        }
        break;
    case 0x14:
        if (func_003A20C0(p, p + 0x2E30, 1.0f, 0.0f) == 1) {
            play3A1(p, 0x30);
            *(unsigned char *)(p + 5) = 0x1E;
        }
        break;
    case 0x1E:
        if (!(f < 8.0f)) {
            *(short *)(p + 0x2F3E) = 1;
            (*(unsigned char *)(p + 5))++;
            *(unsigned char *)(p + 0x2DE4) = 0;
        }
        break;
    case 0x1F:
        if (!(f < 66.0f)) {
            *(float *)(p + 0x60) = 0.0f; *(float *)(p + 0x64) = 24.444445f; *(float *)(p + 0x68) = 0.0f; *(float *)(p + 0x6C) = 0.0f;
            *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = 0.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = 0.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
            *(unsigned char *)(p + 5) = 0x28;
        }
        break;
    case 0x28:
        if (!(f < 75.0f)) {
            *(float *)(p + 0x70) = 0.0f; *(float *)(p + 0x74) = -2.0f; *(float *)(p + 0x78) = 0.0f; *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x2E00) = 0.0f; *(float *)(p + 0x2E04) = -30.0f; *(float *)(p + 0x2E08) = 0.0f; *(float *)(p + 0x2E0C) = 0.0f;
            *(short *)(p + 0x2F3E) = 2;
            func_0039CFB0(p);
            if (*(unsigned char *)(p + 0x2F3C) == 2) {
                func_0039D330(p, 0);
                func_0039D330(p, 1);
            }
            *(unsigned char *)(p + 5) = 0x32;
        }
        break;
    case 0x32:
        if ((unsigned char)((Self396 *)p)->m1BC() == 1) {
            play3A1(p, 0x31);
            *(unsigned char *)(p + 5) = 0x3C;
            func_0039D800(p);
            ZALL()
            *(unsigned char *)(p + 0x2DE5) = 1;
            *(unsigned char *)(p + 0x2DE3) = 1;
            *(unsigned char *)(p + 0x2DE4) = 1;
        }
        break;
    case 0x3C:
        if (func_0039DDF0(p, 102.0f) == 1) return;
        if (both3A1(p) == 1) {
            func_003A02B0(p, 2);
            *(short *)(p + 0x2F3E) = -1;
        }
        break;
    }
    if (*(unsigned char *)(p + 5) >= 0x14) *(unsigned char *)(p + 0x2DE8) = 0;
    if (*(unsigned char *)(p + 5) >= 0x1E && *(unsigned char *)(p + 5) < 0x33 && !(f < 60.0f) && f < 85.0f) {
        a = deg396(14.0f * *(float *)(p + 0x10));
        func_003A0E50(p, -(unsigned short)a);
    }
    if (*(unsigned char *)(p + 5) >= 0x28 && *(unsigned char *)(p + 5) < 0x33) func_003A1180(p);
}
