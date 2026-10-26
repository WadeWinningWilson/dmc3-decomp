extern "C" char D_01CAFF0C[];

extern "C" void func_00207A90(unsigned int *);

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" int func_00201770(char *, float *, float *, float *, int);

struct B46C {
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

struct A46C {
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void dE8();
    virtual void mEC(int);
};

#define FB(t, o) (*(t *)(p + (o)))

static inline float frand46C(void) {
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

static inline unsigned char has46C(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0)
        return 0;
    return 1;
}

extern "C" void func_0046CA60(char *p) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    switch (FB(int, 0xD4)) {
    case 0:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 20.0f)) {
            (*(B46C **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            ((A46C *)p)->m6C();
            frand46C();
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
            if (has46C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(t), "r"(FB(char *, 0x10) + 0x10) : "memory");
                t[1] += 400.0f;
                t[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, t, r, buf, 0))
                    *(float *)(FB(char *, 0x10) + 0x14) = r[1];
            }
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 1;
        }
        (*(B46C **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 30.0f)) {
            (*(B46C **)(p + 0xA8))->m48(0x16, FB(char *, 0x10) + 0x10);
            ((A46C *)p)->m6C();
            ((A46C *)p)->m70();
            *(short *)(FB(char *, 0x10) + 0x50) = FB(short, 0x30);
            FB(float, 0x100) = 0.0f;
            FB(int, 0xD4) = 2;
        }
        (*(B46C **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) <= 20.0f)) {
            (*(B46C **)(p + 0xA8))->m18(0x68);
            (*(B46C **)(p + 0xA8))->m48(0x387, FB(char *, 0x10) + 0x10);
            FB(int, 0xD4) = 3;
        }
        (*(B46C **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(B46C **)(p + 0xA8))->m28() < 8.0f)) {
            FB(float, 0xE0) = 0.0f;
            FB(float, 0xE4) = 60.0f;
            FB(float, 0xE8) = 0.0f;
            FB(float, 0xEC) = 1.0f;
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -4.0f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A46C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(unsigned char, 0xCD) = 1;
            FB(int, 0xD4) = 4;
        } else {
            (*(B46C **)(p + 0xA8))->m24();
        }
        break;
    case 4:
        ((A46C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if (*(float *)(FB(char *, 0x10) + 0x24) < 0.0f) {
            FB(float, 0xF0) = 0.0f;
            FB(float, 0xF4) = -1.0f;
            FB(float, 0xF8) = 0.0f;
            FB(float, 0xFC) = 1.0f;
            ((A46C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
            FB(int, 0xD4) = 5;
        }
        break;
    case 5:
        ((A46C *)p)->mE4(p + 0xE0, p + 0xF0, FB(char *, 0x10) + 0x20, FB(char *, 0x10) + 0x30);
        if ((*(B46C **)(p + 0xA8))->m30()) {
            FB(unsigned char, 0xCD) = 0;
            FB(int, 0xD4) = 6;
        }
        break;
    case 6:
        if ((*(B46C **)(p + 0xA8))->m2C()) {
            (*(B46C **)(p + 0xA8))->m44();
            ((A46C *)p)->mEC(0xE);
        }
        (*(B46C **)(p + 0xA8))->m24();
        break;
    }
}
