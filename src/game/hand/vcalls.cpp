/* Hand-matched C++ (virtual calls). The classes are synthetic: dummy virtuals put each method
 * at the vtable slot its call sites use (slot offset = 8 + 4 * index). */

#include "game/mt_rand.h"

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


/* Animation step with a state flip once the clip passes +0x104 (one per enemy type). */

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

extern "C" void func_004A5780(char *p) {
    Anim *a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        a = *(Anim **)(p + 0xA8);
        if (!(a->m28() < *(float *)(p + 0x104))) {
            p[0xCF] = 2;
            (*(Anim **)(p + 0xA8))->m1C(0x14);
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


/* Turns toward a target angle at most +-limit per frame, scaled by +0xB0. */

extern "C" void func_00364860(char *p) {
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

extern "C" void func_003649A0(char *p) {
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

extern "C" void func_00364AE0(char *p) {
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

extern "C" void func_00365A30(char *p) {
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

/* Emits two effects for every active entry pair (sub-object at +0x130 gives the rate). */
class Sub130 {
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
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
    virtual void d31();
    virtual int m88();
};

extern "C" int func_004F2190(char *, int, int, int, char *, int, int);
extern "C" void func_0037BC90(char *, int);
struct O37E { char pad[0x69F8]; char *arr[1]; };
extern "C" void func_0037E590(char *p) {
    float f;
    int i;
    int n;
    f = ((Sub130 *)(p + 0x130))->m7C();
    n = ((Sub130 *)(p + 0x130))->m80(f);
    if (*(int *)(p + 0x6E4C) != 0) {
        return;
    }
    for (i = 0; i < *(int *)(p + 0x6E78); i += 2) {
        if (*(int *)(((O37E *)p)->arr[i] + 0x144C) > 0) {
            func_0037BC90(p, func_004F2190(p + 0x710, *(int *)(p + 0x750), i, 0, p, *(int *)(p + 0x77CC), n));
            func_0037BC90(p, func_004F2190(p + 0x710, *(int *)(p + 0x750), i, 1, p, *(int *)(p + 0x77CC), n));
        }
    }
}

/* Throw arc: decays a speed and moves along the facing; event 0xD when the sub-timer ends. */
class Obj3BF {
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
    virtual void m304(int);
};


extern "C" float func_00131BA0(int);
extern "C" float func_00131C20(int);
extern "C" float func_0034C190(float, float, float);
extern "C" void func_00132540(float *, char *, float);
extern "C" int func_0024E800(char *);

extern "C" void func_003BFD20(char *p) {
    float t[4];
    float zero = 0.0f;
    *(int *)(p + 0x1668) = 0;
    p[0x1BC6] = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        *(float *)(p + 0x1BAC) = zero;
        *(float *)(p + 0x1BB0) = zero;
        *(float *)(p + 0x60) = func_00131BA0(*(short *)(p + 0x90));
        *(int *)(p + 0x64) = 0;
        *(float *)(p + 0x68) = func_00131C20(*(short *)(p + 0x90));
    case 1:
        if (!(*(float *)(p + 0x1BAC) <= 0.0f)) {
            *(float *)(p + 0x1BAC) = func_0034C190(*(float *)(p + 0x1BAC), 0.0f, *(float *)(p + 0x1BB0) * *(float *)(p + 0x10));
            func_00132540(t, p + 0x60, *(float *)(p + 0x1BAC) * *(float *)(p + 0x10));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(t) : "memory");
        }
        if ((unsigned char)func_0024E800(p + 0x1680) == 1) {
            ((Obj3BF *)p)->m304(0xD);
        }
        break;
    }
}

/* Turn-toward with a +-0x200 limit that also stops the animation on its event. */
class Anim2 {
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
    virtual void d14();
    virtual void m44();
};

extern "C" void func_0035E2B0(char *p) {
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
    if ((*(Anim2 **)(p + 0xA8))->m2C()) {
        (*(Anim2 **)(p + 0xA8))->m44();
        ((ObjV *)p)->mEC(0xE);
    }
    (*(Anim2 **)(p + 0xA8))->m24();
}

extern "C" void func_0049BA90(char *p) {
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
    if ((*(Anim2 **)(p + 0xA8))->m2C()) {
        (*(Anim2 **)(p + 0xA8))->m44();
        ((ObjV *)p)->mEC(0xE);
    }
    (*(Anim2 **)(p + 0xA8))->m24();
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

/* Picks one of two animations at random. */
extern "C" void func_00365790(char *p) {
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

/* Random idle pose. */
extern "C" void func_0035E190(char *p) {
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
}

/* Starts animation 0xB with a random 30..120 frame timer. */
extern "C" void func_00364510(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 1;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0xB);
    *(float *)(p + 0x100) = 60.0f * (0.5f + 1.5f * (2.3283064e-10f * mt_rand()));
}

extern "C" void func_0035E3D0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 3;
    p[0xCF] = 2;
    (*(Anim4 **)(p + 0xA8))->m40();
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 0xA8))->m1C(2);
        break;
    case 1:
        (*(Anim4 **)(p + 0xA8))->m1C(2);
        break;
    }
}

/* Starts animation 0x3E with a random 45..90 frame timer. */
extern "C" void func_00368060(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 4;
    (*(Anim4 **)(p + 0xA8))->m18(0x3E);
    (*(Anim4 **)(p + 0xA8))->m44();
    *(int *)(p + 0xD4) = 0;
    *(float *)(p + 0x104) = 45.0f + 45.0f * (2.3283064e-10f * mt_rand());
}

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

extern "C" void func_00364750(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 1;
    p[0xCF] = 0;
    switch (mt_rand() & 1) {
    case 0:
        (*(Anim4 **)(p + 0xA8))->m18(0xC);
        break;
    case 1:
        (*(Anim4 **)(p + 0xA8))->m18(0xF);
        break;
    }
}

extern "C" void func_004655E0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 1;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0xB);
    *(float *)(p + 0x100) = 60.0f * (0.5f + 1.5f * (2.3283064e-10f * mt_rand()));
    *(int *)(p + 0x110) = 0;
}

extern "C" void func_00365900(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 4;
    p[0xCF] = 0;
    if (2.3283064e-10f * mt_rand() < 0.5f) {
        (*(Anim4 **)(p + 0xA8))->m18(0x28);
    } else {
        (*(Anim4 **)(p + 0xA8))->m18(0x5C);
    }
}

extern "C" void func_00361F10(char *p) {
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

extern "C" {
extern float D_005BD100[];
extern float D_005BD104[];
void func_003E6750(char *, int, int, int);
}

extern "C" void func_003EDC10(char *p) {
    ((Obj2F8 *)p)->m2F8(0x19);
    p[0x3434] = 0;
    p[0x3435] = 0;
    p[0x3436] = 0;
    if (*(int *)(p + 0x1F94) != 1) {
        func_003E6750(p, 1, 0, 0);
    }
    *(float *)(p + 0x3A8C) = D_005BD100[0] + D_005BD104[0] * (2.0f * (2.3283064e-10f * mt_rand()) - 1.0f);
}

extern "C" void func_00369C80(char *p) {
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

extern "C" void func_0049FE40(char *p) {
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
    (*(Anim4 **)(p + 0xA8))->m48(0x27, *(char **)(p + 0x10) + 0x10);
    *(int *)(p + 0x110) = 0;
}

extern "C" void func_003EEEF0(char *p) {
    ((Obj2F8 *)p)->m2F8(0x2D);
    p[0x3434] = 0;
    p[0x3435] = 3;
    p[0x3436] = 2;
    if (2.3283064e-10f * mt_rand() > 0.5f) {
        func_003E6750(p, 0xE, 0, 0);
    } else {
        func_003E6750(p, 0xF, 0, 0);
    }
}

extern "C" void func_0035FF90(char *p) {
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

extern "C" float D_0058AD40[][3];

extern "C" void func_004CBD90(char *p) {
    if (100.0f * (2.3283064e-10f * mt_rand()) < D_0058AD40[*(int *)(p + 0xB2C0)][*(unsigned char *)(p + 0xB2C8)]) {
        ((Obj2F8 *)p)->m2F8(0x33);
    } else {
        ((Obj2F8 *)p)->m2F8(0x3E);
    }
}

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

extern "C" int func_004D1EF0(char *);

extern "C" void func_004C87A0(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        if (mt_rand() & 1) {
            ((ObjB *)p)->m300(2);
        } else {
            ((ObjB *)p)->m300(0x11);
        }
        break;
    case 1:
        if (((ObjB *)p)->m2EC() == 0x77) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
    if ((unsigned char)func_004D1EF0(p) == 0) {
        ((ObjB *)p)->m2F8(0x32);
    }
}

extern "C" int func_00321980(char *p, int i) {
    char *list = (*(char ***)(*(char **)(p + 8) + 8))[i];
    float f = ((Anim4 *)p)->m7C();
    int k;
    char *e;
    float r;
    float acc;
    if (*(unsigned char *)(p + 0x8D)) {
        f = 1199.0f;
    }
    k = ((Anim4 *)p)->m80(f);
    if (*(unsigned char *)(p + 0x8D)) {
        k++;
    }
    e = ((char **)list)[k];
    r = 99.0f * (2.3283064e-10f * mt_rand());
    acc = 0.0f;
    for (;; e += 8) {
        acc += *(float *)(e + 4);
        if (!(acc > r)) {
            continue;
        }
        return *(int *)e;
    }
}

extern "C" void func_00369DD0(char *p) {
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

extern "C" signed char D_00566330[][7][5];
extern "C" void func_0037C0C0(char *, int);

/* Picks a random entry (terminated by -1) of the row for the current state and level. */
extern "C" int func_0037BF20(char *p) {
    int k = ((Sub130 *)(p + 0x130))->m80(((Sub130 *)(p + 0x130))->m7C());
    int n;
    signed char *e;
    int v;
    if (*(unsigned char *)(p + 0x1BD)) {
        k = 6;
    }
    n = 0;
    e = D_00566330[*(int *)(p + 0x77CC)][k];
    for (;;) {
        if (*e == -1) {
            break;
        }
        n++;
        e++;
    }
    v = D_00566330[*(int *)(p + 0x77CC)][k][mt_rand() % n];
    if (v < 0 || v >= 13) {
        v = 1;
    }
    func_0037C0C0(p, v);
    return v;
}

extern "C" int func_003F3830(char *);
extern "C" int func_0024E800(char *);

extern "C" void func_003EED40(char *p) {
    if (func_003F3830(p)) {
        p[0x3435] = 2;
        p[0x3437] = 2;
        p[0x3438] = 2;
    } else {
        p[0x3435] = 0;
        p[0x3437] = 0;
        p[0x3438] = 0;
    }
    *(float *)(p + 0x710) -= 20.0f * *(float *)(p + 0x35B0);
    *(float *)(p + 0x714) -= 20.0f * *(float *)(p + 0x35B4);
    *(float *)(p + 0x718) -= 20.0f * *(float *)(p + 0x35B8);
    if (func_0024E800(p + 0x1FD0)) {
        ((Obj2F8 *)p)->m2F8(3);
        p[0x3A80] = 0;
        p[0x3A81] = 1;
        *(float *)(p + 0x3A8C) = 300.0f + 200.0f * (2.3283064e-10f * mt_rand());
        func_003E6750(p, 0, 0, 0);
    }
}

extern "C" void func_0034BA60(int, char *, int, int, int);
extern "C" void func_00104C00(char *, int, char *);
extern "C" void func_0037E850(char *, int);
extern "C" void func_001AD140(char *);

extern "C" void func_0037A080(char *p) {
    int i;
    *(float *)(p + 0x78D0) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x78D0) < 0.0f) {
        *(float *)(p + 0x78D0) = *(float *)(p + 0x78D4);
        if (mt_rand() & 1) {
            func_0034BA60(0x28, p + 0x6F0, 0x29, 0, 1);
        } else {
            func_0034BA60(0x29, p + 0x6F0, 0x29, 0, 1);
        }
    }
    func_00104C00(p + 0x7880, *(int *)(*(char **)(p + 0x778) + 0x104), p + 0x7840);
    for (i = 0; i < *(int *)(p + 0x6E80); i++) {
        if (*(short *)(p + i * 2 + 0x6668) != 0) {
            *(short *)(p + i * 2 + 0x6668) += 0x200;
        }
    }
    *(float *)(p + 0x77E8) -= *(float *)(p + 0x10);
    if (*(float *)(p + 0x77E8) < 0.0f) {
        ((ObjB *)p)->m2FC(0xC);
        func_0037E850(p, 5);
        for (i = 1; i < *(int *)(p + 0x6E80); i++) {
            if (*(char **)(p + i * 4 + 0x6640) != 0) {
                func_001AD140(*(char **)(p + i * 4 + 0x6640));
            }
        }
    }
}

extern "C" void func_00360590(char *p) {
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

extern "C" float D_005731F0[];
extern "C" float D_005731D0[];
extern "C" void func_003EAF00(char *);

static inline int dist_level(char *p) {
    int l = ((Sub130 *)(p + 0x130))->m7C() / 300.0f;
    if (l > 3) {
        l = 3;
    }
    if (*(unsigned char *)(p + 0x1BD)) {
        l = 4;
    }
    return l;
}

extern "C" void func_003EA030(char *p) {
    float r;
    ((Obj2F8 *)p)->m2F8(1);
    if (*(int *)(p + 0x1F94) != 0) {
        func_003E6750(p, 0, 0, 0);
    }
    r = 2.3283064e-10f * mt_rand();
    *(float *)(p + 0x3A8C) = (2.0f * r - 1.0f) * D_005731F0[dist_level(p)];
    *(float *)(p + 0x3A8C) += D_005731D0[dist_level(p)];
    if (*(float *)(p + 0x357C) < 0.70700002f) {
        func_003EAF00(p);
    }
}

extern "C" float D_005BDF3C;
extern "C" int func_004D1B90(char *, int);

extern "C" void func_004D31D0(char *p, float dt) {
    unsigned char ok;
    if (*(unsigned char *)(p + 0xB2D3) == 1) {
        return;
    }
    if (*(unsigned char *)(p + 0x14D) == 3) {
        return;
    }
    ok = 1;
    if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
        ok = 0;
    }
    if (ok == 1) {
        *(float *)(p + 0xB2BC) += dt;
        if (*(float *)(p + 0xB2BC) > D_005BDF3C) {
            p[0xB2CC] = 1;
            switch ((unsigned char)func_004D1B90(p, 1)) {
            case 1:
            case 2:
                ((Obj2F8 *)p)->m2F8(50);
                break;
            case 0:
                *(float *)(p + 0xB2BC) = D_005BDF3C - 1.0f;
                p[0xB2CC] = 0;
                break;
            }
        }
    }
}

extern "C" float D_0058AD80[];

extern "C" void func_004C89F0(char *p) {
    unsigned char ok;
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ok = 1;
        if ((unsigned int)(*(unsigned char *)(p + 0xB2C9) - 2) > 1) {
            ok = 0;
        }
        if (ok == 1) {
            p[0xB2CC] = 1;
            if (*(unsigned char *)(p + 0xB2D3) == 1) {
                p[0xB2D3] = 0;
                *(float *)(p + 0xB2A8) = D_0058AD80[*(int *)(p + 0xB2C0)];
            }
        }
        ((ObjB *)p)->m300(20);
        break;
    case 1:
        if (((ObjB *)p)->m2EC() == 0x77) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
}

class Obj134 {
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

extern "C" void func_0041D840(char *, char *, float);
extern "C" char *func_002D9F00(char *, int);
extern "C" char D_01CAFF0C[];
extern "C" char *func_00207480(int, int, int, int);

static inline void vset(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

extern "C" void func_0042F020(char *p) {
    char *o = (*(Obj134 **)(p + 0xD0))->m134(2);
    char *b;
    char *m;
    p[0x44] = -1;
    p[0x45] = 4;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(*(char **)(o + 0x104) + 0x30) : "memory");
    vset((float *)(p + 0x80), 0.0f, 0.0f, 0.0f, 1.0f);
    *(short *)(p + 0x90) = 0;
    vset((float *)(p + 0x60), 0.0f, 0.0f, 10.0f, 1.0f);
    b = p;
    if (b) {
        b += 0x40;
    }
    func_0041D840(b, p + 0x150, 1.0f);
    m = func_002D9F00(*(char **)(*(char **)D_01CAFF0C + 0xC), 1);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x450), "r"(m + 0x30) : "memory");
    *(char **)(p + 0x460) = func_00207480(3, 0x101, (int)(p + 0x190), 16);
    if (*(char **)(p + 0x460) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x464) = 100.0f;
    *(int *)(p + 0x468) = 0;
    p[4] = 1;
}

extern "C" float D_005BDDB8;
extern "C" char D_0058AAA0[];
extern "C" int func_004D2610(char *, ...);
extern "C" void func_004D1AF0(char *, char *, int);
extern "C" void func_004CBBE0(char *, float);

extern "C" void func_004C47D0(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ((ObjB *)p)->m300(1);
        *(float *)(p + 0xB178) = D_005BDDB8;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p, 1) == 1) {
            func_004CBD90(p);
            break;
        }
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((Sub130 *)(p + 0x130))->m88()) {
            func_004CBBE0(p, 3.0f);
        }
        if ((unsigned char)func_0024E800(*(char **)(p + 0xAB00)) == 1) {
            ((ObjB *)p)->m300(1);
        }
        *(float *)(p + 0xB178) -= *(float *)(p + 0x10);
        if (*(float *)(p + 0xB178) < 0.0f) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
}

class ObjCC {
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
    virtual int mCC(int);
};

extern "C" void func_003196C0(char *p) {
    float m[16] __attribute__((aligned(16)));
    if (*(unsigned char *)(p + 0x28A0) == 0) {
        ((ObjCC *)(p + 0x4A00))->mCC(*(int *)(*(char **)(p + 0x138C) + 0x104));
        return;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    switch (*(signed char *)(p + 0x28A8)) {
    case 1:
        ((ObjCC *)(p + *(int *)(p + 0x7AA0) * 1536 + 0x4A00))->mCC((int)m);
        break;
    case 0:
        if (*(int *)(p + 0x2898) & 2) {
            ((ObjCC *)(p + *(int *)(p + 0x7A78) * 1536 + 0x4A00))->mCC(*(int *)(((char **)(p + 0x13B8))[*(int *)(p + 0x7A74)] + 0x104));
        } else {
            ((ObjCC *)(p + *(int *)(p + 0x7A84) * 1536 + 0x4A00))->mCC(*(int *)(((char **)(p + 0x138C))[*(int *)(p + 0x7A74)] + 0x104));
        }
        ((ObjCC *)(p + *(int *)(p + 0x7A90) * 1536 + 0x4A00))->mCC((int)m);
        break;
    }
}

extern "C" int func_0033A660(char *, int);
extern "C" void func_00335EF0(char *, int);
extern "C" float func_00132470(char *, char *);

/* Moves 300 units out from the body along the facing, easing over 30 frames. */
extern "C" void func_00337D50(char *p) {
    float v[4] __attribute__((aligned(16)));
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        (*(unsigned char *)(p + 5))++;
        p[6] = 0;
    case 1:
        ((Sub130 *)(p + 0x130))->m6C();
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x50), "r"(p + 0x150) : "memory");
        v[1] = 0.0f;
        func_00132540(v, (char *)v, 300.0f);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x1330), "r"(p + 0x150), "r"(v) : "memory");
        func_00335EF0(p, 0x400);
        *(float *)(p + 0x50) += *(float *)(p + 0x10) * ((*(float *)(p + 0x1330) - *(float *)(p + 0x50)) / 30.0f);
        *(float *)(p + 0x54) += *(float *)(p + 0x10) * ((*(float *)(p + 0x1334) - *(float *)(p + 0x54)) / 30.0f);
        *(float *)(p + 0x58) += *(float *)(p + 0x10) * ((*(float *)(p + 0x1338) - *(float *)(p + 0x58)) / 30.0f);
        if (func_00132470(p + 0x50, p + 0x1330) < 30.0f) {
            ((ObjB *)p)->m304(0x20);
        }
        break;
    }
}

class ObjB2 {
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
    virtual int m2FC(char *, char *);
};

/* Copies a motion setup into the object and starts it. */
extern "C" int func_0033ADA0(char *p, char *a, char *b) {
    int r;
    if (*(unsigned char *)(p + 0x14D) != 3) {
    p[0x16C] = a[0];
    p[0x16D] = a[1];
    p[0x16E] = a[2];
    *(float *)(p + 0x170) = *(float *)(a + 4);
    *(float *)(p + 0x174) = *(float *)(a + 8);
    *(float *)(p + 0x178) = *(float *)(a + 12);
    *(float *)(p + 0x17C) = *(float *)(a + 16);
    *(float *)(p + 0x180) = *(float *)(a + 20);
    p[0x184] = a[24];
    *(float *)(p + 0x188) = *(float *)(a + 28);
    p[0x18C] = a[32];
    *(float *)(p + 0x190) = *(float *)(a + 36);
    *(float *)(p + 0x194) = *(float *)(a + 40);
    *(float *)(p + 0x198) = *(float *)(a + 44);
    p[0x19C] = *(unsigned char *)(a + 48);
    *(int *)(p + 0x1A0) = *(int *)(a + 52);
    *(float *)(p + 0x1A4) = *(float *)(a + 56);
    p[0x1A8] = a[60];
    p[0x1A9] = a[61];
    p[0x1AA] = a[62];
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x150), "r"(b + 0x10) : "memory");
    ((ObjV *)(p + 0x130))->m70();
    switch (*(unsigned char *)(a + 60)) {
    case 0:
        *(short *)(*(char **)(p + 0x140) + 0x50) = *(short *)(p + 0x160);
        break;
    case 1:
        *(short *)(*(char **)(p + 0x140) + 0x50) = *(short *)(b + 0x50) + 0x8000;
        break;
    }
    ((ObjB *)p)->m2F0(3);
    r = ((ObjB2 *)p)->m2FC(a, b);
    }
    return r;
}

/* Turn toward the target (+-0x100 per frame); between animation frames 25 and 30 also snap
 * up to 15 degrees. */
extern "C" void func_003635A0(char *p) {
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

/* Hop: rises on frame 9, falls under gravity until landing, then plays the landing. */
extern "C" void func_00365BD0(char *p) {
    if (*(int *)(p + 0xD4) != 3) {
        switch (*(int *)(p + 0xD4)) {
        case 0:
            if ((*(Anim4 **)(p + 0xA8))->m28() >= 9.0f) {
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


static inline short deg2ang(float d) {
    return 0.5f + 65536.0f * d / 360.0f;
}

/* Starts a leap: plays the jump animation with its effects and sets the launch velocity from
 * the facing angle. */
extern "C" void func_0036C960(char *p) {
    float vy;
    float vz;
    p[0xCD] = 1;
    p[0xCE] = 3;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m1C(0x10);
    (*(Anim4 **)(p + 0xA8))->m48(0x385, *(char **)(p + 0x10) + 0x10);
    (*(Anim4 **)(p + 0xA8))->m48(0x3E0, *(char **)(p + 0x10) + 0x10);
    (*(Anim4 **)(p + 0xA8))->m48(0x7D5, *(char **)(p + 0x10) + 0x10);
    *(int *)(p + 0xD4) = 0;
    ((ObjV *)p)->m6C();
    ((ObjV *)p)->m70();
    *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
    *(float *)(p + 0xE0) = 0.0f;
    *(float *)(p + 0xE4) = 15.0f;
    *(float *)(p + 0xE8) = -10.0f;
    *(float *)(p + 0xEC) = 1.0f;
    *(float *)(p + 0xF0) = 0.0f;
    *(float *)(p + 0xF4) = -0.54f;
    *(float *)(p + 0xF8) = 0.0f;
    *(float *)(p + 0xFC) = 1.0f;
    vy = *(float *)(p + 0x74) * func_00131BA0((short)(unsigned short)deg2ang(*(float *)(p + 0x4C)));
    vz = *(float *)(p + 0x74) * func_00131C20((short)(unsigned short)deg2ang(*(float *)(p + 0x4C)));
    *(float *)(p + 0xE0) = 0.0f;
    *(float *)(p + 0xE4) = vy;
    *(float *)(p + 0xE8) = -vz;
    *(float *)(p + 0xEC) = 1.0f;
    ((ObjV *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
}

extern "C" void func_003650F0(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 0;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x35);
}

extern "C" void func_00362130(char *p) {
    p[0xCD] = 0;
    p[0xCE] = 4;
    p[0xCF] = 0;
    (*(Anim4 **)(p + 0xA8))->m18(0x2F);
}

extern "C" void func_0035A670(char *p) {
    (*(Anim4 **)(p + 0xA8))->m48(0x138A, *(char **)(p + 0x10) + 0x10);
}

/* Like func_00321980, but the list is chosen by `which` and then by distance thresholds. */
extern "C" int func_00321B10(char *p, unsigned char which) {
    char **lst;
    char *e;
    float *t;
    float f;
    int k;
    char *w;
    float r;
    float acc;
    ((Anim4 *)p)->m6C();
    ((Anim4 *)p)->m74();
    switch (which) {
    case 0:
        lst = *(char ***)(*(char **)(p + 8) + 0);
        break;
    case 1:
        lst = *(char ***)(*(char **)(p + 8) + 4);
        break;
    }
    t = *(float **)(*(char **)(p + 8) + 0xC);
    e = *lst++;
    while (*t > 0.0f) {
        if (!(*t <= *(float *)(p + 0x34))) {
            break;
        }
        t++;
        e = *lst++;
    }
    f = ((Anim4 *)p)->m7C();
    if (*(unsigned char *)(p + 0x8D)) {
        f = 1199.0f;
    }
    k = ((Anim4 *)p)->m80(f);
    if (*(unsigned char *)(p + 0x8D)) {
        k++;
    }
    w = ((char **)e)[k];
    r = 99.0f * (2.3283064e-10f * mt_rand());
    acc = 0.0f;
    for (;; w += 8) {
        acc += *(float *)(w + 4);
        if (!(acc > r)) {
            continue;
        }
        return *(int *)w;
    }
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

extern "C" void func_0037BDD0(char *);

/* Every 40 frames a random effect; when no sub-part is alive the boss is defeated, otherwise
 * its parts spin (faster while the player is in state 0x3C78). */
extern "C" void func_00379B90(char *p) {
    char *pl = *(char **)(*(char **)D_01CAFF0C + 0xC);
    int i;
    unsigned char dead;
    func_0037BDD0(p);
    (*(unsigned char *)(p + 0x78CC))++;
    if (*(unsigned char *)(p + 0x78CC) % 40 == 0) {
        if (mt_rand() & 1) {
            func_0034BA60(0x24, p + 0x6F0, 0x29, 0, 1);
        } else {
            func_0034BA60(0x25, p + 0x6F0, 0x29, 0, 1);
        }
    }
    dead = 1;
    for (i = 0; i < *(int *)(p + 0x6E78); i++) {
        if (*(int *)(*(char **)(p + i * 4 + 0x69F8) + 0x144C) > 0) {
            dead = 0;
        }
    }
    if (dead) {
        ((ObjB *)p)->m2F4(0x6A);
        *(float *)(p + 0x6E6C) = 5.0f;
        return;
    }
    for (i = 0; i < *(int *)(p + 0x6E80); i++) {
        if (*(short *)(p + i * 2 + 0x6668) != 0) {
            if (*(unsigned char *)(pl + 0x3C78)) {
                *(short *)(p + i * 2 + 0x6668) += 0x80;
                *(short *)(p + i * 2 + 0x6668) &= -0x80;
            } else {
                *(short *)(p + i * 2 + 0x6668) += 0x200;
                *(short *)(p + i * 2 + 0x6668) &= -0x200;
            }
        }
    }
    if (*(unsigned char *)(pl + 0x28AC) == 1 && *(unsigned char *)(p + 0x7805)) {
        ((ObjB *)p)->m2F4(0x69);
    }
}

extern "C" void func_004C4BA0(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ((ObjB *)p)->m300(1);
        *(int *)(p + 0xB17C) = 0;
        *(int *)(p + 0xB184) = 0;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            break;
        }
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((Sub130 *)(p + 0x130))->m88()) {
            func_004CBBE0(p, 3.0f);
        }
        if ((unsigned char)func_0024E800(*(char **)(p + 0xAB00)) == 1) {
            if (*(int *)(p + 0xB17C) == 0) {
                *(int *)(p + 0xB17C) = 1;
                *(int *)(p + 0xB184) = *(int *)(p + 0xB184) != 1;
            } else if (mt_rand() & 1) {
                *(int *)(p + 0xB17C) = 0;
            }
            if (*(int *)(p + 0xB17C) == 0) {
                ((ObjB *)p)->m300(1);
            } else if (*(int *)(p + 0xB184) == 0) {
                ((ObjB *)p)->m300(0x59);
            } else {
                ((ObjB *)p)->m300(0x5A);
            }
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

extern "C" void func_004C5200(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        (*(unsigned char *)(p + 0xB158))++;
        ((ObjB *)p)->m300(0x59);
        *(int *)(p + 0xB184) = 0;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            break;
        }
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((Sub130 *)(p + 0x130))->m88()) {
            func_004CBBE0(p, 3.0f);
        }
        if ((unsigned char)func_0024E800(*(char **)(p + 0xAB00)) == 1) {
            *(int *)(p + 0xB184) = *(int *)(p + 0xB184) >= 2 ? 0 : *(int *)(p + 0xB184) + 1;
            switch (*(int *)(p + 0xB184)) {
            case 0:
                if (mt_rand() & 1) {
                    ((ObjB *)p)->m300(0x59);
                } else {
                    ((ObjB *)p)->m300(0x5A);
                }
                break;
            case 1:
                ((ObjB *)p)->m300(0);
                break;
            case 2:
                ((ObjB *)p)->m300(1);
                break;
            }
        }
        break;
    }
}

class ObjC0 {
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
    virtual int mC0(int, int, int);
};

extern "C" unsigned char func_00405F30(void);

extern "C" void func_00405F90(char *p, int a, int b, int c) {
    if (func_00405F30() == 1) {
        (*(ObjC0 **)(p + 0x450))->mC0(a, b, c);
    }
}


struct M64 { int w[16]; };

class SubCCa {
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
    virtual void mCC(M64 *);
};

class SubCCb {
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
    virtual int mCC(M64 *);
};

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

extern "C" int func_003C3940(char *p) {
    M64 m = *(M64 *)(p + 4864);
    ((SubCCa *)(p + 1664))->mCC(&m);
    return ((SubCCb *)(p + 3200))->mCC(&m);
}

extern "C" int func_0030B430(char *p) {
    int i;
    int r;
    char *a = p;
    char *o = p;
    for (i = 0; i < 3; i++, a += 64, o += 1536) {
        r = ((SubCCc *)(o + 384))->mCC(a + 5744);
        if (*(unsigned char *)(p + 5944) == 0) {
            break;
        }
    }
    return r;
}

class Obj1F0 {
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
    virtual int m1F0(int, char *);
};

extern "C" void func_004FB7D0(char *p) {
    int i = 0;
    char *o;
    char *a;
    if (0 < **(signed char **)(p + 3504)) {
        o = p;
        a = p + 3440;
        do {
            ((SubCCc *)(o + 256))->mCC(a);
            i++;
            o += 1536;
        } while (i < **(signed char **)(p + 3504));
    }
}

static inline unsigned char flag1(char *p, int off) {
    return *(unsigned char *)(p + off) == 1;
}

extern "C" void func_003A02D0(char *);

extern "C" void func_00393AC0(Obj1F0 *o, int a, char *e) {
    char *p = (char *)o;
    if (*(signed char *)(e + 6) == 44) {
        *(float *)(p + 3016) = 1.0f;
    } else if (*(unsigned char *)(p + 333) != 3) {
        *(unsigned char *)(p + 333) = 3;
        *(float *)(p + 3016) = 0.0f;
        *(char **)(p + 328) = e;
        o->m1F0(*(int *)(p + 328), p + 2928);
        if (flag1(p, 11748)) {
            func_003A02D0(p);
        }
    }
}

extern "C" void func_003B4B80(char *);

extern "C" void func_003AF090(Obj1F0 *o, int a, int e) {
    char *p = (char *)o;
    if (*(unsigned char *)(p + 333) != 3) {
        *(unsigned char *)(p + 333) = 3;
        *(float *)(p + 1400) = 0.0f;
        *(int *)(p + 328) = e;
        o->m1F0(*(int *)(p + 328), p + 1312);
        if (flag1(p, 8648)) {
            func_003B4B80(p);
        }
    }
}

class Obj130 {
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
    virtual void m130(int);
    virtual void d75();
    virtual void m138(int);
    virtual void m13C();
};

extern "C" void func_004589C0(char *, int);

extern "C" void func_00458730(Obj130 *o) {
    int k = *(unsigned char *)((char *)o + 4);
    switch (k) {
    case 0:
        o->m130(k);
        break;
    case 1:
        func_004589C0((char *)o, k);
        break;
    case 2:
        o->m138(k);
    case 3:
        o->m13C();
        break;
    }
}

extern "C" void func_004E7740(char *, int);

extern "C" void func_004E7480(Obj130 *o) {
    int k = *(unsigned char *)((char *)o + 4);
    switch (k) {
    case 0:
        o->m130(k);
        break;
    case 1:
        func_004E7740((char *)o, k);
        break;
    case 2:
        o->m138(k);
    case 3:
        o->m13C();
        break;
    }
}

extern "C" void func_004F25F0(char *, int);

extern "C" void func_004F2330(Obj130 *o) {
    int k = *(unsigned char *)((char *)o + 4);
    switch (k) {
    case 0:
        o->m130(k);
        break;
    case 1:
        func_004F25F0((char *)o, k);
        break;
    case 2:
        o->m138(k);
    case 3:
        o->m13C();
        break;
    }
}

extern "C" void func_00505450(char *, int);

extern "C" void func_00505280(Obj130 *o) {
    int k = *(unsigned char *)((char *)o + 4);
    switch (k) {
    case 0:
        o->m130(k);
        break;
    case 1:
        func_00505450((char *)o, k);
        break;
    case 2:
        o->m138(k);
    case 3:
        o->m13C();
        break;
    }
}


extern "C" void func_00507450(char *, int);

extern "C" void func_00507200(Obj130 *o) {
    int k = *(unsigned char *)((char *)o + 4);
    switch (k) {
    case 0:
        o->m130(k);
        break;
    case 1:
        func_00507450((char *)o, k);
        break;
    case 2:
        o->m138(k);
    case 3:
        o->m13C();
        break;
    }
}

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

extern "C" void func_003F3A90(char *);
extern "C" void func_0050EF10(Obj130b *);

extern "C" void func_0050ED10(Obj130b *o) {
    func_003F3A90((char *)o + 0x228);
    switch (*(unsigned char *)((char *)o + 4)) {
    case 0:
        o->m130();
        break;
    case 1:
        func_0050EF10(o);
        break;
    case 2:
        o->m138();
    case 3:
        o->m13C();
        break;
    }
}

extern "C" void func_0034F270(char *p) {
    int i;
    char *a = p;
    char *o = p;
    for (i = 0; i < 18; i++, a += 128, o += 1536) {
        ((SubCCc *)(o + 64))->mCC(a + 27776);
    }
    if (*(unsigned char *)(p + 5) == 2 && *(unsigned char *)(p + 0x10000 - 31870) != 0) {
        ((SubCCc *)(p + 32000))->mCC(p + 0x8340);
    }
    if (*(int *)(p + 31744) != 0) {
        ((SubCCc *)(p + 30080))->mCC(p + 31680);
    }
}

class ObjB4E {
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
    virtual int mB4(int, int, int, int);
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
    virtual void mE0(float);
    virtual void e55();
    virtual float mE8();
};

extern "C" void func_002E5770(char *p, int a, int mode) {
    if (mode == 2) {
        *(char *)(p + 609) = 0;
    } else if (*(ObjB4E **)(p + 576) != 0) {
        *(char *)(p + 609) = 1;
        (*(ObjB4E **)(p + 576))->mB4(a, 0, 0, 0);
        if (mode == 0) {
            (*(ObjB4E **)(p + 576))->mE0(0.0f);
        } else if (mode == 1) {
            (*(ObjB4E **)(p + 576))->mE0((*(ObjB4E **)(p + 576))->mE8());
        }
    }
}

class ObjC4 {
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
    virtual char *mC4();
};

extern "C" float func_001324E0(char *);
extern "C" int func_002DB3E0(char *, int);

extern "C" void func_002DBAA0(char *p, int a, float f) {
    char stk[0x10] __attribute__((aligned(16)));
    char *v;
    float dt;
    v = ((ObjC4 *)(p + *(unsigned char *)(p + 10400) * 1536 + 384))->mC4();
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(v), "r"(stk) : "memory");
    *(float *)(p + 336) = f * func_001324E0(stk);
    dt = *(float *)(p + 16);
    if (0.0f != dt) {
        dt = dt > 0.0001f ? dt : 0.0001f;
        *(float *)(p + 336) = *(float *)(p + 336) / dt;
    }
    *(int *)(p + 340) = 0;
    func_002DB3E0(p, a);
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

extern "C" int func_00362050(ObjTurn *o) {
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

extern "C" int func_00365120(ObjTurn *o) {
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

extern "C" int func_0049FFA0(ObjTurn *o) {
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

extern "C" int func_004A2AC0(ObjTurn *o) {
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


class Obj38 {
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
    virtual int m38();
};

extern "C" char *D_005BE0D8;
extern "C" void func_00131530(char *, int, char *, int, int);
extern "C" void func_001B2B00(char *, char *, int, char *, char *);
extern "C" unsigned char func_002070F0(char *);
extern "C" void func_00207100(char *, char *);

extern "C" void func_001B4550(Obj38 *o) {
    char stk[0x40] __attribute__((aligned(16)));
    char *p = (char *)o;
    char *e = p + (*(signed char *)(D_005BE0D8 + 14) << 5) + 1136;
    func_00131530(e, 39, p + (signed char)o->m38() * 624 + 1200, 0, 0);
    if (func_002070F0(p) == 1) {
        func_00207100(p, stk);
        func_001B2B00(p, e + 16, 0, p + 80, stk);
    } else {
        func_001B2B00(p, e + 16, 0, p + 80, 0);
    }
}

extern "C" void func_0050C0E0(char *p) {
    int i;
    char *o;
    char *arg;
    char *a;
    char *o2;
    int j;
    i = 0;
    o = p;
    arg = p + 13952;
    do {
        if (*(unsigned char *)(p + 14813) == 0) {
            ((SubCCc *)(o + 64))->mCC(arg);
        }
        i++;
        o += 1536;
    } while (i < 3);
    j = 0;
    a = p;
    o2 = p;
    do {
        if (*(unsigned char *)(p + 14813) == 0) {
            ((SubCCc *)(o2 + 4672))->mCC(a + 14080);
        }
        j++;
        a += 128;
        o2 += 1536;
    } while (j < 5);
    if (*(unsigned char *)(p + 14824) == 1) {
        ((SubCCc *)(p + 12352))->mCC(p + 14720);
    }
}

extern "C" float D_005623C0[6];
extern "C" float D_00562400[6];
extern "C" void func_002C5F40(char *, int);
extern "C" void func_002C6790(char *, int);

extern "C" void func_002C4BA0(Obj130 *o) {
    int k;
    float t5 = D_00562400[5];
    float t4 = D_00562400[4];
    float t3 = D_00562400[3];
    float t2 = D_00562400[2];
    float t1 = D_00562400[1];
    D_005623C0[0] = D_00562400[0];
    D_005623C0[1] = t1;
    D_005623C0[2] = t2;
    D_005623C0[3] = t3;
    D_005623C0[4] = t4;
    D_005623C0[5] = t5;
    k = *(unsigned char *)((char *)o + 4);
    switch (k) {
    case 0:
        o->m130(k);
        break;
    case 1:
        func_002C5F40((char *)o, k);
        break;
    case 2:
        func_002C6790((char *)o, k);
        break;
    case 3:
        break;
    }
}

extern "C" void func_00202860(char *p) {
    ((SubCCc *)(p + 0x40))->mCC(p + 0x4C0);
}


class ObjA4 {
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
    virtual void mA4();
};

class ObjC8 {
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
    virtual void mC8(char *);
};

extern "C" void func_001AD140(char *);

extern "C" void func_002C6790(char *p, int) {
    ((ObjA4 *)(p + 0x130))->mA4();
    func_001AD140(p);
}

extern "C" void func_00290220(char *p) {
    func_00104C00(p + 0x130, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x820);
    ((ObjC8 *)(p + 0x180))->mC8(p + 0x130);
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

extern "C" void func_0035A360(ObjFC *o, signed char k) {
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
