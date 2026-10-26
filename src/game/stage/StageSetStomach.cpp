extern "C" char D_01CAFF0C[];

extern "C" void func_0044CF70(char *, unsigned char, int);

extern "C" void func_0044D1A0(char *);

extern "C" void func_0044D210(char *);

extern "C" char *func_002F7C10(int, int);

class Obj2C {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void m2C(int, int);
};

extern "C" void func_0044CD30(char *p) {
    int i;
    int n;
    int w;
    int k;
    char *o;
    for (i = 0; i < 5; i++) {
        if (*(unsigned char *)(p + i + 0xE0) == 0) {
            o = *(char **)(p + i * 4 + 0x33C);
            w = 0;
            if (o != 0) {
                w = *(int *)(o + 8);
            }
            if (w & 1) {
                func_0044CF70(p, i, 0);
            }
        }
    }
    func_0044D1A0(p);
    func_0044D210(p);
    n = 0;
    for (i = 0; i < 5; i++) {
        if (*(unsigned char *)(p + i + 0xEF) == 1) {
            n++;
        }
    }
    if (n == 5) {
        Obj2C *e;
        *(unsigned char *)(p + 0xDF) = 1;
        e = (Obj2C *)func_002F7C10(0x65, 0);
        if (e != 0) {
            e->m2C(1, 0);
        }
        k = *(short *)(p + 0xDC);
        if (k != -1) {
            char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
            if (k < 32) {
                ((int *)(g + 0x18))[k / 32] |= 1 << (k & 31);
            } else {
                k -= 32;
                ((int *)(g + 0x44))[k / 32] |= 1 << (k & 31);
            }
        }
    }
}

extern "C" void func_00105300(char *, char *);

extern "C" void func_0044D560(char *);

class O44B {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20();
    virtual char *g24(int);
    virtual void d28();
    virtual void g2C(int, int);
};

static inline int ft44C(int k) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    unsigned int *w;
    unsigned int m;
    if (k < 32) {
        w = (unsigned int *)((char *)(k / 32 * 4) + (int)g + 0x18);
        m = 1 << (k & 31);
        return (*w & m) != 0;
    } else {
        int t = k - 32;
        w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
        m = 1 << (t & 31);
        return (*w & m) != 0;
    }
}

extern "C" void func_0044CB20(char *p) {
    int i;
    O44B *o;
    O44B *q;
    int k;
    *(unsigned char *)(p + 0xDF) = 0;
    *(unsigned char *)(p + 0x45) = 6;
    func_0044D560(p);
    o = (O44B *)func_002F7C10(0x5A, 0);
    if (o == 0) return;
    for (i = 0; i < 5; i++) {
        func_00105300(p + i * 0x40 + 0x110, o->g24(i + 1));
    }
    k = *(short *)(p + 0xDC);
    if (k != -1 && ft44C(k)) {
        for (i = 0; i < 5; i++) {
            func_0044CF70(p, i, 1);
            q = (O44B *)func_002F7C10(0x65, 0);
            if (q != 0) q->g2C(1, 1);
            *(unsigned char *)(p + 0xDF) = 1;
        }
    }
}
