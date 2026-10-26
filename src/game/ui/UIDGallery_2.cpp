extern "C" char D_01DFABA0[];

extern "C" void func_001AD140(char *);

extern "C" char D_005BE098[8];

extern "C" void func_00195E20(char *, char *);

extern "C" char D_006663C0[];

extern "C" int func_0050C650(char *);

extern "C" int func_0050CA70(char *);

extern "C" void func_0050C8B0(char *, int);

extern "C" void func_0050CD30(char *, int);

extern "C" int func_0050C1F0(char *);

extern "C" int func_0050C460(char *);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" void func_0050D860(char *, int);

extern "C" int func_0050CEE0(char *);

extern "C" int func_001AE360(char *, int);

extern "C" int func_001AE310(char *, int);

extern "C" void func_0050D7E0(char *, int);

extern "C" void func_0050D9B0(char *, int);

class V50B {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void d5();
    virtual void d6();
    virtual void m24(int, int);
    virtual void d8();
    virtual int m2C();
};

extern "C" V50B *D_005BC1A8;

static inline int ok50B(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

extern "C" void func_0050B930(char *p) {
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        if (!(unsigned char)func_0050C650(p)) goto fail;
        if (!(unsigned char)func_0050CA70(p)) goto fail;
        *(unsigned char *)(p + 4) = 1;
        *(unsigned char *)(p + 5) = 0;
    case 1:
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            *(int *)(p + 0x39D8) = 0x3106;
            *(unsigned char *)(p + 0x39DC) = 1;
            *(int *)(p + 0x39D0) = 0;
            func_0050C8B0(p, 0);
            func_0050CD30(p, 0);
            D_005BC1A8->m14(0x80000000, 0x10);
            (*(unsigned char *)(p + 5))++;
            break;
        case 1:
            if ((unsigned char)D_005BC1A8->m2C() == 1) {
                D_005BC1A8->m24(0, 0);
                (*(unsigned char *)(p + 5))++;
            }
            break;
        case 2:
            func_0050C8B0(p, 0);
            func_0050CD30(p, 0);
            switch (func_0050C1F0(p)) {
            case 0:
                break;
            case 1:
                D_005BC1A8->m18(0x80000000, 0x10);
                (*(unsigned char *)(p + 5))++;
                break;
            case 2:
                *(unsigned char *)(p + 0x39F0) = 1;
                *(unsigned char *)(p + 4) = 4;
                *(unsigned char *)(p + 5) = 0;
                break;
            case 3:
                *(unsigned char *)(p + 0x39F0) = 2;
                *(unsigned char *)(p + 4) = 4;
                *(unsigned char *)(p + 5) = 0;
                break;
            }
            break;
        case 3:
            if ((unsigned char)D_005BC1A8->m2C() == 1) {
                *(unsigned char *)(p + 4) = 2;
                *(unsigned char *)(p + 5) = 0;
            }
            break;
        }
        break;
    case 2:
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            func_0050CD30(p, 1);
            func_0050C8B0(p, 1);
            *(unsigned char *)(p + 0x39EA) = 0;
            *(unsigned char *)(p + 0x39E9) = 1;
            *(unsigned char *)(p + 0x39DC) = 0;
            *(int *)(p + 0x39D8) = 0x310D;
            D_005BC1A8->m14(0x80000000, 0x10);
            (*(unsigned char *)(p + 5))++;
        case 1:
            if ((unsigned char)D_005BC1A8->m2C() == 1) {
                D_005BC1A8->m24(0, 0);
                (*(unsigned char *)(p + 5))++;
            }
            break;
        case 2:
            switch (func_0050C460(p)) {
            case 0:
                break;
            case 3:
                break;
            case 1:
                func_003303F0(D_01DFABA0, 0, 4, 0, 0);
                *(unsigned char *)(p + 4) = 3;
                *(unsigned char *)(p + 5) = 0;
                break;
            case 2:
            default:
                func_003303F0(D_01DFABA0, 0, 3, 0, 0);
                (*(unsigned char *)(p + 5))++;
                break;
            }
            break;
        case 3:
            *(unsigned char *)(p + 0x39EA) = 1;
            (*(unsigned char *)(p + 5))++;
            break;
        case 4:
            if (*(signed char *)(p + 0x39DE) == 5 && *(unsigned char *)(p + 0x39EA) == 1) {
                D_005BC1A8->m18(0x80000000, 0x10);
                (*(unsigned char *)(p + 5))++;
            }
            break;
        case 5:
            if ((unsigned char)D_005BC1A8->m2C() == 1) {
                *(unsigned char *)(p + 4) = 1;
                *(unsigned char *)(p + 5) = 0;
            }
            break;
        }
        func_0050D860(p, *(int *)(p + 0x39CC));
        if (!(unsigned char)func_0050CEE0(p)) goto fail;
        break;
    case 3:
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            *(int *)(p + 0x39D8) = 0x3108;
            D_005BC1A8->m18(0x80000000, 4);
            (*(unsigned char *)(p + 5))++;
        case 1:
            if (*(signed char *)(p + 0x39DE) == 0 || *(signed char *)(p + 0x39DE) == 5) {
                if (*(unsigned char *)(p + 0x39E9) == 0) {
                    if (!((*(int *)(p + 0x39D0) == *(int *)(p + 0x39E4) && *(unsigned char *)(p + 0x39E8) != 0) || *(unsigned char *)(p + 0x39E9) != 0)) *(unsigned char *)(p + 0x39E9) = 1;
                    else (*(unsigned char *)(p + 5))++;
                }
            }
            break;
        case 2:
            if ((unsigned char)D_005BC1A8->m2C() == 1) {
                *(unsigned char *)(p + 0x39DD) = 1;
                *(float *)(p + 0x39EC) = 1.0f;
                D_005BC1A8->m14(0x80000000, 0x10);
                (*(unsigned char *)(p + 5))++;
            }
        case 3:
            if ((unsigned char)D_005BC1A8->m2C() == 1) (*(unsigned char *)(p + 5))++;
            break;
        case 4:
            if ((unsigned short)func_001AE360(D_006663C0, 0) & 0x50) {
                func_003303F0(D_01DFABA0, 0, 3, 0, 0);
                (*(unsigned char *)(p + 5))++;
            } else if ((unsigned short)func_001AE310(D_006663C0, 0) & 0x80) {
                *(int *)(p + 0x39D8) = -1;
            } else {
                *(int *)(p + 0x39D8) = 0x3108;
            }
            break;
        case 5:
        default:
            *(unsigned char *)(p + 0x39DD) = 0;
            *(float *)(p + 0x39EC) = 0.5f;
            *(int *)(p + 0x39D8) = 0x310D;
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 2;
            break;
        }
        if (!(unsigned char)func_0050CEE0(p)) goto fail;
        break;
    case 4:
        if (*(char **)(p + 0x3C) == 0 || (unsigned char)ok50B(*(unsigned char **)(p + 0x3C))) {
            *(unsigned char *)(p + 4) = 5;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    case 5:
        break;
    }
    if (*(unsigned char *)(p + 0x39DC) == 1 && *(unsigned char *)(p + 0x39DD) == 0) func_0050D7E0(p, *(int *)(p + 0x39CC));
    func_0050D9B0(p, *(int *)(p + 0x39D8));
    func_00195E20(D_005BE098, p);
    return;
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 4;
    *(unsigned char *)(p + 5) = 0;
}
