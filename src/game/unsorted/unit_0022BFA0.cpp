extern "C" void func_00105300(char *, char *);

extern "C" char *func_002792A0(char *);

extern "C" void func_00104E78(float *, char *);

extern "C" void func_00104C00(char *, char *, char *);

extern "C" void func_00131650(char *, char *);

class Ls2B4 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual int mB4();
};

static inline char *list_item2(char *o, int i) {
    char *r;
    if (*(unsigned char *)(o + 0xAC) != 0 && 0 <= i && i < *(int *)(o + 0x10)) {
        r = *(char **)(*(char **)(o + 0x14) + i * 4);
    } else {
        r = 0;
    }
    return r;
}

extern "C" void func_0022C520(int key, char *o, char *m1, char *m2) {
    float d[16] __attribute__((aligned(16)));
    float c[16] __attribute__((aligned(16)));
    float b[16] __attribute__((aligned(16)));
    float a[16] __attribute__((aligned(16)));
    int i;
    func_00105300((char *)a, m1);
    func_00105300((char *)b, m2);
    func_00131650((char *)a, (char *)a);
    func_00131650((char *)(a + 4), (char *)(a + 4));
    func_00131650((char *)(a + 8), (char *)(a + 8));
    func_00131650((char *)b, (char *)b);
    func_00131650((char *)(b + 4), (char *)(b + 4));
    func_00131650((char *)(b + 8), (char *)(b + 8));
    func_00104E78(c, (char *)b);
    func_00104C00((char *)d, (char *)a, (char *)c);
    for (i = 0; i < ((Ls2B4 *)func_002792A0(o))->mB4(); i++) {
        char *e = list_item2(func_002792A0(o), i);
        if (*(int *)(e + 0xFC) == key) {
            func_00104C00(e + 0xA0, (char *)d, e + 0xA0);
        }
    }
}

class Ls2C8 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void mC8(char *);
};

extern "C" void func_0022C6A0(char *s, char *o, char *m, char *out, int n) {
    int i;
    *(unsigned char *)(s + 0xC) = 0;
    ((Ls2C8 *)o)->mC8(m);
    for (i = 0; i < ((Ls2B4 *)func_002792A0(o))->mB4(); i++) {
        char *e = list_item2(func_002792A0(o), i);
        *(int *)(e + 0x1D0) = 0;
        *(int *)(e + 0x1D4) = 0;
        *(int *)(e + 0x1D8) = 0;
        func_00105300(e + 0xA0, *(char **)(e + 0x104));
    }
    *(unsigned char *)(s + 0xC) = 1;
    for (i = 0; i < n; i++) {
        ((Ls2C8 *)o)->mC8(m);
    }
    if (out) {
        func_00105300(out, m);
    }
}
