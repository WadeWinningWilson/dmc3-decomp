extern "C" void func_0013D5D0(char *);

extern "C" void func_001AD140(char *);

class ObjD0 {
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

extern "C" {
void func_0040E710(char *p) {
    extern void func_00206730(char *);
    int i;
    for (i = 0; i < 24; i++) {
        if (*(char **)(p + i * 4 + 0x108) != 0) {
            ((ObjD0 *)(*(char **)(p + i * 4 + 0x108) + 0x10))->mD0();
            func_00206730(*(char **)(p + i * 4 + 0x108) + 0x498);
            if (*(char **)(*(char **)(p + i * 4 + 0x108) + 0x498) != 0) {
                *(unsigned char *)(*(char **)(*(char **)(p + i * 4 + 0x108) + 0x498) + 0x3A) = 1;
                func_001AD140(*(char **)(*(char **)(p + i * 4 + 0x108) + 0x498));
                *(char **)(p + i * 4 + 0x108) = 0;
            }
        }
        func_0013D5D0(p + i * 16 + 0x30C);
    }
}
}

class V410 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8();
    virtual void mCC(char *);
};

extern "C" void func_004102E0(char *p) {
    int i;
    char *e;
    for (i = 0; i < *(short *)(p + 0xE2); i++) {
        e = *(char **)(p + i * 4 + 0x108);
        if (*(unsigned char *)e == 1 && *(unsigned char *)(e + 1) == 1) {
            ((V410 *)(e + 0x10))->mCC(e + 0x450);
        }
    }
}

extern "C" int func_0040FB80(char *);

extern "C" int func_0040F320(char *);

extern "C" void func_0040F220(char *);

extern "C" unsigned char func_0040F1B0(char *p) {
    unsigned char r = (unsigned char)func_0040FB80(p) == 1 && (unsigned char)func_0040F320(p) == 1;
    func_0040F220(p);
    return r;
}

extern "C" {
extern char D_005BE098;
}

extern "C" {
int func_00195E20(...);
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
void func_0040EA40(char *);
}

class V130_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_0040E7C0(int p0) {
    int func_00206730(...);
    char *v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    int v5;
    v0 = (char *)p0;
    v2 = func_001AD100();
    v3 = 0;
    v4 = v0;
    do {
        v1 = (*(int *)(v4 + 264) + 1176);
        if (*(int *)(v4 + 264) != 0) {
            v2 = func_00206730(v1);
        }
        v3 = (v3 + 1);
        v4 = (v4 + 4);
    } while ((v3 < 24));
    if (*(unsigned char *)(v0 + 224) != 0) {
        v5 = *(unsigned char *)(v0 + 4);
        switch (v5) {
        case 0:
            ((V130_0_v *)v0)->m();
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
            break;
        case 1:
            func_0040EA40(v0);
            break;
        }
        v2 = func_00195E20(&D_005BE098, v0);
    }
    return v2;
}
}
