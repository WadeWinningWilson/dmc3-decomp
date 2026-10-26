extern "C" int func_002DA0B0(char *, int);

extern "C" void func_00496570(char *);

extern "C" void func_004962A0(char *);

extern "C" int func_0033DA60(char *);

extern "C" int func_0011FA58(float);

extern "C" int func_00100330(int, int);

extern "C" void func_00104B80(float *, char *, char *);

extern "C" void func_00104C00(char *, int, char *);

class V495 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C();
    virtual void g120(float *);
    virtual void d124(); virtual void d128(); virtual void d12C(); virtual void d130();
    virtual char *g134(int);
};

extern "C" void func_00495A70(char *p) {
    float v[4] __attribute__((aligned(16)));
    float f;
    unsigned char ok;
    char *o;
    if ((unsigned char)func_002DA0B0(*(char **)(p + 0x3F0), 9) == 2) {
        func_00496570(p);
        return;
    }
    if ((*(float *)(p + 0x37C) -= *(float *)(p + 0x10)) < 0.0f) {
        func_004962A0(p);
        return;
    }
    if ((*(float *)(p + 0x380) -= *(float *)(p + 0x10)) < 0.0f) {
        func_00496570(p);
        return;
    }
    ok = 1;
    if (*(char **)(p + 0x3F4) == 0) {
        func_004962A0(p);
        return;
    }
    if ((unsigned char)func_0033DA60(*(char **)(p + 0x3F4)) == 0) {
        func_004962A0(p);
        return;
    }
    if (ok == 1) {
        f = -1.0f;
        (*(V495 **)(p + 0x3F4))->g120(&f);
        if (func_00100330(func_0011FA58(f), 0) != 0) {
            func_004962A0(p);
            return;
        }
        o = (*(V495 **)(p + 0x3F4))->g134(*(unsigned char *)(p + 0x373));
        if (o == 0) {
            func_004962A0(p);
            return;
        }
    }
    if (ok) {
        func_00104B80(v, *(char **)(o + 0x104), p + 0x390);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3B0) : "memory");
        func_00104C00(p + 0x3B0, *(int *)(o + 0x104), p + 0x3B0);
        *(float *)(p + 0x3E0) = v[0];
        *(float *)(p + 0x3E4) = v[1];
        *(float *)(p + 0x3E8) = v[2];
    }
    *(float *)(p + 0x50) = *(float *)(p + 0x3E0);
    *(float *)(p + 0x54) = *(float *)(p + 0x3E4);
    *(float *)(p + 0x58) = *(float *)(p + 0x3E8);
}

extern "C" {
int func_004956C0(char *);
}

class V130_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_00495310(char *p0) {
    int v2;
    char *v1;
    int v0;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        ((V130_1_iv *)p0)->m(v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        /* fall through */
    case 1:
        v2 = func_004956C0(v1);
        break;
    }
    return v2;
}
}
