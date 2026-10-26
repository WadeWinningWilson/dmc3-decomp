extern "C" char D_01CAFF0C[];

extern "C" int D_005688C0[];

extern "C" float *D_005688A0[];

extern "C" float D_00568510[];

extern "C" void func_003D0790(char *, unsigned char);

class Obj1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

static inline bool flt(float a, float b) { return a < b; }

extern "C" void func_003CF790(char *p) {
    int i;
    char *q;
    char *o;
    char *a;
    float f;
    for (i = 0, q = p; i < 24; i++, q += 0x720) {
        *(int *)(q + 0x560) = 0;
        *(int *)(q + 0x564) = 0;
        *(int *)(q + 0x568) = 0;
        *(float *)(q + 0x56C) = 1.0f;
        *(int *)(q + 0x570) = 0;
        *(int *)(q + 0x574) = 0;
        *(int *)(q + 0x578) = 0;
        *(float *)(q + 0x57C) = 1.0f;
        func_003D0790(p, i);
    }
    o = *(char **)(*(char **)D_01CAFF0C + 4);
    if (o != 0 && (a = *(char **)(o + 0x10)) != 0) {
        f = ((Obj1C *)a)->m1C();
    } else {
        f = 0.0f;
    }
    *(float *)(p + 0xACEC) = f;
    *(unsigned char *)(p + 0xACE7) = 4;
    if (*(unsigned char *)(p + 0xACE6) != 2) {
        for (i = 0; i < 4; i++) {
            if (flt(*(float *)(p + 0xACEC), (float)D_005688C0[i])) {
                *(unsigned char *)(p + 0xACE7) = i;
                break;
            }
        }
    }
    *(float **)(p + 0xACE0) = D_005688A0[*(unsigned char *)(p + 0xACE7)];
    *(unsigned char *)(p + 0x45) = 6;
    *(float *)(p + 0x50) = D_00568510[*(unsigned char *)(p + 0xACE6) * 3];
    *(float *)(p + 0x54) = (*(float **)(p + 0xACE0))[0];
    *(float *)(p + 0x58) = (*(float **)(p + 0xACE0))[1];
    *(float *)(p + 0x5C) = 1.0f;
    if (*(unsigned char *)(p + 0xACE6) == 0) {
        *(short *)(p + 0x90) = 0x4000;
    } else {
        *(short *)(p + 0x90) = -0x3FFF;
    }
    *(unsigned int *)(p + 0xC) = *(unsigned int *)(p + 0xC) | 0x40;
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
int func_003CF690(int p0) {
    int v2;
    int v1;
    char *v0;
    v2 = 0;
    v0 = (char *)p0;
    do {
        v1 = ((VD0_0_i *)(v0 + 224))->m();
        v2 = (v2 + 1);
        v0 = (v0 + 1824);
    } while ((v2 < 24));
    return v1;
}
}

extern "C" {
extern char D_005BE098;
}

extern "C" {
int func_00195E20(...);
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_003CF9A0(char *);
}

class V130_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_003CF6E0(int p0) {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_001AD100();
    v1 = *(unsigned char *)(v0 + 4);
    switch (v1) {
    case 0:
        v2 = ((V130_0_i *)v0)->m();
        *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
        break;
    case 1:
        if (*(unsigned char *)(v0 + 44260) == 1) {
            v2 = func_003CF9A0(v0);
        }
        break;
    }
    if (*(unsigned char *)(v0 + 44260) == 1) {
        v2 = func_00195E20(&D_005BE098, v0);
    }
    return v2;
}
}

class VCC_1_pi {
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
    virtual int m(char *);
};

extern "C" {
int func_003D0AB0(int p0) {
    int v2;
    char *v0;
    int v1;
    v2 = 0;
    v0 = (char *)p0;
    do {
        v1 = ((VCC_1_pi *)(v0 + 224))->m((v0 + 1312));
        v2 = (v2 + 1);
        v0 = (v0 + 1824);
    } while ((v2 < 24));
    return v1;
}
}
