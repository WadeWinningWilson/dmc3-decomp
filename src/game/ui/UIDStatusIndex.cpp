extern "C" char *func_00279290(char *);

extern "C" void func_001A2D70(char *, int, int);

extern "C" void func_001A2000(char *, int);

class W488 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void mC8(char *);
};

extern "C" void func_00488530(char *p) {
    int i;
    char *q;
    for (i = 0; i < 6; i++) {
        if (*(signed char *)(p + 0x2002) == i) {
            func_001A2D70(func_00279290(p + 0x740), i, 0x80C0C0C0);
            *(float *)(*(char **)(p + i * 4 + 0x1FC4) + 0x184) = 1.2f;
            *(float *)(*(char **)(p + i * 4 + 0x1FC4) + 0x198) = 1.5f;
        } else if (i != 0) {
            func_001A2D70(func_00279290(p + 0x740), i, 0x80404040);
            *(float *)(*(char **)(p + i * 4 + 0x1FC4) + 0x184) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1FC4) + 0x198) = 1.0f;
        }
    }
    for (i = 0; i < 6; i++) {
        if ((signed char)i == 0) {
            func_001A2000(func_00279290(p + 0x1940), i);
        } else if (*(signed char *)(p + 0x2003) == (signed char)i) {
            *(float *)(*(char **)(p + i * 4 + 0x1FE0) + 0x184) = 1.2f;
            *(float *)(*(char **)(p + i * 4 + 0x1FE0) + 0x198) = 1.5f;
        } else {
            *(float *)(*(char **)(p + i * 4 + 0x1FE0) + 0x184) = 1.0f;
            *(float *)(*(char **)(p + i * 4 + 0x1FE0) + 0x198) = 1.0f;
        }
    }
    q = p + 0x1F80;
    ((W488 *)(p + 0x740))->mC8(q);
    ((W488 *)(p + 0x1940))->mC8(q);
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
int func_00488400(int p0) {
    char *v0;
    int v4;
    int v2;
    int v5;
    char *v1;
    int v3;
    v2 = 0;
    v0 = (char *)p0;
    v1 = v0;
    do {
        v4 = ((VD0_0_i *)(v1 + 320))->m();
        v2 = (v2 + 1);
        v1 = (v1 + 1536);
    } while ((v2 < 5));
    v5 = 0;
    if ((0 < *(int *)(v0 + 56))) {
        v3 = (int)v0;
        do {
            v4 = func_0013D5D0((v3 + 60));
            v5 = (v5 + 1);
            v3 = (v3 + 16);
        } while ((v5 < *(int *)(v0 + 56)));
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
int func_00488490(int p0) {
    int v3;
    int v2;
    char *v0;
    int v1;
    v3 = 0;
    v1 = (p0 + 8064);
    v0 = (char *)p0;
    do {
        v2 = ((VCC_1_ii *)(v0 + 320))->m(v1);
        v3 = (v3 + 1);
        v0 = (v0 + 1536);
    } while ((v3 < 5));
    return v2;
}
}
