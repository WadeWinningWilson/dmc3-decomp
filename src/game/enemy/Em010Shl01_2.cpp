extern "C" {
int func_001AD140(char *p);
}

extern "C" void func_003E6750(char *, int, int, int);

extern "C" void func_00105300(char *, char *);

extern "C" void func_003E8330(char *);

extern "C" void func_0028C5C0(char *, int, float);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_001AD100(char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" void func_003F3A90(char *);

extern "C" short func_00131D10(float, float);

class O50E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
};

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

extern "C" void func_0050EF10(char *p) {
    float d[4] __attribute__((aligned(16)));
    char *e;
    func_003F3A90(p + 0x228);
    if (*(char **)(p + 0x228) == 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    if (*(int *)(*(char **)(p + 0x228) + 0x35E4) != 1 || *(unsigned char *)(p + 0x231) == 1) {
        func_001AD140(p);
        return;
    }
    func_00105300(p + 0x1E0, *(char **)(p + 0x228) + 0x3680);
    *(float *)(p + 0x50) = *(float *)(p + 0x210);
    *(float *)(p + 0x54) = *(float *)(p + 0x214);
    *(float *)(p + 0x58) = *(float *)(p + 0x218);
    VSUBR54(d, p + 0x50, p + 0x1D0);
    *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
    QCOPY(p + 0x1D0, p + 0x50);
    e = *(char **)(p + 0x3BC);
    if (e != 0 && (*(int *)(e + 8) & 0x40) != 0) {
        *(unsigned char *)(*(char **)(p + 0x228) + 0x3A3C) = 1;
        func_001AD140(p);
        return;
    }
    if (!(*(float *)(*(char **)(p + 0x228) + 0x36C0) <= 1.0f)) {
        *(float *)(*(char **)(p + 0x228) + 0x36C0) = 1.0f;
        func_003E8330(*(char **)(p + 0x228));
        (*(O50E **)(p + 0x228))->m2F8(0x16);
        func_003E6750(*(char **)(p + 0x228), 0x2B, 0, 0);
        func_001AD140(p);
        return;
    }
    func_0028C5C0(p + 0x340, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}
