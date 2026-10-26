/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls17. */

class W3FE {
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
    virtual int m2C(int, int);
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
    virtual void mB0(int, char *);
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void mD4(int);
};

struct C3FE { unsigned char c[4]; };

extern "C" char D_01CAFF0C[];
extern "C" float D_005BCD30;
extern "C" float D_005BCFD4;
extern "C" float D_005BCFD8;
extern "C" float D_005BCFDC;
extern "C" float D_005BCFE0;
extern "C" char D_00564950[];
extern "C" float func_0011DBE0(float, float);
extern "C" void func_001AD140(char *);
extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" void func_0028C3A0(char *, int, int, char *);
extern "C" void func_002E2800(char *, int, int);

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")
#define G (*(char **)D_01CAFF0C)
#define W(o) ((W3FE *)(p + (o)))
static inline char *ent3FE(char *l, int i) { char *r; if (!(i < *(int *)(l + 0x30))) r = 0; else r = *(char **)l + i * 0x80; return r; }

static inline void set3FE(char *e, float x, float y, float z, float w) { *(float *)(e + 0x20) = x; *(float *)(e + 0x24) = y; *(float *)(e + 0x28) = z; *(float *)(e + 0x2C) = w; VCOPY(e, e + 0x20); VCOPY(e + 0x10, e + 0x20); }

extern "C" void func_003FE9D0(char *p) {
    float d[4] __attribute__((aligned(16)));
    C3FE c;
    int i;
    char *e;
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 6) = 0;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(int *)(p + 0x130C) = *(int *)(*(char **)(p + 0x1314) + 0x38F8);
    if (*(unsigned int *)(p + 0x130C) >= 4) *(int *)(p + 0x130C) = 3;
    *(int *)(p + 0xC) |= 0x10;
    *(float *)(p + 0x1304) = *(float *)(p + 0x54);
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(short *)(p + 0x1310) = 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%2)" : : "r"(*(char **)(p + 0x1314) + 0x50), "r"(*(char **)(G + 0xC) + 0x50), "r"(d) : "memory");
    *(short *)(p + 0x90) = 0.5f + 65536.0f * func_0011DBE0(d[0], d[2]) / 6.283185f;
    *(float *)(p + 0x12D8) = D_005BCD30;
    if ((unsigned char)W(0x280)->m2C(*(int *)(p + 0x270), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)W(0x6C0)->m2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    W(0x6C0)->mB0(*(int *)(p + 0x278), p + 0x12DC);
    if ((unsigned char)W(0xB00)->m2C(*(int *)(p + 0x274), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    W(0xB00)->mD4(1);
    *(unsigned char *)(p + 0x1160) = 6;
    *(unsigned char *)(p + 0x1161) = 0;
    *(short *)(p + 0x1162) = 0;
    *(unsigned char *)(p + 0x1164) = 5;
    *(unsigned char *)(p + 0x1165) = 0;
    *(short *)(p + 0x1166) = 1;
    *(unsigned char *)(p + 0x1170) = 3;
    *(float *)(p + 0x1180) = 0.0f;
    *(float *)(p + 0x1184) = 250.0f;
    *(float *)(p + 0x1188) = 0.0f;
    *(float *)(p + 0x1198) = 80.0f;
    *(float *)(p + 0x119C) = 300.0f;
    *(float *)(p + 0x11A0) = 80.0f;
    *(float *)(p + 0x118C) = 0.0f;
    *(float *)(p + 0x1190) = 0.0f;
    *(float *)(p + 0x1194) = 0.0f;
    *(unsigned char *)(p + 0x11C0) = 2;
    *(float *)(p + 0x11D0) = 0.0f;
    *(float *)(p + 0x11D4) = 60.0f;
    *(float *)(p + 0x11D8) = 0.0f;
    *(float *)(p + 0x11DC) = 1.0f;
    *(float *)(p + 0x11E0) = 150.0f;
    func_0028C200(p + 0xF40, p + 0x1160, p + 0x1170, 4, D_00564950, p, 0);
    func_0028C8E0(p + 0xF40, 0xB);
    func_0028C910(p + 0xF40);
    *(unsigned char *)(p + 0xF43) = 0xB;
    *(int *)(p + 0x1018) = 0x1D44F;
    func_0028C3A0(p + 0xF40, 0, -1, p + 0x1F0);
    func_0028C3A0(p + 0xF40, 1, -1, p + 0x1F0);
    c.c[3] = 0;
    c.c[0] = 3;
    c.c[2] = 8;
    if ((e = *(char **)(p + 0xFBC)) != 0) {
        e[0xC4] = c.c[0];
        e[0xC5] = c.c[1];
        e[0xC6] = c.c[2];
        e[0xC7] = c.c[3];
    }
    if ((e = *(char **)(p + 0xFC0)) != 0) {
        e[0xC4] = c.c[0];
        e[0xC5] = c.c[1];
        e[0xC6] = c.c[2];
        e[0xC7] = c.c[3];
    }
    *(unsigned char *)(p + 0x12D1) = 0;
    *(unsigned char *)(p + 0x12D2) = 0;
    *(unsigned char *)(p + 0x12D4) = 0;
    *(unsigned char *)(p + 0x12D3) = 1;
    *(unsigned char *)(p + 0x12D5) = 0;
    func_002E2800(p + 0x1260, 8, 0x96);
    *(unsigned char *)(ent3FE(p + 0x1260, 0) + 0x78) = 1;
    *(unsigned char *)(ent3FE(p + 0x1260, 7) + 0x78) = 1;
    for (i = 1; i < 8; i++) *(int *)(ent3FE(p + 0x1260, i) + 0x7C) = i - 1;
    for (i = 0; i < 8; i++) {
        set3FE(ent3FE(p + 0x1260, i), *(float *)(p + 0x50), 790.0f + *(float *)(p + 0x54), *(float *)(p + 0x58), 1.0f);
    }
    *(unsigned char *)(p + 0x12D0) = 1;
    *(float *)(p + 0x1268) = D_005BCFD4;
    *(float *)(p + 0x126C) = D_005BCFD8;
    *(float *)(p + 0x1274) = D_005BCFDC;
    *(float *)(p + 0x1270) = D_005BCFE0;
}

class W48C {
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
    virtual int m2C(char *, char *);
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
    virtual void mD4(int);
};

typedef union { float f[4]; int i[4]; } U48C __attribute__((aligned(16)));
extern "C" U48C D_00586700;
extern "C" float D_005BDD18;
extern "C" float D_005BDD1C;
extern "C" float D_005BDD20;
extern "C" float D_005BDD24;
extern "C" float D_005BDD28;
extern "C" char D_00577780[];
extern "C" void func_001AD140(char *);
extern "C" void func_00133010(char *, char *, float *);
extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" void func_0028C3A0(char *, int, int, char *);
extern "C" void func_002E2800(char *, int, int);

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")
#define W(o) ((W48C *)(p + (o)))
#define H (*(char **)(p + 0x480))
static inline char *ent48C(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }
static inline char *gch48C(char *h, int i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent48C(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }
static inline char *lst48C(char *l, int i) { char *r; if (!(i < *(int *)(l + 0x30))) r = 0; else r = *(char **)l + i * 0x80; return r; }
static inline void set48C(char *e, float x, float y, float z, float w) { *(float *)(e + 0x20) = x; *(float *)(e + 0x24) = y; *(float *)(e + 0x28) = z; *(float *)(e + 0x2C) = w; VCOPY(e, e + 0x20); VCOPY(e + 0x10, e + 0x20); }

extern "C" void func_0048C9B0(char *p) {
    U48C t;
    int i;
    char *a;
    char *b;
    float x;
    *(unsigned char *)(p + 4) = 1;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    b = gch48C(H, 0x13);
    a = gch48C(H, 0x1A);
    if ((unsigned char)W(0x4C0)->m2C(a, b) == 0) {
        func_001AD140(p);
        return;
    }
    b = gch48C(H, 0x1D);
    a = gch48C(H, 0x1E);
    if ((unsigned char)W(0xAC0)->m2C(a, b) == 0) {
        func_001AD140(p);
        return;
    }
    W(0xAC0)->mD4(1);
    t = D_00586700;
    func_00133010(p + 0x150, p + 0xF0, t.f);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(unsigned char *)(p + 0x3D0) = 5;
    *(unsigned char *)(p + 0x3D1) = 0;
    *(short *)(p + 0x3D2) = 0;
    *(unsigned char *)(p + 0x3D4) = 2;
    *(unsigned char *)(p + 0x3D5) = 0;
    *(short *)(p + 0x3D6) = 1;
    *(unsigned char *)(p + 0x3E0) = 2;
    *(float *)(p + 0x3F0) = 0.0f;
    *(float *)(p + 0x3F4) = 0.0f;
    *(float *)(p + 0x3F8) = 30.0f;
    *(float *)(p + 0x3FC) = 1.0f;
    *(float *)(p + 0x400) = 18.0f;
    *(unsigned char *)(p + 0x430) = 2;
    *(float *)(p + 0x440) = 0.0f;
    *(float *)(p + 0x444) = 0.0f;
    *(float *)(p + 0x448) = 30.0f;
    *(float *)(p + 0x44C) = 1.0f;
    *(float *)(p + 0x450) = 30.0f;
    func_0028C200(p + 0x1B0, p + 0x3D0, p + 0x3E0, 3, D_00577780, p, 0);
    *(int *)(p + 0x288) = 0x30443;
    func_0028C8E0(p + 0x1B0, 1);
    func_0028C910(p + 0x1B0);
    func_0028C3A0(p + 0x1B0, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x1B0, 1, -1, p + 0x150);
    func_002E2800(p + 0x10C0, 5, 0x46);
    *(unsigned char *)(lst48C(p + 0x10C0, 0) + 0x78) = 1;
    *(unsigned char *)(lst48C(p + 0x10C0, 4) + 0x78) = 1;
    for (i = 1; i < 5; i++) *(int *)(lst48C(p + 0x10C0, i) + 0x7C) = i - 1;
    for (i = 0; i < 5; i++) set48C(lst48C(p + 0x10C0, i), *(float *)(p + 0x50), *(float *)(p + 0x54), *(float *)(p + 0x58), 1.0f);
    *(float *)(p + 0x10C8) = D_005BDD18;
    *(float *)(p + 0x10CC) = D_005BDD1C;
    *(float *)(p + 0x10D4) = D_005BDD20;
    *(float *)(p + 0x10D0) = D_005BDD24;
    x = D_005BDD28;
    *(unsigned char *)(p + 0x110C) = 1;
    *(float *)(p + 0x1108) = x;
}

typedef struct { int w[4]; } __attribute__((aligned(16))) Q;
class V14_2_iiv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(int, int);
};
extern "C" {
extern char D_005BBDD8;
extern char * D_005BC1A8;
extern int D_005BE0FC;
extern char D_01CAF51F[];
extern char D_01DFABA0[];
int func_00331300(char *);
}

extern "C" int func_0022E8F0(char *p0) {
    int v0;
    char *tmp3;
    int tmp4;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 20) = D_005BE0FC;
    *(int *)(p0 + 28) = *(int *)((&D_005BBDD8 + (*(int *)(p0 + 20) << 2)) + 0);
    D_005BE0FC = (D_005BE0FC + 1) % 2;
    tmp3 = D_005BC1A8;
    ((V14_2_iiv *)tmp3)->m(0, 1);
    tmp4 = func_00331300(D_01DFABA0);
    *(char *)D_01CAF51F = 2;
    return tmp4;
}

class O28D {
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
extern "C" {
void func_00131700(char *, char *, char *);
void func_00105230(char *, char *, char *);
void func_001318E0(char *, char *, char *);
void func_00105300(char *, char *);
int func_002D9F00(char *, unsigned char);
void func_00104C00(char *, int, char *);
}

extern "C" void func_0028D610(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        {
            unsigned char k = *(unsigned char *)(p + 0xD4);
            func_00104C00(p + 0x130, func_002D9F00(*(char **)(p + 0xE0), k), p + 0x890);
        }
        ((O28D *)(p + 0x180))->mC8(p + 0x130);
        break;
    case 1:
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x850) : "memory");
        func_00131700(p + 0x850, p + 0x850, p + 0x830);
        func_00105230(p + 0x850, p + 0x850, p + 0x820);
        func_001318E0(p + 0x850, p + 0x850, p + 0x840);
        {
            char *m = p + 0x850;
            func_00105300(p + 0x130, m);
        }
        break;
    }
}
