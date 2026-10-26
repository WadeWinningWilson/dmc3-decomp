#include "game/mt_rand.h"
class Anim4 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void m40();
    virtual void m44();
    virtual void m48(int, char *);
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void m6C();
    virtual void d26();
    virtual void m74();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
};

extern "C" void func_003CDF30(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0);
    switch (mt_rand() & 1) {
    case 0:
        p[0x10C] = 0;
        break;
    case 1:
        p[0x10C] = 1;
        break;
    }
}

class Anim {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
};

class Obj174 {
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
    virtual void mE8(int);
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
    virtual void m174();
};

/* Type 0x18 takes its own exit; others tick the animation and flag completion. */
extern "C" void func_003CDE70(char *p) {
    switch (*(unsigned short *)(*(char **)(p + 4) + 0x22)) {
    case 0x63:
    default:
        if ((*(Anim **)(p + 0xA8))->m2C() != 0) {
            ((Obj174 *)p)->mE8(1);
        }
        (*(Anim **)(p + 0xA8))->m24();
        break;
    case 0x18:
        ((Obj174 *)p)->m174();
        break;
    }
}

class ObjCE3 {
public:
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
    virtual void m6C();
    virtual void m70();
    virtual void m74();
    virtual int m78(int, int);
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
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void mE8(int);
};

class Snd24 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void m24();
};

extern "C" void func_003CE3C0(char *p) {
    short d;
    float f;
    *(float *)(p + 0x110) = *(float *)(p + 0x110) + *(float *)(p + 0xB0);
    if (!(*(float *)(p + 0x110) <= 180.0f)) {
        ((ObjCE3 *)p)->mE8(1);
    }
    ((ObjCE3 *)p)->m6C();
    ((ObjCE3 *)p)->m70();
    ((ObjCE3 *)p)->m74();
    switch (*(unsigned char *)(p + 0x10C)) {
    case 0:
        d = (short)((ObjCE3 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) + 0xE39;
        if (d > 0xB6) {
            d = 0xB6;
        }
        if (d < -0xB5) {
            d = -0xB5;
        }
        f = (float)d * *(float *)(p + 0xB0);
        *(short *)(*(char **)(p + 0x10) + 0x50) = (short)(int)((float)*(short *)(*(char **)(p + 0x10) + 0x50) + f);
        break;
    case 1:
        d = (short)((ObjCE3 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) - 0xE39;
        if (d > 0xB6) {
            d = 0xB6;
        }
        if (d < -0xB5) {
            d = -0xB5;
        }
        f = (float)d * *(float *)(p + 0xB0);
        *(short *)(*(char **)(p + 0x10) + 0x50) = (short)(int)((float)*(short *)(*(char **)(p + 0x10) + 0x50) + f);
        break;
    }
    (*(Snd24 **)(p + 0xA8))->m24();
}

extern "C" char D_01CAFF0C[];

class ObjSt1C {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual float m1C();
};

static inline float stage_obj_id(void) {
    if (*(char **)(*(char **)D_01CAFF0C + 4) != 0) {
        ObjSt1C *o = *(ObjSt1C **)(*(char **)(*(char **)D_01CAFF0C + 4) + 0x10);
        if (o != 0) {
            return o->m1C();
        }
    }
    return 0.0f;
}

class ObjInit2 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void m98(int); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void mB4(int); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53();
    virtual void d54(); virtual void d55(); virtual void mE8(int);
};

extern "C" void func_003CCBD0(char *p, int a2, char *a3, int a4, int a5, int a6, int a7, int a8, int a9) {
    *(int *)(p + 4) = a2;
    *(char **)(p + 8) = a3;
    *(int *)(p + 0xC) = a4;
    *(int *)(p + 0xA8) = a5;
    *(int *)(p + 0x10) = a6;
    *(int *)(p + 0xBC) = a7;
    *(int *)(p + 0xA4) = a8;
    *(int *)(p + 0xAC) = a9;
    *(float *)(p + 0x14) = stage_obj_id();
    *(short *)(p + 0x30) = 0;
    *(int *)(p + 0x34) = 0;
    *(int *)(p + 0x38) = 0;
    *(int *)(p + 0x108) = 0;
    *(unsigned char *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 0x1D) = 0;
    *(unsigned char *)(p + 0xCD) = 0;
    *(unsigned char *)(p + 0xCE) = 0;
    *(unsigned char *)(p + 0xCF) = 0;
    *(unsigned char *)(p + 0xD0) = 0;
    *(unsigned char *)(p + 0xD1) = 0;
    ((ObjInit2 *)p)->mE8(1);
    ((ObjInit2 *)p)->mB4(0x17);
    ((ObjInit2 *)p)->m98(*(int *)(a3 + 0x1C));
}

class W3CEo {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void d1C();
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void m48(int, char *);
};

class W3CE {
public:
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
    virtual float m7C();
    virtual unsigned int m80(float);
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
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void mE8(int);
};

extern "C" {
void func_003CE760(char *p) {
    extern char D_01DFABA0[];
    extern void func_00330BD0(char *, int, char *, int, int);
    switch (*(unsigned int *)(p + 0xD4)) {
    case 0:
        if (!((*(W3CEo **)(p + 0xA8))->m28() < 140.0f)) {
            (*(W3CEo **)(p + 0xA8))->m48(0x23, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 1;
            *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
        } else {
            (*(W3CEo **)(p + 0xA8))->m24();
        }
        break;
    case 1:
        if ((*(W3CEo **)(p + 0xA8))->m2C() != 0) {
            (*(W3CEo **)(p + 0xA8))->m48(0x20, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
            *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
            *(int *)(p + 0x100) = 0;
        } else {
            (*(W3CEo **)(p + 0xA8))->m24();
        }
        break;
    case 2:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 0.0f) break;
        func_00330BD0(D_01DFABA0, 0x4D, *(char **)(p + 0x10) + 0x10, 0, 0);
        *(int *)(p + 0xD4) = 3;
        break;
    case 3:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 60.0f) break;
        (*(W3CEo **)(p + 0xA8))->m18(0x3E8);
        *(int *)(p + 0xD4) = 4;
        break;
    case 4:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 80.0f) break;
        switch (((W3CE *)p)->m80(((W3CE *)p)->m7C())) {
        case 0: case 1: case 2:
            break;
        case 3: case 4: case 5:
            (*(W3CEo **)(p + 0xA8))->m18(0x3E9);
            break;
        }
        *(int *)(p + 0xD4) = 5;
        break;
    case 5:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 100.0f) break;
        (*(W3CEo **)(p + 0xA8))->m18(0x3EA);
        *(int *)(p + 0xD4) = 6;
        break;
    case 6:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 120.0f) break;
        ((W3CE *)p)->mE8(1);
        break;
    }
}
}

class W3CFo {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void d1C();
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void m48(int, char *);
};

class W3CF {
public:
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
    virtual float m7C();
    virtual unsigned int m80(float);
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
    virtual void dB0();
    virtual void dB4();
    virtual void dB8();
    virtual void dBC();
    virtual void dC0();
    virtual void dC4();
    virtual void dC8();
    virtual void dCC();
    virtual void dD0();
    virtual void dD4();
    virtual void dD8();
    virtual void dDC();
    virtual void dE0();
    virtual void dE4();
    virtual void mE8(int);
};

extern "C" {
void func_003CECD0(char *p) {
    extern char D_01DFABA0[];
    extern void func_00330BD0(char *, int, char *, int, int);
    switch (*(unsigned int *)(p + 0xD4)) {
    case 0:
        if ((*(W3CFo **)(p + 0xA8))->m2C() != 0) {
            (*(W3CFo **)(p + 0xA8))->m18(3);
            *(int *)(p + 0xD4) = 1;
        }
        (*(W3CFo **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(W3CFo **)(p + 0xA8))->m28() < 140.0f)) {
            (*(W3CFo **)(p + 0xA8))->m48(0x23, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
            *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
        } else {
            (*(W3CFo **)(p + 0xA8))->m24();
        }
        break;
    case 2:
        if ((*(W3CFo **)(p + 0xA8))->m2C() != 0) {
            (*(W3CFo **)(p + 0xA8))->m48(0x20, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 3;
            *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
            *(int *)(p + 0x100) = 0;
        } else {
            (*(W3CFo **)(p + 0xA8))->m24();
        }
        break;
    case 3:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 0.0f) break;
        func_00330BD0(D_01DFABA0, 0x4D, *(char **)(p + 0x10) + 0x10, 0, 0);
        *(int *)(p + 0xD4) = 4;
        break;
    case 4:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 60.0f) break;
        (*(W3CFo **)(p + 0xA8))->m18(0x3E8);
        *(int *)(p + 0xD4) = 5;
        break;
    case 5:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 80.0f) break;
        switch (((W3CF *)p)->m80(((W3CF *)p)->m7C())) {
        case 0: case 1: case 2:
            break;
        case 3: case 4: case 5:
            (*(W3CFo **)(p + 0xA8))->m18(0x3E9);
            break;
        }
        *(int *)(p + 0xD4) = 6;
        break;
    case 6:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 100.0f) break;
        (*(W3CFo **)(p + 0xA8))->m18(0x3EA);
        *(int *)(p + 0xD4) = 7;
        break;
    case 7:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 120.0f) break;
        (*(W3CFo **)(p + 0xA8))->m18(4);
        func_00330BD0(D_01DFABA0, 0x4D, *(char **)(p + 0x10) + 0x10, 0, 0);
        *(int *)(p + 0xD4) = 8;
        break;
    case 8:
        if ((*(W3CFo **)(p + 0xA8))->m2C() != 0) ((W3CF *)p)->mE8(1);
        (*(W3CFo **)(p + 0xA8))->m24();
        break;
    }
}
}

class C3CD {
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
    virtual void m(int);
};

extern "C" void func_003CD4B0(char *p) {
    switch (**(signed char **)(p + 4)) {
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
        ((C3CD *)p)->m(0x19);
        break;
    }
}

extern "C" {
extern "C" void func_003CE5A0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x1);
}
}

extern "C" {
extern "C" void func_003CD330(char *p) {
    (*(Anim4 **)(p + 0xA8))->m48(0x138A, *(char **)(p + 0x10) + 0x10);
}
}

class V108_0_i {
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
    virtual int m(void);
};

class V10C_0_i {
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
    virtual int m(void);
};

class V110_0_i {
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
    virtual int m(void);
};

class V114_0_i {
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
    virtual int m(void);
};

class V118_0_i {
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
    virtual int m(void);
};

class V11C_0_i {
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
    virtual int m(void);
};

class V120_0_i {
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
    virtual int m(void);
};

class V24_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual int m(void);
};

class V9C_0_v {
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
    virtual void m(void);
};

extern "C" {
int func_003CCCD0(char *p0) {
    int v0;
    int v1;
    char *v2;
    int v3;
    *(float *)(p0 + 176) = *(float *)(*(char **)(p0 + 172) + 0);
    v2 = p0;
    ((V9C_0_v *)p0)->m();
    v3 = ((V24_0_i *)*(char **)(v2 + 12))->m();
    v0 = (*(unsigned char *)(v2 + 180) + -22);
    switch (v0) {
    case 0:
        v3 = ((V108_0_i *)v2)->m();
        break;
    case 1:
        v3 = ((V10C_0_i *)v2)->m();
        break;
    case 2:
        v3 = ((V110_0_i *)v2)->m();
        break;
    case 3:
        v3 = ((V114_0_i *)v2)->m();
        break;
    case 4:
        v3 = ((V118_0_i *)v2)->m();
        break;
    case 5:
        v3 = ((V11C_0_i *)v2)->m();
        break;
    case 6:
        v3 = ((V120_0_i *)v2)->m();
        break;
    }
    return v3;
}
}

class V10_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(void);
};

class VA4_1_iv {
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
    virtual void m(int);
};

class VB0_0_v {
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
    virtual void m(void);
};

class VB4_1_ii {
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
    virtual int m(int);
};

extern "C" {
void func_003CCF70(char *p0, int p1) {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    v0 = (char *)p1;
    v1 = *(unsigned char *)(p0 + 29);
    if (v1 != 3) {
        v2 = p0;
        ((VA4_1_iv *)p0)->m(v1);
        ((VB0_0_v *)v2)->m();
        *(char *)(v2 + 60) = *(signed char *)(v0 + 0);
        *(char *)(v2 + 61) = *(signed char *)(v0 + 1);
        *(char *)(v2 + 62) = *(signed char *)(v0 + 2);
        *(float *)(v2 + 64) = *(float *)(v0 + 4);
        *(float *)(v2 + 68) = *(float *)(v0 + 8);
        *(float *)(v2 + 72) = *(float *)(v0 + 12);
        *(float *)(v2 + 76) = *(float *)(v0 + 16);
        *(float *)(v2 + 80) = *(float *)(v0 + 20);
        *(char *)(v2 + 84) = *(signed char *)(v0 + 24);
        *(float *)(v2 + 88) = *(float *)(v0 + 28);
        *(char *)(v2 + 92) = *(signed char *)(v0 + 32);
        *(float *)(v2 + 96) = *(float *)(v0 + 36);
        *(float *)(v2 + 100) = *(float *)(v0 + 40);
        *(float *)(v2 + 104) = *(float *)(v0 + 44);
        *(char *)(v2 + 108) = *(unsigned char *)(v0 + 48);
        *(int *)(v2 + 112) = *(int *)(v0 + 52);
        *(float *)(v2 + 116) = *(float *)(v0 + 56);
        *(char *)(v2 + 120) = *(signed char *)(v0 + 60);
        *(char *)(v2 + 121) = *(signed char *)(v0 + 61);
        *(char *)(v2 + 122) = *(signed char *)(v0 + 62);
        v4 = ((V10_0_i *)*(char **)(v2 + 12))->m();
        v3 = (v4 & 255);
        switch (v3) {
        case 0:
            v4 = ((VB4_1_ii *)v2)->m(28);
            break;
        case 1:
            v4 = ((VB4_1_ii *)v2)->m(28);
            break;
        }
        *(char *)(v2 + 29) = 3;
    }
}
}

class V10_0_v {
public:
    virtual void d0();
    virtual void d1();
    virtual void m(void);
};

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

class V4C_1_ii {
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
    virtual int m(int);
};

class VB4_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_003CD0E0(char *p0, char *p1) {
    char *v0;
    int v1;
    int tmp21;
    v0 = p0;
    if (*(unsigned char *)(p0 + 29) != 3) {
        *(char *)(v0 + 60) = *(signed char *)(p1 + 0);
        *(char *)(v0 + 61) = *(signed char *)(p1 + 1);
        *(char *)(v0 + 62) = *(signed char *)(p1 + 2);
        *(float *)(v0 + 64) = *(float *)(p1 + 4);
        *(float *)(v0 + 68) = *(float *)(p1 + 8);
        *(float *)(v0 + 72) = *(float *)(p1 + 12);
        *(float *)(v0 + 76) = *(float *)(p1 + 16);
        *(float *)(v0 + 80) = *(float *)(p1 + 20);
        *(char *)(v0 + 84) = *(signed char *)(p1 + 24);
        *(float *)(v0 + 88) = *(float *)(p1 + 28);
        *(char *)(v0 + 92) = *(signed char *)(p1 + 32);
        *(float *)(v0 + 96) = *(float *)(p1 + 36);
        *(float *)(v0 + 100) = *(float *)(p1 + 40);
        *(float *)(v0 + 104) = *(float *)(p1 + 44);
        *(char *)(v0 + 108) = *(unsigned char *)(p1 + 48);
        *(int *)(v0 + 112) = *(int *)(p1 + 52);
        *(float *)(v0 + 116) = *(float *)(p1 + 56);
        *(char *)(v0 + 120) = *(signed char *)(p1 + 60);
        *(char *)(v0 + 121) = *(signed char *)(p1 + 61);
        *(char *)(v0 + 122) = *(signed char *)(p1 + 62);
        tmp21 = ((V14_0_i *)*(char **)(v0 + 12))->m();
        if ((tmp21 & 255) == 1) {
            ((VB4_1_iv *)v0)->m(16);
        }
        ((V10_0_v *)*(char **)(v0 + 12))->m();
        v1 = ((V4C_1_ii *)*(char **)(v0 + 168))->m(1);
    }
    return v1;
}
}

class V28_1_iv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void m(int);
};

class VC_0_i {
public:
    virtual void d0();
    virtual int m(void);
};

extern "C" {
void func_003CD510(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(0);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 0) {
            v2 = ((VB4_1_ii *)v0)->m(24);
        }
        return;
    }
}
}

class V28_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual int m(int);
};

extern "C" {
int func_003CD5A0(char *p0) {
    char *v1;
    int v2;
    int v0;
    v0 = *(unsigned char *)(p0 + 181);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = ((V28_1_ii *)*(char **)(v1 + 12))->m(1);
        *(char *)(v1 + 181) = 1;
        /* fall through */
    case 1:
        if (*(unsigned char *)(v1 + 28) == 1) {
            v2 = ((VB4_1_ii *)v1)->m(22);
        }
        break;
    }
    return v2;
}
}

class V104_1_fi {
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
    virtual int m(float);
};

class V34_0_i {
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
    virtual int m(void);
};

class V84_0_v {
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
    virtual void m(void);
};

class V88_0_i {
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
    virtual int m(void);
};

class VA0_0_v {
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
    virtual void m(void);
};

extern "C" {
void func_003CD630(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp2;
    int tmp4;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(2);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        ((V84_0_v *)v0)->m();
        tmp2 = ((V34_0_i *)*(char **)(v0 + 168))->m();
        if (tmp2 != 0) {
            tmp4 = ((VC_0_i *)*(char **)(v0 + 12))->m();
            if (tmp4 != 3) {
                ((VB4_1_iv *)v0)->m(26);
            }
        }
        ((VA0_0_v *)v0)->m();
        v2 = ((V88_0_i *)v0)->m();
        if (v2 != 0) {
            v2 = ((V104_1_fi *)v0)->m(3.0f);
        }
        return;
    }
}
}

extern "C" {
void func_003CD730(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(3);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        ((V84_0_v *)v0)->m();
        tmp2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (tmp2 != 3) {
            ((VB4_1_iv *)v0)->m(22);
        }
        ((VA0_0_v *)v0)->m();
        v2 = ((V88_0_i *)v0)->m();
        if (v2 != 0) {
            v2 = ((V104_1_fi *)v0)->m(3.0f);
        }
        return;
    }
}
}

extern "C" {
void func_003CD820(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    tmp0 = 3;
    if (v1 != tmp0) {
        switch (v1) {
        case 0:
            ((V28_1_iv *)*(char **)(v0 + 12))->m(6);
            *(char *)(v0 + 181) = 1;
            /* fall through */
        case 1:
            v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
            if (v2 != 6) {
                v2 = ((V28_1_ii *)*(char **)(v0 + 12))->m(5);
                *(char *)(v0 + 181) = 2;
            }
            break;
        case 2:
            v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
            if (v2 != 5) {
                v2 = ((VB4_1_ii *)v0)->m(22);
            }
            break;
        }
    } else {
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 7) {
            v2 = ((VB4_1_ii *)v0)->m(22);
        }
    }
}
}

extern "C" {
void func_003CD950(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(8);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        return;
    }
}
}

extern "C" {
void func_003CD9D0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(9);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        return;
    }
}
}

extern "C" {
extern char D_01DF5D20[];
}

class V12C_0_i {
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
    virtual int m(void);
};

class V134_0_i {
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
    virtual int m(void);
};

class V13C_0_i {
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
    virtual int m(void);
};

class V144_0_i {
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
    virtual int m(void);
};

class V14C_0_i {
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
    virtual int m(void);
};

class V154_0_i {
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
    virtual int m(void);
};

class V15C_0_i {
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
    virtual int m(void);
};

class V164_0_i {
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
    virtual int m(void);
};

class V16C_0_i {
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
    virtual int m(void);
};

class V174_0_i {
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
    virtual int m(void);
};

class V20_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual int m(void);
};

extern "C" {
int func_003CDA50(char *p0) {
    float v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    v0 = *(float *)(p0 + 264);
    v1 = p0;
    if (v0 > 0.0f) {
        *(float *)(v1 + 264) = (v0 - *(float *)D_01DF5D20);
    } else {
        v2 = ((V20_0_i *)*(char **)(v1 + 168))->m();
        v3 = *(unsigned char *)(v1 + 204);
        switch (v3) {
        case 0:
            v2 = ((V12C_0_i *)v1)->m();
            break;
        case 1:
            v2 = ((V134_0_i *)v1)->m();
            break;
        case 2:
            v2 = ((V13C_0_i *)v1)->m();
            break;
        case 3:
            v2 = ((V144_0_i *)v1)->m();
            break;
        case 4:
            v2 = ((V14C_0_i *)v1)->m();
            break;
        case 5:
            v2 = ((V154_0_i *)v1)->m();
            break;
        case 6:
            v2 = ((V15C_0_i *)v1)->m();
            break;
        case 7:
            v2 = ((V164_0_i *)v1)->m();
            break;
        case 8:
            v2 = ((V16C_0_i *)v1)->m();
            break;
        case 9:
            v2 = ((V174_0_i *)v1)->m();
            break;
        }
    }
    return v2;
}
}

class V128_0_i {
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
    virtual int m(void);
};

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

class V138_0_i {
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
    virtual int m(void);
};

class V140_0_i {
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
    virtual int m(void);
};

class V148_0_i {
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
    virtual int m(void);
};

class V150_0_i {
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
    virtual int m(void);
};

class V158_0_i {
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
    virtual int m(void);
};

class V160_0_i {
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
    virtual int m(void);
};

class V168_0_i {
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
    virtual int m(void);
};

class V170_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_003CDBC0(char *p0, int p1) {
    int v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp6;
    int tmp7;
    int tmp8;
    *(char *)(p0 + 204) = p1;
    v0 = *(unsigned char *)(p0 + 204);
    switch (v0) {
    case 0:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp0 = ((V128_0_i *)p0)->m();
        return tmp0;
    case 1:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp1 = ((V130_0_i *)p0)->m();
        return tmp1;
    case 2:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp2 = ((V138_0_i *)p0)->m();
        return tmp2;
    case 3:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp3 = ((V140_0_i *)p0)->m();
        return tmp3;
    case 4:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp4 = ((V148_0_i *)p0)->m();
        return tmp4;
    case 5:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp5 = ((V150_0_i *)p0)->m();
        return tmp5;
    case 6:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp6 = ((V158_0_i *)p0)->m();
        return tmp6;
    case 7:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp7 = ((V160_0_i *)p0)->m();
        return tmp7;
    case 8:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        tmp8 = ((V168_0_i *)p0)->m();
        return tmp8;
    case 9:
        *(char *)(p0 + 208) = 0;
        *(char *)(p0 + 209) = 0;
        v2 = ((V170_0_i *)p0)->m();
        /* fall through */
    default:
        return v2;
    }
}
}

class V18_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(int);
};

class V18_1_iv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m(int);
};

class V48_2_iii {
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
    virtual int m(int, int);
};

class V48_2_iiv {
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
    virtual void m(int, int);
};

extern "C" {
int func_003CDDA0(char *p0) {
    int v0;
    char *v1;
    int v2;
    int tmp7;
    int tmp9;
    *(char *)(p0 + 205) = 0;
    v1 = p0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(900, (*(int *)(p0 + 16) + 16));
    v0 = *(unsigned short *)(*(char **)(v1 + 4) + 34);
    switch (v0) {
    default:
        ((V18_1_iv *)*(char **)(v1 + 168))->m(5);
        tmp7 = ((V48_2_iii *)*(char **)(v1 + 168))->m(6, (*(int *)(v1 + 16) + 16));
        return tmp7;
    case 99:
        tmp9 = ((V18_1_ii *)*(char **)(v1 + 168))->m(5);
        return tmp9;
    case 24:
        v2 = ((V170_0_i *)v1)->m();
        return v2;
    }
}
}

extern "C" {
int func_003CE370(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(0);
    *(int *)(p0 + 272) = 0;
    return tmp1;
}
}

class V2C_0_i {
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
    virtual int m(void);
};

class VE8_1_iv {
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
    virtual void m(int);
};

extern "C" {
int func_003CE5D0(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VE8_1_iv *)v0)->m(1);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_003CE640(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp3;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(4);
    tmp3 = func_00330BD0(D_01DFABA0, 77, (*(int *)(p0 + 16) + 16), 0, 0);
    return tmp3;
}
}

extern "C" {
int func_003CE6A0(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VE8_1_iv *)v0)->m(1);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_003CE710(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(3);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_003CEA80(char *p0) {
    int tmp4;
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(2000, (*(int *)(p0 + 16) + 16));
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp4 = ((V18_1_ii *)*(char **)(p0 + 168))->m(2);
    return tmp4;
}
}

extern "C" {
int func_003CEAE0(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VE8_1_iv *)v0)->m(1);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_003CEB50(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp13;
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(2001, (*(int *)(p0 + 16) + 16));
    ((V18_1_iv *)*(char **)(p0 + 168))->m(1003);
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(10);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(901, (*(int *)(p0 + 16) + 16));
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(995, (*(int *)(p0 + 16) + 16));
    tmp13 = func_00330BD0(D_01DFABA0, 28, (*(int *)(p0 + 16) + 16), 0, 0);
    return tmp13;
}
}

extern "C" {
int func_003CEC20(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    v1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (v1 == 0) {
        v1 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    }
    return v1;
}
}

extern "C" {
int func_003CEC70(char *p0) {
    int tmp4;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(900, (*(int *)(p0 + 16) + 16));
    tmp4 = ((V18_1_ii *)*(char **)(p0 + 168))->m(5);
    *(int *)(p0 + 212) = 0;
    return tmp4;
}
}

extern "C" {
int func_003305E0(char *, int, int, int, int, int, int);
}

extern "C" {
int func_003CD250(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    extern char D_01DFABA0[];
    int tmp5;
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(5000, (*(int *)(p0 + 16) + 16));
    tmp5 = func_003305E0(D_01DFABA0, 0, 90, (*(int *)(p0 + 16) + 16), 0, 0, 0);
    return tmp5;
}
}

extern "C" {
int func_003CD2C0(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    extern char D_01DFABA0[];
    int tmp5;
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(5001, (*(int *)(p0 + 16) + 16));
    tmp5 = func_003305E0(D_01DFABA0, 0, 92, (*(int *)(p0 + 16) + 16), 0, 0, 0);
    return tmp5;
}
}

class A3CE {
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
    virtual int m78(short, short);
};

class B3CE {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual int m24();
};

#define ANG3CE (*(short *)(*(char **)(p + 0x10) + 0x50))

static inline void turn3CE(char *p, int k) {
    short d = (short)((short)((A3CE *)p)->m78(*(short *)(p + 0x30), ANG3CE) + k);
    if (d > 182) d = 182;
    if (d < -181) d = -181;
    ANG3CE += (float)d * *(float *)(p + 0xB0);
}

extern "C" int func_003CE020(char *p) {
    ((A3CE *)p)->m6C();
    ((A3CE *)p)->m70();
    ((A3CE *)p)->m74();
    switch (*(unsigned char *)(p + 0x10C)) {
    case 0:
        if (*(float *)(p + 0x34) < 550.0f) turn3CE(p, 0x471C);
        if (*(float *)(p + 0x34) > 650.0f) turn3CE(p, 0x2AAB);
        break;
    case 1:
        if (*(float *)(p + 0x34) < 550.0f) turn3CE(p, -0x471C);
        if (*(float *)(p + 0x34) > 650.0f) turn3CE(p, -0x2AAB);
        break;
    }
    return ((B3CE *)*(char **)(p + 0xA8))->m24();
}
