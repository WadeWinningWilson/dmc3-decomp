extern "C" {
unsigned char func_0024E800(char *);
}

extern "C" {
void func_0024DA80(char *, int, int);
}

extern "C" {
void func_003A0CD0(char *, short);
}

extern "C" {
void func_003A0F20(char *);
}

extern "C" {
unsigned char func_003A2080(char *, char *, float, float);
}

extern "C" {
unsigned char func_0039DDF0(char *, float);
}

extern "C" {
static inline void play3A1(char *p, int s) { *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC); *(short *)(p + 0x2DDC) = s; func_0024DA80(p + 0x29D0, 0, s); func_0024DA80(p + 0x2AA0, 0, s); }
}

extern "C" {
static inline void xz3A1(char *v, float x, float z) { *(float *)(v + 0) = x; *(float *)(v + 4) = 0.0f; *(float *)(v + 8) = z; *(float *)(v + 0xC) = 0.0f; }
}

extern "C" {
static inline unsigned char both3A1(char *p) { unsigned char r; if (func_0024E800(p + 0x29D0) == 1 && func_0024E800(p + 0x2AA0) == 1) r = 1; else r = 0; return r; }
}

extern "C" {
unsigned char func_003A21D0(char *, int);
}

extern "C" {
void func_00394EE0(char *);
}

extern "C" {
void func_00395090(char *);
}

class Self394 {
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

class Mot394 {
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

extern "C" {
void func_00394900(char *p) {
    void func_003A02B0(char *, int);
    *(unsigned char *)(p + 0x2DE8) = 0;
    *(unsigned short *)(p + 0x2DD8) |= 2;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        play3A1(p, 2);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        break;
    case 1:
        if (both3A1(p) == 1) {
            play3A1(p, 3);
            (*(unsigned char *)(p + 5))++;
            ZALL()
            xz3A1(p + 0x70, 0.0f, 3.0f);
            xz3A1(p + 0x2E00, 0.0f, 16.0f);
        }
        break;
    case 2:
        func_003A0CD0(p, 0x800);
        func_003A0F20(p);
        if (both3A1(p) != 0) {
            play3A1(p, 4);
            *(float *)(p + 0x2E30) = 5.0f;
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        func_003A0CD0(p, 0x800);
        func_003A0F20(p);
        if (((Self394 *)p)->m1C0() == 1) {
            play3A1(p, 5);
            xz3A1(p + 0x70, 0.0f, -0.75f);
            xz3A1(p + 0x2E00, 0.0f, 0.0f);
            *(unsigned char *)(p + 5) = 5;
        } else if (func_003A2080(p, p + 0x2E30, 1.0f, 0.0f) != 0) {
            if (func_003A21D0(p, 2) == 0 && *(unsigned char *)(p + 0x2F3C) != 2) {
                play3A1(p, 5);
                xz3A1(p + 0x70, 0.0f, -0.75f);
                xz3A1(p + 0x2E00, 0.0f, 0.0f);
                *(unsigned char *)(p + 5) = 6;
            } else if (*(unsigned char *)(p + 0x2DF4) < 2) {
                func_00394EE0(p);
                *(unsigned char *)(p + 5) = 10;
            }
        }
        break;
    case 5:
    case 6:
        func_003A0F20(p);
        if (func_0039DDF0(p, 25.0f) == 1) {
            ZALL()
        } else if (both3A1(p) == 1) {
            ZALL()
            if (*(unsigned char *)(p + 5) == 5 && *(unsigned char *)(p + 0x2DF4) >= 2 && (*(unsigned char *)(p + 0x2DF5) & 1) == 0) {
                func_003A02B0(p, 0x11);
            } else {
                func_003A02B0(p, 2);
            }
        }
        break;
    case 10:
        *(unsigned short *)(p + 0x2DD8) |= 1;
        func_003A0F20(p);
        func_00395090(p);
        if (!(((Mot394 *)(p + 0x4C4))->m28(0) < 20.0f)) {
            xz3A1(p + 0x70, 0.0f, -0.75f);
            xz3A1(p + 0x2E00, 0.0f, 0.0f);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 11:
        func_003A0F20(p);
        func_00395090(p);
        if (both3A1(p) == 1) {
            ZALL()
            func_003A02B0(p, 2);
        }
        break;
    }
}
}

extern "C" {
void func_0039D800(char *);
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

extern "C" {
void func_00396F90(char *p) {
    void func_003A02B0(char *, int);
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
}

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

extern "C" void func_003A07B0(char *);

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

extern "C" {
void func_0039B230(char *p, int w) {
    void func_003A02B0(char *, int);
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
}

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

#define MOT ((Mot39C *)(p + 0x4C4))

static inline unsigned char busy39C(char *e) { return *(unsigned char *)(e + 0x2DE7) != 0; }

extern "C" {
void func_0039C300(char *p) {
    void func_003A02B0(char *, int);
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
}

extern "C" char D_01CAFF0C[];

extern "C" void func_001A5C30(char *);

extern "C" void func_002F2D30(char *, char *);

extern "C" char *D_005BDC34;

extern "C" char *D_005BDC38;

extern "C" char *D_005BDC3C;

class O3A0 {
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
    virtual float m1E0(unsigned int);
};

extern "C" {
void func_003A02D0(char *p) {
    extern void func_003A02B0(char *, int);
    char *g;
    int s;
    *(int *)(p + 0x2DCC) = 0;
    s = *(int *)(p + 0x2ED8);
    switch (*(unsigned char *)(p + 0x2DD5)) {
    case 1:
        g = D_005BDC38;
        break;
    case 2:
        g = D_005BDC3C;
        break;
    default:
        g = D_005BDC34;
        break;
    }
    *(float *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x104) = *(float *)(g + 0x44);
    *(int *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x100) = (int)((O3A0 *)p)->m1E0((unsigned int)*(float *)(g + 0x2C));
    if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
        func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
    }
    *(unsigned char *)(p + 0x2DE7) = 0;
    func_001A5C30(func_00279290(p + 0x4C0));
    func_001A5C30(func_00279290(p + 0x1980));
    func_001A5C30(func_00279290(p + 0x1F80));
    func_001A5C30(func_00279290(p + 0xD80));
    func_001A5C30(func_00279290(p + 0x1380));
    if (s == 0) {
        if (!(*(unsigned char *)(p + 0x2F3D) > 0)) *(unsigned char *)(p + 0x2F3D) = 1;
        func_003A02B0(p, 0x27);
    } else {
        if (!(*(unsigned char *)(p + 0x2F3D) > 0)) *(unsigned char *)(p + 0x2F3D) = 1;
        func_003A02B0(p, 0x27);
    }
}
}

extern "C" int func_0021CAD0(char *);

extern "C" void func_003A0EF0(char *);

static inline bool on2DE5(char *p) { return *(unsigned char *)(p + 0x2DE5) == 1; }

static inline bool f8_2DD8(char *p) { return (*(unsigned short *)(p + 0x2DD8) & 8) != 0; }

static inline bool ne2EC3(char *p, short c) { return *(unsigned char *)(p + 0x2EC3) != c; }

typedef struct { short h[3]; } Tab39F;
extern "C" Tab39F D_005BCCD0;

extern "C" bool func_0039FF60(char *p) {
    Tab39F tab = D_005BCCD0;
    bool r = false;
    unsigned char c;
    if (*(unsigned char *)(p + 0x2F3C) == 2) return false;
    if (on2DE5(p) == false) return false;
    if (f8_2DD8(p) == true) return false;
    c = func_0021CAD0(*(char **)(*(char **)D_01CAFF0C + 0xC));
    if (c == 0) {
        *(unsigned char *)(p + 0x2EC3) = 0;
        *(unsigned char *)(p + 0x2EC4) = 0;
        return false;
    }
    if (ne2EC3(p, c) == false) return false;
    func_003A0EF0(p);
    switch (c) {
    case 4:
    case 0x5C:
        if (*(unsigned char *)(p + 0x2DF4) < 2 && !(*(unsigned char *)(p + 0x2DF5) & 1)) r = true;
        break;
    case 0x26:
    case 0x27:
        if (*(unsigned char *)(p + 0x2DF4) < 3 && !(*(unsigned char *)(p + 0x2DF5) & 1)) r = true;
        break;
    case 7:
    case 8:
        if (*(unsigned char *)(p + 0x2DF4) < 3 && !(*(unsigned char *)(p + 0x2DF5) & 1) && *(unsigned short *)(p + 0x2DEE) < 0x8001) r = true;
        break;
    default:
        switch (*(unsigned char *)(p + 0x2EC2)) {
        case 0:
            if (*(unsigned char *)(p + 0x2DF4) < 2 && !(*(unsigned char *)(p + 0x2DF5) & 1) && *(unsigned short *)(p + 0x2DEE) < 0x8001) r = true;
            break;
        case 1:
            if (!(*(unsigned char *)(p + 0x2DF5) & 1) && *(unsigned short *)(p + 0x2DEE) < 0x8001) r = true;
            break;
        }
        break;
    }
    if (r == true) *(short *)(p + 0x2DDA) = tab.h[*(unsigned char *)(p + 0x2F3C)];
    return r;
}
