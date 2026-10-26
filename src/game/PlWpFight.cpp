class C384 {
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

extern "C" void func_003848A0(char *p) {
    char *q = *(char **)(p + 0xE0);
    unsigned char k = *(unsigned char *)(q + 0x28A0);
    if (k == 0 || (q + 0x28A2)[k] == 4) {
        ((C384 *)(p + 0x200))->m(p + 0x820);
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
int func_00384900(int p0) {
    char *v0;
    int v3;
    int v6;
    int v5;
    int v2;
    char *v1;
    int v4;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 512))->m();
    ((V14_0_v *)(v0 + 2048))->m();
    v3 = 0;
    v1 = v0;
    do {
        v5 = func_00286040((v1 + 2208));
        v2 = *(int *)(v1 + 2208);
        if (v2 != 0) {
            v5 = func_001AD140(v2);
        }
        v3 = (v3 + 1);
        v1 = (v1 + 4);
    } while ((v3 < 4));
    if ((0 < *(int *)(v0 + 300))) {
        v6 = 0;
        v4 = (int)v0;
        do {
            v5 = func_0013D5D0((v4 + 304));
            v6 = (v6 + 1);
            v4 = (v4 + 16);
        } while ((v6 < *(int *)(v0 + 300)));
    }
    return v5;
}
}
