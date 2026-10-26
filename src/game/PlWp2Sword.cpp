extern "C" void func_00105300(char *, char *);

extern "C" int func_0028BFE0(char *);

class Sub200 {
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

class Sub140 {
public:
    virtual void d0();
    virtual void d1();
    virtual void m10();
};

extern "C" void func_0028F6D0(char *p) {
    float m[16];
    if (*(signed char *)(p + 0xDA) != -1) {
        func_00105300((char *)m, *(char **)(*(char **)(p + 0x100) + 0x104));
        ((Sub200 *)(p + 0x200))->mCC((char *)m);
        if ((unsigned char)func_0028BFE0(p) == 1) {
            ((Sub140 *)(p + 0x140))->m10();
        }
    }
}

extern "C" char *func_002D9F00(char *, int);

extern "C" void func_00104C00(char *, char *, char *);

class VC8 {
public:
    virtual void d0();virtual void d1();virtual void d2();virtual void d3();virtual void d4();virtual void d5();virtual void d6();virtual void d7();virtual void d8();virtual void d9();virtual void d10();virtual void d11();virtual void d12();virtual void d13();virtual void d14();virtual void d15();virtual void d16();virtual void d17();virtual void d18();virtual void d19();virtual void d20();virtual void d21();virtual void d22();virtual void d23();virtual void d24();virtual void d25();virtual void d26();virtual void d27();virtual void d28();virtual void d29();virtual void d30();virtual void d31();virtual void d32();virtual void d33();virtual void d34();virtual void d35();virtual void d36();virtual void d37();virtual void d38();virtual void d39();virtual void d40();virtual void d41();virtual void d42();virtual void d43();virtual void d44();virtual void d45();virtual void d46();virtual void d47(); virtual void f(float *);
};

extern "C" void func_0028F570(char *p) {
    float m[16] __attribute__((aligned(16)));
    if (*(signed char *)(p + 0xDA) != 0) {
        func_00105300((char *)m, func_002D9F00(*(char **)(p + 0xE0), 0));
        ((VC8 *)(p + 0x200))->f(m);
        func_00105300(p + 0x880, *(char **)(*(char **)(p + 0x108) + 0x104));
        func_00105300(p + 0x8C0, *(char **)(*(char **)(p + 0x104) + 0x104));
    } else {
        if (*(signed char *)(p + 0x90C) != -1) {
            func_00104C00(p + 0x880, func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x800);
        }
        if (*(signed char *)(p + 0x90D) != -1) {
            func_00104C00(p + 0x8C0, func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD5)), p + 0x840);
        }
        if (*(signed char *)(p + 0x90C) == -1) {
            func_00104C00(p + 0x880, p + 0x8C0, p + 0x800);
        }
        if (*(signed char *)(p + 0x90D) == -1) {
            func_00104C00(p + 0x8C0, p + 0x880, p + 0x840);
        }
        func_00105300(*(char **)(*(char **)(p + 0x108) + 0x104), p + 0x880);
        func_00105300(*(char **)(*(char **)(p + 0x104) + 0x104), p + 0x8C0);
        func_00105300(*(char **)(*(char **)(p + 0x100) + 0x104), *(char **)(p + 0xE0) + 0x110);
    }
}

extern "C" {
int func_0013D5D0(...);
}

extern "C" {
int func_001AD140(...);
}

extern "C" {
int func_00286040(char *);
}

class V14_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(void);
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
int func_0028F750(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 512))->m();
    if (*(unsigned char *)(v0 + 221) == 1) {
        ((V14_0_v *)(v0 + 320))->m();
    }
    func_00286040((v0 + 2304));
    v1 = *(int *)(v0 + 2304);
    if (v1 != 0) {
        func_001AD140(v1);
    }
    v2 = func_00286040((v0 + 2308));
    v3 = *(int *)(v0 + 2308);
    if (v3 != 0) {
        v2 = func_001AD140(v3);
    }
    v4 = 0;
    if ((0 < *(int *)(v0 + 268))) {
        v5 = (int)v0;
        do {
            v2 = func_0013D5D0((v5 + 272));
            v4 = (v4 + 1);
            v5 = (v5 + 16);
        } while ((v4 < *(int *)(v0 + 268)));
    }
    return v2;
}
}
