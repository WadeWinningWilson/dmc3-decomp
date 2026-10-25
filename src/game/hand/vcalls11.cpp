/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls10. */

class V4C3 {
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
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual int m84();
};
extern "C" float D_005BDDB0;
extern "C" float D_005BDDB4;
extern "C" float D_005BDF40;
extern "C" void func_004C43B0(char *);
extern "C" void func_004C4630(char *);
extern "C" void func_004C47D0(char *);
extern "C" void func_004C4930(char *);
extern "C" void func_004C4A40(char *);
extern "C" void func_004C4BA0(char *);
extern "C" void func_004C4E00(char *);
extern "C" void func_004C5200(char *);
extern "C" void func_004C5460(char *);
extern "C" void func_004C5590(char *);
extern "C" void func_004C56B0(char *);
extern "C" void func_004C5890(char *);
extern "C" void func_004C5AD0(char *);
extern "C" void func_004C5CC0(char *);
extern "C" void func_004C6490(char *);
extern "C" void func_004C6610(char *);
extern "C" void func_004C67A0(char *);
extern "C" void func_004C68F0(char *);
extern "C" void func_004C69C0(char *);
extern "C" void func_004C6C00(char *);
extern "C" void func_004C6DF0(char *);
extern "C" void func_004C7130(char *);
extern "C" void func_004C7520(char *);
extern "C" void func_004C7E50(char *);
extern "C" void func_004C8160(char *);
extern "C" void func_004C83A0(char *);
extern "C" void func_004C8660(char *);
extern "C" void func_004C8700(char *);
extern "C" void func_004C87A0(char *);
extern "C" void func_004C8920(char *);
extern "C" void func_004C89F0(char *);
extern "C" void func_004C8B20(char *);
extern "C" void func_004C90E0(char *);
extern "C" void func_004C9180(char *);
extern "C" void func_004C9540(char *);
extern "C" void func_004C9AB0(char *);
extern "C" void func_004C9E20(char *);
extern "C" void func_004C9F50(char *);
extern "C" void func_004CA400(char *);
extern "C" void func_004CA980(char *);
extern "C" void func_004CAD30(char *);
extern "C" void func_004CB100(char *);

#define SPD4C3 if (!(unsigned char)((V4C3 *)(p + 0x130))->m84()) *(float *)(p + 0x168) += D_005BDDB0 * *(float *)(p + 0x10);
#define SET4C3 *(float *)(p + 0x168) = 1.0f + (*(float **)(*(char **)(p + 0x138) + 0x14))[*(int *)(p + 0xB2C0)];

static inline int ok4C3(char *p) {
    unsigned char r = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) r = 0;
    return r;
}

extern "C" void func_004C3AD0(char *p) {
    float v;
    ((V4C3 *)(p + 0x130))->m6C();
    ((V4C3 *)(p + 0x130))->m70();
    ((V4C3 *)(p + 0x130))->m74();
    switch (*(unsigned char *)(p + 0xB154)) {
    case 23:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4 || *(unsigned char *)(p + 0xB2D3) == 1) SET4C3
        func_004C43B0(p);
        break;
    case 24:
        func_004C4630(p);
        break;
    case 25:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C47D0(p);
        break;
    case 26:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C4930(p);
        break;
    case 27:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C4A40(p);
        break;
    case 28:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C4BA0(p);
        break;
    case 29:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C4E00(p);
        break;
    case 30:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C5200(p);
        break;
    case 31:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C5460(p);
        break;
    case 32:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C5590(p);
        break;
    case 33:
        func_004C56B0(p);
        break;
    case 34:
        func_004C5890(p);
        break;
    case 37:
        func_004C6490(p);
        break;
    case 38:
        func_004C6610(p);
        break;
    case 39:
        func_004C67A0(p);
        break;
    case 40:
        func_004C7E50(p);
        break;
    case 41:
        func_004C68F0(p);
        break;
    case 42:
        func_004C69C0(p);
        break;
    case 43:
        func_004CAD30(p);
        break;
    case 44:
        func_004C7520(p);
        break;
    case 45:
        func_004C6C00(p);
        break;
    case 46:
        func_004C6DF0(p);
        break;
    case 47:
        func_004C7130(p);
        break;
    case 48:
        func_004C7520(p);
        break;
    case 35:
        func_004C5AD0(p);
        break;
    case 36:
        func_004C5CC0(p);
        break;
    case 49:
        func_004C7E50(p);
        break;
    case 50:
        func_004C8160(p);
        break;
    case 51:
        func_004C83A0(p);
        break;
    case 52:
        func_004C8660(p);
        break;
    case 53:
        func_004C8700(p);
        break;
    case 54:
        func_004C87A0(p);
        break;
    case 55:
        func_004C8920(p);
        break;
    case 56:
        func_004C89F0(p);
        break;
    case 57:
        func_004C8B20(p);
        break;
    case 58:
        func_004C9E20(p);
        break;
    case 59:
        func_004C9F50(p);
        break;
    case 60:
        func_004CA400(p);
        break;
    case 61:
        func_004CA980(p);
        break;
    case 62:
        func_004CAD30(p);
        break;
    case 63:
        func_004CB100(p);
        break;
    case 64:
        func_004CB100(p);
        break;
    case 65:
        func_004C9180(p);
        break;
    case 67:
        func_004C90E0(p);
        break;
    case 66:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C9AB0(p);
        break;
    case 68:
        func_004C9540(p);
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
        break;
    }
    if ((unsigned char)ok4C3(p) == 1) {
        v = *(float *)(p + 0xAF94) + D_005BDF40 * *(float *)(p + 0x10);
        *(float *)(p + 0xAF94) = v < *(float *)(p + 0xB110) ? v : *(float *)(p + 0xB110);
    }
}

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

class W44B {
public:
    virtual void d0();
    virtual void d1();
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
    virtual void m84(int, int);
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

extern "C" char D_00666750[];
extern "C" int D_00578020[];
extern "C" void func_001AF080(char *, char *);
extern "C" char *func_001AFB90(char *, int, int, int);
extern "C" void func_0044BA30(char *, int, int, int);

static inline char *ent44B(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }
static inline char *gch44B(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent44B(t, k); } else { r = *(char **)(h + 0xC); } return r; }

#define W1 ((W44B *)(p + 0x1E80))
#define W2 ((W44B *)(p + 0x2480))

extern "C" int func_0044B150(char *p) {
    int n;
    unsigned char ok;
    char *b;
    char *h;
    char *a;
    switch (*(unsigned char *)(p + 0x3080)) {
    case 0:
        if (*(unsigned char *)(p + 0x3082) != 0) {
            if (*(signed char *)(p + 0x311E) == *(signed char *)(p + 0x311B)) {
                *(unsigned char *)(p + 0x3082) = 0;
            } else {
                *(signed char *)(p + 0x311E) = *(signed char *)(p + 0x311B);
                if (*(unsigned char *)(p + 0x3081) == 1) {
                    *(unsigned char *)(p + 0x3128) = 0x40;
                    *(unsigned char *)(p + 0x3080) = 1;
                } else {
                    *(unsigned char *)(p + 0x3080) = 3;
                }
            }
        }
        break;
    case 1:
        if (0 < *(unsigned char *)(p + 0x3128)) {
            W1->m84(*(unsigned char *)(p + 0x3128), 1);
            W2->m84(*(unsigned char *)(p + 0x3128), 1);
            *(unsigned char *)(p + 0x3128) -= 0x10;
        } else {
            W1->m8C();
            W2->m8C();
            *(unsigned char *)(p + 0x3081) = 0;
            *(int *)(p + 0x3084) = 2;
            *(unsigned char *)(p + 0x3080) = 2;
        }
        break;
    case 2:
        if (--*(int *)(p + 0x3084) == 0) {
            W1->mD0();
            W2->mD0();
            *(unsigned char *)(p + 0x3080) = 3;
        }
        break;
    case 3:
        if (*(char **)(p + 0x3C) != 0) {
            func_001AF080(D_00666750, *(char **)(p + 0x3C));
            *(char **)(p + 0x3C) = 0;
        }
        n = D_00578020[*(signed char *)(p + 0x311E)];
        if (n == 0x2DA && *(unsigned char *)(*(char **)(p + 0x3110) + 0xB7) == 1) n = 0x2D0;
        *(char **)(p + 0x3C) = func_001AFB90(D_00666750, n, 0, 8);
        if (*(char **)(p + 0x3C) == 0) return 0;
        *(unsigned char *)(p + 0x3080) = 4;
    case 4:
        ok = 1;
        if (*(unsigned char *)(*(char **)(p + 0x3C) + 1) != 0 && *(unsigned char *)(*(char **)(p + 0x3C) + 1) != 3) ok = 0;
        if (ok != 0) {
            h = *(char **)(p + 0x3C);
            if (**(unsigned short **)(h + 8) == 0) {
                a = *(char **)(h + 0xC);
                b = ent44B(a, 1);
            } else {
                a = *(char **)(h + 0xC);
                b = a;
            }
            if (**(unsigned short **)(h + 8) == 0) a = ent44B(a, 0);
            else a = *(char **)(h + 0xC);
            W1->m24(1);
            if (!(unsigned char)W1->m2C(a, b)) return 0;
            W1->m3C(1);
            h = *(char **)(p + 0x3C);
            if (**(unsigned short **)(h + 8) == 0) {
                a = *(char **)(h + 0xC);
                b = ent44B(a, 3);
            } else {
                a = *(char **)(h + 0xC);
                b = a;
            }
            if (**(unsigned short **)(h + 8) == 0) a = ent44B(a, 2);
            else a = *(char **)(h + 0xC);
            W2->m24(1);
            if (!(unsigned char)W2->m2C(a, b)) return 0;
            W2->m3C(1);
            *(unsigned char *)(p + 0x3128) = 0;
            W1->m84(*(unsigned char *)(p + 0x3128), 1);
            W2->m84(*(unsigned char *)(p + 0x3128), 1);
            *(unsigned char *)(p + 0x3081) = 1;
            func_0044BA30(p, *(signed char *)(p + 0x311C), *(signed char *)(p + 0x311E), 1);
            *(unsigned char *)(p + 0x3080) = 5;
    case 5:
            if (*(unsigned char *)(p + 0x3128) < 0x40) {
                *(unsigned char *)(p + 0x3128) += 0x10;
                W1->m84(*(unsigned char *)(p + 0x3128), 1);
                W2->m84(*(unsigned char *)(p + 0x3128), 1);
            }
            if (!(*(unsigned char *)(p + 0x3128) < 0x40)) {
                W1->m8C();
                W2->m8C();
                *(unsigned char *)(p + 0x3082) = 0;
                *(unsigned char *)(p + 0x3080) = 0;
            }
        }
        break;
    }
    return 1;
}

class Ef493 {
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
    virtual void m130();
};
class Self493 {
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
    virtual int m134(int);
};

extern "C" void func_00492E20(char *, unsigned char);
extern "C" float func_0041DB40(char *);
extern "C" Ef493 *func_003D0CB0(char *, int, int, int, int, int);
extern "C" int func_0041D6B0(float *, float);

#define IDX (*(int *)(p + 0x3C94))
#define ST (*(unsigned char *)((char *)IDX + (int)p + 0x3C98))
#define TM ((float *)((char *)(IDX * 4) + (int)p + 0x3CC8))
#define TM2 ((float *)(p + IDX * 4 + 0x3CC8))

extern "C" void func_004934F0(char *p) {
    unsigned char f;
    unsigned char i;
    unsigned char j;
    Ef493 *o;
    f = 0;
    if (*(unsigned char *)(p + 0x8EB) < 2) f = 1;
    if (*(unsigned char *)(p + 0x8EB) == 0) {
        func_00492E20(p, *(unsigned char *)(p + 0x3C94));
    } else if (func_0041DB40(p + 0x50) < 600.0f) {
        func_00492E20(p, *(unsigned char *)(p + 0x3C94));
    } else {
        switch (ST) {
        case 0:
            for (i = 0; i < 3; i++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)i);
                if (o != 0) o->m130();
            }
            if (f) {
                *TM = 60.0f;
            } else {
                *TM = 30.0f;
            }
            ST = 1;
        case 1:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) ST = 2;
            break;
        case 2:
            for (i = 0; i < 3; i++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)i | 0x10);
                if (o != 0) o->m130();
            }
            if (f) {
                *TM = 60.0f;
            } else {
                *TM = 30.0f;
            }
            ST = 3;
        case 3:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) ST = 4;
            break;
        case 4:
            for (i = 0; i < 3; i++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)i | 0x20);
                if (o != 0) o->m130();
            }
            if (f) {
                *TM = 60.0f;
            } else {
                *TM = 30.0f;
            }
            ST = 5;
        case 5:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) {
                if (f) {
                    func_00492E20(p, *(unsigned char *)(p + 0x3C94));
                } else {
                    ST = 6;
                }
            }
            break;
        case 6:
            for (j = 0; j < 3; j++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)j | 0x10);
                if (o != 0) o->m130();
            }
            *TM = 30.0f;
            ST = 7;
        case 7:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) ST = 8;
            break;
        case 8:
            for (j = 0; j < 3; j++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)j | 0x20);
                if (o != 0) o->m130();
            }
            *TM = 30.0f;
            ST = 9;
        case 9:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) func_00492E20(p, *(unsigned char *)(p + 0x3C94));
            break;
        }
    }
}
