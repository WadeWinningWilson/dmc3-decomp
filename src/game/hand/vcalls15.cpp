/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls14. */

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

extern "C" void func_00464120(char *p) {
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
        if (!(x <= 0.0f)) ANG += (float)*(short *)(p + 0xC0) * F(0xB0);
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

extern "C" void func_0046A170(char *p) {
    short s;
    short a;
    unsigned short u;
    float t;
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
            AI->m18(0x4F);
            AI->m48(0x13, M + 0x10);
            ID(0.0f)
            *(int *)(p + 0xD4) = 2;
        }
        break;
    case 2:
        MF(0x20) = MF(0x20) + MF(0x30);
        MF(0x24) = MF(0x24) + MF(0x34);
        MF(0x28) = MF(0x28) + MF(0x38);
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

class O5014 {
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
    virtual int mBC(float);
};
class A5014 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual float m24();
};

struct S5014 {
    char b0;
    signed char st;
    char b2;
    unsigned char b3;
    signed char b4;
    unsigned char a5;
};

extern "C" char *func_00279290(char *);
extern "C" char *func_002792A0(char *);
extern "C" void func_001A1E70(char *, int);
extern "C" void func_001A2000(char *, int);
extern "C" void func_005012F0(char *, S5014 *);

#define O ((O5014 *)(p + 0x6C0))
#define ANIM ((A5014 *)func_002792A0(p + 0x6C0))
#define SH(n) func_001A1E70(func_00279290(p + 0x6C0), n);
#define HD(n) func_001A2000(func_00279290(p + 0x6C0), n);

extern "C" void func_005014F0(char *p, S5014 *q) {
    int r;
    switch (q->st) {
    case 0:
        SH(0)
        SH(1)
        q->a5 = 0xE;
        q->b3 = 0;
        q->st++;
    case 1:
        if (q->a5 < 0x40) {
            q->a5++;
            O->m88(1, q->a5, 1);
        }
        O->mBC(*(float *)(p + 0x10));
        if (50.0f <= ANIM->m24()) {
            O->m90(1);
            q->b3 = 1;
            q->st++;
        }
        break;
    case 2:
        if (q->b4 == 0) {
            q->a5 = 0x40;
            O->m88(1, q->a5, 1);
            SH(3)
            O->m88(3, q->a5, 1);
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        } else if (q->b4 == 2) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st = 4;
        } else if (q->b4 == 3) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st = 7;
        }
        break;
    case 3:
        if (0 < q->a5) {
            q->a5 -= 4;
            O->m88(1, q->a5, 1);
            O->m88(3, q->a5, 1);
        }
        r = O->mBC(*(float *)(p + 0x10));
        if ((int)ANIM->m24() >= 0x46 || (unsigned char)r == 4 || (unsigned char)r == 0) {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case 4:
        q->a5 -= 8;
        if (0 < q->a5) {
            O->m88(0, q->a5, 1);
            O->m88(1, q->a5, 1);
        } else {
            q->b3 = 1;
            q->st++;
        }
        break;
    case 5:
        if (q->b4 == 0) {
            q->a5 = 0;
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        }
        break;
    case 6:
        q->a5 += 8;
        if (q->a5 < 0x40) {
            O->m88(0, q->a5, 1);
            O->m88(1, q->a5, 1);
        } else {
            O->m90(0);
            O->m90(1);
            q->b3 = 1;
            q->st = 2;
        }
        break;
    case 7:
        q->a5 -= 4;
        if (0 < q->a5) {
            O->m88(0, q->a5, 1);
            O->m88(1, q->a5, 1);
        } else {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case -1:
    default:
        O->m90(1);
        O->m90(3);
        HD(0)
        HD(1)
        HD(3)
        func_005012F0(p, q);
        break;
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
class Self39B {
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
    virtual unsigned char m1C0();
};
class Mot39B {
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

class O39B {
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
    virtual void mB4(int, int, int, int);
    virtual void d44();
    virtual void mBC(float);
};

struct V39B { float x; float y; float z; float w; };
struct C39B {
    V39B a;
    V39B b;
    float c[2];
    unsigned char e[2];
    float g0;
    float g1;
    float g2;
    float g3;
    float g4;
    float g5;
    float g6;
    float g7;
    float g8;
    float g9;
};

extern "C" C39B *D_005BDC40;
extern "C" void func_0039D720(char *, int);
extern "C" void func_003A1F90(char *, float);
extern "C" void func_003A1FA0(char *, int, int);
extern "C" void func_003A0770(char *);
extern "C" void func_003A07B0(char *);
extern "C" void func_0039D330(char *, int);
extern "C" void func_001A1E10(char *);
extern "C" void func_001A1D90(char *);
extern "C" char *func_00279290(char *);

#define OA ((O39B *)(p + 0xD80))
#define OB ((O39B *)(p + 0x1380))
#define TICKO() \
    if (w == 0) { \
        OA->mBC(*(float *)(p + 0x10)); \
    } else { \
        OB->mBC(*(float *)(p + 0x10)); \
    }

extern "C" void func_0039B230(char *p, int w) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (w == 0) {
            play3A1(p, 0x4E);
            OA->mB4(1, 0, 0, 0);
        } else {
            play3A1(p, 0x4F);
            OB->mB4(1, 0, 0, 0);
        }
        *(float *)(p + 0x2E30) = 173.0f;
        *(float *)(p + 0x2E34) = 110.0f;
        *(short *)(p + 0x2DEA) = 0;
        *(short *)(p + 0x90) = 0;
        *(unsigned char *)(p + 0x2DE0) = 0;
        *(unsigned char *)(p + 0x2DE1) = 0;
        ZALL()
        *(unsigned char *)(p + 5) += 10;
        break;
    case 10:
        func_003A2080(p, p + 0x2E30, 1.0f, 0.0f);
        TICKO()
        if (func_003A2080(p, p + 0x2E34, 1.0f, 0.0f) == 1) {
            func_0039D720(p, w);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 11:
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1) {
            *(float *)(p + 0x2E30) = 215.0f;
            *(unsigned char *)(p + 5) = 0x14;
        } else {
            TICKO()
        }
        break;
    case 0x14:
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1) {
            if (w == 0) {
                play3A1(p, 0x50);
                OA->mB4(3, 0, 0, 0);
            } else {
                play3A1(p, 0x51);
                OA->mB4(2, 0, 0, 0);
            }
            func_003A1F90(p, 5.0f);
            *(float *)(p + 0x2E30) = 95.0f;
            *(unsigned char *)(p + 5) += 10;
        }
        break;
    case 0x1E:
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1) {
            *(unsigned char *)(p + 5) += 10;
        } else {
            TICKO()
        }
        func_003A1FA0(p, 0x20, 1);
        break;
    case 0x28:
        if (!(((Mot39B *)(p + 0x4C4))->m28(0) < 112.0f)) {
            *(unsigned char *)(p + 0x2F3C) = 2;
            *(unsigned char *)(p + 0x2EE7) = 0;
            *(C39B *)(p + 0xB70) = *D_005BDC40;
            if (w == 0) {
                func_001A1E10(func_00279290(p + 0x1380));
                func_001A1D90(func_00279290(p + 0x1380));
            } else {
                func_001A1E10(func_00279290(p + 0xD80));
                func_001A1D90(func_00279290(p + 0xD80));
            }
            *(unsigned char *)(p + 0x2EE5) = 0;
            func_003A0770(p);
            func_003A07B0(p);
            (*(unsigned char *)(p + 5))++;
        } else {
            func_003A1FA0(p, 0x20, 0);
        }
        break;
    case 0x29:
        if (both3A1(p) == 1) {
            if (w == 0) {
                play3A1(p, 0x52);
            } else {
                play3A1(p, 0x53);
            }
            OA->mB4(2, 0, 0, 0);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 0x2A:
        if (!(((Mot39B *)(p + 0x4C4))->m28(0) < 300.0f)) {
            if (w == 0) {
                *(float *)(p + 0x50) = 3061.0f;
                *(float *)(p + 0x54) = 939.0f;
                *(float *)(p + 0x58) = 1816.0f;
                *(float *)(p + 0x5C) = 1.0f;
            } else {
                *(float *)(p + 0x50) = 1958.0f;
                *(float *)(p + 0x54) = 939.0f;
                *(float *)(p + 0x58) = 1816.0f;
                *(float *)(p + 0x5C) = 1.0f;
            }
            func_0039D330(p, 0);
            func_0039D330(p, 1);
            (*(unsigned char *)(p + 5))++;
        }
    case 0x2B:
        OA->mBC(*(float *)(p + 0x10));
        if (both3A1(p) == 1) {
            func_003A02B0(p, 0x38);
            *(unsigned char *)(p + 0x2DE1) = 1;
            *(unsigned char *)(p + 0x2DE3) = 1;
        }
        break;
    }
    func_003A0F20(p);
}
