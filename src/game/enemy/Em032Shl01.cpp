extern "C" {
int func_001AD140(char *p);
}

extern "C" void func_00206730(char *);

extern "C" char D_01CAFF0C[];

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_0034BA60(int, char *, int, int, int);

extern "C" void func_001AD100(char *);

extern "C" void func_003DDDC0(char *);

extern "C" void func_004F7370(char *);

extern "C" void func_004F6E90(char *);

extern "C" void func_004F6F80(char *);

extern "C" void func_004F7060(char *);

extern "C" void func_004F71E0(char *);

extern "C" float func_0011DBE0(float, float);

class W4F6 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
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
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void mC8(char *);
};

extern "C" void func_004F6C50(char *p) {
    unsigned int f;
    func_001AD100(p);
    func_00206730(p + 0xBA0);
    func_003DDDC0(p + 0xBA4);
    if (*(char **)(p + 0xBA0) == 0) {
        func_001AD140(p);
        return;
    }
    f = 0;
    if (*(char **)(p + 0x99C) != 0) {
        f = *(unsigned int *)(*(char **)(p + 0x99C) + 8);
    }
    if (f & 0x30540) {
        func_004F7370(p);
        func_0034BA60(0x28, p + 0x50, 0x35, 0, 1);
        func_001AD140(p);
        return;
    }
    if (*(char **)(p + 0xBA4) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0xBA4) + 0x1424) == 0xA) {
        func_001AD140(p);
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xBD0), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
    *(float *)(p + 0xBD4) = *(float *)(p + 0xBD4) + 100.0f;
    *(float *)(p + 0xBDC) = 1.0f;
    switch ((unsigned char)*(unsigned char *)(p + 5)) {
    case 0:
        func_004F6E90(p);
        break;
    case 1:
        func_004F6F80(p);
        break;
    case 2:
        func_004F7060(p);
        break;
    }
    func_004F71E0(p);
    *(short *)(p + 0x90) = (int)(65536.0f * func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8)) / 6.283185f + 0.5f);
    func_0028C5C0(p + 0x920, 0, *(float *)(p + 0x10));
    ((W4F6 *)(p + 0x200))->mC8(p + 0x8E0);
    if ((*(float *)(p + 0xBB0) -= *(float *)(p + 0x10)) < 0.0f) {
        *(float *)(p + 0xBB0) = 15.0f;
        func_0034BA60(0x30, p + 0x50, 0x35, 0, 1);
    }
}

class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" {
extern "C" void func_004F71C0(char *p) {
    ((SubCCc *)(p + 0x200))->mCC(p + 0x8E0);
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

extern "C" {
int func_004F7100(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 512))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 336))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 340));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 336)));
    }
    return v1;
}
}
