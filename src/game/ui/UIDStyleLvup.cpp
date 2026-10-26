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

extern "C" void func_004FB7D0(char *p) {
    int i = 0;
    char *o;
    char *a;
    if (0 < **(signed char **)(p + 3504)) {
        o = p;
        a = p + 3440;
        do {
            ((SubCCc *)(o + 256))->mCC(a);
            i++;
            o += 1536;
        } while (i < **(signed char **)(p + 3504));
    }
}

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_001AD140(char *);

extern "C" void func_004FB0A0(char *);

extern "C" void func_004FB4A0(char *);

class W4FA {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24(int);
    virtual void u28();
    virtual int m2C(char *, char *);
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void m3C(int);
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
    virtual void mB0(char *, char *);
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void mC8(char *);
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void mD8(char *, int, int);
};

static inline char *ent4FA(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *gch4FA(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent4FA(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" void func_004FAC20(char *p) {
    char *a;
    char *b;
    char *c;
    int i;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 0xD30) = 0;
        *(float *)(p + 0xD40) = 0.0f;
        *(float *)(p + 0xD44) = 0.0f;
        *(float *)(p + 0xD48) = 0.0f;
        *(float *)(p + 0xD4C) = 1.0f;
        *(float *)(p + 0xD50) = 0.0f;
        *(float *)(p + 0xD54) = 0.0f;
        *(float *)(p + 0xD58) = 0.0f;
        *(float *)(p + 0xD5C) = 1.0f;
        *(float *)(p + 0xD60) = 1.0f;
        *(float *)(p + 0xD64) = 1.0f;
        *(float *)(p + 0xD68) = 1.0f;
        *(float *)(p + 0xD6C) = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0xD70) : "memory");
        func_00131700(p + 0xD70, p + 0xD70, p + 0xD50);
        func_00105230(p + 0xD70, p + 0xD70, p + 0xD40);
        func_001318E0(p + 0xD70, p + 0xD70, p + 0xD60);
        *(signed char *)(p + 0xDB4) = -1;
        *(unsigned char *)(p + 4) = 1;
    case 1:
        for (i = 0; i < **(signed char **)(p + 0xDB0); i++) {
            a = gch4FA(*(char **)(p + 0xDC), i * 3);
            b = gch4FA(*(char **)(p + 0xDC), i * 3 + 1);
            c = gch4FA(*(char **)(p + 0xDC), i * 3 + 2);
            if (!(*(unsigned char *)(a + 0x11) < 6)) goto fail;
            ((W4FA *)(p + i * 0x600 + 0x100))->m24(1);
            if (!(unsigned char)((W4FA *)(p + i * 0x600 + 0x100))->m2C(a, c)) goto fail;
            ((W4FA *)(p + i * 0x600 + 0x100))->mB0(b, p + i * 0x14 + 0xD00);
            ((W4FA *)(p + i * 0x600 + 0x100))->mD8(b, 0, 0);
            ((W4FA *)(p + i * 0x600 + 0x100))->mC8(p + 0xD70);
            ((W4FA *)(p + i * 0x600 + 0x100))->m3C(0);
        }
        *(unsigned char *)(p + 4) = 2;
    case 2:
        switch (*(int *)(p + 0xDB8)) {
        case 0:
            func_004FB0A0(p);
            break;
        case 1:
            func_004FB4A0(p);
            break;
        case 2:
            func_004FB4A0(p);
            break;
        }
        break;
    case 3:
        *(unsigned char *)(p + 0xDB4) = 3;
        *(unsigned char *)(p + 4) = 4;
    case 4:
        break;
    }
    for (i = 0; i < **(signed char **)(p + 0xDB0); i++) {
        ((W4FA *)(p + i * 0x600 + 0x100))->mC8(p + 0xD70);
    }
    func_00195E20(D_005BE098, p);
    return;
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 4;
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
int func_004FB720(char *p0) {
    int v2;
    int v3;
    int v4;
    char *v0;
    char *v1;
    int v5;
    v0 = p0;
    v2 = 0;
    if ((0 < *(signed char *)(*(char **)(p0 + 3504) + 0))) {
        v1 = v0;
        do {
            v5 = ((VD0_0_i *)(v1 + 256))->m();
            v2 = (v2 + 1);
            v1 = (v1 + 1536);
        } while ((v2 < *(signed char *)(*(char **)(v0 + 3504) + 0)));
    }
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
