class W47B {
public:
    virtual void d0();
    virtual char *mC();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int);
    virtual void d8();
    virtual int m2C(char *, char *);
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void m3C(int);
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
    virtual void m84(unsigned char, int);
    virtual void d32();
    virtual void m8C();
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
    virtual void mD0();
};

extern "C" char *func_00279290(char *);

extern "C" void func_001A1F90(char *);

extern "C" void func_001A2000(char *, int);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2D70(char *, int, unsigned int);

extern "C" int func_00484040(char *, int, signed char);

extern "C" int func_00483E90(char *, int, signed char);

static inline char *en47B(char *t, int i) {
    char *r;
    if (*(unsigned int *)(t + 4) < i + 1) {
        r = 0;
    } else if (*(int *)(t + i * 4 + 8) == 0) {
        r = 0;
    } else {
        r = t + *(int *)(t + i * 4 + 8);
    }
    return r;
}

static inline char *gc47B(char *h, int i) {
    char *r;
    if (**(unsigned short **)(h + 8) == 0) {
        r = en47B(*(char **)(h + 0xC), i);
    } else {
        r = *(char **)(h + 0xC);
    }
    return r;
}

#define WA ((W47B *)(p + 0x9080))

#define WB ((W47B *)(p + 0x8A80))

extern "C" int func_0047B8A0(char *p, char *d) {
    int bit;
    unsigned char m;
    char *h;
    int k;
    char *h2;
    char *a;
    char *o;
    int t;
    int j;
    char *b;
    int i;
    switch (*(signed char *)(d + 2)) {
    case 0:
        if (*(unsigned char *)(p + 0x97AC) == 1 && *(unsigned char *)(p + 0x97AD) == 1) *(signed char *)(d + 2) = 1;
        break;
    case 1:
        h = *(char **)(p + 0x44);
        a = gc47B(h, 1);
        b = gc47B(h, 0);
        WA->m24(1);
        if (!(unsigned char)WA->m2C(b, a)) return 0;
        WA->m3C(3);
        *(unsigned char *)(d + 5) = 0;
        WA->m84(*(unsigned char *)(d + 5), 1);
        switch (*(signed char *)(p + 0x9798)) {
        case 0:
        case 1:
        case 24:
        case 25:
            func_001A1F90(func_00279290(p + 0x9080));
            break;
        }
        h2 = *(char **)(p + 0x44);
        a = gc47B(h2, 3);
        b = gc47B(h2, 2);
        WB->m24(1);
        if (!(unsigned char)WB->m2C(b, a)) return 0;
        WB->m3C(2);
        *(unsigned char *)(d + 5) = 0;
        WB->m84(*(unsigned char *)(d + 5), 1);
        *(unsigned char *)(d + 1) = 1;
        for (i = 0; i < *(unsigned short *)(WB->mC() + 0xA8); i++) func_001A2000(func_00279290(p + 0x8A80), i);
        for (i = 0; i < *(unsigned short *)(WB->mC() + 0xA8); i++) {
            m = func_00484040(*(char **)(p + 0x9784), i, *(signed char *)(p + 0x9798));
            t = func_00483E90(*(char **)(p + 0x9784), i, *(signed char *)(p + 0x9798));
            if (m == 0 || t < 0) continue;
            k = t;
            for (bit = 0, o = p + 0x8A80; bit < 8; bit++) {
                if (m & 1) {
                    switch (bit) {
                    case 0:
                        func_001A1E70(func_00279290(o), k);
                        func_001A2D70(func_00279290(o), k, 0x80306060);
                        break;
                    case 4:
                        func_001A1E70(func_00279290(o), k);
                        func_001A2D70(func_00279290(o), k, 0x804088A0);
                        break;
                    case 1:
                        func_001A2D70(func_00279290(o), k, 0x8040E040);
                        break;
                    case 2:
                        func_001A2D70(func_00279290(o), k, 0x80E04040);
                        break;
                    case 3:
                        func_001A2D70(func_00279290(o), k, 0x804040E0);
                        break;
                    }
                }
                m = (unsigned char)(m >> 1);
            }
        }
        *(unsigned char *)d = 1;
        *(signed char *)(d + 2) = 3;
    case 3:
        if (*(unsigned char *)(d + 5) < 0x40) {
            *(unsigned char *)(d + 5) += 2;
            WA->m84(*(unsigned char *)(d + 5), 1);
            WB->m84(*(unsigned char *)(d + 5), 1);
        } else {
            WA->m8C();
            WB->m8C();
            *(signed char *)(d + 2) = 4;
        }
        break;
    case 2:
        break;
    case 4:
        if (*(unsigned char *)(p + 0x97AD) == 0) {
            *(unsigned char *)(d + 5) = 0x40;
            *(signed char *)(d + 2) = 5;
        }
        break;
    case 5:
        if (0 < *(unsigned char *)(d + 5)) {
            WA->m84(*(unsigned char *)(d + 5), 1);
            WB->m84(*(unsigned char *)(d + 5), 1);
            *(unsigned char *)(d + 5) -= 2;
        } else {
            WA->m8C();
            WB->m8C();
            *(unsigned char *)d = 0;
            *(signed char *)(d + 4) = 2;
            *(signed char *)(d + 2) = 6;
        }
        break;
    case 6:
        if (--*(signed char *)(d + 4) == 0) {
            WA->mD0();
            WB->mD0();
            *(signed char *)(d + 2) = 0;
        }
        break;
    }
    return 1;
}

extern "C" void func_001AF080(char *, int);

class VD0 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47();virtual void d48();virtual void d49(); virtual void f();
};

#define VC(o) ((VD0 *)(o))->f()

extern "C" {
void func_004787F0(char *p) {
    extern char D_00666750[];
    int i;
    char *b;
    char *a;
    if (*(int *)(p + 0x3C) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x3C));
        *(int *)(p + 0x3C) = 0;
    }
    if (*(int *)(p + 0x40) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x40));
        *(int *)(p + 0x40) = 0;
    }
    if (*(int *)(p + 0x44) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x44));
        *(int *)(p + 0x44) = 0;
    }
    VC(p + 0x80);
    VC(p + 0x680);
    VC(p + 0xC80);
    for (i = 0, b = p, a = p; i < 20; i++, b += 6, a += 0x600) {
        if (*(unsigned char *)(b + 0x97AF) == 1) {
            VC(a + 0x1280);
        }
    }
    if (*(unsigned char *)(p + 0x9827) == 1) {
        VC(p + 0x9080);
        VC(p + 0x8A80);
    }
}
}

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" short D_005BE208[1][2];

class O478 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24(int);
    virtual void u28();
    virtual int m2C(char *, char *);
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void m3C(short);
};

static inline char *ent478(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *gch478(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent478(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" int func_00478B20(char *p) {
    char *b;
    char *a;
    int i;
    unsigned short k;
    *(unsigned char *)(p + 0x9680) = 0;
    *(int *)(p + 0x9690) = 0;
    *(int *)(p + 0x9694) = 0;
    *(int *)(p + 0x9698) = 0;
    *(float *)(p + 0x969C) = 1.0f;
    *(int *)(p + 0x96A0) = 0;
    *(int *)(p + 0x96A4) = 0;
    *(int *)(p + 0x96A8) = 0;
    *(float *)(p + 0x96AC) = 1.0f;
    *(float *)(p + 0x96B0) = 1.0f;
    *(float *)(p + 0x96B4) = 1.0f;
    *(float *)(p + 0x96B8) = 1.0f;
    *(float *)(p + 0x96BC) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x96C0) : "memory");
    func_00131700(p + 0x96C0, p + 0x96C0, p + 0x96A0);
    func_00105230(p + 0x96C0, p + 0x96C0, p + 0x9690);
    func_001318E0(p + 0x96C0, p + 0x96C0, p + 0x96B0);
    for (i = 0; i < 1; i++) {
        k = i * 2 + 1;
        a = gch478(*(char **)(p + 0x38), k);
        k = i * 2;
        b = gch478(*(char **)(p + 0x38), k);
        ((O478 *)(p + i * 0x600 + 0x80))->m24(1);
        if ((unsigned char)((O478 *)(p + i * 0x600 + 0x80))->m2C(b, a) == 0) {
            return 0;
        }
        ((O478 *)(p + i * 0x600 + 0x80))->m3C(D_005BE208[i][0]);
    }
    return 1;
}

extern "C" int func_001AFB90(char *, int, int, int);

class W2A80 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void m24(int);
    virtual void d28();
    virtual bool m2C(char *, char *);
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void m3C(int);
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
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
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
    virtual void dCC();
    virtual void mD0();
};

static inline int ok040(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *chunkB44(char *c) { if (*(unsigned int *)(c + 4) < 2) return 0; if (*(int *)(c + 0xC) == 0) return 0; return c + *(int *)(c + 0xC); }

static inline char *chunkA44(char *c) { if (*(int *)(c + 4) == 0) return 0; if (*(int *)(c + 8) == 0) return 0; return c + *(int *)(c + 8); }

static inline char *getB44(char *o) { if (**(unsigned short **)(o + 8) == 0) return chunkB44(*(char **)(o + 0xC)); return *(char **)(o + 0xC); }

static inline char *getA44(char *o) { if (**(unsigned short **)(o + 8) == 0) return chunkA44(*(char **)(o + 0xC)); return *(char **)(o + 0xC); }

extern "C" void func_001A2D00(char *, unsigned int);

#define B47A(o) (*(unsigned char *)(p + (o)))

#define S47A(o) (*(signed char *)(p + (o)))

extern "C" {
int func_0047A710(char *p) {
    extern char D_00666750[];
    if (B47A(0x979F) == 1) {
        if (B47A(0x978A) & 0x10)
            func_001A2D00(func_00279290(p + 0x680), 0x80404040);
        else
            func_001A2D00(func_00279290(p + 0x680), 0x80808080);
    }
    switch (S47A(0x979D)) {
    case 0:
        if (B47A(0x97A0) == 0) break;
        if (S47A(0x9799) == S47A(0x979E)) {
            B47A(0x97A0) = 0;
            break;
        }
        S47A(0x979E) = S47A(0x9799);
        if (B47A(0x979F) == 1) {
            B47A(0x97A2) = 0x40;
            B47A(0x979D) = 1;
        } else {
            B47A(0x979D) = 3;
        }
        break;
    case 1:
        if (0 < B47A(0x97A2)) {
            ((W2A80 *)(p + 0x680))->m84(B47A(0x97A2), 1);
            B47A(0x97A2) = B47A(0x97A2) - 4;
        } else {
            ((W2A80 *)(p + 0x680))->m8C();
            B47A(0x979F) = 0;
            S47A(0x97A1) = 2;
            B47A(0x979D) = 2;
        }
        break;
    case 2:
        if (--S47A(0x97A1) == 0) {
            ((W2A80 *)(p + 0x680))->mD0();
            B47A(0x979D) = 3;
        }
        break;
    case 3:
        if (*(int *)(p + 0x3C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x3C));
            *(int *)(p + 0x3C) = 0;
        }
        *(int *)(p + 0x3C) = func_001AFB90(D_00666750, S47A(0x979E) + 0x76D, 0, 8);
        B47A(0x979D) = 4;
    case 4: {
        char *o;
        char *a;
        char *b;
        if ((unsigned char)ok040(*(unsigned char **)(p + 0x3C)) == 0) break;
        o = *(char **)(p + 0x3C);
        b = getB44(o);
        a = getA44(o);
        ((W2A80 *)(p + 0x680))->m24(1);
        if (((W2A80 *)(p + 0x680))->m2C(a, b) == 0) return 0;
        ((W2A80 *)(p + 0x680))->m3C(1);
        B47A(0x97A2) = 0;
        ((W2A80 *)(p + 0x680))->m84(B47A(0x97A2), 1);
        B47A(0x979F) = 1;
        B47A(0x979D) = 5;
    }
    case 5:
        if (B47A(0x97A2) < 0x40) {
            B47A(0x97A2) = B47A(0x97A2) + 4;
            ((W2A80 *)(p + 0x680))->m84(B47A(0x97A2), 1);
        } else {
            ((W2A80 *)(p + 0x680))->m8C();
            B47A(0x97A0) = 0;
            B47A(0x979D) = 0;
        }
        break;
    }
    return 1;
}
}

extern "C" int func_00483940(int, short);

#define B47C(o) (*(unsigned char *)(p + (o)))

#define S47C(o) (*(signed char *)(p + (o)))

#define H47C(o) (*(short *)(p + (o)))

extern "C" {
int func_0047C020(char *p) {
    extern char D_00666750[];
    switch (S47C(0x97A3)) {
    case 0:
        if (B47C(0x978A) & 0x18) {
            B47C(0x97A6) = 0;
            H47C(0x97A4) = -1;
            B47C(0x97A3) = 1;
        }
        break;
    case 1:
        if (B47C(0x978A) & 0x18) {
            if (B47C(0x97A7) == 0) break;
            if (H47C(0x9796) == H47C(0x97A4)) {
                B47C(0x97A7) = 0;
                break;
            }
            H47C(0x97A4) = H47C(0x9796);
        }
        if (B47C(0x97A6) == 1) {
            B47C(0x97A9) = 0x40;
            B47C(0x97A3) = 2;
        } else {
            B47C(0x97A3) = 4;
        }
        break;
    case 2:
        if (0 < B47C(0x97A9)) {
            ((W2A80 *)(p + 0xC80))->m84(B47C(0x97A9), 1);
            B47C(0x97A9) = B47C(0x97A9) - 0x10;
        } else {
            ((W2A80 *)(p + 0xC80))->m8C();
            B47C(0x97A6) = 0;
            S47C(0x97A8) = 2;
            B47C(0x97A3) = 3;
        }
        break;
    case 3:
        if (--S47C(0x97A8) == 0) {
            ((W2A80 *)(p + 0xC80))->mD0();
            B47C(0x97A3) = 4;
        }
        break;
    case 4:
        if (*(int *)(p + 0x40) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x40));
            *(int *)(p + 0x40) = 0;
        }
        if (B47C(0x978A) & 0x18) {
            *(int *)(p + 0x40) = func_001AFB90(D_00666750, func_00483940(*(int *)(p + 0x9784), H47C(0x97A4)) + 0x3E8, 0, 8);
            B47C(0x97A3) = 5;
        } else {
            B47C(0x97A3) = 0;
        }
        break;
    case 5: {
        char *o;
        char *a;
        char *b;
        if ((unsigned char)ok040(*(unsigned char **)(p + 0x40)) == 0) break;
        o = *(char **)(p + 0x40);
        b = getB44(o);
        a = getA44(o);
        ((W2A80 *)(p + 0xC80))->m24(1);
        if (((W2A80 *)(p + 0xC80))->m2C(a, b) == 0) return 0;
        ((W2A80 *)(p + 0xC80))->m3C(4);
        B47C(0x97A9) = 0;
        ((W2A80 *)(p + 0xC80))->m84(B47C(0x97A9), 1);
        B47C(0x97A6) = 1;
        B47C(0x97A3) = 6;
    }
    case 6:
        if (B47C(0x97A9) < 0x40) {
            B47C(0x97A9) = B47C(0x97A9) + 0x10;
            ((W2A80 *)(p + 0xC80))->m84(B47C(0x97A9), 1);
        }
        if (B47C(0x97A9) >= 0x40) {
            ((W2A80 *)(p + 0xC80))->m8C();
            B47C(0x97A7) = 0;
            B47C(0x97A3) = 1;
        }
        break;
    }
    return 1;
}
}

extern "C" char D_00645A30[];

extern "C" void func_001AAD30(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" char *func_001B1610(int, char *);

extern "C" void func_001B1440(char *, char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_001B1430(char *, int);

extern "C" void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_0047C870(char *);

extern "C" void func_001AD140(char *);

class ObjF2C {
public:
    virtual void u0();
    virtual void u1();
    virtual void u2();
    virtual void u3();
    virtual void u4();
    virtual void u5();
    virtual void u6();
    virtual void u7();
    virtual void u8();
    virtual int m2C(char *, char *);
    virtual void u10();
    virtual void u11();
    virtual void u12();
    virtual void u13();
    virtual void u14();
    virtual void u15();
    virtual void u16();
    virtual void u17();
    virtual void u18();
    virtual void u19();
    virtual void u20();
    virtual void u21();
    virtual void u22();
    virtual void u23();
    virtual void u24();
    virtual void u25();
    virtual void u26();
    virtual void u27();
    virtual void u28();
    virtual void u29();
    virtual void u30();
    virtual void u31();
    virtual void u32();
    virtual void u33();
    virtual void u34();
    virtual void u35();
    virtual void u36();
    virtual void u37();
    virtual void u38();
    virtual void u39();
    virtual void u40();
    virtual void u41();
    virtual void u42();
    virtual void u43();
    virtual void u44();
    virtual void u45();
    virtual void u46();
    virtual void u47();
    virtual void u48();
    virtual void u49();
    virtual void u50();
    virtual void mD4(int);
    virtual void u52();
    virtual void u53();
    virtual void u54();
    virtual void u55();
    virtual void u56();
    virtual void u57();
    virtual void u58();
    virtual void u59();
    virtual void u60();
    virtual void u61();
    virtual void u62();
    virtual void u63();
    virtual void u64();
    virtual void u65();
    virtual void u66();
    virtual void u67();
    virtual void u68();
    virtual void u69();
    virtual void u70();
    virtual void u71();
    virtual void u72();
    virtual void u73();
    virtual void m130();
};

static inline char *ent10(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(t + i * 4 + 8) == 0) { r = 0; } else { r = t + *(int *)(t + i * 4 + 8); } return r; }

extern "C" char *func_0047C670(char *p, char *h, short *idx) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (p == 0) {
        return 0;
    }
    if (h == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xE80, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xE80, t);
        if (r != 0) {
            func_0047C870(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    if ((unsigned char)((ObjF2C *)(o + 0xA40))->m2C(ent10(h, *idx * 10), p) == 0) {
        func_001AD140(ret);
        return 0;
    }
    ((ObjF2C *)(ret + 0xA40))->mD4(1);
    return ret;
}

extern "C" void func_0013D6A0(char *);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_00477EA0(char *);

extern "C" char *func_00478340(int p0, char *p1) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x9900, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00477EA0(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x38) = p0;
        *(char **)(ret + 0x9780) = p1;
        *(int *)(ret + 0x9784) = *(int *)(p1 + 0x100);
    }
    return ret;
}

class VCC_1_ii {
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
    virtual int m(int);
};

class VCC_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_00478940(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char *v5;
    int v6;
    v0 = (char *)p0;
    if (*(unsigned char *)((char *)p0 + 38793) != 0) {
        v1 = (int)(v0 + 0x96c0);
        v2 = ((VCC_1_ii *)(v0 + 128))->m(v1);
        if (*(unsigned char *)(v0 + 38815) == 1) {
            v2 = ((VCC_1_ii *)(v0 + 1664))->m(v1);
        }
        if (*(unsigned char *)(v0 + 38822) == 1) {
            v2 = ((VCC_1_ii *)(v0 + 3200))->m(v1);
        }
        if (*(unsigned char *)(v0 + 38829) == 1) {
            v3 = 0;
            v4 = (int)v0;
            v5 = v0;
            v6 = (int)(v0 + 38720);
            do {
                if (*(unsigned char *)((char *)v4 + 38830) == 1) {
                    v2 = ((VCC_1_ii *)(v5 + 4736))->m(v6);
                }
                v3 = (v3 + 1);
                v4 = (v4 + 6);
                v5 = (v5 + 1536);
            } while ((v3 < 20));
            if (*(unsigned char *)(v0 + 38950) == 1) {
                ((VCC_1_iv *)(v0 + 36992))->m(v6);
                v2 = ((VCC_1_ii *)(v0 + 0x8a80))->m(v6);
            }
        }
    }
    return v2;
}
}
