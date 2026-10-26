#include "game/mt_rand.h"
/* Emits two effects for every active entry pair (sub-object at +0x130 gives the rate). */
class Sub130 {
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
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
    virtual void d31();
    virtual int m88();
};

extern "C" int func_0024E800(char *);

class ObjM74 {
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
    virtual void m74(float);
};

extern "C" int func_002A4A40(char *);

extern "C" float D_00561DA0[][3];

extern "C" void func_002965E0(char *, int);

extern "C" void func_0029FD40(char *);

extern "C" {
void func_0029C940(char *p) {
    extern Sub130 *func_002792A0(char *);
    int k;
    *(float *)(p + 0x9644) = *(float *)(p + 0x9644) + *(float *)(p + 0x10);
    k = func_002A4A40(p);
    if (!(*(float *)(p + 0x9644) <= 100.0f / ((float *)D_00561DA0[k])[*(int *)(p + 0x8928)])) {
        ((ObjM74 *)(char *)func_002792A0(p + 0x1D00))->m74(277.0f);
        ((ObjM74 *)(char *)func_002792A0(p + 0x2900))->m74(277.0f);
        ((ObjM74 *)(char *)func_002792A0(p + 0x2F00))->m74(277.0f);
        ((ObjM74 *)(char *)func_002792A0(p + 0x3500))->m74(277.0f);
        *(unsigned char *)(p + 5) = 0x20;
    }
    if (func_0024E800(p + 0x8980) != 0 || *(unsigned char *)(p + 0x8922) == 0) {
        func_002965E0(p, 0xFFFF);
        func_0029FD40(p);
        *(int *)(p + 0xAA9C) = 0;
        *(unsigned char *)(p + 0xA563) = 0;
    }
}
}

extern "C" char D_01CAFF0C[];

extern "C" int D_00561ECC[];

extern "C" void func_002A4910(char *, char *, char *, char *);

class ObjF1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

class Sub98 {
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
    virtual void m98(int);
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

static inline char *up(char *q, int off) {
    if (q != 0) {
        q += off;
    }
    return q;
}

extern "C" void func_002A4810(char *p, int a, int b, int c, int d) {
    *(int *)(p + 0x134) = a;
    *(int *)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    *(float *)(p + 0x144) = cur_f1c();
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0xAA2C) = 0;
    *(int *)(p + 0xAB78) = 0;
    {
        char *b = up(p, 0x40);
        char *a = up(p, 0xD0);
        func_002A4910(p, p + 0x8930, a, b);
    }
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    ((Sub98 *)(p + 0x130))->m98(D_00561ECC[0]);
}

struct M64 { int w[16]; };

class SubD0 {
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
    virtual void mD0();
};

extern "C" void func_002A0140(char *p) {
    M64 m = *(M64 *)(p + 0x9BB0);
    ((SubD0 *)(p + 0x1D00))->mCC((char *)&m);
    ((SubD0 *)(p + 0x2900))->mCC((char *)&m);
    ((SubD0 *)(p + 0x2F00))->mCC((char *)&m);
    ((SubD0 *)(p + 0x3500))->mCC((char *)&m);
    ((SubD0 *)(p + 0x2300))->mCC((char *)&m);
    ((SubD0 *)(p + 0x3B00))->mCC((char *)&m);
    ((SubD0 *)(p + 0x4100))->mCC((char *)&m);
    ((SubD0 *)(p + 0x4700))->mCC((char *)&m);
    ((SubD0 *)(p + 0x7100))->mCC(*(char **)(*(char **)(p + 0x1BDC) + 0x104));
    ((SubD0 *)(p + 0x7700))->mCC(*(char **)(*(char **)(p + 0x1BF0) + 0x104));
    ((SubD0 *)(p + 0x7D00))->mCC(*(char **)(*(char **)(p + 0x1C04) + 0x104));
    ((SubD0 *)(p + 0x6B00))->mCC((char *)&m);
    ((SubD0 *)(p + 0x4D00))->mCC((char *)&m);
    ((SubD0 *)(p + 0x5300))->mCC((char *)&m);
    ((SubD0 *)(p + 0x5900))->mCC((char *)&m);
    ((SubD0 *)(p + 0x5F00))->mCC((char *)&m);
    ((SubD0 *)(p + 0x6500))->mCC((char *)&m);
}

extern "C" float D_005602E4[];

extern "C" float D_005602E8[];

extern "C" float D_005602EC[];

class Obj7C {
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
    virtual float m7C();
};

extern "C" int func_002A4A40(char *p) {
    int r;
    float f = ((Obj7C *)(p + 0x130))->m7C();
    if (f < D_005602E4[0]) {
        r = 0;
    } else if (D_005602E4[0] <= f && f < D_005602E8[0]) {
        r = 1;
    } else if (D_005602E8[0] <= f && f < D_005602EC[0]) {
        r = 2;
    } else {
        r = 3;
    }
    return r;
}

extern "C" void func_0029DCE0(char *, int);

class Obj17C {
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
    virtual void m17C();
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
    virtual void m1F0(int, int);
};

extern "C" {
void func_00296070(Obj17C *o) {
    extern char *func_00207480(int, int, int, int);
    extern void func_0034BA60(int, char *, int, int, int);
    char *p = (char *)o;
    float v[4];
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    if (*(unsigned short *)(p + 0x8952) == 1) {
        o->m1F0(*(int *)(p + 0x148), *(int *)(p + 0x11C));
        func_0029DCE0(p, 0xE);
        func_00207480(3, 0x2B3, (int)(p + 0x9BB0), 0x10);
    } else {
        v[0] = *(float *)(p + 0x9BE0);
        v[1] = *(float *)(p + 0x9BE4);
        v[2] = *(float *)(p + 0x9BE8);
        v[3] = 1.0f;
        func_0034BA60(0xC, (char *)v, *(signed char *)(p + 0x46), 0, 1);
    }
}
}

extern "C" int func_0034BBE0(int, char *);

typedef struct { int n; float v[3]; } e16t;

extern "C" e16t D_0055E450[][5];

extern "C" float func_002A41B0(char *p) {
    float buf[5];
    int i;
    int k;
    for (i = 0; i < 5; i++) {
        buf[i] = D_0055E450[func_002A4A40(p)][i].v[*(int *)(p + 0x8928)];
    }
    k = func_0034BBE0(5, (char *)buf);
    return (float)D_0055E450[func_002A4A40(p)][k].n;
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

extern "C" void func_00105300(char *, char *);

extern "C" char *func_00279290(char *);

extern "C" void func_001FE400(float, char *, char *, char *);

class V29E {
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
    virtual int nB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void mC8(char *);
};

static inline char *at29E(char *o, int i) {
    if (*(unsigned char *)(o + 0xAC) != 0 && 0 <= i && i < *(int *)(o + 0x10)) return ((char **)*(char **)(o + 0x14))[i];
    return 0;
}

extern "C" {
void func_0029E0D0(char *p) {
    extern char *func_002792A0(char *);
    int i;
    int k;
    int n;
    char *o;
    ((V29E *)(p + 0x1D00))->mC8(p + 0x9BB0);
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0x8430) == 0) {
            ((V29E *)(p + i * 0x600 + 0x2900))->mC8(*(char **)(*(char **)(p + *(unsigned char *)(p + i + 0xA8F8) * 4 + 0x1AF0) + 0x104));
        } else {
            func_001FE400(*(float *)(p + i * 4 + 0x8914), func_002792A0(p + i * 0x600 + 0x2900), *(char **)(*(char **)(p + *(unsigned char *)(p + i + 0xA8F8) * 4 + 0x1AF0) + 0x104), p + i * 0x194 + 0x8458);
        }
    }
    ((V29E *)(p + 0x6B00))->mC8(*(char **)(*(char **)(p + 0x1B30) + 0x104));
    o = func_002792A0(p + 0x1D00);
    n = ((V29E *)o)->nB4();
    for (i = 0; i < n; i++) {
        func_00105300(*(char **)(func_00279290(p + 0x2300) + 0x108) + i * 0x40, *(char **)(at29E(o, i) + 0x104));
    }
    for (k = 0; k < 3; k++) {
        o = func_002792A0(p + k * 0x600 + 0x2900);
        n = ((V29E *)o)->nB4();
        for (i = 0; i < n; i++) {
            func_00105300(*(char **)(func_00279290(p + k * 0x600 + 0x3B00) + 0x108) + i * 0x40, *(char **)(at29E(o, i) + 0x104));
        }
    }
}
}

struct M207 { float m[16]; };

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_0024E7B0(char *, int, int);

extern "C" int D_005BE09C;

extern "C" void func_001ACC30(int, int, int, int, int);

class Snd29C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void m1C(unsigned int, int, int);
    virtual void m20(unsigned int, int, int);
    virtual void m24(int, int);
    virtual void m28(int, int, int);
    virtual int m2C();
};

extern "C" Snd29C *D_005BC1A8;

extern "C" {
void func_0029CD10(char *p) {
    extern void func_0034BA60(int, char *, signed char, int, int);
    char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
    float v[4] __attribute__((aligned(16)));
    switch ((unsigned char)func_0024E780(p + 0x8980, 0, 0)) {
    case 1:
        func_0024E7B0(p + 0x8980, 0, 0);
        break;
    case 2:
        func_0024E7B0(p + 0x8980, 0, 0);
        func_00207480(3, 0xB4, (M207 *)(p + 0x9BB0), 0x10);
        func_001ACC30(D_005BE09C, 3, 100, 0x50, 0);
        D_005BC1A8->m20(0x80808080, 4, 0xFFFFF1);
        *(unsigned char *)(p + 0xA562) = 1;
        break;
    case 3: case 5:
        D_005BC1A8->m1C(0x80808080, 4, 0xFFFFF1);
        func_0024E7B0(p + 0x8980, 0, 0);
        v[0] = *(float *)(p + 0x9BE0);
        v[1] = *(float *)(p + 0x9BE4);
        v[2] = *(float *)(p + 0x9BE8);
        v[3] = 1.0f;
        func_0034BA60(0x26, (char *)v, *(signed char *)(p + 0x46), 0, 1);
        break;
    case 6: case 8:
        func_0024E7B0(p + 0x8980, 0, 0);
        v[0] = *(float *)(p + 0x9BE0);
        v[1] = *(float *)(p + 0x9BE4);
        v[2] = *(float *)(p + 0x9BE8);
        v[3] = 1.0f;
        func_0034BA60(0x1D, (char *)v, *(signed char *)(p + 0x46), 0, 1);
        break;
    case 0: case 4: case 7:
        break;
    }
    if (func_0024E800(p + 0x8980)) {
        *(unsigned char *)(p + 0x997C) = 0;
        *(unsigned char *)(p + 0x99EC) = 0;
        *(unsigned char *)(p + 0x9A5C) = 0;
        *(unsigned char *)(p + 0x9ACC) = 0;
        *(unsigned char *)(p + 0x9B3C) = 0;
        *(unsigned char *)(p + 0xA992) = 0;
        func_002965E0(p, 0xFFFF);
    }
}
}

extern "C" unsigned char D_01CAFF3C[];

extern "C" int func_003215A0(char *);

class V2A3 {
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
    virtual float m68();
};

#define CD2A3(p, o) ((1 >= (unsigned int)*((signed char *)(o) + 5) || *((signed char *)(o) + 5) == 2) && (*(signed char *)(*(char **)((p) + 0x140) + 5) == 3 || *(signed char *)(*(char **)((p) + 0x140) + 5) == 4))

extern "C" float func_002A3670(char *p, char *s, V2A3 *o) {
    float d;
    float c;
    d = *(float *)(s + 4);
    c = *(float *)(s + 8);
    if (c > 100.0f * (2.3283064e-10f * mt_rand())) d *= 1.1f;
    d *= o->m68();
    if (func_003215A0(p + 0x130) && CD2A3(p, o)) d *= 0.3f;
    switch (D_01CAFF3C[0]) {
    case 0:
        if (CD2A3(p, o)) d *= 2.0f;
        break;
    case 1:
        if (CD2A3(p, o)) d = d;
        break;
    case 2:
        if (CD2A3(p, o)) d *= 0.9f;
        break;
    case 3:
        if (CD2A3(p, o)) d *= 0.7f;
        break;
    case 4:
        if (CD2A3(p, o)) d *= 0.5f;
        break;
    }
    return d;
}

extern "C" {
int func_00294FA0(char *, int);
}

extern "C" {
int func_00296140(char *, int);
}

extern "C" {
int func_00296400(char *, int);
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
int func_00292360(char *p0) {
    int v0;
    int v1;
    int tmp0;
    v0 = *(unsigned char *)(p0 + 4);
    tmp0 = 3;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            v1 = ((V130_1_ii *)p0)->m(v0);
            break;
        case 1:
            v1 = func_00294FA0(p0, v0);
            break;
        case 2:
            v1 = func_00296140(p0, v0);
            break;
        }
    } else {
        v1 = func_00296400(p0, v0);
    }
    return v1;
}
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_002E2BD0(...);
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
int func_0029F490(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((V24_0_v *)(v0 + 0x8300))->m();
    ((V24_0_v *)(v0 + 0x8320))->m();
    ((V24_0_v *)(v0 + 0x8340))->m();
    ((VD0_0_v *)(v0 + 7424))->m();
    ((VD0_0_v *)(v0 + 10496))->m();
    ((VD0_0_v *)(v0 + 12032))->m();
    ((VD0_0_v *)(v0 + 13568))->m();
    ((VD0_0_v *)(v0 + 27392))->m();
    ((VD0_0_v *)(v0 + 19712))->m();
    ((VD0_0_v *)(v0 + 21248))->m();
    ((VD0_0_v *)(v0 + 22784))->m();
    ((VD0_0_v *)(v0 + 24320))->m();
    ((VD0_0_v *)(v0 + 25856))->m();
    ((VD0_0_v *)(v0 + 28928))->m();
    ((VD0_0_v *)(v0 + 30464))->m();
    ((VD0_0_v *)(v0 + 32000))->m();
    ((VD0_0_v *)(v0 + 8960))->m();
    ((VD0_0_v *)(v0 + 15104))->m();
    ((VD0_0_v *)(v0 + 16640))->m();
    ((VD0_0_v *)(v0 + 18176))->m();
    func_002E2BD0((v0 + 0x9930));
    func_002E2BD0((v0 + 0x99a0));
    func_002E2BD0((v0 + 0x9a10));
    func_002E2BD0((v0 + 0x9a80));
    v1 = func_002E2BD0((v0 + 0x9af0));
    v2 = 0;
    if ((0 < *(int *)(v0 + 468))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 472));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 468)));
    }
    return v1;
}
}
