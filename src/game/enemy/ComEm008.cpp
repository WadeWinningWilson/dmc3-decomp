#include "game/mt_rand.h"
class V18_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual int m(int);
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

class V28_0_f {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m(void);
};

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

class V6C_0_v {
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
    virtual void m(void);
};

class V70_0_v {
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
    virtual void m(void);
};

class V78_2_iii {
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
    virtual int m(int, int);
};

class VEC_1_iv {
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
    virtual void m(int);
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
void func_00463640(char *p0) {
    extern char D_00555080[];
    extern char D_00555084[];
    extern char D_00555088[];
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    float v5;
    float v6;
    float tmp4;
    float tmp6;
    int tmp10;
    float tmp14;
    float tmp16;
    float tmp18;
    int tmp20;
    int tmp30;
    int tmp35;
    v0 = p0;
    v1 = *(int *)(p0 + 212);
    switch (v1) {
    case 0:
        ((V48_2_iiv *)*(char **)(v0 + 168))->m(905, (*(int *)(v0 + 16) + 16));
        tmp4 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp4 >= *(float *)D_00555080) {
            tmp6 = ((V28_0_f *)*(char **)(v0 + 168))->m();
            if (tmp6 <= *(float *)D_00555084) {
                ((V6C_0_v *)v0)->m();
                ((V70_0_v *)v0)->m();
                tmp10 = ((V78_2_iii *)v0)->m(*(short *)(v0 + 48), *(short *)(*(char **)(v0 + 16) + 80));
                v3 = (short)tmp10;
                v4 = ((short)(int)(0.5f + ((65536.0f * *(float *)D_00555088) / 360.0f)) & 65535);
                v5 = ((float)v4 * *(float *)(v0 + 176));
                if ((float)v3 > v5) {
                    *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) + v5);
                }
                v6 = ((float)v4 * *(float *)(v0 + 176));
                if ((float)v3 < -v6) {
                    *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) - v6);
                }
            }
        }
        tmp14 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp14 >= 35.0f) {
            *(char *)(v0 + 208) = 4;
        }
        tmp16 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp16 >= 65.0f) {
            *(char *)(v0 + 208) = 0;
        }
        tmp18 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp18 >= 77.0f) {
            tmp20 = ((V18_1_ii *)*(char **)(v0 + 168))->m(101);
            *(int *)(*(char **)(v0 + 16) + 32) = 0;
            *(int *)(*(char **)(v0 + 16) + 36) = 0;
            *(int *)(*(char **)(v0 + 16) + 40) = 0;
            *(int *)(*(char **)(v0 + 16) + 44) = 0x3f800000;
            *(int *)(*(char **)(v0 + 16) + 48) = 0;
            *(int *)(*(char **)(v0 + 16) + 52) = 0;
            *(int *)(*(char **)(v0 + 16) + 56) = 0;
            *(int *)(*(char **)(v0 + 16) + 60) = 0x3f800000;
            *(int *)(v0 + 212) = 1;
            return;
        } else {
            tmp30 = ((V24_0_i *)*(char **)(v0 + 168))->m();
            return;
        }
        break;
    case 1:
        ((V48_2_iiv *)*(char **)(v0 + 168))->m(905, (*(int *)(v0 + 16) + 16));
        tmp35 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp35 != 0) {
            ((VEC_1_iv *)v0)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        break;
    }
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

class ObjV {
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
    virtual void d27();
    virtual int m78(int, int);
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
    virtual int mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};

extern "C" void func_00468D50(char *p) {
    Anim *a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        a = *(Anim **)(p + 0xA8);
        if (!(a->m28() < *(float *)(p + 0x104))) {
            p[0xCF] = 2;
            (*(Anim **)(p + 0xA8))->m1C(0x15);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim **)(p + 0xA8))->m24();
        break;
    case 1:
        if ((*(Anim **)(p + 0xA8))->m2C()) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim **)(p + 0xA8))->m24();
        break;
    }
}

/* Turn-toward that fires event 0xE once the animation passes frame 30. */
class Anim3 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual float m28();
};

extern "C" void func_00460690(char *p) {
    short d;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x200) {
        d = 0x200;
    }
    if (d < -0x200) {
        d = -0x200;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim3 **)(p + 0xA8))->m28() >= 30.0f) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim3 **)(p + 0xA8))->m24();
        break;
    }
}

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

extern "C" void func_00460560(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 3;
    p[0xCF] = 2;
    (*(Anim4 **)(p + 0xA8))->m40();
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 0xA8))->m1C(0);
        break;
    case 1:
        (*(Anim4 **)(p + 0xA8))->m1C(1);
        break;
    }
    *(int *)(p + 0xD4) = 0;
}

extern "C" void func_004655E0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 1;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0xB);
    *(float *)(p + 0x100) = 60.0f * (0.5f + 1.5f * (2.3283064e-10f * mt_rand()));
    *(int *)(p + 0x110) = 0;
}

class Sub0C {
public:
    virtual void d0();
    virtual int m0C();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void m28(int);
};

class ObjB4 {
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
    virtual void mB4(int);
};

/* Random taunt: one of two animations, then a common follow-up, then back to state 0x17. */
extern "C" void func_0045E650(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        p[0xB5] = 1;
    case 1:
        if (2.3283064e-10f * mt_rand() < 0.5f) {
            (*(Sub0C **)(p + 0xC))->m28(0x45);
            p[0xB5] = 6;
        } else {
            (*(Sub0C **)(p + 0xC))->m28(0x46);
            p[0xB5] = 7;
        }
        break;
    case 6:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x45) {
            (*(Sub0C **)(p + 0xC))->m28(0x49);
            p[0xB5] = 8;
        }
        break;
    case 7:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x46) {
            (*(Sub0C **)(p + 0xC))->m28(0x49);
            p[0xB5] = 8;
        }
        break;
    case 8:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x49) {
            ((ObjB4 *)p)->mB4(0x17);
        }
        break;
    }
}

extern "C" void func_0045D990(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        (*(Sub0C **)(p + 0xC))->m28(0x48);
        p[0xB5] = 1;
        break;
    case 1:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x48) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Sub0C **)(p + 0xC))->m28(0x45);
                p[0xB5] = 6;
            } else {
                (*(Sub0C **)(p + 0xC))->m28(0x46);
                p[0xB5] = 7;
            }
        }
        break;
    case 6:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x45) {
            (*(Sub0C **)(p + 0xC))->m28(0x49);
            p[0xB5] = 8;
        }
        break;
    case 7:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x46) {
            (*(Sub0C **)(p + 0xC))->m28(0x49);
            p[0xB5] = 8;
        }
        break;
    case 8:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x49) {
            ((ObjB4 *)p)->mB4(0x17);
        }
        break;
    }
}

class ObjTurn {
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
    virtual void d27();
    virtual int m78(int, int);
};

class Obj24 {
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

extern "C" int func_00463510(ObjTurn *o) {
    char *p = (char *)o;
    int d;
    o->m6C();
    o->m70();
    d = (short)o->m78(*(short *)(p + 48), *(short *)(*(char **)(p + 16) + 80));
    d = d > 256 ? 256 : d;
    d = (short)d < -256 ? -256 : d;
    *(short *)(*(char **)(p + 16) + 80) = (int)((float)*(short *)(*(char **)(p + 16) + 80) + (float)d * *(float *)(p + 176));
    return (*(Obj24 **)(p + 168))->m24();
}

extern "C" int func_00466230(ObjTurn *o) {
    char *p = (char *)o;
    int d;
    o->m6C();
    o->m70();
    d = (short)o->m78(*(short *)(p + 48), *(short *)(*(char **)(p + 16) + 80));
    d = d > 256 ? 256 : d;
    d = (short)d < -256 ? -256 : d;
    *(short *)(*(char **)(p + 16) + 80) = (int)((float)*(short *)(*(char **)(p + 16) + 80) + (float)d * *(float *)(p + 176));
    return (*(Obj24 **)(p + 168))->m24();
}

class ObjTurn2 {
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
    virtual void d27();
    virtual int m78(int, int);
    virtual void e29();
    virtual void e30();
    virtual void e31();
    virtual void e32();
    virtual void e33();
    virtual void e34();
    virtual void e35();
    virtual void e36();
    virtual void e37();
    virtual void e38();
    virtual void e39();
    virtual void e40();
    virtual void e41();
    virtual void e42();
    virtual void e43();
    virtual void e44();
    virtual void e45();
    virtual void e46();
    virtual void e47();
    virtual void e48();
    virtual void e49();
    virtual void e50();
    virtual void e51();
    virtual void e52();
    virtual void e53();
    virtual void e54();
    virtual void e55();
    virtual void e56();
    virtual void mEC(int);
};

class Obj24b {
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

extern "C" int func_00465710(ObjTurn2 *o) {
    char *p = (char *)o;
    int d;
    o->m6C();
    o->m70();
    d = (short)o->m78(*(short *)(p + 48), *(short *)(*(char **)(p + 16) + 80));
    d = d > 2048 ? 2048 : d;
    d = (short)d < -2048 ? -2048 : d;
    *(short *)(*(char **)(p + 16) + 80) = (int)((float)*(short *)(*(char **)(p + 16) + 80) + (float)d * *(float *)(p + 176));
    *(float *)(p + 256) -= *(float *)(p + 176);
    if (*(float *)(p + 256) < 0.0f) {
        o->mEC(29);
    }
    return (*(Obj24b **)(p + 168))->m24();
}

class Anim5 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void m40();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" {
/* Wait for the clip to pass 180, then switch motion and play a sound once; afterwards keep re-triggering. */
void func_0046B4B0(char *p) {
    extern char D_01DFABA0[];
    extern void func_00330BD0(char *, int, char *, int, int);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim5 **)(p + 0xA8))->m28() < 180.0f)) {
            (*(Anim5 **)(p + 0xA8))->m40();
            (*(Anim5 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim5 **)(p + 0xA8))->m24();
        break;
    case 1:
        (*(Anim5 **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}
}

extern "C" void func_0046E3A0(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim5 **)(p + 0xA8))->m28() < 70.0f)) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim5 **)(p + 0xA8))->m24();
    }
}

class Anim8 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual void d8();
    virtual int m2C();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void m40();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" {
void func_0046B130(char *p) {
    extern char D_01DFABA0[];
    extern void func_00330BD0(char *, int, char *, int, int);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim8 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim8 **)(p + 0xA8))->m40();
            (*(Anim8 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim8 **)(p + 0xA8))->m24();
        break;
    case 1:
        (*(Anim8 **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}
}

class ObjE4 {
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
    virtual void mE4(char *, char *, char *, char *);
};

extern "C" {
void func_0046D5E0(char *p) {
    extern char D_01DFABA0[];
    extern void func_00330BD0(char *, int, char *, int, int);
    *(unsigned char *)(p + 0xCD) = 1;
    *(unsigned char *)(p + 0xCE) = 4;
    *(unsigned char *)(p + 0xCF) = 1;
    (*(Anim8 **)(p + 0xA8))->m40();
    (*(Anim8 **)(p + 0xA8))->m48(0x1F, *(char **)(p + 0x10) + 0x10);
    func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
    (*(Anim8 **)(p + 0xA8))->m48(0x2C, *(char **)(p + 0x10) + 0x10);
    func_00330BD0(D_01DFABA0, 0x23, *(char **)(p + 0x10) + 0x10, 8, 0);
    *(int *)(p + 0xE0) = 0;
    *(int *)(p + 0xE4) = 0;
    *(int *)(p + 0xE8) = 0;
    *(int *)(p + 0xEC) = 0;
    *(int *)(p + 0xF0) = 0;
    *(int *)(p + 0xF4) = 0;
    *(int *)(p + 0xF8) = 0;
    *(int *)(p + 0xFC) = 0;
    ((ObjE4 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
    *(int *)(p + 0x100) = 0;
    *(int *)(p + 0xD4) = 10;
}
}

class AnimH {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" {
void func_0046E210(char *p) {
    extern void func_00330BD0(char *, int, char *, int, int);
    extern char D_01DFABA0[];
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(AnimH **)(p + 0xA8))->m28() < 230.0f)) {
            (*(AnimH **)(p + 0xA8))->m48(0x1F, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(AnimH **)(p + 0xA8))->m24();
        break;
    case 1:
        if ((*(AnimH **)(p + 0xA8))->m2C() != 0) {
            *(int *)(p + 0xD4) = 2;
        }
        (*(AnimH **)(p + 0xA8))->m24();
        break;
    case 2:
        (*(AnimH **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}
}

class Anim6 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(int);
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void m40();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" {
void func_00466460(char *p) {
    extern void func_00330BD0(char *, int, char *, int, int);
    extern char D_01DFABA0[];
    *(unsigned char *)(p + 0xCD) = 1;
    *(unsigned char *)(p + 0xCE) = 3;
    *(unsigned char *)(p + 0xCF) = 0;
    (*(Anim6 **)(p + 0xA8))->m48(0x385, *(char **)(p + 0x10) + 0x10);
    switch (*(int *)(*(char **)(p + 4) + 0x28)) {
    case 0:
        break;
    case 1:
        (*(Anim6 **)(p + 0xA8))->m48(0x3E2, *(char **)(p + 0x10) + 0x10);
        break;
    }
    (*(Anim6 **)(p + 0xA8))->m48(0x3E7, *(char **)(p + 0x10) + 0x10);
    func_00330BD0(D_01DFABA0, 0x1C, *(char **)(p + 0x10) + 0x10, 8, 0);
    *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x30) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x34) = -0.7f;
    *(float *)(*(char **)(p + 0x10) + 0x38) = 0.0f;
    *(float *)(p + 0xE0) = 0.0f;
    *(float *)(p + 0xE4) = 0.0f;
    *(float *)(p + 0xE8) = 0.0f;
    *(float *)(p + 0xEC) = 0.0f;
    *(float *)(p + 0xF0) = 0.0f;
    *(float *)(p + 0xF4) = -0.7f;
    *(float *)(p + 0xF8) = 0.0f;
    *(float *)(p + 0xFC) = 0.0f;
    ((ObjE4 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
    *(int *)(p + 0xD4) = 0;
}
}

class ObjC0C {
public:
    virtual void d0();
    virtual int mC();
};

extern "C" unsigned char func_0045AF80(char *p, signed char k) {
    if (*(unsigned char *)(p + 0x1D) == 3) {
        return 0;
    }
    switch (k) {
    case 0:
        if ((*(ObjC0C **)(p + 0xC))->mC() == 0x2C) {
            return 1;
        }
        if ((*(ObjC0C **)(p + 0xC))->mC() == 0x2D) {
            return 1;
        }
        if ((*(ObjC0C **)(p + 0xC))->mC() == 0x2E) {
            return 1;
        }
        if ((*(ObjC0C **)(p + 0xC))->mC() == 0x2F) {
            return 1;
        }
        break;
    case 2:
        if ((*(ObjC0C **)(p + 0xC))->mC() == 0x30) {
            return 1;
        }
        if ((*(ObjC0C **)(p + 0xC))->mC() == 0x31) {
            return 1;
        }
        break;
    }
    return 0;
}

class Obj28C {
public:
    virtual void d0();
    virtual int mC();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void m28(int);
};

class SelfB4 {
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
    virtual short m78(short, short);
    virtual void d29();
    virtual void d30();
    virtual void m84();
    virtual int m88();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void d36();
    virtual void d37();
    virtual int mA0();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void mB4(int);
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
    virtual void m108(float);
};

extern "C" void func_0045C050(char *p) {
    short a;
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        (*(Obj28C **)(p + 0xC))->m28(0x27);
        *(unsigned char *)(p + 0xB5) = 1;
    case 1:
        ((SelfB4 *)p)->m84();
        if ((*(Obj28C **)(p + 0xC))->mC() != 0x27) {
            a = ((SelfB4 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            if (a > -0x2AAB && a <= 0x2AAA) {
                if (((SelfB4 *)p)->mA0() != 0) {
                    ((SelfB4 *)p)->mB4(0x28);
                } else if (((SelfB4 *)p)->m88() != 0) {
                    ((SelfB4 *)p)->m108(3.0f);
                } else {
                    ((SelfB4 *)p)->mB4(0x17);
                }
            } else {
                ((SelfB4 *)p)->mB4(0x17);
            }
        }
    }
}

class AnimJ {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void m40();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" {
void func_0046B2A0(char *p) {
    extern void func_00330BD0(char *, int, char *, int, int);
    extern char D_01DFABA0[];
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(AnimJ **)(p + 0xA8))->m2C() != 0) {
            (*(AnimJ **)(p + 0xA8))->m18(0x52);
            (*(AnimJ **)(p + 0xA8))->m48(0x3E4, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 1;
        }
        (*(AnimJ **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(AnimJ **)(p + 0xA8))->m28() < 76.0f)) {
            (*(AnimJ **)(p + 0xA8))->m40();
            (*(AnimJ **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 2;
        }
        (*(AnimJ **)(p + 0xA8))->m24();
        break;
    case 2:
        (*(AnimJ **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}
}

class AnimK {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(int);
    virtual void d6();
    virtual void m24();
    virtual void d8();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void m44();
    virtual void m48(int, char *);
};

class ObjEC {
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};

extern "C" {
void func_00461B60(char *p) {
    extern void func_00330BD0(char *, int, char *, int, int);
    extern char D_01DFABA0[];
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(AnimK **)(p + 0xA8))->m30() != 0) {
            *(unsigned char *)(p + 0xCD) = 0;
            (*(AnimK **)(p + 0xA8))->m44();
            (*(AnimK **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 0.0f;
            *(float *)(p + 0xE8) = 0.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = 0.0f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((ObjEC *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        if ((*(AnimK **)(p + 0xA8))->m2C() != 0) {
            (*(AnimK **)(p + 0xA8))->m1C(6);
            (*(AnimK **)(p + 0xA8))->m44();
            *(int *)(p + 0xD4) = 2;
        }
        break;
    case 2:
        if ((*(AnimK **)(p + 0xA8))->m2C() != 0) {
            ((ObjEC *)p)->mEC(0xE);
        }
        (*(AnimK **)(p + 0xA8))->m24();
        break;
    }
}
}

class AnimBE {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void m1C(int);
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void m44();
    virtual void m48(int, char *);
};

static inline float frand() {
    return 2.3283064e-10f * (float)mt_rand();
}

class SelfBE {
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void dE8();
    virtual void mEC(int);
};

extern "C" {
void func_00461EC0(char *p) {
    extern void func_00330BD0(char *, int, char *, int, int);
    extern char D_01DFABA0[];
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (36.0f == (*(AnimBE **)(p + 0xA8))->m28()) {
            (*(AnimBE **)(p + 0xA8))->m1C(0x16);
        }
        if ((*(AnimBE **)(p + 0xA8))->m30() != 0) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCF) = 4;
            (*(AnimBE **)(p + 0xA8))->m1C(0xD);
            (*(AnimBE **)(p + 0xA8))->m44();
            (*(AnimBE **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            *(float *)(*(char **)(p + 0x10) + 0x34) = -1.0f;
        }
        ((SelfBE *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        break;
    case 1:
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            (*(AnimBE **)(p + 0xA8))->m1C(0x17);
            *(int *)(p + 0xD4) = 2;
            *(float *)(p + 0x104) = 45.0f + 45.0f * frand();
        }
        (*(AnimBE **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(AnimBE **)(p + 0xA8))->m28() < *(float *)(p + 0x104))) {
            *(unsigned char *)(p + 0xCF) = 2;
            (*(AnimBE **)(p + 0xA8))->m1C(6);
            *(int *)(p + 0xD4) = 3;
        }
        (*(AnimBE **)(p + 0xA8))->m24();
        break;
    case 3:
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            ((SelfBE *)p)->mEC(0xE);
        }
        (*(AnimBE **)(p + 0xA8))->m24();
        break;
    }
}
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" {
void func_00462380(char *p) {
    extern void func_00330BD0(char *, int, char *, int, int);
    extern char D_01DFABA0[];
    switch (*(int *)(p + 0xD4)) {
    case 0:
        QCOPY(*(char **)(p + 0x10) + 0x20, p + 0xE0);
        if (*(float *)(p + 0x100) < 0.0f) {
            *(int *)(p + 0xD4) = 1;
        }
        *(float *)(p + 0x100) = *(float *)(p + 0x100) - *(float *)(p + 0xB0);
        break;
    case 1:
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            (*(AnimBE **)(p + 0xA8))->m1C(0x16);
        }
        ((SelfBE *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if ((*(AnimBE **)(p + 0xA8))->m30() != 0) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCF) = 4;
            (*(AnimBE **)(p + 0xA8))->m1C(0xD);
            (*(AnimBE **)(p + 0xA8))->m44();
            (*(AnimBE **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 2;
        }
        break;
    case 2:
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            (*(AnimBE **)(p + 0xA8))->m1C(0x17);
            *(int *)(p + 0xD4) = 3;
            *(float *)(p + 0x104) = 45.0f + 45.0f * frand();
        }
        (*(AnimBE **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(AnimBE **)(p + 0xA8))->m28() < *(float *)(p + 0x104))) {
            (*(AnimBE **)(p + 0xA8))->m1C(6);
            *(int *)(p + 0xD4) = 4;
        }
        (*(AnimBE **)(p + 0xA8))->m24();
        break;
    case 4:
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            ((SelfBE *)p)->mEC(0xE);
        }
        (*(AnimBE **)(p + 0xA8))->m24();
        break;
    }
}
}

extern "C" {
void func_00461440(char *p) {
    extern void func_00330BD0(char *, int, char *, int, int);
    extern char D_01DFABA0[];
    switch (*(int *)(p + 0xD4)) {
    case 0:
        ((SelfBE *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if ((*(AnimBE **)(p + 0xA8))->m30() != 0) {
                *(unsigned char *)(p + 0xCD) = 0;
                *(unsigned char *)(p + 0xCF) = 1;
                (*(AnimBE **)(p + 0xA8))->m1C(0x11);
                (*(AnimBE **)(p + 0xA8))->m44();
                (*(AnimBE **)(p + 0xA8))->m48(0xB, *(char **)(p + 0x10) + 0x10);
                *(float *)(p + 0xE0) = 0.0f;
                *(float *)(p + 0xE4) = 6.0f;
                *(float *)(p + 0xE8) = 20.0f;
                *(float *)(p + 0xEC) = 1.0f;
                *(float *)(p + 0xF0) = 0.0f;
                *(float *)(p + 0xF4) = -0.54f;
                *(float *)(p + 0xF8) = 0.0f;
                *(float *)(p + 0xFC) = 1.0f;
                ((SelfBE *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
                func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 8, 0);
                *(int *)(p + 0xD4) = 1;
            }
        }
        break;
    case 1:
        *(float *)(p + 0xE0) = *(float *)(p + 0xE0) - *(float *)(p + 0xE0) / 14.0f * *(float *)(p + 0xB0);
        *(float *)(p + 0xE8) = *(float *)(p + 0xE8) - *(float *)(p + 0xE8) / 14.0f * *(float *)(p + 0xB0);
        ((SelfBE *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if ((*(AnimBE **)(p + 0xA8))->m30() != 0) {
            (*(AnimBE **)(p + 0xA8))->m48(0x12, *(char **)(p + 0x10) + 0x10);
        }
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            *(unsigned char *)(p + 0xCF) = 5;
            (*(AnimBE **)(p + 0xA8))->m1C(0x18);
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 0.0f;
            *(float *)(p + 0xE8) = 0.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = 0.0f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((SelfBE *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            *(int *)(p + 0xD4) = 2;
            *(float *)(p + 0x104) = 45.0f + 45.0f * frand();
        }
        break;
    case 2:
        if (!((*(AnimBE **)(p + 0xA8))->m28() < *(float *)(p + 0x104))) {
            *(unsigned char *)(p + 0xCF) = 2;
            (*(AnimBE **)(p + 0xA8))->m1C(5);
            *(int *)(p + 0xD4) = 3;
        }
        break;
    case 3:
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            ((SelfBE *)p)->mEC(0xE);
        }
        (*(AnimBE **)(p + 0xA8))->m24();
        break;
    }
}
}

class HitRx {
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
    virtual void m68(char *, int);
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
    virtual void dB0();
    virtual void mB4(int);
};

static inline void hit_copy(char *p, char *h) {
    *(signed char *)(p + 0x3C) = *(signed char *)(h + 0);
    *(signed char *)(p + 0x3D) = *(signed char *)(h + 1);
    *(signed char *)(p + 0x3E) = *(signed char *)(h + 2);
    *(float *)(p + 0x40) = *(float *)(h + 4);
    *(float *)(p + 0x44) = *(float *)(h + 8);
    *(float *)(p + 0x48) = *(float *)(h + 0xC);
    *(float *)(p + 0x4C) = *(float *)(h + 0x10);
    *(float *)(p + 0x50) = *(float *)(h + 0x14);
    *(signed char *)(p + 0x54) = *(signed char *)(h + 0x18);
    *(float *)(p + 0x58) = *(float *)(h + 0x1C);
    *(signed char *)(p + 0x5C) = *(signed char *)(h + 0x20);
    *(float *)(p + 0x60) = *(float *)(h + 0x24);
    *(float *)(p + 0x64) = *(float *)(h + 0x28);
    *(float *)(p + 0x68) = *(float *)(h + 0x2C);
    *(unsigned char *)(p + 0x6C) = *(unsigned char *)(h + 0x30);
    *(int *)(p + 0x70) = *(int *)(h + 0x34);
    *(float *)(p + 0x74) = *(float *)(h + 0x38);
    *(signed char *)(p + 0x78) = *(signed char *)(h + 0x3C);
    *(signed char *)(p + 0x79) = *(signed char *)(h + 0x3D);
    *(signed char *)(p + 0x7A) = *(signed char *)(h + 0x3E);
}

extern "C" void func_0045AC70(char *p, char *h, int a) {
    if (*(unsigned char *)(p + 0x1D) != 3) {
        if (*(signed char *)(h + 2) == 1) {
            *(float *)(p + 0x38) = *(float *)(p + 0x38) + *(float *)(h + 4) / 2.0f;
        }
        hit_copy(p, h);
        ((HitRx *)p)->mB4(0x10);
        ((HitRx *)p)->m68(h, a);
    }
}

class StQ {
public:
    virtual void d8();
    virtual void dC();
    virtual int m10();
    virtual int m14();
    virtual int m18();
};

class AnimA8c {
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
    virtual void m4C(int);
};

extern "C" void func_0045A8E0(char *p, char *h, int a) {
    if (*(unsigned char *)(p + 0x1D) != 3) {
        if (*(signed char *)(h + 2) == 1) {
            *(float *)(p + 0x38) = *(float *)(p + 0x38) + *(float *)(h + 4) / 2.0f;
        }
        hit_copy(p, h);
        if ((unsigned char)(*(StQ **)(p + 0xC))->m14() == 1) {
            ((HitRx *)p)->mB4(0x10);
        }
        switch ((unsigned char)(*(StQ **)(p + 0xC))->m10()) {
        case 0:
            break;
        case 1:
            (*(StQ **)(p + 0xC))->m18();
            break;
        }
        ((HitRx *)p)->m68(h, a);
        switch (*(unsigned char *)(p + 0x10C)) {
        case 0:
            (*(AnimA8c **)(p + 0xA8))->m4C(0);
            break;
        case 1:
            (*(AnimA8c **)(p + 0xA8))->m4C(1);
            break;
        }
    }
}

extern "C" char D_01CAFF0C[];

class ObjSt1C {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual float m1C();
};

class ObjInit {
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
    virtual void d54(); virtual void d55(); virtual void d56(); virtual void mEC(int);
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

extern "C" void func_004599B0(char *p, int a2, char *a3, int a4, int a5, int a6, int a7, int a8, int a9) {
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
    *(unsigned char *)(p + 0x10C) = 0;
    *(unsigned char *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 0x1D) = 0;
    *(unsigned char *)(p + 0xCD) = 0;
    *(unsigned char *)(p + 0xCE) = 0;
    *(unsigned char *)(p + 0xCF) = 0;
    *(unsigned char *)(p + 0xD0) = 0;
    *(unsigned char *)(p + 0xD1) = 0;
    ((ObjInit *)p)->mEC(0xE);
    ((ObjInit *)p)->mB4(0xE);
    ((ObjInit *)p)->m98(*(int *)(a3 + 0x1C));
    *(int *)(p + 0x114) = 0;
}

extern "C" char D_005550BC[];

extern "C" char D_005550C0[];

extern "C" char D_005550C4[];

class V48_2_ipv {
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
    virtual void m(int, char *);
};

typedef struct { float f[3]; } F3_465;

extern "C" int func_00465EE0(char *p0) {
    char *v0;
    int v1;
    int v10;
    int v2;
    float v3;
    int v4;
    int v5;
    int v6;
    float v7;
    float v8;
    int v9;
    float tmp1;
    float tmp3;
    int tmp7;
    int tmp10;
    int tmp15;
    int tmp22;
    int tmp24;
    F3_465 a;
    F3_465 b;
    unsigned int n;
    float t;
    v0 = p0;
    tmp1 = ((V28_0_f *)*(char **)(p0 + 168))->m();
    if (tmp1 >= *(float *)D_005550BC) {
        tmp3 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp3 <= *(float *)D_005550C0) {
            ((V6C_0_v *)v0)->m();
            ((V70_0_v *)v0)->m();
            tmp7 = ((V78_2_iii *)v0)->m(*(short *)(v0 + 48), *(short *)(*(char **)(v0 + 16) + 80));
            v5 = (short)tmp7;
            v6 = ((short)(int)(0.5f + ((65536.0f * *(float *)D_005550C4) / 360.0f)) & 65535);
            v7 = ((float)v6 * *(float *)(v0 + 176));
            if ((float)v5 > v7) {
                *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) + v7);
            }
            v8 = ((float)v6 * *(float *)(v0 + 176));
            if ((float)v5 < -v8) {
                *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) - v8);
            }
        }
    }
    if ((*(int *)(v0 + 212))++ == 190) {
        ((V48_2_iiv *)*(char **)(v0 + 168))->m(1, (*(int *)(v0 + 16) + 16));
    }
    n = *(unsigned int *)(v0 + 212);
    if (n > 80 && n < 180) {
        t = (float)(n - 80);
        a.f[0] = 1.0f + t / 5.0f;
        a.f[2] = 1.0f + t / 5.0f;
        a.f[1] = 1.0f + t / 8.0f;
        ((V48_2_ipv *)*(char **)(v0 + 168))->m(2, (char *)&a);
    }
    if (*(unsigned int *)(v0 + 212) > 196) {
        b.f[0] = 1.0f;
        b.f[1] = 1.0f;
        b.f[2] = 1.0f;
        ((V48_2_ipv *)*(char **)(v0 + 168))->m(2, (char *)&b);
    }
    if (*(int *)(v0 + 212) == 204) {
        ((V48_2_iiv *)*(char **)(v0 + 168))->m(4, (*(int *)(v0 + 16) + 16));
    }
    tmp22 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
    if (tmp22 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp24 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp24;
}

class Snd45 {
public:
    virtual void d0();
    virtual int mC();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void m28(int);
};

class Self45 {
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
    virtual float m7C();
    virtual unsigned int m80(float);
    virtual void e31();
    virtual void e32();
    virtual void e33();
    virtual void e34();
    virtual void e35();
    virtual void e36();
    virtual void e37();
    virtual void e38();
    virtual void e39();
    virtual void e40();
    virtual void e41();
    virtual void e42();
    virtual void mB4(int);
};

extern "C" void func_0045CAD0(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        (*(Snd45 **)(p + 0xC))->m28(0x1E);
        *(unsigned char *)(p + 0xB5) = 1;
    case 1:
        if ((*(Snd45 **)(p + 0xC))->mC() != 0x1E) {
            switch (((Self45 *)p)->m80(((Self45 *)p)->m7C())) {
            case 0: case 1: case 2: case 3:
                ((Self45 *)p)->mB4(0x43);
                break;
            case 4:
                ((Self45 *)p)->mB4(0x44);
                break;
            case 5:
                ((Self45 *)p)->mB4(0x45);
                break;
            }
            return;
        }
        break;
    }
}

class Snd45b {
public:
    virtual void d0();
    virtual int mC();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void m28(int);
};

class Self45b {
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
    virtual float m7C();
    virtual unsigned int m80(float);
    virtual void e31();
    virtual void e32();
    virtual void e33();
    virtual void e34();
    virtual void e35();
    virtual void e36();
    virtual void e37();
    virtual void e38();
    virtual void e39();
    virtual void e40();
    virtual void e41();
    virtual void e42();
    virtual void mB4(int);
};

extern "C" void func_0045B520(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        (*(Snd45b **)(p + 0xC))->m28(1);
        *(unsigned char *)(p + 0xB5) = 1;
        break;
    case 1:
        if ((*(Snd45b **)(p + 0xC))->mC() != 1) {
            switch (((Self45b *)p)->m80(((Self45b *)p)->m7C())) {
            case 0: case 1:
                ((Self45b *)p)->mB4(0x39);
                break;
            case 2: case 3:
                ((Self45b *)p)->mB4(0x43);
                break;
            case 4:
                ((Self45b *)p)->mB4(0x44);
                break;
            case 5:
                ((Self45b *)p)->mB4(0x45);
                break;
            }
        }
        break;
    }
}

class Snd45c {
public:
    virtual void d0();
    virtual int mC();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void m28(int);
};

class Self45c {
public:
    virtual void z0();
    virtual void z1();
    virtual void z2();
    virtual void z3();
    virtual void z4();
    virtual void z5();
    virtual void z6();
    virtual void z7();
    virtual void z8();
    virtual void z9();
    virtual void z10();
    virtual void z11();
    virtual void z12();
    virtual void z13();
    virtual void z14();
    virtual void z15();
    virtual void z16();
    virtual void z17();
    virtual void z18();
    virtual void z19();
    virtual void z20();
    virtual void z21();
    virtual void z22();
    virtual void z23();
    virtual void z24();
    virtual void z25();
    virtual void z26();
    virtual void z27();
    virtual short m78(short, short);
    virtual float m7C();
    virtual unsigned int m80(float);
    virtual void m84();
    virtual int m88();
    virtual void z33();
    virtual void z34();
    virtual void z35();
    virtual void z36();
    virtual void z37();
    virtual int mA0();
    virtual void z39();
    virtual void z40();
    virtual void z41();
    virtual void z42();
    virtual void mB4(int);
    virtual void z44();
    virtual void z45();
    virtual void z46();
    virtual void z47();
    virtual void z48();
    virtual void z49();
    virtual void z50();
    virtual void z51();
    virtual void z52();
    virtual void z53();
    virtual void z54();
    virtual void z55();
    virtual void z56();
    virtual void z57();
    virtual void z58();
    virtual void z59();
    virtual void z60();
    virtual void z61();
    virtual void z62();
    virtual void z63();
    virtual void m108(float);
};

extern "C" void func_0045BE70(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        *(int *)(p + 0x114) = 0;
        (*(Snd45c **)(p + 0xC))->m28(0xF);
        *(unsigned char *)(p + 0xB5) = 1;
    case 1:
        ((Self45c *)p)->m84();
        if ((short)(((Self45c *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) + 0x4000) <= 0) {
            switch (((Self45c *)p)->m80(((Self45c *)p)->m7C())) {
            case 0: case 1:
                ((Self45c *)p)->mB4(0x39);
                break;
            case 2: case 3:
                ((Self45c *)p)->mB4(0x38);
                break;
            case 4:
                ((Self45c *)p)->mB4(0x3C);
                break;
            case 5:
                ((Self45c *)p)->mB4(0x3D);
                break;
            }
            return;
        }
        if (((Self45c *)p)->mA0()) {
            ((Self45c *)p)->mB4(0x28);
            return;
        }
        if (((Self45c *)p)->m88()) ((Self45c *)p)->m108(3.0f);
        break;
    }
}

class Anm45 {
public:
    virtual void d0();
    virtual int m0C();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void m28(int);
};

class Act45 {
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
    virtual void mB4(int);
};

extern "C" void func_0045DF60(Act45 *q) {
    char *p = (char *)q;
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        (*(Anm45 **)(p + 0xC))->m28(0x48);
        *(unsigned char *)(p + 0xB5) = 1;
        break;
    case 1:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x48) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 2;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 3;
            }
        }
        break;
    case 2:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x45) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 4;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 5;
            }
        }
        break;
    case 3:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x46) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 4;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 5;
            }
        }
        break;
    case 4:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x45) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 6;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 7;
            }
        }
        break;
    case 5:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x46) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 6;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 7;
            }
        }
        break;
    case 6:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x45) {
            (*(Anm45 **)(p + 0xC))->m28(0x49);
            *(unsigned char *)(p + 0xB5) = 8;
        }
        break;
    case 7:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x46) {
            (*(Anm45 **)(p + 0xC))->m28(0x49);
            *(unsigned char *)(p + 0xB5) = 8;
        }
        break;
    case 8:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x49) {
            q->mB4(0x17);
        }
        break;
    }
}

extern "C" void func_0045EB20(Act45 *q) {
    char *p = (char *)q;
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        *(unsigned char *)(p + 0xB5) = 1;
    case 1:
        if (2.3283064e-10f * mt_rand() < 0.5f) {
            (*(Anm45 **)(p + 0xC))->m28(0x45);
            *(unsigned char *)(p + 0xB5) = 2;
        } else {
            (*(Anm45 **)(p + 0xC))->m28(0x46);
            *(unsigned char *)(p + 0xB5) = 3;
        }
        break;
    case 2:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x45) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 4;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 5;
            }
        }
        break;
    case 3:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x46) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 4;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 5;
            }
        }
        break;
    case 4:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x45) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 6;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 7;
            }
        }
        break;
    case 5:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x46) {
            if (2.3283064e-10f * mt_rand() < 0.5f) {
                (*(Anm45 **)(p + 0xC))->m28(0x45);
                *(unsigned char *)(p + 0xB5) = 6;
            } else {
                (*(Anm45 **)(p + 0xC))->m28(0x46);
                *(unsigned char *)(p + 0xB5) = 7;
            }
        }
        break;
    case 6:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x45) {
            (*(Anm45 **)(p + 0xC))->m28(0x49);
            *(unsigned char *)(p + 0xB5) = 8;
        }
        break;
    case 7:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x46) {
            (*(Anm45 **)(p + 0xC))->m28(0x49);
            *(unsigned char *)(p + 0xB5) = 8;
        }
        break;
    case 8:
        if ((*(Anm45 **)(p + 0xC))->m0C() != 0x49) {
            q->mB4(0x17);
        }
        break;
    }
}

class Self362 {
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
    virtual short m78(int, int);
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};

class Ai362 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" float D_005550B0[];

extern "C" float D_005550B4[];

extern "C" float D_005550B8[];

static inline short deg362(float d) { return 0.5f + 65536.0f * d / 360.0f; }

#define M (*(char **)(p + 0x10))

#define ANG (*(short *)(M + 0x50))

#define F(o) (*(float *)(p + (o)))

#define SELF ((Self362 *)p)
#define AI (*(Ai362 **)(p + 0xA8))
#define ID()     *(float *)(M + 0x20) = 0.0f; *(float *)(M + 0x24) = 0.0f; *(float *)(M + 0x28) = 0.0f; *(float *)(M + 0x2C) = 1.0f;     *(float *)(M + 0x30) = 0.0f; *(float *)(M + 0x34) = 0.0f; *(float *)(M + 0x38) = 0.0f; *(float *)(M + 0x3C) = 1.0f;
extern "C" void func_00464120(char *p) {
    short s;
    short a;
    unsigned short u;
    float t;
    float x;
    if (!(AI->m28() < D_005550B0[0]) && AI->m28() <= D_005550B4[0]) {
        SELF->m6C();
        SELF->m70();
        s = SELF->m78(*(short *)(p + 0x30), ANG);
        a = deg362(D_005550B8[0]);
        u = a;
        t = (float)(int)u * F(0xB0);
        if (!((float)s <= t)) ANG = (float)ANG + t;
        t = (float)(int)u * F(0xB0);
        if ((float)s < -t) ANG = (float)ANG - t;
    }
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (AI->m2C()) {
            AI->m18(0x48);
            ID()
            SELF->m6C();
            SELF->m70();
            s = SELF->m78(*(short *)(p + 0x30), ANG);
            *(short *)(p + 0xC0) = s / 100;
            F(0xC4) = 10.0f;
            *(int *)(p + 0xD4) = 1;
        }
        AI->m24();
        break;
    case 1:
        t = F(0xB0);
        x = F(0xC4) - t;
        F(0xC4) = x;
        if (!(x <= 0.0f)) ANG += (float)*(short *)(p + 0xC0) * F(0xB0);
        if (!(AI->m28() < 9.0f)) {
            *(unsigned char *)(p + 0xCD) = 1;
            AI->m18(0x49);
            SELF->m6C();
            SELF->m74();
            t = (F(0x34) - 150.0f) / 44.0f;
            if (!(t <= 15.0f)) t = 15.0f;
            if (t < 8.0f) t = 8.0f;
            F(0xE0) = 0.0f;
            F(0xE4) = 33.0f;
            F(0xE8) = 8.0f;
            F(0xEC) = 1.0f;
            F(0xF0) = 0.0f;
            F(0xF4) = -1.5f;
            F(0xF8) = 0.0f;
            F(0xFC) = 1.0f;
            F(0xE8) = t;
            SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
            *(int *)(p + 0xD4) = 2;
        }
        break;
    case 2:
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (*(float *)(M + 0x24) < 0.0f && AI->m30()) {
            *(unsigned char *)(p + 0xCD) = 0;
            AI->m18(0x4A);
            AI->m48(0xF, M + 0x10);
            ID()
            *(int *)(p + 0xD4) = 3;
        }
        break;
    case 3:
        if (AI->m2C()) SELF->mEC(0xE);
        break;
    }
}
#undef SELF
#undef AI
#undef ID

class Self369 {
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
    virtual void d27();
    virtual short m78(int, int);
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void d56();
    virtual void mEC(int);
};

class Ai369 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
    virtual void d5();
    virtual void d6();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void m48(int, char *);
};

extern "C" float D_005550C8[];

extern "C" float D_005550CC[];

extern "C" float D_005550D0[];

static inline short deg369(float d) { return 0.5f + 65536.0f * d / 360.0f; }

#define MF(o) (*(float *)(M + (o)))

#define TURN(s, a, u, t)     s = SELF->m78(*(short *)(p + 0x30), ANG);     a = deg369(D_005550D0[0]);     u = a;     t = (float)(int)u * F(0xB0);     if (!((float)s <= t)) ANG = (float)ANG + t;     t = (float)(int)u * F(0xB0);     if ((float)s < -t) ANG = (float)ANG - t;

#define SELF ((Self369 *)p)
#define AI (*(Ai369 **)(p + 0xA8))
#define ID(z)     MF(0x20) = 0.0f; MF(0x24) = 0.0f; MF(0x28) = 0.0f; MF(0x2C) = 1.0f;     MF(0x30) = 0.0f; MF(0x34) = 0.0f; MF(0x38) = z; MF(0x3C) = 1.0f;
extern "C" void func_0046A170(char *p) {
    short s;
    short a;
    unsigned short u;
    float t;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!(AI->m28() < D_005550C8[0]) && AI->m28() <= D_005550CC[0]) {
            SELF->m6C();
            SELF->m70();
            TURN(s, a, u, t)
        }
        if (AI->m2C()) {
            *(unsigned char *)(p + 0xCD) = 1;
            AI->m18(0x4E);
            F(0xE0) = 0.0f;
            F(0xE4) = 18.0f;
            F(0xE8) = -20.0f;
            F(0xEC) = 1.0f;
            F(0xF0) = 0.0f;
            F(0xF4) = -1.5f;
            F(0xF8) = 0.0f;
            F(0xFC) = 1.0f;
            SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        SELF->mE4(p + 0xE0, p + 0xF0, M + 0x20, M + 0x30);
        if (MF(0x24) < 0.0f && AI->m30()) {
            *(unsigned char *)(p + 0xCD) = 0;
            AI->m18(0x4F);
            AI->m48(0x13, M + 0x10);
            ID(0.0f)
            *(int *)(p + 0xD4) = 2;
        }
        break;
    case 2:
        MF(0x20) = MF(0x20) + MF(0x30);
        MF(0x24) = MF(0x24) + MF(0x34);
        MF(0x28) = MF(0x28) + MF(0x38);
        if (AI->m2C()) {
            AI->m18(0x32);
            ID(30.0f)
            *(int *)(p + 0xD4) = 3;
        }
        break;
    case 3:
        if (AI->m28() == 30.0f) AI->m48(0xC, M + 0x10);
        if (AI->m2C()) SELF->mEC(0xE);
        AI->m24();
        MF(0x20) = MF(0x20) + MF(0x30) * F(0xB0);
        MF(0x24) = MF(0x24) + MF(0x34) * F(0xB0);
        MF(0x28) = MF(0x28) + MF(0x38) * F(0xB0);
        MF(0x30) = MF(0x30) - MF(0x30) / 10.0f * F(0xB0);
        MF(0x34) = MF(0x34) - MF(0x34) / 10.0f * F(0xB0);
        MF(0x38) = MF(0x38) - MF(0x38) / 10.0f * F(0xB0);
        break;
    }
}
#undef SELF
#undef AI
#undef ID

class O45 {
public:
    virtual void d0(); virtual int s0C(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void s28(int);
};

class V45 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void s6C(); virtual void s70(); virtual void d27(); virtual short s78(short, short); virtual void d29(); virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35(); virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41(); virtual void d42(); virtual void sB4(int);
    int m4; int m8; O45 *mC; char *m10; char x14[0x1C]; short m30; char x32[0x7E]; float mB0; char xB4; unsigned char mB5; char xB6[0xA]; short mC0; char xC2[2]; float mC4;
};

extern "C" void func_0045CF30(V45 *p) {
    switch (p->mB5) {
    case 0:
        p->s6C();
        p->s70();
        p->mC0 = p->s78(p->m30, *(short *)(p->m10 + 0x50)) / 16;
        p->mC4 = 16.0f;
        p->mC->s28(0x25);
        p->mB5 = 1;
    case 1:
        if (p->mC4 > 0.0f) {
            *(short *)(p->m10 + 0x50) += p->mC0 * p->mB0;
            p->mC4 -= p->mB0;
        }
        if (p->mC->s0C() != 0x25) {
            p->sB4(0x17);
        }
        break;
    }
}

class C45A {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual int m14();
};

class O45A {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void m70();
    virtual void m74();
    virtual short m78(int, int);
    virtual void d7C(); virtual void d80(); virtual void d84(); virtual void d88(); virtual void d8C();
    virtual int m90(int);
    virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8(); virtual void dAC(); virtual void dB0();
    virtual void mB4(int);
    virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8(); virtual void dCC(); virtual void dD0(); virtual void dD4();
    virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8(); virtual void dEC(); virtual void dF0();
    virtual int mF4();
};

extern "C" void func_0045A2D0(char *p, signed char k) {
    short v;
    int r;
    if (*(unsigned char *)(p + 0xB4) == 0xE && *(unsigned char *)(p + 0xCC) == 0xE) return;
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    if ((unsigned char)(*(C45A **)(p + 0xC))->m14() != 0) return;
    if ((unsigned char)((O45A *)p)->mF4() != 0) return;
    if (k != 0) return;
    ((O45A *)p)->m6C();
    ((O45A *)p)->m74();
    if (!(*(float *)(p + 0x34) < 400.0f)) return;
    ((O45A *)p)->m70();
    if ((short)(((O45A *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) + 0x4000) < 0) return;
    v = ((O45A *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x90)) - 0x671C;
    if (v >= 0 && v < 0x31C8) {
        r = ((O45A *)p)->m90(0);
        if (r != 0xD) {
            ((O45A *)p)->mB4(r);
            return;
        }
    }
}

extern "C" float D_01DF5D20[];

#define FB(t, o) (*(t *)(p + (o)))

struct AI0045F1E0 {
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
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void d1FC();
    virtual void m200();
    virtual void d204();
    virtual void m208();
    virtual void d20C();
    virtual void m210();
    virtual void d214();
    virtual void m218();
    virtual void d21C();
    virtual void m220();
    virtual void d224();
    virtual void m228();
    virtual void d22C();
    virtual void m230();
    virtual void d234();
    virtual void m238();
    virtual void d23C();
    virtual void m240();
    virtual void d244();
    virtual void m248();
    virtual void d24C();
    virtual void m250();
    virtual void d254();
    virtual void m258();
    virtual void d25C();
    virtual void m260();
    virtual void d264();
    virtual void m268();
    virtual void d26C();
    virtual void m270();
    virtual void d274();
    virtual void m278();
    virtual void d27C();
    virtual void m280();
    virtual void d284();
    virtual void m288();
    virtual void d28C();
    virtual void m290();
    virtual void d294();
    virtual void m298();
    virtual void d29C();
    virtual void m2A0();
    virtual void d2A4();
    virtual void m2A8();
    virtual void d2AC();
    virtual void m2B0();
    virtual void d2B4();
    virtual void m2B8();
    virtual void d2BC();
    virtual void m2C0();
    virtual void d2C4();
    virtual void m2C8();
    virtual void d2CC();
    virtual void m2D0();
    virtual void d2D4();
    virtual void m2D8();
    virtual void d2DC();
    virtual void m2E0();
    virtual void d2E4();
    virtual void m2E8();
    virtual void d2EC();
    virtual void m2F0();
    virtual void d2F4();
    virtual void m2F8();
    virtual void d2FC();
    virtual void m300();
    virtual void d304();
    virtual void m308();
    virtual void d30C();
    virtual void m310();
    virtual void d314();
    virtual void m318();
    virtual void d31C();
    virtual void m320();
    virtual void d324();
    virtual void m328();
    virtual void d32C();
    virtual void m330();
    virtual void d334();
    virtual void d338();
    virtual void d33C();
    virtual void m340();
    virtual void d344();
    virtual void m348();
    virtual void d34C();
    virtual void m350();
    virtual void d354();
    virtual void m358();
    virtual void d35C();
    virtual void m360();
    virtual void d364();
    virtual void m368();
    virtual void d36C();
    virtual void m370();
    virtual void d374();
    virtual void m378();
    virtual void d37C();
    virtual void m380();
    virtual void d384();
    virtual void m388();
    virtual void d38C();
    virtual void m390();
    virtual void d394();
    virtual void m398();
    virtual void d39C();
    virtual void m3A0();
    virtual void d3A4();
    virtual void m3A8();
    virtual void d3AC();
    virtual void m3B0();
    virtual void d3B4();
    virtual void m3B8();
    virtual void d3BC();
    virtual void m3C0();
    virtual void d3C4();
    virtual void d3C8();
    virtual void d3CC();
    virtual void d3D0();
    virtual void d3D4();
    virtual void d3D8();
    virtual void d3DC();
    virtual void d3E0();
    virtual void d3E4();
    virtual void d3E8();
    virtual void d3EC();
    virtual void d3F0();
    virtual void d3F4();
    virtual void d3F8();
    virtual void d3FC();
    virtual void d400();
    virtual void d404();
    virtual void m408();
    virtual void d40C();
    virtual void m410();
    virtual void d414();
    virtual void m418();
    virtual void d41C();
    virtual void m420();
    virtual void d424();
    virtual void m428();
    virtual void d42C();
    virtual void m430();
    virtual void d434();
    virtual void m438();
    virtual void d43C();
    virtual void m440();
    virtual void d444();
    virtual void m448();
    virtual void d44C();
    virtual void d450();
    virtual void d454();
    virtual void m458();
    virtual void d45C();
    virtual void m460();
};

struct AIB0045F1E0 {
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void m20();
};

extern "C" void func_0045F1E0(char *p) {
    if (!(FB(float, 0x108) <= 0.0f)) {
        FB(float, 0x108) -= D_01DF5D20[0];
        return;
    }
    (*(AIB0045F1E0 **)(p + 0xA8))->m20();
    switch (FB(unsigned char, 0xCC)) {
    case 0:
        ((AI0045F1E0 *)p)->m200();
        break;
    case 1:
        ((AI0045F1E0 *)p)->m208();
        break;
    case 2:
        ((AI0045F1E0 *)p)->m210();
        break;
    case 3:
        ((AI0045F1E0 *)p)->m218();
        break;
    case 4:
        ((AI0045F1E0 *)p)->m220();
        break;
    case 5:
        ((AI0045F1E0 *)p)->m228();
        break;
    case 6:
        ((AI0045F1E0 *)p)->m230();
        break;
    case 7:
        ((AI0045F1E0 *)p)->m238();
        break;
    case 8:
        ((AI0045F1E0 *)p)->m240();
        break;
    case 9:
        ((AI0045F1E0 *)p)->m248();
        break;
    case 10:
        ((AI0045F1E0 *)p)->m250();
        break;
    case 11:
        ((AI0045F1E0 *)p)->m258();
        break;
    case 12:
        ((AI0045F1E0 *)p)->m260();
        break;
    case 13:
        ((AI0045F1E0 *)p)->m268();
        break;
    case 14:
        ((AI0045F1E0 *)p)->m270();
        break;
    case 15:
        ((AI0045F1E0 *)p)->m278();
        break;
    case 16:
        ((AI0045F1E0 *)p)->m280();
        break;
    case 17:
        ((AI0045F1E0 *)p)->m288();
        break;
    case 18:
        ((AI0045F1E0 *)p)->m290();
        break;
    case 19:
        ((AI0045F1E0 *)p)->m298();
        break;
    case 20:
        ((AI0045F1E0 *)p)->m2A0();
        break;
    case 21:
        ((AI0045F1E0 *)p)->m2A8();
        break;
    case 22:
        ((AI0045F1E0 *)p)->m2B0();
        break;
    case 23:
        ((AI0045F1E0 *)p)->m2B8();
        break;
    case 24:
        ((AI0045F1E0 *)p)->m2C0();
        break;
    case 25:
        ((AI0045F1E0 *)p)->m2C8();
        break;
    case 26:
        ((AI0045F1E0 *)p)->m2D0();
        break;
    case 27:
        ((AI0045F1E0 *)p)->m2D8();
        break;
    case 28:
        ((AI0045F1E0 *)p)->m2E0();
        break;
    case 29:
        ((AI0045F1E0 *)p)->m2E8();
        break;
    case 30:
        ((AI0045F1E0 *)p)->m2F0();
        break;
    case 31:
        ((AI0045F1E0 *)p)->m2F8();
        break;
    case 32:
        ((AI0045F1E0 *)p)->m300();
        break;
    case 33:
        ((AI0045F1E0 *)p)->m308();
        break;
    case 34:
        ((AI0045F1E0 *)p)->m310();
        break;
    case 35:
        ((AI0045F1E0 *)p)->m318();
        break;
    case 37:
        ((AI0045F1E0 *)p)->m320();
        break;
    case 38:
        ((AI0045F1E0 *)p)->m328();
        break;
    case 39:
        ((AI0045F1E0 *)p)->m330();
        break;
    case 40:
        ((AI0045F1E0 *)p)->m340();
        break;
    case 41:
        ((AI0045F1E0 *)p)->m348();
        break;
    case 42:
        ((AI0045F1E0 *)p)->m350();
        break;
    case 43:
        ((AI0045F1E0 *)p)->m358();
        break;
    case 44:
        ((AI0045F1E0 *)p)->m360();
        break;
    case 45:
        ((AI0045F1E0 *)p)->m368();
        break;
    case 46:
        ((AI0045F1E0 *)p)->m370();
        break;
    case 47:
        ((AI0045F1E0 *)p)->m378();
        break;
    case 48:
        ((AI0045F1E0 *)p)->m380();
        break;
    case 49:
        ((AI0045F1E0 *)p)->m388();
        break;
    case 50:
        ((AI0045F1E0 *)p)->m3B8();
        break;
    case 51:
        ((AI0045F1E0 *)p)->m3C0();
        break;
    case 52:
        ((AI0045F1E0 *)p)->m390();
        break;
    case 53:
        ((AI0045F1E0 *)p)->m398();
        break;
    case 54:
        ((AI0045F1E0 *)p)->m3A0();
        break;
    case 55:
        ((AI0045F1E0 *)p)->m3A8();
        break;
    case 56:
        ((AI0045F1E0 *)p)->m3B0();
        break;
    case 57:
        ((AI0045F1E0 *)p)->m408();
        break;
    case 58:
        ((AI0045F1E0 *)p)->m410();
        break;
    case 59:
        ((AI0045F1E0 *)p)->m418();
        break;
    case 66:
        ((AI0045F1E0 *)p)->m420();
        break;
    case 67:
        ((AI0045F1E0 *)p)->m428();
        break;
    case 68:
        ((AI0045F1E0 *)p)->m430();
        break;
    case 69:
        ((AI0045F1E0 *)p)->m438();
        break;
    case 70:
        ((AI0045F1E0 *)p)->m440();
        break;
    case 71:
        ((AI0045F1E0 *)p)->m448();
        break;
    case 72:
        ((AI0045F1E0 *)p)->m458();
        break;
    case 73:
        ((AI0045F1E0 *)p)->m460();
        break;
    case 36:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
        break;
    }
}

struct AI00459AB0 {
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
    virtual void m9C();
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
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void m10C();
    virtual void m110();
    virtual void m114();
    virtual void m118();
    virtual void m11C();
    virtual void m120();
    virtual void m124();
    virtual void m128();
    virtual void m12C();
    virtual void m130();
    virtual void m134();
    virtual void m138();
    virtual void m13C();
    virtual void m140();
    virtual void m144();
    virtual void m148();
    virtual void m14C();
    virtual void m150();
    virtual void m154();
    virtual void m158();
    virtual void m15C();
    virtual void m160();
    virtual void m164();
    virtual void m168();
    virtual void m16C();
    virtual void m170();
    virtual void m174();
    virtual void m178();
    virtual void m17C();
    virtual void m180();
    virtual void m184();
    virtual void m188();
    virtual void m18C();
    virtual void m190();
    virtual void m194();
    virtual void m198();
    virtual void m19C();
    virtual void m1A0();
    virtual void m1A4();
    virtual void m1A8();
    virtual void m1AC();
    virtual void m1B0();
    virtual void m1B4();
    virtual void m1B8();
    virtual void m1BC();
    virtual void m1C0();
    virtual void m1C4();
    virtual void m1C8();
    virtual void m1CC();
    virtual void m1D0();
    virtual void m1D4();
    virtual void m1D8();
    virtual void m1DC();
    virtual void m1E0();
    virtual void m1E4();
    virtual void m1E8();
    virtual void m1EC();
    virtual void m1F0();
    virtual void m1F4();
    virtual void m1F8();
};

struct AIB00459AB0 {
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void m24();
};

extern "C" void func_00459AB0(char *p) {
    FB(float, 0xB0) = *FB(float *, 0xAC);
    ((AI00459AB0 *)p)->m9C();
    (*(AIB00459AB0 **)(p + 0xC))->m24();
    switch (FB(unsigned char, 0xB4)) {
    case 23:
        ((AI00459AB0 *)p)->m10C();
        break;
    case 0:
        ((AI00459AB0 *)p)->m110();
        break;
    case 1:
        ((AI00459AB0 *)p)->m114();
        break;
    case 2:
        ((AI00459AB0 *)p)->m118();
        break;
    case 3:
        ((AI00459AB0 *)p)->m11C();
        break;
    case 4:
        ((AI00459AB0 *)p)->m120();
        break;
    case 5:
        ((AI00459AB0 *)p)->m124();
        break;
    case 6:
        ((AI00459AB0 *)p)->m128();
        break;
    case 7:
        ((AI00459AB0 *)p)->m12C();
        break;
    case 8:
        ((AI00459AB0 *)p)->m130();
        break;
    case 9:
        ((AI00459AB0 *)p)->m134();
        break;
    case 10:
        ((AI00459AB0 *)p)->m138();
        break;
    case 11:
        ((AI00459AB0 *)p)->m13C();
        break;
    case 12:
        ((AI00459AB0 *)p)->m140();
        break;
    case 14:
        ((AI00459AB0 *)p)->m144();
        break;
    case 22:
        ((AI00459AB0 *)p)->m148();
        break;
    case 24:
        ((AI00459AB0 *)p)->m14C();
        break;
    case 25:
        ((AI00459AB0 *)p)->m150();
        break;
    case 26:
        ((AI00459AB0 *)p)->m154();
        break;
    case 27:
        ((AI00459AB0 *)p)->m158();
        break;
    case 28:
        ((AI00459AB0 *)p)->m15C();
        break;
    case 29:
        ((AI00459AB0 *)p)->m160();
        break;
    case 30:
        ((AI00459AB0 *)p)->m164();
        break;
    case 31:
        ((AI00459AB0 *)p)->m168();
        break;
    case 32:
        ((AI00459AB0 *)p)->m16C();
        break;
    case 33:
        ((AI00459AB0 *)p)->m170();
        break;
    case 34:
        ((AI00459AB0 *)p)->m174();
        break;
    case 35:
        ((AI00459AB0 *)p)->m178();
        break;
    case 36:
        ((AI00459AB0 *)p)->m17C();
        break;
    case 20:
        ((AI00459AB0 *)p)->m180();
        break;
    case 15:
        ((AI00459AB0 *)p)->m184();
        break;
    case 16:
        ((AI00459AB0 *)p)->m188();
        break;
    case 17:
        ((AI00459AB0 *)p)->m18C();
        break;
    case 37:
        ((AI00459AB0 *)p)->m190();
        break;
    case 38:
        ((AI00459AB0 *)p)->m194();
        break;
    case 39:
        ((AI00459AB0 *)p)->m198();
        break;
    case 21:
        ((AI00459AB0 *)p)->m19C();
        break;
    case 40:
        ((AI00459AB0 *)p)->m1A0();
        break;
    case 42:
        ((AI00459AB0 *)p)->m1A4();
        break;
    case 43:
        ((AI00459AB0 *)p)->m1A8();
        break;
    case 44:
        ((AI00459AB0 *)p)->m1AC();
        break;
    case 45:
        ((AI00459AB0 *)p)->m1B0();
        break;
    case 46:
        ((AI00459AB0 *)p)->m1B4();
        break;
    case 47:
        ((AI00459AB0 *)p)->m1B8();
        break;
    case 48:
        ((AI00459AB0 *)p)->m1BC();
        break;
    case 49:
        ((AI00459AB0 *)p)->m1C0();
        break;
    case 18:
        ((AI00459AB0 *)p)->m1C4();
        break;
    case 19:
        ((AI00459AB0 *)p)->m1C8();
        break;
    case 50:
        ((AI00459AB0 *)p)->m1CC();
        break;
    case 51:
        ((AI00459AB0 *)p)->m1D0();
        break;
    case 52:
        ((AI00459AB0 *)p)->m1D4();
        break;
    case 54:
        ((AI00459AB0 *)p)->m1D8();
        break;
    case 55:
        ((AI00459AB0 *)p)->m1DC();
        break;
    case 56:
        ((AI00459AB0 *)p)->m1E0();
        break;
    case 57:
        ((AI00459AB0 *)p)->m1E4();
        break;
    case 60:
        ((AI00459AB0 *)p)->m1E8();
        break;
    case 61:
        ((AI00459AB0 *)p)->m1EC();
        break;
    case 67:
        ((AI00459AB0 *)p)->m1F0();
        break;
    case 68:
        ((AI00459AB0 *)p)->m1F4();
        break;
    case 69:
        ((AI00459AB0 *)p)->m1F8();
        break;
    case 13:
    case 41:
    case 53:
    case 58:
    case 59:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
        break;
    }
}

struct ST0045F8B0 {
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
    virtual void dE8();
    virtual void dEC();
    virtual void dF0();
    virtual void dF4();
    virtual void dF8();
    virtual void dFC();
    virtual void d100();
    virtual void d104();
    virtual void d108();
    virtual void d10C();
    virtual void d110();
    virtual void d114();
    virtual void d118();
    virtual void d11C();
    virtual void d120();
    virtual void d124();
    virtual void d128();
    virtual void d12C();
    virtual void d130();
    virtual void d134();
    virtual void d138();
    virtual void d13C();
    virtual void d140();
    virtual void d144();
    virtual void d148();
    virtual void d14C();
    virtual void d150();
    virtual void d154();
    virtual void d158();
    virtual void d15C();
    virtual void d160();
    virtual void d164();
    virtual void d168();
    virtual void d16C();
    virtual void d170();
    virtual void d174();
    virtual void d178();
    virtual void d17C();
    virtual void d180();
    virtual void d184();
    virtual void d188();
    virtual void d18C();
    virtual void d190();
    virtual void d194();
    virtual void d198();
    virtual void d19C();
    virtual void d1A0();
    virtual void d1A4();
    virtual void d1A8();
    virtual void d1AC();
    virtual void d1B0();
    virtual void d1B4();
    virtual void d1B8();
    virtual void d1BC();
    virtual void d1C0();
    virtual void d1C4();
    virtual void d1C8();
    virtual void d1CC();
    virtual void d1D0();
    virtual void d1D4();
    virtual void d1D8();
    virtual void d1DC();
    virtual void d1E0();
    virtual void d1E4();
    virtual void d1E8();
    virtual void d1EC();
    virtual void d1F0();
    virtual void d1F4();
    virtual void d1F8();
    virtual void m1FC();
    virtual void d200();
    virtual void m204();
    virtual void d208();
    virtual void m20C();
    virtual void d210();
    virtual void m214();
    virtual void d218();
    virtual void m21C();
    virtual void d220();
    virtual void m224();
    virtual void d228();
    virtual void m22C();
    virtual void d230();
    virtual void m234();
    virtual void d238();
    virtual void m23C();
    virtual void d240();
    virtual void m244();
    virtual void d248();
    virtual void m24C();
    virtual void d250();
    virtual void m254();
    virtual void d258();
    virtual void m25C();
    virtual void d260();
    virtual void m264();
    virtual void d268();
    virtual void m26C();
    virtual void d270();
    virtual void m274();
    virtual void d278();
    virtual void m27C();
    virtual void d280();
    virtual void m284();
    virtual void d288();
    virtual void m28C();
    virtual void d290();
    virtual void m294();
    virtual void d298();
    virtual void m29C();
    virtual void d2A0();
    virtual void m2A4();
    virtual void d2A8();
    virtual void m2AC();
    virtual void d2B0();
    virtual void m2B4();
    virtual void d2B8();
    virtual void m2BC();
    virtual void d2C0();
    virtual void m2C4();
    virtual void d2C8();
    virtual void m2CC();
    virtual void d2D0();
    virtual void m2D4();
    virtual void d2D8();
    virtual void m2DC();
    virtual void d2E0();
    virtual void m2E4();
    virtual void d2E8();
    virtual void m2EC();
    virtual void d2F0();
    virtual void m2F4();
    virtual void d2F8();
    virtual void m2FC();
    virtual void d300();
    virtual void m304();
    virtual void d308();
    virtual void m30C();
    virtual void d310();
    virtual void m314();
    virtual void d318();
    virtual void m31C();
    virtual void d320();
    virtual void m324();
    virtual void d328();
    virtual void m32C();
    virtual void d330();
    virtual void d334();
    virtual void d338();
    virtual void m33C();
    virtual void d340();
    virtual void m344();
    virtual void d348();
    virtual void m34C();
    virtual void d350();
    virtual void m354();
    virtual void d358();
    virtual void m35C();
    virtual void d360();
    virtual void m364();
    virtual void d368();
    virtual void m36C();
    virtual void d370();
    virtual void m374();
    virtual void d378();
    virtual void m37C();
    virtual void d380();
    virtual void m384();
    virtual void d388();
    virtual void m38C();
    virtual void d390();
    virtual void m394();
    virtual void d398();
    virtual void m39C();
    virtual void d3A0();
    virtual void m3A4();
    virtual void d3A8();
    virtual void m3AC();
    virtual void d3B0();
    virtual void m3B4();
    virtual void d3B8();
    virtual void m3BC();
    virtual void d3C0();
    virtual void d3C4();
    virtual void d3C8();
    virtual void d3CC();
    virtual void d3D0();
    virtual void d3D4();
    virtual void d3D8();
    virtual void d3DC();
    virtual void d3E0();
    virtual void d3E4();
    virtual void d3E8();
    virtual void d3EC();
    virtual void d3F0();
    virtual void d3F4();
    virtual void d3F8();
    virtual void d3FC();
    virtual void d400();
    virtual void m404();
    virtual void d408();
    virtual void m40C();
    virtual void d410();
    virtual void m414();
    virtual void d418();
    virtual void m41C();
    virtual void d420();
    virtual void m424();
    virtual void d428();
    virtual void m42C();
    virtual void d430();
    virtual void m434();
    virtual void d438();
    virtual void m43C();
    virtual void d440();
    virtual void m444();
    virtual void d448();
    virtual void d44C();
    virtual void d450();
    virtual void m454();
    virtual void d458();
    virtual void m45C();
};

struct STB0045F8B0 {
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
    virtual void m48(int, float *);
};

extern "C" void func_0045F8B0(char *p, int m) {
    float v[4];
    if (FB(unsigned char, 0xCC) == 0x1F)
        (*(STB0045F8B0 **)(p + 0xA8))->m48(-1, (float *)(FB(char *, 0x10) + 0x10));
    if (FB(unsigned char, 0xCC) != 0x1F) {
        v[0] = 1.0f;
        v[1] = 1.0f;
        v[2] = 1.0f;
        (*(STB0045F8B0 **)(p + 0xA8))->m48(2, v);
    }
    if ((FB(unsigned char, 0xCC) == 0x26 || (unsigned int)(FB(unsigned char, 0xCC) - 0x29) <= 2 || FB(unsigned char, 0xCC) == 0x39 || FB(unsigned char, 0xCC) == 0xD) &&
        m != 0x26 && m != 0x29 && m != 0x2A && m != 0x2B && m != 0x39 && m != 0xD)
        (*(STB0045F8B0 **)(p + 0xA8))->m48(0x387, (float *)(FB(char *, 0x10) + 0x10));
    if (((unsigned int)(FB(unsigned char, 0xCC) - 2) <= 1 || FB(unsigned char, 0xCC) == 0x13 || FB(unsigned char, 0xCC) == 0x19 || FB(unsigned char, 0xCC) == 0x32) &&
        m != 2 && m != 3 && m != 0x13 && m != 0x19 && m != 0x32)
        (*(STB0045F8B0 **)(p + 0xA8))->m48(0x12, (float *)(FB(char *, 0x10) + 0x10));
    FB(unsigned char, 0xCC) = m;
    switch (FB(unsigned char, 0xCC)) {
    case 0:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m1FC();
        break;
    case 1:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m204();
        break;
    case 2:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m20C();
        break;
    case 3:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m214();
        break;
    case 4:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m21C();
        break;
    case 5:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m224();
        break;
    case 6:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m22C();
        break;
    case 7:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m234();
        break;
    case 8:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m23C();
        break;
    case 9:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m244();
        break;
    case 10:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m24C();
        break;
    case 11:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m254();
        break;
    case 12:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m25C();
        break;
    case 13:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m264();
        break;
    case 14:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m26C();
        break;
    case 15:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m274();
        break;
    case 16:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m27C();
        break;
    case 17:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m284();
        break;
    case 18:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m28C();
        break;
    case 19:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m294();
        break;
    case 20:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m29C();
        break;
    case 21:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m2A4();
        break;
    case 22:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2AC();
        break;
    case 23:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2B4();
        break;
    case 24:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2BC();
        break;
    case 25:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2C4();
        break;
    case 26:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2CC();
        break;
    case 27:
        FB(unsigned char, 0xD0) = 2;
        FB(unsigned char, 0xD1) = 2;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2D4();
        break;
    case 28:
        FB(unsigned char, 0xD0) = 2;
        FB(unsigned char, 0xD1) = 2;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2DC();
        break;
    case 29:
        FB(unsigned char, 0xD0) = 2;
        FB(unsigned char, 0xD1) = 2;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2E4();
        break;
    case 30:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2EC();
        break;
    case 31:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2F4();
        break;
    case 32:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m2FC();
        break;
    case 33:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m304();
        break;
    case 34:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m30C();
        break;
    case 35:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m314();
        break;
    case 37:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m31C();
        break;
    case 38:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m324();
        break;
    case 39:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m32C();
        break;
    case 40:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m33C();
        break;
    case 41:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m344();
        break;
    case 42:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m34C();
        break;
    case 43:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m354();
        break;
    case 44:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m35C();
        break;
    case 45:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m364();
        break;
    case 46:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m36C();
        break;
    case 47:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m374();
        break;
    case 48:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m37C();
        break;
    case 49:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 0;
        ((ST0045F8B0 *)p)->m384();
        break;
    case 50:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m3B4();
        break;
    case 51:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m3BC();
        break;
    case 52:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m38C();
        break;
    case 53:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m394();
        break;
    case 54:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m39C();
        break;
    case 55:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m3A4();
        break;
    case 56:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m3AC();
        break;
    case 57:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m404();
        break;
    case 58:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m40C();
        break;
    case 59:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m414();
        break;
    case 66:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m41C();
        break;
    case 67:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m424();
        break;
    case 68:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m42C();
        break;
    case 69:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m434();
        break;
    case 70:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m43C();
        break;
    case 71:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m444();
        break;
    case 72:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m454();
        break;
    case 73:
        FB(unsigned char, 0xD0) = 0;
        FB(unsigned char, 0xD1) = 0;
        FB(unsigned char, 0x10C) = 1;
        ((ST0045F8B0 *)p)->m45C();
        break;
    case 36:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
        break;
    }
}

extern "C" char *func_002D9F00(char *, int);

extern "C" void func_00105300(char *, char *);

class O00469230 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int);
    virtual void u1C();
    virtual void u20();
    virtual void m24();
    virtual void u28();
    virtual int m2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void m48(int, char *);
};

class O00469230P {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void mEC(int);
};

static inline char *mgr00469230(void) { return *(char **)(*(char **)D_01CAFF0C + 0xC); }

extern "C" {
void func_00469230(char *p) {
    extern float func_00131BA0(short);
    extern float func_00131C20(short);
    float m[16] __attribute__((aligned(16)));
    float a;
    float b;
    short s;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (((O00469230 *)*(char **)(p + 0xA8))->m2C()) {
            ((O00469230 *)*(char **)(p + 0xA8))->m18(0x3E);
            ((O00469230 *)*(char **)(p + 0xA8))->m48(0x7D6, *(char **)(p + 0x10) + 0x10);
        }
        if (*(unsigned char *)(mgr00469230() + 0x2848) != 0x1F) {
            ((O00469230 *)*(char **)(p + 0xA8))->m18(0x1D);
            *(int *)(p + 0xD4) = 1;
            break;
        }
        a = 8.0088f;
        b = -22.0434f;
        func_00105300((char *)m, func_002D9F00(mgr00469230(), 0x12));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(m) : "memory");
        *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
        *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
        s = *(short *)(*(char **)(p + 0x10) + 0x50) - *(short *)(mgr00469230() + 0x90) + 0x4000;
        if (s > 0) {
            s = 0;
        } else {
            s = -0x8000;
            a *= -1.0f;
            b *= -1.0f;
        }
        *(short *)(*(char **)(p + 0x10) + 0x50) = s + *(short *)(mgr00469230() + 0x90);
        *(float *)(*(char **)(p + 0x10) + 0x10) += a * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) + b * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x14) += -28.8183f;
        *(float *)(*(char **)(p + 0x10) + 0x18) += b * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) - a * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x1C) = 1.0f;
        break;
    case 1:
        if (((O00469230 *)*(char **)(p + 0xA8))->m2C()) {
            ((O00469230 *)*(char **)(p + 0xA8))->m18(0x15);
            *(int *)(p + 0xD4) = 2;
        }
        ((O00469230 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (((O00469230 *)*(char **)(p + 0xA8))->m2C()) {
            ((O00469230P *)p)->mEC(0xE);
        }
        ((O00469230 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}
}

class O004695F0 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int);
    virtual void u1C();
    virtual void u20();
    virtual void m24();
    virtual void u28();
    virtual int m2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void m48(int, char *);
};

class O004695F0P {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void u70();
    virtual void u74();
    virtual void u78();
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void mEC(int);
};

static inline char *mgr004695F0(void) { return *(char **)(*(char **)D_01CAFF0C + 0xC); }

extern "C" {
void func_004695F0(char *p) {
    extern float func_00131BA0(short);
    extern float func_00131C20(short);
    float m[16] __attribute__((aligned(16)));
    float a;
    float b;
    short s;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (((O004695F0 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004695F0 *)*(char **)(p + 0xA8))->m18(0x3F);
            ((O004695F0 *)*(char **)(p + 0xA8))->m48(0x7D6, *(char **)(p + 0x10) + 0x10);
        }
        if (*(unsigned char *)(mgr004695F0() + 0x2848) != 0x1F) {
            ((O004695F0 *)*(char **)(p + 0xA8))->m18(0x1E);
            *(int *)(p + 0xD4) = 1;
            break;
        }
        a = 8.0088f;
        b = -22.0434f;
        func_00105300((char *)m, func_002D9F00(mgr004695F0(), 0x12));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(m) : "memory");
        *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
        *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
        s = *(short *)(*(char **)(p + 0x10) + 0x50) - *(short *)(mgr004695F0() + 0x90) + 0x4000;
        if (s > 0) {
            s = 0;
        } else {
            s = -0x8000;
            a *= -1.0f;
            b *= -1.0f;
        }
        *(short *)(*(char **)(p + 0x10) + 0x50) = s + *(short *)(mgr004695F0() + 0x90);
        *(float *)(*(char **)(p + 0x10) + 0x10) += a * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) + b * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x14) += -28.8183f;
        *(float *)(*(char **)(p + 0x10) + 0x18) += b * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) - a * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x1C) = 1.0f;
        break;
    case 1:
        if (((O004695F0 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004695F0 *)*(char **)(p + 0xA8))->m18(0x14);
            *(int *)(p + 0xD4) = 2;
        }
        ((O004695F0 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (((O004695F0 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004695F0P *)p)->mEC(0xE);
        }
        ((O004695F0 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}
}

class A46B {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void m44();
    virtual void m48(int, char *);
};

class P46B {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void m6C();
    virtual void m70();
    virtual void u74();
    virtual short m78(short, short);
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void mEC(int);
};

extern "C" {
void func_0046B7E0(char *p) {
    extern char D_01DFABA0[];
    extern void func_00330BD0(char *, int, char *, int, int);
    extern float D_00555080[];
    extern float D_00555084[];
    extern float D_00555088[];
    short d;
    int lim;
    if (!(((A46B *)*(char **)(p + 0xA8))->m28() < D_00555080[0]) && ((A46B *)*(char **)(p + 0xA8))->m28() <= D_00555084[0]) {
        ((P46B *)p)->m6C();
        ((P46B *)p)->m70();
        d = ((P46B *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
        lim = (unsigned short)(short)(int)(65536.0f * D_00555088[0] / 360.0f + 0.5f);
        {
        float k = (float)lim * *(float *)(p + 0xB0);
        if (!((float)d <= k)) {
            *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
        }
        k = (float)lim * *(float *)(p + 0xB0);
        if ((float)d < -k) {
            *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
        }
        }
    }
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!(((A46B *)*(char **)(p + 0xA8))->m28() < 25.0f)) {
            *(int *)(p + 0xD4) = 1;
        }
        ((A46B *)*(char **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!(((A46B *)*(char **)(p + 0xA8))->m28() < 30.0f)) {
            ((A46B *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 2;
        }
        ((A46B *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!(((A46B *)*(char **)(p + 0xA8))->m28() < 34.0f)) {
            ((A46B *)*(char **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 3;
        }
        ((A46B *)*(char **)(p + 0xA8))->m24();
        break;
    case 3:
        if (((A46B *)*(char **)(p + 0xA8))->m2C()) {
            ((A46B *)*(char **)(p + 0xA8))->m44();
            ((P46B *)p)->mEC(0xE);
        }
        ((A46B *)*(char **)(p + 0xA8))->m24();
        break;
    }
}
}

class A46C6 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int);
    virtual void u1C();
    virtual void u20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void m48(int, char *);
};

class P46C6 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void u30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void m6C();
    virtual void m70();
    virtual void u74();
    virtual short m78(short, short);
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual void u90();
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void uB4();
    virtual void uB8();
    virtual void uBC();
    virtual void uC0();
    virtual void uC4();
    virtual void uC8();
    virtual void uCC();
    virtual void uD0();
    virtual void uD4();
    virtual void uD8();
    virtual void uDC();
    virtual void uE0();
    virtual void uE4();
    virtual void uE8();
    virtual void mEC(int);
};

extern "C" void func_0046C670(char *p) {
    short d;
    short e;
    float k;
    float k2;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!(((A46C6 *)*(char **)(p + 0xA8))->m28() < 160.0f)) {
            ((P46C6 *)p)->m6C();
            ((P46C6 *)p)->m70();
            d = ((P46C6 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            *(short *)(p + 0x10E) = (int)((float)(d + 0x10000) / 43.0f);
            *(int *)(p + 0xD4) = 1;
        }
        ((A46C6 *)*(char **)(p + 0xA8))->m24();
        break;
    case 1:
        *(short *)(*(char **)(p + 0x10) + 0x50) += *(short *)(p + 0x10E) * *(float *)(p + 0xB0);
        if (!(((A46C6 *)*(char **)(p + 0xA8))->m28() < 203.0f)) {
            ((A46C6 *)*(char **)(p + 0xA8))->m18(0x3E8);
            ((A46C6 *)*(char **)(p + 0xA8))->m48(0x19, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        ((A46C6 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        ((P46C6 *)p)->m6C();
        ((P46C6 *)p)->m70();
        e = ((P46C6 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
        k = 182.0f * *(float *)(p + 0xB0);
        if (!((float)e <= k)) {
            *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
        }
        k2 = 182.0f * *(float *)(p + 0xB0);
        if ((float)e < -k2) {
            *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k2;
        }
        if (((A46C6 *)*(char **)(p + 0xA8))->m2C()) {
            ((A46C6 *)*(char **)(p + 0xA8))->m18(0x67);
            *(int *)(p + 0xD4) = 3;
        }
        ((A46C6 *)*(char **)(p + 0xA8))->m24();
        break;
    case 3:
        if (((A46C6 *)*(char **)(p + 0xA8))->m2C()) {
            ((P46C6 *)p)->mEC(0xE);
        }
        ((A46C6 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

class Q45A {
public:
    virtual void d8();
    virtual void dC();
    virtual unsigned char m10();
    virtual unsigned char m14();
    virtual unsigned char m18();
};

class P45A {
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
    virtual void m68(void *, char *);
    virtual void d6C();
    virtual void m70();
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
    virtual void dB0();
    virtual void mB4(int);
};

typedef struct { signed char a, b, c; float f4, f8, fC, f10, f14; signed char c18; float f1C; signed char c20; float f24, f28, f2C; unsigned char u30; int i34; float f38; signed char c3C, c3D, c3E; } S45A;

extern "C" void func_0045A630(char *p, S45A *s, char *q) {
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    *(S45A *)(p + 0x3C) = *s;
    switch ((*(Q45A **)(p + 0xC))->m10()) {
    case 0:
        switch ((*(Q45A **)(p + 0xC))->m18()) {
        case 1:
            break;
        case 4:
            ((P45A *)p)->mB4(0xA);
            break;
        case 5:
            ((P45A *)p)->mB4(0xB);
            break;
        default:
            switch ((*(Q45A **)(p + 0xC))->m14()) {
            case 4:
                break;
            }
            switch (s->a) {
            case 6:
                break;
            }
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x20), "r"(q + 0x10) : "memory");
            ((P45A *)p)->m70();
            if ((short)(*(short *)(p + 0x30) - *(short *)(*(char **)(p + 0x10) + 0x50) + 0x4000) > 0)
                ((P45A *)p)->mB4(0);
            else
                ((P45A *)p)->mB4(1);
            break;
        }
        break;
    case 1:
        switch ((*(Q45A **)(p + 0xC))->m18()) {
        case 1:
            break;
        default:
            switch (s->a) {
            case 3:
                break;
            default:
                switch (s->c) {
                case 0:
                    break;
                case 1:
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
    ((P45A *)p)->m68(s, q);
}

extern "C" {
int func_003305E0(char *, int, int, int, int, int, int);
}

extern "C" {
int func_0045B110(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    extern char D_01DFABA0[];
    int tmp5;
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(5001, (*(int *)(p0 + 16) + 16));
    tmp5 = func_003305E0(D_01DFABA0, 0, 90, (*(int *)(p0 + 16) + 16), 0, 0, 0);
    return tmp5;
}
}

extern "C" {
extern "C" void func_00465AA0(char *p) {
    short d;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x800) {
        d = 0x800;
    }
    if (d < -0x800) {
        d = -0x800;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    if ((*(Anim **)(p + 0xA8))->m2C()) {
        ((ObjV *)p)->mEC(0x1D);
    }
    (*(Anim **)(p + 0xA8))->m24();
}
}

extern "C" {
extern "C" void func_00465BE0(char *p) {
    short d;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x800) {
        d = 0x800;
    }
    if (d < -0x800) {
        d = -0x800;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    if ((*(Anim **)(p + 0xA8))->m2C()) {
        ((ObjV *)p)->mEC(0xE);
    }
    (*(Anim **)(p + 0xA8))->m24();
}
}

extern "C" {
extern "C" void func_004667F0(char *p) {
    short d;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x100) {
        d = 0x100;
    }
    if (d < -0x100) {
        d = -0x100;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    if ((*(Anim **)(p + 0xA8))->m2C()) {
        ((ObjV *)p)->mEC(0xE);
    }
    (*(Anim **)(p + 0xA8))->m24();
}
}

extern "C" {
extern "C" void func_004666F0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim **)(p + 0xA8))->m18(0x26);
        break;
    case 1:
        (*(Anim **)(p + 0xA8))->m18(0x27);
        break;
    }
}
}

extern "C" {
extern "C" void func_004608F0(char *p) {
    short d;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x800) {
        d = 0x800;
    }
    if (d < -0x800) {
        d = -0x800;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim3 **)(p + 0xA8))->m28() >= 30.0f) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim3 **)(p + 0xA8))->m24();
        break;
    }
}
}

extern "C" {
extern "C" void func_00465D40(char *p) {
    short d;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x800) {
        d = 0x800;
    }
    if (d < -0x800) {
        d = -0x800;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim3 **)(p + 0xA8))->m28() >= 30.0f) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim3 **)(p + 0xA8))->m24();
        break;
    }
}
}

extern "C" {
extern "C" void func_00468C20(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 4;
    (*(Anim4 **)(p + 0xA8))->m18(0x3E);
    (*(Anim4 **)(p + 0xA8))->m44();
    *(int *)(p + 0xD4) = 0;
    *(float *)(p + 0x104) = 45.0f + 45.0f * (2.3283064e-10f * mt_rand());
}
}

extern "C" {
extern "C" void func_00468E40(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 2;
    (*(Anim4 **)(p + 0xA8))->m18(0x3F);
    (*(Anim4 **)(p + 0xA8))->m44();
    *(int *)(p + 0xD4) = 0;
    *(float *)(p + 0x104) = 45.0f + 45.0f * (2.3283064e-10f * mt_rand());
}
}

extern "C" {
extern "C" void func_004607C0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 3;
    p[0xCF] = 2;
    (*(Anim4 **)(p + 0xA8))->m40();
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 0xA8))->m1C(0);
        break;
    case 1:
        (*(Anim4 **)(p + 0xA8))->m1C(1);
        break;
    }
    *(int *)(p + 0xD4) = 0;
}
}

extern "C" {
extern "C" void func_004633D0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    switch (mt_rand() % 3) {
    case 0:
        (*(Anim4 **)(p + 0xA8))->m18(1);
        break;
    case 1:
        (*(Anim4 **)(p + 0xA8))->m18(2);
        break;
    case 2:
        (*(Anim4 **)(p + 0xA8))->m18(3);
        break;
    }
}
}

extern "C" {
extern "C" void func_0046A6B0(char *p) {
    *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(*(char **)(p + 4) + 0x20);
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 0xA8))->m18(0x2A);
        break;
    case 1:
        (*(Anim4 **)(p + 0xA8))->m18(0x2D);
        break;
    }
    *(int *)(p + 0xD4) = 0;
    (*(Anim4 **)(p + 0xA8))->m48(6, *(char **)(p + 0x10) + 0x10);
    (*(Anim4 **)(p + 0xA8))->m48(0x384, *(char **)(p + 0x10) + 0x10);
}
}

extern "C" {
extern "C" void func_00462220(char *p) {
    p[0xCD] = 1;
    p[0xCE] = 3;
    p[0xCF] = 6;
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 0xA8))->m1C(8);
        break;
    case 1:
        (*(Anim4 **)(p + 0xA8))->m1C(8);
        break;
    }
    (*(Anim4 **)(p + 0xA8))->m40();
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"(p + 0xE0) : "memory");
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"(p + 0xF0) : "memory");
    *(float *)(p + 0xE4) = 0.0f;
    *(float *)(p + 0xF4) = -1.0f;
    *(int *)(p + 0xD4) = 0;
    *(float *)(p + 0x100) = 10.0f;
}
}

extern "C" {
extern "C" void func_0046A800(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim4 **)(p + 0xA8))->m2C()) {
            switch (mt_rand() & 1) {
            case 0:
                (*(Anim4 **)(p + 0xA8))->m18(0x26);
                break;
            case 1:
                (*(Anim4 **)(p + 0xA8))->m18(0x27);
                break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim4 **)(p + 0xA8))->m24();
        break;
    case 1:
        if ((*(Anim4 **)(p + 0xA8))->m2C()) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim4 **)(p + 0xA8))->m24();
        break;
    }
}
}

extern "C" {
extern "C" void func_004627D0(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim4 **)(p + 0xA8))->m2C()) {
            (*(Anim4 **)(p + 0xA8))->m1C(0x17);
            (*(Anim4 **)(p + 0xA8))->m44();
            *(int *)(p + 0xD4) = 1;
            *(float *)(p + 0x104) = 45.0f + 45.0f * (2.3283064e-10f * mt_rand());
        }
        break;
    case 1:
        if (!((*(Anim4 **)(p + 0xA8))->m28() < *(float *)(p + 0x104))) {
            p[0xCF] = 2;
            (*(Anim4 **)(p + 0xA8))->m1C(6);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim4 **)(p + 0xA8))->m24();
        break;
    case 2:
        if ((*(Anim4 **)(p + 0xA8))->m2C()) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim4 **)(p + 0xA8))->m24();
        break;
    }
}
}

extern "C" {
extern "C" void func_00462AD0(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim4 **)(p + 0xA8))->m2C()) {
            (*(Anim4 **)(p + 0xA8))->m1C(0x18);
            (*(Anim4 **)(p + 0xA8))->m44();
            *(int *)(p + 0xD4) = 1;
            *(float *)(p + 0x104) = 45.0f + 45.0f * (2.3283064e-10f * mt_rand());
        }
        break;
    case 1:
        if (!((*(Anim4 **)(p + 0xA8))->m28() < *(float *)(p + 0x104))) {
            p[0xCF] = 2;
            (*(Anim4 **)(p + 0xA8))->m1C(5);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim4 **)(p + 0xA8))->m24();
        break;
    case 2:
        if ((*(Anim4 **)(p + 0xA8))->m2C()) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim4 **)(p + 0xA8))->m24();
        break;
    }
}
}

extern "C" {
extern "C" void func_00464BE0(char *p) {
    short d;
    float lim;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x100) {
        d = 0x100;
    }
    if (d < -0x100) {
        d = -0x100;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    if ((*(Anim4 **)(p + 0xA8))->m28() >= 25.0f && (*(Anim4 **)(p + 0xA8))->m28() <= 30.0f) {
        ((ObjV *)p)->m6C();
        ((ObjV *)p)->m70();
        d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
        lim = 2731.0f * *(float *)(p + 0xB0);
        if (d > lim) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += lim;
        }
        lim = 2731.0f * *(float *)(p + 0xB0);
        if (d < -lim) {
            *(short *)(*(char **)(p + 0x10) + 0x50) -= lim;
        }
    }
    if ((*(Anim4 **)(p + 0xA8))->m2C()) {
        ((ObjV *)p)->mEC(0xE);
    }
    (*(Anim4 **)(p + 0xA8))->m24();
}
}

extern "C" {
extern "C" void func_00464E60(char *p) {
    short d;
    float lim;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x100) {
        d = 0x100;
    }
    if (d < -0x100) {
        d = -0x100;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    if ((*(Anim4 **)(p + 0xA8))->m28() >= 25.0f && (*(Anim4 **)(p + 0xA8))->m28() <= 30.0f) {
        ((ObjV *)p)->m6C();
        ((ObjV *)p)->m70();
        d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
        lim = 2731.0f * *(float *)(p + 0xB0);
        if (d > lim) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += lim;
        }
        lim = 2731.0f * *(float *)(p + 0xB0);
        if (d < -lim) {
            *(short *)(*(char **)(p + 0x10) + 0x50) -= lim;
        }
    }
    if ((*(Anim4 **)(p + 0xA8))->m2C()) {
        ((ObjV *)p)->mEC(0xE);
    }
    (*(Anim4 **)(p + 0xA8))->m24();
}
}

extern "C" {
extern "C" void func_004650E0(char *p) {
    short d;
    float lim;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x100) {
        d = 0x100;
    }
    if (d < -0x100) {
        d = -0x100;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    if ((*(Anim4 **)(p + 0xA8))->m28() >= 35.0f && (*(Anim4 **)(p + 0xA8))->m28() <= 40.0f) {
        ((ObjV *)p)->m6C();
        ((ObjV *)p)->m70();
        d = ((ObjV *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
        lim = 2731.0f * *(float *)(p + 0xB0);
        if (d > lim) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += lim;
        }
        lim = 2731.0f * *(float *)(p + 0xB0);
        if (d < -lim) {
            *(short *)(*(char **)(p + 0x10) + 0x50) -= lim;
        }
    }
    if ((*(Anim4 **)(p + 0xA8))->m2C()) {
        ((ObjV *)p)->mEC(0xE);
    }
    (*(Anim4 **)(p + 0xA8))->m24();
}
}

extern "C" {
extern "C" void func_00466990(char *p) {
    if (*(int *)(p + 0xD4) != 3) {
        switch (*(int *)(p + 0xD4)) {
        case 0:
            if ((*(Anim4 **)(p + 0xA8))->m28() >= 10.0f) {
                p[0xCD] = 1;
                (*(Anim4 **)(p + 0xA8))->m18(0x38);
                *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x24) = 33.0f;
                *(float *)(*(char **)(p + 0x10) + 0x28) = 8.0f;
                *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
                *(float *)(*(char **)(p + 0x10) + 0x30) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x34) = -1.5f;
                *(float *)(*(char **)(p + 0x10) + 0x38) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x3C) = 1.0f;
                *(int *)(p + 0xD4) = 1;
            }
            break;
        case 1:
            *(float *)(*(char **)(p + 0x10) + 0x20) += *(float *)(*(char **)(p + 0x10) + 0x30);
            *(float *)(*(char **)(p + 0x10) + 0x24) += *(float *)(*(char **)(p + 0x10) + 0x34);
            *(float *)(*(char **)(p + 0x10) + 0x28) += *(float *)(*(char **)(p + 0x10) + 0x38);
            if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f && (*(Anim4 **)(p + 0xA8))->m30()) {
                p[0xCD] = 0;
                (*(Anim4 **)(p + 0xA8))->m18(0x39);
                *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
                *(float *)(*(char **)(p + 0x10) + 0x30) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x38) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x3C) = 1.0f;
                *(int *)(p + 0xD4) = 2;
            }
            break;
        case 2:
            if ((*(Anim4 **)(p + 0xA8))->m2C()) {
                p[0xCD] = 0;
                ((ObjV *)p)->mEC(0xE);
            }
            break;
        }
    } else {
        if ((*(Anim4 **)(p + 0xA8))->m28() >= 3.0f && (*(Anim4 **)(p + 0xA8))->m28() <= 28.0f) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += 1310.0f * *(float *)(p + 0xB0);
        }
        if ((*(Anim4 **)(p + 0xA8))->m2C()) {
            ((ObjV *)p)->mEC(0xE);
        }
        (*(Anim4 **)(p + 0xA8))->m24();
    }
}
}

extern "C" {
extern "C" void func_00466200(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x35);
}
}

extern "C" {
extern "C" void func_00467BC0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x2E);
}
}

extern "C" {
extern "C" void func_00469E60(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x44);
}
}

extern "C" {
extern "C" void func_00469F00(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x45);
}
}

extern "C" {
extern "C" void func_00469FA0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x46);
}
}

extern "C" {
extern "C" void func_0046A040(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x47);
}
}

extern "C" {
extern "C" void func_0046C130(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x55);
}
}

extern "C" {
extern "C" void func_0046C1D0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x56);
}
}

extern "C" {
extern "C" void func_0045B0F0(char *p) {
    (*(Anim4 **)(p + 0xA8))->m48(0x1388, *(char **)(p + 0x10) + 0x10);
}
}

extern "C" {
extern "C" void func_00463990(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 4;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x30);
}
}

extern "C" {
extern "C" void func_00463BB0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 4;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x31);
}
}

extern "C" {
extern "C" void func_00465BB0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 1;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0xD);
}
}

class ObjFC {
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
    virtual void mB4(int);
    virtual void e44();
    virtual void e45();
    virtual void e46();
    virtual void e47();
    virtual void e48();
    virtual void e49();
    virtual void e50();
    virtual void e51();
    virtual void e52();
    virtual void e53();
    virtual void e54();
    virtual void e55();
    virtual void e56();
    virtual void e57();
    virtual void e58();
    virtual void e59();
    virtual void e60();
    virtual unsigned char mFC();
};

extern "C" {
extern "C" void func_0045AEC0(ObjFC *o, signed char k) {
    if (*(unsigned char *)((char *)o + 0x1D) != 3) {
        switch (k) {
        case 2:
            if (o->mFC() == 4) {
                o->mB4(0x12);
            }
            if (o->mFC() == 5) {
                o->mB4(0x13);
            }
            break;
        }
    }
}
}

extern "C" {
extern "C" void func_0045D1D0(char *p) {
    switch (*(unsigned char *)(p + 0xB5)) {
    case 0:
        (*(Sub0C **)(p + 0xC))->m28(0x38);
        *(unsigned char *)(p + 0xB5) = 1;
        break;
    case 1:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x38) {
            (*(Sub0C **)(p + 0xC))->m28(0x1F);
            *(unsigned char *)(p + 0xB5) = 2;
        }
        break;
    case 2:
        if ((*(Sub0C **)(p + 0xC))->m0C() != 0x1F) {
            ((ObjB4 *)p)->mB4(0x17);
        }
        break;
    }
}
}

extern "C" {
void func_0046B630(char *p) {
    extern void func_00330BD0(char *, int, char *, int, int);
    extern char D_01DFABA0[];
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim5 **)(p + 0xA8))->m28() < 170.0f)) {
            (*(Anim5 **)(p + 0xA8))->m40();
            (*(Anim5 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim5 **)(p + 0xA8))->m24();
        break;
    case 1:
        (*(Anim5 **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}
}

class Anim7 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m18(int);
};

class Obj6C {
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
    virtual void d27();
    virtual short m78(short, short);
};

extern "C" {
extern "C" void func_004646B0(char *p) {
    *(unsigned char *)(p + 0xCD) = 0;
    *(unsigned char *)(p + 0xCE) = 0;
    *(unsigned char *)(p + 0xCF) = 0;
    (*(Anim7 **)(p + 0xA8))->m18(0x37);
    *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
    *(float *)(*(char **)(p + 0x10) + 0x30) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x38) = 0.0f;
    *(float *)(*(char **)(p + 0x10) + 0x3C) = 1.0f;
    ((Obj6C *)p)->m6C();
    ((Obj6C *)p)->m70();
    *(short *)(p + 0xC0) = ((Obj6C *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) / 10;
    *(float *)(p + 0xC4) = 10.0f;
    *(int *)(p + 0xD4) = 0;
}
}

class ObjFC2 {
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
    virtual unsigned char mFC();
};

extern "C" {
extern "C" int func_0045ADB0(char *p, int k) {
    if (*(unsigned char *)(p + 0x1D) == 3) {
        return 0;
    }
    switch ((signed char)k) {
    case 0:
        if (((ObjFC2 *)p)->mFC() == 4) {
            return 1;
        }
        if (((ObjFC2 *)p)->mFC() == 5) {
            return 1;
        }
        break;
    case 2:
        if (((ObjFC2 *)p)->mFC() == 4) {
            return 1;
        }
        if (((ObjFC2 *)p)->mFC() == 5) {
            return 1;
        }
        break;
    }
    return 0;
}
}

class Anim9 {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(int);
    virtual void d6();
    virtual void m24();
    virtual void d8();
    virtual int m2C();
    virtual int m30();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void m44();
};

extern "C" {
extern "C" void func_004665C0(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim9 **)(p + 0xA8))->m30() != 0) {
            *(unsigned char *)(p + 0xCF) = 4;
            (*(Anim9 **)(p + 0xA8))->m44();
            (*(Anim9 **)(p + 0xA8))->m1C(0xD);
            *(int *)(p + 0xD4) = 1;
        }
        ((ObjE4 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        break;
    case 1:
        if ((*(Anim9 **)(p + 0xA8))->m2C() != 0) {
            *(unsigned char *)(p + 0xCD) = 0;
            (*(Anim9 **)(p + 0xA8))->m44();
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim9 **)(p + 0xA8))->m24();
        break;
    case 2:
        break;
    }
}
}

class SelfAim {
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
    virtual void d74();
    virtual short m78(short, short);
};

class AnimA8 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
};

static inline short aim_ang(char *p) {
    ((SelfAim *)p)->m6C();
    ((SelfAim *)p)->m70();
    return ((SelfAim *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
}

extern "C" {
extern "C" void func_004671D0(char *p) {
    short d;
    *(unsigned char *)(p + 0xCD) = 0;
    *(unsigned char *)(p + 0xCE) = 0;
    *(unsigned char *)(p + 0xCF) = 0;
    d = aim_ang(p) + 0x38E4;
    if (d > 0 && d < 0x71C7) {
        switch (mt_rand() & 1) {
        case 0:
            (*(AnimA8 **)(p + 0xA8))->m18(8);
            *(short *)(p + 0xC0) = aim_ang(p) / 100;
            *(float *)(p + 0xC4) = 25.0f;
            *(int *)(p + 0xD4) = 3;
            break;
        case 1:
            (*(AnimA8 **)(p + 0xA8))->m18(9);
            *(short *)(p + 0xC0) = aim_ang(p) / 100;
            *(float *)(p + 0xC4) = 25.0f;
            *(int *)(p + 0xD4) = 4;
            break;
        }
    } else {
        (*(AnimA8 **)(p + 0xA8))->m18(4);
        *(short *)(p + 0xC0) = aim_ang(p) / 25;
        *(float *)(p + 0xC4) = 25.0f;
        *(int *)(p + 0xD4) = 0;
    }
}
}

extern "C" {
extern "C" void func_0046AA50(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(AnimBE **)(p + 0xA8))->m28() < 40.0f)) {
            (*(AnimBE **)(p + 0xA8))->m18(0x38);
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 0.0f;
            *(float *)(p + 0xE8) = 4.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -1.5f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((SelfBE *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        ((SelfBE *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if ((*(AnimBE **)(p + 0xA8))->m30() != 0) {
                *(unsigned char *)(p + 0xCD) = 0;
                (*(AnimBE **)(p + 0xA8))->m18(0x39);
                (*(AnimBE **)(p + 0xA8))->m44();
                *(float *)(*(char **)(p + 0x10) + 0x20) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x28) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x2C) = 1.0f;
                *(float *)(*(char **)(p + 0x10) + 0x30) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x38) = 0.0f;
                *(float *)(*(char **)(p + 0x10) + 0x3C) = 1.0f;
                *(int *)(p + 0xD4) = 2;
            }
        }
        break;
    case 2:
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            switch (mt_rand() & 1) {
            case 0:
                (*(AnimBE **)(p + 0xA8))->m18(0x26);
                break;
            case 1:
                (*(AnimBE **)(p + 0xA8))->m18(0x27);
                break;
            }
            *(int *)(p + 0xD4) = 3;
        }
        break;
    case 3:
        if ((*(AnimBE **)(p + 0xA8))->m2C() != 0) {
            ((SelfBE *)p)->mEC(0xE);
        }
        (*(AnimBE **)(p + 0xA8))->m24();
        break;
    }
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
void func_0045A480(char *p0, int p1) {
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
            v4 = ((VB4_1_ii *)v2)->m(20);
            break;
        case 1:
            v4 = ((VB4_1_ii *)v2)->m(21);
            break;
        }
        *(char *)(v2 + 29) = 3;
    }
}
}

class V34_3_iiii {
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
    virtual int m(int, int, int);
};

extern "C" {
int func_0045A5F0(char *p0, int p1, int p2) {
    int v0;
    int v1;
    v0 = *(unsigned char *)(p0 + 29);
    if (v0 != 3) {
        v1 = ((V34_3_iiii *)p0)->m(p1, p2, v0);
    }
    return v1;
}
}

extern "C" {
extern char D_00579720[];
}

class V64_5_pifffv {
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
    virtual void m(char *, int, float, float, float);
};

class V68_2_ppi {
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
    virtual int m(char *, char *);
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
int func_0045AAF0(char *p0, int p1, int p2) {
    char *v0;
    char *v1;
    char *v2;
    int v3;
    v0 = p0;
    v1 = (char *)p1;
    v2 = (char *)p2;
    if (*(unsigned char *)(p0 + 29) != 3) {
        ((V64_5_pifffv *)v2)->m(D_00579720, 0, *(float *)(v1 + 4), 1.0f, 1.0f);
        *(char *)(v0 + 60) = *(signed char *)(v1 + 0);
        *(char *)(v0 + 61) = *(signed char *)(v1 + 1);
        *(char *)(v0 + 62) = *(signed char *)(v1 + 2);
        *(float *)(v0 + 64) = *(float *)(v1 + 4);
        *(float *)(v0 + 68) = *(float *)(v1 + 8);
        *(float *)(v0 + 72) = *(float *)(v1 + 12);
        *(float *)(v0 + 76) = *(float *)(v1 + 16);
        *(float *)(v0 + 80) = *(float *)(v1 + 20);
        *(char *)(v0 + 84) = *(signed char *)(v1 + 24);
        *(float *)(v0 + 88) = *(float *)(v1 + 28);
        *(char *)(v0 + 92) = *(signed char *)(v1 + 32);
        *(float *)(v0 + 96) = *(float *)(v1 + 36);
        *(float *)(v0 + 100) = *(float *)(v1 + 40);
        *(float *)(v0 + 104) = *(float *)(v1 + 44);
        *(char *)(v0 + 108) = *(unsigned char *)(v1 + 48);
        *(int *)(v0 + 112) = *(int *)(v1 + 52);
        *(float *)(v0 + 116) = *(float *)(v1 + 56);
        *(char *)(v0 + 120) = *(signed char *)(v1 + 60);
        *(char *)(v0 + 121) = *(signed char *)(v1 + 61);
        *(char *)(v0 + 122) = *(signed char *)(v1 + 62);
        *(int *)(v0 + 276) = (*(int *)(v0 + 276) + 1);
        if (!((unsigned int)*(int *)(v0 + 276) < (unsigned int)5)) {
            ((VB4_1_iv *)v0)->m(17);
        } else {
            ((VB4_1_iv *)v0)->m(54);
        }
        v3 = ((V68_2_ppi *)v0)->m(v1, v2);
    }
    return v3;
}
}

extern "C" {
int func_0045B350(char *p0) {
    int v0;
    int v1;
    int v2;
    v0 = (*(signed char *)(*(char **)(p0 + 4) + 0) + -8);
    switch (v0) {
    default:
        v2 = ((VB4_1_ii *)p0)->m(24);
        break;
    case 0:
    case 1:
    case 2:
    case 3:
        v2 = ((VB4_1_ii *)p0)->m(25);
        break;
    case 8:
    case 9:
    case 10:
    case 11:
        v2 = ((VB4_1_ii *)p0)->m(26);
        break;
    }
    return v2;
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

class V7C_0_f {
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
    virtual float m(void);
};

class V80_1_fi {
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
    virtual int m(float);
};

class VC_0_i {
public:
    virtual void d0();
    virtual int m(void);
};

extern "C" {
void func_0045B3E0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    float tmp2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    case 0:
        v2 = ((V28_1_ii *)*(char **)(v0 + 12))->m(0);
        *(char *)(v0 + 181) = 1;
        break;
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 0) {
            tmp2 = ((V7C_0_f *)v0)->m();
            v2 = ((V80_1_fi *)v0)->m(tmp2);
            switch (v2) {
            case 0:
            case 1:
                v2 = ((VB4_1_ii *)v0)->m(57);
                break;
            case 2:
            case 3:
                v2 = ((VB4_1_ii *)v0)->m(67);
                break;
            case 4:
                v2 = ((VB4_1_ii *)v0)->m(68);
                break;
            case 5:
                v2 = ((VB4_1_ii *)v0)->m(69);
                break;
            }
        }
        break;
    }
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

extern "C" {
void func_0045B660(char *p0) {
    char *v0;
    int v1;
    int v2;
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
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 2) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045B700(char *p0) {
    char *v0;
    int v1;
    int v2;
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
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 3) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045B7A0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(4);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 4) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045B840(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(5);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 5) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045B8E0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(6);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 6) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045B980(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(7);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 7) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045BA20(char *p0) {
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
        if (v2 != 8) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045BAC0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(12);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 12) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045BB60(char *p0) {
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
        if (v2 != 9) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045BC00(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(10);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 10) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045BCA0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(11);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 11) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045BD40(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(13);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 13) {
            v2 = ((VB4_1_ii *)v0)->m(22);
        }
        return;
    }
}
}

extern "C" {
void func_0045BDE0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        v2 = ((V28_1_ii *)*(char **)(v0 + 12))->m(14);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        if (*(unsigned char *)(v0 + 28) == 1) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

class V108_1_fi {
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
    virtual int m(float);
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

class VA0_0_i {
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
    virtual int m(void);
};

extern "C" {
void func_0045C1C0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(32);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        ((V84_0_v *)v0)->m();
        tmp1 = ((VA0_0_i *)v0)->m();
        if (tmp1 != 0) {
            tmp2 = ((VB4_1_ii *)v0)->m(40);
            return;
        } else {
            v2 = ((V88_0_i *)v0)->m();
            if (v2 != 0) {
                v2 = ((V108_1_fi *)v0)->m(3.0f);
            }
            return;
        }
        break;
    }
}
}

extern "C" {
void func_0045C2A0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(16);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 16) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C340(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(17);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 17) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C3E0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(18);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 18) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C480(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(19);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 19) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C520(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(20);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 20) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C5C0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(21);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 21) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C660(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(22);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 22) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C700(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(23);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 23) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C790(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(24);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 24) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C830(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(25);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 25) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045C8D0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(26);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        return;
    }
}
}

extern "C" {
void func_0045C950(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(27);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 27) {
            v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
            if (v2 != 29) {
                v2 = ((VB4_1_ii *)v0)->m(23);
            }
        }
        return;
    }
}
}

extern "C" {
void func_0045CA10(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(28);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 28) {
            v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
            if (v2 != 29) {
                v2 = ((VB4_1_ii *)v0)->m(23);
            }
        }
        return;
    }
}
}

extern "C" {
void func_0045CC00(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(31);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 31) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

class V8C_0_i {
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
    virtual int m(void);
};

extern "C" {
void func_0045CCA0(char *p0) {
    int v0;
    char *v1;
    int v2;
    int tmp2;
    v0 = *(unsigned char *)(p0 + 181);
    v1 = p0;
    switch (v0) {
    case 0:
        ((V28_1_iv *)*(char **)(v1 + 12))->m(32);
        *(char *)(v1 + 181) = 1;
        /* fall through */
    case 1:
        tmp2 = ((VC_0_i *)*(char **)(v1 + 12))->m();
        if (tmp2 != 32) {
            ((VB4_1_iv *)v1)->m(23);
        }
        break;
    }
    ((V84_0_v *)v1)->m();
    v2 = ((V88_0_i *)v1)->m();
    if (v2 != 0) {
        v2 = ((V8C_0_i *)v1)->m();
    }
}
}

extern "C" {
void func_0045CD70(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(33);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 33) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045CE10(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(34);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        return;
    }
}
}

extern "C" {
void func_0045CE90(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(35);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 35) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D090(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(38);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 38) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D130(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(39);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 39) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D2B0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(57);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 57) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D350(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(41);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 41) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D3F0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(42);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 42) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D490(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(43);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 43) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D530(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(48);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 48) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D5D0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(49);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 49) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D670(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(50);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 50) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D710(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(58);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 58) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D7B0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(59);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 59) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D850(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(66);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 66) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045D8F0(char *p0) {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        ((V28_1_iv *)*(char **)(v0 + 12))->m(67);
        *(char *)(v0 + 181) = 1;
        /* fall through */
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 67) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

extern "C" {
void func_0045DBF0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    v0 = p0;
    v1 = *(unsigned char *)(p0 + 181);
    switch (v1) {
    default:
        return;
    case 0:
        tmp1 = ((V28_1_ii *)*(char **)(v0 + 12))->m(71);
        *(char *)(v0 + 181) = 1;
        return;
    case 1:
        v2 = ((VC_0_i *)*(char **)(v0 + 12))->m();
        if (v2 != 71) {
            v2 = ((VB4_1_ii *)v0)->m(23);
        }
        return;
    }
}
}

class V1C_1_iv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m(int);
};

class V40_0_v {
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
    virtual void m(void);
};

class VE4_4_ppiii {
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
    virtual int m(char *, char *, int, int);
};

extern "C" {
int func_00460A20(char *p0) {
    float func_00131BA0(int);
    float func_00131C20(int);
    float tmp8;
    float tmp10;
    float tmp13;
    float tmp14;
    int tmp19;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 3;
    *(char *)(p0 + 207) = 1;
    ((V1C_1_iv *)*(char **)(p0 + 168))->m(16);
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(104, (*(int *)(p0 + 16) + 16));
    *(int *)(p0 + 224) = 0;
    *(int *)(p0 + 228) = 0x41700000;
    *(int *)(p0 + 232) = 0xc1200000;
    *(int *)(p0 + 236) = 0x3f800000;
    *(int *)(p0 + 240) = 0;
    *(int *)(p0 + 244) = 0xbf0a3d71;
    *(int *)(p0 + 248) = 0;
    *(int *)(p0 + 252) = 0x3f800000;
    tmp8 = func_00131BA0((short)((short)(int)(0.5f + ((65536.0f * *(float *)(p0 + 76)) / 360.0f)) & 65535));
    tmp10 = (*(float *)(p0 + 116) * tmp8);
    tmp13 = func_00131C20((short)((short)(int)(0.5f + ((65536.0f * *(float *)(p0 + 76)) / 360.0f)) & 65535));
    tmp14 = (*(float *)(p0 + 116) * tmp13);
    *(int *)(p0 + 224) = 0;
    *(float *)(p0 + 228) = tmp10;
    *(float *)(p0 + 232) = -tmp14;
    *(int *)(p0 + 236) = 0x3f800000;
    tmp19 = ((VE4_4_ppiii *)p0)->m((p0 + 224), (p0 + 240), (*(int *)(p0 + 16) + 32), (*(int *)(p0 + 16) + 48));
    *(int *)(p0 + 212) = 0;
    return tmp19;
}
}

extern "C" {
int func_004612A0(char *p0) {
    float func_00131BA0(int);
    float func_00131C20(int);
    float tmp8;
    float tmp10;
    float tmp13;
    float tmp14;
    int tmp19;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 3;
    *(char *)(p0 + 207) = 1;
    ((V1C_1_iv *)*(char **)(p0 + 168))->m(18);
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(104, (*(int *)(p0 + 16) + 16));
    *(int *)(p0 + 224) = 0;
    *(int *)(p0 + 228) = 0x41100000;
    *(int *)(p0 + 232) = 0x41200000;
    *(int *)(p0 + 236) = 0x3f800000;
    *(int *)(p0 + 240) = 0;
    *(int *)(p0 + 244) = 0xbf0a3d71;
    *(int *)(p0 + 248) = 0;
    *(int *)(p0 + 252) = 0x3f800000;
    tmp8 = func_00131BA0((short)((short)(int)(0.5f + ((65536.0f * *(float *)(p0 + 76)) / 360.0f)) & 65535));
    tmp10 = (*(float *)(p0 + 116) * tmp8);
    tmp13 = func_00131C20((short)((short)(int)(0.5f + ((65536.0f * *(float *)(p0 + 76)) / 360.0f)) & 65535));
    tmp14 = (*(float *)(p0 + 116) * tmp13);
    *(int *)(p0 + 224) = 0;
    *(float *)(p0 + 228) = tmp10;
    *(float *)(p0 + 232) = tmp14;
    *(int *)(p0 + 236) = 0x3f800000;
    tmp19 = ((VE4_4_ppiii *)p0)->m((p0 + 224), (p0 + 240), (*(int *)(p0 + 16) + 32), (*(int *)(p0 + 16) + 48));
    *(int *)(p0 + 212) = 0;
    return tmp19;
}
}

extern "C" {
int func_00461840(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp7;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 7;
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    ((V1C_1_iv *)*(char **)(p0 + 168))->m(12);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(14, (*(int *)(p0 + 16) + 16));
    tmp7 = func_00330BD0(D_01DFABA0, 39, (*(int *)(p0 + 16) + 16), 8, 0);
    *(int *)(p0 + 212) = 0;
    return tmp7;
}
}

class V44_0_v {
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
    virtual void m(void);
};

extern "C" {
void func_004618E0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp5;
    int tmp7;
    v0 = p0;
    v1 = *(int *)(p0 + 212);
    switch (v1) {
    default:
        return;
    case 0:
        tmp1 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp1 != 0) {
            ((V44_0_v *)*(char **)(v0 + 168))->m();
            ((V1C_1_iv *)*(char **)(v0 + 168))->m(6);
            *(int *)(v0 + 212) = 1;
        }
        tmp5 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        return;
    case 1:
        tmp7 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp7 != 0) {
            ((VEC_1_iv *)v0)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        return;
    }
}
}

extern "C" {
int func_004619E0(char *p0) {
    float func_00131BA0(int);
    float func_00131C20(int);
    float tmp5;
    float tmp7;
    float tmp10;
    float tmp11;
    int tmp16;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 7;
    ((V1C_1_iv *)*(char **)(p0 + 168))->m(12);
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    *(int *)(p0 + 224) = 0;
    *(int *)(p0 + 228) = 0xc2200000;
    *(int *)(p0 + 232) = 0;
    *(int *)(p0 + 236) = 0x3f800000;
    *(int *)(p0 + 240) = 0;
    *(int *)(p0 + 244) = 0xbf0a3d71;
    *(int *)(p0 + 248) = 0;
    *(int *)(p0 + 252) = 0x3f800000;
    tmp5 = func_00131BA0((short)((short)(int)(0.5f + ((65536.0f * *(float *)(p0 + 76)) / 360.0f)) & 65535));
    tmp7 = (*(float *)(p0 + 116) * tmp5);
    tmp10 = func_00131C20((short)((short)(int)(0.5f + ((65536.0f * *(float *)(p0 + 76)) / 360.0f)) & 65535));
    tmp11 = (*(float *)(p0 + 116) * tmp10);
    *(int *)(p0 + 224) = 0;
    *(float *)(p0 + 228) = tmp7;
    *(float *)(p0 + 232) = -tmp11;
    *(int *)(p0 + 236) = 0x3f800000;
    tmp16 = ((VE4_4_ppiii *)p0)->m((p0 + 224), (p0 + 240), (*(int *)(p0 + 16) + 32), (*(int *)(p0 + 16) + 48));
    *(int *)(p0 + 212) = 0;
    return tmp16;
}
}

class V1C_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual int m(int);
};

extern "C" {
int func_00461D10(char *p0) {
    int tmp2;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 2;
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    tmp2 = ((V1C_1_ii *)*(char **)(p0 + 168))->m(15);
    *(int *)(p0 + 212) = 0;
    return tmp2;
}
}

extern "C" {
int func_00461D70(char *p0) {
    char *v0;
    int tmp1;
    int tmp4;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((V44_0_v *)*(char **)(v0 + 168))->m();
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp4 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp4;
}
}

class VE4_5_ppiipi {
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
    virtual int m(char *, char *, int, int, char *);
};

extern "C" {
int func_00461DF0(char *p0) {
    char *tmp5;
    int tmp9;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 6;
    ((V1C_1_iv *)*(char **)(p0 + 168))->m(7);
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    tmp5 = *(char **)(p0 + 168);
    *(float *)(*(char **)(p0 + 16) + 20) = (*(float *)(*(char **)(p0 + 16) + 20) + *(float *)(*(char **)(p0 + 168) + 36));
    *(int *)(p0 + 224) = 0;
    *(int *)(p0 + 228) = 0x41a80000;
    *(int *)(p0 + 232) = 0;
    *(int *)(p0 + 236) = 0x3f800000;
    *(int *)(p0 + 240) = 0;
    *(int *)(p0 + 244) = 0xbf333333;
    *(int *)(p0 + 248) = 0;
    *(int *)(p0 + 252) = 0x3f800000;
    tmp9 = ((VE4_5_ppiipi *)p0)->m((p0 + 224), (p0 + 240), (*(int *)(p0 + 16) + 32), (*(int *)(p0 + 16) + 48), tmp5);
    *(int *)(p0 + 212) = 0;
    return tmp9;
}
}

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

extern "C" {
int func_004626E0(char *p0) {
    int v0;
    char *v1;
    int tmp6;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 4;
    v0 = *(signed char *)(p0 + 62);
    v1 = p0;
    switch (v0) {
    case 0:
        ((V1C_1_iv *)*(char **)(v1 + 168))->m(13);
        break;
    case 1:
        ((V1C_1_iv *)*(char **)(v1 + 168))->m(25);
        break;
    }
    ((V40_0_v *)*(char **)(v1 + 168))->m();
    tmp6 = ((V48_2_iii *)*(char **)(v1 + 168))->m(14, (*(int *)(v1 + 16) + 16));
    *(int *)(*(char **)(v1 + 16) + 32) = 0;
    *(int *)(*(char **)(v1 + 16) + 36) = 0;
    *(int *)(*(char **)(v1 + 16) + 40) = 0;
    *(int *)(*(char **)(v1 + 16) + 48) = 0;
    *(int *)(*(char **)(v1 + 16) + 52) = 0x80000000;
    *(int *)(*(char **)(v1 + 16) + 56) = 0;
    *(int *)(v1 + 212) = 0;
    return tmp6;
}
}

extern "C" {
int func_004629E0(char *p0) {
    int v0;
    char *v1;
    int tmp6;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 5;
    v0 = *(signed char *)(p0 + 62);
    v1 = p0;
    switch (v0) {
    case 0:
        ((V1C_1_iv *)*(char **)(v1 + 168))->m(14);
        break;
    case 1:
        ((V1C_1_iv *)*(char **)(v1 + 168))->m(26);
        break;
    }
    ((V40_0_v *)*(char **)(v1 + 168))->m();
    tmp6 = ((V48_2_iii *)*(char **)(v1 + 168))->m(14, (*(int *)(v1 + 16) + 16));
    *(int *)(*(char **)(v1 + 16) + 32) = 0;
    *(int *)(*(char **)(v1 + 16) + 36) = 0;
    *(int *)(*(char **)(v1 + 16) + 40) = 0;
    *(int *)(*(char **)(v1 + 16) + 48) = 0;
    *(int *)(*(char **)(v1 + 16) + 52) = 0x80000000;
    *(int *)(*(char **)(v1 + 16) + 56) = 0;
    *(int *)(v1 + 212) = 0;
    return tmp6;
}
}

class V40_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00462CE0(char *p0) {
    int tmp2;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 2;
    ((V1C_1_iv *)*(char **)(p0 + 168))->m(20);
    tmp2 = ((V40_0_i *)*(char **)(p0 + 168))->m();
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0x3f800000;
    return tmp2;
}
}

class VEC_1_ii {
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
    virtual int m(int);
};

extern "C" {
int func_00462D80(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    v1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (v1 != 0) {
        ((V44_0_v *)*(char **)(v0 + 168))->m();
        v1 = ((VEC_1_ii *)v0)->m(14);
    }
    return v1;
}
}

extern "C" {
int func_00462DF0(char *p0) {
    int tmp2;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 6;
    ((V1C_1_iv *)*(char **)(p0 + 168))->m(21);
    tmp2 = ((V40_0_i *)*(char **)(p0 + 168))->m();
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"((p0 + 224)) : "memory");
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"((p0 + 240)) : "memory");
    *(float *)(p0 + 228) = 0.0f;
    *(float *)(p0 + 244) = -0.5400000214576721f;
    *(int *)(p0 + 212) = 0;
    *(float *)(p0 + 256) = 10.0f;
    return tmp2;
}
}

class V2C_2_iii {
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
    virtual int m(int, int);
};

class V30_0_i {
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
    virtual int m(void);
};

class VE4_4_ppiiv {
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
    virtual void m(char *, char *, int, int);
};

extern "C" {
int func_00462EA0(char *p0, int p1) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int v0;
    char *v1;
    int v2;
    int tmp0;
    int tmp13;
    int tmp17;
    int tmp21;
    v0 = *(int *)(p0 + 212);
    v1 = p0;
    if (v0 != 4) {
        tmp0 = 3;
        if (v0 != tmp0) {
            switch (v0) {
            case 0:
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((v1 + 224)), "r"((*(int *)(v1 + 16) + 32)) : "memory");
                if (*(float *)(v1 + 256) < 0.0f) {
                    *(int *)(v1 + 212) = 1;
                }
                *(float *)(v1 + 256) = (*(float *)(v1 + 256) - *(float *)(v1 + 176));
                break;
            case 1:
                ((VE4_4_ppiiv *)p0)->m((v1 + 224), (v1 + 240), (*(int *)(v1 + 16) + 32), (*(int *)(v1 + 16) + 48));
                v2 = ((V30_0_i *)*(char **)(v1 + 168))->m();
                if (v2 != 0) {
                    *(char *)(v1 + 205) = 0;
                    *(char *)(v1 + 207) = 4;
                    ((V1C_1_iv *)*(char **)(v1 + 168))->m(13);
                    ((V44_0_v *)*(char **)(v1 + 168))->m();
                    v2 = func_00330BD0(D_01DFABA0, 39, (*(int *)(v1 + 16) + 16), 8, 0);
                    *(int *)(v1 + 212) = 2;
                }
                break;
            case 2:
                tmp13 = ((V2C_0_i *)*(char **)(v1 + 168))->m();
                if (tmp13 != 0) {
                    ((V1C_1_iv *)*(char **)(v1 + 168))->m(23);
                    *(int *)(v1 + 212) = 3;
                }
                v2 = ((V24_0_i *)*(char **)(v1 + 168))->m();
                break;
            }
        } else {
            tmp17 = ((V2C_2_iii *)*(char **)(v1 + 168))->m(p1, v0);
            if (tmp17 != 0) {
                ((V1C_1_iv *)*(char **)(v1 + 168))->m(6);
                *(int *)(v1 + 212) = 4;
            }
            v2 = ((V24_0_i *)*(char **)(v1 + 168))->m();
        }
    } else {
        tmp21 = ((V2C_2_iii *)*(char **)(v1 + 168))->m(p1, v0);
        if (tmp21 != 0) {
            ((VEC_1_iv *)v1)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v1 + 168))->m();
    }
    return v2;
}
}

class V450_0_i {
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
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void d191();
    virtual void d192();
    virtual void d193();
    virtual void d194();
    virtual void d195();
    virtual void d196();
    virtual void d197();
    virtual void d198();
    virtual void d199();
    virtual void d200();
    virtual void d201();
    virtual void d202();
    virtual void d203();
    virtual void d204();
    virtual void d205();
    virtual void d206();
    virtual void d207();
    virtual void d208();
    virtual void d209();
    virtual void d210();
    virtual void d211();
    virtual void d212();
    virtual void d213();
    virtual void d214();
    virtual void d215();
    virtual void d216();
    virtual void d217();
    virtual void d218();
    virtual void d219();
    virtual void d220();
    virtual void d221();
    virtual void d222();
    virtual void d223();
    virtual void d224();
    virtual void d225();
    virtual void d226();
    virtual void d227();
    virtual void d228();
    virtual void d229();
    virtual void d230();
    virtual void d231();
    virtual void d232();
    virtual void d233();
    virtual void d234();
    virtual void d235();
    virtual void d236();
    virtual void d237();
    virtual void d238();
    virtual void d239();
    virtual void d240();
    virtual void d241();
    virtual void d242();
    virtual void d243();
    virtual void d244();
    virtual void d245();
    virtual void d246();
    virtual void d247();
    virtual void d248();
    virtual void d249();
    virtual void d250();
    virtual void d251();
    virtual void d252();
    virtual void d253();
    virtual void d254();
    virtual void d255();
    virtual void d256();
    virtual void d257();
    virtual void d258();
    virtual void d259();
    virtual void d260();
    virtual void d261();
    virtual void d262();
    virtual void d263();
    virtual void d264();
    virtual void d265();
    virtual void d266();
    virtual void d267();
    virtual void d268();
    virtual void d269();
    virtual void d270();
    virtual void d271();
    virtual void d272();
    virtual void d273();
    virtual int m(void);
};

class V468_0_i {
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
    virtual void d188();
    virtual void d189();
    virtual void d190();
    virtual void d191();
    virtual void d192();
    virtual void d193();
    virtual void d194();
    virtual void d195();
    virtual void d196();
    virtual void d197();
    virtual void d198();
    virtual void d199();
    virtual void d200();
    virtual void d201();
    virtual void d202();
    virtual void d203();
    virtual void d204();
    virtual void d205();
    virtual void d206();
    virtual void d207();
    virtual void d208();
    virtual void d209();
    virtual void d210();
    virtual void d211();
    virtual void d212();
    virtual void d213();
    virtual void d214();
    virtual void d215();
    virtual void d216();
    virtual void d217();
    virtual void d218();
    virtual void d219();
    virtual void d220();
    virtual void d221();
    virtual void d222();
    virtual void d223();
    virtual void d224();
    virtual void d225();
    virtual void d226();
    virtual void d227();
    virtual void d228();
    virtual void d229();
    virtual void d230();
    virtual void d231();
    virtual void d232();
    virtual void d233();
    virtual void d234();
    virtual void d235();
    virtual void d236();
    virtual void d237();
    virtual void d238();
    virtual void d239();
    virtual void d240();
    virtual void d241();
    virtual void d242();
    virtual void d243();
    virtual void d244();
    virtual void d245();
    virtual void d246();
    virtual void d247();
    virtual void d248();
    virtual void d249();
    virtual void d250();
    virtual void d251();
    virtual void d252();
    virtual void d253();
    virtual void d254();
    virtual void d255();
    virtual void d256();
    virtual void d257();
    virtual void d258();
    virtual void d259();
    virtual void d260();
    virtual void d261();
    virtual void d262();
    virtual void d263();
    virtual void d264();
    virtual void d265();
    virtual void d266();
    virtual void d267();
    virtual void d268();
    virtual void d269();
    virtual void d270();
    virtual void d271();
    virtual void d272();
    virtual void d273();
    virtual void d274();
    virtual void d275();
    virtual void d276();
    virtual void d277();
    virtual void d278();
    virtual void d279();
    virtual int m(void);
};

extern "C" {
int func_004632C0(char *p0) {
    int v0;
    char *v1;
    int v2;
    int tmp0;
    int tmp1;
    int tmp3;
    v0 = *(int *)(p0 + 200);
    v1 = p0;
    switch (v0) {
    case 13:
        tmp0 = ((V450_0_i *)p0)->m();
        return tmp0;
    case 23:
        tmp1 = ((V468_0_i *)p0)->m();
        return tmp1;
    }
    tmp3 = ((V2C_0_i *)*(char **)(v1 + 168))->m();
    if (tmp3 != 0) {
        ((VEC_1_iv *)v1)->m(14);
        ((V44_0_v *)*(char **)(v1 + 168))->m();
        ((V48_2_iiv *)*(char **)(v1 + 168))->m(900, (*(int *)(v1 + 16) + 16));
    }
    v2 = ((V24_0_i *)*(char **)(v1 + 168))->m();
    return v2;
}
}

extern "C" {
int func_004635F0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(47);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
extern char D_0055508C[];
}

extern "C" {
extern char D_00555090[];
}

extern "C" {
extern char D_00555094[];
}

extern "C" {
int func_004639C0(char *p0) {
    char *v0;
    int v1;
    int v2;
    float v3;
    float v4;
    float tmp1;
    float tmp3;
    int tmp7;
    int tmp11;
    int tmp13;
    v0 = p0;
    tmp1 = ((V28_0_f *)*(char **)(p0 + 168))->m();
    if (tmp1 >= *(float *)D_0055508C) {
        tmp3 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp3 <= *(float *)D_00555090) {
            ((V6C_0_v *)v0)->m();
            ((V70_0_v *)v0)->m();
            tmp7 = ((V78_2_iii *)v0)->m(*(short *)(v0 + 48), *(short *)(*(char **)(v0 + 16) + 80));
            v1 = (short)tmp7;
            v2 = ((short)(int)(0.5f + ((65536.0f * *(float *)D_00555094) / 360.0f)) & 65535);
            v3 = ((float)v2 * *(float *)(v0 + 176));
            if ((float)v1 > v3) {
                *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) + v3);
            }
            v4 = ((float)v2 * *(float *)(v0 + 176));
            if ((float)v1 < -v4) {
                *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) - v4);
            }
        }
    }
    tmp11 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
    if (tmp11 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp13 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp13;
}
}

extern "C" {
extern char D_00555098[];
}

extern "C" {
extern char D_0055509C[];
}

extern "C" {
extern char D_005550A0[];
}

extern "C" {
int func_00463BE0(char *p0) {
    char *v0;
    int v1;
    int v2;
    float v3;
    float v4;
    float tmp1;
    float tmp3;
    int tmp7;
    int tmp11;
    int tmp13;
    v0 = p0;
    tmp1 = ((V28_0_f *)*(char **)(p0 + 168))->m();
    if (tmp1 >= *(float *)D_00555098) {
        tmp3 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp3 <= *(float *)D_0055509C) {
            ((V6C_0_v *)v0)->m();
            ((V70_0_v *)v0)->m();
            tmp7 = ((V78_2_iii *)v0)->m(*(short *)(v0 + 48), *(short *)(*(char **)(v0 + 16) + 80));
            v1 = (short)tmp7;
            v2 = ((short)(int)(0.5f + ((65536.0f * *(float *)D_005550A0) / 360.0f)) & 65535);
            v3 = ((float)v2 * *(float *)(v0 + 176));
            if ((float)v1 > v3) {
                *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) + v3);
            }
            v4 = ((float)v2 * *(float *)(v0 + 176));
            if ((float)v1 < -v4) {
                *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) - v4);
            }
        }
    }
    tmp11 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
    if (tmp11 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp13 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp13;
}
}

class V18_1_iv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m(int);
};

extern "C" {
int func_00463DD0(char *p0) {
    int tmp4;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(75);
    tmp4 = ((V48_2_iii *)*(char **)(p0 + 168))->m(19, (*(int *)(p0 + 16) + 16));
    *(int *)(p0 + 212) = 0;
    return tmp4;
}
}

extern "C" {
extern char D_005550A4[];
}

extern "C" {
extern char D_005550A8[];
}

extern "C" {
extern char D_005550AC[];
}

extern "C" {
void func_00463E40(char *p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    float v5;
    float v6;
    float tmp1;
    float tmp3;
    int tmp7;
    float tmp11;
    int tmp17;
    int tmp19;
    v0 = p0;
    v1 = *(int *)(p0 + 212);
    switch (v1) {
    default:
        return;
    case 0:
        tmp1 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp1 >= *(float *)D_005550A4) {
            tmp3 = ((V28_0_f *)*(char **)(v0 + 168))->m();
            if (tmp3 <= *(float *)D_005550A8) {
                ((V6C_0_v *)v0)->m();
                ((V70_0_v *)v0)->m();
                tmp7 = ((V78_2_iii *)v0)->m(*(short *)(v0 + 48), *(short *)(*(char **)(v0 + 16) + 80));
                v3 = (short)tmp7;
                v4 = ((short)(int)(0.5f + ((65536.0f * *(float *)D_005550AC) / 360.0f)) & 65535);
                v5 = ((float)v4 * *(float *)(v0 + 176));
                if ((float)v3 > v5) {
                    *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) + v5);
                }
                v6 = ((float)v4 * *(float *)(v0 + 176));
                if ((float)v3 < -v6) {
                    *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) - v6);
                }
            }
        }
        tmp11 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp11 >= 34.0f) {
            ((V18_1_iv *)*(char **)(v0 + 168))->m(50);
            ((V48_2_iiv *)*(char **)(v0 + 168))->m(12, (*(int *)(v0 + 16) + 16));
            *(int *)(v0 + 212) = 1;
        }
        tmp17 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        return;
    case 1:
        tmp19 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp19 != 0) {
            ((VEC_1_iv *)v0)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        return;
    }
}
}

extern "C" {
int func_004640D0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(70);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_00464BB0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 2;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(8);
    return tmp1;
}
}

extern "C" {
int func_00464E30(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 2;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(9);
    return tmp1;
}
}

extern "C" {
int func_004650B0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 2;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(10);
    return tmp1;
}
}

extern "C" {
int func_00465330(char *p0) {
    int tmp4;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 2;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(75);
    tmp4 = ((V48_2_iii *)*(char **)(p0 + 168))->m(19, (*(int *)(p0 + 16) + 16));
    *(int *)(p0 + 212) = 0;
    return tmp4;
}
}

extern "C" {
void func_004653A0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp7;
    int tmp9;
    v0 = p0;
    v1 = *(int *)(p0 + 212);
    switch (v1) {
    default:
        return;
    case 0:
        tmp1 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp1 != 0) {
            ((V18_1_iv *)*(char **)(v0 + 168))->m(7);
            ((V48_2_iiv *)*(char **)(v0 + 168))->m(12, (*(int *)(v0 + 16) + 16));
            *(int *)(v0 + 212) = 1;
        }
        tmp7 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        return;
    case 1:
        tmp9 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp9 != 0) {
            ((VEC_1_iv *)v0)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        return;
    }
}
}

extern "C" {
int func_004654A0(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int v0;
    char *v1;
    int tmp12;
    *(char *)(p0 + 205) = 1;
    v1 = p0;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(31);
    ((V48_2_iiv *)*(char **)(v1 + 168))->m(901, (*(int *)(v1 + 16) + 16));
    v0 = *(int *)(*(char **)(v1 + 4) + 40);
    switch (v0) {
    case 0:
        break;
    case 1:
        ((V48_2_iiv *)*(char **)(v1 + 168))->m(994, (*(int *)(v1 + 16) + 16));
        break;
    }
    ((V48_2_iiv *)*(char **)(v1 + 168))->m(995, (*(int *)(v1 + 16) + 16));
    tmp12 = func_00330BD0(D_01DFABA0, 28, (*(int *)(v1 + 16) + 16), 8, 0);
    return tmp12;
}
}

extern "C" {
int func_00465590(char *p0) {
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
int func_00465CF0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 3;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(14);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_00465E70(char *p0) {
    int tmp4;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(52);
    tmp4 = ((V48_2_iii *)*(char **)(p0 + 168))->m(0, (*(int *)(p0 + 16) + 16));
    *(int *)(p0 + 212) = 0;
    return tmp4;
}
}

extern "C" {
int func_00466310(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(54);
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0x3f800000;
    return tmp1;
}
}

extern "C" {
int func_004663A0(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    char *v0;
    int v1;
    int tmp12;
    v0 = p0;
    v1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (v1 != 0) {
        ((V48_2_iiv *)*(char **)(v0 + 168))->m(9, (*(int *)(v0 + 16) + 16));
        ((V48_2_iiv *)*(char **)(v0 + 168))->m(902, (*(int *)(v0 + 16) + 16));
        ((V48_2_iiv *)*(char **)(v0 + 168))->m(904, (*(int *)(v0 + 16) + 16));
        tmp12 = func_00330BD0(D_01DFABA0, 27, (*(int *)(v0 + 16) + 16), 8, 0);
        return tmp12;
    } else {
        return v1;
    }
}
}

extern "C" {
int func_00466900(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(55);
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0x3f800000;
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_00466C90(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(46);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

class V70_0_i {
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
    virtual int m(void);
};

extern "C" {
int func_00467900(char *p0) {
    int tmp10;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(5);
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0x3f800000;
    *(int *)(p0 + 212) = 0;
    ((V6C_0_v *)p0)->m();
    tmp10 = ((V70_0_i *)p0)->m();
    *(short *)(*(char **)(p0 + 16) + 80) = *(short *)(p0 + 48);
    return tmp10;
}
}

class V28_1_if {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m(int);
};

class V2C_1_ii {
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
    virtual int m(int);
};

class V44_0_i {
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
    virtual int m(void);
};

extern "C" {
void func_004679D0(char *p0) {
    int v0;
    char *v1;
    float v2;
    int tmp5;
    int tmp9;
    int tmp11;
    int tmp13;
    int tmp23;
    int tmp25;
    v0 = *(int *)(p0 + 212);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = ((V28_1_if *)*(char **)(v1 + 168))->m(v0);
        if (v2 >= 40.0f) {
            ((V18_1_iv *)*(char **)(v1 + 168))->m(56);
            *(int *)(v1 + 224) = 0;
            *(int *)(v1 + 228) = 0;
            *(int *)(v1 + 232) = 0x40800000;
            *(int *)(v1 + 236) = 0x3f800000;
            *(int *)(v1 + 240) = 0;
            *(int *)(v1 + 244) = 0xbfc00000;
            *(int *)(v1 + 248) = 0;
            *(int *)(v1 + 252) = 0x3f800000;
            tmp5 = ((VE4_4_ppiii *)v1)->m((v1 + 224), (v1 + 240), (*(int *)(v1 + 16) + 32), (*(int *)(v1 + 16) + 48));
            *(int *)(v1 + 212) = 1;
        }
        break;
    case 1:
        tmp9 = ((VE4_4_ppiii *)p0)->m((v1 + 224), (v1 + 240), (*(int *)(v1 + 16) + 32), (*(int *)(v1 + 16) + 48));
        v2 = 0.0f;
        if (*(float *)(*(char **)(v1 + 16) + 36) < v2) {
            tmp11 = ((V30_0_i *)*(char **)(v1 + 168))->m();
            if (tmp11 != 0) {
                *(char *)(v1 + 205) = 0;
                tmp13 = ((V18_1_ii *)*(char **)(v1 + 168))->m(57);
                *(int *)(*(char **)(v1 + 16) + 32) = 0;
                *(int *)(*(char **)(v1 + 16) + 36) = 0;
                *(int *)(*(char **)(v1 + 16) + 40) = 0;
                *(int *)(*(char **)(v1 + 16) + 44) = 0x3f800000;
                *(int *)(*(char **)(v1 + 16) + 48) = 0;
                *(int *)(*(char **)(v1 + 16) + 52) = 0;
                *(int *)(*(char **)(v1 + 16) + 56) = 0;
                *(int *)(*(char **)(v1 + 16) + 60) = 0x3f800000;
                *(int *)(v1 + 212) = 2;
            }
        }
        break;
    case 2:
        tmp23 = ((V2C_1_ii *)*(char **)(v1 + 168))->m(v0);
        if (tmp23 != 0) {
            ((VEC_1_iv *)v1)->m(14);
            tmp25 = ((V44_0_i *)*(char **)(v1 + 168))->m();
        }
        break;
    }
}
}

extern "C" {
int func_00467BF0(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_00467C60(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(68);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_004681A0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(68);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_004686E0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(68);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_00468F70(char *p0) {
    int v3;
    char *v0;
    int v2;
    int v1;
    float tmp1;
    int tmp5;
    v0 = p0;
    v1 = *(int *)(p0 + 212);
    switch (v1) {
    case 0:
        tmp1 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        v2 = 2;
        if (tmp1 >= *(float *)(v0 + 260)) {
            *(char *)(v0 + 207) = v2;
            ((V1C_1_iv *)*(char **)(v0 + 168))->m(20);
            *(int *)(v0 + 212) = 1;
        }
        v3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        break;
    case 1:
        tmp5 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp5 != 0) {
            ((VEC_1_iv *)v0)->m(14);
        }
        v3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        break;
    }
    return v3;
}
}

extern "C" {
int func_00469060(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 2;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(64);
    return tmp1;
}
}

extern "C" {
int func_00469090(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_00469100(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 2;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(65);
    return tmp1;
}
}

extern "C" {
int func_00469130(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_004691A0(char *p0) {
    int tmp5;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 4;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(29);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(2006, (*(int *)(p0 + 16) + 16));
    tmp5 = ((V44_0_i *)*(char **)(p0 + 168))->m();
    *(int *)(p0 + 212) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    return tmp5;
}
}

extern "C" {
int func_00469560(char *p0) {
    int tmp5;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 5;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(30);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(2006, (*(int *)(p0 + 16) + 16));
    tmp5 = ((V44_0_i *)*(char **)(p0 + 168))->m();
    *(int *)(p0 + 212) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    return tmp5;
}
}

extern "C" {
int func_00469920(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(66);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_00469E90(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_00469F30(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_00469FD0(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_0046A070(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_0046A0E0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(77);
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0x3f800000;
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

class V18_2_iiv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void m(int, int);
};

extern "C" {
int func_0046A9A0(char *p0) {
    short tmp0;
    int tmp4;
    tmp0 = *(short *)(*(char **)(p0 + 4) + 32);
    *(short *)(*(char **)(p0 + 16) + 80) = *(short *)(*(char **)(p0 + 4) + 32);
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_2_iiv *)*(char **)(p0 + 168))->m(5, tmp0);
    tmp4 = ((V40_0_i *)*(char **)(p0 + 168))->m();
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0x3f800000;
    *(int *)(p0 + 212) = 0;
    return tmp4;
}
}

extern "C" {
int func_0046AD60(char *p0) {
    int tmp4;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(55);
    tmp4 = ((V48_2_iii *)*(char **)(p0 + 168))->m(996, (*(int *)(p0 + 16) + 16));
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0x3f800000;
    *(int *)(p0 + 212) = 0;
    return tmp4;
}
}

extern "C" {
void func_0046AE10(char *p0) {
    int v0;
    char *v1;
    float v2;
    int tmp1;
    int tmp9;
    int tmp13;
    int tmp15;
    int tmp17;
    int tmp27;
    int tmp28;
    v0 = *(int *)(p0 + 212);
    v1 = p0;
    switch (v0) {
    case 0:
        tmp1 = ((V2C_1_ii *)*(char **)(v1 + 168))->m(v0);
        if (tmp1 != 0) {
            *(char *)(v1 + 205) = 1;
            ((V18_1_iv *)*(char **)(v1 + 168))->m(80);
            ((V48_2_iiv *)*(char **)(v1 + 168))->m(996, (*(int *)(v1 + 16) + 16));
            *(int *)(v1 + 224) = 0;
            *(int *)(v1 + 228) = 0x42040000;
            *(int *)(v1 + 232) = 0x41000000;
            *(int *)(v1 + 236) = 0x3f800000;
            *(int *)(v1 + 240) = 0;
            *(int *)(v1 + 244) = 0xbfc00000;
            *(int *)(v1 + 248) = 0;
            *(int *)(v1 + 252) = 0x3f800000;
            tmp9 = ((VE4_4_ppiii *)v1)->m((v1 + 224), (v1 + 240), (*(int *)(v1 + 16) + 32), (*(int *)(v1 + 16) + 48));
            *(int *)(v1 + 212) = 1;
        }
        break;
    case 1:
        tmp13 = ((VE4_4_ppiii *)p0)->m((v1 + 224), (v1 + 240), (*(int *)(v1 + 16) + 32), (*(int *)(v1 + 16) + 48));
        v2 = 0.0f;
        if (*(float *)(*(char **)(v1 + 16) + 36) < v2) {
            tmp15 = ((V30_0_i *)*(char **)(v1 + 168))->m();
            if (tmp15 != 0) {
                *(char *)(v1 + 205) = 0;
                tmp17 = ((V18_1_ii *)*(char **)(v1 + 168))->m(57);
                *(int *)(*(char **)(v1 + 16) + 32) = 0;
                *(int *)(*(char **)(v1 + 16) + 36) = 0;
                *(int *)(*(char **)(v1 + 16) + 40) = 0;
                *(int *)(*(char **)(v1 + 16) + 44) = 0x3f800000;
                *(int *)(*(char **)(v1 + 16) + 48) = 0;
                *(int *)(*(char **)(v1 + 16) + 52) = 0;
                *(int *)(*(char **)(v1 + 16) + 56) = 0;
                *(int *)(*(char **)(v1 + 16) + 60) = 0x3f800000;
                *(int *)(v1 + 212) = 2;
            }
        }
        break;
    case 2:
        tmp27 = ((V2C_1_ii *)*(char **)(v1 + 168))->m(v0);
        if (tmp27 != 0) {
            tmp28 = ((VEC_1_ii *)v1)->m(14);
        }
        break;
    }
}
}

extern "C" {
int func_0046B000(char *p0) {
    int tmp4;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(1);
    tmp4 = ((V48_2_iii *)*(char **)(p0 + 168))->m(996, (*(int *)(p0 + 16) + 16));
    return tmp4;
}
}

extern "C" {
int func_0046B060(char *p0) {
    char *v0;
    float tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V28_0_f *)*(char **)(p0 + 168))->m();
    if (tmp1 >= 60.0f) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_0046B0E0(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(44);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_0046B230(char *p0) {
    int tmp4;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(81);
    tmp4 = ((V48_2_iii *)*(char **)(p0 + 168))->m(996, (*(int *)(p0 + 16) + 16));
    *(int *)(p0 + 212) = 0;
    return tmp4;
}
}

extern "C" {
int func_0046B430(char *p0) {
    int tmp7;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(83);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(996, (*(int *)(p0 + 16) + 16));
    tmp7 = ((V48_2_iii *)*(char **)(p0 + 168))->m(2002, (*(int *)(p0 + 16) + 16));
    *(int *)(p0 + 212) = 0;
    return tmp7;
}
}

extern "C" {
int func_0046B5C0(char *p0) {
    int tmp4;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(84);
    tmp4 = ((V48_2_iii *)*(char **)(p0 + 168))->m(996, (*(int *)(p0 + 16) + 16));
    *(int *)(p0 + 212) = 0;
    return tmp4;
}
}

extern "C" {
int func_0046B740(char *p0) {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp6;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(87);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(902, (*(int *)(p0 + 16) + 16));
    *(int *)((stk + -32) + 32) = 0x42ae0000;
    *(int *)((stk + -32) + 36) = 0x41c80000;
    ((V48_2_ipv *)*(char **)(p0 + 168))->m(3000, ((stk + -32) + 32));
    tmp6 = ((V40_0_i *)*(char **)(p0 + 168))->m();
    *(int *)(p0 + 212) = 0;
    return tmp6;
}
}

extern "C" {
int func_0046BB70(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(66);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_0046C160(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_0046C200(char *p0) {
    char *v0;
    int tmp1;
    int tmp3;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 168))->m();
    if (tmp1 != 0) {
        ((VEC_1_iv *)v0)->m(14);
    }
    tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    return tmp3;
}
}

extern "C" {
int func_0046C270(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(100);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_0046C2C0(char *p0) {
    char *v0;
    int v1;
    int v2;
    float v3;
    float v4;
    int v5;
    int tmp0;
    float tmp5;
    float tmp11;
    float tmp13;
    int tmp17;
    float tmp21;
    float tmp27;
    int tmp33;
    v0 = p0;
    v1 = *(int *)(p0 + 212);
    tmp0 = 3;
    if (v1 != tmp0) {
        switch (v1) {
        case 0:
            ((V48_2_iiv *)*(char **)(v0 + 168))->m(905, (*(int *)(v0 + 16) + 16));
            tmp5 = ((V28_0_f *)*(char **)(v0 + 168))->m();
            if (tmp5 >= 0.0f) {
                *(char *)(v0 + 208) = 0;
                *(int *)(v0 + 212) = 1;
            }
            v5 = ((V24_0_i *)*(char **)(v0 + 168))->m();
            break;
        case 1:
            ((V48_2_iiv *)*(char **)(v0 + 168))->m(905, (*(int *)(v0 + 16) + 16));
            tmp11 = ((V28_0_f *)*(char **)(v0 + 168))->m();
            if (tmp11 >= 45.0f) {
                tmp13 = ((V28_0_f *)*(char **)(v0 + 168))->m();
                if (tmp13 <= 55.0f) {
                    ((V6C_0_v *)v0)->m();
                    ((V70_0_v *)v0)->m();
                    tmp17 = ((V78_2_iii *)v0)->m(*(short *)(v0 + 48), *(short *)(*(char **)(v0 + 16) + 80));
                    v2 = (short)tmp17;
                    v3 = (1820.0f * *(float *)(v0 + 176));
                    if ((float)v2 > v3) {
                        *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) + v3);
                    }
                    v4 = (1820.0f * *(float *)(v0 + 176));
                    if ((float)v2 < -v4) {
                        *(short *)(*(char **)(v0 + 16) + 80) = (int)((float)*(short *)(*(char **)(v0 + 16) + 80) - v4);
                    }
                }
            }
            tmp21 = ((V28_0_f *)*(char **)(v0 + 168))->m();
            if (tmp21 >= 73.0f) {
                *(char *)(v0 + 208) = 4;
                *(int *)(v0 + 212) = 2;
            }
            v5 = ((V24_0_i *)*(char **)(v0 + 168))->m();
            break;
        case 2:
            ((V48_2_iiv *)*(char **)(v0 + 168))->m(905, (*(int *)(v0 + 16) + 16));
            tmp27 = ((V28_0_f *)*(char **)(v0 + 168))->m();
            if (tmp27 >= 95.0f) {
                *(char *)(v0 + 208) = 0;
                *(int *)(v0 + 212) = 3;
            }
            v5 = ((V24_0_i *)*(char **)(v0 + 168))->m();
            break;
        }
    } else {
        ((V48_2_iiv *)*(char **)(v0 + 168))->m(905, (*(int *)(v0 + 16) + 16));
        tmp33 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp33 != 0) {
            ((VEC_1_iv *)v0)->m(14);
        }
        v5 = ((V24_0_i *)*(char **)(v0 + 168))->m();
    }
    return v5;
}
}

extern "C" {
int func_0046C620(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(102);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_0046C9D0(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp6;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 0;
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(31, (*(int *)(p0 + 16) + 16));
    tmp6 = func_00330BD0(D_01DFABA0, 25, (*(int *)(p0 + 16) + 16), 8, 0);
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 212) = 0;
    return tmp6;
}
}

extern "C" {
int func_0046CF20(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp11;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 1;
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(31, (*(int *)(p0 + 16) + 16));
    func_00330BD0(D_01DFABA0, 25, (*(int *)(p0 + 16) + 16), 8, 0);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(44, (*(int *)(p0 + 16) + 16));
    tmp11 = func_00330BD0(D_01DFABA0, 35, (*(int *)(p0 + 16) + 16), 8, 0);
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0x3f800000;
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 212) = 10;
    return tmp11;
}
}

extern "C" {
int func_0046DCD0(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp6;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 1;
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(31, (*(int *)(p0 + 16) + 16));
    tmp6 = func_00330BD0(D_01DFABA0, 25, (*(int *)(p0 + 16) + 16), 8, 0);
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0;
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 212) = 0;
    return tmp6;
}
}

extern "C" {
int func_0046E140(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp6;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(106);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(31, (*(int *)(p0 + 16) + 16));
    tmp6 = func_00330BD0(D_01DFABA0, 25, (*(int *)(p0 + 16) + 16), 8, 0);
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0;
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 212) = 0;
    return tmp6;
}
}

extern "C" {
int func_0046E350(char *p0) {
    int tmp1;
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 1;
    tmp1 = ((V18_1_ii *)*(char **)(p0 + 168))->m(102);
    *(int *)(p0 + 212) = 0;
    return tmp1;
}
}

extern "C" {
int func_0046E430(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp6;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 1;
    ((V40_0_v *)*(char **)(p0 + 168))->m();
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(31, (*(int *)(p0 + 16) + 16));
    tmp6 = func_00330BD0(D_01DFABA0, 25, (*(int *)(p0 + 16) + 16), 8, 0);
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0;
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 212) = 0;
    return tmp6;
}
}

extern "C" {
int func_0046E990(char *p0) {
    extern char D_01DFABA0[];
    int func_00330BD0(...);
    int tmp6;
    *(char *)(p0 + 205) = 1;
    *(char *)(p0 + 206) = 4;
    *(char *)(p0 + 207) = 1;
    ((V18_1_iv *)*(char **)(p0 + 168))->m(106);
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(31, (*(int *)(p0 + 16) + 16));
    tmp6 = func_00330BD0(D_01DFABA0, 25, (*(int *)(p0 + 16) + 16), 8, 0);
    *(int *)(*(char **)(p0 + 16) + 32) = 0;
    *(int *)(*(char **)(p0 + 16) + 36) = 0;
    *(int *)(*(char **)(p0 + 16) + 40) = 0;
    *(int *)(*(char **)(p0 + 16) + 44) = 0;
    *(int *)(*(char **)(p0 + 16) + 48) = 0;
    *(int *)(*(char **)(p0 + 16) + 52) = 0;
    *(int *)(*(char **)(p0 + 16) + 56) = 0;
    *(int *)(*(char **)(p0 + 16) + 60) = 0;
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 212) = 0;
    return tmp6;
}
}

extern "C" {
void func_0046EA60(char *p0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    float tmp1;
    int tmp3;
    int tmp5;
    v0 = p0;
    v1 = *(int *)(p0 + 212);
    switch (v1) {
    default:
        return;
    case 0:
        tmp1 = ((V28_0_f *)*(char **)(v0 + 168))->m();
        if (tmp1 >= 20.0f) {
            *(char *)(v0 + 205) = 0;
            *(char *)(v0 + 206) = 0;
            *(char *)(v0 + 207) = 0;
            *(int *)(v0 + 212) = 1;
            return;
        } else {
            tmp3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
            return;
        }
        break;
    case 1:
        tmp5 = ((V2C_0_i *)*(char **)(v0 + 168))->m();
        if (tmp5 != 0) {
            ((VEC_1_iv *)v0)->m(14);
        }
        v3 = ((V24_0_i *)*(char **)(v0 + 168))->m();
        return;
    }
}
}

extern "C" {
int func_0045B180(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    extern char D_01DFABA0[];
    int tmp5;
    ((V48_2_iiv *)*(char **)(p0 + 168))->m(5002, (*(int *)(p0 + 16) + 16));
    tmp5 = func_003305E0(D_01DFABA0, 0, 92, (*(int *)(p0 + 16) + 16), 0, 0, 0);
    return tmp5;
}
}
