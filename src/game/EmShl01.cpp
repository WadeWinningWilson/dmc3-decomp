class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" int func_0030B430(char *p) {
    int i;
    int r;
    char *a = p;
    char *o = p;
    for (i = 0; i < 3; i++, a += 64, o += 1536) {
        r = ((SubCCc *)(o + 384))->mCC(a + 5744);
        if (*(unsigned char *)(p + 5944) == 0) {
            break;
        }
    }
    return r;
}

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

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_00228300(char *);

extern "C" void func_0030B340(char *);

extern "C" void func_0030B3D0(char *);

extern "C" {
void func_0030B0D0(char *p) {
    extern void func_001AD140(char *);
    func_00228300(p + 0xD0);
    if (*(int *)(p + 0xD0) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)func_0024E780(*(char **)(p + 0x173C), 0, 0) != 1) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        ((Obj130b *)p)->m130();
        break;
    case 1:
        func_0030B340(p);
        break;
    case 2:
        func_0030B3D0(p);
        break;
    }
}
}

extern "C" char *func_00279290(char *);

extern "C" float D_00559990[];

extern "C" float D_00559994[];

extern "C" float D_005BC6A8;

extern "C" unsigned char D_005BCA88;

extern "C" unsigned char D_005BCA89;

extern "C" unsigned char D_005BCA8A;

extern "C" unsigned char D_005BCA8B;

extern "C" float D_005BCA8C;

extern "C" void func_001A2840(char *, int, float);

class V30B {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual int m2C(int, int);
};

extern "C" {
void func_0030B1A0(char *p) {
    int func_001AD140(char *p);
    int i;
    *(float *)(p + 0x1380) = D_00559990[0] / D_00559994[0];
    *(float *)(p + 0x1730) = *(volatile float *)D_00559990;
    *(float *)(p + 0xE0) = 1.0f;
    *(float *)(p + 0xE4) = 1.0f;
    *(float *)(p + 0xE8) = 0.0f;
    if ((unsigned char)((V30B *)(p + 0x180))->m2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)((V30B *)(p + 0x780))->m2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)((V30B *)(p + 0xD80))->m2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x1734) = D_005BC6A8;
    *(unsigned char *)(p + 0x1738) = 1;
    if (*(unsigned char *)(p + 0x1739) == 1) {
        for (i = 0; i < 3; i++) {
            func_001A2840(func_00279290(p + i * 0x600 + 0x180), (D_005BCA8B << 24) + ((D_005BCA8A << 16) + (D_005BCA88 + (D_005BCA89 << 8))), 1.0f / D_005BCA8C);
        }
    }
    *(unsigned char *)(p + 4) = 1;
}
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
int func_0030B3E0(int p0) {
    int v2;
    char *v0;
    int v1;
    v2 = 0;
    v0 = (char *)p0;
    do {
        v1 = ((VD0_0_i *)(v0 + 384))->m();
        v2 = (v2 + 1);
        v0 = (v0 + 1536);
    } while ((v2 < 3));
    return v1;
}
}
