extern "C" void func_001AD140(char *);

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

extern "C" int func_001AFB90(char *, int, int, int);

extern "C" void func_001AF080(char *, int);

extern "C" char D_006663C0[];

extern "C" unsigned short func_001AE1E0(char *, int);

extern "C" char *func_001AEA60(char *, int, int);

extern "C" int func_003F4680(char *);

extern "C" int func_003F4E30(int);

extern "C" int func_0032EB70(char *, int, int);

extern "C" int func_0032F5D0(int);

extern "C" void func_003F4E20(int);

extern "C" void func_0032F5C0(int);

extern "C" int func_0032F5B0(int);

extern "C" int func_003F4E10(int);

extern "C" int func_003F4E00(int);

static inline int ok4F99(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" void func_004F99E0(char *p) {
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        if (*(int *)(p + 0x40) == 0) {
            *(int *)(p + 0x40) = func_003F4680(func_001AEA60(D_00666750, 6, 4));
            if (*(int *)(p + 0x40) == 0) {
                *(int *)(p + 8) = 9;
                break;
            }
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 1:
        *(int *)(p + 0x2C) = func_001AFB90(D_00666750, *(short *)(p + 0x22) + 0x1F4, 1, 8);
        if (*(int *)(p + 0x2C) == 0) {
            *(int *)(p + 8) = 9;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if ((unsigned char)ok4F99(*(unsigned char **)(p + 0x2C)) != 1) break;
        if ((unsigned char)func_003F4E30(*(int *)(p + 0x40)) != 1) break;
        *(int *)(p + 0x38) = func_0032EB70(*(char **)(p + 0x2C), *(signed char *)(p + 0x22), *(unsigned char *)(p + 0x24) == 2);
        if (*(int *)(p + 0x38) == 0) {
            *(int *)(p + 8) = 9;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 3:
        if ((unsigned char)func_0032F5D0(*(int *)(p + 0x38)) == 1) *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        if ((func_001AE1E0(D_006663C0, 0) & 0x50) == 0) break;
        switch (*(unsigned char *)((char *)(*(unsigned char *)(p + 0x21) * 4) + (int)p + 0x16)) {
        case 1: case 2: case 3:
            break;
        default:
            func_003F4E20(*(int *)(p + 0x40));
            break;
        }
        func_0032F5C0(*(int *)(p + 0x38));
        if (*(short *)(p + 0x22) == 0x3A) {
            D_005BC1A8->m18(0x80C0C0C0, 4);
            *(int *)(p + 8) = *(int *)(p + 8) + 1;
        } else {
            *(int *)(p + 8) = 7;
        }
        break;
    case 5:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m14(0x20000000, 0x18);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m24(0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 7:
        if ((unsigned char)func_0032F5B0(*(int *)(p + 0x38)) != 1) break;
        if ((unsigned char)func_003F4E10(*(int *)(p + 0x40)) == 1) *(int *)(p + 8) = *(int *)(p + 8) + 1;
        else *(int *)(p + 8) = 0xA;
        break;
    case 8:
        if ((unsigned char)func_003F4E00(*(int *)(p + 0x40)) != 1) break;
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 9:
        if (*(char **)(p + 0x40) != 0) {
            func_001AD140(*(char **)(p + 0x40));
            *(char **)(p + 0x40) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 10:
        if (*(char **)(p + 0x2C) != 0) {
            if (!(unsigned char)ok4F99(*(unsigned char **)(p + 0x2C))) break;
        }
        if (*(char **)(p + 0x38) != 0) {
            func_001AD140(*(char **)(p + 0x38));
            *(char **)(p + 0x38) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 11: case 12:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 13:
        if (*(int *)(p + 0x2C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x2C));
            *(int *)(p + 0x2C) = 0;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
        break;
    }
}
