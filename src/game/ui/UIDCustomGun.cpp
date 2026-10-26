extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_00196C40(char *, char *);

extern "C" char D_006480D0[];

class ObjD0 {
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
    virtual void mD0();
};

extern "C" void func_0047DCF0(char *p) {
    int i;
    if (*(char **)(p + 0x3C) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x3C));
        *(char **)(p + 0x3C) = 0;
    }
    if (*(char **)(p + 0x40) != 0) {
        func_00196C40(D_006480D0, *(char **)(p + 0x40));
        *(char **)(p + 0x40) = 0;
    }
    for (i = 0; i < 7; i++) {
        ((ObjD0 *)(p + i * 0x600 + 0x80))->mD0();
    }
    ((ObjD0 *)(p + 0x2A80))->mD0();
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" void func_00131700(char *, char *, char *);

extern "C" void func_00105230(char *, char *, char *);

extern "C" void func_001318E0(char *, char *, char *);

extern "C" char *func_00279290(char *);

extern "C" void func_001A1E70(char *, int);

extern "C" void func_001A2000(char *, int);

extern "C" short D_00581E60[][2];

class Obj600 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24(int);
    virtual void d8();
    virtual int m2C(char *, char *);
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void m3C(int);
};

static inline char *ent600(char *q, unsigned short i) { char *r; if (*(unsigned int *)(q + 4) < i + 1) { r = 0; } else if (((int *)(q + 8))[i] == 0) { r = 0; } else { r = q + ((int *)(q + 8))[i]; } return r; }

static inline char *chunk600(char *h, unsigned short i) { char *r; if (**(unsigned short **)(h + 8) == 0) { r = ent600(*(char **)(h + 0xC), i); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" int func_0047E8B0(char *p) {
    char *b;
    char *a;
    int i;
    unsigned short k;
    *(unsigned char *)(p + 0x3080) = 0;
    *(int *)(p + 0x3090) = 0;
    *(int *)(p + 0x3094) = 0;
    *(int *)(p + 0x3098) = 0;
    *(float *)(p + 0x309C) = 1.0f;
    *(int *)(p + 0x30A0) = 0;
    *(int *)(p + 0x30A4) = 0;
    *(int *)(p + 0x30A8) = 0;
    *(float *)(p + 0x30AC) = 1.0f;
    *(float *)(p + 0x30B0) = 1.0f;
    *(float *)(p + 0x30B4) = 1.0f;
    *(float *)(p + 0x30B8) = 1.0f;
    *(float *)(p + 0x30BC) = 1.0f;
    UNIT(p + 0x30C0);
    func_00131700(p + 0x30C0, p + 0x30C0, p + 0x30A0);
    func_00105230(p + 0x30C0, p + 0x30C0, p + 0x3090);
    func_001318E0(p + 0x30C0, p + 0x30C0, p + 0x30B0);
    for (i = 0; i < 7; i++) {
        k = i * 2 + 1;
        a = chunk600(*(char **)(p + 0x38), k);
        k = i * 2;
        b = chunk600(*(char **)(p + 0x38), k);
        ((Obj600 *)(p + i * 0x600 + 0x80))->m24(1);
        if ((unsigned char)((Obj600 *)(p + i * 0x600 + 0x80))->m2C(b, a) == 0) {
            return 0;
        }
        ((Obj600 *)(p + i * 0x600 + 0x80))->m3C(D_00581E60[i][0]);
    }
    for (i = 0; i < 5; i++) {
        if (*(unsigned short *)(p + 0x3106) & (1 << i)) {
            func_001A1E70(func_00279290(p + 0x1280), i);
        } else {
            func_001A2000(func_00279290(p + 0x1280), i);
        }
    }
    return 1;
}

extern "C" int func_001AFB90(char *, int, int, int);

class W2A80 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void m24(int);
    virtual void d28();
    virtual bool m2C(char *, char *);
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void m3C(int);
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
    virtual void m84(int, int);
    virtual void d88();
    virtual void m8C();
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
    virtual void dCC();
    virtual void mD0();
};

static inline int ok040(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *chunkB44(char *c) { if (*(unsigned int *)(c + 4) < 2) return 0; if (*(int *)(c + 0xC) == 0) return 0; return c + *(int *)(c + 0xC); }

static inline char *chunkA44(char *c) { if (*(int *)(c + 4) == 0) return 0; if (*(int *)(c + 8) == 0) return 0; return c + *(int *)(c + 8); }

static inline char *getB44(char *o) { if (**(unsigned short **)(o + 8) == 0) return chunkB44(*(char **)(o + 0xC)); return *(char **)(o + 0xC); }

static inline char *getA44(char *o) { if (**(unsigned short **)(o + 8) == 0) return chunkA44(*(char **)(o + 0xC)); return *(char **)(o + 0xC); }

extern "C" int D_00581E40[];

extern "C" int func_0047F480(char *p) {
    switch (*(signed char *)(p + 0x3116)) {
    case 0:
        if (*(unsigned char *)(p + 0x311A) == 0) break;
        if (*(signed char *)(p + 0x3117) == *(signed char *)(p + 0x3118)) {
            *(unsigned char *)(p + 0x311A) = 0;
            break;
        }
        if (*(unsigned char *)(p + 0x3119) == 1) {
            *(unsigned char *)(p + 0x311C) = 0x40;
            *(unsigned char *)(p + 0x3116) = 1;
        } else {
            *(unsigned char *)(p + 0x3116) = 3;
        }
        break;
    case 1:
        if (0 < *(unsigned char *)(p + 0x311C)) {
            ((W2A80 *)(p + 0x2A80))->m84(*(unsigned char *)(p + 0x311C), 1);
            *(unsigned char *)(p + 0x311C) = *(unsigned char *)(p + 0x311C) - 0x10;
        } else {
            ((W2A80 *)(p + 0x2A80))->m8C();
            *(unsigned char *)(p + 0x3119) = 0;
            *(signed char *)(p + 0x311B) = 2;
            *(unsigned char *)(p + 0x3116) = 2;
        }
        break;
    case 2:
        if (--*(signed char *)(p + 0x311B) == 0) {
            ((W2A80 *)(p + 0x2A80))->mD0();
            *(unsigned char *)(p + 0x3116) = 3;
        }
        break;
    case 3:
        if (*(unsigned char *)(p + 0x311A) == 0) break;
        *(signed char *)(p + 0x3118) = *(signed char *)(p + 0x3117);
        if (*(int *)(p + 0x3C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x3C));
            *(int *)(p + 0x3C) = 0;
        }
        *(int *)(p + 0x3C) = func_001AFB90(D_00666750, D_00581E40[*(signed char *)(p + 0x3118) - *(signed char *)(p + 0x310D)], 0, 8);
        if (*(int *)(p + 0x3C) == 0) return 0;
        *(unsigned char *)(p + 0x3116) = 4;
    case 4: {
        char *o;
        char *a;
        char *b;
        if ((unsigned char)ok040(*(unsigned char **)(p + 0x3C)) == 0) break;
        if (*(unsigned char *)(p + 0x311A) == 0) {
            *(unsigned char *)(p + 0x3116) = 3;
            break;
        }
        o = *(char **)(p + 0x3C);
        b = getB44(o);
        a = getA44(o);
        ((W2A80 *)(p + 0x2A80))->m24(1);
        if (((W2A80 *)(p + 0x2A80))->m2C(a, b) == 0) return 0;
        ((W2A80 *)(p + 0x2A80))->m3C(0);
        *(unsigned char *)(p + 0x311C) = 0;
        ((W2A80 *)(p + 0x2A80))->m84(*(unsigned char *)(p + 0x311C), 1);
        *(unsigned char *)(p + 0x3119) = 1;
        *(unsigned char *)(p + 0x3116) = 5;
    }
    case 5:
        if (*(unsigned char *)(p + 0x311C) < 0x40) {
            *(unsigned char *)(p + 0x311C) = *(unsigned char *)(p + 0x311C) + 0x10;
            ((W2A80 *)(p + 0x2A80))->m84(*(unsigned char *)(p + 0x311C), 1);
        }
        if (*(unsigned char *)(p + 0x311C) >= 0x40) {
            ((W2A80 *)(p + 0x2A80))->m8C();
            *(unsigned char *)(p + 0x311A) = 0;
            *(unsigned char *)(p + 0x3116) = 0;
        }
        break;
    }
    return 1;
}

extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_0047D800(char *);

extern "C" char *func_0047D9B0(int p0, int p1) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x3140, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0047D800(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x38) = p0;
        *(int *)(ret + 0x3100) = p1;
    }
    return ret;
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
int func_0047DD90(int p0) {
    char *v0;
    int v3;
    int v4;
    char *v1;
    int v2;
    v3 = 0;
    v0 = (char *)p0;
    v1 = v0;
    v2 = (int)(v0 + 12480);
    do {
        v4 = ((VCC_1_ii *)(v1 + 128))->m(v2);
        v3 = (v3 + 1);
        v1 = (v1 + 1536);
    } while ((v3 < 7));
    if (*(unsigned char *)(v0 + 12569) == 1) {
        v4 = ((VCC_1_ii *)(v0 + 10880))->m(v2);
    }
    return v4;
}
}
