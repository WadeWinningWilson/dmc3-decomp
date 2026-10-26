class Obj130b {
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
    virtual void m130();
    virtual void d75();
    virtual void m138();
    virtual void m13C();
};

extern "C" void func_00206730(char *);

extern "C" char D_005BE098[4];

extern "C" void func_00195E20(char *, char *);

extern "C" void func_001AD100(char *);

extern "C" void func_00452980(char *);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_00452720(char *p) {
    char *q;
    unsigned char *f;
    func_001AD100(p);
    if (*(unsigned char *)(p + 0x11E0) != 0) {
        func_00206730(p + 0x1630);
        switch (*(unsigned char *)(p + 4)) {
        case 0:
            ((Obj130b *)p)->m130();
            break;
        case 1:
            func_00452980(p);
            break;
        }
        if (*(unsigned char *)(p + 0x11E7) == 0) {
            func_0028C5C0(p + 0x1260, 0, *(float *)(p + 0x10));
            q = *(char **)(p + 0x1630);
            if (q != 0) {
                f = (unsigned char *)(q + 0x3B);
                if (*f == 1) {
                    *f = 0;
                }
            }
        } else {
            q = *(char **)(p + 0x1630);
            if (q != 0) {
                f = (unsigned char *)(q + 0x3B);
                if (*f == 0) {
                    *f = 1;
                }
            }
        }
        if (*(unsigned char *)(p + 4) == 1) {
            func_00195E20(D_005BE098, p);
        }
    }
}

class ObjCCv {
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
    virtual void mCC(char *);
};

extern "C" void func_004539C0(char *p) {
    switch (*(unsigned char *)(p + 0x11E2)) {
    case 0:
        if (*(unsigned char *)(p + 0x11E5) != 0) {
            ((ObjCCv *)(p + 0x520))->mCC(p + 0x1220);
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x11E5) != 0) {
            ((ObjCCv *)(p + 0x520))->mCC(p + 0x1220);
        }
        if (*(unsigned char *)(p + 0x11E6) != 0) {
            ((ObjCCv *)(p + 0x960))->mCC(p + 0x1220);
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x11E6) != 0) {
            ((ObjCCv *)(p + 0x960))->mCC(p + 0x1220);
        }
        break;
    }
    if (*(unsigned char *)(p + 0x11E5) != 0 || *(unsigned char *)(p + 0x11E6) != 0) {
        ((ObjCCv *)(p + 0xE0))->mCC(p + 0x1220);
        ((ObjCCv *)(p + 0xDA0))->mCC(p + 0x1220);
    }
}

extern "C" char *func_00207480(int, int, char *, int);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

class V58 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19(); virtual void f(int, int, int, int);
};

extern "C" void func_00452820(char *p) {
    float m[16] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    {
        int a = *(int *)(p + 0x11F4);
        int b = *(int *)(p + 0x11F8);
        ((V58 *)(p + 0xDA0))->f(a, b, 0, 0);
    }
    *(unsigned char *)(p + 0x45) = 6;
    r[0] = *(float *)(p + 0x80) / 360.0f * 6.283185f;
    r[1] = *(float *)(p + 0x84) / 360.0f * 6.283185f;
    r[2] = *(float *)(p + 0x88) / 360.0f * 6.283185f;
    r[3] = 1.0f;
    t[0] = *(float *)(p + 0x50);
    t[1] = *(float *)(p + 0x54) - 300.0f;
    t[2] = *(float *)(p + 0x58);
    t[3] = 1.0f;
    s[3] = 1.0f;
    s[0] = 2.5f;
    s[1] = 2.5f;
    s[2] = 2.5f;
    UNIT(m);
    func_00131700((char *)m, (char *)m, (char *)r);
    func_00105230((char *)m, (char *)m, (char *)t);
    func_001318E0((char *)m, (char *)m, (char *)s);
    *(char **)(p + 0x1630) = func_00207480(2, 0xA0, (char *)m, 0x40);
    *(float *)(p + 0x1214) = 30.0f;
    *(unsigned int *)(p + 0xC) |= 0x40;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    (*(unsigned char *)(p + 4))++;
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
int func_004526C0(int p0) {
    int tmp0;
    ((VD0_0_v *)(p0 + 224))->m();
    ((VD0_0_v *)(p0 + 1312))->m();
    ((VD0_0_v *)(p0 + 2400))->m();
    tmp0 = ((VD0_0_i *)(p0 + 3488))->m();
    return tmp0;
}
}
