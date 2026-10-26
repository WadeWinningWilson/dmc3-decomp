extern "C" void func_001AD140(char *);

extern "C" char *func_00279290(char *);

extern "C" void func_0028C8E0(char *, int);

extern "C" void func_0028C910(char *);

extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern "C" void func_002E7920(char *, char *, char *, char *, int, int);

extern "C" void func_001A1D90(char *);

extern "C" char D_00587920[];

extern "C" char D_00587EA0[];

extern "C" void func_004F5110(char *, int);

class O4F3a {
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
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void mB0(int, char *);
};

class O4F3b {
public:
    virtual void u8();
    virtual int mC(char *, char *);
};

class O4F3c {
public:
    virtual void u8();
    virtual void mC(char *, char *, char *, int);
};

class B0_4F3 {
public:
    char pad[0x40];
};

class B1_4F3 {
public:
    int x;
};

class D_4F3 : public B0_4F3, public B1_4F3 {
public:
    int y;
};

static inline char *ent4F3(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch4F3(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent4F3(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_004F3AC0(D_4F3 *self) {
    char *p = (char *)self;
    char *h;
    char *x;
    char *y;
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(float *)(p + 0xBE4) = -1.0f;
    *(unsigned char *)(p + 0xBEC) = 0;
    *(unsigned char *)(p + 0xBED) = 0;
    *(unsigned char *)(p + 0xBEE) = 1;
    *(int *)(p + 0xBCC) = 0;
    *(unsigned char *)(p + 0xBEF) = 0;
    h = *(char **)(*(char **)(p + 0x484) + 0xE70);
    y = gch4F3(h, 0);
    x = gch4F3(h, 0x3A);
    if (!(unsigned char)((O4F3a *)(p + 0x4C0))->m2C(x, y)) {
        *(unsigned char *)(p + 4) = 3;
        return;
    }
    ((O4F3a *)(p + 0x4C0))->mB0(0, p + 0xB50);
    h = gch4F3(h, 0x3B);
    if (!(unsigned char)((O4F3b *)(p + 0xAC0))->mC(((O4F3a *)(p + 0x4C0))->mC(), h)) {
        func_001AD140(p);
        return;
    }
    func_001A1D90(func_00279290(p + 0x4C0));
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    func_004F5110(p, 0);
    *(unsigned char *)(p + 0x3D0) = 5;
    *(unsigned char *)(p + 0x3D1) = 0;
    *(short *)(p + 0x3D2) = 0;
    *(unsigned char *)(p + 0x3D4) = 2;
    *(unsigned char *)(p + 0x3D5) = 0;
    *(short *)(p + 0x3D6) = 1;
    *(unsigned char *)(p + 0x3E0) = 2;
    *(float *)(p + 0x3F0) = 0.0f;
    *(float *)(p + 0x3F4) = 0.0f;
    *(float *)(p + 0x3F8) = 20.0f;
    *(float *)(p + 0x3FC) = 1.0f;
    *(float *)(p + 0x400) = 30.0f;
    *(unsigned char *)(p + 0x430) = 2;
    *(float *)(p + 0x440) = 0.0f;
    *(float *)(p + 0x444) = 0.0f;
    *(float *)(p + 0x448) = 20.0f;
    *(float *)(p + 0x44C) = 1.0f;
    *(float *)(p + 0x450) = 50.0f;
    func_0028C200(p + 0x1B0, p + 0x3D0, p + 0x3E0, 3, D_00587920, p, 0);
    *(int *)(p + 0x288) = 0x443;
    func_0028C8E0(p + 0x1B0, 0x12);
    func_0028C910(p + 0x1B0);
    *(unsigned char *)(p + 0x1B3) = 0;
    func_0028C3A0(p + 0x1B0, 0, -1, p + 0x170);
    func_0028C3A0(p + 0x1B0, 1, -1, p + 0x170);
    func_002E7920(p + 0xB64, D_00587EA0, p + 0xB54, p + 0xBA8, (int)(char *)(B1_4F3 *)self, 0);
    ((O4F3c *)(p + 0xBA8))->mC(D_00587EA0, p + 0xB54, (char *)(B1_4F3 *)self, 1);
}

extern "C" char D_01DFABA0[];

extern "C" char *func_00207480(int, int, char *, int);

extern "C" void func_0028C740(char *);

extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" char D_005BE098[8];

extern "C" void func_00206730(char *);

extern "C" void func_004F40D0(char *);

extern "C" void func_004F4400(char *);

extern "C" void func_004F4690(char *);

extern "C" void func_004F4A40(char *);

extern "C" float func_0011DBE0(float, float);

extern "C" void func_004F50B0(char *);

extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_00195E20(char *, char *);

class W4F3E {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void mC8(char *);
};

extern "C" void func_004F3E10(char *p) {
    func_00206730(p + 0x480);
    if (*(unsigned char *)(p + 0xBEC) == 1 && *(unsigned char *)(p + 0xBEE) != *(unsigned char *)(*(char **)(p + 0x484) + 0xB2CF)) {
        func_00207480(3, 0x34A, p + 0x170, 0x10);
        func_00330BD0(D_01DFABA0, 0x70, p + 0x50, 0x23, 0);
    }
    *(unsigned char *)(p + 0xBEE) = *(unsigned char *)(*(char **)(p + 0x484) + 0xB2CF);
    if (*(unsigned char *)(p + 0xBEC) == 1 && *(unsigned char *)(*(char **)(p + 0x484) + 0xB2CF) == 0) return;
    *(unsigned char *)(p + 0xBEC) = 0;
    *(int *)(p + 0xBC8) = 0;
    if (*(char **)(p + 0x22C) != 0) {
        *(int *)(p + 0xBC8) |= *(int *)(*(char **)(p + 0x22C) + 8);
    }
    if (*(char **)(p + 0x230) != 0) {
        *(int *)(p + 0xBC8) |= *(int *)(*(char **)(p + 0x230) + 8);
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_004F40D0(p);
        break;
    case 1:
        func_004F4400(p);
        break;
    case 2:
        func_004F4690(p);
        break;
    case 3:
        func_004F4A40(p);
        break;
    }
    if (!(*(int *)(p + 0xBCC) < 4)) {
        *(unsigned char *)(p + 4) = 2;
        *(unsigned char *)(p + 5) = 0;
    }
    if ((*(int *)(p + 0xBC8) & 0x40) && *(unsigned char *)(p + 0xBEF) == 0) {
        *(unsigned char *)(p + 0xBEF) = 1;
        *(float *)(p + 0xBE4) = 60.0f;
    }
    if (*(unsigned char *)(p + 0xBEF) == 1 && (*(float *)(p + 0xBE4) -= *(float *)(p + 0x10)) <= 0.0f) {
        func_0028C740(p + 0x1B0);
        *(unsigned char *)(p + 0xBEF) = 0;
        func_0028C8E0(p + 0x1B0, 0x12);
        func_0028C910(p + 0x1B0);
        func_0028C3A0(p + 0x1B0, 0, -1, p + 0x170);
        func_0028C3A0(p + 0x1B0, 1, -1, p + 0x170);
    }
    *(float *)(p + 0x84) = func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8));
    *(short *)(p + 0x90) = (int)(0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f);
    func_004F50B0(p);
    ((W4F3E *)(p + 0x4C0))->mC8(p + 0x170);
    if (*(unsigned char *)(p + 0xBED) == 1) {
        func_0028C5C0(p + 0x1B0, 0, *(float *)(p + 0x10));
        func_00195E20(D_005BE098, p);
    }
}

extern "C" {
int func_0013D5D0(...);
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
int func_004F4F90(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 1216))->m();
    v1 = ((V14_0_i *)(v0 + 2752))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 336))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 340));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 336)));
    }
    return v1;
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
int func_004F5020(int p0) {
    int tmp0;
    ((VCC_1_iv *)(p0 + 1216))->m((p0 + 368));
    tmp0 = ((V10_0_i *)(p0 + 2752))->m();
    return tmp0;
}
}
