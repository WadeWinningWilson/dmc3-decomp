extern "C" void func_001A5C30(char *);

extern "C" void func_001A5BA0(char *, signed char);

extern "C" void func_001A5BD0(char *);

class Snd0C {
public:
    virtual void d0();
    virtual char *m0C();
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
    virtual void m84(int, int);
};

extern "C" int func_002F7820(Snd0C *o, int k0) {
    if ((signed char)k0 <= 0) return 0;
    if ((signed char)k0 < 31) {
        func_001A5BA0(o->m0C(), (signed char)k0);
        return 1;
    }
    switch ((signed char)k0) {
    case 31:
        func_001A5BD0(o->m0C());
        return 1;
    case 32:
        func_001A5C30(o->m0C());
        return 1;
    case 33:
        func_001A5C30(o->m0C());
        o->m84(0x80, 1);
        return 1;
    }
    return 0;
}

class V44_2_iii {
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
    virtual int m(int, int);
};

extern "C" {
int func_002F77B0(char *p0, int p1) {
    int v0;
    int v1;
    v0 = (signed char)p1;
    switch (v0) {
    case 0:
        v1 = ((V44_2_iii *)p0)->m(2, v0);
        break;
    case 1:
        v1 = ((V44_2_iii *)p0)->m(1, v0);
        break;
    case -1:
        break;
    }
    return v1;
}
}
