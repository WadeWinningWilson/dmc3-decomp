extern "C" {
int func_001AD140(char *p);
}

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_0034BA60(int, char *, int, int, int);

extern "C" int func_0041D6B0(char *, float);

extern "C" void func_003FA440(char *, int);

extern "C" char D_0056D710[];

extern "C" float D_00569F64[];

extern "C" char *func_004FED00(char *, int, int);

extern "C" void func_002A4DA0(char *);

extern "C" char *func_002A4E40(char *, signed char *, int);

extern "C" void func_002A4DE0(char *, int);

class Y3F8B {
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
    virtual void m130();
};

class X3F8B {
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
    virtual void m198();
};

typedef struct { unsigned char b; char pad1[0xF]; float v[4] __attribute__((aligned(16))); short h; char pad2[6]; int i58; int i5C; unsigned int i60; int i64; } S3F8B;

static inline float frand3F8B(void) {
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

extern "C" void func_003F8B60(char *p) {
    int ctx;
    S3F8B s;
    float *tb;
    float r;
    char *o;
    *(unsigned int *)(p + 0x110) |= 0x40000000;
    *(unsigned int *)(p + 0x3BC) |= 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x1A, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        func_003FA440(p, -1);
        o = func_004FED00(p, 0, 0);
        if (o != 0) {
            ((Y3F8B *)o)->m130();
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x310), "r"(p + 0x50) : "memory");
        *(float *)(p + 0x3B8) = 150.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(float *)(p + 0x54) = *(float *)(p + 0x54) - *(float *)(p + 0x10) * D_00569F64[*(signed char *)(p + 0x46)];
        if ((unsigned char)func_0041D6B0(p + 0x3B8, *(float *)(p + 0x10)) == 1) {
            func_002A4DA0((char *)&ctx);
            tb = (float *)(D_0056D710 + *(unsigned char *)(p + 0x3AB) * 36);
            switch (*(signed char *)(p + 0x46)) {
            case 0x23:
                r = 100.0f * frand3F8B();
                if (r < tb[5]) {
                    s.b = 0x24;
                } else if (r < tb[6]) {
                    s.b = 0x25;
                } else {
                    s.b = 0x26;
                }
                break;
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
                s.b = 0x27;
                break;
            }
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(s.v), "r"(p + 0x310) : "memory");
            s.h = *(short *)(p + 0x90);
            s.i58 = 4;
            s.i5C = 0;
            s.i60 = (unsigned int)*(float *)(p + 0xEA4);
            s.i64 = *(short *)(p + 0x482);
            o = func_002A4E40((char *)&ctx, (signed char *)&s, *(int *)(p + 0x4E0));
            if (o != 0) {
                ((X3F8B *)o)->m198();
            }
            *(unsigned int *)(p + 0x110) |= 4;
            func_001AD140(p);
            func_002A4DE0((char *)&ctx, -1);
        }
        break;
    }
}
