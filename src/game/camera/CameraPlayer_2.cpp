extern "C" char *func_00279290(char *);

extern "C" char D_00666750[];

extern "C" char *func_002792A0(char *);

extern "C" int func_001AED80(char *, int, int, int);

extern "C" void func_0024D9F0(char *, int, int, int, char *, char *, char *, char *, char *);

extern "C" void func_001FEBA0(char *, int);

extern "C" void func_001FBC70(char *, char *, char *);

extern "C" void func_0024E820(char *, int);

struct V248 {
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void d28();
    virtual void d2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
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
    virtual void d84();
    virtual void d88();
    virtual void d8C();
    virtual void d90();
    virtual void d94();
    virtual void d98();
    virtual void d9C();
    virtual void dA0();
    virtual void dA4();
    virtual void dA8();
    virtual void dAC();
    virtual void mB0(char *, char *);
};

static inline void wsw248(char *p, int k, int i, char *w) {
    char *o = p + k * 0x600 + 0x180;
    ((V248 *)o)->mB0(w, p + (i * 0x60 + 0x1380));
    *(unsigned char *)(func_002792A0(o) + 0x104) = 0;
    *(char **)(*(char **)(p + i * 4 + 0x1384) + 0xFC) = p + (i * 0x60 + 0x25A0);
    *(unsigned char *)(p + (i * 0x60 + 0x25AC)) = 0;
    *(int *)(p + (i * 0x60 + 0x25C0)) = 0;
    *(int *)(p + (i * 0x60 + 0x25C4)) = 0;
    *(int *)(p + (i * 0x60 + 0x25C8)) = 0;
    *(int *)(p + (i * 0x60 + 0x25CC)) = 0;
    *(int *)(p + (i * 0x60 + 0x25D0)) = 0;
    *(int *)(p + (i * 0x60 + 0x25D4)) = 0;
    *(int *)(p + (i * 0x60 + 0x25D8)) = 0;
    *(int *)(p + (i * 0x60 + 0x25DC)) = 0;
    func_0024D9F0(p + (i * 0x1A0 + 0x41F0), func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 5), 1, 0, p + 0x243C,
                  p + (i * 0x600 + 0x184), p + (i * 0x60 + 0x1380), p + 0x2434, p + 0x47A0);
    func_0024D9F0(p + (i * 0x1A0 + 0x4120), func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 5), 0, 0, p + 0x243C,
                  p + (i * 0x600 + 0x184), p + (i * 0x60 + 0x1380), p + 0x2434, 0);
    func_001FEBA0(func_002792A0(p + (i * 0x600 + 0x180)), 0);
}

extern "C" void func_00248BB0(char *p, int k) {
    char *w = *(char **)(p + 0x243C);
    switch (k) {
    case 0:
        wsw248(p, k, 0, w);
        break;
    case 1:
        wsw248(p, k, 1, w);
        break;
    case 2:
        wsw248(p, k, 2, w);
        break;
    case 3:
        func_001FBC70(p + 0x2214, func_00279290(p + *(unsigned char *)(p + 0x28A0) * 0x600 + 0x180), p + 0x14A0);
        *(unsigned char *)(p + 0x2318) = 0;
        func_0024D9F0(p + 0x46D0, func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 5), 1, 0, p + 0x243C, p + 0x2214,
                      p + 0x14A0, p + 0x2434, 0);
        func_0024D9F0(p + 0x4600, func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 5), 0, 0, p + 0x243C, p + 0x2214,
                      p + 0x14A0, p + 0x2434, 0);
        func_0024E820(p + 0x46D0, 0);
        func_0024E820(p + 0x4600, 0);
        break;
    }
}
