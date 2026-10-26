/* Emits two effects for every active entry pair (sub-object at +0x130 gives the rate). */
class Sub130 {
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
    virtual void m6C();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
    virtual void d31();
    virtual int m88();
};

extern "C" Sub130 *func_002792A0(char *);

class ObjBlend34 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(float);
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual float m34();
};

extern "C" ObjBlend34 *func_0027A720(char *);

extern "C" void func_0043D9F0(char *p) {
    ObjBlend34 *a = (ObjBlend34 *)func_002792A0(p + 0x340);
    a->m1C(((ObjBlend34 *)func_002792A0(p + 0x340))->m34());
    a = (ObjBlend34 *)func_002792A0(p + 0x940);
    a->m1C(((ObjBlend34 *)func_002792A0(p + 0x940))->m34());
    a = func_0027A720(p + 0xF40);
    a->m1C(func_0027A720(p + 0xF40)->m34());
}

extern "C" void func_0028C5C0(char *, int, float);

extern "C" char *func_00279290(char *);

extern "C" void func_001AD100(char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" void func_0043D6B0(char *);

extern "C" void func_0043D8C0(char *);

class V43D {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C();
    virtual void m60(int, int, int, int);
    virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80();
    virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0();
    virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0();
    virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_0043D510(char *p) {
    float f;
    func_001AD100(p);
    if (*(unsigned char *)(p + 0x33A) == 0) return;
    switch (*(unsigned char *)(p + 0x1400)) {
    case 0:
        func_0043D6B0(p);
        break;
    case 1:
        func_0043D8C0(p);
        break;
    }
    func_0028C5C0(p + 0x1470, 0, *(float *)(p + 0x10));
    f = *(float *)(p + 0x10);
    *(float *)(func_00279290(p + 0x340) + 0x1B0) = f;
    f = *(float *)(p + 0x10);
    *(float *)(func_00279290(p + 0x940) + 0x1B0) = f;
    ((V43D *)(p + 0x340))->m60(*(int *)(p + 0x1404), *(int *)(p + 0x1408), (int)((float)*(int *)(p + 0x140C) * *(float *)(p + 0x10)), (int)((float)*(int *)(p + 0x1410) * *(float *)(p + 0x10)));
    ((V43D *)(p + 0x940))->m60(*(int *)(p + 0x1414), *(int *)(p + 0x1418), (int)((float)*(int *)(p + 0x141C) * *(float *)(p + 0x10)), (int)((float)*(int *)(p + 0x1420) * *(float *)(p + 0x10)));
    ((V43D *)(p + 0x340))->mC8(p + 0x1380);
    ((V43D *)(p + 0x940))->mC8(p + 0x1380);
    if (*(unsigned char *)(p + 0x1424) == 1) {
        ((V43D *)(p + 0xF40))->mC8(p + 0x13C0);
    }
    func_00195E20(D_005BE098, p);
    *(unsigned char *)(p + 0x1425) = 0;
    *(int *)(p + 0x1428) = 0;
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

class VD0_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_0043D2A0(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 832))->m();
    ((VD0_0_v *)(v0 + 2368))->m();
    v1 = ((VD0_0_i *)(v0 + 3904))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 220))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 224));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 220)));
    }
    return v1;
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
int func_0043D8D0(int p0) {
    char *v0;
    int v1;
    v0 = (char *)p0;
    ((VCC_1_pv *)(v0 + 832))->m((v0 + 4992));
    v1 = ((VCC_1_pi *)(v0 + 2368))->m((v0 + 4992));
    if (*(unsigned char *)(v0 + 5156) == 1) {
        v1 = ((VCC_1_pi *)(v0 + 3904))->m((v0 + 5056));
    }
    return v1;
}
}
