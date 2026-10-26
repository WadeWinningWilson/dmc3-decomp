extern "C" void func_00104C00(char *, int, char *);

class ObjC8 {
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

extern "C" char *func_002D9F00(char *, int);

extern "C" void func_00311730(char *p) {
    char *a;
    if (*(unsigned char *)(p + 0xD6) == 0) {
        func_00104C00(p + 0x2040, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x2080);
    } else {
        a = *(char **)(p + 0xE0);
        if (*(unsigned char *)(a + 0x28A0) == 0) {
            switch (*(unsigned char *)(a + 0x28B0)) {
            case 1:
            case 4:
            case 5:
                break;
            default:
                func_00104C00(p + 0x2040, *(int *)(*(char **)(a + *(unsigned char *)(p + 0xD4) * 4 + 0x6C90) + 0x104), p + 0x2080);
                break;
            }
        }
    }
    ((ObjC8 *)(p + 0x4C0))->mC8(p + 0x2040);
}

extern "C" void func_0013D5D0(char *);

extern "C" void func_001AD140(char *);

extern "C" void func_002E2BD0(char *);

extern "C" void func_00286040(char *);

class VD0 {
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
    virtual void mD0();
};

class V14 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14();
};

extern "C" void func_00311B90(char *p) {
    unsigned int i;
    int j;
    ((VD0 *)(p + 0x4C0))->mD0();
    if (*(unsigned char *)(p + 0xDD) == 1) ((V14 *)(p + 0xAC0))->m14();
    for (i = 0; i < 3; i++) ((VD0 *)(p + i * 0x600 + 0xE40))->mD0();
    func_002E2BD0(p + 0x170);
    func_002E2BD0(p + 0x1E0);
    func_002E2BD0(p + 0x250);
    for (i = 0; i < 3; i++) {
        func_00286040(p + i * 4 + 0x20C4);
        if (*(char **)(p + i * 4 + 0x20C4) != 0) func_001AD140(*(char **)(p + i * 4 + 0x20C4));
    }
    if (*(char **)(p + 0x20D0) != 0) {
        func_001AD140(*(char **)(p + 0x20D0));
        *(char **)(p + 0x20D0) = 0;
    }
    for (j = 0; j < *(int *)(p + 0x2C0); j++) func_0013D5D0(p + j * 0x10 + 0x2C4);
}

extern char D_00666750[];

extern "C" char D_0054F910[];

extern "C" void func_002E2800(char *, int, int);

extern "C" int func_001AED80(char *, int, int, int);

extern "C" void func_0024D9F0(char *, int, int, int, char *, char *, char *, char *, char *);

extern "C" void func_0028C200(char *, int, int, int, char *, char *, int);

extern "C" void func_00208050(int, int);

class O310 {
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
    virtual void mB0(int, char *);
};

static inline char *el310(char *o, int n) { if (n >= *(int *)(o + 0x1A0)) return 0; return *(char **)(o + 0x170) + n * 0x80; }

extern "C" void func_00310DA0(char *p) {
    unsigned int i;
    int a;
    ((O310 *)(p + 0xE40))->mB0(0, p + 0x12C);
    ((O310 *)(p + 0x1440))->mB0(0, p + 0x140);
    ((O310 *)(p + 0x1A40))->mB0(0, p + 0x154);
    for (i = 0; i < 3; i++) {
        func_002E2800(p + i * 0x70 + 0x170, 5, 5);
        el310(p + i * 0x70, 0)[0x78] = 1;
        el310(p + i * 0x70, 4)[0x78] = 1;
        *(float *)(p + i * 0x70 + 0x184) = 200.0f;
        *(float *)(p + i * 0x70 + 0x17C) = 0.97f;
    }
    func_0024D9F0(p + 0xB50, func_001AED80(D_00666750, 2, (unsigned short)(*(signed char *)(p + 0x46) * 15 + 1), 5), 0, 1, p + 0x20C0, p + 0x4C4, p + 0x100, p + 0x10, p + 0xC20);
    a = func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 6);
    func_0028C200(p + 0xC20, a, func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 7), 0, D_0054F910, p, 0);
    func_00208050(func_001AED80(D_00666750, 2, (unsigned short)(*(signed char *)(p + 0x46) * 15 + 1), 3), 1);
}

class VC8_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00311710(char *p0) {
    int tmp1;
    tmp1 = ((VC8_0_i *)*(char **)(p0 + 224))->m();
    return tmp1;
}
}

extern "C" {
int func_0028BFE0(char *);
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
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

class VCC_1_pv {
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
    virtual void m(char *);
};

extern "C" {
int func_00311AD0(char *p0) {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = p0;
    if (*(signed char *)(p0 + 218) != -1) {
        ((VCC_1_pv *)(v0 + 1216))->m((v0 + 8256));
        v1 = func_0028BFE0(v0);
        if ((v1 & 255) == 1) {
            v1 = ((V10_0_i *)(v0 + 2752))->m();
        }
        v2 = 0;
        if (*(signed char *)(v0 + 218) != 0) {
            v3 = v0;
            do {
                v1 = ((VCC_1_pi *)(v3 + 3648))->m((v0 + 8256));
                v2 = (v2 + 1);
                v3 = (v3 + 1536);
            } while (((unsigned int)v2 < (unsigned int)3));
        }
    }
    return v1;
}
}
