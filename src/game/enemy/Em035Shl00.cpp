class O4E6a {
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

class O4E6b {
public:
    virtual void u8();
    virtual int mC(char *, char *);
};

typedef struct { float f[4]; } __attribute__((aligned(16))) Q4E6;

extern "C" Q4E6 D_0058B710;

extern "C" char D_00587920[];

extern "C" char D_0058AE10[];

extern "C" char *func_00279290(char *);

extern "C" void func_001A1D90(char *);

extern "C" void func_00133890(char *, float *, char *);

extern "C" char *func_00207470(int, int, char *);

extern "C" char *func_002FF750(int, char *, int);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" void func_002530C0(char *, char *);

static inline char *ent4E6(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch4E6(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent4E6(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_004E64F0(char *p) {
    char *h;
    char *x;
    char *y;
    char *e;
    Q4E6 t;
    *(unsigned char *)(p + 4) = 1;
    h = *(char **)(*(char **)(p + 0x478) + 0xE70);
    y = gch4E6(h, 0x1F);
    x = gch4E6(h, 0x20);
    if (!(unsigned char)((O4E6a *)(p + 0x480))->m2C(x, y)) {
        *(unsigned char *)(p + 4) = 4;
        return;
    }
    h = gch4E6(h, 0x21);
    if (!(unsigned char)((O4E6b *)(p + 0xA80))->mC(((O4E6a *)(p + 0x480))->mC(), h)) {
        *(unsigned char *)(p + 4) = 4;
        return;
    }
    func_001A1D90(func_00279290(p + 0x480));
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    t = D_0058B710;
    func_00133890(p + 0x150, (float *)(p + 0xF0), (char *)&t);
    *(float *)(p + 0x180) = *(float *)(p + 0x50);
    *(float *)(p + 0x184) = *(float *)(p + 0x54);
    *(float *)(p + 0x188) = *(float *)(p + 0x58);
    *(float *)(p + 0x18C) = 1.0f;
    *(char **)(p + 0x470) = func_00207470(3, 0x329, 0);
    if ((e = *(char **)(p + 0x470)) != 0) {
        *(char **)(e + 0x90) = p + 0x150;
        e[0x9A] = 3;
        (*(char **)(p + 0x470))[0x3A] = 1;
    }
    *(char **)(p + 0x474) = func_002FF750(0x12, p + 0x150, 1);
    *(unsigned char *)(p + 0x3C0) = 5;
    *(unsigned char *)(p + 0x3C1) = 0;
    *(short *)(p + 0x3C2) = 0;
    *(unsigned char *)(p + 0x3C4) = 2;
    *(unsigned char *)(p + 0x3C5) = 0;
    *(short *)(p + 0x3C6) = 1;
    *(unsigned char *)(p + 0x3D0) = 2;
    *(float *)(p + 0x3E0) = 0.0f;
    *(float *)(p + 0x3E4) = 0.0f;
    *(float *)(p + 0x3E8) = 0.0f;
    *(float *)(p + 0x3EC) = 1.0f;
    *(float *)(p + 0x3F0) = 80.0f;
    *(unsigned char *)(p + 0x420) = 2;
    *(float *)(p + 0x430) = 0.0f;
    *(float *)(p + 0x434) = 0.0f;
    *(float *)(p + 0x438) = 0.0f;
    *(float *)(p + 0x43C) = 1.0f;
    *(float *)(p + 0x440) = 90.0f;
    func_0028C200(p + 0x1A0, p + 0x3C0, p + 0x3D0, 3, D_00587920, p, 0);
    *(int *)(p + 0x278) = 0x30443;
    func_0028C8E0(p + 0x1A0, 0xA);
    func_0028C910(p + 0x1A0);
    func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x1A0, 1, -1, p + 0x150);
    *(short *)(p + 0xB10) = 0;
    *(int *)(p + 0xB1C) = 0;
    func_002530C0(p, D_0058AE10);
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_004E6840(char *);
}

extern "C" {
int func_004E6B40(char *);
}

extern "C" {
int func_004E6D10(char *);
}

extern "C" {
int func_004E6EB0(char *);
}

class V130_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_004E6440(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    v0 = (char *)p0;
    v1 = func_001AD100();
    v2 = *(unsigned char *)(v0 + 4);
    tmp0 = 4;
    if (v2 != tmp0) {
        if (v2 != 3) {
            tmp1 = 2;
            if (v2 != tmp1) {
                if (v2 != 1) {
                    if (v2 != 0) {
                        return v1;
                    } else {
                        tmp2 = ((V130_0_i *)v0)->m();
                        return tmp2;
                    }
                } else {
                    tmp3 = func_004E6840(v0);
                    return tmp3;
                }
            } else {
                tmp4 = func_004E6B40(v0);
                return tmp4;
            }
        } else {
            tmp5 = func_004E6D10(v0);
            return tmp5;
        }
    } else {
        v3 = func_004E6EB0(v0);
        return v3;
    }
}
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
int func_004E6EC0(int p0) {
    int tmp0;
    ((VD0_0_v *)(p0 + 1152))->m();
    tmp0 = ((V14_0_i *)(p0 + 2688))->m();
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
int func_004E6F00(int p0) {
    int tmp0;
    ((VCC_1_iv *)(p0 + 1152))->m((p0 + 336));
    tmp0 = ((V10_0_i *)(p0 + 2688))->m();
    return tmp0;
}
}
