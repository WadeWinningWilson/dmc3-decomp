class ObjRel2 {
public:
    virtual void d0();
    virtual void d1();
    virtual void m10(int);
};

extern "C" void func_00206730(char *);

extern "C" void func_001AD140(char *);

extern "C" void func_0028C740(char *);

/* Drops the effect at +0x4A4, stops the helper at +0x4B4, then resets the motion at +0x150. */
extern "C" void func_0042CF90(char *p) {
    func_00206730(p + 0x4A4);
    if (*(char **)(p + 0x4A4) != 0) {
        *(*(char **)(p + 0x4A4) + 0x3A) = 1;
        func_001AD140(*(char **)(p + 0x4A4));
        *(char **)(p + 0x4A4) = 0;
    }
    if (*(ObjRel2 **)(p + 0x4B4) != 0) {
        (*(ObjRel2 **)(p + 0x4B4))->m10(0);
    }
    func_0028C740(p + 0x150);
}

extern "C" void * func_002075D0(int, int, char *, int, int);

/* Spawns the trail effect at +0x4A4 (self-destructs on failure) and restarts the helper. */
extern "C" void func_0042CBF0(char *p) {
    *(void **)(p + 0x4A4) = func_002075D0(3, 0x16C, p + 0x420, 1, 16);
    if (*(void **)(p + 0x4A4) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 0x4A8) = 0;
    *(unsigned char *)(p + 0x4A9) = 0;
    *(int *)(p + 0x4AC) = 0;
    *(float *)(p + 0x4B0) = 50.0f;
    if (*(ObjRel2 **)(p + 0x4B4) != 0) {
        (*(ObjRel2 **)(p + 0x4B4))->m10(0);
    }
}

extern "C" {
int func_0042CC80(char *);
}

class V130_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_0042CB80(char *p0) {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        ((V130_1_iv *)p0)->m(v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        /* fall through */
    case 1:
        v2 = func_0042CC80(v1);
        break;
    }
    return v2;
}
}
