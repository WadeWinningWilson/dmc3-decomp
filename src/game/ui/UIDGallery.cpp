class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" void func_0050C0E0(char *p) {
    int i;
    char *o;
    char *arg;
    char *a;
    char *o2;
    int j;
    i = 0;
    o = p;
    arg = p + 13952;
    do {
        if (*(unsigned char *)(p + 14813) == 0) {
            ((SubCCc *)(o + 64))->mCC(arg);
        }
        i++;
        o += 1536;
    } while (i < 3);
    j = 0;
    a = p;
    o2 = p;
    do {
        if (*(unsigned char *)(p + 14813) == 0) {
            ((SubCCc *)(o2 + 4672))->mCC(a + 14080);
        }
        j++;
        a += 128;
        o2 += 1536;
    } while (j < 5);
    if (*(unsigned char *)(p + 14824) == 1) {
        ((SubCCc *)(p + 12352))->mCC(p + 14720);
    }
}

extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

class ObjD0 {
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
    virtual void mD0();
};

extern "C" void func_0050C040(char *p) {
    int i;
    if (*(int *)(p + 0x3C) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x3C));
        *(int *)(p + 0x3C) = 0;
    }
    for (i = 0; i < 3; i++) {
        ((ObjD0 *)(p + i * 0x600 + 0x40))->mD0();
    }
    for (i = 0; i < 5; i++) {
        ((ObjD0 *)(p + 0x1240))->mD0();
        p += 0x600;
    }
}

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" short D_0058CA30[];

class O50C {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24(int);
    virtual void u28();
    virtual int m2C(char *, char *);
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void m3C(short);
};

static inline char *ent50C(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *gch50C(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent50C(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" int func_0050C650(char *p) {
    unsigned short k;
    char *b;
    char *a;
    int i;
    *(char *)(p + 0x3640) = 0;
    *(float *)(p + 0x3650) = 0.0f;
    *(float *)(p + 0x3654) = 0.0f;
    *(float *)(p + 0x3658) = 0.0f;
    *(float *)(p + 0x365C) = 1.0f;
    *(float *)(p + 0x3660) = 0.0f;
    *(float *)(p + 0x3664) = 0.0f;
    *(float *)(p + 0x3668) = 0.0f;
    *(float *)(p + 0x366C) = 1.0f;
    *(float *)(p + 0x3670) = 1.0f;
    *(float *)(p + 0x3674) = 1.0f;
    *(float *)(p + 0x3678) = 1.0f;
    *(float *)(p + 0x367C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x3680) : "memory");
    func_00131700(p + 0x3680, p + 0x3680, p + 0x3660);
    func_00105230(p + 0x3680, p + 0x3680, p + 0x3650);
    func_001318E0(p + 0x3680, p + 0x3680, p + 0x3670);
    for (i = 0; i < 3; i++) {
        k = i * 2 + 1;
        a = gch50C(*(char **)(p + 0x38), k);
        k = i * 2;
        b = gch50C(*(char **)(p + 0x38), k);
        ((O50C *)(p + i * 0x600 + 0x40))->m24(1);
        if (!(unsigned char)((O50C *)(p + i * 0x600 + 0x40))->m2C(b, a)) {
            return 0;
        }
        ((O50C *)(p + i * 0x600 + 0x40))->m3C(D_0058CA30[i * 2]);
    }
    return 1;
}

extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_0050B5D0(char *);

extern "C" char *func_0050B800(int p0, unsigned int p1) {
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
    **q = func_001B0FD0(a, 0x3A00, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0050B5D0(t);
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
        *(int *)(ret + 0x39CC) = p1 >> 16;
        *(int *)(ret + 0x39C0) = p1 & 0xFFFF;
    }
    return ret;
}
