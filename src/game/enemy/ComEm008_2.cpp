extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

class W45Eo {
public:
    virtual void d8();
    virtual int mC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void m28(int);
};

class W45E {
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
    virtual void mB4(int);
};

static inline float frd45E(void) { unsigned int y; if (D_01DF8810[0] >= 0x270) { func_00207A90(D_01DF7E50); } { unsigned int i = D_01DF8810[0]; D_01DF8810[0] = i + 1; y = D_01DF7E50[i]; } y ^= y >> 11; y ^= (y << 7) & 0x9D2C5680; y ^= (y << 15) & 0xEFC60000; y ^= y >> 18; return 2.3283064e-10f * (float)y; }

extern "C" void func_0045E880(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        *(unsigned char *)(p + 0xB5) = 1;
    case 1:
        if (frd45E() < 0.5f) {
            (*(W45Eo **)(p + 0xC))->m28(0x45);
            *(unsigned char *)(p + 0xB5) = 2;
        } else {
            (*(W45Eo **)(p + 0xC))->m28(0x46);
            *(unsigned char *)(p + 0xB5) = 3;
        }
        break;
    case 2:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x45) break;
        (*(W45Eo **)(p + 0xC))->m28(0x45);
        *(unsigned char *)(p + 0xB5) = 6;
        break;
    case 3:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x46) break;
        (*(W45Eo **)(p + 0xC))->m28(0x46);
        *(unsigned char *)(p + 0xB5) = 7;
        break;
    case 4: case 5:
        break;
    case 6:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x45) break;
        (*(W45Eo **)(p + 0xC))->m28(0x49);
        *(unsigned char *)(p + 0xB5) = 8;
        break;
    case 7:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x46) break;
        (*(W45Eo **)(p + 0xC))->m28(0x49);
        *(unsigned char *)(p + 0xB5) = 8;
        break;
    case 8:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x49) break;
        ((W45E *)p)->mB4(0x17);
        break;
    }
}

static inline float frd45D(void) { unsigned int y; if (D_01DF8810[0] >= 0x270) { func_00207A90(D_01DF7E50); } { unsigned int i = D_01DF8810[0]; D_01DF8810[0] = i + 1; y = D_01DF7E50[i]; } y ^= y >> 11; y ^= (y << 7) & 0x9D2C5680; y ^= (y << 15) & 0xEFC60000; y ^= y >> 18; return 2.3283064e-10f * (float)y; }

extern "C" void func_0045DC90(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        (*(W45Eo **)(p + 0xC))->m28(0x48);
        *(unsigned char *)(p + 0xB5) = 1;
        break;
    case 1:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x48) break;
        if (frd45D() < 0.5f) {
            (*(W45Eo **)(p + 0xC))->m28(0x45);
            *(unsigned char *)(p + 0xB5) = 2;
        } else {
            (*(W45Eo **)(p + 0xC))->m28(0x46);
            *(unsigned char *)(p + 0xB5) = 3;
        }
        break;
    case 2:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x45) break;
        (*(W45Eo **)(p + 0xC))->m28(0x45);
        *(unsigned char *)(p + 0xB5) = 6;
        break;
    case 3:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x46) break;
        (*(W45Eo **)(p + 0xC))->m28(0x46);
        *(unsigned char *)(p + 0xB5) = 7;
        break;
    case 4: case 5:
        break;
    case 6:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x45) break;
        (*(W45Eo **)(p + 0xC))->m28(0x49);
        *(unsigned char *)(p + 0xB5) = 8;
        break;
    case 7:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x46) break;
        (*(W45Eo **)(p + 0xC))->m28(0x49);
        *(unsigned char *)(p + 0xB5) = 8;
        break;
    case 8:
        if ((*(W45Eo **)(p + 0xC))->mC() == 0x49) break;
        ((W45E *)p)->mB4(0x17);
        break;
    }
}

extern "C" char D_01DFABA0[];

extern "C" void func_00330BD0(char *, int, char *, int, int);

#define FB(t, o) (*(t *)(p + (o)))

struct B460 {
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
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

struct A460 {
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

static inline float frand460(void) {
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

extern "C" void func_00460BD0(char *p) {
    switch (FB(int, 0xD4)) {
    case 0:
        if ((*(B460 **)(p + 0xA8))->m34()) {
            FB(unsigned char, 0xCF) = 8;
            *(short *)(FB(char *, 0x10) + 0x50) = (*(B460 **)(p + 0xA8))->m38();
            (*(B460 **)(p + 0xA8))->m1C(0xA);
            (*(B460 **)(p + 0xA8))->m24();
            (*(B460 **)(p + 0xA8))->m44();
            (*(B460 **)(p + 0xA8))->m48(0xD, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, FB(char *, 0x10) + 0x10, 8, 0);
            FB(int, 0xD4) = 2;
            break;
        }
        ((A460 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if (*(float *)(FB(char *, 0x10) + 0x24) < 0.0f && (*(B460 **)(p + 0xA8))->m30()) {
            FB(unsigned char, 0xCD) = 0;
            FB(unsigned char, 0xCF) = 1;
            (*(B460 **)(p + 0xA8))->m1C(0x11);
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 2.0f;
            FB(float, 0xE8) = -20.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -0.54f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A460 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            (*(B460 **)(p + 0xA8))->m44();
            (*(B460 **)(p + 0xA8))->m48(0xB, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, FB(char *, 0x10) + 0x10, 8, 0);
            FB(int, 0xD4) = 6;
        }
        break;
    case 1:
        break;
    case 2:
        (*(B460 **)(p + 0xA8))->m24();
        if ((*(B460 **)(p + 0xA8))->m2C()) {
            (*(B460 **)(p + 0xA8))->m1C(0xB);
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 0.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -0.54f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A460 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            (*(B460 **)(p + 0xA8))->m48(0x11, FB(char *, 0x10) + 0x10);
            FB(int, 0xD4) = 3;
        }
        break;
    case 3:
        ((A460 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if ((*(B460 **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCD) = 0;
            FB(unsigned char, 0xCF) = 4;
            (*(B460 **)(p + 0xA8))->m1C(0x17);
            (*(B460 **)(p + 0xA8))->m24();
            FB(int, 0xD4) = 4;
        }
        break;
    case 4:
        (*(B460 **)(p + 0xA8))->m24();
        if ((*(B460 **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCF) = 2;
            (*(B460 **)(p + 0xA8))->m1C(6);
            (*(B460 **)(p + 0xA8))->m24();
            FB(int, 0xD4) = 5;
        }
        break;
    case 5:
        (*(B460 **)(p + 0xA8))->m24();
        if ((*(B460 **)(p + 0xA8))->m2C()) {
            ((A460 *)p)->mEC(0xE);
            (*(B460 **)(p + 0xA8))->m24();
        }
        break;
    case 6:
        FB(float, 0xE0) -= FB(float, 0xE0) / 14.0f * FB(float, 0xB0);
        FB(float, 0xE8) -= FB(float, 0xE8) / 14.0f * FB(float, 0xB0);
        ((A460 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if ((*(B460 **)(p + 0xA8))->m30())
            (*(B460 **)(p + 0xA8))->m48(0x12, FB(char *, 0x10) + 0x10);
        if ((*(B460 **)(p + 0xA8))->m2C()) {
            FB(unsigned char, 0xCF) = 5;
            (*(B460 **)(p + 0xA8))->m1C(0x18);
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 0.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = 0.0f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A460 *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(int, 0xD4) = 7;
            FB(float, 0x104) = 45.0f + 45.0f * frand460();
        }
        break;
    case 7:
        if (!((*(B460 **)(p + 0xA8))->m28() < FB(float, 0x104))) {
            FB(unsigned char, 0xCF) = 2;
            (*(B460 **)(p + 0xA8))->m1C(5);
            FB(int, 0xD4) = 8;
        }
        break;
    case 8:
        if ((*(B460 **)(p + 0xA8))->m2C())
            ((A460 *)p)->mEC(0xE);
        (*(B460 **)(p + 0xA8))->m24();
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

extern "C" void func_00466CE0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
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
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
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

extern "C" void func_00467CB0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
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
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
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

extern "C" void func_004681F0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
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
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
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

extern "C" void func_00468730(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
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
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
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

extern "C" void func_00469970(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 100.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
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
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
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

class A46C {
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

class P46C {
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

typedef struct { float f[4]; } F46C;

static inline unsigned int rnd46C(void) {
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

static inline unsigned char nz46C(int x) { if (x == 0) return 0; return 1; }

extern "C" void func_0046BBC0(char *p) {
    float v[2] __attribute__((aligned(16)));
    float q[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short s;
    unsigned int y;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 100.0f)) {
            ((A46C *)*(char **)(p + 0xA8))->m40();
            ((A46C *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 104.0f)) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCE) = 4;
            *(unsigned char *)(p + 0xCF) = 0;
            ((A46C *)*(char **)(p + 0xA8))->m18(0x57);
            ((A46C *)*(char **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            v[0] = 87.0f;
            v[1] = 25.0f;
            ((A46C *)*(char **)(p + 0xA8))->m48(0xBB8, (char *)v);
            ((A46C *)*(char **)(p + 0xA8))->m40();
            *(int *)(p + 0xD4) = 2;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 25.0f)) {
            ((P46C *)p)->m6C();
            y = rnd46C();
            *(F46C *)(*(char **)(p + 0x10) + 0x10) = *(F46C *)(p + 0x20);
            s = (unsigned short)y;
            *(float *)(*(char **)(p + 0x10) + 0x10) += 300.0f * func_00131BA0(s);
            *(float *)(*(char **)(p + 0x10) + 0x18) += 300.0f * func_00131C20(s);
            if (nz46C(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C))) {
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
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 3:
        ((P46C *)p)->m70();
        *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
        *(int *)(p + 0xD4) = 4;
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 30.0f)) {
            ((A46C *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 5;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 5:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 34.0f)) {
            ((A46C *)*(char **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 6;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 6:
        if (((A46C *)*(char **)(p + 0xA8))->m2C()) {
            ((A46C *)*(char **)(p + 0xA8))->m44();
            ((P46C *)p)->mEC(0xE);
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

class Anim8 {
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
};

class Self8 {
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
    virtual int m78(int, int);
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

extern "C" void func_004674A0(char *p) {
    short d;
    short e;
    float k;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim8 **)(p + 0xA8))->m28() < 3.0f) && (*(Anim8 **)(p + 0xA8))->m28() <= 28.0f) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += (float)*(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if ((*(Anim8 **)(p + 0xA8))->m2C() != 0) ((Self8 *)p)->mEC(0xE);
        (*(Anim8 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim8 **)(p + 0xA8))->m28() < 25.0f) && (*(Anim8 **)(p + 0xA8))->m28() <= 30.0f) {
            ((Self8 *)p)->m6C();
            ((Self8 *)p)->m70();
            d = ((Self8 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            k = 2731.0f * *(float *)(p + 0xB0);
            if (!((float)d <= k)) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
            }
            k = 2731.0f * *(float *)(p + 0xB0);
            if ((float)d < -k) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
            }
        }
        if ((*(Anim8 **)(p + 0xA8))->m2C() != 0) ((Self8 *)p)->mEC(0xE);
        (*(Anim8 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim8 **)(p + 0xA8))->m28() < 25.0f) && (*(Anim8 **)(p + 0xA8))->m28() <= 30.0f) {
            ((Self8 *)p)->m6C();
            ((Self8 *)p)->m70();
            e = ((Self8 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            k = 2731.0f * *(float *)(p + 0xB0);
            if (!((float)e <= k)) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
            }
            k = 2731.0f * *(float *)(p + 0xB0);
            if ((float)e < -k) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
            }
        }
        if ((*(Anim8 **)(p + 0xA8))->m2C() != 0) ((Self8 *)p)->mEC(0xE);
        (*(Anim8 **)(p + 0xA8))->m24();
        break;
    }
}

class A464 {
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

class P464 {
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

static inline unsigned int rnd464(void) {
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

extern "C" void func_004647B0(char *p) {
    short d;
    ((P464 *)p)->m6C();
    ((P464 *)p)->m70();
    d = ((P464 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
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
        if (((A464 *)*(char **)(p + 0xA8))->m2C()) {
            *(unsigned char *)(p + 0xCD) = 1;
            ((A464 *)*(char **)(p + 0xA8))->m18(0x38);
            switch (rnd464() & 1) {
            case 0:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 33.0f;
            *(float *)(p + 0xE8) = 8.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -1.5f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P464 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
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
            ((P464 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        ((P464 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if (((A464 *)*(char **)(p + 0xA8))->m30()) {
                *(unsigned char *)(p + 0xCD) = 0;
                ((A464 *)*(char **)(p + 0xA8))->m18(0x39);
                ((A464 *)*(char **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
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
        if (((A464 *)*(char **)(p + 0xA8))->m2C()) {
            ((P464 *)p)->mEC(0xE);
        }
        break;
    }
}

extern "C" float D_005796E0[];

extern "C" float D_00579700[];

struct B46D {
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

struct A46D {
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
    virtual float m7C();
    virtual int m80(float);
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

static inline unsigned char has46D(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0)
        return 0;
    return 1;
}

static inline unsigned int mt46D(void) {
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

static inline void cp46D(float *d, float *s) {
    float x = s[0];
    float y = s[1];
    float z = s[2];
    float w = s[3];
    d[0] = x;
    d[1] = y;
    d[2] = z;
    d[3] = w;
}

extern "C" void func_0046D030(char *p) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    float s[2] __attribute__((aligned(16)));
    short k;
    unsigned int u;
    switch (FB(int, 0xD4)) {
    case 10:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 30.0f)) {
            (*(B46D **)(p + 0xA8))->m18(0);
            (*(B46D **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            (*(B46D **)(p + 0xA8))->m48(0x7D6, FB(char *, 0x10) + 0x10);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 0;
        }
        break;
    case 0:
        (*(B46D **)(p + 0xA8))->m48(0x38B, FB(char *, 0x10) + 0x10);
        FB(float, 0x100) += FB(float, 0xB0);
        if (!(FB(float, 0x100) <= D_005796E0[((A46D *)p)->m80(((A46D *)p)->m7C())])) {
            ((A46D *)p)->m6C();
            u = mt46D();
            cp46D((float *)(FB(char *, 0x10) + 0x10), (float *)(p + 0x20));
            k = (short)(unsigned short)u;
            *(float *)(FB(char *, 0x10) + 0x10) += 400.0f * func_00131BA0(k);
            *(float *)(FB(char *, 0x10) + 0x18) += 400.0f * func_00131C20(k);
            if (has46D()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(t), "r"(FB(char *, 0x10) + 0x10) : "memory");
                t[1] += 400.0f;
                t[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, t, r, buf, 0))
                    *(float *)(FB(char *, 0x10) + 0x14) = r[1];
                if (*(float *)(FB(char *, 0x10) + 0x14) < FB(float, 0x24))
                    *(float *)(FB(char *, 0x10) + 0x14) = FB(float, 0x24);
            }
            (*(B46D **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 1;
        }
        break;
    case 1:
        (*(B46D **)(p + 0xA8))->m48(0x38B, FB(char *, 0x10) + 0x10);
        FB(float, 0x100) += FB(float, 0xB0);
        if (!(FB(float, 0x100) <= D_00579700[((A46D *)p)->m80(((A46D *)p)->m7C())])) {
            (*(B46D **)(p + 0xA8))->m48(0x15, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1B, FB(char *, 0x10) + 0x10, 8, 0);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 2;
        }
        break;
    case 2:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 30.0f)) {
            ((A46D *)p)->m6C();
            ((A46D *)p)->m70();
            *(short *)(FB(char *, 0x10) + 0x50) = FB(short, 0x30);
            s[0] = 102.0f;
            s[1] = 202.0f;
            (*(B46D **)(p + 0xA8))->m48(0xBB8, (char *)s);
            (*(B46D **)(p + 0xA8))->m18(0x3E8);
            (*(B46D **)(p + 0xA8))->m48(0x19, FB(char *, 0x10) + 0x10);
            (*(B46D **)(p + 0xA8))->m48(0x387, FB(char *, 0x10) + 0x10);
            (*(B46D **)(p + 0xA8))->m18(0x3EA);
            func_00330BD0(D_01DFABA0, 0x2E, FB(char *, 0x10) + 0x10, 8, 0);
            FB(unsigned char, 0xCD) = 1;
            FB(int, 0xD4) = 3;
        }
        break;
    case 3:
        (*(B46D **)(p + 0xA8))->m48(0x389, FB(char *, 0x10) + 0x10);
        if ((*(B46D **)(p + 0xA8))->m2C()) {
            (*(B46D **)(p + 0xA8))->m18(0x3E9);
            (*(B46D **)(p + 0xA8))->m44();
            ((A46D *)p)->mEC(0xE);
        }
        (*(B46D **)(p + 0xA8))->m24();
        break;
    }
}

struct B46E {
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

struct A46E {
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
    virtual float m7C();
    virtual int m80(float);
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

static inline float frand46E(void) {
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

static inline unsigned char has46E(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0)
        return 0;
    return 1;
}

extern "C" void func_0046D6F0(char *p) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    switch (FB(int, 0xD4)) {
    case 10:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 30.0f)) {
            (*(B46E **)(p + 0xA8))->m18(0);
            (*(B46E **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            (*(B46E **)(p + 0xA8))->m48(0x7D6, FB(char *, 0x10) + 0x10);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 0;
        }
        break;
    case 0:
        (*(B46E **)(p + 0xA8))->m48(0x38B, FB(char *, 0x10) + 0x10);
        FB(float, 0x100) += FB(float, 0xB0);
        if (!(FB(float, 0x100) <= D_005796E0[((A46E *)p)->m80(((A46E *)p)->m7C())])) {
            ((A46E *)p)->m6C();
            frand46E();
            {
                char *v = FB(char *, 0x10);
                float x = FB(float, 0x20);
                float y = FB(float, 0x24);
                float z = FB(float, 0x28);
                float w = FB(float, 0x2C);
                *(float *)(v + 0x10) = x;
                *(float *)(v + 0x14) = y;
                *(float *)(v + 0x18) = z;
                *(float *)(v + 0x1C) = w;
            }
            if (has46E()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(t), "r"(FB(char *, 0x10) + 0x10) : "memory");
                t[1] += 400.0f;
                t[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, t, r, buf, 0))
                    *(float *)(FB(char *, 0x10) + 0x14) = r[1];
            }
            (*(B46E **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 1;
        }
        break;
    case 1:
        (*(B46E **)(p + 0xA8))->m48(0x38B, FB(char *, 0x10) + 0x10);
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 0.0f)) {
            ((A46E *)p)->m6C();
            ((A46E *)p)->m70();
            *(short *)(FB(char *, 0x10) + 0x50) = FB(short, 0x30);
            (*(B46E **)(p + 0xA8))->m18(0x69);
            (*(B46E **)(p + 0xA8))->m48(0x16, FB(char *, 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, FB(char *, 0x10) + 0x10, 8, 0);
            func_00330BD0(D_01DFABA0, 0x1B, FB(char *, 0x10) + 0x10, 8, 0);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 2;
        }
        break;
    case 2:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 50.0f)) {
            ((A46E *)p)->m6C();
            ((A46E *)p)->m70();
            *(short *)(FB(char *, 0x10) + 0x50) = FB(short, 0x30);
            (*(B46E **)(p + 0xA8))->m18(0x6B);
            (*(B46E **)(p + 0xA8))->m48(0x387, FB(char *, 0x10) + 0x10);
            (*(B46E **)(p + 0xA8))->m18(0x3EA);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 3;
        }
        break;
    case 3:
        (*(B46E **)(p + 0xA8))->m48(0x389, FB(char *, 0x10) + 0x10);
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 3.0f)) {
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 80.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 0.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -8.0f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 0.0f;
            ((A46E *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(unsigned char, 0xCD) = 1;
            FB(int, 0xD4) = 4;
        }
        break;
    case 4:
        (*(B46E **)(p + 0xA8))->m48(0x389, FB(char *, 0x10) + 0x10);
        ((A46E *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if (*(float *)(FB(char *, 0x10) + 0x24) < 0.0f) {
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 0.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 0.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -0.5f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 0.0f;
            ((A46E *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(int, 0xD4) = 5;
        }
        break;
    case 5:
        ((A46E *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if ((*(B46E **)(p + 0xA8))->m2C()) {
            (*(B46E **)(p + 0xA8))->m44();
            ((A46E *)p)->mEC(0xE);
        }
        break;
    }
}
