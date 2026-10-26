extern "C" char *func_00279290(char *);

extern "C" void func_001A2D00(char *, int);

extern "C" void func_004FB870(char *, int);

extern "C" int func_004FB8D0(char *);

extern "C" void func_004FB8E0(char *, int, int, int);

extern "C" void func_004FBA90(char *, int, int);

class V4FB {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20();
    virtual float g24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50();
    virtual int g54();
};

class W4FB {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8();
    virtual void gBC(float);
};

extern "C" V4FB *func_002792A0(char *);

extern "C" void func_004FB4A0(char *p) {
    int k;
    int f;
    k = func_002792A0(p + 0x100)->g54();
    f = func_002792A0(p + 0x100)->g24();
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(signed char *)*(char **)(p + 0xDB0) > 1) func_001A2D00(func_00279290(p + 0x700), 0x80000096);
        func_004FB870(p, *(signed char *)(*(char **)(p + 0xDB0) + 5));
        *(unsigned char *)(p + 0xDB4) = 0;
        *(int *)(p + 0xDC0) = 0;
        (*(unsigned char *)(p + 5))++;
    case 1:
        if (*(int *)(p + 0xDC0) < 0x10) (*(int *)(p + 0xDC0))++;
        if (*(signed char *)(*(char **)(p + 0xDB0) + 2) < f) {
            *(unsigned char *)(p + 0xDB4) = 1;
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (0 < *(int *)(p + 0xDC0)) (*(int *)(p + 0xDC0))--;
        if (*(signed char *)(*(char **)(p + 0xDB0) + 3) < f || (unsigned char)k == 4 || (unsigned char)k == 0) {
            *(unsigned char *)(p + 0xDB4) = 2;
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (0 < *(int *)(p + 0xDC0)) (*(int *)(p + 0xDC0))--;
        if (*(int *)(p + 0xDC0) <= 0 && !(unsigned char)func_004FB8D0(p)) {
            *(unsigned char *)(p + 0xDB4) = 3;
            *(unsigned char *)(p + 4) = 4;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
    ((W4FB *)(p + 0x100))->gBC(*(float *)(p + 0x10));
    if (*(signed char *)*(char **)(p + 0xDB0) > 1) ((W4FB *)(p + 0x700))->gBC(*(float *)(p + 0x10));
    k = func_002792A0(p + 0x100)->g54();
    func_004FB8E0(p, *(signed char *)(*(char **)(p + 0xDB0) + 5), func_002792A0(p + 0x100)->g24(), k);
    func_004FBA90(p, *(signed char *)(*(char **)(p + 0xDB0) + 4), *(int *)(p + 0xDC0));
}
