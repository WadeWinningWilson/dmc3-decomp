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

extern "C" void func_00202860(char *p) {
    ((SubCCc *)(p + 0x40))->mCC(p + 0x4C0);
}

extern "C" unsigned char func_002013D0(char *, int, float *, float *, int, int);

extern "C" bool func_0022A240(int, int, float *, float *, int, int, int, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" bool func_002018A0(char *p, int a, float *b, float *c, int d, int e) {
    float v[4] __attribute__((aligned(16)));
    bool r = false;
    if (func_002013D0(p, a, b, c, d, e) == 1) {
        QCOPY(v, c);
        r = true;
    } else {
        QCOPY(v, b);
    }
    r = r | func_0022A240(*(int *)(p + 0x10), a, v, c, d, 0xE, e, 0);
    r = r | func_0022A240(*(int *)(p + 0x10), a, v, c, d, 0x11, e, 0);
    if (!r) {
        QCOPY(c, b);
    }
    return r;
}

extern "C" unsigned char func_00200FF0(char *, float *, float *, int, int);

extern "C" bool func_00201770(char *p, float *a, float *b, int d, int e) {
    float v[4] __attribute__((aligned(16)));
    bool r = false;
    if (func_00200FF0(p, a, b, d, e) == 1) {
        QCOPY(v, b);
        r = true;
    } else {
        QCOPY(v, a);
        v[1] = v[1] - 1500.0f;
    }
    r = r | func_0022A240(*(int *)(p + 0x10), (int)a, v, b, d, 0xE, e, 1);
    r = r | func_0022A240(*(int *)(p + 0x10), (int)a, v, b, d, 0x11, e, 1);
    if (!r) {
        QCOPY(b, a);
    }
    return r;
}

extern "C" void func_001973C0(char *, int, int);

extern "C" void func_00197630(char *);

extern "C" void func_001A5BA0(char *, int);

extern "C" void func_001A6FD0(char *, char *);

extern "C" void func_001F8CD0(char *, char *);

class O202 {
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
    virtual void u2C();
    virtual void m30(char *, char *, char *);
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void m50();
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
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void mD4(int);
};

static inline char *ent202(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch202(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent202(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_002025A0(char *p, char *h) {
    char *x;
    char *y;
    func_001973C0(p + 0x480, 0x18, 0x20);
    x = gch202(h, 2);
    y = gch202(h, 1);
    ((O202 *)(p + 0x40))->m30(x, y, p + 0x480);
    func_00197630(p + 0x480);
    *(unsigned char *)(p + 0x4B0) = 1;
    func_001A5BA0(((O202 *)(p + 0x40))->mC(), 0);
    func_001A6FD0(((O202 *)(p + 0x40))->mC(), p + 0x4C0);
    ((O202 *)(p + 0x40))->mD4(1);
    ((O202 *)(p + 0x40))->m50();
    *(char **)(p + 0x55C) = gch202(h, 3);
    func_001F8CD0(p + 0x500, *(char **)(p + 0x55C));
    *(char **)(p + 0x560) = gch202(h, 6);
    if (*(char **)(p + 0x560) != 0) {
        func_001F8CD0(p + 0x524, *(char **)(p + 0x560));
    }
}

extern "C" char D_005BE0C8[4];

extern "C" void func_00128488(char *, int, int);

extern "C" int *func_001F95B0(char *);

extern "C" int func_001F8DE0(char *, char *);

extern "C" int *func_001F95C0(char *, int);

extern "C" unsigned char *func_001F9610(char *, int);

extern "C" void func_002022F0(char *, char *, unsigned char *);

extern "C" int func_001BF4F0(char *, char *, char *);

static inline unsigned char tas1FF(unsigned int *v, unsigned int k) {
    unsigned int b;
    unsigned int *w;
    unsigned char r;
    w = &v[k >> 5];
    b = 1 << (k & 0x1F);
    r = !((b & *w) != 0);
    *w |= b;
    return r;
}

static inline unsigned char hasf1FF(unsigned char *t, unsigned short m) {
    unsigned short x = (t[3] << 8) | t[2];
    unsigned short *px = &x;
    return (*px & m) != 0;
}

extern "C" int func_001FFF40(char *p, char *b, int mask) {
    char buf[0x40];
    unsigned int vis[200];
    int i;
    int *ids;
    int n;
    int *lst;
    unsigned char *t;
    func_00128488((char *)vis, 0, 0x320);
    lst = func_001F95B0(((char **)(p + 8))[*(int *)p]);
    n = func_001F8DE0(((char **)(p + 8))[*(int *)p], b);
    for (i = 0; i < n; i++, lst++) {
        for (ids = func_001F95C0(*(char **)(p + *(int *)p * 4 + 8), *lst); *ids != -1; ids++) {
            if (tas1FF(vis, (unsigned int)*ids / 56) == 1) {
                t = func_001F9610(*(char **)(p + *(int *)p * 4 + 8), *ids);
                if (mask == 0 || (mask != 0 && !hasf1FF(t, mask))) {
                    func_002022F0(p, buf, t);
                    if ((unsigned char)func_001BF4F0(D_005BE0C8, b, buf) == 1) return 1;
                }
            }
        }
    }
    return 0;
}

extern "C" int func_001F8FA0(char *, char *);

extern "C" int func_001BF9F0(char *, char *, char *, float *);

static inline unsigned char tstFAC(unsigned int *v, unsigned int b, unsigned int i) {
    if ((1 << b) & v[i]) return 0;
    return 1;
}

static inline unsigned char tasFAC(unsigned int *v, unsigned int k) {
    unsigned char r;
    unsigned int b = k & 0x1F;
    unsigned int i = k >> 5;
    r = tstFAC(v, b, i);
    v[i] |= 1 << b;
    return r;
}

static inline unsigned char hasFAC(unsigned char *t, unsigned short m) {
    unsigned short x = (t[3] << 8) | t[2];
    if (x & m) return 1;
    return 0;
}

extern "C" unsigned char func_001FFAC0(char *p, char *b, int mask) {
    float v[4] __attribute__((aligned(16)));
    unsigned int vis[200];
    char buf[0x40];
    unsigned char found;
    int i;
    int n;
    int *ids;
    int *lst;
    unsigned char *t;
    found = 0;
    lst = func_001F95B0(((char **)(p + 8))[*(int *)p]);
    n = func_001F8FA0(((char **)(p + 8))[*(int *)p], b);
    func_00128488((char *)vis, 0, 0x320);
    for (i = 0; i < n; i++) {
        for (ids = func_001F95C0(((char **)(p + 8))[*(int *)p], lst[i]); *ids != -1; ids++) {
            t = func_001F9610(((char **)(p + 8))[*(int *)p], *ids);
            if (mask == 0 || (mask != 0 && hasFAC(t, mask) == 0)) {
                if (tasFAC(vis, (unsigned int)*ids / 56) == 1) {
                    func_002022F0(p, buf, t);
                    if ((unsigned char)func_001BF9F0(D_005BE0C8, b, buf, v) == 1) {
                        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b), "r"(v) : "memory");
                        found = 1;
                    }
                }
            }
        }
    }
    return found;
}

extern "C" float func_001324E0(float *);

extern "C" void func_001323A0(float *);

extern "C" float func_001C1B00(float, char *, float *, char *);

extern "C" unsigned char func_00202010(char *p, char *a, char *b) {
    float d[4] __attribute__((aligned(16)));
    float e[4] __attribute__((aligned(16)));
    unsigned int vis[200];
    float seg[8] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    char buf[0x30];
    float f;
    int n;
    int *ids;
    int i;
    int *lst;
    unsigned char *t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(b), "r"(a) : "memory");
    f = func_001324E0(d);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(e), "r"(d) : "memory");
    func_001323A0(e);
    if (!(f <= 0.001f)) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(seg), "r"(a) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(seg + 4), "r"(b) : "memory");
        lst = func_001F95B0(((char **)(p + 8))[*(int *)p]);
        n = func_001F8FA0(((char **)(p + 8))[*(int *)p], (char *)seg);
        func_00128488((char *)vis, 0, 0x320);
        for (i = 0; i < n; i++) {
            for (ids = func_001F95C0(((char **)(p + 8))[*(int *)p], lst[i]); *ids != -1; ids++) {
                if (tasFAC(vis, (unsigned int)*ids / 56) == 1) {
                    t = func_001F9610(((char **)(p + 8))[*(int *)p], *ids);
                    if (hasFAC(t, 8) == 0) {
                        func_002022F0(p, buf, t);
                        if (!(func_001C1B00(*(float *)(t + 0x34), D_005BE0C8, r, b) < 0.0f)) {
                            if ((unsigned char)func_001BF9F0(D_005BE0C8, (char *)seg, buf, v) == 1)
                                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(seg), "r"(v) : "memory");
                        }
                    }
                }
            }
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(a), "r"(seg) : "memory");
        return 1;
    }
    return 0;
}

extern "C" int func_001FF180(float *, unsigned char *, float *);

typedef struct { float f[8]; } S1FF;

extern "C" unsigned char func_001FF7B0(char *p, float *s, int mask) {
    float out[4] __attribute__((aligned(16)));
    float c[8] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    unsigned int vis[200];
    int n;
    int i;
    int *ids;
    unsigned char found;
    int *lst;
    unsigned char *t;
    found = 0;
    func_00128488((char *)vis, 0, 0x320);
    *(S1FF *)c = *(S1FF *)s;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s + 4), "r"(s) : "memory");
    if (!(func_001324E0(d) <= 0.001f))
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(s + 4), "r"(s + 4), "r"(d) : "memory");
    lst = func_001F95B0(((char **)(p + 8))[*(int *)p]);
    n = func_001F8FA0(((char **)(p + 8))[*(int *)p], (char *)s);
    for (i = 0; i < n; i++) {
        for (ids = func_001F95C0(((char **)(p + 8))[*(int *)p], lst[i]); *ids != -1; ids++) {
            if (tasFAC(vis, (unsigned int)*ids / 56) == 1) {
                t = func_001F9610(((char **)(p + 8))[*(int *)p], *ids);
                if (mask == 0 || (mask != 0 && hasFAC(t, mask) == 0)) {
                    if ((unsigned char)func_001FF180(s, t, out) == 1) {
                        found = 1;
                        s[0] += out[0];
                        s[1] += out[1];
                        s[2] += out[2];
                    }
                }
            }
        }
    }
    s[4] = c[4];
    s[5] = c[5];
    s[6] = c[6];
    return found;
}

extern "C" int func_001FF2C0(char *, unsigned char *, float *);

extern "C" float func_00132470(float *, float *);

static inline unsigned char moved1FF(float *a, float *b) {
    if (!(func_00132470(a, b) <= 0.001f)) return 1;
    return 0;
}

static inline unsigned char tstD10(unsigned int *v, unsigned int b, unsigned int i) {
    if ((1 << b) & v[i]) return 0;
    return 1;
}

static inline unsigned char tasD10(unsigned int *v, unsigned int k) {
    unsigned char r;
    unsigned int b = k & 0x1F;
    unsigned int i = k >> 5;
    r = tstD10(v, b, i);
    v[i] |= 1 << b;
    return r;
}

extern "C" unsigned char func_001FFD10(char *p, float *b) {
    float d[4] __attribute__((aligned(16)));
    float save[4] __attribute__((aligned(16)));
    unsigned int vis[200];
    int i;
    int n;
    int *ids;
    int *lst;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(save), "r"(b) : "memory");
    func_00128488((char *)vis, 0, 0x320);
    lst = func_001F95B0(((char **)(p + 8))[*(int *)p]);
    n = func_001F8DE0(((char **)(p + 8))[*(int *)p], (char *)b);
    for (i = 0; i < n; i++) {
        for (ids = func_001F95C0(((char **)(p + 8))[*(int *)p], lst[i]); *ids != -1; ids++) {
            if (tasD10(vis, (unsigned int)*ids / 56) == 1) {
                if ((unsigned char)func_001FF2C0((char *)b, func_001F9610(((char **)(p + 8))[*(int *)p], *ids), d) == 1) {
                    b[0] = b[0] + d[0];
                    b[1] = b[1] + d[1];
                    b[2] = b[2] + d[2];
                }
            }
        }
    }
    return moved1FF(save, b);
}

extern "C" {
void func_001975A0(int);
}

extern "C" {
int func_001F8D70(char *);
}

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
int func_002027F0(int p0) {
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    ((VD0_0_v *)(v0 + 64))->m();
    v1 = (int)(v0 + 1152);
    if (*(unsigned char *)(v0 + 1200) != 0) {
        func_001975A0(v1);
    }
    func_001F8D70((v0 + 1280));
    *(int *)(v0 + 1372) = 0;
    tmp0 = func_001F8D70((v0 + 1316));
    *(int *)(v0 + 1376) = 0;
    return tmp0;
}
}
