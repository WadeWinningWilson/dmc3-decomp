extern "C" char D_01DFABA0[];

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_00330BD0(char *, int, char *, int, int);

#define FB(t, o) (*(t *)(p + (o)))

struct B36C {
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual int m34();
    virtual short m38();
    virtual void d3C();
    virtual void d40();
    virtual void m44();
    virtual void m48(int, char *);
};

struct A36C {
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void dE8();
    virtual void mEC(int);
};

static inline float frand36C(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

extern "C" void func_0036CB50(char *p) {
    switch (FB(int, 0xD4)) {
    case 0:
        if ((*(B36C **)(p + 0xA8))->m34()) {
            FB(unsigned char, 0xCF) = 8;
            *(short *)(FB(char *, 0x10) + 0x50) = (*(B36C **)(p + 0xA8))->m38();
            (*(B36C **)(p + 0xA8))->m1C(0xA);
            (*(B36C **)(p + 0xA8))->m24();
            (*(B36C **)(p + 0xA8))->m44();
            (*(B36C **)(p + 0xA8))->m48(0xD, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, FB(char *, 0x10) + 0x10, 7, 0);
            FB(int, 0xD4) = 2;
            break;
        }
        ((A36C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if (*(float *)(FB(char *, 0x10) + 0x24) < 0.0f && (*(B36C **)(p + 0xA8))->m30()) {
            FB(unsigned char, 0xCD) = 0;
            FB(unsigned char, 0xCF) = 1;
            (*(B36C **)(p + 0xA8))->m1C(0x11);
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 2.0f;
            FB(float, 0xE8) = -20.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -0.54f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A36C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            (*(B36C **)(p + 0xA8))->m44();
            (*(B36C **)(p + 0xA8))->m48(0x12, FB(char *, 0x10) + 0x10);
            (*(B36C **)(p + 0xA8))->m48(0xB, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, FB(char *, 0x10) + 0x10, 7, 0);
            FB(int, 0xD4) = 6;
        }
        break;
    case 1:
        break;
    case 2:
        (*(B36C **)(p + 0xA8))->m24();
        if ((*(B36C **)(p + 0xA8))->m2C()) {
            (*(B36C **)(p + 0xA8))->m1C(0xB);
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 0.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -0.54f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A36C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            (*(B36C **)(p + 0xA8))->m48(0x11, FB(char *, 0x10) + 0x10);
            FB(int, 0xD4) = 3;
        }
        break;
    case 3:
        ((A36C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if ((*(B36C **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCD) = 1;
            (*(B36C **)(p + 0xA8))->m1C(0x17);
            (*(B36C **)(p + 0xA8))->m48(0x22, FB(char *, 0x10) + 0x10);
            (*(B36C **)(p + 0xA8))->m48(0x38A, FB(char *, 0x10) + 0x10);
            (*(B36C **)(p + 0xA8))->m48(0x3E1, FB(char *, 0x10) + 0x10);
            (*(B36C **)(p + 0xA8))->m48(0x3E4, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x15, FB(char *, 0x10) + 0x10, 7, 0);
            FB(float, 0x100) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x20) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x24) = -1.0f;
            *(float *)(FB(char *, 0x10) + 0x28) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x2C) = 1.0f;
            *(float *)(FB(char *, 0x10) + 0x30) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x34) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x38) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x3C) = 1.0f;
            FB(int, 0xD4) = 0xA;
        }
        break;
    case 4:
        if ((*(B36C **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCF) = 2;
            (*(B36C **)(p + 0xA8))->m1C(6);
            FB(int, 0xD4) = 5;
        }
        (*(B36C **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(B36C **)(p + 0xA8))->m2C())
            ((A36C *)p)->mEC(0xE);
        (*(B36C **)(p + 0xA8))->m24();
        break;
    case 6:
        FB(float, 0xE0) -= FB(float, 0xE0) / 14.0f * FB(float, 0xB0);
        FB(float, 0xE8) -= FB(float, 0xE8) / 14.0f * FB(float, 0xB0);
        ((A36C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        (*(B36C **)(p + 0xA8))->m30();
        if ((*(B36C **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCD) = 1;
            (*(B36C **)(p + 0xA8))->m1C(0x18);
            (*(B36C **)(p + 0xA8))->m48(0x22, FB(char *, 0x10) + 0x10);
            (*(B36C **)(p + 0xA8))->m48(0x38A, FB(char *, 0x10) + 0x10);
            (*(B36C **)(p + 0xA8))->m48(0x3E1, FB(char *, 0x10) + 0x10);
            (*(B36C **)(p + 0xA8))->m48(0x3E4, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x15, FB(char *, 0x10) + 0x10, 7, 0);
            FB(float, 0x100) = 0.0f;
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = -1.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = 0.0f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A36C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(int, 0xD4) = 0xA;
            FB(float, 0x104) = 45.0f + 45.0f * frand36C();
        }
        break;
    case 7:
        if (!((*(B36C **)(p + 0xA8))->m28() < FB(float, 0x104))) {
            FB(unsigned char, 0xCF) = 2;
            (*(B36C **)(p + 0xA8))->m1C(5);
            FB(int, 0xD4) = 8;
        }
        break;
    case 8:
        if ((*(B36C **)(p + 0xA8))->m2C())
            ((A36C *)p)->mEC(0xE);
        (*(B36C **)(p + 0xA8))->m24();
        break;
    case 9:
        break;
    case 10:
        if ((*(B36C **)(p + 0xA8))->m2C()) {
            *(float *)(FB(char *, 0x10) + 0x20) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x24) = -1.0f;
            *(float *)(FB(char *, 0x10) + 0x28) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x2C) = 1.0f;
            *(float *)(FB(char *, 0x10) + 0x30) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x34) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x38) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x3C) = 1.0f;
            FB(int, 0xD4) = 0xB;
        }
        break;
    case 11:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 0.0f))
            (*(B36C **)(p + 0xA8))->m48(0x388, FB(char *, 0x10) + 0x10);
        break;
    }
}

class A363 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int);
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual int m2C();
    virtual int m30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void m48(int, char *);
};

class P363 {
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
    virtual void m6C();
    virtual void m70();
    virtual void u74();
    virtual short m78(short, short);
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void uE8();
    virtual void mEC(int);
};

static inline unsigned int rnd363(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

extern "C" void func_00363170(char *p) {
    short d;
    float k;
    ((P363 *)p)->m6C();
    ((P363 *)p)->m70();
    d = ((P363 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x100) {
        d = 0x100;
    }
    if (d < -0x100) {
        d = -0x100;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(float *)(p + 0xC4) -= *(float *)(p + 0xB0)) <= 0.0f)) {
            *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + (float)*(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if (((A363 *)*(char **)(p + 0xA8))->m2C()) {
            *(unsigned char *)(p + 0xCD) = 1;
            ((A363 *)*(char **)(p + 0xA8))->m18(0x38);
            switch (rnd363() & 1) {
            case 0:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 33.0f;
            *(float *)(p + 0xE8) = 8.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -1.5f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P363 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            case 1:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 44.0f;
            *(float *)(p + 0xE8) = 4.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -2.0f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P363 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        ((P363 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if (((A363 *)*(char **)(p + 0xA8))->m30()) {
                *(unsigned char *)(p + 0xCD) = 0;
                ((A363 *)*(char **)(p + 0xA8))->m18(0x39);
                ((A363 *)*(char **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
                *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
                *(float *)(*(char **)(p + 0x10) + 0x30) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x38) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x3C) = 1.0f;
                *(int *)(p + 0xD4) = 2;
            }
        }
        break;
    case 2:
        if (((A363 *)*(char **)(p + 0xA8))->m2C()) {
            ((P363 *)p)->mEC(0xE);
        }
        break;
    }
}

extern "C" {
extern char D_01CAFF0C[];
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

class V18_1_fv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m(float);
};

class V3C_0_i {
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
    virtual int m(void);
};

class V8C_0_v {
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
    virtual void m(void);
};

class V94_1_ii {
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
    virtual int m(int);
};

class VB4_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_0035A690(char *p0, float f0) {
    char *v0;
    float v1;
    int v2;
    int v3;
    int v4;
    int tmp1;
    int tmp4;
    int tmp7;
    int tmp8;
    int tmp9;
    v0 = p0;
    v1 = f0;
    tmp1 = ((V3C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        tmp4 = ((V14_0_i *)(*(char **)(*(char **)D_01CAFF0C + 32) + 2112))->m();
        if (tmp4 != 0) {
            ((V18_1_fv *)(*(char **)(*(char **)D_01CAFF0C + 32) + 2112))->m(v1);
            ((V8C_0_v *)v0)->m();
            tmp7 = ((V94_1_ii *)v0)->m(0);
            v4 = ((VB4_1_ii *)v0)->m((tmp7 & 255));
        } else {
            ((V8C_0_v *)v0)->m();
            tmp8 = ((V94_1_ii *)v0)->m(1);
            v4 = ((VB4_1_ii *)v0)->m((tmp8 & 255));
        }
    } else {
        ((V8C_0_v *)v0)->m();
        tmp9 = ((V94_1_ii *)v0)->m(1);
        v4 = ((VB4_1_ii *)v0)->m((tmp9 & 255));
    }
    return v4;
}
}
