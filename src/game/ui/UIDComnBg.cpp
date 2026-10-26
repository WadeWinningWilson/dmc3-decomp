extern "C" {
int func_001AD140(char *p);
}

extern "C" char *func_002792A0(char *);

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" void func_00195E20(char *, char *);

extern "C" char D_005BE098[4];

class W3F49 {
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
    virtual int mBC(float);
    virtual void uC0();
    virtual void uC4();
    virtual void mC8(char *);
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void mD8(char *, int, int);
};

class X3F49 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void m1C(float);
    virtual void u20();
    virtual float m24();
};

static inline char *ent3F49(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *gch3F49(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent3F49(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" void func_003F4920(char *p) {
    char *b;
    char *a;
    char *c;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 0x680) = 0;
        *(float *)(p + 0x690) = 0.0f;
        *(float *)(p + 0x694) = 0.0f;
        *(float *)(p + 0x698) = 0.0f;
        *(float *)(p + 0x69C) = 1.0f;
        *(float *)(p + 0x6A0) = 0.0f;
        *(float *)(p + 0x6A4) = 0.0f;
        *(float *)(p + 0x6A8) = 0.0f;
        *(float *)(p + 0x6AC) = 1.0f;
        *(float *)(p + 0x6B0) = 1.0f;
        *(float *)(p + 0x6B4) = 1.0f;
        *(float *)(p + 0x6B8) = 1.0f;
        *(float *)(p + 0x6BC) = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(p + 0x6C0) : "memory");
        func_00131700(p + 0x6C0, p + 0x6C0, p + 0x6A0);
        func_00105230(p + 0x6C0, p + 0x6C0, p + 0x690);
        func_001318E0(p + 0x6C0, p + 0x6C0, p + 0x6B0);
        a = gch3F49(*(char **)(p + 0x6C), 0);
        b = gch3F49(*(char **)(p + 0x6C), 1);
        c = gch3F49(*(char **)(p + 0x6C), 2);
        if (!(*(unsigned char *)(b + 0x11) < 4)) goto fail;
        ((W3F49 *)(p + 0x80))->m24(1);
        if (!(unsigned char)((W3F49 *)(p + 0x80))->m2C(b, a)) goto fail;
        ((W3F49 *)(p + 0x80))->mB0(c, p + 0x70);
        ((W3F49 *)(p + 0x80))->mD8(ent3F49(c, 0), 0, 0);
        ((X3F49 *)func_002792A0(p + 0x80))->m1C(1.0f);
        ((W3F49 *)(p + 0x80))->m3C(4);
        *(unsigned char *)(p + 0x700) = 0;
        *(unsigned char *)(p + 0x701) = 0;
        *(unsigned char *)(p + 4) = 1;
        break;
    case 1:
        ((W3F49 *)(p + 0x80))->mBC(1.0f);
        { char *m = p + 0x6C0; ((W3F49 *)(p + 0x80))->mC8(m); }
        if (!(((X3F49 *)func_002792A0(p + 0x80))->m24() < 12.0f)) {
            *(unsigned char *)(p + 4) = 2;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x700) == 1) {
            ((X3F49 *)func_002792A0(p + 0x80))->m1C(20.0f);
            *(unsigned char *)(p + 4) = 3;
        }
        break;
    case 3:
        if ((unsigned char)((W3F49 *)(p + 0x80))->mBC(1.0f) == 4) {
            *(unsigned char *)(p + 4) = 4;
            *(unsigned char *)(p + 0x701) = 1;
        }
        break;
    case 4:
        break;
    }
    if (*(unsigned char *)(p + 4) != 4) {
        { char *m = p + 0x6C0; ((W3F49 *)(p + 0x80))->mC8(m); }
        func_00195E20(D_005BE098, p);
    }
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
int func_003F4D50(int p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = ((VD0_0_i *)(v0 + 128))->m();
    v2 = 0;
    if ((0 < *(int *)(v0 + 56))) {
        v3 = (int)v0;
        do {
            v1 = func_0013D5D0((v3 + 60));
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < *(int *)(v0 + 56)));
    }
    return v1;
}
}

extern "C" void func_003F4DF0(void) {}

/* AUTO-GENERATED by tools/gen_clones.py: copies of functions in src/game/stage/Stage.cpp
 * with their constants and symbols substituted, verified byte-for-byte. */
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

extern "C" {
extern "C" void func_003F4DD0(char *p) {
    ((SubCCc *)(p + 0x80))->mCC(p + 0x6C0);
}
}
