extern "C" void func_00204FB0(char *);

extern "C" void func_00205000(char *);

class V204 {
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
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158();
    virtual void m15C(signed char *);
    virtual void m160();
};

extern "C" void func_00204E40(V204 *o, signed char *q) {
    char *p = (char *)o;
    unsigned char a = 0;
    bool b = 0;
    p[0x24F1] = 1;
    p[0x28A0] = 0;
    p[0x2AE0] = 0;
    p[0x28A8] = 0;
    p[0x28B3] = 0;
    *(int *)(p + 0x28CC) = 0;
    p[0x3C78] = 0;
    *(int *)(p + 0x3D44) = 0;
    p[0x3C79] = 0;
    p[0x3D31] = 0;
    if (q[1] == -1) {
        q[1] = 1;
        a = 1;
    }
    if (q[3] == -1) {
        b = 1;
        q[3] = 6;
    }
    o->m15C(q);
    o->m160();
    func_00205000(p);
    func_00204FB0(p);
    if (a) {
        q[1] = -1;
        p[0x3D4D] = -1;
    }
    if (b) {
        q[3] = -1;
        p[0x3D4F] = -1;
    }
}

extern "C" void func_00105300(char *, int);

extern "C" void func_00104C00(char *, char *, char *);

extern "C" void func_00104B80(char *, char *, char *);

extern "C" short func_00131D10(float, float);

extern "C" void func_00105760(float *, float *, float);

class V170a {
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
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void m170();
};

static inline void set4_205(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

extern "C" {
void func_00205480(char *p) {
    extern int func_002242C0(char *);
    float m90[16] __attribute__((aligned(16)));
    float v80[4] __attribute__((aligned(16)));
    float m40[16] __attribute__((aligned(16)));
    unsigned int i;
    unsigned int n;
    func_00105300((char *)m90, (int)(p + 0x4940));
    if ((unsigned char)func_002242C0(p) == 1 && *(unsigned char *)(p + 0xD6) == 0)
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m90) : "memory");
    func_00104B80(p + 0x50, (char *)m90, p + 0x50);
    set4_205(v80, 0.0f, 0.0f, 1.0f, 0.0f);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m40) : "memory");
    set4_205(m40 + 12, 0.0f, 0.0f, 1.0f, 0.0f);
    func_00105760(m40, m40, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    func_00104B80((char *)v80, (char *)m40, (char *)v80);
    func_00104B80((char *)v80, (char *)m90, (char *)v80);
    *(short *)(p + 0x90) = func_00131D10(v80[0], v80[2]);
    n = *(unsigned char *)(p + 0x28A0) * 24;
    for (i = n; i < n + 24; i++) {
        if (*(char **)((char *)(i * 4) + (int)p + 0x1380) && *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1380) + 0x104)) {
            func_00104C00(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1380) + 0x104), (char *)m90, *(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1380) + 0x104));
            *(float *)(*(char **)(*(char **)((char *)(i * 4) + (int)p + 0x1380) + 0x104) + 0x3C) = 1.0f;
        }
    }
    ((V170a *)p)->m170();
}
}

extern "C" {
int func_0013D5D0(...);
}

class VD0_0_i {
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
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual int m(void);
};

extern "C" {
int func_002052E0(int p0) {
    int v4;
    char *v0;
    int v2;
    int v5;
    char *v1;
    int v3;
    v0 = (char *)p0;
    v2 = 0;
    v1 = v0;
    do {
        v4 = ((VD0_0_i *)(v1 + 384))->m();
        v1 = (v1 + 1536);
        v2 = (v2 + 1);
    } while (((unsigned int)v2 < (unsigned int)3));
    v5 = 0;
    if ((0 < *(int *)(v0 + 5376))) {
        v3 = (int)v0;
        do {
            v4 = func_0013D5D0((v3 + 5380));
            v5 = (v5 + 1);
            v3 = (v3 + 16);
        } while ((v5 < *(int *)(v0 + 5376)));
    }
    return v4;
}
}

extern "C" {
int func_003331E0(int);
}

extern "C" {
int func_0046F170(int);
}

class V174_0_v {
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
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void d49();
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void m(void);
};

class VCC_1_pv {
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
    virtual void d43();
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void d48();
    virtual void m(char *);
};

extern "C" {
int func_00205650(char *p0) {
    int func_002242C0(...);
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    if (*(unsigned char *)(p0 + 214) != 0) {
        ((VCC_1_pv *)((v0 + (*(unsigned char *)(v0 + 10400) * 1536)) + 384))->m((v0 + 272));
        ((V174_0_v *)v0)->m();
    }
    v3 = func_002242C0(v0);
    v1 = (int)(v0 + 15584);
    if ((v3 & 255) == 0) {
        v3 = func_0046F170(v1);
        v2 = (int)(v0 + 15760);
        if (*(signed char *)(v0 + 70) == 0) {
            v3 = func_003331E0(v2);
        }
    }
    return v3;
}
}
