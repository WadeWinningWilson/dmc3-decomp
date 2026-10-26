extern "C" float func_001324E0(float *);

extern "C" char *func_002792A0(char *);

extern "C" void func_00104E78(float *, char *);

extern "C" unsigned int D_01DF8810[];

extern "C" unsigned int D_01DF7E50[];

extern "C" void func_00207A90(unsigned int *);

extern "C" void func_00104C00(char *, char *, char *);

extern "C" void func_00380F40(char *);

class L380 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual int mB4();
};

static inline float func_00380D90_r(void) {
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

extern "C" void func_00380D90(char *p) {
    float m[16] __attribute__((aligned(16)));
    int i;
    *(float *)(p + 0x1350) = func_001324E0((float *)(p + 0x1340));
    *(int *)(p + 0xDE8) = 0x2503F;
    *(unsigned char *)(p + 0xF9C) = 0;
    *(unsigned char *)(p + 0x103C) = 0;
    *(unsigned char *)(p + 0x10DC) = 0;
    func_00104E78(m, p + 0x1240);
    for (i = 0; i < ((L380 *)func_002792A0(p + 0x340))->mB4(); i++) {
        func_00104C00(*(char **)(*(char **)(p + i * 4 + 0x9D0) + 0x100), (char *)m, *(char **)(*(char **)(p + i * 4 + 0x9D0) + 0x104));
    }
    *(float *)(p + 0x1344) = *(float *)(p + 0x1344) + 0.2f * -func_00380D90_r();
    func_00380F40(p);
}

extern "C" char D_00567CF0[];

extern "C" int func_00507060(char *, int, int, int, char *, int, float, int, float);

extern "C" void func_0037BD20(char *, int);

class V37E {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78();
    virtual float m7C();
    virtual int m80(float);
};

extern "C" void func_0037E750(char *p) {
    int k;
    float s;
    int i;
    k = ((V37E *)(p + 0x130))->m80(((V37E *)(p + 0x130))->m7C());
    s = ((float (*)[3])D_00567CF0)[k][*(int *)(p + 0x77CC)];
    if (*(int *)(p + 0x6E50) == 0) {
        for (i = 0; i < 3; i++) {
            if (*(int *)(*(char **)(p + i * 4 + 0x69F8) + 0x144C) > 0) {
                func_0037BD20(p, func_00507060(p + 0x710, *(int *)(p + 0x750), i, 0, p, *(int *)(p + 0x77CC), s, k, s));
            }
        }
    }
}

extern "C" char *func_00279290(char *);

extern "C" void func_001AD140(char *);

extern "C" float D_00567908[];

extern "C" float D_0056795C[];

extern "C" char *D_005BE09C;

extern "C" char D_005BE098[4];

extern "C" void func_001AD100();

extern "C" void func_00105300(int, int);

extern "C" void func_00382A50(char *);

extern "C" void func_00382BE0(char *);

extern "C" void func_00380320(char *);

extern "C" void func_00380F70(char *);

extern "C" void func_00381170(char *);

extern "C" int func_001ACCF0(char *, float, float, float, float);

extern "C" void func_001A1E10(char *);

extern "C" void func_001A1F90(char *);

extern "C" void func_001A2000(char *, int);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_003825C0(char *);

extern "C" void func_00195E20(char *, char *);

class V380 {
public:
    virtual void d8(); virtual void dC();
    virtual void g10();
    virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30();
    virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50();
    virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70();
    virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90();
    virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void dB4(); virtual void dB8();
    virtual void gBC(float);
};

extern "C" void func_00380080(char *p) {
    char *o;
    func_001AD100();
    if (*(char **)(p + 0xB94) == 0) {
        func_001AD140(p);
        return;
    }
    *(signed char *)(p + 0x1447) = *(signed char *)(*(char **)(p + 0xB94) + 0x7617);
    *(signed char *)(p + 0x1448) = *(signed char *)(*(char **)(p + 0xB94) + 0x7618);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(short *)(p + 0xB90) == 0) {
            ((V380 *)(p + 0x340))->gBC(*(float *)(p + 0x10));
        } else {
            o = *(char **)(*(char **)(p + 0xB94) + 0x69F8);
            func_00105300(*(int *)(*(char **)(p + 0x9D8) + 0x100), *(int *)(*(char **)(o + 0x9D8) + 0x100));
            func_00105300(*(int *)(*(char **)(p + 0x9E4) + 0x100), *(int *)(*(char **)(o + 0x9E4) + 0x100));
            func_00105300(*(int *)(*(char **)(p + 0x9F4) + 0x100), *(int *)(*(char **)(o + 0x9F4) + 0x100));
            func_00105300(*(int *)(*(char **)(p + 0xA00) + 0x100), *(int *)(*(char **)(o + 0xA00) + 0x100));
        }
        break;
    }
    func_00382A50(p + 0xB94);
    func_00382BE0(p + 0xB98);
    *(unsigned char *)(p + 0x135C) = 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00380320(p);
        break;
    case 3:
        func_00380F70(p);
        break;
    case 4:
        func_00381170(p);
        break;
    }
    if (*(int *)(p + 0x144C) > 0) *(float *)(p + 0x13B0) = D_00567908[0];
    else *(float *)(p + 0x13B0) = D_0056795C[0];
    if (*(unsigned char *)(p + 5) == 0) {
        if (D_005BE09C != 0) {
            if ((unsigned char)func_001ACCF0(D_005BE09C, *(float *)(p + 0x1270), *(float *)(p + 0x1274), *(float *)(p + 0x1278), 300.0f)) {
                func_001A1E10(func_00279290(p + 0x340));
            } else {
                func_001A1F90(func_00279290(p + 0x340));
            }
        }
        if (*(unsigned char *)(p + 5) == 0 && *(short *)(p + 0xB90) != *(int *)(*(char **)(p + 0xB94) + 0x6E7C) - 1) {
            func_001A2000(func_00279290(p + 0x340), 0);
        }
        if (*(unsigned char *)(p + 0x135C) == 0) func_001A1F90(func_00279290(p + 0x340));
    }
    func_0028C5C0(p + 0xD10, 0, 1.0f);
    ((V380 *)(p + 0x1370))->g10();
    ((V380 *)(p + 0xC4C))->g10();
    func_003825C0(p);
    func_00195E20(D_005BE098, p);
}

extern "C" {
extern char D_00568250[];
}

extern "C" {
extern char D_00568370[];
}

extern "C" {
extern char D_01DFC0A0[];
}

class V7C_0_f {
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
    virtual float m(void);
};

class V80_1_fi {
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
    virtual int m(float);
};

extern "C" {
int func_0037BDD0(int p0) {
    char *v0;
    int v1;
    float tmp0;
    int tmp1;
    float tmp8;
    int tmp9;
    v0 = (char *)p0;
    tmp0 = ((V7C_0_f *)(v0 + 304))->m();
    tmp1 = ((V80_1_fi *)(v0 + 304))->m(tmp0);
    v1 = (tmp1 << 2);
    *(float *)(v0 + 360) = (*(float *)(v0 + 360) + (*(float *)(v0 + 16) * *(float *)((char *)(v1 + (int)(D_01DFC0A0 + (*(int *)(v0 + 30668) * 28))) + 0)));
    if (*(unsigned char *)(v0 + 30725) != 0) {
        tmp8 = ((V7C_0_f *)(v0 + 304))->m();
        tmp9 = ((V80_1_fi *)(v0 + 304))->m(tmp8);
        *(float *)(v0 + 360) = (*(float *)(v0 + 360) + (*(float *)(v0 + 16) * *(float *)((char *)((tmp9 << 2) + (int)(D_00568250 + (*(int *)(v0 + 30668) * 28))) + 0)));
        *(int *)(v0 + 30936) = 0;
    }
    *(float *)(v0 + 30936) = (*(float *)(v0 + 30936) + *(float *)(v0 + 16));
    if (*(float *)(v0 + 30936) > *(float *)((char *)(v1 + (int)(D_00568370 + (*(int *)(v0 + 30668) * 28))) + 0)) {
        *(int *)(v0 + 360) = 0;
    }
    return 0;
}
}

extern "C" {
extern char D_005682B0[];
}

extern "C" {
extern char D_00568310[];
}

extern "C" {
int func_0037C7B0(int p0, int p1) {
    int v0;
    int v2;
    char *v1;
    float tmp0;
    v0 = p1;
    v1 = (char *)p0;
    tmp0 = ((V7C_0_f *)(v1 + 304))->m();
    v2 = ((V80_1_fi *)(v1 + 304))->m(tmp0);
    switch (v0) {
    case 0:
        v2 = (v2 << 2);
        *(float *)(v1 + 360) = (*(float *)(v1 + 360) + *(float *)((char *)((int)(D_005682B0 + (*(int *)(v1 + 30668) * 28)) + v2) + 0));
        break;
    case 1:
        *(float *)(v1 + 360) += *(float *)((char *)((int)(D_00568310 + (*(int *)(v1 + 30668) * 28)) + (v2 << 2)) + 0);
        break;
    }
    *(int *)(v1 + 30936) = 0;
    return 1;
}
}

extern "C" {
void func_00379B20(void);
}

extern "C" {
void func_00379DD0(void);
}

extern "C" {
void func_0037A300(void);
}

extern "C" {
void func_0037A690(void);
}

extern "C" {
void func_0037AA10(void);
}

extern "C" {
void func_0037AD90(void);
}

class V2F8_0_i {
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
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual int m(void);
};

extern "C" {
int func_0037E9F0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p0;
    if (*(unsigned char *)(p0 + 30736) == 1) {
        *(char *)(v0 + 30736) = 0;
        v1 = (*(int *)(v0 + 30224) + -100);
        switch (v1) {
        case 0:
            func_00379B20();
            break;
        case 1:
            func_0037AD90();
            break;
        case 7:
            func_00379DD0();
            break;
        case 4:
            func_0037A300();
            break;
        case 5:
            func_0037A690();
            break;
        case 6:
            func_0037AA10();
            break;
        }
    }
    tmp0 = ((V2F8_0_i *)v0)->m();
    return tmp0;
}
}
