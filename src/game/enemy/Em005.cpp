class Obj148 {
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
    virtual void m148();
    virtual void m14C();
};

extern "C" void func_001A1F90(char *);

extern "C" char *func_00279290(char *);

/* Ticks the body and, in states 20/21, the attached part at +0x2BC8. */
extern "C" void func_0034A090(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 20:
    case 21:
        if (*(Obj148 **)(p + 0x2BC8) != 0) {
            (*(Obj148 **)(p + 0x2BC8))->m148();
        }
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

extern "C" void func_001A1E10(char *);

extern "C" void func_0034A110(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 20:
    case 21:
        if (*(Obj148 **)(p + 0x2BC8) != 0) {
            (*(Obj148 **)(p + 0x2BC8))->m14C();
        }
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

extern "C" char D_01CAFF0C[];

extern "C" int func_00201770(char *, float *, float *, float *, int);

extern "C" {
void func_0024DD30(char *p);
}

extern "C" void func_0024E830(char *, char *, float *, char *);

static inline bool has55c() {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return false;
    return true;
}

class V144 {
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
    virtual void m144();
};

extern "C" void func_0034A480(char *p) {
    float z[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(z) : "memory");
    if (has55c()) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x50) : "memory");
        v[1] = v[1] + 100.0f;
        v[3] = 1.0f;
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, o, (float *)(p + 0x2B50), 0) == 1) {
            func_0024E830(p + 0x2160, p + 0x50, z, p + 0x2B50);
            func_0024E830(p + 0x2230, p + 0x50, z, p + 0x2B50);
        }
    }
    func_0024DD30(p + 0x2160);
    func_0024DD30(p + 0x2230);
    switch (*(signed char *)(p + 0x3B0)) {
    case 0x14:
        if (*(V144 **)(p + 0x2BC8) != 0) (*(V144 **)(p + 0x2BC8))->m144();
        break;
    }
}

extern "C" void func_0024DA80(char *, int, int);

extern "C" int func_0034A6E0(char *, int);

class A34A {
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
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void m140(int);
};

class B34A {
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
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void m130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void d200();
    virtual void m204();
};

extern "C" B34A *func_00472DB0(char *, int, char *, int, int, int);

extern "C" void func_0034A240(char *p, int k) {
    B34A *o;
    unsigned char a;
    unsigned char b;
    switch (k) {
    default:
        a = (*(unsigned char **)(p + 0x2300))[k * 2];
        b = (*(unsigned char **)(p + 0x2300))[k * 2 + 1];
        func_0024DA80(p + 0x2160, a, b);
        func_0024DA80(p + 0x2230, a, b);
        *(unsigned char *)(p + 0x2B41) = a;
        *(unsigned char *)(p + 0x2B42) = b;
        if (*(A34A **)(p + 0x2BC8) != 0) (*(A34A **)(p + 0x2BC8))->m140(k);
        break;
    case 0x3E8:
        o = func_00472DB0(p + 0x3B0, *(int *)(p + 0x3F0), p, *(int *)(*(char **)(p + 0x2BC8) + 0x19C), 0, func_0034A6E0(p, *(int *)(p + 0x3E0)));
        if (o != 0) {
            o->m130();
            *(B34A **)(p + 0x2CF0) = o;
        } else {
            *(B34A **)(p + 0x2CF0) = 0;
        }
        break;
    case 0x3E9:
        o = func_00472DB0(p + 0x3B0, *(int *)(p + 0x3F0), p, *(int *)(*(char **)(p + 0x2BC8) + 0x19C), 1, func_0034A6E0(p, *(int *)(p + 0x3E0)));
        if (o != 0) {
            o->m130();
            *(B34A **)(p + 0x2CF4) = o;
        } else {
            *(B34A **)(p + 0x2CF4) = 0;
        }
        break;
    case 0x3EA:
        o = func_00472DB0(p + 0x3B0, *(int *)(p + 0x3F0), p, *(int *)(*(char **)(p + 0x2BC8) + 0x19C), 1, func_0034A6E0(p, *(int *)(p + 0x3E0)));
        if (o != 0) {
            o->m130();
            *(B34A **)(p + 0x2CF8) = o;
        } else {
            *(B34A **)(p + 0x2CF8) = 0;
        }
        break;
    case 0x3EB:
        if (*(B34A **)(p + 0x2CF0) != 0) (*(B34A **)(p + 0x2CF0))->m204();
        if (*(B34A **)(p + 0x2CF4) != 0) (*(B34A **)(p + 0x2CF4))->m204();
        if (*(B34A **)(p + 0x2CF8) != 0) (*(B34A **)(p + 0x2CF8))->m204();
        break;
    }
}

extern "C" {
int func_003CBAD0(char *, int, char *, int);
}

class V138_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_0034A190(char *p0) {
    char *v0;
    char *v1;
    int v2;
    v0 = p0;
    if (*(int *)(p0 + 11208) == 0) {
        v2 = func_003CBAD0((v0 + 944), *(int *)(v0 + 1008), v0, *(int *)(v0 + 1064));
        v1 = (char *)v2;
        if (v1 != 0) {
            v2 = ((V138_0_i *)v1)->m();
            *(char **)(v0 + 11208) = v1;
        }
    }
    return v2;
}
}

class V13C_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_0034A200(char *p0) {
    char *v0;
    char *v1;
    int v2;
    v0 = p0;
    v1 = *(char **)(p0 + 11208);
    if (v1 != 0) {
        v2 = ((V13C_0_i *)v1)->m();
        *(int *)(v0 + 11208) = 0;
    }
    return v2;
}
}
