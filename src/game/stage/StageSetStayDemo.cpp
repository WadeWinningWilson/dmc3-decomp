class ObjB4E {
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
    virtual int mB4(int, int, int, int);
    virtual void e44();
    virtual void e45();
    virtual void e46();
    virtual void e47();
    virtual void e48();
    virtual void e49();
    virtual void e50();
    virtual void e51();
    virtual void e52();
    virtual void e53();
    virtual void mE0(float);
    virtual void e55();
    virtual float mE8();
};

extern "C" void func_002E5770(char *p, int a, int mode) {
    if (mode == 2) {
        *(char *)(p + 609) = 0;
    } else if (*(ObjB4E **)(p + 576) != 0) {
        *(char *)(p + 609) = 1;
        (*(ObjB4E **)(p + 576))->mB4(a, 0, 0, 0);
        if (mode == 0) {
            (*(ObjB4E **)(p + 576))->mE0(0.0f);
        } else if (mode == 1) {
            (*(ObjB4E **)(p + 576))->mE0((*(ObjB4E **)(p + 576))->mE8());
        }
    }
}

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_002E5250(char *);

extern "C" int func_002F7950(int, char *);

extern "C" unsigned char func_002F7B40(unsigned char, unsigned char);

extern "C" void func_001A5BD0(char *);

extern "C" void func_001A5C30(char *);

class V2E5 {
public:
    virtual void d8();
    virtual char *mC();
    virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C();
    virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C();
    virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80();
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
};

extern "C" int func_002F7820(V2E5 *, signed char);

extern "C" void func_002E5520(char *p) {
    if (*(unsigned char *)(p + 0x260) == 0) return;
    func_002E5250(p);
    if (*(unsigned char *)(p + 0x310) != 0) {
        func_0028C5C0(p + 0x320, 0, *(float *)(p + 0x10));
    }
    if (*(unsigned char *)(p + 0x263) == 0) return;
    *(unsigned char *)(p + 0x264) = func_002F7B40((unsigned char)func_002F7950(*(int *)(p + 0x39C), p + 0x300), *(unsigned char *)(p + 0x264));
    if (*(unsigned char *)(p + 0x264) >= 0x80) {
        (*(V2E5 **)(p + 0x240))->m8C();
        if ((unsigned char)func_002F7820(*(V2E5 **)(p + 0x240), *(signed char *)(p + 0x265)) == 0) {
            func_001A5BD0((*(V2E5 **)(p + 0x240))->mC());
        }
    } else {
        func_001A5C30((*(V2E5 **)(p + 0x240))->mC());
        (*(V2E5 **)(p + 0x240))->m84(*(unsigned char *)(p + 0x264), 1);
    }
}

extern "C" {
int func_0013D5D0(...);
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
};

class V8_1_iv {
public:
    virtual void m(int);
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
int func_002E5160(char *p0) {
    int v3;
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    if (*(int *)(p0 + 576) != 0) {
        ((V14_0_v *)(v0 + 580))->m();
        ((VD0_0_v *)*(char **)(v0 + 576))->m();
        ((V8_1_iv *)*(char **)(v0 + 576))->m(-1);
        v1 = func_0013D5D0((v0 + 560));
        *(int *)(v0 + 576) = 0;
    }
    v3 = 0;
    if ((0 < *(int *)(v0 + 220))) {
        v2 = (int)v0;
        do {
            v1 = func_0013D5D0((v2 + 224));
            v3 = (v3 + 1);
            v2 = (v2 + 16);
        } while ((v3 < *(int *)(v0 + 220)));
    }
    return v1;
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

extern "C" {
int func_002E5630(char *p0) {
    int v0;
    int v1;
    v0 = (int)p0;
    p0 = *(char **)(p0 + 576);
    if (p0 != 0) {
        v1 = ((VCC_1_ii *)p0)->m((v0 + 720));
    }
    return v1;
}
}
