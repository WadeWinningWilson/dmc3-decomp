class Col355 {
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
    virtual void m78(int, int);
};

class R2E7;

class B2E7 {
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
    virtual void m34(char *, R2E7 *);
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void m44(char *, R2E7 *);
};

class R2E7 {
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
    virtual void m34(char *, B2E7 *);
    virtual void m38(char *, B2E7 *);
};

class T2E7 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(char *, R2E7 *, char *);
};

class U2E7 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual int m1C();
    virtual int m20();
};

class W2E7 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(int, int, char *, R2E7 *);
};

extern "C" void func_0034BA60(int, int, signed char, int, int);

#define TBL (*(char **)(p + 0xC))

#define TA (*(T2E7 **)(p + 0x14))

#define BB (*(B2E7 **)(p + 0x18))

#define UU (*(U2E7 **)(p + 0x44))

#define WW (*(W2E7 **)(p + 0x48))

#define B6 (*((signed char *)BB + 6))

#define C ((Col355 *)(p + 0x4EC0))
extern "C" void func_002E7CC0(char *p, char *q, R2E7 *r, int s) {
    if (*(unsigned char *)((char *)q[2] + (int)TBL + 0x28) != 0) {
        switch (q[2]) {
        case 0:
            WW->m14(2, s, q, r);
            break;
        case 1:
            WW->m14(2, s, q, r);
            break;
        }
    } else {
    switch (q[2]) {
    case 0:
        switch ((unsigned char)UU->m1C()) {
        case 0:
            func_0034BA60(*(int *)(q + 0x34), s, B6, 0, 1);
            WW->m14(0, s, q, r);
            TA->m14(q, r, TBL);
            r->m38(q, BB);
            break;
        case 1:
            WW->m14(1, s, q, r);
            BB->m44(q, r);
            TA->m14(q, r, TBL + 0x54);
            r->m38(q, BB);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        case 2:
            WW->m14(2, s, q, r);
            BB->m44(q, r);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        case 3:
            WW->m14(2, s, q, r);
            BB->m34(q, r);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        case 4:
            WW->m14(2, s, q, r);
            BB->m34(q, r);
            r->m34(q, BB);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        case 5:
            WW->m14(2, s, q, r);
            r->m34(q, BB);
            func_0034BA60(8, s, B6, 0, 1);
            break;
        }
        break;
    case 1:
        switch ((unsigned char)UU->m20()) {
        case 0:
            func_0034BA60(*(int *)(q + 0x34), s, B6, 0, 1);
            WW->m14(0, s, q, r);
            TA->m14(q, r, TBL);
            r->m38(q, BB);
            break;
        case 1:
            WW->m14(1, s, q, r);
            BB->m44(q, r);
            TA->m14(q, r, TBL + 0x54);
            r->m38(q, BB);
            func_0034BA60(6, s, B6, 0, 1);
            break;
        case 2:
            WW->m14(2, s, q, r);
            BB->m44(q, r);
            func_0034BA60(6, s, B6, 0, 1);
            break;
        case 3:
            WW->m14(2, s, q, r);
            BB->m34(q, r);
            func_0034BA60(6, s, B6, 0, 1);
            break;
        }
        break;
    }
    }
}
#undef C

class Tc10 {
public:
    virtual void d8();
    virtual void dC();
    virtual void m10(int, int, int, int);
};

extern "C" void func_002E8350(char *p, int a, int b, int c) {
    (*(Tc10 **)(p + 0x18))->m10(a, b, c, *(int *)(p + 0x1C));
}
