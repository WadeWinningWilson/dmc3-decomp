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

extern "C" void func_0031FB20(char *p) {
    p[0x11] = 1;
    p[0x12] = 3;
    p[0x13] = 6;
    (*(Anim4 **)(p + 8))->m40();
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 8))->m1C(8);
        break;
    case 1:
        (*(Anim4 **)(p + 8))->m1C(8);
        break;
    }
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"(p + 0x20) : "memory");
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"(p + 0x30) : "memory");
    *(float *)(p + 0x24) = 0.0f;
    *(float *)(p + 0x34) = -0.54f;
    *(int *)(p + 0x1C) = 0;
    *(float *)(p + 0x18) = 10.0f;
}

class Anim31F {
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

class Self31F {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void m28(int);
};

extern "C" void func_0031F680(char *p) {
    switch (*(int *)(p + 0x1C)) {
    case 0:
        if ((*(Anim31F **)(p + 8))->m30() != 0) {
            *(unsigned char *)(p + 0x11) = 0;
            (*(Anim31F **)(p + 8))->m44();
            *(float *)(*(char **)(p + 0xC) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x24) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x28) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x2C) = 1.0f;
            *(float *)(*(char **)(p + 0xC) + 0x30) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x34) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x38) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x3C) = 1.0f;
            *(int *)(p + 0x1C) = 1;
        }
        break;
    case 1:
        if ((*(Anim31F **)(p + 8))->m2C() != 0) {
            (*(Anim31F **)(p + 8))->m1C(6);
            (*(Anim31F **)(p + 8))->m44();
            *(int *)(p + 0x1C) = 2;
        }
        break;
    case 2:
        if ((*(Anim31F **)(p + 8))->m2C() != 0) {
            ((Self31F *)p)->m28(0xE);
        }
        (*(Anim31F **)(p + 8))->m24();
        break;
    }
}

extern "C" void func_0031F970(char *p) {
    switch (*(int *)(p + 0x1C)) {
    case 0:
        if ((*(Anim31F **)(p + 8))->m30() != 0) {
            *(unsigned char *)(p + 0x11) = 1;
            *(unsigned char *)(p + 0x12) = 3;
            *(unsigned char *)(p + 0x13) = 4;
            (*(Anim31F **)(p + 8))->m44();
            (*(Anim31F **)(p + 8))->m1C(0xD);
            *(int *)(p + 0x1C) = 1;
        }
        if (*(float *)(*(char **)(p + 0xC) + 0x24) < 0.0f) {
            *(float *)(*(char **)(p + 0xC) + 0x34) = -1.0f;
        }
        *(float *)(*(char **)(p + 0xC) + 0x24) = *(float *)(*(char **)(p + 0xC) + 0x24) + *(float *)(*(char **)(p + 0xC) + 0x34);
        break;
    case 1:
        if ((*(Anim31F **)(p + 8))->m2C() != 0) {
            *(unsigned char *)(p + 0x11) = 0;
            *(unsigned char *)(p + 0x12) = 3;
            *(unsigned char *)(p + 0x13) = 4;
            (*(Anim31F **)(p + 8))->m44();
            (*(Anim31F **)(p + 8))->m1C(6);
            *(int *)(p + 0x1C) = 2;
        }
        (*(Anim31F **)(p + 8))->m24();
        break;
    case 2:
        if ((*(Anim31F **)(p + 8))->m2C() != 0) {
            ((Self31F *)p)->m28(0xE);
        }
        (*(Anim31F **)(p + 8))->m24();
        break;
    }
}

extern "C" void func_0031F260(char *p) {
    switch (*(int *)(p + 0x1C)) {
    case 0:
        *(float *)(*(char **)(p + 0xC) + 0x20) = *(float *)(*(char **)(p + 0xC) + 0x20) + *(float *)(*(char **)(p + 0xC) + 0x30);
        *(float *)(*(char **)(p + 0xC) + 0x24) = *(float *)(*(char **)(p + 0xC) + 0x24) + *(float *)(*(char **)(p + 0xC) + 0x34);
        *(float *)(*(char **)(p + 0xC) + 0x28) = *(float *)(*(char **)(p + 0xC) + 0x28) + *(float *)(*(char **)(p + 0xC) + 0x38);
        if (*(float *)(*(char **)(p + 0xC) + 0x24) < 0.0f && (*(Anim31F **)(p + 8))->m30() != 0) {
            *(unsigned char *)(p + 0x11) = 0;
            (*(Anim31F **)(p + 8))->m1C(0x11);
            (*(Anim31F **)(p + 8))->m44();
            *(float *)(*(char **)(p + 0xC) + 0x20) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x24) = 6.0f;
            *(float *)(*(char **)(p + 0xC) + 0x28) = 20.0f;
            *(float *)(*(char **)(p + 0xC) + 0x2C) = 1.0f;
            *(float *)(*(char **)(p + 0xC) + 0x30) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x34) = -0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x38) = 0.0f;
            *(float *)(*(char **)(p + 0xC) + 0x3C) = 1.0f;
            *(int *)(p + 0x1C) = 1;
        }
        break;
    case 1:
        *(float *)(*(char **)(p + 0xC) + 0x20) = *(float *)(*(char **)(p + 0xC) + 0x20) - *(float *)(*(char **)(p + 0xC) + 0x20) / 30.0f;
        *(float *)(*(char **)(p + 0xC) + 0x28) = *(float *)(*(char **)(p + 0xC) + 0x28) - *(float *)(*(char **)(p + 0xC) + 0x28) / 30.0f;
        if ((*(Anim31F **)(p + 8))->m2C() != 0) {
            (*(Anim31F **)(p + 8))->m1C(6);
            (*(Anim31F **)(p + 8))->m44();
            *(int *)(p + 0x1C) = 2;
        }
        break;
    case 2:
        if ((*(Anim31F **)(p + 8))->m2C() != 0) {
            ((Self31F *)p)->m28(0xE);
        }
        (*(Anim31F **)(p + 8))->m24();
        break;
    }
}

class Obj31E {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void m20();
};

class Self31E {
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
    virtual void m30();
    virtual void z11();
    virtual void m38();
    virtual void z13();
    virtual void m40();
    virtual void z15();
    virtual void m48();
    virtual void z17();
    virtual void m50();
    virtual void z19();
    virtual void m58();
    virtual void z21();
    virtual void m60();
    virtual void z23();
    virtual void m68();
    virtual void z25();
    virtual void m70();
    virtual void z27();
    virtual void m78();
    virtual void z29();
    virtual void m80();
    virtual void z31();
    virtual void m88();
    virtual void z33();
    virtual void m90();
};

extern "C" void func_0031E590(char *p) {
    float *z;
    (*(Obj31E **)(p + 8))->m20();
    switch (*(unsigned char *)(p + 0x10)) {
    case 0: ((Self31E *)p)->m30(); break;
    case 1: ((Self31E *)p)->m38(); break;
    case 2: ((Self31E *)p)->m40(); break;
    case 3: ((Self31E *)p)->m48(); break;
    case 4: ((Self31E *)p)->m50(); break;
    case 5: ((Self31E *)p)->m58(); break;
    case 6: ((Self31E *)p)->m60(); break;
    case 7: ((Self31E *)p)->m68(); break;
    case 8: ((Self31E *)p)->m70(); break;
    case 9: ((Self31E *)p)->m78(); break;
    case 10: ((Self31E *)p)->m80(); break;
    case 11: ((Self31E *)p)->m88(); break;
    case 12: ((Self31E *)p)->m90(); break;
    }
    if (*(unsigned char *)(p + 0x11) == 0) {
        *(float *)(*(char **)(p + 0xC) + 0x34) = *(float *)(*(char **)(p + 0xC) + 0x34) + -0.54f;
        *(float *)(*(char **)(p + 0xC) + 0x34) = *(float *)(*(char **)(p + 0xC) + 0x34) + *(float *)(*(char **)(p + 8) + 0x24);
        z = (float *)(*(char **)(p + 0xC) + 0x34);
        if (!(*z <= 0.0f)) *z = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x24) = *(float *)(*(char **)(p + 0xC) + 0x24) + *(float *)(*(char **)(p + 0xC) + 0x34);
    }
}

class W31Eo {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void m1C(int);
    virtual void d20();
    virtual void m24();
    virtual void d28();
    virtual int m2C();
    virtual int m30();
    virtual int m34();
    virtual short m38();
    virtual void d3C();
    virtual void d40();
    virtual void m44();
};

class W31E {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void d24();
    virtual void m28(int);
};

extern "C" void func_0031EDD0(char *p) {
    switch (*(unsigned int *)(p + 0x1C)) {
    case 0:
        if ((*(W31Eo **)(p + 8))->m34() != 0) {
            *(unsigned char *)(p + 0x13) = 8;
            *(short *)(*(char **)(p + 0xC) + 0x50) = (*(W31Eo **)(p + 8))->m38();
            (*(W31Eo **)(p + 8))->m1C(0xA);
            (*(W31Eo **)(p + 8))->m44();
            *(int *)(p + 0x1C) = 2;
            break;
        }
        *(float *)(*(char **)(p + 0xC) + 0x20) = *(float *)(*(char **)(p + 0xC) + 0x20) + *(float *)(*(char **)(p + 0xC) + 0x30);
        *(float *)(*(char **)(p + 0xC) + 0x24) = *(float *)(*(char **)(p + 0xC) + 0x24) + *(float *)(*(char **)(p + 0xC) + 0x34);
        *(float *)(*(char **)(p + 0xC) + 0x28) = *(float *)(*(char **)(p + 0xC) + 0x28) + *(float *)(*(char **)(p + 0xC) + 0x38);
        if (!(*(float *)(*(char **)(p + 0xC) + 0x24) < 0.0f)) break;
        if ((*(W31Eo **)(p + 8))->m30() == 0) break;
        *(unsigned char *)(p + 0x11) = 0;
        (*(W31Eo **)(p + 8))->m1C(0x11);
        (*(W31Eo **)(p + 8))->m44();
        *(float *)(*(char **)(p + 0xC) + 0x20) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x24) = 2.0f;
        *(float *)(*(char **)(p + 0xC) + 0x28) = -20.0f;
        *(float *)(*(char **)(p + 0xC) + 0x2C) = 1.0f;
        *(float *)(*(char **)(p + 0xC) + 0x30) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x34) = -0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x38) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x3C) = 1.0f;
        *(int *)(p + 0x1C) = 5;
        break;
    case 1:
        break;
    case 2:
        if ((*(W31Eo **)(p + 8))->m2C() != 0) {
            (*(W31Eo **)(p + 8))->m1C(0xB);
            *(unsigned char *)(p + 0x13) = 4;
            *(int *)(p + 0x1C) = 3;
        }
        (*(W31Eo **)(p + 8))->m24();
        break;
    case 3:
        if ((*(W31Eo **)(p + 8))->m2C() != 0) {
            (*(W31Eo **)(p + 8))->m1C(6);
            *(unsigned char *)(p + 0x13) = 4;
            *(int *)(p + 0x1C) = 4;
        }
        (*(W31Eo **)(p + 8))->m24();
        break;
    case 4:
        if ((*(W31Eo **)(p + 8))->m2C() != 0) ((W31E *)p)->m28(0xE);
        (*(W31Eo **)(p + 8))->m24();
        break;
    case 5:
        *(float *)(*(char **)(p + 0xC) + 0x20) = *(float *)(*(char **)(p + 0xC) + 0x20) - *(float *)(*(char **)(p + 0xC) + 0x20) / 20.0f;
        *(float *)(*(char **)(p + 0xC) + 0x28) = *(float *)(*(char **)(p + 0xC) + 0x28) - *(float *)(*(char **)(p + 0xC) + 0x28) / 20.0f;
        if ((*(W31Eo **)(p + 8))->m2C() == 0) break;
        (*(W31Eo **)(p + 8))->m1C(5);
        (*(W31Eo **)(p + 8))->m44();
        *(float *)(*(char **)(p + 0xC) + 0x20) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x24) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x28) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x2C) = 1.0f;
        *(float *)(*(char **)(p + 0xC) + 0x30) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x34) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x38) = 0.0f;
        *(float *)(*(char **)(p + 0xC) + 0x3C) = 1.0f;
        *(int *)(p + 0x1C) = 6;
        break;
    case 6:
        if ((*(W31Eo **)(p + 8))->m2C() != 0) ((W31E *)p)->m28(0xE);
        (*(W31Eo **)(p + 8))->m24();
        break;
    }
}

extern "C" {
extern "C" void func_0031E9E0(char *p) {
    p[0x11] = 0;
    p[0x12] = 3;
    p[0x13] = 2;
    (*(Anim4 **)(p + 0x8))->m40();
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 0x8))->m1C(0);
        break;
    case 1:
        (*(Anim4 **)(p + 0x8))->m1C(1);
        break;
    }
}
}

extern "C" {
extern "C" void func_0031EB80(char *p) {
    p[0x11] = 0;
    p[0x12] = 3;
    p[0x13] = 2;
    (*(Anim4 **)(p + 0x8))->m40();
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 0x8))->m1C(2);
        break;
    case 1:
        (*(Anim4 **)(p + 0x8))->m1C(2);
        break;
    }
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

class V3C_0_i {
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
    virtual int m(void);
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

class V4C_0_i {
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
    virtual int m(void);
};

class V54_0_i {
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
    virtual int m(void);
};

class V5C_0_i {
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
    virtual int m(void);
};

class V64_0_i {
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
    virtual int m(void);
};

class V6C_0_i {
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
    virtual int m(void);
};

class V74_0_i {
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
    virtual int m(void);
};

class V7C_0_i {
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
    virtual int m(void);
};

class V84_0_i {
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
    virtual int m(void);
};

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
int func_0031E7A0(char *p0, int p1) {
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
    int tmp9;
    int tmp10;
    int tmp11;
    *(char *)(p0 + 16) = p1;
    v0 = *(unsigned char *)(p0 + 16);
    switch (v0) {
    case 0:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp0 = ((V2C_0_i *)p0)->m();
        return tmp0;
    case 1:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp1 = ((V34_0_i *)p0)->m();
        return tmp1;
    case 2:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp2 = ((V3C_0_i *)p0)->m();
        return tmp2;
    case 3:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp3 = ((V44_0_i *)p0)->m();
        return tmp3;
    case 4:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp4 = ((V4C_0_i *)p0)->m();
        return tmp4;
    case 5:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp5 = ((V54_0_i *)p0)->m();
        return tmp5;
    case 6:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp6 = ((V5C_0_i *)p0)->m();
        return tmp6;
    case 7:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp7 = ((V64_0_i *)p0)->m();
        return tmp7;
    case 8:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp8 = ((V6C_0_i *)p0)->m();
        return tmp8;
    case 9:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp9 = ((V74_0_i *)p0)->m();
        return tmp9;
    case 10:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp10 = ((V7C_0_i *)p0)->m();
        return tmp10;
    case 11:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        tmp11 = ((V84_0_i *)p0)->m();
        return tmp11;
    case 12:
        *(char *)(p0 + 20) = 0;
        *(char *)(p0 + 21) = 0;
        v2 = ((V8C_0_i *)p0)->m();
        /* fall through */
    default:
        return v2;
    }
}
}

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
int func_0031EB00(char *p0) {
    char *v0;
    int tmp1;
    int tmp4;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 8))->m();
    if (tmp1 != 0) {
        ((V44_0_v *)*(char **)(v0 + 8))->m();
        ((V28_1_iv *)v0)->m(14);
    }
    tmp4 = ((V24_0_i *)*(char **)(v0 + 8))->m();
    return tmp4;
}
}

extern "C" {
int func_0031ECA0(char *p0) {
    char *v0;
    int tmp1;
    int tmp4;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 8))->m();
    if (tmp1 != 0) {
        ((V44_0_v *)*(char **)(v0 + 8))->m();
        ((V28_1_iv *)v0)->m(14);
    }
    tmp4 = ((V24_0_i *)*(char **)(v0 + 8))->m();
    return tmp4;
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
int func_0031ED20(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 1;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 3;
    ((V1C_1_iv *)*(char **)(p0 + 8))->m(16);
    tmp2 = ((V40_0_i *)*(char **)(p0 + 8))->m();
    *(int *)(*(char **)(p0 + 12) + 32) = 0;
    *(int *)(*(char **)(p0 + 12) + 36) = 0x41700000;
    *(int *)(*(char **)(p0 + 12) + 40) = 0xc1a00000;
    *(int *)(*(char **)(p0 + 12) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 12) + 48) = 0;
    *(int *)(*(char **)(p0 + 12) + 52) = 0xbfc00000;
    *(int *)(*(char **)(p0 + 12) + 56) = 0;
    *(int *)(*(char **)(p0 + 12) + 60) = 0x3f800000;
    *(int *)(p0 + 28) = 0;
    return tmp2;
}
}

extern "C" {
int func_0031F1B0(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 1;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 3;
    ((V1C_1_iv *)*(char **)(p0 + 8))->m(18);
    tmp2 = ((V40_0_i *)*(char **)(p0 + 8))->m();
    *(int *)(*(char **)(p0 + 12) + 32) = 0;
    *(int *)(*(char **)(p0 + 12) + 36) = 0x41100000;
    *(int *)(*(char **)(p0 + 12) + 40) = 0x41a00000;
    *(int *)(*(char **)(p0 + 12) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 12) + 48) = 0;
    *(int *)(*(char **)(p0 + 12) + 52) = 0xbfc00000;
    *(int *)(*(char **)(p0 + 12) + 56) = 0;
    *(int *)(*(char **)(p0 + 12) + 60) = 0x3f800000;
    *(int *)(p0 + 28) = 0;
    return tmp2;
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

extern "C" {
int func_0031F470(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 0;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 7;
    ((V40_0_v *)*(char **)(p0 + 8))->m();
    tmp2 = ((V1C_1_ii *)*(char **)(p0 + 8))->m(12);
    *(int *)(p0 + 28) = 0;
    return tmp2;
}
}

extern "C" {
void func_0031F4D0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp5;
    int tmp7;
    v0 = p0;
    v1 = *(int *)(p0 + 28);
    switch (v1) {
    default:
        return;
    case 0:
        tmp1 = ((V2C_0_i *)*(char **)(v0 + 8))->m();
        if (tmp1 != 0) {
            ((V44_0_v *)*(char **)(v0 + 8))->m();
            ((V1C_1_iv *)*(char **)(v0 + 8))->m(6);
            *(int *)(v0 + 28) = 1;
        }
        tmp5 = ((V24_0_i *)*(char **)(v0 + 8))->m();
        return;
    case 1:
        tmp7 = ((V2C_0_i *)*(char **)(v0 + 8))->m();
        if (tmp7 != 0) {
            ((V28_1_iv *)v0)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v0 + 8))->m();
        return;
    }
}
}

extern "C" {
int func_0031F5D0(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 0;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 7;
    ((V1C_1_iv *)*(char **)(p0 + 8))->m(12);
    tmp2 = ((V40_0_i *)*(char **)(p0 + 8))->m();
    *(int *)(*(char **)(p0 + 12) + 32) = 0;
    *(int *)(*(char **)(p0 + 12) + 36) = 0xc1100000;
    *(int *)(*(char **)(p0 + 12) + 40) = 0;
    *(int *)(*(char **)(p0 + 12) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 12) + 48) = 0;
    *(int *)(*(char **)(p0 + 12) + 52) = 0xbfc00000;
    *(int *)(*(char **)(p0 + 12) + 56) = 0;
    *(int *)(*(char **)(p0 + 12) + 60) = 0x3f800000;
    *(int *)(p0 + 28) = 0;
    return tmp2;
}
}

extern "C" {
int func_0031F7F0(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 0;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 2;
    ((V40_0_v *)*(char **)(p0 + 8))->m();
    tmp2 = ((V1C_1_ii *)*(char **)(p0 + 8))->m(15);
    *(int *)(p0 + 28) = 0;
    return tmp2;
}
}

extern "C" {
int func_0031F850(char *p0) {
    char *v0;
    int tmp1;
    int tmp4;
    v0 = p0;
    tmp1 = ((V2C_0_i *)*(char **)(p0 + 8))->m();
    if (tmp1 != 0) {
        ((V44_0_v *)*(char **)(v0 + 8))->m();
        ((V28_1_iv *)v0)->m(14);
    }
    tmp4 = ((V24_0_i *)*(char **)(v0 + 8))->m();
    return tmp4;
}
}

extern "C" {
int func_0031F8D0(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 1;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 6;
    ((V40_0_v *)*(char **)(p0 + 8))->m();
    tmp2 = ((V1C_1_ii *)*(char **)(p0 + 8))->m(7);
    *(int *)(*(char **)(p0 + 12) + 32) = 0;
    *(int *)(*(char **)(p0 + 12) + 36) = 0x41a80000;
    *(int *)(*(char **)(p0 + 12) + 40) = 0;
    *(int *)(*(char **)(p0 + 12) + 48) = 0;
    *(int *)(*(char **)(p0 + 12) + 52) = 0xbf333333;
    *(int *)(*(char **)(p0 + 12) + 56) = 0;
    *(int *)(p0 + 28) = 0;
    return tmp2;
}
}

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

class V30_1_ii {
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
    virtual int m(int);
};

extern "C" {
void func_0031FC90(char *p0) {
    int v0;
    char *v1;
    int v2;
    int tmp8;
    int tmp13;
    v0 = *(int *)(p0 + 28);
    v1 = p0;
    switch (v0) {
    case 0:
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((v1 + 32)), "r"((*(int *)(v1 + 12) + 32)) : "memory");
        if (*(float *)(v1 + 24) < 0.0f) {
            *(int *)(v1 + 28) = 1;
        }
        *(float *)(v1 + 24) = (*(float *)(v1 + 24) - 1.0f);
        break;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((v1 + 32)), "r"((v1 + 48)) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((v1 + 32)), "r"((*(int *)(v1 + 12) + 32)) : "memory");
        v2 = ((V30_1_ii *)*(char **)(v1 + 8))->m(v0);
        if (v2 != 0) {
            *(char *)(v1 + 17) = 0;
            *(char *)(v1 + 19) = 4;
            ((V44_0_v *)*(char **)(v1 + 8))->m();
            v2 = ((V1C_1_ii *)*(char **)(v1 + 8))->m(13);
            *(int *)(v1 + 28) = 2;
        }
        break;
    case 2:
        tmp8 = ((V2C_1_ii *)*(char **)(v1 + 8))->m(v0);
        if (tmp8 != 0) {
            ((V44_0_v *)*(char **)(v1 + 8))->m();
            ((V1C_1_iv *)*(char **)(v1 + 8))->m(6);
            *(int *)(v1 + 28) = 3;
        }
        v2 = ((V24_0_i *)*(char **)(v1 + 8))->m();
        break;
    case 3:
        tmp13 = ((V2C_1_ii *)*(char **)(v1 + 8))->m(v0);
        if (tmp13 != 0) {
            ((V28_1_iv *)v1)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v1 + 8))->m();
        break;
    }
}
}

extern "C" {
int func_0031FE70(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 0;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 4;
    ((V40_0_v *)*(char **)(p0 + 8))->m();
    tmp2 = ((V1C_1_ii *)*(char **)(p0 + 8))->m(13);
    *(int *)(p0 + 28) = 0;
    return tmp2;
}
}

extern "C" {
void func_0031FED0(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp5;
    int tmp7;
    v0 = p0;
    v1 = *(int *)(p0 + 28);
    switch (v1) {
    default:
        return;
    case 0:
        tmp1 = ((V2C_0_i *)*(char **)(v0 + 8))->m();
        if (tmp1 != 0) {
            ((V44_0_v *)*(char **)(v0 + 8))->m();
            ((V1C_1_iv *)*(char **)(v0 + 8))->m(6);
            *(int *)(v0 + 28) = 1;
        }
        tmp5 = ((V24_0_i *)*(char **)(v0 + 8))->m();
        return;
    case 1:
        tmp7 = ((V2C_0_i *)*(char **)(v0 + 8))->m();
        if (tmp7 != 0) {
            ((V28_1_iv *)v0)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v0 + 8))->m();
        return;
    }
}
}

extern "C" {
int func_0031FFD0(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 0;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 5;
    ((V40_0_v *)*(char **)(p0 + 8))->m();
    tmp2 = ((V1C_1_ii *)*(char **)(p0 + 8))->m(14);
    *(int *)(p0 + 28) = 0;
    return tmp2;
}
}

extern "C" {
void func_00320030(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp5;
    int tmp7;
    v0 = p0;
    v1 = *(int *)(p0 + 28);
    switch (v1) {
    default:
        return;
    case 0:
        tmp1 = ((V2C_0_i *)*(char **)(v0 + 8))->m();
        if (tmp1 != 0) {
            ((V44_0_v *)*(char **)(v0 + 8))->m();
            ((V1C_1_iv *)*(char **)(v0 + 8))->m(5);
            *(int *)(v0 + 28) = 1;
        }
        tmp5 = ((V24_0_i *)*(char **)(v0 + 8))->m();
        return;
    case 1:
        tmp7 = ((V2C_0_i *)*(char **)(v0 + 8))->m();
        if (tmp7 != 0) {
            ((V28_1_iv *)v0)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v0 + 8))->m();
        return;
    }
}
}

extern "C" {
int func_00320130(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 0;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 2;
    ((V1C_1_iv *)*(char **)(p0 + 8))->m(20);
    tmp2 = ((V40_0_i *)*(char **)(p0 + 8))->m();
    *(int *)(*(char **)(p0 + 12) + 32) = 0;
    *(int *)(*(char **)(p0 + 12) + 36) = 0;
    *(int *)(*(char **)(p0 + 12) + 40) = 0;
    *(int *)(*(char **)(p0 + 12) + 44) = 0x3f800000;
    *(int *)(*(char **)(p0 + 12) + 48) = 0;
    *(int *)(*(char **)(p0 + 12) + 52) = 0;
    *(int *)(*(char **)(p0 + 12) + 56) = 0;
    *(int *)(*(char **)(p0 + 12) + 60) = 0x3f800000;
    return tmp2;
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
int func_003201D0(char *p0) {
    char *v0;
    int v1;
    v0 = p0;
    v1 = ((V2C_0_i *)*(char **)(p0 + 8))->m();
    if (v1 != 0) {
        ((V44_0_v *)*(char **)(v0 + 8))->m();
        v1 = ((V28_1_ii *)v0)->m(14);
    }
    return v1;
}
}

extern "C" {
int func_00320240(char *p0) {
    int tmp2;
    *(char *)(p0 + 17) = 1;
    *(char *)(p0 + 18) = 3;
    *(char *)(p0 + 19) = 6;
    ((V1C_1_iv *)*(char **)(p0 + 8))->m(21);
    tmp2 = ((V40_0_i *)*(char **)(p0 + 8))->m();
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"((p0 + 32)) : "memory");
    __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"((p0 + 48)) : "memory");
    *(float *)(p0 + 36) = 0.0f;
    *(float *)(p0 + 52) = -0.5400000214576721f;
    *(int *)(p0 + 28) = 0;
    *(float *)(p0 + 24) = 10.0f;
    return tmp2;
}
}

extern "C" {
void func_003202F0(char *p0) {
    int v0;
    char *v1;
    int v2;
    int tmp8;
    int tmp13;
    v0 = *(int *)(p0 + 28);
    v1 = p0;
    switch (v0) {
    case 0:
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((v1 + 32)), "r"((*(int *)(v1 + 12) + 32)) : "memory");
        if (*(float *)(v1 + 24) < 0.0f) {
            *(int *)(v1 + 28) = 1;
        }
        *(float *)(v1 + 24) = (*(float *)(v1 + 24) - 1.0f);
        break;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((v1 + 32)), "r"((v1 + 48)) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((v1 + 32)), "r"((*(int *)(v1 + 12) + 32)) : "memory");
        v2 = ((V30_1_ii *)*(char **)(v1 + 8))->m(v0);
        if (v2 != 0) {
            *(char *)(v1 + 17) = 0;
            *(char *)(v1 + 19) = 4;
            ((V44_0_v *)*(char **)(v1 + 8))->m();
            v2 = ((V1C_1_ii *)*(char **)(v1 + 8))->m(13);
            *(int *)(v1 + 28) = 2;
        }
        break;
    case 2:
        tmp8 = ((V2C_1_ii *)*(char **)(v1 + 8))->m(v0);
        if (tmp8 != 0) {
            ((V44_0_v *)*(char **)(v1 + 8))->m();
            ((V1C_1_iv *)*(char **)(v1 + 8))->m(6);
            *(int *)(v1 + 28) = 3;
        }
        v2 = ((V24_0_i *)*(char **)(v1 + 8))->m();
        break;
    case 3:
        tmp13 = ((V2C_1_ii *)*(char **)(v1 + 8))->m(v0);
        if (tmp13 != 0) {
            ((V28_1_iv *)v1)->m(14);
        }
        v2 = ((V24_0_i *)*(char **)(v1 + 8))->m();
        break;
    }
}
}
