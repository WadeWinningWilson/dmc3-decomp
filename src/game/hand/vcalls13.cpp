/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls12. */

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
#define VC(o) (**(void ***)(p + (o)))

extern "C" void func_00394900(char *p) {
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
extern "C" char D_01CAFF0C[];
extern "C" G3A7 *D_005BC1A8;
extern "C" void func_002F2D30(char *, char *);
extern "C" void func_0034BA60(int, char *, signed char, int, int);
extern "C" char *func_00207480(int, int, int, int);
extern "C" unsigned char func_0024E800(char *);

#define L(o) ((L3A7 *)(p + (o)))
#define G (*(char **)D_01CAFF0C)

extern "C" void func_003A7690(char *p) {
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
