extern "C" char *func_00279290(char *);

extern "C" char D_01CAFF0C[];

extern "C" void func_001A1F90(char *);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2000(char *, int);

extern "C" unsigned char D_01CAFF40[];

extern "C" int func_0024D640(char *);

extern "C" char *func_002F0A50(char *, float *);

extern "C" int func_00133C10(float *, int, int);

extern "C" int func_0034D2D0(char *, float *, char *);

class V34C {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); 
    virtual void f120(float *);
    virtual void f124(float *);
};

extern "C" void func_0034CC10(char *p) {
    float v[4] __attribute__((aligned(16)));
    float a;
    float b;
    char *e;
    char *o;
    float r;
    e = *(char **)(*(char **)D_01CAFF0C + 0xC);
    func_001A1F90(func_00279290(p + 0x40));
    if (D_01CAFF40[0] == 0) return;
    if ((unsigned char)func_0024D640(e) != 1) return;
    o = func_002F0A50(e + 0x2B58, v);
    if (o == 0) return;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(o + 0x20) : "memory");
    v[3] = 1.0f;
    if (func_00133C10(v, 0, 0)) return;
    if ((*(char **)(p + 0x640) = *(char **)(o + 8)) == 0) return;
    if ((unsigned char)func_0034D2D0(p, v, p + 0x660) != 1) return;
    ((V34C *)*(char **)(p + 0x640))->f120(&a);
    ((V34C *)*(char **)(p + 0x640))->f124(&b);
    if (a < 0.0f || b < 0.0f) {
        r = 1.0f;
    } else {
        r = a / b;
    }
    func_001A1E70(func_00279290(p + 0x40), 0);
    if (!(r <= 0.75f)) {
        func_001A1E70(func_00279290(p + 0x40), 1);
        func_001A1E70(func_00279290(p + 0x40), 2);
        func_001A1E70(func_00279290(p + 0x40), 3);
        func_001A1E70(func_00279290(p + 0x40), 4);
    } else if (!(r <= 0.5f)) {
        func_001A2000(func_00279290(p + 0x40), 1);
        func_001A1E70(func_00279290(p + 0x40), 2);
        func_001A1E70(func_00279290(p + 0x40), 3);
        func_001A1E70(func_00279290(p + 0x40), 4);
    } else if (!(r <= 0.25f)) {
        func_001A2000(func_00279290(p + 0x40), 1);
        func_001A1E70(func_00279290(p + 0x40), 2);
        func_001A2000(func_00279290(p + 0x40), 3);
        func_001A1E70(func_00279290(p + 0x40), 4);
    } else {
        func_001A2000(func_00279290(p + 0x40), 1);
        func_001A2000(func_00279290(p + 0x40), 2);
        func_001A2000(func_00279290(p + 0x40), 3);
        func_001A1E70(func_00279290(p + 0x40), 4);
    }
}

extern "C" void func_001AD140(char *);

extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_0034C4D0(char *);

extern "C" int func_0034C7A0(char *);

extern "C" char *func_0034C670(int p0) {
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
    **q = func_001B0FD0(a, 0xE00, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0034C4D0(t);
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
        if ((unsigned char)func_0034C7A0(ret) == 0) {
            func_001AD140(ret);
            ret = 0;
        }
    }
    return ret;
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
int func_0034D4E0(int p0) {
    int tmp0;
    ((VD0_0_v *)(p0 + 64))->m();
    tmp0 = ((VD0_0_i *)(p0 + 1792))->m();
    return tmp0;
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
int func_0034D520(int p0) {
    int tmp0;
    ((VCC_1_iv *)(p0 + 64))->m((p0 + 1696));
    tmp0 = ((VCC_1_ii *)(p0 + 1792))->m((p0 + 3392));
    return tmp0;
}
}
