extern "C" void func_001B4A50(char *, int, int);

extern "C" void func_001F8910(char *, char *, char *, char *, int, int, float);

extern "C" void func_001B3090(char *, int);

extern "C" void func_001EBD90(char *, short);

extern "C" void func_001B31E0(char *, int);

class V40 {
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
    virtual int m40();
};

extern "C" void func_001BD190(char *p) {
    char *q = *(char **)(p + 0x440);
    char *g = *(char **)(*(char **)(p + 0x4A0) + 0x440);
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
    func_001B4A50(p, 2, 0xC);
    *(unsigned char *)(p + 0xA2) = *(unsigned char *)(*(char **)(p + 0x4A0) + 0xA2);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xD0), "r"(q) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(q + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(q + 0x20) : "memory");
    *(unsigned char *)(p + 0x454) = 0;
    *(char **)(p + 0x45C) = q + 0x48;
    *(float *)(p + 0x458) = *(short *)(q + 0x48);
    *(unsigned char *)(p + 0x455) = 0;
    func_001F8910(p + 0x444, p + 0x444, *(char **)(p + 0x45C), *(char **)(p + 0x45C) + 0x14, 4, 4, 0.0f);
    func_001B3090(p, ((V40 *)p)->m40());
    *(long long *)(p + 0x108) = 0x3FC003FC005LL;
    func_001EBD90(p + 0x134, *(short *)(g + 0xF6));
    if (*(unsigned char *)(g + 0x118) == 1) {
        func_001B31E0(p, 1);
    } else {
        func_001B31E0(p, 0);
    }
}
