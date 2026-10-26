extern "C" char *func_00279290(char *);

extern "C" void func_0013C850(char *, unsigned char, int, int);

extern "C" char *func_00230580(char *, char *, char *);

extern "C" char *func_0027A710(char *);

extern "C" void func_001A1630(char *, int);

extern "C" char *func_00210240(char *);

extern "C" char *func_00215A30(char *, int, int);

extern "C" int func_00210740(char *);

struct V211 {
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
    virtual void m9C(int, int);
    virtual void mA0(int, int);
};

extern "C" int func_002118F0(char *p) {
    char *o;
    int i;
    int n;
    if (*(char **)(p + 0x24) != 0 && *(char **)(p + 0x28) != 0 && *(unsigned char *)(p + 0x20E) == 0) {
        for (i = 0; i < *(int *)(p + 0x6F0); i++) {
            func_0013C850(*(char **)(p + 0x28), *(unsigned char *)(p + i + 0x704), *(int *)(p + i * 4 + 0x70C), *(signed char *)(p + i + 0x6FC));
        }
        o = *(char **)(p + 0x18) = func_00230580(p, *(char **)(p + 0x24), *(char **)(p + 0x28));
        *(int *)(o + 0x38A0) = *(short *)(p + 0x20A);
        *(float *)(o + 0x38A4) = *(float *)(p + 0x624);
        *(unsigned char *)(p + 0x20E) = 1;
    } else {
        o = *(char **)(p + 0x18);
        *(int *)(o + 0x38A0) = *(short *)(p + 0x20A);
        *(float *)(o + 0x38A4) = *(float *)(p + 0x624);
    }
    if (*(short *)(p + 0x676) > 0) {
        o = *(char **)(p + 0x18);
        if (*(short *)(p + 0x676) == 9999) {
            for (i = 0; i < *(unsigned short *)(func_00279290(o + 0x40) + 0xA8) && i < 16; i++) {
                func_001A1630(func_00279290(o + 0x40), i);
            }
        } else {
            for (i = 0; i < *(short *)(p + 0x676); i++) {
                func_001A1630(func_00279290(o + 0x40), *(short *)(p + i * 2 + 0x678));
            }
        }
    }
    *(int *)(o + 0xF10) = *(short *)(p + 0x96);
    *(int *)(o + 0xF14) = *(short *)(p + 0x98);
    *(int *)(o + 0xF18) = *(short *)(p + 0x9A);
    *(int *)(o + 0xF1C) = 1;
    *(unsigned char *)(o + 0x3F98) = 0;
    *(float *)(o + 0xF20) = *(float *)(p + 0x50);
    *(float *)(o + 0xF24) = *(float *)(p + 0x54);
    *(float *)(o + 0xF28) = *(float *)(p + 0x58);
    *(float *)(o + 0xF2C) = 1.0f;
    *(float *)(o + 0xF30) = *(float *)(p + 0x60);
    *(float *)(o + 0xF34) = *(float *)(p + 0x64);
    *(float *)(o + 0xF38) = *(float *)(p + 0x68);
    *(float *)(o + 0xF3C) = 0.0f;
    *(short *)(p + 0x6DE) = 0;
    switch (*(signed char *)(p + 0x44)) {
    case 0:
    case 1:
        n = *(short *)(func_00279290(o + 0x40) + 0xAC);
        for (i = 0; i < n; i++) {
            ((V211 *)(o + 0x40))->m9C(i, 0);
            ((V211 *)(o + 0x40))->mA0(i, 0);
        }
        break;
    case 2:
        n = *(short *)(func_0027A710(o + 0x640) + 0xAC);
        for (i = 0; i < n; i++) {
            ((V211 *)(o + 0x640))->m9C(i, 0);
            ((V211 *)(o + 0x640))->mA0(i, 0);
        }
        break;
    }
    if (func_00210740(func_00215A30(func_00210240(p), 3, *(short *)(*(char **)(p + 0x14) + 8))) == 0) {
        *(unsigned char *)(p + 0x6EE) = 0;
    } else {
        *(unsigned char *)(p + 0x6EE) = 1;
    }
    *(unsigned char *)(p + 0x6ED) = 0;
    return 1;
}
