extern "C" char *func_00279290(char *);

extern "C" void func_001A2D70(char *, int, int);

class ObjDrC8 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void mC8(char *);
};

extern "C" void func_0041D400(char *p) {
    int i;
    for (i = 0; i < 6; i++) {
        if (*(signed char *)(p + 0x2005) == i) {
            func_001A2D70(func_00279290(p + 0x740), i + 1, 0x80C0C0C0);
            *(float *)(*(char **)(p + i * 4 + 0x1FC8) + 0x184) = 1.2f;
            *(float *)(*(char **)(p + i * 4 + 0x1FC8) + 0x198) = 1.5f;
            *(float *)(*(char **)(p + i * 4 + 0x1FE4) + 0x184) = 1.2f;
            *(float *)(*(char **)(p + i * 4 + 0x1FE4) + 0x198) = 1.5f;
        } else {
            func_001A2D70(func_00279290(p + 0x740), i + 1, 0x80404040);
            *(float *)(*(char **)(p + i * 4 + 0x1FC8) + 0x184) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1FC8) + 0x198) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1FE4) + 0x184) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1FE4) + 0x198) = 1.0f;
        }
    }
    {
        char *t = p + 0x1F80;
        ((ObjDrC8 *)(p + 0x740))->mC8(t);
        ((ObjDrC8 *)(p + 0x1940))->mC8(t);
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
int func_0041D2D0(int p0) {
    int v0;
    char *v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    v0 = 0;
    v1 = (char *)p0;
    v2 = v1;
    do {
        v4 = ((VD0_0_i *)(v2 + 320))->m();
        v0 = (v0 + 1);
        v2 = (v2 + 1536);
    } while ((v0 < 5));
    if ((0 < *(int *)(v1 + 56))) {
        v3 = 0;
        v5 = (int)v1;
        do {
            v4 = func_0013D5D0((v5 + 60));
            v3 = (v3 + 1);
            v5 = (v5 + 16);
        } while ((v3 < *(int *)(v1 + 56)));
    }
    return v4;
}
}

class VCC_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_0041D360(int p0) {
    int v2;
    int v3;
    char *v0;
    int v1;
    v3 = 0;
    v0 = (char *)p0;
    v1 = (p0 + 8064);
    do {
        v2 = ((VCC_1_ii *)(v0 + 320))->m(v1);
        v3 = (v3 + 1);
        v0 = (v0 + 1536);
    } while ((v3 < 5));
    return v2;
}
}
