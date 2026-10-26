extern "C" char D_01CAFF0C[];

extern "C" char D_01C61820[];

extern "C" void func_001B6D50(char *, int, int, int, unsigned int, int, int *, int);

class VCC {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void d48();
    virtual void d4C();
    virtual void d50();
    virtual void d54();
    virtual void d58();
    virtual void d5C();
    virtual void d60();
    virtual void d64();
    virtual void d68();
    virtual void d6C();
    virtual void d70();
    virtual void d74();
    virtual void d78();
    virtual void d7C();
    virtual void d80();
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void mCC(char *);
};

extern "C" void func_003323F0(char *p) {
    int c[4];
    float t;
    float w;
    int v;
    if (*(int *)(p + 0x2E90) == 0) return;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 9) != 0) return;
    if (*(unsigned char *)(p + 0x2E96) == 0) return;
    switch (*(unsigned char *)(p + 0x2E94)) {
    case 0:
        break;
    case 1:
        ((VCC *)(p + 0x380))->mCC(p + 0x2E50);
        break;
    case 2:
        ((VCC *)(p + 0x980))->mCC(p + 0x2E50);
        break;
    case 3:
        ((VCC *)(p + 0xF80))->mCC(p + 0x2E50);
        break;
    case 4:
        ((VCC *)(p + 0x1580))->mCC(p + 0x2E50);
        break;
    case 5:
        ((VCC *)(p + 0x1B80))->mCC(p + 0x2E50);
        break;
    case 6:
        ((VCC *)(p + 0x2180))->mCC(p + 0x2E50);
        break;
    case 7:
        ((VCC *)(p + 0x2780))->mCC(p + 0x2E50);
        break;
    }
    if (*(unsigned char *)(p + 0x2E96) == 1 && *(unsigned char *)(p + 0x2E94) > 0 && *(unsigned char *)(p + 0x2EB0) == 1) {
        t = *(float *)(p + 0x2E98) / 700.0f;
        w = 64.0f * t;
        if (t < 0.45f) {
            v = (*(int *)(p + 0x2EAC) << 8) + 0x800000FF;
            c[0] = c[1] = c[2] = c[3] = v;
        } else {
            v = (*(int *)(p + 0x2EAC) << 8) + 0x803200FF;
            c[0] = c[1] = c[2] = c[3] = v;
        }
        func_001B6D50(D_01C61820, 0x208, 0x2F, 0xFFFFF1, (unsigned int)w, 2, c, 4);
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
int func_00332360(int p0) {
    int v3;
    char *v0;
    int v2;
    int v4;
    int v5;
    char *v1;
    v2 = 0;
    v0 = (char *)p0;
    v1 = v0;
    do {
        v5 = ((VD0_0_i *)(v1 + 896))->m();
        v2 = (v2 + 1);
        v1 = (v1 + 1536);
    } while ((v2 < 7));
    v3 = 0;
    if ((0 < *(int *)(v0 + 56))) {
        v4 = (int)v0;
        do {
            v5 = func_0013D5D0((v4 + 60));
            v3 = (v3 + 1);
            v4 = (v4 + 16);
        } while ((v3 < *(int *)(v0 + 56)));
    }
    return v5;
}
}
