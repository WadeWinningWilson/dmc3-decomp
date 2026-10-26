extern "C" char *func_00207480(int, int, int, int);

extern "C" void func_001AD140(char *);

extern "C" char *func_00279290(char *);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" char D_00581F30[];

extern "C" void func_001A1D90(char *);

extern "C" void func_003D3620(char *);

extern "C" void func_003D3880(char *);

class O3D3a {
public:
    virtual void u8();
    virtual char *mC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual int m2C(char *, char *);
};

class O3D3b {
public:
    virtual void u8();
    virtual int mC(char *, char *);
};

static inline char *ent3D30(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch3D30(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent3D30(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_003D3090(char *p) {
    char *e;
    char *q;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(signed char *)(p + 0x46) = *(signed char *)(p + 0x150);
    *(int *)(p + 0xB50) = 0;
    *(int *)(p + 0xB60) = 0;
    *(short *)(p + 0xB64) = 0;
    *(short *)(p + 0xB66) = 0;
    *(char **)(p + 0x198) = gch3D30(*(char **)(p + 0x190), 5);
    *(char **)(p + 0x19C) = gch3D30(*(char **)(p + 0x190), 6);
    *(char **)(p + 0x1A0) = gch3D30(*(char **)(p + 0x190), 0);
    if (!((O3D3a *)(p + 0x240))->m2C(*(char **)(p + 0x198), *(char **)(p + 0x1A0))) {
        func_001AD140(p);
        return;
    }
    if (!(unsigned char)((O3D3b *)(p + 0x840))->mC(((O3D3a *)(p + 0x240))->mC(), *(char **)(p + 0x19C))) {
        func_001AD140(p);
        return;
    }
    func_001A1D90(func_00279290(p + 0x240));
    *(char **)(p + 0xB50) = func_00207480(3, 0x335, 0, 0x10);
    if ((e = *(char **)(p + 0xB50)) != 0) {
        q = p + 0x1F0;
        *(char **)(e + 0x90) = q;
        e[0x9A] = 0;
        (*(char **)(p + 0xB50))[0x3A] = 1;
    } else {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x50) = 0.0f;
    *(float *)(p + 0x54) = 0.0f;
    *(float *)(p + 0x58) = 0.0f;
    *(float *)(p + 0x5C) = 1.0f;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 1.0f;
    switch (*(int *)(p + 0xB58) & 0x7F) {
    case 0:
        func_003D3620(p);
        break;
    case 1:
        func_003D3880(p);
        break;
    }
    *(unsigned char *)(p + 0xAF0) = 7;
    *(unsigned char *)(p + 0xAF1) = 0;
    *(short *)(p + 0xAF2) = 0;
    *(unsigned char *)(p + 0xB00) = 2;
    *(float *)(p + 0xB10) = 0.0f;
    *(float *)(p + 0xB14) = 0.0f;
    *(float *)(p + 0xB18) = 0.0f;
    *(float *)(p + 0xB1C) = 1.0f;
    *(float *)(p + 0xB20) = 70.0f;
    func_0028C200(p + 0x8D0, p + 0xAF0, p + 0xB00, 3, D_00581F30, p, 0);
    *(int *)(p + 0x9A8) = 0x30441;
    func_0028C8E0(p + 0x8D0, 0);
    func_0028C910(p + 0x8D0);
    func_0028C3A0(p + 0x8D0, 0, -1, q);
    *(int *)(p + 0xB54) = 0;
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
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
int func_003D3C80(int p0) {
    int tmp0;
    ((VD0_0_v *)(p0 + 576))->m();
    tmp0 = ((V14_0_i *)(p0 + 2112))->m();
    return tmp0;
}
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class VCC_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_003D3CC0(int p0) {
    int tmp0;
    ((VCC_1_iv *)(p0 + 576))->m((p0 + 496));
    tmp0 = ((V10_0_i *)(p0 + 2112))->m();
    return tmp0;
}
}
