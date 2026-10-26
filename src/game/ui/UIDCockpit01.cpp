extern "C" char *func_00279290(char *);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2F20(char *, int, int);

class Obj40m {
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
    virtual void mD4(int);
};

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_0031BB30(char *p) {
    char *s;
    char *d;
    ((Obj40m *)(p + 0x40))->m3C(0);
    ((Obj40m *)(p + 0x40))->mD4(1);
    s = *(char **)((char *)func_00279290(p + 0x40) + 0x108) + 0x30;
    d = p + 0x640;
    QCOPY(d, s);
    s = *(char **)((char *)func_00279290(p + 0x40) + 0x108) + 0x70;
    d = p + 0x660;
    QCOPY(d, s);
    s = *(char **)((char *)func_00279290(p + 0x40) + 0x108) + 0xB0;
    d = p + 0x650;
    QCOPY(d, s);
    s = *(char **)((char *)func_00279290(p + 0x40) + 0x108) + 0xF0;
    d = p + 0x670;
    QCOPY(d, s);
    *(float *)(p + 0x680) = *(float *)(p + 0x684) = *(float *)(p + 0x688) = *(float *)(p + 0x68C) = 0.0f;
    *(float *)(p + 0x690) = 0.12f;
    *(float *)(p + 0x694) = 0.0f;
    *(float *)(p + 0x698) = 0.0f;
    *(float *)(p + 0x6A8) = 0.0f;
    *(int *)(p + 0x6AC) = 0;
    func_001A1E70((char *)func_00279290(p + 0x40), 0);
    func_001A1E70((char *)func_00279290(p + 0x40), 1);
    func_001A1E70((char *)func_00279290(p + 0x40), 2);
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
    switch (*(unsigned char *)(p + 0x6A5)) {
    case 0:
        break;
    case 1:
        func_001A2F20((char *)func_00279290(p + 0x40), 2, 0x767696);
        func_001A2F20((char *)func_00279290(p + 0x40), 3, 0x5656F6);
        break;
    case 2:
        func_001A2F20((char *)func_00279290(p + 0x40), 2, 0x767696);
        func_001A2F20((char *)func_00279290(p + 0x40), 3, 0xFA5A6E);
        break;
    }
}

class ObjLk2C {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual unsigned char m2C(char *, char *);
};

static inline char *hdrA(char *q) {
    if (*(int *)(q + 4) == 0) {
        return 0;
    }
    if (*(int *)(q + 8) == 0) {
        return 0;
    }
    return q + *(int *)(q + 8);
}

static inline char *hdrB(char *q) {
    if (*(unsigned int *)(q + 4) < 3) {
        return 0;
    }
    if (*(int *)(q + 0x10) == 0) {
        return 0;
    }
    return q + *(int *)(q + 0x10);
}

extern "C" int func_0031B9E0(char *p) {
    char *h = *(char **)(p + 0x38);
    char *a;
    char *b;
    if (**(unsigned short **)(h + 8) == 0) {
        a = hdrA(*(char **)(h + 0xC));
    } else {
        a = *(char **)(h + 0xC);
    }
    if (**(unsigned short **)(h + 8) == 0) {
        b = hdrB(*(char **)(h + 0xC));
    } else {
        b = *(char **)(h + 0xC);
    }
    if (((ObjLk2C *)(p + 0x40))->m2C(b, a) == 0) {
        return 0;
    }
    return 1;
}
