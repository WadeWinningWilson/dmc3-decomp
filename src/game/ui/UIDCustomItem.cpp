class ObjSnd {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual int m2C();
};

extern "C" ObjSnd *D_005BC1A8;

extern "C" char D_01DFABA0[];

extern "C" char D_01DFA340[];

extern "C" char D_006663C0[];

extern "C" char D_01C61820[];

extern "C" char D_01CAF2B0[];

extern "C" unsigned short func_001AE360(char *, int);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" void func_001B69F0(char *, int, int, int, int, int, int, int);

extern "C" void func_001B6BD0(char *, int, int);

extern "C" void func_001ECFF0(char *, int, int, int);

extern "C" int func_001ED110(char *);

extern "C" void func_0030EA90(char *, int);

class ObjSnd24 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int, int);
};

extern "C" int func_004B5D60(char *, int);

extern "C" unsigned int func_004B60D0(char *, int);

extern "C" void func_004B4DF0(char *);

extern "C" int func_004B5CA0(char *, int);

extern "C" signed char D_005BDD50[8];

#define B4B4(o) (*(unsigned char *)(p + (o)))

#define S4B4(o) (*(signed char *)(p + (o)))

#define I4B4(o) (*(int *)(p + (o)))

extern "C" void func_004B4710(char *p) {
    unsigned int r;
    if (S4B4(0x3378) == 0 || S4B4(0x3378) == 3) {
        if (B4B4(0x3377) == 0) {
            if (S4B4(0x3375) != S4B4(0x3379) || B4B4(0x3376) == 0) {
                B4B4(0x3377) = 1;
            }
        }
    }
    switch (B4B4(5)) {
    case 0:
        switch (func_004B5D60(p, S4B4(0x3375))) {
        case 0:
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            I4B4(0x337C) = 0x4E85;
            B4B4(5) = 0x14;
            break;
        case 1:
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            I4B4(0x337C) = 0x4E87;
            B4B4(5) = 10;
            break;
        case 2:
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            I4B4(0x337C) = 0x2B33;
            B4B4(5) = 10;
            break;
        case 3:
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            I4B4(0x337C) = 0x4E86;
            B4B4(5) = 10;
            break;
        case 4:
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
            I4B4(0x337C) = 0x4E88;
            B4B4(5) = 10;
            break;
        default:
            B4B4(5) = B4B4(5) + 1;
            break;
        }
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        break;
    case 1:
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        B4B4(4) = 2;
        B4B4(5) = 0;
        break;
    case 10:
        B4B4(5) = B4B4(5) + 1;
    case 11:
        r = func_004B60D0(p, I4B4(0x337C));
        func_001B69F0(D_01C61820, 0x100, 0x84, 0xFFFFF1, (short)(r >> 16), (short)(r & 0xFFFF), 0x80404040, I4B4(0x1D4));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        if (func_001AE360(D_006663C0, 0) & 0xD0) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            B4B4(5) = B4B4(5) + 1;
        }
        break;
    case 12:
        B4B4(4) = 2;
        B4B4(5) = 0;
        break;
    case 0x14:
        func_001ECFF0(D_01CAF2B0, 0x100, 0x84, I4B4(0x337C));
        B4B4(5) = B4B4(5) + 1;
    case 0x15:
        r = func_004B60D0(p, I4B4(0x337C)) + 10;
        func_001B69F0(D_01C61820, 0x100, 0x84, 0xFFFFF1, (short)(r >> 16), (short)(r & 0xFFFF), 0x80404040, I4B4(0x1D4));
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        if (func_001AE360(D_006663C0, 0) & 0x80) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            B4B4(5) = 0x1E;
            break;
        }
        switch (func_001ED110(D_01CAF2B0)) {
        case 0:
            break;
        case 1:
            switch (D_005BDD50[S4B4(0x3375)]) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 6:
            case 7:
                func_004B4DF0(p);
                func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
                B4B4(5) = 0x18;
                break;
            case 4:
            case 5:
                D_005BC1A8->m18(0x80808080, 4);
                func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
                B4B4(5) = B4B4(5) + 1;
                break;
            default:
                B4B4(5) = 0x18;
                break;
            }
            break;
        case 2:
        case -1:
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            B4B4(5) = 0x18;
            break;
        default:
            B4B4(5) = 0x18;
            break;
        }
        break;
    case 0x16:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            D_005BC1A8->m14(0x20000000, 8);
            B4B4(5) = B4B4(5) + 1;
        }
        break;
    case 0x17:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            func_004B4DF0(p);
            B4B4(5) = B4B4(5) + 1;
        }
        break;
    case 0x18:
        ((ObjSnd24 *)D_005BC1A8)->m24(0, 0);
        B4B4(4) = 2;
        B4B4(5) = 0;
        break;
    case 0x1E:
        func_0030EA90(D_01DFA340, func_004B5CA0(p, S4B4(0x3379)));
        B4B4(5) = B4B4(5) + 1;
    case 0x1F:
        if (func_001AE360(D_006663C0, 0) & 0xD0) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            D_01DFA340[0] = 0;
            B4B4(5) = 0x14;
        } else {
            func_001B69F0(D_01C61820, 0x40, 0x84, 0xFFFFF1, 0x180, 0x34, 0x80404040, I4B4(0x1D4));
        }
        func_001B6BD0(D_01C61820, 0x20000000, 0xFFFFF0);
        break;
    }
}

extern "C" int func_001AFB90(char *, int, int, int);

extern "C" int func_004B5CD0(char *, int);

extern "C" int func_004B5200(char *);

class W2C00b {
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

static inline int ok4B4(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" {
int func_004B4F30(char *p) {
    extern char D_00666750[];
    extern void func_001AF080(char *, int);
    switch (*(signed char *)(p + 0x3378)) {
    case 0:
        if (*(unsigned char *)(p + 0x3377) == 0) break;
        if (*(signed char *)(p + 0x3379) == *(signed char *)(p + 0x3375)) {
            *(unsigned char *)(p + 0x3377) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x3376) == 1) {
            *(unsigned char *)(p + 0x337A) = 0x40;
            *(unsigned char *)(p + 0x3378) = 1;
        } else {
            *(unsigned char *)(p + 0x3378) = 3;
        }
        break;
    case 1:
        *(unsigned char *)(p + 0x337A) = *(unsigned char *)(p + 0x337A) - 0x10;
        if (0 < *(unsigned char *)(p + 0x337A)) {
            ((W2C00b *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x337A), 1);
        } else {
            ((W2C00b *)(p + 0x2C00))->m8C();
            *(unsigned char *)(p + 0x3376) = 0;
            *(unsigned char *)(p + 0x337B) = 2;
            *(unsigned char *)(p + 0x3378) = 2;
        }
        break;
    case 2:
        if (--*(signed char *)(p + 0x337B) != 0) break;
        ((W2C00b *)(p + 0x2C00))->mD0();
        *(unsigned char *)(p + 0x3378) = 3;
        break;
    case 3:
        if (*(unsigned char *)(p + 0x3377) == 0) break;
        *(signed char *)(p + 0x3379) = *(signed char *)(p + 0x3375);
        if (*(int *)(p + 0x1D0) != 0) {
            if ((unsigned char)ok4B4(*(unsigned char **)(p + 0x1D0)) != 1) break;
            func_001AF080(D_00666750, *(int *)(p + 0x1D0));
            *(int *)(p + 0x1D0) = 0;
        }
        *(int *)(p + 0x1D0) = func_001AFB90(D_00666750, func_004B5CD0(p, *(signed char *)(p + 0x3379)), 0, 8);
        if (*(int *)(p + 0x1D0) == 0) return 0;
        *(unsigned char *)(p + 0x3378) = 4;
    case 4:
        if ((unsigned char)ok4B4(*(unsigned char **)(p + 0x1D0)) != 1) break;
        if (*(unsigned char *)(p + 0x3377) == 0) {
            *(unsigned char *)(p + 0x3378) = 3;
            break;
        }
        if ((unsigned char)func_004B5200(p) == 0) return 0;
        *(unsigned char *)(p + 0x337A) = 0;
        ((W2C00b *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x337A), 1);
        *(unsigned char *)(p + 0x3378) = 5;
        break;
    case 5:
        if (*(unsigned char *)(p + 0x337A) < 0x40) {
            *(unsigned char *)(p + 0x337A) = *(unsigned char *)(p + 0x337A) + 8;
            ((W2C00b *)(p + 0x2C00))->m84(*(unsigned char *)(p + 0x337A), 1);
        }
        if (*(unsigned char *)(p + 0x337A) >= 0x40) {
            ((W2C00b *)(p + 0x2C00))->m8C();
            *(unsigned char *)(p + 0x3377) = 0;
            *(unsigned char *)(p + 0x3378) = 0;
        }
        break;
    }
    return 1;
}
}

extern "C" {
int func_0013D5D0(...);
}

class VD0_0_i {
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
    virtual int m(void);
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
int func_004B4160(int p0) {
    extern char D_00666750[];
    int func_001AF080(char *, int);
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v1 = 0;
    v0 = (char *)p0;
    v2 = v0;
    do {
        ((VD0_0_v *)(v2 + 512))->m();
        v1 = (v1 + 1);
        v2 = (v2 + 1536);
    } while ((v1 < 7));
    v5 = ((VD0_0_i *)(v0 + 11264))->m();
    v3 = *(int *)(v0 + 464);
    if (v3 != 0) {
        v5 = func_001AF080(D_00666750, v3);
        *(int *)(v0 + 464) = 0;
    }
    v6 = 0;
    if ((0 < *(int *)(v0 + 56))) {
        v7 = (int)v0;
        do {
            v5 = func_0013D5D0((v7 + 60));
            v6 = (v6 + 1);
            v7 = (v7 + 16);
        } while ((v6 < *(int *)(v0 + 56)));
    }
    return v5;
}
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

class VCC_1_pi {
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
    virtual int m(char *);
};

extern "C" {
int func_004B4220(int p0) {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    v1 = 0;
    v2 = v0;
    v3 = (int)(v0 + 12976);
    do {
        v4 = ((VCC_1_ii *)(v2 + 512))->m(v3);
        v1 = (v1 + 1);
        v2 = (v2 + 1536);
    } while ((v1 < 7));
    if (*(unsigned char *)(v0 + 13174) == 1) {
        v4 = ((VCC_1_pi *)(v0 + 11264))->m((v0 + 13104));
    }
    return v4;
}
}
