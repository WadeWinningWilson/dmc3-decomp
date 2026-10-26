extern "C" void func_00104C00(char *, int, char *);

extern "C" char *func_002D9F00(char *, int);

class ObjC8 {
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
    virtual void mC8(char *);
};

extern "C" void func_00290220(char *p) {
    func_00104C00(p + 0x130, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x820);
    ((ObjC8 *)(p + 0x180))->mC8(p + 0x130);
}

extern "C" char D_00666750[];

extern "C" void func_001AD100(char *);

extern "C" char *func_00279290(char *);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_00208050(char *, int);

extern "C" int func_0028B8E0(char *);

extern "C" int func_0028B620(char *);

extern "C" void func_0028B980(char *, char *, int);

extern "C" char D_00549480[];

extern "C" void func_0028B610(char *);

extern "C" char *func_001AED80(char *, int, unsigned short, int);

extern "C" int func_002DA0B0(char *, int);

extern "C" void func_001A2000(char *, int);

extern "C" void func_0028BF50(char *);

class Obj180b {
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
    virtual void mB0(int, char *);
    virtual void dB4();
    virtual void mB8(int, int, int, int, int);
    virtual void mBC(float);
};

class Self144 {
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
    virtual void m144(int, float);
};

extern "C" void func_0028FF60(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0028B610(p);
        func_00208050(func_001AED80(D_00666750, 2, *(signed char *)(p + 0x46) * 15 + 9, 3), 1);
        *(char **)(p + 0xE4) = D_00549480;
        *(unsigned char *)(p + 0xDC) = 0;
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    case 1:
        if ((unsigned char)func_0028B8E0(p) == 0) {
            break;
        }
        *(unsigned char *)(p + 0xD9) = *(unsigned char *)(p + 0xD8);
        if ((unsigned char)func_0028B620(p) == 0) {
            *(unsigned char *)(p + 0xD8) = 1;
        } else {
            *(unsigned char *)(p + 0xD8) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
        }
        func_0028B980(p, p + 0x820, *(unsigned char *)(p + 0xD8));
        if (*(unsigned char *)(p + 0xDC) == 1) {
            ((Obj180b *)(p + 0x180))->mBC(*(float *)(p + 0x10));
        }
        switch (*(signed char *)(p + 0xDA)) {
        case 0:
        case 1:
            ((Obj180b *)(p + 0x180))->mB0(*(int *)(p + 0x860), p + 0x100);
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        case -1:
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        case 2:
        case 3:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2) ||
                *(unsigned char *)(p + 0xF8) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2)) {
                ((Obj180b *)(p + 0x180))->mB0(*(int *)(p + 0x860), p + 0x100);
                ((Obj180b *)(p + 0x180))->mB8(0, *(signed char *)(p + 0xDA), *(unsigned char *)(p + 0xDB), 0, 0);
                *(unsigned char *)(p + 0xDC) = 1;
            }
            break;
        }
        *(unsigned char *)(p + 0xF8) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
        if (*(unsigned char *)(p + 0xD8) != 1 && *(unsigned char *)(p + 0xD9) == 1) {
            ((Self144 *)p)->m144(8, 0.1f);
        }
        func_00104C00(p + 0x130, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x820);
        if ((unsigned char)func_002DA0B0(*(char **)(p + 0xE0), 9) != 1) {
            func_001A1E70(func_00279290(p + 0x180), 1);
        } else {
            func_001A2000(func_00279290(p + 0x180), 1);
        }
        func_0028BF50(p);
        break;
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
int func_00290270(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(signed char *)(p0 + 218) != -1) {
        ((VCC_1_pv *)(v0 + 384))->m((v0 + 304));
        v1 = func_0028BFE0(v0);
        if ((v1 & 255) == 1) {
            v1 = ((V10_0_i *)(v0 + 1920))->m();
        }
    }
    return v1;
}
}

extern "C" {
int func_0013D5D0(...);
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
int func_002902E0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 384))->m();
    if (*(unsigned char *)(v0 + 221) == 1) {
        v1 = ((V14_0_i *)(v0 + 1920))->m();
    }
    if ((0 < *(int *)(v0 + 264))) {
        v2 = 0;
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 268));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 264)));
    }
    return v1;
}
}
