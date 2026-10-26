#include "game/mt_rand.h"
class ObjSnd {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual int m2C();
};

extern "C" ObjSnd *D_005BC1A8;

extern "C" char D_005D0E70[];

extern "C" char D_005D0E78[];

extern "C" char D_006011B4[];

extern "C" int func_00486460(char *);

extern "C" void func_0013DC30(char *, int, int);

extern "C" void func_0013E040(char *, int, int);

extern "C" {
/* Mode switch: aborts to state 2 when flagged, otherwise on confirm arms the stage and fades. */
void func_0022F620(char *p) {
    extern void func_0013D900(char *, int);
    char *q;
    if (*(unsigned char *)(p + 8) != 0) {
        *(int *)(p + 0x28) = -1;
        *(int *)(p + 0xC) = 2;
        *(int *)(p + 0x10) = 0;
        *(int *)(p + 0x14) = 0;
        return;
    }
    if ((unsigned char)func_00486460(p + 0x34) == 1) {
        *(unsigned char *)(*(char **)(p + 0x1C) + 0x1900) = 1;
        q = *(char **)(p + 0x1C);
        *(unsigned char *)(q + 4) = 1;
        *(signed char *)(q + 0x1903) = -1;
        *(unsigned char *)(q + 0x1900) = 1;
        *(unsigned char *)(q + 0x1901) = 0;
        *(int *)(p + 0x10) = 0;
        *(int *)(p + 0x14) = 2;
        *(int *)(p + 0x18) = 0x708;
        func_0013D900(D_005D0E70, -1);
        func_0013DC30(D_005D0E78, 0x1C, 0);
        func_0013E040(D_006011B4, 0x3C, 1);
        D_005BC1A8->m14(0x80000000, 5);
    }
}
}

extern "C" char D_00666750[];

extern "C" void func_001AF080(char *, int);

extern "C" void func_001AD140(char *);

extern "C" void func_0022F700(char *p) {
    switch (*(unsigned int *)(p + 0x10)) {
    case 0:
        if ((unsigned char)D_005BC1A8->m2C() == 1) (*(int *)(p + 0x10))++;
        break;
    case 1:
        if (*(char **)(p + 0x1C)) func_001AD140(*(char **)(p + 0x1C));
        (*(int *)(p + 0x10))++;
    case 2:
    case 3:
    case 4:
        (*(int *)(p + 0x10))++;
        break;
    case 5:
        if (*(int *)(p + 0x20)) func_001AF080(D_00666750, *(int *)(p + 0x20));
        *(int *)(p + 0x2C) = *(int *)(p + 0x28);
        return;
    }
}

extern "C" char D_01DFABA0[];

extern "C" char D_006011CC[];

extern "C" char D_005BE1A8[8];

extern "C" int D_005BC660;

extern "C" int D_01CB0520[];

extern "C" int D_01CAFF30[];

extern "C" int D_01CB051C[];

extern "C" int func_001AEB60(char *);

extern "C" void func_0032FDB0(char *, int, int);

extern "C" void func_0013E020(char *, int, int);

extern "C" int func_002F9800(char *, int);

extern "C" int func_003259E0(int);

extern "C" void func_003303F0(char *, int, int, int, int);

extern "C" void func_0036DF10(char *, int, int, int, int, int);

extern "C" void func_00486390(char *, int);

extern "C" {
void func_0022F0D0(char *p) {
    extern void func_0013D900(char *);
    switch (*(int *)(p + 0x14)) {
    case 0:
        if (!(unsigned char)func_001AEB60(D_00666750)) break;
        func_0032FDB0(D_01DFABA0, 7, *(int *)(p + 0x24));
        *(int *)(p + 0x14) = 1;
        func_0013D900(D_005D0E70);
        func_0013DC30(D_005D0E78, 0x1C, 0);
        func_0013E040(D_006011B4, 0x3C, 1);
    case 1:
        if (func_002F9800(D_01DFABA0, 0) != 0) break;
        func_001AF080(D_00666750, *(int *)(p + 0x24));
        *(int *)(p + 0x1C) = func_003259E0(*(int *)(p + 0x20));
        D_005BC1A8->m14(0x80000000, 5);
        *(int *)(p + 0x14) = 2;
    case 2:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        if (*(unsigned char *)(p + 8) != 0) {
            *(int *)(p + 0x28) = -1;
            *(int *)(p + 0xC) = 2;
            *(int *)(p + 0x10) = 0;
            *(int *)(p + 0x14) = 0;
            break;
        }
        switch (*(signed char *)(*(char **)(p + 0x1C) + 0x1903)) {
        case -2:
            *(int *)(p + 0x18) = 0x708;
            break;
        case -1:
            break;
        case 0:
            *(int *)(p + 0x30) = 0;
            if (D_01CB0520[0] & 2) {
                switch (mt_rand() & 7) {
                case 0:
                case 1:
                    func_003303F0(D_01DFABA0, 7, 0, 0x40, 0);
                    break;
                case 2:
                case 3:
                case 4:
                    func_003303F0(D_01DFABA0, 7, 2, 0x40, 0);
                    break;
                case 5:
                case 6:
                case 7:
                    func_003303F0(D_01DFABA0, 7, 4, 0x40, 0);
                    break;
                }
            } else {
                func_003303F0(D_01DFABA0, 7, 0, 0x40, 0);
            }
            func_0036DF10(D_005BE1A8, 0, 1, 0xFF, 0xF, 0);
            D_005BC1A8->m18(0x80000000, 0x3C);
            func_0013E020(D_006011CC, 0x3C, 0);
            *(int *)(p + 0x14) = 3;
            break;
        case 1:
            *(int *)(p + 0x30) = 1;
            D_005BC1A8->m18(0x80000000, 0x3C);
            func_0013E020(D_006011CC, 0x3C, 0);
            *(int *)(p + 0x14) = 3;
            break;
        case 2:
            *(int *)(p + 0x30) = 2;
            D_005BC1A8->m18(0x80000000, 0x3C);
            func_0013E020(D_006011CC, 0x3C, 0);
            *(int *)(p + 0x14) = 3;
            break;
        }
        if (--*(int *)(p + 0x18) <= 0) {
            *(int *)(p + 0x28) = 3;
            *(int *)(p + 0xC) = 2;
            *(int *)(p + 0x10) = 0;
            *(int *)(p + 0x14) = 0;
            D_005BC1A8->m18(0x80000000, 0x3C);
            func_0013E020(D_006011CC, 0x3C, 0);
            *(unsigned char *)(*(char **)(p + 0x1C) + 0x1901) = 1;
        }
        break;
    case 3:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        switch (*(int *)(p + 0x30)) {
        case 0:
            if ((D_01CB0520[0] & 0x10) && (D_01CB0520[0] & 2)) {
                D_005BC660 = 1;
                *(int *)(p + 0x28) = 4;
            } else {
                D_01CAFF30[0] = 1;
                *(int *)(p + 0x28) = 1;
            }
            D_01CB051C[0] = 0;
            *(int *)(p + 0xC) = 2;
            *(int *)(p + 0x10) = 0;
            *(int *)(p + 0x14) = 0;
            break;
        case 1:
            *(int *)(p + 0x28) = 2;
            D_005BC660 = 0;
            *(int *)(p + 0xC) = 2;
            *(int *)(p + 0x10) = 0;
            *(int *)(p + 0x14) = 0;
            break;
        case 2:
            *(unsigned char *)(*(char **)(p + 0x1C) + 0x1900) = 0;
            *(int *)(p + 0x10) = 2;
            func_00486390(p + 0x34, 0);
            D_005BC1A8->m14(0x80000000, 5);
            break;
        }
        break;
    case 4:
        break;
    }
}
}
