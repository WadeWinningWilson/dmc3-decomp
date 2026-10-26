extern "C" char *func_00279290(char *);

extern "C" void func_001AD140(char *);

extern "C" char D_00645A30[];

extern "C" void func_001AAD30(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" char *func_001B1610(int, char *);

extern "C" void func_003CA920(char *);

extern "C" void func_001B1440(char *, char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_001B1430(char *, int);

extern "C" void func_0013D240(char *, int);

extern "C" void func_001A1D90(char *);

class OA3CA {
public:
    virtual void u8();
    virtual char *mC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24(int);
    virtual void u28();
    virtual int m2C(char *, char *);
};

class OB3CA {
public:
    virtual void u8();
    virtual int mC(char *, char *);
};

class OC3CA {
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
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual int m154();
};

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" {
char *func_003CA630(char *p, char c) {
    extern char D_00666750[];
    extern char *func_001AED80(char *, int, unsigned short, int);
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *s0;
    char *s1;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x840, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x840, t);
        if (r != 0) {
            func_003CA920(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x5, **q);
        func_001B1430(**q, 1);
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
        *(char *)(ret + 0xD2) = 8;
        *(char *)(ret + 0xD3) = c;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
        *(char **)(ret + 0xE0) = p;
        s0 = func_001AED80(D_00666750, 2, *(signed char *)(ret + 0x46) * 15 + 8, 0);
        s1 = func_001AED80(D_00666750, 2, *(signed char *)(ret + 0x46) * 15 + 8, 1);
        ((OA3CA *)(ret + 0x100))->m24(1);
        if (!(unsigned char)((OA3CA *)(ret + 0x100))->m2C(s1, s0)) {
            func_001AD140(ret);
            return 0;
        }
        *(char **)(ret + 0xE8) = ret + 0x100;
        *(char *)(ret + 0xDD) = 0;
        if (*(unsigned char *)(*(char **)(ret + 0xE0) + 0x24F1) == 1 && (unsigned char)((OC3CA *)*(char **)(ret + 0xE0))->m154() == 1) {
            s0 = func_001AED80(D_00666750, 2, *(signed char *)(ret + 0x46) * 15 + 8, 3);
            if (!(unsigned char)((OB3CA *)(ret + 0x700))->mC(((OA3CA *)(ret + 0x100))->mC(), s0)) {
                func_001AD140(ret);
                return 0;
            }
            func_001A1D90(func_00279290(ret + 0x100));
            *(char *)(ret + 0xDD) = 1;
        }
    }
    return ret;
}
}

extern "C" {
extern char D_005492F0[];
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
void func_00208050(int, int);
}

extern "C" {
void func_0028B610(char *);
}

extern "C" {
int func_0028B620(char *);
}

extern "C" {
int func_0028B8E0(char *);
}

extern "C" {
int func_0028B980(char *, char *, int);
}

extern "C" {
int func_0028BF50(int);
}

class V144_2_ifi {
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
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual int m(int, float);
};

extern "C" {
void func_003CA9D0(int p0) {
    extern char D_00666750[];
    int func_001AED80(char *, int, int, int);
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp3;
    int tmp6;
    int tmp9;
    v0 = (char *)p0;
    v1 = func_001AD100();
    v2 = *(unsigned char *)(v0 + 4);
    switch (v2) {
    case 0:
        func_0028B610(v0);
        tmp3 = func_001AED80(D_00666750, 2, ((((*(signed char *)(v0 + 70) << 4) - *(signed char *)(v0 + 70)) + 8) & 65535), 2);
        func_00208050(tmp3, 1);
        *(char **)(v0 + 228) = D_005492F0;
        *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
        /* fall through */
    case 1:
        v1 = func_0028B8E0(v0);
        if ((v1 & 255) != 0) {
            *(char *)(v0 + 217) = *(unsigned char *)(v0 + 216);
            tmp6 = func_0028B620(v0);
            if ((tmp6 & 255) == 0) {
                *(char *)(v0 + 216) = 1;
            } else {
                *(char *)(v0 + 216) = *(unsigned char *)(*(char **)(v0 + 224) + 9426);
            }
            v1 = func_0028B980(v0, (v0 + 2000), *(unsigned char *)(v0 + 216));
            if (*(unsigned char *)(v0 + 216) != 1) {
                if (*(unsigned char *)(v0 + 217) == 1) {
                    v1 = ((V144_2_ifi *)v0)->m(8, 0.10000000149011612f);
                }
            }
            tmp9 = *(signed char *)(v0 + 218);
            v3 = (int)v0;
            if (tmp9 != -1) {
                v1 = func_0028BF50(v3);
            }
        }
        break;
    }
}
}

extern "C" {
int func_0028BFE0(char *);
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class VCC_1_pv {
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
    virtual void m(char *);
};

extern "C" {
int func_003CAB90(int p0) {
    char *v0;
    int v1;
    v0 = (char *)p0;
    ((VCC_1_pv *)(v0 + 256))->m((v0 + 1936));
    v1 = func_0028BFE0(v0);
    if ((v1 & 255) == 1) {
        v1 = ((V10_0_i *)(v0 + 1792))->m();
    }
    return v1;
}
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

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
int func_003CABF0(int p0) {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 256))->m();
    if (*(unsigned char *)(v0 + 221) == 1) {
        v1 = ((V14_0_i *)(v0 + 1792))->m();
    }
    return v1;
}
}
