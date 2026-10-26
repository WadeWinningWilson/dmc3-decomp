extern "C" void func_001AD140(char *);

extern "C" char D_01DFABA0[];

class Snd29C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void m1C(unsigned int, int, int);
    virtual void m20(unsigned int, int, int);
    virtual void m24(int, int);
    virtual void m28(int, int, int);
    virtual int m2C();
};

extern "C" Snd29C *D_005BC1A8;

extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_0013E020(char *, int, int);

extern "C" char D_006011CC[];

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" char *func_0034D6F0(char *, char *);

extern "C" void func_0034E200(char *, char *, int);

extern "C" int func_0034E420(char *);

extern "C" int func_0034E090(char *);

extern "C" void func_0020A3A0(char *, int, int);

extern "C" void func_0020A270(char *);

extern "C" void func_0020A320(char *);

extern "C" void func_00402850(char *, int, int);

static inline int ok2DD(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" void func_002DD470(char *p) {
    switch (*(unsigned int *)(p + 0x18)) {
    case 0:
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
    case 1:
        if ((unsigned char)ok2DD(*(unsigned char **)(p + 0x4C)) == 0) break;
        if ((unsigned char)ok2DD(*(unsigned char **)(p + 0x50)) == 0) break;
        D_005BC1A8->m28(0, 1, 0xFFFFF1);
        if ((*(char **)(p + 0x60) = func_0034D6F0(*(char **)(p + 0x4C), *(char **)(p + 0x50))) == 0) break;
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
    case 2:
        if ((unsigned char)ok2DD(*(unsigned char **)(p + 0x54)) == 0) break;
        if (*(signed char *)(p + 0x1C) != -1) {
            func_0034E200(*(char **)(p + 0x60), *(char **)(p + 0x54), 0);
        } else {
            func_0034E200(*(char **)(p + 0x60), *(char **)(p + 0x54), 1);
        }
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
    case 3:
        if ((unsigned char)func_0034E420(*(char **)(p + 0x60)) != 1) break;
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
    case 4:
        switch (func_0034E090(*(char **)(p + 0x60))) {
        case 0:
            break;
        case 1:
            *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
            *(int *)(p + 0x64) = 0x3C;
            D_005BC1A8->m18(0x80000000, 0x3C);
            func_0013E020(D_006011CC, 0x3C, 0);
            func_003303F0(D_01DFABA0, 0, 0x14, 0x40, 0);
            func_003303F0(D_01DFABA0, 0, 0x15, 0x40, 0);
            func_0020A3A0(*(char **)(*(char **)(p + 0xC) + 4), 2, *(signed char *)(p + 0x1C));
            func_0020A270(*(char **)(*(char **)(p + 0xC) + 4));
            func_0020A320(*(char **)(*(char **)(p + 0xC) + 4));
            break;
        case 2:
            func_00402850(p + 0x68, 0, 1);
            D_005BC1A8->m18(0x80000000, 0x3C);
            *(int *)(p + 0x64) = 0x3C;
            *(int *)(p + 0x18) = 10;
            break;
        }
        break;
    case 5:
        if (--*(int *)(p + 0x64) >= 0) break;
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
        D_005BC1A8->m28(0, 1, 0xFFFFF1);
        if (*(char **)(p + 0x60) != 0) {
            func_001AD140(*(char **)(p + 0x60));
            *(char **)(p + 0x60) = 0;
        }
        break;
    case 6:
    case 7:
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
        break;
    case 8:
        func_001AF080(D_00666750, *(int *)(p + 0x4C));
        func_001AF080(D_00666750, *(int *)(p + 0x50));
        func_001AF080(D_00666750, *(int *)(p + 0x54));
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        *(int *)(p + 0x14) = 0;
        *(int *)(p + 0x18) = 0;
        break;
    case 9:
        break;
    case 10:
        if (--*(int *)(p + 0x64) >= 0) break;
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
        D_005BC1A8->m28(0, 1, 0xFFFFF1);
        if (*(char **)(p + 0x60) != 0) {
            func_001AD140(*(char **)(p + 0x60));
            *(char **)(p + 0x60) = 0;
        }
        break;
    case 11:
    case 12:
        *(int *)(p + 0x18) = *(int *)(p + 0x18) + 1;
        break;
    case 13:
        *(int *)(p + 0x14) = 1;
        *(int *)(p + 0x18) = 0;
        break;
    }
}
