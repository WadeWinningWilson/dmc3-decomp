extern "C" char D_01CAFF0C[];

extern "C" void func_00207A90(unsigned int *);

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" int func_00201770(char *, float *, float *, float *, int);

extern "C" float func_00131BA0(short);

extern "C" float func_00131C20(short);

#define FB(t, o) (*(t *)(p + (o)))

struct B4A8 {
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

struct A4A8 {
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

static inline unsigned char has4A8(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0)
        return 0;
    return 1;
}

static inline unsigned int mt4A8(void) {
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

static inline void cp4A8(float *d, float *s) {
    float x = s[0];
    float y = s[1];
    float z = s[2];
    float w = s[3];
    d[0] = x;
    d[1] = y;
    d[2] = z;
    d[3] = w;
}

extern "C" void func_004A8E30(char *p) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    float t2[4] __attribute__((aligned(16)));
    float r2[4] __attribute__((aligned(16)));
    float buf2[16] __attribute__((aligned(16)));
    short k;
    unsigned int u;
    switch (FB(int, 0xD4)) {
    case 0:
        if ((*(B4A8 **)(p + 0xA8))->m2C()) {
            ((A4A8 *)p)->m6C();
            u = mt4A8();
            cp4A8((float *)(FB(char *, 0x10) + 0x10), (float *)(p + 0x20));
            k = (short)(unsigned short)u;
            *(float *)(FB(char *, 0x10) + 0x10) += 300.0f * func_00131BA0(k);
            *(float *)(FB(char *, 0x10) + 0x18) += 300.0f * func_00131C20(k);
            if (has4A8()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(t), "r"(FB(char *, 0x10) + 0x10) : "memory");
                t[1] += 400.0f;
                t[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, t, r, buf, 0))
                    *(float *)(FB(char *, 0x10) + 0x14) = r[1];
            }
            (*(B4A8 **)(p + 0xA8))->m48(0x386, FB(char *, 0x10) + 0x10);
            *(int *)(FB(char *, 0x10) + 0x20) = 0;
            *(int *)(FB(char *, 0x10) + 0x24) = 0;
            *(int *)(FB(char *, 0x10) + 0x28) = 0;
            *(int *)(FB(char *, 0x10) + 0x2C) = 0;
            *(int *)(FB(char *, 0x10) + 0x30) = 0;
            *(int *)(FB(char *, 0x10) + 0x34) = 0;
            *(int *)(FB(char *, 0x10) + 0x38) = 0;
            *(int *)(FB(char *, 0x10) + 0x3C) = 0;
            FB(int, 0xD4) = 1;
        } else {
            (*(B4A8 **)(p + 0xA8))->m24();
        }
        break;
    case 1:
        ((A4A8 *)p)->m6C();
        ((A4A8 *)p)->m70();
        *(short *)(FB(char *, 0x10) + 0x50) = FB(short, 0x30);
        (*(B4A8 **)(p + 0xA8))->m48(0x1B, FB(char *, 0x10) + 0x10);
        if (has4A8()) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(t2), "r"(FB(char *, 0x10) + 0x10) : "memory");
            t2[3] = 1.0f;
            if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, t2, r2, buf2, 0))
                *(float *)(FB(char *, 0x10) + 0x14) = r2[1];
        }
        FB(float, 0x100) = 0.0f;
        FB(int, 0xD4) = 2;
        (*(B4A8 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((FB(float, 0x100) += FB(float, 0xB0)) < 50.0f)) {
            ((A4A8 *)p)->m6C();
            ((A4A8 *)p)->m70();
            *(short *)(FB(char *, 0x10) + 0x50) = FB(short, 0x30);
            (*(B4A8 **)(p + 0xA8))->m18(0x64);
            (*(B4A8 **)(p + 0xA8))->m48(0x387, FB(char *, 0x10) + 0x10);
            (*(B4A8 **)(p + 0xA8))->m24();
            FB(int, 0xD4) = 3;
        }
        (*(B4A8 **)(p + 0xA8))->m24();
        break;
    case 3:
        FB(unsigned char, 0xCD) = 1;
        FB(int, 0xD4) = 4;
        (*(B4A8 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(B4A8 **)(p + 0xA8))->m28() < 45.0f)) {
            (*(B4A8 **)(p + 0xA8))->m48(0x1D, FB(char *, 0x10) + 0x10);
            (*(B4A8 **)(p + 0xA8))->m48(0x28, FB(char *, 0x10) + 0x10);
            FB(int, 0xD4) = 5;
        }
        (*(B4A8 **)(p + 0xA8))->m24();
        break;
    case 5:
        if (!((*(B4A8 **)(p + 0xA8))->m28() < 95.0f)) {
            FB(unsigned char, 0xCD) = 0;
            FB(int, 0xD4) = 6;
        }
        (*(B4A8 **)(p + 0xA8))->m24();
        break;
    case 6:
        if ((*(B4A8 **)(p + 0xA8))->m2C()) {
            (*(B4A8 **)(p + 0xA8))->m44();
            ((A4A8 *)p)->mEC(0xE);
        }
        (*(B4A8 **)(p + 0xA8))->m24();
        break;
    }
}
