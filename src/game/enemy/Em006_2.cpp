extern "C" char *func_00279290(char *);

extern "C" void func_001A5CC0(char *);

extern "C" void func_00138340(int);

extern "C" void func_001A23D0(char *);

extern "C" void func_001A5C30(char *);

extern "C" int func_001A5DA0(char *);

extern "C" void func_001A5D70(char *, short);

extern "C" void func_00104C00(char *, char *, char *);

class S40D {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual int m200(unsigned char *, float *, char *);
};

class A40D {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void mCC(char *);
};

typedef struct { int v[16]; } M40D;

extern "C" void func_0040DE20(char *p) {
    unsigned char c;
    float x;
    M40D m2;
    char m[64];
    unsigned char r;
    short n;
    r = ((S40D *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x410) + 0x104) + 0x30);
    if (r == 1) {
        func_001A5CC0(func_00279290(p + 0x4C0));
        func_00138340(c);
    } else {
        func_001A23D0(func_00279290(p + 0x4C0));
        func_001A5C30(func_00279290(p + 0x4C0));
    }
    m2 = *(M40D *)(p + 0x1E80);
    ((A40D *)(p + 0x4C0))->mCC((char *)&m2);
    if (*(unsigned char *)(p + 0x2620) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0xAC0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0xAC0));
            func_001A5C30(func_00279290(p + 0xAC0));
        }
        n = func_001A5DA0(func_00279290(p + 0x4C0));
        func_001A5D70(func_00279290(p + 0xAC0), n - 1);
        ((A40D *)(p + 0xAC0))->mCC(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2624)] + 0x104));
    }
    if (*(unsigned char *)(p + 0x2622) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0x16C0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0x16C0));
            func_001A5C30(func_00279290(p + 0x16C0));
        }
        func_00104C00(m, *(char **)(*(char **)(p + 0x428) + 0x104), p + 0x1F00);
        ((A40D *)(p + 0x16C0))->mCC(m);
    }
}
