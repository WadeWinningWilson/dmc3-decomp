extern "C" void func_003F3A90(char *);

extern "C" void func_004E1020(char *);

extern "C" void func_004E1520(char *);

extern "C" void func_004E1690(char *);

extern "C" void func_004E1990(char *);

class V130 {
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
    virtual void m130();
    virtual void d75();
    virtual void m138();
    virtual void m13C();
};

extern "C" void func_004E0BC0(char *p) {
    func_003F3A90(p + 0x220);
    switch (*(unsigned char *)(p + 4)) {
    case 0: ((V130 *)p)->m130(); break;
    case 1: func_004E1020(p); break;
    case 2: func_004E1520(p); break;
    case 3: func_004E1690(p); break;
    case 4: func_004E1990(p); break;
    case 5: ((V130 *)p)->m138();
    case 6: ((V130 *)p)->m13C(); break;
    }
}

extern "C" char D_00645A30[];

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_0013D6A0(char *);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_004E0880(char *);

class O4E0 {
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
    virtual float m7C();
};

extern "C" char *func_004E09F0(char *p0, int p1, int p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    int n;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x570, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_004E0880(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
        *(int *)(ret + 0x210) = p1;
        *(char **)(ret + 0x220) = p0;
        *(float *)(ret + 0x224) = 10.0f * p1;
        *(int *)(ret + 0x214) = p2;
        *(int *)(ret + 0x190) = *(int *)(p0 + 0x7F0);
        n = (int)(((O4E0 *)(p0 + 0x130))->m7C() / 300.0f);
        if (n > 3) n = 3;
        if (*(unsigned char *)(p0 + 0x1BD)) n = 4;
        *(char *)(ret + 0x22D) = n;
        *(int *)(ret + 0x560) = 0;
        *(int *)(ret + 0x564) = 0;
        *(char *)(ret + 0x45) = 4;
    }
    return ret;
}
