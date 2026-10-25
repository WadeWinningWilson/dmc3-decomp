/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls16. */

class O5023 {
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

struct S5023 {
    char b0;
    signed char st;
    char b2;
    unsigned char b3;
    signed char b4;
    unsigned char a5;
};

extern "C" unsigned char D_005BE008[2];
extern "C" unsigned char D_005BE009[2];
extern "C" char *func_00279290(char *);
extern "C" void func_001A1E70(char *, int);
extern "C" void func_001A2000(char *, int);
extern "C" void func_001A2D70(char *, int, unsigned int);
extern "C" void func_005012F0(char *, S5023 *);

#define O ((O5023 *)(p + 0xCC0))
#define IDX (*(signed char *)(p + 0x13E9))
#define T0 D_005BE008[IDX * 2]
#define T1 D_005BE009[IDX * 2]
#define SH(n) func_001A1E70(func_00279290(p + 0xCC0), n);
#define HD(n) func_001A2000(func_00279290(p + 0xCC0), n);
#define COL(n, c) func_001A2D70(func_00279290(p + 0xCC0), n, c);
#define PAIRCOL()     if (*(signed char *)(p + 0x13EA) != 0) {         COL(T0, 0x80404040)         COL(T1, 0x80C0C0C0)     } else {         COL(T0, 0x80C0C0C0)         COL(T1, 0x80404040)     }

extern "C" void func_005023A0(char *p, S5023 *q) {
    switch (q->st) {
    case 0:
        SH(1)
        SH(2)
        SH(3)
        COL(1, 0x80404040)
        COL(2, 0x80404040)
        COL(3, 0x80404040)
        q->a5 = 0;
        q->b3 = 0;
        q->st++;
    case 1:
        q->a5 += 4;
        if (q->a5 < 0x40) {
            O->m88(1, q->a5, 1);
            O->m88(2, q->a5, 1);
            O->m88(3, q->a5, 1);
        } else {
            O->m90(1);
            O->m90(2);
            O->m90(3);
            q->b3 = 1;
            q->st++;
        }
        break;
    case 2:
        COL(1, 0x80404040)
        COL(2, 0x80404040)
        COL(3, 0x80404040)
        switch (IDX) {
        case 0:
            COL(1, 0x80C0C0C0)
            break;
        case 1:
            COL(2, 0x80C0C0C0)
            break;
        case 2:
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
            O->m88(1, q->a5, 1);
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
        O->m90(1);
        O->m90(2);
        O->m90(3);
        O->m90(6);
        O->m90(7);
        O->m90(8);
        O->m90(9);
        O->m90(10);
        O->m90(11);
        HD(1)
        HD(2)
        HD(3)
        HD(6)
        HD(7)
        HD(8)
        HD(9)
        HD(10)
        HD(11)
        func_005012F0(p, q);
        break;
    }
}

class W3CB {
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
    virtual void mB0(char *, char *);
};

extern "C" int D_005BC8D8;
extern "C" void func_001AD140(char *);
extern "C" char *func_002792A0(char *);
extern "C" void func_00131700(char *, char *, char *);
extern "C" void func_00131760(char *, char *, char *);
extern "C" void func_00105230(char *, char *, char *);
extern "C" void func_001318E0(char *, char *, char *);
extern "C" void func_0028C200(char *, char *, char *, int, int, char *, int);
extern "C" void func_0024D9F0(char *, char *, int, int, char *, char *, char *, char *, char *);
extern "C" void func_0024DA80(char *, int, int);

static inline char *ent3CB(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }
static inline char *gch3CB(char *h, int i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent3CB(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

static inline void mot3CB(char *p, char *a) { func_0024D9F0(p + 0xAE0, a, 0, 1, p + 0x200, p + 0x244, p + 0x194, p + 0x10, p + 0x8C0); func_0024DA80(p + 0xAE0, 1, 6); }
#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")
#define H (*(char **)(p + 0x1F0))
#define V4(o, x, y, z, w) *(float *)(p + (o)) = x; *(float *)(p + (o) + 4) = y; *(float *)(p + (o) + 8) = z; *(float *)(p + (o) + 0xC) = w;

extern "C" int func_003CBE00(char *p) {
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    char *r0;
    char *r1;
    char *r2;
    char *m;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(signed char *)(p + 0x46) = *(signed char *)(p + 0x1B0);
    r0 = gch3CB(H, 0x21);
    r1 = gch3CB(H, 0x20);
    r2 = gch3CB(H, 0x25);
    *(char **)(p + 0x1F8) = r0;
    *(char **)(p + 0x1FC) = r1;
    *(char **)(p + 0x200) = r2;
    *(char **)(p + 0x204) = r2;
    if (((W3CB *)(p + 0x240))->m2C(*(char **)(p + 0x1F8), *(char **)(p + 0x1FC)) == 0) {
        func_001AD140(p);
        return 0;
    }
    ((W3CB *)(p + 0x240))->mB0(*(char **)(p + 0x204), p + 0x194);
    m = func_002792A0(p + 0x240);
    *(unsigned char *)(m + 0x104) = 1;
    V4(0x50, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x60, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x70, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x80, 0.0f, 0.0f, 0.0f, 1.0f)
    *(short *)(p + 0x90) = 0;
    a[0] = -60.9145012f;
    a[1] = 170.018295f;
    a[2] = -72.6899033f;
    a[3] = 1.0f;
    b[0] = 2.96093893f;
    b[1] = -0.251386762f;
    b[2] = 0.462297529f;
    b[3] = 1.0f;
    *(unsigned char *)(p + 0x840) = 0;
    V4(0x850, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x860, 0.0f, 0.0f, 0.0f, 1.0f)
    V4(0x870, 1.0f, 1.0f, 1.0f, 1.0f)
    UNIT(p + 0x880);
    func_00131700(p + 0x880, p + 0x880, p + 0x860);
    func_00105230(p + 0x880, p + 0x880, p + 0x850);
    func_001318E0(p + 0x880, p + 0x880, p + 0x870);
    VCOPY(p + 0x850, a);
    VCOPY(p + 0x860, b);
    UNIT(p + 0x880);
    func_00131760(p + 0x880, p + 0x880, p + 0x860);
    func_00105230(p + 0x880, p + 0x880, p + 0x850);
    func_001318E0(p + 0x880, p + 0x880, p + 0x870);
    func_0028C200(p + 0x8C0, gch3CB(H, 0x27), gch3CB(H, 0x28), 3, D_005BC8D8, p, 0);
    *(float *)(p + 0x9A4) = 1.2f;
    mot3CB(p, gch3CB(H, 0x26));
    *(unsigned char *)(p + 0xCD0) = 0;
    *(int *)(p + 0xD20) = 0;
    return 1;
}

class P30C {
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
    virtual void m118(float, float, float, char *, int);
};

extern "C" int D_005BE098;
extern "C" unsigned char D_005BCA88;
extern "C" unsigned char D_005BCA89;
extern "C" char D_01CAFF0C[];
extern "C" char D_01DFABA0[];
extern "C" char D_00561FE0[];
extern "C" char D_00562020[];
extern "C" void func_00206730(char *);
extern "C" void func_001AD140(char *);
extern "C" unsigned char func_0024E780(char *, int, int);
extern "C" unsigned char func_0030CD40(char *);
extern "C" void func_00195E20(char *, char *);
extern "C" float func_00132470(char *, char *);
extern "C" void func_00330BD0(char *, int, char *, int, int);
extern "C" char *func_002075D0(int, int, char *, int, int);
extern "C" char *func_00279290(char *);
extern "C" void func_001A2180(char *, unsigned int, int);
extern "C" void func_0030CE90(char *);
extern "C" void func_001A29A0(char *);

static inline void set30C(char *m, unsigned int i, unsigned char v) {
    if (i < *(unsigned short *)(m + 0xA8)) *(int *)(*(char **)(m + 0xBC) + i * 0x340 + 0x15C) = v;
}

#define G (*(char **)D_01CAFF0C)
static inline int fl30C(char *o) { int r = 0; if (o != 0) r = *(int *)(o + 8); return r; }
#define FLAGS(o) fl30C(*(char **)(p + (o)))

extern "C" void func_0030C5E0(char *p) {
    int f;
    char *e;
    char *m;
    unsigned char v;
    int i;
    unsigned char c0;
    unsigned char c1;
    P30C *o;
    func_00206730(p + 0xB90);
    if (!(*(float *)(p + 0x144) < 0.0f)) {
        *(float *)(p + 0x144) = *(float *)(p + 0x144) - *(float *)(p + 0x10);
        *(float *)(p + 0x12C) = *(float *)(p + 0x12C) - 1.0f;
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            if (*(char **)(p + 0xD0) == 0) {
                func_001AD140(p);
                return;
            }
            if (func_0024E780(*(char **)(p + 0xB9C), 0, 0) != 1) {
                func_001AD140(p);
                return;
            }
            if (func_0030CD40(p) == 0) {
                func_001AD140(p);
                return;
            }
            func_00195E20((char *)&D_005BE098, p);
            break;
        case 1:
            if (*(unsigned char *)(p + 0xB99) == 0 && func_00132470(*(char **)(G + 0xC) + 0x50, p + 0xB00) < 500.0f) {
                func_00330BD0(D_01DFABA0, 0x2C, p + 0x50, 0xD, 0);
                *(unsigned char *)(p + 0xB99) = 1;
            }
            f = 0;
            if (*(char **)(p + 0x7FC) != 0) f = *(int *)(*(char **)(p + 0x7FC) + 8);
            if (f & 0x40) {
                if (*(char **)(p + 0xD0) != 0) *(unsigned char *)(*(char **)(p + 0xD0) + 0x5AC) = 1;
                func_002075D0(3, 5, p + 0xB10, 3, 0x10);
                func_00330BD0(D_01DFABA0, 0x22, p + 0xB00, 0xD, 0);
                *(unsigned char *)(p + 4) = 2;
                break;
            }
            if (FLAGS(0x800) & 0x30000) {
                if (*(unsigned char *)(p + 0xB98) == 0) {
                    func_002075D0(3, 0x37, p + 0xB10, 3, 0x10);
                } else {
                    func_002075D0(3, 0x35E, p + 0xB10, 3, 0x10);
                }
                *(float *)(p + 0x144) = 25.0f;
                func_00330BD0(D_01DFABA0, 0x22, p + 0xB00, 0xD, 0);
                *(unsigned char *)(p + 5) = 2;
                if (*(char **)(p + 0xB90) != 0) func_001AD140(*(char **)(p + 0xB90));
                *(float *)(p + 0xAF4) = 128.0f;
                func_001A2180(func_00279290(p + 0x180), (unsigned int)*(float *)(p + 0xAF4), 1);
                break;
            }
            f = FLAGS(0x804);
            if (f & 3) {
                if (*(char **)(p + 0xD0) != 0) *(unsigned char *)(*(char **)(p + 0xD0) + 0x5AC) = 1;
                e = func_002075D0(3, 0x52, p + 0xB10, 3, 0x10);
                if (*(unsigned char *)(p + 0xB98) != 0 && e != 0) {
                    c1 = D_005BCA89;
                    c0 = D_005BCA88;
                    *(unsigned char *)(e + 0x9C) = c0;
                    *(unsigned char *)(e + 0x9D) = c1;
                    *(unsigned char *)(e + 0x9E) = c1;
                    *(unsigned char *)(e + 0x9B) = 2;
                }
                func_00330BD0(D_01DFABA0, 0x23, p + 0xB00, 0xD, 0);
                o = *(P30C **)(G + 0xC);
                if (f & 2) {
                    o->m118(0.0f, 1.0f, 1.0f, D_00561FE0, 0);
                } else {
                    o->m118(0.0f, 1.0f, 1.0f, D_00562020, 0);
                }
                *(unsigned char *)(p + 4) = 2;
                break;
            }
            func_0030CE90(p);
            func_00195E20((char *)&D_005BE098, p);
            break;
        case 2:
            if (!(*(float *)(p + 0x144) <= 0.0f)) {
                if (!(*(float *)(p + 0xAF4) < 5.12f)) {
                    *(float *)(p + 0xAF4) = *(float *)(p + 0xAF4) - 5.12f * *(float *)(p + 0x10);
                } else {
                    *(float *)(p + 0xAF4) = 0.0f;
                }
            }
            v = (unsigned int)*(float *)(p + 0xAF4);
            m = func_00279290(p + 0x180);
            for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) set30C(m, i, v);
            func_00195E20((char *)&D_005BE098, p);
            break;
        }
    } else {
        *(unsigned char *)(p + 4) = 2;
    }
    if (*(unsigned char *)(p + 0xB98) != 0) func_001A29A0(func_00279290(p + 0x180));
}
