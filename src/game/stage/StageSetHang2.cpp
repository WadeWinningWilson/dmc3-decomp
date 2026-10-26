extern "C" char *func_00279290(char *);

extern "C" int func_0034B490(unsigned char *, int *, char *, int, int, float, float);

extern "C" void func_001A5CC0(char *);

extern "C" void func_001A5B90(char *);

class SubCCx {
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

extern "C" void func_004DCEF0(char *p) {
    int s;
    unsigned char c;
    if ((unsigned char)func_0034B490(&c, &s, p + 0xCE0, 0x80, 0x40, 400.0f, 300.0f) == 1) {
        func_001A5CC0(func_00279290(p + 0x600));
    } else {
        func_001A5B90(func_00279290(p + 0x600));
    }
    ((SubCCx *)(p + 0x600))->mCC(p + 0xC70);
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_002E2BD0(...);
}

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
int func_004DB740(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 1536))->m();
    v1 = func_002E2BD0((v0 + 3072));
    v2 = 0;
    if ((0 < *(int *)(v0 + 476))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 480));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 476)));
    }
    return v1;
}
}
