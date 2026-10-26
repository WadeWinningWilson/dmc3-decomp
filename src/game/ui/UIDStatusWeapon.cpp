extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_0013D5D0(char *);

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

extern "C" void func_004B1CA0(char *p) {
    int i;
    int k;
    if (*(int *)(p + 0x90) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x90));
        *(int *)(p + 0x90) = 0;
    }
    for (i = 0; i < 7; i++) {
        ((SubD0 *)(p + i * 0x600 + 0xC0))->mD0();
    }
    ((SubD0 *)(p + 0x2AC0))->mD0();
    for (i = 0; i < 2; i++) {
        if (*(int *)(p + i * 4 + 0x94) != 0) {
            func_001AF080(D_00666750, *(int *)(p + i * 4 + 0x94));
            *(int *)(p + i * 4 + 0x94) = 0;
        }
        if (*(unsigned char *)(p + i * 6 + 0x3DF9) == 1) {
            ((SubD0 *)(p + i * 0x600 + 0x30C0))->mD0();
        }
    }
    for (k = 0; k < *(int *)(p + 0x38); k++) {
        func_0013D5D0(p + k * 16 + 0x3C);
    }
}

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" short D_00586A10[];

class O4B2 {
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
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void mB0(int, char *);
};

static inline char *ent4B2(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *gch4B2(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent4B2(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" int func_004B2070(char *p) {
    unsigned short k;
    char *b;
    char *a;
    int i;
    *(char *)(p + 0x3CE0) = 0;
    *(float *)(p + 0x3CF0) = 0.0f;
    *(float *)(p + 0x3CF4) = 0.0f;
    *(float *)(p + 0x3CF8) = 0.0f;
    *(float *)(p + 0x3CFC) = 1.0f;
    *(float *)(p + 0x3D00) = 0.0f;
    *(float *)(p + 0x3D04) = 0.0f;
    *(float *)(p + 0x3D08) = 0.0f;
    *(float *)(p + 0x3D0C) = 1.0f;
    *(float *)(p + 0x3D10) = 1.0f;
    *(float *)(p + 0x3D14) = 1.0f;
    *(float *)(p + 0x3D18) = 1.0f;
    *(float *)(p + 0x3D1C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3D20) : "memory");
    func_00131700(p + 0x3D20, p + 0x3D20, p + 0x3D00);
    func_00105230(p + 0x3D20, p + 0x3D20, p + 0x3CF0);
    func_001318E0(p + 0x3D20, p + 0x3D20, p + 0x3D10);
    for (i = 0; i < 7; i++) {
        k = i * 2 + 1;
        a = gch4B2(*(char **)(p + 0x8C), k);
        k = i * 2;
        b = gch4B2(*(char **)(p + 0x8C), k);
        ((O4B2 *)(p + i * 0x600 + 0xC0))->m24(1);
        if (!(unsigned char)((O4B2 *)(p + i * 0x600 + 0xC0))->m2C(b, a)) {
            return 0;
        }
        if (i == 3) {
            ((O4B2 *)(p + i * 0x600 + 0xC0))->mB0(0, p + 0x3CC0);
        }
        ((O4B2 *)(p + i * 0x600 + 0xC0))->m3C(D_00586A10[i * 2]);
    }
    return 1;
}

class O4B1 {
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
    virtual void mCC(char *);
};

extern "C" void func_004B1DD0(char *p) {
    int i1;
    char *q1;
    char *q2;
    char *a;
    char *b;
    int i2;
    a = p + 0x3D20;
    for (i1 = 0, q1 = p; i1 < 7; i1++, q1 += 0x600) ((O4B1 *)(q1 + 0xC0))->mCC(a);
    if (*(unsigned char *)(p + 0x3DF2) == 1) ((O4B1 *)(p + 0x2AC0))->mCC(a);
    for (i2 = 0, q2 = p, b = p + 0x3DA0; i2 < 2; i2++, p += 6, q2 += 0x600) {
        if (*(unsigned char *)(p + 0x3DF7) != 0) {
            if (*(signed char *)(p + 0x3DF5) == 0) ((O4B1 *)(q2 + 0x30C0))->mCC(a);
            if (*(signed char *)(p + 0x3DF5) == 1) ((O4B1 *)(q2 + 0x30C0))->mCC(b);
        }
    }
}
