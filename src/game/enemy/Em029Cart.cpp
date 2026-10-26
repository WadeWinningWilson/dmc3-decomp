class ObjV134 {
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
    virtual int m134(int);
};

extern "C" float func_0041DB40(char *);

extern "C" {
void func_00493D20(char *p) {
    extern int func_0041D6B0(float *, float);
    extern void func_00492E20(char *, int);
    extern char *func_003D0CB0(char *, int, int, int, int, int);
    char *e;
    if (func_0041DB40(p + 0x50) < 600.0f) {
        func_00492E20(p, *(unsigned char *)(p + 0x3C94));
        return;
    }
    switch (((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)]) {
    case 0:
        ((signed char *)(p + 0x3CA8))[*(int *)(p + 0x3C94)] = 0;
        ((unsigned char *)(p + 0x3CB8))[*(int *)(p + 0x3C94)] = 6;
        ((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)] = 1;
    case 1:
        e = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((ObjV134 *)p)->m134(0x11), 0,
                          ((signed char *)(p + 0x3CA8))[*(int *)(p + 0x3C94)]);
        if (e != 0) {
            ((ObjV134 *)e)->m130();
        }
        ((float *)(p + 0x3CC8))[*(int *)(p + 0x3C94)] = 15.0f;
        ((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)] = 2;
    case 2:
        if ((unsigned char)func_0041D6B0((float *)(p + *(int *)(p + 0x3C94) * 4 + 0x3CC8), *(float *)(p + 0x10)) == 1) {
            ((signed char *)(p + 0x3CA8))[*(int *)(p + 0x3C94)]++;
            if (!(((signed char *)(p + 0x3CB8))[*(int *)(p + 0x3C94)] > ((signed char *)(p + 0x3CA8))[*(int *)(p + 0x3C94)])) {
                ((float *)(p + 0x3CC8))[*(int *)(p + 0x3C94)] = 60.0f;
                ((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)] = 3;
            } else {
                ((float *)(p + 0x3CC8))[*(int *)(p + 0x3C94)] = 6.0f;
                ((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)] = 1;
            }
        }
        break;
    case 3:
        if ((unsigned char)func_0041D6B0((float *)(p + *(int *)(p + 0x3C94) * 4 + 0x3CC8), *(float *)(p + 0x10)) == 1) {
            func_00492E20(p, *(unsigned char *)(p + 0x3C94));
        }
        break;
    }
}
}

extern "C" void func_0024DA80(char *, int, int);

extern "C" void func_001AD140(char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char *func_00279290(char *);

extern "C" void func_001A2180(char *, int, int);

extern "C" {
void func_0024DD30(char *p);
}

class B0_492 {
public:
    char pad[0x40];
};

class B1_492 {
public:
    int x;
};

class D_492 : public B0_492, public B1_492 {
public:
    int y;
};

class S492 {
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
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void m1F4(char *, int);
};

class W492 {
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

extern "C" {
void func_00492580(D_492 *self) {
    extern void func_0041D840(char *, char *, float);
    extern char *func_00207480(int, int, int, int);
    extern char D_005BE098[4];
    extern int func_0041D6B0(float *, float);
    char *p = (char *)self;
    char *e;
    *(int *)(p + 0x110) |= 4;
    func_0024DD30(p + 0x2B20);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(int *)(*(char **)(p + 0x90C) + 0x8FC) |= 0x10;
        func_0024DA80(p + 0x2B20, 0, 0xD);
        *(float *)(p + 0x8F8) = 60.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x8F8), *(float *)(p + 0x10)) == 1) {
            e = func_00207480(3, 0x2DF, 0, 0x10);
            if (e != 0) {
                *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xA5C) + 0x104);
                e[0x9A] = 0;
                e[0x3A] = 1;
            }
            *(unsigned char *)(p + 6) = 2;
            *(float *)(p + 0x8F8) = 60.0f;
        }
        break;
    case 2:
        func_001A2180(func_00279290(p + 0xC00), (int)(unsigned int)*(float *)(p + 0x8F8), 1);
        if ((unsigned char)func_0041D6B0((float *)(p + 0x8F8), *(float *)(p + 0x10)) == 1) {
            ((S492 *)p)->m1F4(p + 0x9B0, 1);
            func_001AD140(p);
        }
        break;
    }
    func_0041D840((char *)(B1_492 *)self, p + 0x860, 1.0f);
    *(short *)(p + 0x96E) = *(short *)(p + 0x90);
    ((W492 *)(p + 0xC00))->mC8(p + 0x8A0);
    if (((*(unsigned int *)(p + 0x8FC) & 0x80000000) != 0) == 0) {
        func_00195E20(D_005BE098, p);
    }
}
}

class Ef493 {
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
};

class Self493 {
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
    virtual int m134(int);
};

#define IDX (*(int *)(p + 0x3C94))

#define ST (*(unsigned char *)((char *)IDX + (int)p + 0x3C98))

#define TM ((float *)((char *)(IDX * 4) + (int)p + 0x3CC8))

#define TM2 ((float *)(p + IDX * 4 + 0x3CC8))

extern "C" {
void func_004934F0(char *p) {
    extern void func_00492E20(char *, unsigned char);
    extern Ef493 *func_003D0CB0(char *, int, int, int, int, int);
    extern int func_0041D6B0(float *, float);
    unsigned char f;
    unsigned char i;
    unsigned char j;
    Ef493 *o;
    f = 0;
    if (*(unsigned char *)(p + 0x8EB) < 2) f = 1;
    if (*(unsigned char *)(p + 0x8EB) == 0) {
        func_00492E20(p, *(unsigned char *)(p + 0x3C94));
    } else if (func_0041DB40(p + 0x50) < 600.0f) {
        func_00492E20(p, *(unsigned char *)(p + 0x3C94));
    } else {
        switch (ST) {
        case 0:
            for (i = 0; i < 3; i++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)i);
                if (o != 0) o->m130();
            }
            if (f) {
                *TM = 60.0f;
            } else {
                *TM = 30.0f;
            }
            ST = 1;
        case 1:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) ST = 2;
            break;
        case 2:
            for (i = 0; i < 3; i++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)i | 0x10);
                if (o != 0) o->m130();
            }
            if (f) {
                *TM = 60.0f;
            } else {
                *TM = 30.0f;
            }
            ST = 3;
        case 3:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) ST = 4;
            break;
        case 4:
            for (i = 0; i < 3; i++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)i | 0x20);
                if (o != 0) o->m130();
            }
            if (f) {
                *TM = 60.0f;
            } else {
                *TM = 30.0f;
            }
            ST = 5;
        case 5:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) {
                if (f) {
                    func_00492E20(p, *(unsigned char *)(p + 0x3C94));
                } else {
                    ST = 6;
                }
            }
            break;
        case 6:
            for (j = 0; j < 3; j++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)j | 0x10);
                if (o != 0) o->m130();
            }
            *TM = 30.0f;
            ST = 7;
        case 7:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) ST = 8;
            break;
        case 8:
            for (j = 0; j < 3; j++) {
                o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((Self493 *)p)->m134(0x11), 2, (unsigned char)j | 0x20);
                if (o != 0) o->m130();
            }
            *TM = 30.0f;
            ST = 9;
        case 9:
            if ((unsigned char)func_0041D6B0(TM2, *(float *)(p + 0x10)) == 1) func_00492E20(p, *(unsigned char *)(p + 0x3C94));
            break;
        }
    }
}
}

extern "C" void func_0034BA60(int, char *, int, int, int);

class V494 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C();
    virtual void g130();
    virtual char *g134(int);
};

extern "C" {
void func_00494260(char *p) {
    extern char *func_00207480(int, int, char *, int);
    extern int func_0041D6B0(char *, float);
    extern char *func_004B9710(char *, int, int, char *, int, int);
    extern void func_00492E20(char *, unsigned char);
    char *e;
    char *o;
    char *q;
    switch (*(unsigned char *)((char *)*(int *)(p + 0x3C94) + (int)p + 0x3C98)) {
    case 0:
        *(float *)((char *)(*(int *)(p + 0x3C94) * 4) + (int)p + 0x3CC8) = 10.0f;
        *(unsigned char *)((char *)*(int *)(p + 0x3C94) + (int)p + 0x3C98) = 1;
        *(unsigned char *)((char *)*(int *)(p + 0x3C94) + (int)p + 0x3CA8) = 0;
        *(unsigned char *)((char *)*(int *)(p + 0x3C94) + (int)p + 0x3CB8) = 5;
    case 1:
        if ((unsigned char)func_0041D6B0(p + *(int *)(p + 0x3C94) * 4 + 0x3CC8, *(float *)(p + 0x10)) == 1) {
            e = func_004B9710(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((V494 *)p)->g134(5), 0, 0);
            if (e != 0) {
                o = (*(V494 **)(p + 0x90C))->g134(6);
                ((V494 *)e)->g130();
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(e + 0x50), "r"(*(char **)(o + 0x104) + 0x30) : "memory");
            }
            func_0034BA60(0x4A, p + 0x50, 0x32, 0, 1);
            q = func_00207480(3, 0x322, 0, 0x10);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)((*(V494 **)(p + 0x90C))->g134(6) + 0x104);
                *(unsigned char *)(q + 0x9A) = 0;
                *(unsigned char *)(q + 0x3A) = 1;
            }
            (*(signed char *)((char *)*(int *)(p + 0x3C94) + (int)p + 0x3CA8))++;
            *(float *)((char *)(*(int *)(p + 0x3C94) * 4) + (int)p + 0x3CC8) = 180.0f;
            if (*(signed char *)((char *)*(int *)(p + 0x3C94) + (int)p + 0x3CB8) < *(signed char *)((char *)*(int *)(p + 0x3C94) + (int)p + 0x3CA8)) {
                *(unsigned char *)((char *)*(int *)(p + 0x3C94) + (int)p + 0x3C98) = 2;
                *(float *)((char *)(*(int *)(p + 0x3C94) * 4) + (int)p + 0x3CC8) = 600.0f;
            }
        }
        break;
    case 2:
        if ((unsigned char)func_0041D6B0(p + *(int *)(p + 0x3C94) * 4 + 0x3CC8, *(float *)(p + 0x10)) == 1) func_00492E20(p, *(unsigned char *)(p + 0x3C94));
        break;
    }
}
}

class V493 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C();
    virtual void g130();
    virtual int g134(int);
};

#define I493 (*(int *)(p + 0x3C94))

extern "C" {
void func_00493A60(char *p) {
    extern int func_0041D6B0(char *, float);
    extern void func_00492E20(char *, unsigned char);
    extern V493 *func_004B9710(char *, int, char *, int, int, int);
    extern V493 *func_003D0CB0(char *, int, char *, int, int, int);
    int i = I493;
    V493 *o;
    switch (*(unsigned char *)((char *)i + (int)p + 0x3C98)) {
    case 0:
        if (*(unsigned char *)(*(char **)(p + 0x90C) + 0x974) < 0x1E) {
            o = func_004B9710(p + 0x9B0, *(int *)(p + 0x9F0), p, ((V493 *)p)->g134(5), 3, 0);
            if (o != 0) o->g130();
            *(float *)((char *)(I493 * 4) + (int)p + 0x3CC8) = 30.0f;
        } else {
            *(float *)((char *)(i * 4) + (int)p + 0x3CC8) = 1.0f;
        }
        *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0(p + I493 * 4 + 0x3CC8, *(float *)(p + 0x10)) == 1) {
            *(float *)((char *)(I493 * 4) + (int)p + 0x3CC8) = 6.0f;
            *(unsigned char *)((char *)I493 + (int)p + 0x3CA8) = 0;
            if (*(unsigned char *)(p + 0x8EB) == 0) *(unsigned char *)((char *)I493 + (int)p + 0x3CB8) = 3;
            else *(unsigned char *)((char *)I493 + (int)p + 0x3CB8) = 5;
            *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 2;
        }
        break;
    case 2:
        o = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(char **)(p + 0x90C), ((V493 *)p)->g134(0x11), 1, *(signed char *)((char *)(i + (int)p) + 0x3CA8));
        if (o != 0) o->g130();
        *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 3;
    case 3:
        if ((unsigned char)func_0041D6B0(p + I493 * 4 + 0x3CC8, *(float *)(p + 0x10)) == 1) {
            (*(signed char *)((char *)I493 + (int)p + 0x3CA8))++;
            if (*(signed char *)((char *)I493 + (int)p + 0x3CB8) <= *(signed char *)((char *)I493 + (int)p + 0x3CA8)) {
                *(float *)((char *)(I493 * 4) + (int)p + 0x3CC8) = 60.0f;
                *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 4;
            } else {
                *(float *)((char *)(I493 * 4) + (int)p + 0x3CC8) = 6.0f;
                *(unsigned char *)((char *)I493 + (int)p + 0x3C98) = 2;
            }
        }
        break;
    case 4:
        if ((unsigned char)func_0041D6B0(p + i * 4 + 0x3CC8, *(float *)(p + 0x10)) == 1) func_00492E20(p, *(unsigned char *)(p + 0x3C94));
        break;
    }
}
}

class V10492 {
public:
    virtual void d0();
    virtual void d1();
    virtual void m10(float);
    virtual void m14(float);
};

class VC8492 {
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

class A492 {
public:
    char pad[0x40];
};

class B492 {
public:
    int x;
};

class P492 : public A492, public B492 {
public:
    int y;
};

extern "C" char D_01CAFF0C[];

extern "C" void func_00376780(P492 *);

extern "C" void func_004930F0(P492 *);

extern "C" void func_00492E60(P492 *);

extern "C" void func_00493290(P492 *, int, char *, char *);

extern "C" void func_0028C740(char *);

extern "C" void func_0028C910(char *);

extern "C" void func_0028C3A0(char *, int, int, int);

extern "C" void func_0028C5C0(char *, float, unsigned char);

static inline int gt492(float x) { return x > 0.0f; }

static inline unsigned char fl492(char *p, unsigned int m) { return (*(unsigned int *)(*(char **)(p + 0x90C) + 0x8FC) & m) != 0; }

extern "C" {
void func_004921A0(P492 *q) {
    extern char D_005BE098[8];
    extern void func_0041D840(B492 *, char *, float);
    char *p = (char *)q;
    unsigned short h;
    char *e;
    unsigned int i;
    unsigned short t;
    char *o;
    char *r;
    char *g;
    unsigned char u;
    char *w;
    func_00376780(q);
    func_004930F0(q);
    func_00492E60(q);
    ((V10492 *)(p + 0x2A90))->m10(*(float *)(p + 0x10));
    ((V10492 *)(p + 0x3850))->m14(*(float *)(p + 0x10));
    func_00493290(q, 4, p + 0x3C80, p + 0x3C88);
    func_00493290(q, 6, p + 0x3C82, p + 0x3C8A);
    func_00493290(q, 8, p + 0x3C84, p + 0x3C8C);
    func_00493290(q, 10, p + 0x3C86, p + 0x3C8E);
    if (fl492(p, 0x10) == 1) {
        *(unsigned char *)(p + 0x2F3C) = 0;
        func_0041D840(q, p + 0x860, 1.0f);
        *(short *)(p + 0x96E) = *(short *)(p + 0x90);
        ((VC8492 *)(p + 0xC00))->mC8(p + 0x8A0);
    } else {
        *(unsigned char *)(p + 0x2F3C) = 1;
        ((VC8492 *)(p + 0xC00))->mC8(*(char **)(p + 0x90C) + 0x8A0);
    }
    if (fl492(p, 0x2000000) == 1) func_0028C740(p + 0x3580);
    if (fl492(p, 0x1000000) == 1) {
        func_0028C910(p + 0x3580);
        func_0028C3A0(p + 0x3580, 0, -1, *(int *)(*(char **)(p + 0xA60) + 0x104));
        if ((o = *(char **)(p + 0x35FC)) != 0) {
            *(unsigned char *)(o + 2) = 1;
            *(unsigned char *)(o + 4) = 1;
        }
        if ((o = *(char **)(p + 0x35FC)) != 0) {
            *(unsigned char *)(o + 0xC4) = 3;
            *(unsigned char *)(o + 0xC5) = u;
            *(unsigned char *)(o + 0xC6) = 8;
            *(unsigned char *)(o + 0xC7) = 0;
        }
    }
    if (!fl492(p, 0x80000000) && !fl492(p, 0x40000000)) {
        func_0028C5C0(p + 0x3580, *(float *)(p + 0x10), gt492(*(float *)(p + 0x908)));
        func_0028C5C0(p + 0x3360, *(float *)(p + 0x10), gt492(*(float *)(p + 0x908)));
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    e = *(char **)(p + 0x35FC);
    t = *(unsigned short *)(*(char **)(p + 0x90C) + 0x970) & 0xFF00;
    *(unsigned short *)(*(char **)(p + 0x90C) + 0x970) &= 0xFF;
    *(unsigned short *)(*(char **)(p + 0x90C) + 0x970) |= (unsigned short)(t << 1);
    if (e != 0 && (*(int *)(e + 8) & 0x1000) && !(*(float *)(g + 0x54) <= 400.0f + *(float *)(p + 0x54))) {
        *(unsigned short *)(*(char **)(p + 0x90C) + 0x970) |= 0x100;
    }
    if (!fl492(p, 0x80000000)) {
        func_00195E20(D_005BE098, p);
        for (i = 0, r = p; i < 8; i++, r += 4) {
            if ((o = *(char **)(r + 0x914)) != 0) *(unsigned char *)(o + 0x3B) = 0;
        }
        if (*(char **)(p + 0x938) != 0) *(unsigned char *)(*(char **)(p + 0x938) + 0x3B) = 0;
        if (*(char **)(p + 0x934) != 0) *(unsigned char *)(*(char **)(p + 0x934) + 0x3B) = 0;
        if (*(char **)(p + 0x940) != 0) *(unsigned char *)(*(char **)(p + 0x940) + 0x3B) = 0;
    } else {
        for (i = 0, w = p; i < 8; i++, w += 4) {
            if ((o = *(char **)(w + 0x914)) != 0) *(unsigned char *)(o + 0x3B) = 1;
        }
        if (*(char **)(p + 0x938) != 0) *(unsigned char *)(*(char **)(p + 0x938) + 0x3B) = 1;
        if (*(char **)(p + 0x934) != 0) *(unsigned char *)(*(char **)(p + 0x934) + 0x3B) = 1;
        if (*(char **)(p + 0x940) != 0) *(unsigned char *)(*(char **)(p + 0x940) + 0x3B) = 1;
    }
}
}

class VO49A;

class A49A {
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
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void d191();
    virtual void d192();
    virtual void d193();
    virtual void d194();
    virtual void d195();
    virtual void d196();
    virtual void d197();
    virtual void d198();
    virtual void d199();
    virtual void d200();
    virtual void d201();
    virtual void d202();
    virtual void d203();
    virtual void d204();
    virtual void d205();
    virtual void d206();
    virtual void d207();
    virtual void d208();
    virtual void d209();
    virtual void d210();
    virtual void d211();
    virtual void m358(char *, VO49A *);
    char pad[0x3C];
};

class B49A {
public:
    int x;
};

class VO49A {
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
    virtual void m34(char *, B49A *);
    virtual void m38(char *, B49A *);
};

class P49A : public A49A, public B49A {
public:
    int y;
};

class V1D049A {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual unsigned char m1C();
};

class V3A9449A {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int, char *, char *, VO49A *, char *);
};

class V97C49A {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(char *, VO49A *, int);
};

static inline int fl49A(void) { return (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2898) & 2) != 0; }

extern "C" void func_00492A10(P49A *q, char *e, VO49A *o, char *pos) {
    char *p = (char *)q;
    float a;
    float b;
    unsigned char f;
    char *m;
    f = 0;
    a = *(float *)(*(char **)(p + 0x90C) + 0x99C);
    b = *(float *)(*(char **)(p + 0x90C) + 0x9A0);
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    if (*(float *)(*(char **)(p + 0x90C) + 0x998) <= 0.0f) return;
    *(float *)(p + 0x3B00) = 5.0f;
    *(unsigned char *)(p + 0x3ABC) = 1;
    *(float *)(p + 0x964) = 60.0f;
    switch (*(signed char *)(e + 2)) {
    case 0:
        switch (((V1D049A *)(p + 0x1D0))->m1C()) {
        case 0:
            func_0034BA60(*(int *)(e + 0x34) + 10, pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A9449A *)(p + 0x3A94))->m18(0, pos, e, o, *(char **)(p + 0x90C) + 0x8A0);
            if (*(char **)(p + 0x90C) != 0) ((V97C49A *)(*(char **)(p + 0x90C) + 0x97C))->m14(e, o, *(int *)(p + 0x11C));
            m = *(char **)(p + 0x90C);
            if (*(unsigned short *)(m + 0x970) != 0) f = 1;
            else if (*(float *)(m + 0x68) < 5.0f) f = 1;
            else if (!fl49A()) f = 1;
            if (f == 1) o->m38(e, q);
            else o->m34(e, q);
            break;
        case 2:
            func_0034BA60(*(int *)(e + 0x34) + 10, pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A9449A *)(p + 0x3A94))->m18(2, pos, e, o, *(char **)(p + 0x90C) + 0x8A0);
            q->m358(e, o);
            break;
        }
        break;
    case 1:
        switch (((V1D049A *)(p + 0x1D0))->m1C()) {
        case 0:
            func_0034BA60(*(int *)(e + 0x34) + 10, pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A9449A *)(p + 0x3A94))->m18(0, pos, e, o, *(char **)(p + 0x90C) + 0x8A0);
            if (*(char **)(p + 0x90C) != 0) ((V97C49A *)(*(char **)(p + 0x90C) + 0x97C))->m14(e, o, *(int *)(p + 0x11C));
            o->m38(e, q);
            break;
        case 2:
            func_0034BA60(*(int *)(e + 0x34) + 10, pos, *(signed char *)(p + 0x46), 0, 1);
            ((V3A9449A *)(p + 0x3A94))->m18(2, pos, e, o, *(char **)(p + 0x90C) + 0x8A0);
            q->m358(e, o);
            break;
        }
        break;
    }
    *(float *)(*(char **)(p + 0x90C) + 0x99C) = a;
    *(float *)(*(char **)(p + 0x90C) + 0x9A0) = b;
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_0028C790(char *, int);
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
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
int func_00492910(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 3072))->m();
    ((V14_0_v *)(v0 + 10896))->m();
    ((V14_0_v *)(v0 + 10752))->m();
    v2 = func_0028C790((v0 + 13696), 0);
    v1 = 0;
    if ((0 < *(int *)(v0 + 528))) {
        v3 = (int)v0;
        do {
            v2 = func_0013D5D0((v3 + 532));
            v1 = (v1 + 1);
            v3 = (v3 + 16);
        } while ((v1 < *(int *)(v0 + 528)));
    }
    return v2;
}
}
