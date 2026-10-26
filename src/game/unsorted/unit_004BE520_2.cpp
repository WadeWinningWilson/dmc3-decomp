#include "game/mt_rand.h"
/* An object whose virtual at 0x2F8 takes an int. */
class Obj2F8 {
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
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual void d185();
    virtual void d186();
    virtual void d187();
    virtual void m2F8(int);
};

extern "C" float D_0058AD40[][3];

extern "C" void func_004CBD90(char *p) {
    if (100.0f * (2.3283064e-10f * mt_rand()) < D_0058AD40[*(int *)(p + 0xB2C0)][*(unsigned char *)(p + 0xB2C8)]) {
        ((Obj2F8 *)p)->m2F8(0x33);
    } else {
        ((Obj2F8 *)p)->m2F8(0x3E);
    }
}

/* An actor whose virtuals at 0x2EC..0x300 are used. */
class ObjB {
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
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual void d74();
    virtual void d75();
    virtual void d76();
    virtual void d77();
    virtual void d78();
    virtual void d79();
    virtual void d80();
    virtual void d81();
    virtual void d82();
    virtual void d83();
    virtual void d84();
    virtual void d85();
    virtual void d86();
    virtual void d87();
    virtual void d88();
    virtual void d89();
    virtual void d90();
    virtual void d91();
    virtual void d92();
    virtual void d93();
    virtual void d94();
    virtual void d95();
    virtual void d96();
    virtual void d97();
    virtual void d98();
    virtual void d99();
    virtual void d100();
    virtual void d101();
    virtual void d102();
    virtual void d103();
    virtual void d104();
    virtual void d105();
    virtual void d106();
    virtual void d107();
    virtual void d108();
    virtual void d109();
    virtual void d110();
    virtual void d111();
    virtual void d112();
    virtual void d113();
    virtual void d114();
    virtual void d115();
    virtual void d116();
    virtual void d117();
    virtual void d118();
    virtual void d119();
    virtual void d120();
    virtual void d121();
    virtual void d122();
    virtual void d123();
    virtual void d124();
    virtual void d125();
    virtual void d126();
    virtual void d127();
    virtual void d128();
    virtual void d129();
    virtual void d130();
    virtual void d131();
    virtual void d132();
    virtual void d133();
    virtual void d134();
    virtual void d135();
    virtual void d136();
    virtual void d137();
    virtual void d138();
    virtual void d139();
    virtual void d140();
    virtual void d141();
    virtual void d142();
    virtual void d143();
    virtual void d144();
    virtual void d145();
    virtual void d146();
    virtual void d147();
    virtual void d148();
    virtual void d149();
    virtual void d150();
    virtual void d151();
    virtual void d152();
    virtual void d153();
    virtual void d154();
    virtual void d155();
    virtual void d156();
    virtual void d157();
    virtual void d158();
    virtual void d159();
    virtual void d160();
    virtual void d161();
    virtual void d162();
    virtual void d163();
    virtual void d164();
    virtual void d165();
    virtual void d166();
    virtual void d167();
    virtual void d168();
    virtual void d169();
    virtual void d170();
    virtual void d171();
    virtual void d172();
    virtual void d173();
    virtual void d174();
    virtual void d175();
    virtual void d176();
    virtual void d177();
    virtual void d178();
    virtual void d179();
    virtual void d180();
    virtual void d181();
    virtual void d182();
    virtual void d183();
    virtual void d184();
    virtual int m2EC();
    virtual void m2F0(int);
    virtual void m2F4(int);
    virtual void m2F8(int);
    virtual void m2FC(int);
    virtual void m300(int);
    virtual void m304(int);
};

extern "C" int func_004D2D20(char *, int);

/* Grab-release check: if armed and the partner no longer holds, restore the hit scale and enter 0x17. */
extern "C" int func_004D2D90(char *p) {
    if (*(unsigned char *)(p + 0xB2C8) != 1) {
        return 1;
    }
    if ((unsigned char)func_004D2D20(p, *(signed char *)(p + 0xB154)) == 1) {
        return 1;
    }
    *(float *)(p + 0x168) = 1.0f + (*(float **)(*(char **)(p + 0x138) + 0x14))[*(int *)(p + 0xB2C0)];
    ((ObjB *)p)->m2F8(0x17);
    return 0;
}

class V4C3 {
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
    virtual void m6C();
    virtual void m70();
    virtual void m74();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual int m84();
};

extern "C" float D_005BDDB0;

extern "C" float D_005BDDB4;

extern "C" float D_005BDF40;

extern "C" void func_004C43B0(char *);

extern "C" void func_004C4630(char *);

extern "C" void func_004C47D0(char *);

extern "C" void func_004C4930(char *);

extern "C" void func_004C4A40(char *);

extern "C" void func_004C4BA0(char *);

extern "C" void func_004C4E00(char *);

extern "C" void func_004C5200(char *);

extern "C" void func_004C5460(char *);

extern "C" void func_004C5590(char *);

extern "C" void func_004C56B0(char *);

extern "C" void func_004C5890(char *);

extern "C" void func_004C5AD0(char *);

extern "C" void func_004C5CC0(char *);

extern "C" void func_004C6490(char *);

extern "C" void func_004C6610(char *);

extern "C" void func_004C67A0(char *);

extern "C" void func_004C68F0(char *);

extern "C" void func_004C69C0(char *);

extern "C" void func_004C6C00(char *);

extern "C" void func_004C6DF0(char *);

extern "C" void func_004C7130(char *);

extern "C" void func_004C7520(char *);

extern "C" void func_004C7E50(char *);

extern "C" void func_004C8160(char *);

extern "C" void func_004C83A0(char *);

extern "C" void func_004C8660(char *);

extern "C" void func_004C8700(char *);

extern "C" void func_004C87A0(char *);

extern "C" void func_004C8920(char *);

extern "C" void func_004C89F0(char *);

extern "C" void func_004C8B20(char *);

extern "C" void func_004C90E0(char *);

extern "C" void func_004C9180(char *);

extern "C" void func_004C9540(char *);

extern "C" void func_004C9AB0(char *);

extern "C" void func_004C9E20(char *);

extern "C" void func_004C9F50(char *);

extern "C" void func_004CA400(char *);

extern "C" void func_004CA980(char *);

extern "C" void func_004CAD30(char *);

extern "C" void func_004CB100(char *);

#define SPD4C3 if (!(unsigned char)((V4C3 *)(p + 0x130))->m84()) *(float *)(p + 0x168) += D_005BDDB0 * *(float *)(p + 0x10);

#define SET4C3 *(float *)(p + 0x168) = 1.0f + (*(float **)(*(char **)(p + 0x138) + 0x14))[*(int *)(p + 0xB2C0)];

static inline int ok4C3(char *p) {
    unsigned char r = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) r = 0;
    return r;
}

extern "C" void func_004C3AD0(char *p) {
    float v;
    ((V4C3 *)(p + 0x130))->m6C();
    ((V4C3 *)(p + 0x130))->m70();
    ((V4C3 *)(p + 0x130))->m74();
    switch (*(unsigned char *)(p + 0xB154)) {
    case 23:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4 || *(unsigned char *)(p + 0xB2D3) == 1) SET4C3
        func_004C43B0(p);
        break;
    case 24:
        func_004C4630(p);
        break;
    case 25:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C47D0(p);
        break;
    case 26:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C4930(p);
        break;
    case 27:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C4A40(p);
        break;
    case 28:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C4BA0(p);
        break;
    case 29:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C4E00(p);
        break;
    case 30:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C5200(p);
        break;
    case 31:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C5460(p);
        break;
    case 32:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C5590(p);
        break;
    case 33:
        func_004C56B0(p);
        break;
    case 34:
        func_004C5890(p);
        break;
    case 37:
        func_004C6490(p);
        break;
    case 38:
        func_004C6610(p);
        break;
    case 39:
        func_004C67A0(p);
        break;
    case 40:
        func_004C7E50(p);
        break;
    case 41:
        func_004C68F0(p);
        break;
    case 42:
        func_004C69C0(p);
        break;
    case 43:
        func_004CAD30(p);
        break;
    case 44:
        func_004C7520(p);
        break;
    case 45:
        func_004C6C00(p);
        break;
    case 46:
        func_004C6DF0(p);
        break;
    case 47:
        func_004C7130(p);
        break;
    case 48:
        func_004C7520(p);
        break;
    case 35:
        func_004C5AD0(p);
        break;
    case 36:
        func_004C5CC0(p);
        break;
    case 49:
        func_004C7E50(p);
        break;
    case 50:
        func_004C8160(p);
        break;
    case 51:
        func_004C83A0(p);
        break;
    case 52:
        func_004C8660(p);
        break;
    case 53:
        func_004C8700(p);
        break;
    case 54:
        func_004C87A0(p);
        break;
    case 55:
        func_004C8920(p);
        break;
    case 56:
        func_004C89F0(p);
        break;
    case 57:
        func_004C8B20(p);
        break;
    case 58:
        func_004C9E20(p);
        break;
    case 59:
        func_004C9F50(p);
        break;
    case 60:
        func_004CA400(p);
        break;
    case 61:
        func_004CA980(p);
        break;
    case 62:
        func_004CAD30(p);
        break;
    case 63:
        func_004CB100(p);
        break;
    case 64:
        func_004CB100(p);
        break;
    case 65:
        func_004C9180(p);
        break;
    case 67:
        func_004C90E0(p);
        break;
    case 66:
        SPD4C3
        if (*(float *)(p + 0x164) < D_005BDDB4) SET4C3
        func_004C9AB0(p);
        break;
    case 68:
        func_004C9540(p);
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
        break;
    }
    if ((unsigned char)ok4C3(p) == 1) {
        v = *(float *)(p + 0xAF94) + D_005BDF40 * *(float *)(p + 0x10);
        *(float *)(p + 0xAF94) = v < *(float *)(p + 0xB110) ? v : *(float *)(p + 0xB110);
    }
}

extern "C" char D_01CAFF0C[];

extern "C" int func_0021CAD0(char *);

extern "C" float D_005BDF14;

class V7078 {
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
    virtual void m70();
    virtual void d27();
    virtual short m78(short, short);
};

extern "C" int func_004D2610(char *p) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (func_0021CAD0(g) != 0) {
        switch ((unsigned char)func_0021CAD0(g)) {
        case 7:
        case 8:
        case 0x11:
        case 0x26:
        case 0x27:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x74:
            if (*(float *)(p + 0x164) < D_005BDF14) {
                ((V7078 *)(p + 0x130))->m70();
                if ((short)(((V7078 *)(p + 0x130))->m78(*(short *)(p + 0x160), *(short *)(*(char **)(p + 0x140) + 0x50)) + 0x2000) < 0x4000) return 1;
            }
            break;
        }
    }
    return 0;
}

extern "C" unsigned char D_01CAFF3C[];

extern "C" float D_005BDEB8;

extern "C" float D_005BDEBC;

extern "C" float func_004D2B70(char *);

class O4CB {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4();
    virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4();
    virtual void dE8(); virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104();
    virtual void d108(); virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C(); virtual void d120(); virtual void d124();
    virtual void d128(); virtual void d12C(); virtual void d130(); virtual void d134(); virtual void d138(); virtual void d13C(); virtual void d140(); virtual void d144();
    virtual void d148(); virtual void d14C(); virtual void d150(); virtual void d154(); virtual void d158(); virtual void d15C(); virtual void d160(); virtual void d164();
    virtual void d168(); virtual void d16C(); virtual void d170(); virtual void d174(); virtual void d178(); virtual void d17C(); virtual void d180(); virtual void d184();
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194(); virtual void d198(); virtual void d19C(); virtual void d1A0(); virtual void d1A4();
    virtual void d1A8(); virtual void d1AC(); virtual void d1B0(); virtual void d1B4(); virtual void d1B8(); virtual void d1BC(); virtual void d1C0(); virtual void d1C4();
    virtual int m1C8();
    virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4(); virtual void d1E8();
    virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204(); virtual void d208();
    virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224(); virtual void d228();
    virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244(); virtual void d248();
    virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264(); virtual void d268();
    virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284(); virtual void d288();
    virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4(); virtual void d2A8();
    virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4(); virtual void d2C8();
    virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4(); virtual void d2E8();
    virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
};

class S4CB {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88();
    virtual void m8C();
    virtual void d90();
    virtual int m94(int);
};

class T4CB {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual int m14();
    virtual void m18(float);
};

extern "C" void func_004CBBE0(char *p, float f) {
    if (D_01CAFF3C[0] == 4 && func_004D2B70(p) < D_005BDEBC && *(float *)(p + 0xB2B4) <= 0.0f) {
        *(float *)(p + 0xB2B4) = D_005BDEB8;
        ((O4CB *)p)->m2F8(0x41);
        return;
    }
    if (((O4CB *)p)->m1C8() != 0) {
        if (((T4CB *)(*(char **)(*(char **)D_01CAFF0C + 0x20) + 0x840))->m14() != 0) {
            ((T4CB *)(*(char **)(*(char **)D_01CAFF0C + 0x20) + 0x840))->m18(f);
            ((S4CB *)(p + 0x130))->m8C();
            ((O4CB *)p)->m2F8((unsigned char)((S4CB *)(p + 0x130))->m94(0));
            return;
        }
        ((S4CB *)(p + 0x130))->m8C();
        ((O4CB *)p)->m2F8((unsigned char)((S4CB *)(p + 0x130))->m94(1));
        return;
    }
    ((S4CB *)(p + 0x130))->m8C();
    ((O4CB *)p)->m2F8((unsigned char)((S4CB *)(p + 0x130))->m94(1));
}

extern "C" {
int func_001AD100(void);
}

extern "C" {
int func_004CF1D0(char *);
}

extern "C" {
int func_004CFCA0(char *);
}

class V130_0_i {
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
    virtual void d50();
    virtual void d51();
    virtual void d52();
    virtual void d53();
    virtual void d54();
    virtual void d55();
    virtual void d56();
    virtual void d57();
    virtual void d58();
    virtual void d59();
    virtual void d60();
    virtual void d61();
    virtual void d62();
    virtual void d63();
    virtual void d64();
    virtual void d65();
    virtual void d66();
    virtual void d67();
    virtual void d68();
    virtual void d69();
    virtual void d70();
    virtual void d71();
    virtual void d72();
    virtual void d73();
    virtual int m(void);
};

extern "C" {
int func_004BFDD0(int p0) {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v2 = func_001AD100();
    v1 = *(unsigned char *)(v0 + 4);
    tmp0 = 3;
    if (v1 != tmp0) {
        switch (v1) {
        case 0:
            v2 = ((V130_0_i *)v0)->m();
            break;
        case 1:
            v2 = func_004CF1D0(v0);
            break;
        case 2:
            v2 = func_004CFCA0(v0);
            break;
        }
    }
    return v2;
}
}
