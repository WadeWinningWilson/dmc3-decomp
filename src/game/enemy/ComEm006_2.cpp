extern "C" char D_01DFABA0[];

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_00330BD0(char *, int, char *, int, int);

#define FB(t, o) (*(t *)(p + (o)))

struct B4A9 {
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

struct A4A9 {
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

static inline float frand4A9(void) {
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

extern "C" void func_004A9F40(char *p) {
    switch (FB(int, 0xD4)) {
    case 0:
        if ((*(B4A9 **)(p + 0xA8))->m34()) {
            FB(unsigned char, 0xCF) = 8;
            *(short *)(FB(char *, 0x10) + 0x50) = (*(B4A9 **)(p + 0xA8))->m38();
            (*(B4A9 **)(p + 0xA8))->m1C(0xA);
            (*(B4A9 **)(p + 0xA8))->m24();
            (*(B4A9 **)(p + 0xA8))->m44();
            (*(B4A9 **)(p + 0xA8))->m48(0xD, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, FB(char *, 0x10) + 0x10, 6, 0);
            FB(int, 0xD4) = 2;
            break;
        }
        ((A4A9 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if (*(float *)(FB(char *, 0x10) + 0x24) < 0.0f && (*(B4A9 **)(p + 0xA8))->m30()) {
            FB(unsigned char, 0xCD) = 0;
            FB(unsigned char, 0xCF) = 1;
            (*(B4A9 **)(p + 0xA8))->m1C(0x11);
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 2.0f;
            FB(float, 0xE8) = -20.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -0.54f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A4A9 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            (*(B4A9 **)(p + 0xA8))->m44();
            (*(B4A9 **)(p + 0xA8))->m48(0x12, FB(char *, 0x10) + 0x10);
            (*(B4A9 **)(p + 0xA8))->m48(0xB, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, FB(char *, 0x10) + 0x10, 6, 0);
            FB(int, 0xD4) = 6;
        }
        break;
    case 1:
        break;
    case 2:
        (*(B4A9 **)(p + 0xA8))->m24();
        if ((*(B4A9 **)(p + 0xA8))->m2C()) {
            (*(B4A9 **)(p + 0xA8))->m1C(0xB);
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 0.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -0.54f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A4A9 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            (*(B4A9 **)(p + 0xA8))->m48(0x11, FB(char *, 0x10) + 0x10);
            FB(int, 0xD4) = 3;
        }
        break;
    case 3:
        ((A4A9 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if ((*(B4A9 **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCD) = 1;
            (*(B4A9 **)(p + 0xA8))->m18(0x3E);
            (*(B4A9 **)(p + 0xA8))->m48(0x22, FB(char *, 0x10) + 0x10);
            (*(B4A9 **)(p + 0xA8))->m48(0x38A, FB(char *, 0x10) + 0x10);
            (*(B4A9 **)(p + 0xA8))->m48(0x3E1, FB(char *, 0x10) + 0x10);
            (*(B4A9 **)(p + 0xA8))->m48(0x3E4, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x15, FB(char *, 0x10) + 0x10, 6, 0);
            FB(float, 0x100) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x20) = 0.0f;
            *(float *)(FB(char *, 0x10) + 0x24) = -2.0f;
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
        if ((*(B4A9 **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCF) = 2;
            (*(B4A9 **)(p + 0xA8))->m1C(6);
            FB(int, 0xD4) = 5;
        }
        (*(B4A9 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(B4A9 **)(p + 0xA8))->m2C())
            ((A4A9 *)p)->mEC(0xE);
        (*(B4A9 **)(p + 0xA8))->m24();
        break;
    case 6:
        FB(float, 0xE0) -= FB(float, 0xE0) / 14.0f * FB(float, 0xB0);
        FB(float, 0xE8) -= FB(float, 0xE8) / 14.0f * FB(float, 0xB0);
        ((A4A9 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        (*(B4A9 **)(p + 0xA8))->m30();
        if ((*(B4A9 **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCD) = 1;
            (*(B4A9 **)(p + 0xA8))->m1C(0x18);
            (*(B4A9 **)(p + 0xA8))->m48(0x22, FB(char *, 0x10) + 0x10);
            (*(B4A9 **)(p + 0xA8))->m48(0x38A, FB(char *, 0x10) + 0x10);
            (*(B4A9 **)(p + 0xA8))->m48(0x3E1, FB(char *, 0x10) + 0x10);
            (*(B4A9 **)(p + 0xA8))->m48(0x3E4, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x15, FB(char *, 0x10) + 0x10, 6, 0);
            FB(float, 0x100) = 0.0f;
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = -1.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = 0.0f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A4A9 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(int, 0xD4) = 0xA;
            FB(float, 0x104) = 45.0f + 45.0f * frand4A9();
        }
        break;
    case 7:
        if (!((*(B4A9 **)(p + 0xA8))->m28() < FB(float, 0x104))) {
            FB(unsigned char, 0xCF) = 2;
            (*(B4A9 **)(p + 0xA8))->m1C(5);
            FB(int, 0xD4) = 8;
        }
        break;
    case 8:
        if ((*(B4A9 **)(p + 0xA8))->m2C())
            ((A4A9 *)p)->mEC(0xE);
        (*(B4A9 **)(p + 0xA8))->m24();
        break;
    case 9:
        break;
    case 10:
        if ((*(B4A9 **)(p + 0xA8))->m2C())
            FB(int, 0xD4) = 0xB;
        break;
    case 11:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 0.0f))
            (*(B4A9 **)(p + 0xA8))->m48(0x388, FB(char *, 0x10) + 0x10);
        break;
    }
}

class Anim6 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void m40();
    virtual void m44();
    virtual void m48(int, char *);
};

class Self6 {
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
    virtual void m6C();
    virtual void m70();
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
    virtual void mEC(int);
};

extern "C" char D_01CAFF0C[];

extern "C" float func_00131BA0(short);

extern "C" float func_00131C20(short);

extern "C" int func_00201770(char *, float *, float *, float *, int);

static inline unsigned int mt_466(void) {
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

static inline void cp4_466(float *d, float *s) { float a = s[0]; float b = s[1]; float c = s[2]; float e = s[3]; d[0] = a; d[1] = b; d[2] = c; d[3] = e; }

static inline unsigned char has55C(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return 0;
    return 1;
}

extern "C" void func_004A34F0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A44C0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 900.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 900.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A4A00(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 600.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 600.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A4F40(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A6180(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 100.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 104.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 105.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 110.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 114.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

class A4A8 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int);
    virtual void u1C();
    virtual void u20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void m40();
    virtual void m44();
    virtual void m48(int, char *);
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void m70();
};

class P4A8 {
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
    virtual void mEC(int);
};

typedef struct { float f[4]; } F4A8;

static inline unsigned int rnd4A8(void) {
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

static inline unsigned char nz4A8(int x) { if (x == 0) return 0; return 1; }

extern "C" void func_004A83C0(char *p) {
    float v[2] __attribute__((aligned(16)));
    float q[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short s;
    unsigned int y;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 100.0f)) {
            ((A4A8 *)*(char **)(p + 0xA8))->m40();
            ((A4A8 *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 104.0f)) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCE) = 4;
            *(unsigned char *)(p + 0xCF) = 0;
            ((A4A8 *)*(char **)(p + 0xA8))->m18(0x57);
            ((A4A8 *)*(char **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            v[0] = 87.0f;
            v[1] = 25.0f;
            ((A4A8 *)*(char **)(p + 0xA8))->m48(0xBB8, (char *)v);
            ((A4A8 *)*(char **)(p + 0xA8))->m40();
            *(int *)(p + 0xD4) = 2;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 25.0f)) {
            ((P4A8 *)p)->m6C();
            y = rnd4A8();
            *(F4A8 *)(*(char **)(p + 0x10) + 0x10) = *(F4A8 *)(p + 0x20);
            s = (unsigned short)y;
            *(float *)(*(char **)(p + 0x10) + 0x10) += 250.0f * func_00131BA0(s);
            *(float *)(*(char **)(p + 0x10) + 0x18) += 250.0f * func_00131C20(s);
            if (nz4A8(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C))) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] += 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, r, m, 0)) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = r[1];
                }
            }
            *(int *)(p + 0xD4) = 3;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 3:
        ((P4A8 *)p)->m70();
        *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
        *(int *)(p + 0xD4) = 4;
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 30.0f)) {
            ((A4A8 *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 5;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 5:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 34.0f)) {
            ((A4A8 *)*(char **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 6;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 6:
        if (((A4A8 *)*(char **)(p + 0xA8))->m2C()) {
            ((A4A8 *)*(char **)(p + 0xA8))->m44();
            ((P4A8 *)p)->mEC(0xE);
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

class A4A1 {
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

class P4A1 {
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

static inline unsigned int rnd4A1(void) {
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

extern "C" void func_004A10C0(char *p) {
    short d;
    ((P4A1 *)p)->m6C();
    ((P4A1 *)p)->m70();
    d = ((P4A1 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
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
            *(short *)(*(char **)(p + 0x10) + 0x50) += *(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if (((A4A1 *)*(char **)(p + 0xA8))->m2C()) {
            *(unsigned char *)(p + 0xCD) = 1;
            ((A4A1 *)*(char **)(p + 0xA8))->m18(0x38);
            switch (rnd4A1() & 1) {
            case 0:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 33.0f;
            *(float *)(p + 0xE8) = 8.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -1.5f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P4A1 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
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
            ((P4A1 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        ((P4A1 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if (((A4A1 *)*(char **)(p + 0xA8))->m30()) {
                *(unsigned char *)(p + 0xCD) = 0;
                ((A4A1 *)*(char **)(p + 0xA8))->m18(0x39);
                ((A4A1 *)*(char **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
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
        if (((A4A1 *)*(char **)(p + 0xA8))->m2C()) {
            ((P4A1 *)p)->mEC(0xE);
        }
        break;
    }
}
