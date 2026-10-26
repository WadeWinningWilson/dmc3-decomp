class W490 {
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
    virtual void m84(unsigned char, int);
    virtual void d32();
    virtual void m8C();
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

extern "C" char D_00666750[];

extern "C" int D_005867E0[];

extern "C" void func_001AF080(char *, int);

extern "C" int func_001AFB90(char *, int, int, int);

static inline int ok490(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *en490(char *t, int i) {
    char *r;
    if (*(unsigned int *)(t + 4) < i + 1) {
        r = 0;
    } else if (*(int *)(t + i * 4 + 8) == 0) {
        r = 0;
    } else {
        r = t + *(int *)(t + i * 4 + 8);
    }
    return r;
}

static inline char *gc490(char *h, int i) {
    char *r;
    if (**(unsigned short **)(h + 8) == 0) {
        r = en490(*(char **)(h + 0xC), i);
    } else {
        r = *(char **)(h + 0xC);
    }
    return r;
}

#define WP490 ((W490 *)(p + *(int *)(d + 4) * 0x600 + 0x3680))

extern "C" int func_004908E0(char *p, char *d) {
    char *h;
    char *a;
    char *b;
    int k;
    switch (*(int *)d) {
    case 0:
        if (*(unsigned char *)(d + 0xA) == 0) break;
        if (*(signed char *)(p + 0x431C) == *(signed char *)(d + 8)) {
            *(unsigned char *)(d + 0xA) = 0;
            break;
        }
        *(signed char *)(d + 8) = *(signed char *)(p + 0x431C);
        if (*(unsigned char *)(d + 9) == 1) *(int *)d = 1;
        else *(int *)d = 6;
        break;
    case 1:
        if (*(unsigned char *)(p + 0x431B) != 3) break;
        *(unsigned char *)(d + 0xB) = 0x40;
        WP490->m84(*(unsigned char *)(d + 0xB), 1);
        *(int *)d = 2;
        break;
    case 2:
        *(unsigned char *)(d + 0xB) -= 2;
        if (0 < *(unsigned char *)(d + 0xB)) {
            WP490->m84(*(unsigned char *)(d + 0xB), 1);
        } else {
            WP490->m8C();
            *(unsigned char *)(d + 9) = 0;
            *(int *)d = 5;
        }
        break;
    case 3:
    case 4:
        (*(int *)d)++;
        break;
    case 5:
        if (*(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) != 0) {
            func_001AF080(D_00666750, *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C));
            *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) = 0;
        }
        WP490->mD0();
        *(unsigned char *)(d + 0xA) = 0;
        *(int *)d = 0;
        break;
    case 6:
        if (*(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) != 0) {
            func_001AF080(D_00666750, *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C));
            *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) = 0;
        }
        *(int *)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C) = func_001AFB90(D_00666750, D_005867E0[*(signed char *)(d + 8)], 0, 8);
        *(int *)d = 7;
    case 7:
        if ((unsigned char)ok490(*(unsigned char **)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C)) != 1) break;
        h = *(char **)((char *)(*(int *)(d + 4) * 4) + (int)p + 0x3C);
        a = gc490(h, 1);
        b = gc490(h, 0);
        WP490->m24(1);
        if (!(unsigned char)WP490->m2C(b, a)) return 0;
        WP490->m3C(3);
        *(unsigned char *)(d + 9) = 1;
        if (*(unsigned char *)(p + 0x431B) == 0) {
            *(int *)d = 9;
            break;
        }
        *(unsigned char *)(p + 0x431B) = 3;
        *(unsigned char *)(d + 0xB) = 0;
        WP490->m84(*(unsigned char *)(d + 0xB), 1);
        *(int *)d = 8;
        break;
    case 8:
        *(unsigned char *)(d + 0xB) += 2;
        if (*(unsigned char *)(d + 0xB) < 0x40) {
            WP490->m84(*(unsigned char *)(d + 0xB), 1);
        } else {
            WP490->m8C();
            *(int *)d = 9;
        }
        break;
    case 9:
        *(unsigned char *)(d + 0xA) = 0;
        *(unsigned char *)(p + 0x431B) = 1;
        *(int *)d = 0;
        break;
    }
    return 1;
}
