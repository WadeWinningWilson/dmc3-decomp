/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls15. */

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

extern "C" void func_004A0A30(char *p) {
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
        if (AI->m28() >= 9.0) {
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

extern "C" void func_004A6980(char *p) {
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
            *(unsigned char *)(p + 0xCE) = 4;
            *(unsigned char *)(p + 0xCF) = 0;
            AI->m18(0x4F);
            AI->m48(0x27, M + 0x10);
            AI->m48(0x13, M + 0x10);
            ID(0.0f)
            *(int *)(p + 0xD4) = 2;
        }
        break;
    case 2:
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

class O502 {
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

struct S502 {
    char b0;
    signed char st;
    char b2;
    unsigned char b3;
    signed char b4;
    unsigned char a5;
};

extern "C" unsigned char D_005BE010[2];
extern "C" unsigned char D_005BE011[2];
extern "C" char *func_00279290(char *);
extern "C" void func_001A1E70(char *, int);
extern "C" void func_001A2000(char *, int);
extern "C" void func_001A2D70(char *, int, unsigned int);
extern "C" void func_005012F0(char *, S502 *);

#define O ((O502 *)(p + 0xCC0))
#define IDX (*(signed char *)(p + 0x13E9))
#define T0 D_005BE010[IDX * 2]
#define T1 D_005BE011[IDX * 2]
#define SH(n) func_001A1E70(func_00279290(p + 0xCC0), n);
#define HD(n) func_001A2000(func_00279290(p + 0xCC0), n);
#define COL(n, c) func_001A2D70(func_00279290(p + 0xCC0), n, c);
#define PAIRCOL()     if (*(signed char *)(p + 0x13EA) != 0) {         COL(T0, 0x80404040)         COL(T1, 0x80C0C0C0)     } else {         COL(T0, 0x80C0C0C0)         COL(T1, 0x80404040)     }

extern "C" void func_00502B90(char *p, S502 *q) {
    switch (q->st) {
    case 0:
        SH(2)
        SH(3)
        COL(2, 0x80404040)
        COL(3, 0x80404040)
        q->a5 = 0;
        q->b3 = 0;
        q->st++;
    case 1:
        q->a5 += 4;
        if (q->a5 < 0x40) {
            O->m88(2, q->a5, 1);
            O->m88(3, q->a5, 1);
        } else {
            O->m90(2);
            O->m90(3);
            q->b3 = 1;
            q->st++;
        }
        break;
    case 2:
        switch (IDX) {
        case 0:
            COL(2, 0x80C0C0C0)
            COL(3, 0x80404040)
            break;
        case 1:
            COL(2, 0x80404040)
            COL(3, 0x80C0C0C0)
            break;
        }
        if (q->b4 == 0) {
            SH(T0)
            SH(T1)
            PAIRCOL()
            q->b4 = -1;
            q->b3 = 1;
            q->st++;
        } else if (q->b4 == 3) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st = 4;
        }
        break;
    case 3:
        PAIRCOL()
        if (q->b4 == 0) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        } else if (q->b4 == 1) {
            HD(T0)
            HD(T1)
            q->b4 = -1;
            q->st = 2;
        }
        break;
    case 4:
        q->a5 -= 4;
        if (0 < q->a5) {
            O->m88(2, q->a5, 1);
            O->m88(3, q->a5, 1);
            O->m88(T0, q->a5, 1);
            O->m88(T1, q->a5, 1);
        } else {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case -1:
    default:
        O->m90(2);
        O->m90(3);
        O->m90(8);
        O->m90(9);
        O->m90(10);
        O->m90(11);
        HD(2)
        HD(3)
        HD(8)
        HD(9)
        HD(10)
        HD(11)
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
class Self39C {
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
class Mot39C {
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

#define MOT ((Mot39C *)(p + 0x4C4))
static inline unsigned char busy39C(char *e) { return *(unsigned char *)(e + 0x2DE7) != 0; }

extern "C" void func_0039C300(char *p) {
    char *q = *(char **)(p + 0x2ED8);
    unsigned char found;
    int i;
    int n;
    char *e;
    MOT->m28(0);
    if (*(unsigned char *)(p + 5) >= 0x28) *(unsigned short *)(p + 0x2DD8) |= 1;
    *(unsigned char *)(p + 0x2DE8) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 0x2DE5) = 0;
        *(unsigned char *)(p + 0x2DE3) = 0;
        if (*(float *)(p + 0x164) <= 100.0f) {
            *(unsigned char *)(p + 5) = 0x14;
        } else {
            play3A1(p, 0x1A);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 1:
        if (!(MOT->m28(0) < 5.0f)) (*(unsigned char *)(p + 5))++;
        break;
    case 2:
        func_003A0CD0(p, 0x888);
        if (both3A1(p) == 1) *(unsigned char *)(p + 5) = 10;
        *(unsigned char *)(p + 5) = 10;
        break;
    case 10:
        play3A1(p, 2);
        (*(unsigned char *)(p + 5))++;
        break;
    case 11:
        if (both3A1(p) == 1) {
            play3A1(p, 3);
            (*(unsigned char *)(p + 5))++;
            ZALL()
            xz3A1(p + 0x70, 0.0f, 3.0f);
            xz3A1(p + 0x2E00, 0.0f, 16.0f);
        }
        break;
    case 12:
        func_003A0CD0(p, 0x800);
        func_003A0F20(p);
        if (both3A1(p) != 0) {
            play3A1(p, 4);
            *(float *)(p + 0x2E30) = 420.0f;
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 13:
        func_003A0CD0(p, 0x800);
        func_003A0F20(p);
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1 || *(float *)(p + 0x164) <= 100.0f) {
            ZALL()
            *(unsigned char *)(p + 5) = 0x14;
        }
        break;
    case 0x14:
        play3A1(p, 0x1A);
        (*(unsigned char *)(p + 5))++;
        break;
    case 0x15:
        if (!(MOT->m28(0) < 5.0f)) (*(unsigned char *)(p + 5))++;
        break;
    case 0x16:
        func_003A0CD0(p, 0x888);
        if (both3A1(p) == 1) *(unsigned char *)(p + 5) = 0x1E;
        break;
    case 0x1E:
        play3A1(p, 0);
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0x2E30) = 300.0f;
    case 0x1F:
        func_003A0CD0(p, 0x100);
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1 || (n = *(unsigned char *)(p + 0x2EE1)) <= 1 || q == 0) {
            *(unsigned char *)(p + 0x2DE7) = 0;
            *(unsigned char *)(p + 0x2DE5) = 1;
            *(unsigned char *)(p + 0x2DE3) = 1;
            func_003A02B0(p, 2);
        } else {
            found = 0;
            for (i = 0; i < n; i++) {
                e = *(char **)(q + 0x264);
                if (e != p && e != 0 && ((*(short *)(e + 0xAC0) == 0x40 && *(unsigned char *)(e + 5) >= 0x1E) || busy39C(e) == 0)) {
                    found = 1;
                    break;
                }
                q += 4;
            }
            if (found) *(unsigned char *)(p + 5) = 0x28;
        }
        break;
    case 0x28:
        *(float *)(p + 0x2E30) = 60.0f * (float)(unsigned int)*(unsigned char *)(p + 0x2EE0);
        (*(unsigned char *)(p + 5))++;
    case 0x29:
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1) {
            *(unsigned char *)(p + 5) = 0x32;
            *(unsigned char *)(p + 0x2DE7) = 0;
            *(unsigned char *)(p + 0x2DE5) = 1;
            *(unsigned char *)(p + 0x2DE3) = 1;
        }
        break;
    case 0x32:
        play3A1(p, 2);
        (*(unsigned char *)(p + 5))++;
        break;
    case 0x33:
        if (both3A1(p) == 1) {
            play3A1(p, 3);
            (*(unsigned char *)(p + 5))++;
            ZALL()
            xz3A1(p + 0x70, 0.0f, 3.0f);
            xz3A1(p + 0x2E00, 0.0f, 16.0f);
        }
        break;
    case 0x34:
        func_003A0CD0(p, 0x800);
        func_003A0F20(p);
        if (both3A1(p) != 0) {
            play3A1(p, 4);
            *(float *)(p + 0x2E30) = 300.0f;
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 0x35:
        func_003A0CD0(p, 0x800);
        func_003A0F20(p);
        if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) == 1 || *(unsigned char *)(p + 0x2DF4) < 2) {
            func_00394EE0(p);
            (*(unsigned char *)(p + 5))++;
        } else if (*(unsigned char *)(p + 0x2DF4) < 4) {
            func_003A02B0(p, 0x41);
        }
        break;
    case 0x36:
        func_003A0F20(p);
        func_00395090(p);
        if (!(MOT->m28(0) < 20.0f)) {
            xz3A1(p + 0x70, 0.0f, -0.75f);
            xz3A1(p + 0x2E00, 0.0f, 0.0f);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 0x37:
        func_003A0F20(p);
        func_00395090(p);
        if (both3A1(p) == 1) {
            ZALL()
            func_003A02B0(p, 2);
        }
        break;
    }
}
