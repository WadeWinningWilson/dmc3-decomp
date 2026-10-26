extern "C" float func_001324E0(float *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" float func_00131BA0(char *);

extern "C" float func_00131C20(char *);

class VC4 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46(); virtual float *f();
};

static inline float func_002DB940_m(float x, float m) {
    if (!(x <= m)) return x;
    return m;
}

extern "C" void func_002DB940(float s, char *p, char *a) {
    float v[4] __attribute__((aligned(16)));
    float d;
    float *r = ((VC4 *)(p + *(unsigned char *)(p + 0x28A0) * 0x600 + 0x180))->f();
    QCOPY(v, r);
    *(float *)(p + 0x150) = s * func_001324E0(v);
    d = *(float *)(p + 0x10);
    if (d != 0.0f) {
        d = func_002DB940_m(d, 0.0001f);
        *(float *)(p + 0x150) = *(float *)(p + 0x150) / d;
    }
    *(float *)(p + 0x154) = 0.0f;
    *(float *)(p + 0x50) = *(float *)(p + 0x50) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * func_00131BA0(a));
    *(float *)(p + 0x58) = *(float *)(p + 0x58) + *(float *)(p + 0x10) * (*(float *)(p + 0x150) * func_00131C20(a));
    *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x64) * *(float *)(p + 0x10);
    *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
    if (*(float *)(p + 0x64) < -70.0f) {
        *(float *)(p + 0x64) = -70.0f;
    }
}
