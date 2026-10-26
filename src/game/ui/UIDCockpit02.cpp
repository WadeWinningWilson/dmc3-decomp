class W31C {
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
    virtual void mB0(char *, char *);
    virtual void d43();
    virtual void mB8(int, int, int, int, char *);
    virtual void d45();
    virtual void mC0(float, int);
    virtual void d47();
    virtual void mC8(char *);
};

extern "C" unsigned char func_0031D410(char *, signed char);

static inline char *ent31C(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }

static inline char *ent31Cv(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)((char *)(i * 4) + (int)t + 8) == 0) { r = 0; } else { r = t + *(int *)((char *)(i * 4) + (int)t + 8); } return r; }

static inline char *gch31C(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent31C(t, k); } else { r = *(char **)(h + 0xC); } return r; }

#define PAIR(i0, i1) \
    h = *(char **)(p + 0x6C); \
    if (**(unsigned short **)(h + 8) == 0) { \
        a = *(char **)(h + 0xC); \
        b = ent31C(a, i0); \
    } else { \
        a = *(char **)(h + 0xC); \
        b = a; \
    } \
    if (**(unsigned short **)(h + 8) == 0) a = ent31C(a, i1); \
    else a = *(char **)(h + 0xC);

#define PAIRV(g, k, u, fld, b0, fld2, b1)     g = *(char **)(p + 0x6C);     k = *(unsigned char *)(p + fld) * 2;     u = k + b0;     if (**(unsigned short **)(g + 8) == 0) {         a = *(char **)(g + 0xC);         b = ent31Cv(a, u);     } else {         a = *(char **)(g + 0xC);         b = a;     }     u = k + b1;     if (**(unsigned short **)(g + 8) == 0) a = ent31Cv(a, u);     else a = *(char **)(g + 0xC);

#define W(o) ((W31C *)(p + (o)))

extern "C" int func_0031CC10(char *p, signed char *q) {
    char *h;
    char *g1;
    char *g2;
    char *g3;
    char *g4;
    char *a;
    char *b;
    char *m;
    int k1;
    unsigned short u1;
    int k2;
    unsigned short u2;
    int k3;
    unsigned short u3;
    int k4;
    unsigned short u4;
    *(unsigned char *)(p + 0x1EAC) = 0;
    *(unsigned char *)(p + 0x1EAD) = 0;
    *(unsigned char *)(p + 0x1E98) = func_0031D410(p, q[2]);
    *(unsigned char *)(p + 0x1E99) = func_0031D410(p, q[3]);
    *(unsigned char *)(p + 0x1EA2) = func_0031D410(p, q[0]);
    *(unsigned char *)(p + 0x1EA3) = func_0031D410(p, q[1]);
    if (q[1] == -1) *(unsigned char *)(p + 0x1EA3) = func_0031D410(p, 1);
    if (q[3] == -1) *(unsigned char *)(p + 0x1E99) = func_0031D410(p, 6);
    PAIR(0, 3)
    if (!(unsigned char)W(0x80)->m2C(a, b)) return 0;
    m = gch31C(*(char **)(p + 0x6C), 0x11);
    W(0x80)->mB0(m, p + 0x1E80);
    W(0x80)->mB8(0, 7, 0, 0, m);
    W(0x80)->mB8(1, 7, 0, 0, m);
    W(0x80)->mC0(1.0f, 0);
    W(0x80)->mC0(1.0f, 1);
    W(0x80)->mC8(p + 0x1EC0);
    W(0x80)->m3C(1);
    PAIRV(g1, k1, u1, 0x1E98, 0x1E, 0x1E98, 0x1F)
    W(0x680)->m24(1);
    if (!(unsigned char)W(0x680)->m2C(a, b)) return 0;
    W(0x680)->m3C(1);
    PAIRV(g2, k2, u2, 0x1E99, 0x1E, 0x1E99, 0x1F)
    W(0xC80)->m24(1);
    if (!(unsigned char)W(0xC80)->m2C(a, b)) return 0;
    W(0xC80)->m3C(1);
    PAIRV(g3, k3, u3, 0x1EA2, 0x2A, 0x1EA2, 0x2B)
    W(0x1280)->m24(1);
    if (!(unsigned char)W(0x1280)->m2C(a, b)) return 0;
    W(0x1280)->m3C(1);
    PAIRV(g4, k4, u4, 0x1EA3, 0x2A, 0x1EA3, 0x2B)
    W(0x1880)->m24(1);
    if (!(unsigned char)W(0x1880)->m2C(a, b)) return 0;
    W(0x1880)->m3C(1);
    return 1;
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
int func_0031DB20(int p0) {
    int v5;
    int v4;
    int v3;
    int v2;
    char *v1;
    char *v0;
    v0 = (char *)p0;
    v1 = v0;
    v2 = 0;
    do {
        v4 = ((VD0_0_i *)(v1 + 128))->m();
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
int func_0031DBB0(int p0) {
    int tmp0;
    ((VCC_1_iv *)(p0 + 1664))->m((p0 + 7936));
    ((VCC_1_iv *)(p0 + 4736))->m((p0 + 7936));
    ((VCC_1_iv *)(p0 + 3200))->m((p0 + 7936));
    ((VCC_1_iv *)(p0 + 6272))->m((p0 + 7936));
    tmp0 = ((VCC_1_ii *)(p0 + 128))->m((p0 + 7872));
    return tmp0;
}
}
