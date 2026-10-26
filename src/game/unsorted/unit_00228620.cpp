extern "C" float func_00132470(char *, char *);

extern "C" void func_00104B80(float *, char *, float *);

#define VADDB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

extern "C" void func_0022AE80(char *p) {
    float t[4];
    func_00104B80((float *)(p + 0x120), p + 0x20, (float *)(*(char **)(p + 0x104) + 0x10));
    func_00104B80((float *)(p + 0x130), p + 0x20, (float *)(*(char **)(p + 0x104) + 0x20));
    *(float *)(p + 0x140) = *(float *)(*(char **)(p + 0x104) + 0x30) * *(float *)(p + 0x14);
    VADDB(t, p + 0x120, p + 0x130);
    *(float *)(p + 0xD0) = t[0] / 2.0f;
    *(float *)(p + 0xD4) = t[1] / 2.0f;
    *(float *)(p + 0xD8) = t[2] / 2.0f;
    *(float *)(p + 0xDC) = 1.0f;
    *(float *)(p + 0x10) = *(float *)(p + 0x140) + 0.5f * func_00132470(p + 0x120, p + 0x130);
    *(unsigned char *)(p + 0x110) = 4;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" unsigned char func_00229C60(char *, char *, char *, float *);

class V30 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9(); virtual void f(char *, char *);
};

class VB8 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43(); virtual void f(char *, char *);
};

static inline char *func_00229AF0_g(char *o) {
    return *(char **)(o + 0xC0);
}

static inline void func_00229AF0_h(unsigned int *f, unsigned int b, unsigned char k) {
    *f |= b << k;
}

static inline unsigned int func_00229AF0_t(unsigned int f, unsigned char k) {
    return (1 << k) & f;
}

extern "C" void func_00229AF0(char *a, char *p, char *q) {
    float v[4] __attribute__((aligned(16)));
    signed char c = *(signed char *)(*(char **)(p + 0xC0) + 2);
    for (; q != 0; q = *(char **)(q + 0x300)) {
        if (*(unsigned char *)q == 2 && p != q && func_00229AF0_g(p) != func_00229AF0_g(q) &&
            func_00229AF0_t(*(unsigned int *)(q + 0xC), c) != 0) {
            if (func_00229C60(a, p, q, v) != 0) {
                QCOPY(p + 0xB0, v);
                QCOPY(q + 0xB0, v);
                func_00229AF0_h((unsigned int *)(p + 8), 0x40, *(signed char *)(*(char **)(q + 0xC0) + 2));
                func_00229AF0_h((unsigned int *)(q + 8), 1, *(signed char *)(*(char **)(p + 0xC0) + 2));
                if (*(V30 **)(q + 0x2F4) != 0) {
                    (*(V30 **)(q + 0x2F4))->f(p, q);
                } else {
                    (*(VB8 **)(q + 0x2F0))->f(p, q);
                }
            }
        }
    }
}
