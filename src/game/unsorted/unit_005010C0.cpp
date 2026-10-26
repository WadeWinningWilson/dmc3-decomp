class O501 {
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
    virtual void m88(int, int, int);
    virtual void d33();
    virtual void m90(int);
};

struct S501 {
    char b0;
    signed char st;
    char b2;
    unsigned char b3;
    signed char b4;
    unsigned char a5;
};

extern "C" char D_0058BF10[];

extern "C" char D_0058BF14[];

extern "C" char *func_00279290(char *);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2000(char *, int);

extern "C" void func_001A3B20(char *, int, int, int);

#define SH3()     func_001A1E70(func_00279290(p + 0xC0), 1);     func_001A1E70(func_00279290(p + 0xC0), 2);     func_001A1E70(func_00279290(p + 0x6C0), 2);

#define HD3()     func_001A2000(func_00279290(p + 0xC0), 1);     func_001A2000(func_00279290(p + 0xC0), 2);     func_001A2000(func_00279290(p + 0x6C0), 2);

#define FADE3()     O(0xC0)->m88(1, q->a5, 1);     O(0xC0)->m88(2, q->a5, 1);     O(0x6C0)->m88(2, q->a5, 1);

#define STOP3()     O(0xC0)->m90(1);     O(0xC0)->m90(2);     O(0x6C0)->m90(2);

#define DIG(k, d)     func_001A3B20(func_00279290(p + 0xC0), k, *(int *)(D_0058BF10 + (d) * 8) << 4, *(int *)(D_0058BF14 + (d) * 8) << 4);

#define DIGITS()     DIG(1, *(unsigned char *)(p + 0x13E6) / 10)     DIG(2, *(unsigned char *)(p + 0x13E6) % 10)

#define O(o) ((O501 *)(p + (o)))
extern "C" {
void func_005019F0(char *p, S501 *q) {
    extern void func_005012F0(char *, S501 *);
    switch (q->st) {
    case 0:
        SH3()
        DIGITS()
        q->a5 = 0;
        q->b3 = 0;
        q->st++;
    case 1:
        q->a5 += 4;
        if (q->a5 < 0x40) {
            FADE3()
        } else {
            STOP3()
            q->b3 = 1;
            q->st++;
        }
        break;
    case 2:
        if (q->b4 == 0) {
            q->a5 = 0x40;
            FADE3()
            DIGITS()
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        } else if (q->b4 == 2) {
            HD3()
            q->b4 = -1;
            q->b3 = 2;
            q->st = 4;
        }
        break;
    case 3:
        q->a5 -= 4;
        if (0 < q->a5) {
            FADE3()
        } else {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case 4:
        if (q->b4 == 0) {
            SH3()
            q->b4 = -1;
            q->b3 = 1;
            q->st = 2;
        }
        break;
    case -1:
    default:
        STOP3()
        HD3()
        func_005012F0(p, q);
        break;
    }
}
}
#undef O

class O5014 {
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
    virtual void m88(int, int, int);
    virtual void d33();
    virtual void m90(int);
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
    virtual int mBC(float);
};

class A5014 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual float m24();
};

struct S5014 {
    char b0;
    signed char st;
    char b2;
    unsigned char b3;
    signed char b4;
    unsigned char a5;
};

extern "C" char *func_002792A0(char *);

#define ANIM ((A5014 *)func_002792A0(p + 0x6C0))

#define O ((O5014 *)(p + 0x6C0))
#define SH(n) func_001A1E70(func_00279290(p + 0x6C0), n);
#define HD(n) func_001A2000(func_00279290(p + 0x6C0), n);
extern "C" {
void func_005014F0(char *p, S5014 *q) {
    extern void func_005012F0(char *, S5014 *);
    int r;
    switch (q->st) {
    case 0:
        SH(0)
        SH(1)
        q->a5 = 0xE;
        q->b3 = 0;
        q->st++;
    case 1:
        if (q->a5 < 0x40) {
            q->a5++;
            O->m88(1, q->a5, 1);
        }
        O->mBC(*(float *)(p + 0x10));
        if (50.0f <= ANIM->m24()) {
            O->m90(1);
            q->b3 = 1;
            q->st++;
        }
        break;
    case 2:
        if (q->b4 == 0) {
            q->a5 = 0x40;
            O->m88(1, q->a5, 1);
            SH(3)
            O->m88(3, q->a5, 1);
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        } else if (q->b4 == 2) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st = 4;
        } else if (q->b4 == 3) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st = 7;
        }
        break;
    case 3:
        if (0 < q->a5) {
            q->a5 -= 4;
            O->m88(1, q->a5, 1);
            O->m88(3, q->a5, 1);
        }
        r = O->mBC(*(float *)(p + 0x10));
        if ((int)ANIM->m24() >= 0x46 || (unsigned char)r == 4 || (unsigned char)r == 0) {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case 4:
        q->a5 -= 8;
        if (0 < q->a5) {
            O->m88(0, q->a5, 1);
            O->m88(1, q->a5, 1);
        } else {
            q->b3 = 1;
            q->st++;
        }
        break;
    case 5:
        if (q->b4 == 0) {
            q->a5 = 0;
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        }
        break;
    case 6:
        q->a5 += 8;
        if (q->a5 < 0x40) {
            O->m88(0, q->a5, 1);
            O->m88(1, q->a5, 1);
        } else {
            O->m90(0);
            O->m90(1);
            q->b3 = 1;
            q->st = 2;
        }
        break;
    case 7:
        q->a5 -= 4;
        if (0 < q->a5) {
            O->m88(0, q->a5, 1);
            O->m88(1, q->a5, 1);
        } else {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case -1:
    default:
        O->m90(1);
        O->m90(3);
        HD(0)
        HD(1)
        HD(3)
        func_005012F0(p, q);
        break;
    }
}
}
#undef O
#undef SH
#undef HD

class O502 {
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
    virtual void m88(int, int, int);
    virtual void d33();
    virtual void m90(int);
};

struct S502 {
    char b0;
    signed char st;
    char b2;
    unsigned char b3;
    signed char b4;
    unsigned char a5;
};

extern "C" unsigned char D_005BE010[2];

extern "C" unsigned char D_005BE011[2];

#define IDX (*(signed char *)(p + 0x13E9))

#define COL(n, c) func_001A2D70(func_00279290(p + 0xCC0), n, c);

#define PAIRCOL()     if (*(signed char *)(p + 0x13EA) != 0) {         COL(T0, 0x80404040)         COL(T1, 0x80C0C0C0)     } else {         COL(T0, 0x80C0C0C0)         COL(T1, 0x80404040)     }

#define O ((O502 *)(p + 0xCC0))
#define T0 D_005BE010[IDX * 2]
#define T1 D_005BE011[IDX * 2]
#define SH(n) func_001A1E70(func_00279290(p + 0xCC0), n);
#define HD(n) func_001A2000(func_00279290(p + 0xCC0), n);
extern "C" {
void func_00502B90(char *p, S502 *q) {
    extern void func_001A2D70(char *, int, unsigned int);
    extern void func_005012F0(char *, S502 *);
    switch (q->st) {
    case 0:
        SH(2)
        SH(3)
        COL(2, 0x80404040)
        COL(3, 0x80404040)
        q->a5 = 0;
        q->b3 = 0;
        q->st++;
    case 1:
        q->a5 += 4;
        if (q->a5 < 0x40) {
            O->m88(2, q->a5, 1);
            O->m88(3, q->a5, 1);
        } else {
            O->m90(2);
            O->m90(3);
            q->b3 = 1;
            q->st++;
        }
        break;
    case 2:
        switch (IDX) {
        case 0:
            COL(2, 0x80C0C0C0)
            COL(3, 0x80404040)
            break;
        case 1:
            COL(2, 0x80404040)
            COL(3, 0x80C0C0C0)
            break;
        }
        if (q->b4 == 0) {
            SH(T0)
            SH(T1)
            PAIRCOL()
            q->b4 = -1;
            q->b3 = 1;
            q->st++;
        } else if (q->b4 == 3) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st = 4;
        }
        break;
    case 3:
        PAIRCOL()
        if (q->b4 == 0) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        } else if (q->b4 == 1) {
            HD(T0)
            HD(T1)
            q->b4 = -1;
            q->st = 2;
        }
        break;
    case 4:
        q->a5 -= 4;
        if (0 < q->a5) {
            O->m88(2, q->a5, 1);
            O->m88(3, q->a5, 1);
            O->m88(T0, q->a5, 1);
            O->m88(T1, q->a5, 1);
        } else {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case -1:
    default:
        O->m90(2);
        O->m90(3);
        O->m90(8);
        O->m90(9);
        O->m90(10);
        O->m90(11);
        HD(2)
        HD(3)
        HD(8)
        HD(9)
        HD(10)
        HD(11)
        func_005012F0(p, q);
        break;
    }
}
}
#undef O
#undef T0
#undef T1
#undef SH
#undef HD

class O5023 {
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
    virtual void m88(int, int, int);
    virtual void d33();
    virtual void m90(int);
};

struct S5023 {
    char b0;
    signed char st;
    char b2;
    unsigned char b3;
    signed char b4;
    unsigned char a5;
};

extern "C" unsigned char D_005BE008[2];

extern "C" unsigned char D_005BE009[2];

#define O ((O5023 *)(p + 0xCC0))
#define T0 D_005BE008[IDX * 2]
#define T1 D_005BE009[IDX * 2]
#define SH(n) func_001A1E70(func_00279290(p + 0xCC0), n);
#define HD(n) func_001A2000(func_00279290(p + 0xCC0), n);
extern "C" {
void func_005023A0(char *p, S5023 *q) {
    extern void func_001A2D70(char *, int, unsigned int);
    extern void func_005012F0(char *, S5023 *);
    switch (q->st) {
    case 0:
        SH(1)
        SH(2)
        SH(3)
        COL(1, 0x80404040)
        COL(2, 0x80404040)
        COL(3, 0x80404040)
        q->a5 = 0;
        q->b3 = 0;
        q->st++;
    case 1:
        q->a5 += 4;
        if (q->a5 < 0x40) {
            O->m88(1, q->a5, 1);
            O->m88(2, q->a5, 1);
            O->m88(3, q->a5, 1);
        } else {
            O->m90(1);
            O->m90(2);
            O->m90(3);
            q->b3 = 1;
            q->st++;
        }
        break;
    case 2:
        COL(1, 0x80404040)
        COL(2, 0x80404040)
        COL(3, 0x80404040)
        switch (IDX) {
        case 0:
            COL(1, 0x80C0C0C0)
            break;
        case 1:
            COL(2, 0x80C0C0C0)
            break;
        case 2:
            COL(3, 0x80C0C0C0)
            break;
        }
        if (q->b4 == 0) {
            SH(T0)
            SH(T1)
            PAIRCOL()
            q->b4 = -1;
            q->b3 = 1;
            q->st++;
        } else if (q->b4 == 3) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st = 4;
        }
        break;
    case 3:
        PAIRCOL()
        if (q->b4 == 0) {
            q->a5 = 0x40;
            q->b4 = -1;
            q->b3 = 0;
            q->st++;
        } else if (q->b4 == 1) {
            HD(T0)
            HD(T1)
            q->b4 = -1;
            q->st = 2;
        }
        break;
    case 4:
        q->a5 -= 4;
        if (0 < q->a5) {
            O->m88(1, q->a5, 1);
            O->m88(2, q->a5, 1);
            O->m88(3, q->a5, 1);
            O->m88(T0, q->a5, 1);
            O->m88(T1, q->a5, 1);
        } else {
            q->b3 = 3;
            q->st = -1;
        }
        break;
    case -1:
    default:
        O->m90(1);
        O->m90(2);
        O->m90(3);
        O->m90(6);
        O->m90(7);
        O->m90(8);
        O->m90(9);
        O->m90(10);
        O->m90(11);
        HD(1)
        HD(2)
        HD(3)
        HD(6)
        HD(7)
        HD(8)
        HD(9)
        HD(10)
        HD(11)
        func_005012F0(p, q);
        break;
    }
}
}
#undef O
#undef T0
#undef T1
#undef SH
#undef HD

class W501 {
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
    virtual void m88(int, int, int);
    virtual void d8C();
    virtual void m90(int);
};

extern "C" {
void func_00501F60(char *p, char *a) {
    extern void func_001A2D70(char *, int, int);
    extern void func_005012F0(char *, char *);
    int x;
    switch (*(signed char *)(a + 1)) {
    case 0:
        func_001A1E70(func_00279290(p + 0xCC0), 0);
        func_001A1E70(func_00279290(p + 0xCC0), 4);
        func_001A1E70(func_00279290(p + 0xCC0), 5);
        func_001A2D70(func_00279290(p + 0xCC0), 4, 0x80404040);
        func_001A2D70(func_00279290(p + 0xCC0), 5, 0x80404040);
        *(unsigned char *)(a + 5) = 0;
        *(unsigned char *)(a + 3) = 0;
        *(signed char *)(a + 1) = *(signed char *)(a + 1) + 1;
    case 1:
        *(unsigned char *)(a + 5) = *(unsigned char *)(a + 5) + 4;
        if (*(unsigned char *)(a + 5) < 0x40) {
            ((W501 *)(p + 0xCC0))->m88(0, *(unsigned char *)(a + 5), 1);
            ((W501 *)(p + 0xCC0))->m88(4, *(unsigned char *)(a + 5), 1);
            ((W501 *)(p + 0xCC0))->m88(5, *(unsigned char *)(a + 5), 1);
            break;
        }
        ((W501 *)(p + 0xCC0))->m90(0);
        ((W501 *)(p + 0xCC0))->m90(4);
        ((W501 *)(p + 0xCC0))->m90(5);
        *(unsigned char *)(a + 3) = 1;
        *(signed char *)(a + 1) = *(signed char *)(a + 1) + 1;
        break;
    case 2:
        if (*(signed char *)(p + 0x13EA) != 0) {
            func_001A2D70(func_00279290(p + 0xCC0), 4, 0x80404040);
            func_001A2D70(func_00279290(p + 0xCC0), 5, 0x80C0C0C0);
        } else {
            func_001A2D70(func_00279290(p + 0xCC0), 4, 0x80C0C0C0);
            func_001A2D70(func_00279290(p + 0xCC0), 5, 0x80404040);
        }
        x = *(signed char *)(a + 4);
        if (x == 0 || x == 2) {
            *(unsigned char *)(a + 5) = 0x40;
            *(unsigned char *)(a + 3) = 0;
            *(signed char *)(a + 1) = *(signed char *)(a + 1) + 1;
        }
        break;
    case 3:
        *(unsigned char *)(a + 5) = *(unsigned char *)(a + 5) - 4;
        if (0 < *(unsigned char *)(a + 5)) {
            ((W501 *)(p + 0xCC0))->m88(0, *(unsigned char *)(a + 5), 1);
            ((W501 *)(p + 0xCC0))->m88(4, *(unsigned char *)(a + 5), 1);
            ((W501 *)(p + 0xCC0))->m88(5, *(unsigned char *)(a + 5), 1);
            break;
        }
        ((W501 *)(p + 0xCC0))->m90(0);
        ((W501 *)(p + 0xCC0))->m90(4);
        ((W501 *)(p + 0xCC0))->m90(5);
        func_001A2000(func_00279290(p + 0xCC0), 0);
        func_001A2000(func_00279290(p + 0xCC0), 4);
        func_001A2000(func_00279290(p + 0xCC0), 5);
        if (*(signed char *)(a + 4) == 2) {
            *(signed char *)(a + 4) = -1;
            *(signed char *)(a + 1) = 4;
        } else {
            *(unsigned char *)(a + 3) = 3;
            *(signed char *)(a + 1) = -1;
        }
        break;
    case 4:
        if (*(signed char *)(a + 4) == 0) {
            *(signed char *)(a + 4) = -1;
            *(signed char *)(a + 1) = 0;
        }
        break;
    case -1: default:
        ((W501 *)(p + 0xCC0))->m90(0);
        ((W501 *)(p + 0xCC0))->m90(4);
        ((W501 *)(p + 0xCC0))->m90(5);
        func_001A2000(func_00279290(p + 0xCC0), 0);
        func_001A2000(func_00279290(p + 0xCC0), 4);
        func_001A2000(func_00279290(p + 0xCC0), 5);
        func_005012F0(p, a);
        break;
    }
}
}
