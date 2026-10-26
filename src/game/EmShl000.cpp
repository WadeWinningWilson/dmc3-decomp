#include "game/vthunk.h"
class Obj130b {
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
    virtual void m130();
    virtual void d75();
    virtual void m138();
    virtual void m13C();
};

extern "C" void func_001AD100(char *);

extern "C" void func_00228300(char *);

extern "C" void func_0030C5E0(char *);

extern "C" void func_0030CB50(char *);

extern "C" void func_0030C290(char *p) {
    func_00228300(p + 0xD0);
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        ((Obj130b *)p)->m130();
        break;
    case 1:
        func_0030C5E0(p);
        break;
    case 2:
        func_0030CB50(p);
        break;
    }
}

extern "C" void func_00104C00(char *, int, char *);

extern "C" void * func_002075D0(int, int, char *, int, int);

extern "C" int func_0024E780(char *, int, int);

extern "C" void func_00105760(float *, float *, float);

extern "C" int func_0030D200(char *);

extern "C" void func_0030CE90(char *);

extern "C" void func_0030CCD0(char *);

class V134 {
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
    virtual char *m134(int);
};

extern "C" int func_0030CD40(char *p) {
    float m[16] __attribute__((aligned(16)));
    char *o;
    char *s;
    if ((unsigned char)func_0024E780(*(char **)(p + 0xB9C), 0, 1) == 2 || *(unsigned char *)(p + 0xBA8) > 0) {
        if ((unsigned char)func_0030D200(p) == 0) return 0;
        func_0030CE90(p);
        o = (*(V134 **)(p + 0xD0))->m134(*(int *)(p + 0xBA0));
        if (o != 0) {
            s = *(char **)(o + 0x104);
            if (*(int *)(p + 0xBA0) == 0x1F) {
                __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
                func_00105760(m, m, 3.1415925f);
                func_00104C00(s, (int)s, (char *)m);
            }
            if (*(unsigned char *)(p + 0xB98) != 0) {
                func_002075D0(3, 0x38F, s, 3, 0x10);
            } else {
                func_002075D0(3, 0xA7, s, 3, 0x10);
            }
        }
        *(unsigned char *)(p + 5) = 1;
    } else {
        func_0030CCD0(p);
    }
    return 1;
}

struct M207 { float m[16]; };

extern "C" {
char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl);
}

extern "C" char *func_00279290(char *);

extern "C" void func_001AD140(char *);

extern "C" float D_005626C0[];

extern "C" float D_005626C4[];

extern "C" float D_005626C8[];

extern "C" float D_005626CC[];

extern "C" short D_005626D0[];

extern "C" short D_005626D2[];

extern "C" short D_005626D4[];

extern "C" float D_005626D8[];

extern "C" float D_005626DC[];

extern "C" float D_00562700[];

extern "C" float D_00562704[];

extern "C" float D_00562708[];

extern "C" float D_0056270C[];

extern "C" short D_00562710[];

extern "C" short D_00562712[];

extern "C" short D_00562714[];

extern "C" float D_00562718[];

extern "C" float D_0056271C[];

extern "C" unsigned char D_005BCA88;

extern "C" unsigned char D_005BCA89;

extern "C" unsigned char D_005BCA8A;

extern "C" unsigned char D_005BCA8B;

extern "C" float D_005BCA8C;

extern "C" void func_001A2840(char *, int, float);

class V30C {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28();
    virtual unsigned char g2C(int, int);
};

extern "C" void func_0030C320(char *p) {
    char *o;
    if (*(unsigned char *)(p + 0xB98) == 0) {
        *(float *)(p + 0x128) = D_005626CC[0];
        *(float *)(p + 0x110) = D_005626C0[0];
        *(float *)(p + 0x120) = D_005626C4[0];
        *(float *)(p + 0x124) = D_005626C8[0];
        *(float *)(p + 0x12C) = D_005626D0[0];
        *(float *)(p + 0x130) = D_005626D2[0];
        *(short *)(p + 0x138) = D_005626D4[0];
        *(float *)(p + 0x13C) = D_005626D8[0];
        *(float *)(p + 0x144) = D_005626DC[0];
    } else {
        *(float *)(p + 0x128) = D_0056270C[0];
        *(float *)(p + 0x110) = D_00562700[0];
        *(float *)(p + 0x120) = D_00562704[0];
        *(float *)(p + 0x124) = D_00562708[0];
        *(float *)(p + 0x12C) = D_00562710[0];
        *(float *)(p + 0x130) = D_00562712[0];
        *(short *)(p + 0x138) = D_00562714[0];
        *(float *)(p + 0x13C) = D_00562718[0];
        *(float *)(p + 0x144) = D_0056271C[0];
    }
    *(unsigned char *)(p + 0x148) = 1;
    *(unsigned char *)(p + 0xB99) = 0;
    if (((V30C *)(p + 0x180))->g2C(*(int *)(p + 0xD4), *(int *)(p + 0xD8)) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0xB98) == 0) {
        *(char **)(p + 0xB90) = func_00207480(3, 0x126, 0, 0x10);
        if ((o = *(char **)(p + 0xB90)) != 0) {
            *(char **)(o + 0x90) = p + 0xB10;
            *(unsigned char *)(o + 0x9A) = 3;
            *(unsigned char *)(*(char **)(p + 0xB90) + 0x3A) = 1;
        }
    } else {
        *(char **)(p + 0xB90) = func_00207480(3, 0x35D, 0, 0x10);
        if ((o = *(char **)(p + 0xB90)) != 0) {
            *(char **)(o + 0x90) = p + 0xB10;
            *(unsigned char *)(o + 0x9A) = 3;
            *(unsigned char *)(*(char **)(p + 0xB90) + 0x3A) = 1;
        }
    }
    if (*(unsigned char *)(p + 0xB98) == 1) {
        o = func_00279290(p + 0x180);
        func_001A2840(o, (D_005BCA8B << 24) + ((D_005BCA8A << 16) + (D_005BCA88 + (D_005BCA89 << 8))), 1.0f / D_005BCA8C);
    } else if (*(unsigned char *)(p + 0xB98) == 2) {
        o = func_00279290(p + 0x180);
        func_001A2840(o, (D_005BCA8B << 24) + ((D_005BCA8A << 16) + (D_005BCA88 + (D_005BCA89 << 8))), 1.0f);
    }
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 6) = 0;
}

extern "C" void func_0030CB60(char *p) { ((VThunk *)(p + 0x180))->v50(); }

/* AUTO-GENERATED by tools/gen_clones.py: copies of functions in src/game/stage/Stage.cpp
 * with their constants and symbols substituted, verified byte-for-byte. */
class SubCCc {
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
    virtual int mCC(char *);
};

extern "C" {
extern "C" void func_0030CB80(char *p) {
    ((SubCCc *)(p + 0x180))->mCC(p + 0xB10);
}
}
