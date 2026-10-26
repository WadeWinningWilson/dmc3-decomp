extern "C" char D_01CAFF0C[];

extern "C" void func_0021CBE0(float, char *, int);

class V120 {
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
    virtual void m120(float *);
};

static inline void setTotal(int v) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0) *(int *)(g + 0x1C) = v;
}

static inline void setItem(signed char i, int v) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0) {
        if (i == 0) {
            *(int *)(g + 0x1C) = v;
        } else {
            *(unsigned char *)(g + i + 0x20) = v;
        }
    }
}

static inline void setOpt(signed char i, int v) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0) *(unsigned char *)(g + i + 0x5B) = v;
}

extern "C" void func_00406A50(char *p) {
    float f;
    int i;
    char *o;
    setTotal(*(int *)(p + 4));
    for (i = 1; i < 0x3B; i++) setItem(i, *(unsigned char *)(p + i + 8));
    for (i = 0; i < 8; i++) setOpt(i, *(unsigned char *)(p + i + 0x43));
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    ((V120 *)o)->m120(&f);
    float lim = *(float *)(p + 0x84);
    if (f < lim) {
        f = lim - f;
        *(float *)(o + 0x2AD4) = *(float *)(o + 0x2AD4) + f;
        if (!(*(float *)(o + 0x2AD4) <= *(float *)(o + 0x2AA8))) *(float *)(o + 0x2AD4) = *(float *)(o + 0x2AA8);
    }
    if (*(float *)(o + 0x28C4) < *(float *)(p + 0x8C)) func_0021CBE0(*(float *)(p + 0x8C) - *(float *)(o + 0x28C4), o, 1);
}

/* Hand-matched C++ functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose prototypes/classes conflict with vcalls-vcalls7. */
extern "C" char D_01CAFF0C[];

class V64 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64(); virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124(); virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140();
    virtual void g144(char *);
};

extern "C" void func_00253BC0(char *, char *);

extern "C" char *D_01CAFF10[];

typedef struct { float v[4]; } V4_64;

typedef struct { float v[2]; } V2_64;

typedef struct { signed char c[5]; } B5_64;

typedef struct { signed char c[15]; } B15_64;

typedef struct { signed char c[6]; } B6_64;

typedef struct {
    B5_64 n;
    B15_64 m;
    signed char a, b;
    unsigned char c, d;
    float e, f;
    signed char g;
    B6_64 h;
    V4_64 i;
    V2_64 j;
    V4_64 k;
    V4_64 l;
} S64;

static inline int gi64(char *x, signed char i) {
    if (i == 0) return *(int *)(x + 0x1C);
    return *(unsigned char *)(x + i + 0x20);
}

static inline int g64(int i) {
    char *x = *(char **)(*(char **)D_01CAFF0C + 4);
    if (x) return gi64(x, i);
    return 0;
}

static inline unsigned char h64(int i) {
    char *x = *(char **)(*(char **)D_01CAFF0C + 4);
    if (x) return *(unsigned char *)(x + (signed char)i + 0x5B);
    return 0;
}

extern "C" void func_004064E0(char *p) {
    char *s = D_01CAFF10[0];
    int i;
    func_00253BC0(s + 0x9C, s + 0xFC);
    ((S64 *)(p + 0xA0))->n = ((S64 *)(s + 0x9C))->n;
    ((S64 *)(p + 0xA0))->m = ((S64 *)(s + 0x9C))->m;
    ((S64 *)(p + 0xA0))->a = ((S64 *)(s + 0x9C))->a;
    ((S64 *)(p + 0xA0))->b = ((S64 *)(s + 0x9C))->b;
    ((S64 *)(p + 0xA0))->c = ((S64 *)(s + 0x9C))->c;
    ((S64 *)(p + 0xA0))->d = ((S64 *)(s + 0x9C))->d;
    ((S64 *)(p + 0xA0))->e = ((S64 *)(s + 0x9C))->e;
    ((S64 *)(p + 0xA0))->f = ((S64 *)(s + 0x9C))->f;
    ((S64 *)(p + 0xA0))->g = ((S64 *)(s + 0x9C))->g;
    ((S64 *)(p + 0xA0))->h = ((S64 *)(s + 0x9C))->h;
    ((S64 *)(p + 0xA0))->i = ((S64 *)(s + 0x9C))->i;
    ((S64 *)(p + 0xA0))->j = ((S64 *)(s + 0x9C))->j;
    ((S64 *)(p + 0xA0))->k = ((S64 *)(s + 0x9C))->k;
    ((S64 *)(p + 0xA0))->l = ((S64 *)(s + 0x9C))->l;
    *(int *)(p + 0x100) = *(int *)(s + 0x14);
    (*(V64 **)(*(char **)D_01CAFF0C + 0xC))->g144(p + 0x4C);
    func_00253BC0(p + 0xA0, p + 0x4C);
    *(int *)(p + 4) = g64(0);
    for (i = 1; i < 0x3B; i++) p[i + 8] = g64(i);
    for (i = 0; i < 8; i++) p[i + 0x43] = h64(i);
}
