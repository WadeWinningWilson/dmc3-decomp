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

extern "C" void func_003B8620(char *p) {
    char *a = p + 0xC80;
    ((SubCCc *)(p + 0x640))->mCC(a);
    ((SubCCc *)(p + 0x40))->mCC(a);
}

class Obj358 {
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
    virtual void m358(int, int);
};

extern "C" void func_0038EB30(Obj358 *o, unsigned char k, int a, int b) {
    switch (k) {
    case 0:
    case 1:
        break;
    case 4:
    case 2:
    case 3:
        o->m358(a, b);
        break;
    }
}

class Obj2FC {
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
    virtual void m2FC(int);
};

extern "C" void func_004398D0(Obj2FC *o, int k) {
    switch (k) {
    case 0x30:
    case 0x37:
    case 0x3E:
    case 0x45:
    case 0x4C:
        if (*(int *)((char *)o + 0x47C4) > 0) {
            o->m2FC(k + 1);
        } else {
            o->m2FC(k);
        }
        break;
    }
}

extern "C" void func_002EE3F0(char *p) {
    switch (*(unsigned char *)(p + 0x360)) {
    case 1:
        if (*(SubCCc **)(p + 0x364) != 0) {
            (*(SubCCc **)(p + 0x364))->mCC(p + 0x450);
        }
        break;
    case 2:
    case 3:
    case 4:
        (*(SubCCc **)(p + 0x368))->mCC(p + 0x450);
        break;
    }
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

extern "C" int func_00364640(ObjTurn2 *o) {
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

extern "C" int func_004A1FE0(ObjTurn2 *o) {
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


class AnimF {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual float m28(int);
};

extern "C" void func_0024DA80(char *, int, int);
extern "C" void func_003B6490(char *, int);
extern "C" int func_003B3F70(char *);
extern "C" void func_003B4840(char *);
extern "C" int func_0024E800(char *);
extern "C" void func_003B4B60(char *, int);
extern "C" void func_003B4F60(char *);

static inline unsigned char both_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) {
        return 1;
    }
    return 0;
}

/* Two-channel wait state: start both channels, then branch on the clip time or both finishing. */
extern "C" void func_003B2F80(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x26;
        func_0024DA80(p + 0x1D00, 0, 0x26);
        func_0024DA80(p + 0x1DD0, 0, 0x26);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6490(p, 1);
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 25.0f) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            return;
        }
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
    func_003B4F60(p);
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

extern "C" char D_01DFABA0[];
extern "C" void func_00330BD0(char *, int, char *, int, int);

/* Wait for the clip to pass 180, then switch motion and play a sound once; afterwards keep re-triggering. */
extern "C" void func_0046B4B0(char *p) {
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

/* Three-step motion chain on the sub-object at +0xC, ending in a self state change. */
extern "C" void func_0035C490(char *p) {
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

class Obj0D0 {
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
    virtual void mD0();
};

extern "C" char D_00666750[];
extern "C" void func_001AF080(char *, int);

/* Recovers the stance from +0x134 and switches to state 0x20. */
extern "C" void func_0033A170(char *p) {
    func_0033A660(p, 1);
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
    ((ObjB *)p)->m304(0x20);
}

/* Releases the handle at +0x38 back to the pool, then notifies the sub-object at +0x40. */
extern "C" void func_00503F40(char *p) {
    if (*(int *)(p + 0x38) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x38));
        *(int *)(p + 0x38) = 0;
    }
    ((Obj0D0 *)(p + 0x40))->mD0();
}

class ObjRel {
public:
    virtual void m08(int);
    virtual void d1();
    virtual void m10();
};

extern "C" void func_0013D5D0(char *);

/* In states 2 and 3 notify the sub-object at +0x80, then reset the list at +0x694. */
extern "C" void func_00301870(char *p) {
    if (*(unsigned char *)(p + 0x39) == 2 || *(unsigned char *)(p + 0x39) == 3) {
        ((Obj0D0 *)(p + 0x80))->mD0();
    }
    func_0013D5D0(p + 0x694);
}

/* Shuts down and deletes the owned object at +8, then resets the list at +0xC. */
extern "C" void func_0022CAD0(char *p) {
    (*(ObjRel **)(p + 8))->m10();
    (*(ObjRel **)(p + 8))->m08(-1);
    *(int *)(p + 8) = 0;
    func_0013D5D0(p + 0xC);
}

extern "C" void func_003E6750(char *, int, int, int);
extern "C" int func_0034BBE0(int, char *);
extern "C" char D_00572F50[];

/* Enters state 0x11, clears the three phase bytes, restarts motion 3 and grabs effect handle 4. */
extern "C" void func_003ECE20(char *p) {
    ((ObjB *)p)->m2F8(0x11);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 0;
    *(unsigned char *)(p + 0x3436) = 0;
    func_003E6750(p, 3, 0, 0);
    *(int *)(p + 0x3A84) = func_0034BBE0(4, D_00572F50);
}

class ObjRel2 {
public:
    virtual void d0();
    virtual void d1();
    virtual void m10(int);
};

extern "C" void func_00206730(char *);
extern "C" void func_001AD140(char *);
extern "C" void func_0028C740(char *);

/* Drops the effect at +0x4A4, stops the helper at +0x4B4, then resets the motion at +0x150. */
extern "C" void func_0042CF90(char *p) {
    func_00206730(p + 0x4A4);
    if (*(char **)(p + 0x4A4) != 0) {
        *(*(char **)(p + 0x4A4) + 0x3A) = 1;
        func_001AD140(*(char **)(p + 0x4A4));
        *(char **)(p + 0x4A4) = 0;
    }
    if (*(ObjRel2 **)(p + 0x4B4) != 0) {
        (*(ObjRel2 **)(p + 0x4B4))->m10(0);
    }
    func_0028C740(p + 0x150);
}

class ObjRate {
public:
    char pad[0x1C];
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual float m14();
};

/* Recomputes the playback speed from the rate source unless the input step is ~0. */
extern "C" int func_0030AC20(char *p) {
    float a = *(float *)(p + 0x10);
    if ((a < 0.0f ? -a : a) <= 0.0001f) {
        return 0;
    }
    *(float *)(p + 0x34) = *(float *)(p + 0x10) * ((ObjRate *)p)->m14();
    return 1;
}

/* Counts the timer at +0x77E8 down; on motion end or expiry enters state 0x6A. */
extern "C" void func_0037AE20(char *p) {
    *(float *)(p + 0x77E8) = *(float *)(p + 0x77E8) - *(float *)(p + 0x10);
    if (func_0024E800(p + 0x6D70) != 0 || *(float *)(p + 0x77E8) < 0.0f) {
        ((ObjB *)p)->m2F4(0x6A);
        *(float *)(p + 0x6E6C) = 5.0f;
    }
}

extern "C" Sub130 *func_002792A0(char *);
extern "C" void func_003F2E90(char *);
extern "C" void func_003F2F60(char *);
extern "C" void func_003E9930(char *);

/* Per-frame update: step past frame 1, always tick, and finish when the motion ends. */
extern "C" void func_003EF680(char *p) {
    if (!(func_002792A0(p + 0x980)->m7C() <= 1.0f)) {
        func_003F2E90(p);
    }
    func_003F2F60(p);
    if (func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

extern "C" char D_005BE098[4];
extern "C" void func_00195E20(char *, char *);
extern "C" void func_001AD100(char *);
extern "C" void func_0038BDE0(char *);
extern "C" void func_00474DD0(char *);

/* Two-step actor update (enter once, then run), then re-registers in the draw list. */
extern "C" void func_0038B930(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        ((Obj130b *)p)->m130();
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        break;
    case 1:
        func_0038BDE0(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

extern "C" void func_00474CB0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 0x194)) {
    case 0:
        ((Obj130b *)p)->m130();
        *(unsigned char *)(p + 0x194) = 1;
        break;
    case 1:
        func_00474DD0(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

class Obj148 {
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
    virtual void m148();
    virtual void m14C();
};

extern "C" void func_001A1E10(char *);
extern "C" void func_001A1F90(char *);
extern "C" char *func_00279290(char *);
extern "C" int func_0024E800(char *);
extern "C" char D_00565D90[];

/* Ticks the body and, in states 20/21, the attached part at +0x2BC8. */
extern "C" void func_0034A090(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 20:
    case 21:
        if (*(Obj148 **)(p + 0x2BC8) != 0) {
            (*(Obj148 **)(p + 0x2BC8))->m148();
        }
    }
    func_001A1F90(func_00279290(p + 0x16C0));
}

extern "C" void func_0034A110(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 20:
    case 21:
        if (*(Obj148 **)(p + 0x2BC8) != 0) {
            (*(Obj148 **)(p + 0x2BC8))->m14C();
        }
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

/* Waits for the motion at +0x1680 to finish, then enters state 0xD. */
extern "C" void func_003BF140(char *p) {
    *(int *)(p + 0x1668) = 0;
    *(unsigned char *)(p + 0x1BC6) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if ((unsigned char)func_0024E800(p + 0x1680) == 1) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 1:
        ((ObjB *)p)->m304(0xD);
        break;
    }
}

/* Resets both motions, scale and position, recovers the stance and enters state 0xD. */
extern "C" void func_003BFCA0(char *p) {
    func_001A1E10(func_00279290(p + 0x9C0));
    func_001A1E10(func_00279290(p + 0xFC0));
    *(float *)(p + 0x1BB4) = 1.0f;
    *(float *)(p + 0x1BB8) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x50), "r"(D_00565D90) : "memory");
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
    ((ObjB *)p)->m304(0xD);
}

extern "C" void func_0037E850(char *, int);
extern "C" void func_0034BA60(int, char *, int, int, int);
extern "C" float D_005679BC[];
extern "C" float D_005679C0[];

/* Enters the charge phase: state 1, motion 2, sound 0x23, 100-frame timer and reset ranges. */
extern "C" void func_0037AD90(char *p) {
    ((ObjB *)p)->m2FC(1);
    func_0037E850(p, 2);
    func_0034BA60(0x23, p + 0x6F0, 0x29, 0, 1);
    *(float *)(p + 0x77E8) = 100.0f;
    *(float *)(p + 0x7294) = D_005679BC[0];
    *(float *)(p + 0x7298) = D_005679C0[0];
    *(float *)(p + 0x7314) = *(float *)(p + 0x7294);
    *(float *)(p + 0x7318) = *(float *)(p + 0x7298);
}

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

class Sub980 {
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
    virtual float m80(int);
};

class ObjBC {
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
    virtual void mBC(float);
};

extern "C" void func_003F2F90(char *);
extern "C" void * func_002075D0(int, int, char *, int, int);
extern "C" void func_0044E700(char *, int, int);

/* Enters attack state 0x25 with its phase bytes, timer 22.4 and motion 0x16; arms a 180 delay once. */
extern "C" void func_003EF700(char *p) {
    ((ObjB *)p)->m2F8(0x25);
    *(unsigned char *)(p + 0x3434) = 1;
    *(unsigned char *)(p + 0x3435) = 3;
    *(unsigned char *)(p + 0x3436) = 6;
    *(float *)(p + 0x3A14) = 22.4f;
    func_003E6750(p, 0x16, 0, 0);
    func_003F2F90(p);
    if (*(unsigned char *)(p + 0x3A9C) == 0) {
        *(float *)(p + 0x3A94) = 180.0f;
    }
    *(unsigned char *)(p + 0x3A9C) = 1;
}

/* Past frame 40 of the current motion, switch to state 0x39. */
extern "C" void func_003EFAE0(char *p) {
    if (!(((Sub980 *)func_002792A0(p + 0x980))->m80(0) <= 40.0f)) {
        ((ObjB *)p)->m2F8(0x39);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 8;
        *(unsigned char *)(p + 0x3A80) = 0;
        return;
    }
}

/* Spawns the trail effect at +0x4A4 (self-destructs on failure) and restarts the helper. */
extern "C" void func_0042CBF0(char *p) {
    *(void **)(p + 0x4A4) = func_002075D0(3, 0x16C, p + 0x420, 1, 16);
    if (*(void **)(p + 0x4A4) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 0x4A8) = 0;
    *(unsigned char *)(p + 0x4A9) = 0;
    *(int *)(p + 0x4AC) = 0;
    *(float *)(p + 0x4B0) = 50.0f;
    if (*(ObjRel2 **)(p + 0x4B4) != 0) {
        (*(ObjRel2 **)(p + 0x4B4))->m10(0);
    }
}

extern "C" void func_0044EDA0(char *p) {
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        func_0044E700(p, 0, 1);
        func_0044E700(p, 1, 1);
        func_0044E700(p, 2, 1);
    case 1:
        ((ObjBC *)(p + 0x200))->mBC(*(float *)(p + 0x10));
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

class Sub130x {
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
    virtual unsigned char m84();
};

extern "C" void func_00481E00(char *, int);
extern "C" void func_00482240(char *);
extern "C" void func_00418980(char *);
extern "C" void func_0031E570(char *);
extern "C" float D_00565278[];

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

extern "C" void func_004811A0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00481E00(p, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        *(float *)(p + 0x2A4) = *(float *)(p + 0x2A4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2A4) < 0.0f) {
            func_00482240(p);
        }
        ((ObjBC *)(p + 0x740))->mBC(*(float *)(p + 0x10));
    }
}

/* Releases both pool handles and notifies the four sub-objects, then resets the body at +0x19C0. */
extern "C" void func_00504DA0(char *p) {
    if (*(int *)(p + 0x40) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x40));
    }
    ((Obj0D0 *)(p + 0x80))->mD0();
    ((Obj0D0 *)(p + 0x680))->mD0();
    ((Obj0D0 *)(p + 0xC80))->mD0();
    if (*(int *)(p + 0x1398) != 0) {
        func_001AF080(D_00666750, *(int *)(p + 0x1398));
    }
    ((Obj0D0 *)(p + 0x13C0))->mD0();
    func_00418980(p + 0x19C0);
}

extern "C" void func_002D2800(char *p) {
    if (((Sub130x *)(p + 0x130))->m84() == 0) {
        *(float *)(p + 0x168) = *(float *)(p + 0x168) + *(float *)(p + 0x10) * D_00565278[*(unsigned char *)(p + 0x38D0)];
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0031E570(p + 0x1D0);
        break;
    case 1:
        break;
    }
}

class ObjT1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

extern "C" char D_01CAFF0C[];

/* Arms a timed event: stores its four parameters, snapshots the clock and enters state 0xE. */
extern "C" void func_003205F0(char *p, int a, int b, int c, int d) {
    char *g;
    float t;
    *(int *)(p + 4) = a;
    *(int *)(p + 8) = b;
    *(int *)(p + 0xC) = c;
    *(int *)(p + 0x10) = d;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x14) = t;
    *(short *)(p + 0x30) = 0;
    *(int *)(p + 0x34) = 0;
    *(int *)(p + 0x38) = 0;
    *(unsigned char *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 0x1D) = 0;
    ((ObjB4 *)p)->mB4(0xE);
}

class ObjB4C8 {
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
    virtual void mB4(int, int, int, int);
    virtual void d44();
    virtual void d45();
    virtual void d46();
    virtual void d47();
    virtual void mC8(char *);
};

/* Resets both trails (+0x580, +0xB80) to the shared anchor at +0x18D0 and ticks the motion. */
extern "C" void func_0036F540(char *p) {
    *(unsigned char *)(p + 0x18C4) = 0;
    *(unsigned char *)(p + 0x18C5) = 0;
    ((ObjB4C8 *)(p + 0x580))->mB4(0, 0, 0, 0);
    ((ObjB4C8 *)(p + 0x580))->mC8(p + 0x18D0);
    ((ObjB4C8 *)(p + 0xB80))->mB4(0, 0, 0, 0);
    ((ObjB4C8 *)(p + 0xB80))->mC8(p + 0x18D0);
    func_001A1F90(func_00279290(p + 0x1180));
}

extern "C" float D_01DF5D24[];

/* Like the rate update above, but mode 0 first scales the global rate by the track gain at +0x30. */
extern "C" int func_00228470(char *p) {
    float a = *(float *)(p + 0x10);
    if ((a < 0.0f ? -a : a) <= 0.0001f) {
        return 0;
    }
    switch (*(unsigned char *)(p + 0x20)) {
    case 0:
        D_01DF5D24[0] = D_01DF5D24[0] * *(float *)(p + 0x30);
        break;
    case 1:
        break;
    }
    *(float *)(p + 0x28) = *(float *)(p + 0x10) * ((ObjRate *)p)->m14();
    return 1;
}

class ObjSel {
public:
    virtual void d0();
    virtual void mC();
    virtual void d2();
    virtual void m14(char *);
};

extern "C" char D_01CAFF30[];
extern "C" char D_01CAFF3C[];
extern "C" char D_0054A0E0[];
extern "C" void func_0036F7D0(char *, char *);
extern "C" void func_0036FCF0(char *);

/* Opens the menu: copies the current selection, resets the list and loads the entry text. */
extern "C" int func_0022D540(char *p) {
    switch (*(unsigned char *)(p + 0xD)) {
    case 0:
    func_0036F7D0(p + 0x30, D_01CAFF30);
    func_0036FCF0(p + 0x30);
    ((ObjSel *)(p + 0xC44))->mC();
    ((ObjSel *)(p + 0xC44))->m14(*(unsigned char *)D_01CAFF3C * 0x84 + (D_0054A0E0 + *(int *)D_01CAFF30 * 0x298) + 4);
    return 1;
    }
    return 0;
}

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


extern "C" char *func_002D9F00(char *, int);
extern "C" void func_0022C520(char *, char *, char *, char *);
extern "C" void func_00105300(char *, char *);

/* Re-anchors the two held weapons (+0xB00, +0x1100) to their bones on the owner at +0xE0. */
extern "C" void func_003C9A70(char *p) {
    if (*(unsigned char *)(p + 0xD4) != 0) {
        func_00104C00(p + 0x1780, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x1700);
        ((ObjB4C8 *)(p + 0xB00))->mC8(p + 0x1780);
    }
    if (*(unsigned char *)(p + 0xD5) != 0) {
        func_0022C520(p + 0x200, p + 0x1100, *(char **)(*(char **)(p + 0x1D0) + 0x104), p + 0x980);
        func_00104C00(p + 0x17C0, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD5)), p + 0x1740);
        ((ObjB4C8 *)(p + 0x1100))->mC8(p + 0x17C0);
        func_00105300(p + 0x980, *(char **)(*(char **)(p + 0x1D0) + 0x104));
    }
}

class ObjA8 {
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
    virtual void mA8(int);
};

extern "C" void func_001A1E10(char *);

extern "C" void func_0041C3D0(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 1:
    case 2:
    case 3:
        ((ObjA8 *)(p + 0x4C0))->mA8(0x11);
        ((ObjA8 *)(p + 0x4C0))->mA8(0x12);
    }
    switch (*(signed char *)(p + 0x3B0)) {
    case 1:
        func_001A1E10(func_00279290(p + 0xAC0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

extern "C" int func_00482180(char *);
extern "C" void func_004822B0(char *);
extern "C" void func_00481310(char *);

extern "C" void func_00481240(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_00481E00(p, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    case 1:
        *(float *)(p + 0x2A4) = *(float *)(p + 0x2A4) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2A4) < 0.0f) {
            if ((unsigned char)func_00482180(p) == 1) {
                func_004822B0(p);
                return;
            }
            *(float *)(p + 0x2A4) = 50.0f;
        }
        func_00481310(p);
        ((ObjBC *)(p + 0x740))->mBC(*(float *)(p + 0x10));
    }
}

class ObjRate2 {
public:
    char pad[0x1C];
    virtual void d0();
    virtual void d1();
    virtual void m10();
};

extern "C" float func_001F9C40(char *, int);
extern "C" char D_01DF5D20[];
extern "C" short func_0027BC40(char *, int);
extern "C" int func_0027BCB0(char *, int);
extern "C" void func_00288140(char *);
extern "C" char *func_00210240(char *);
extern "C" int func_0024E780(char *, int, int);

/* Track timer: when it runs out, or neither direction has a next key, finish; otherwise advance. */
extern "C" void func_00288010(char *p) {
    *(float *)(p + 0x20) = *(float *)(p + 0x20) - *(float *)(p + 0x10) * func_001F9C40(D_01DF5D20, 0x87);
    if (*(float *)(p + 0x20) < 0.0f) {
        ((ObjRate2 *)p)->m10();
        return;
    }
    if (func_0027BC40(func_00210240(p) + 0x260C, *(unsigned char *)(p + 0x40)) < 0) {
        if (func_0027BCB0(func_00210240(p) + 0x260C, *(unsigned char *)(p + 0x40)) < 0) {
            ((ObjRate2 *)p)->m10();
        } else {
            func_00288140(p);
        }
    }
}


extern "C" void func_004C68F0(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x27);
        }
        break;
    case 1:
        if ((unsigned char)func_0024E780(*(char **)(p + 0xAB00), 1, 0) == 1) {
            ((ObjB *)p)->m2F8(0x3D);
        }
        break;
    }
}

class Obj1D4 {
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
    virtual void m1D4(int, char *);
};

extern "C" void func_001A1F90(char *);
extern "C" void func_00228300(char *);
extern "C" void func_0030B340(char *);
extern "C" void func_0030B3D0(char *);
extern "C" void func_003023F0(int);
extern "C" void func_0033A580(char *);

/* Ticks the body and, in state 26, the six extra parts, then emits sound 0x2A at the body. */
extern "C" void func_002AC120(char *p) {
    func_001A1F90(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 26:
        func_001A1F90(func_00279290(p + 0x35C0));
        func_001A1F90(func_00279290(p + 0x3BC0));
        func_001A1F90(func_00279290(p + 0x41C0));
        func_001A1F90(func_00279290(p + 0x47C0));
        func_001A1F90(func_00279290(p + 0x4DC0));
        func_001A1F90(func_00279290(p + 0x53C0));
    }
    func_001A1F90(func_00279290(p + 0x16C0));
    ((Obj1D4 *)p)->m1D4(0x2A, p + 0x50);
}

extern "C" void func_002AC1F0(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 26:
        func_001A1E10(func_00279290(p + 0x35C0));
        func_001A1E10(func_00279290(p + 0x3BC0));
        func_001A1E10(func_00279290(p + 0x41C0));
        func_001A1E10(func_00279290(p + 0x47C0));
        func_001A1E10(func_00279290(p + 0x4DC0));
        func_001A1E10(func_00279290(p + 0x53C0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
    ((Obj1D4 *)p)->m1D4(0x29, p + 0x50);
}

extern "C" void func_002B4610(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 0:
    case 1:
    case 2:
    case 3:
        ((ObjA8 *)(p + 0x4C0))->mA8(0x11);
        ((ObjA8 *)(p + 0x4C0))->mA8(0x12);
    }
    switch (*(signed char *)(p + 0x3B0)) {
    case 0:
    case 1:
        func_001A1E10(func_00279290(p + 0xAC0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

extern "C" void func_002BC190(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 4:
    case 5:
    case 6:
    case 7:
        ((ObjA8 *)(p + 0x4C0))->mA8(0x12);
        ((ObjA8 *)(p + 0x4C0))->mA8(0x13);
    }
    switch (*(signed char *)(p + 0x3B0)) {
    case 4:
    case 5:
        func_001A1E10(func_00279290(p + 0xAC0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

extern "C" void func_0030B0D0(char *p) {
    func_00228300(p + 0xD0);
    if (*(int *)(p + 0xD0) == 0) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)func_0024E780(*(char **)(p + 0x173C), 0, 0) != 1) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        ((Obj130b *)p)->m130();
        break;
    case 1:
        func_0030B340(p);
        break;
    case 2:
        func_0030B3D0(p);
        break;
    }
}

extern "C" void func_003388D0(char *p) {
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(int *)(p + 0x12B0) != 0) {
        func_003023F0(*(int *)(p + 0x12B0));
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_0033A660(p, 1);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(short *)(p + 0x90) = *(short *)(p + 0x90) + 0x71C;
    case 1:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjB *)p)->m304(0x20);
        }
    }
    func_0033A580(p);
}

extern "C" void func_00335EF0(char *, int);

extern "C" void func_00338C30(char *p) {
    if ((unsigned char)func_0024E780(p + 0xDF0, 1, 0) == 1 && *(int *)(p + 0x12B0) != 0) {
        func_003023F0(*(int *)(p + 0x12B0));
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_0033A660(p, 1);
        func_00335EF0(p, 0x40);
    case 1:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjB *)p)->m304(0x20);
        }
    }
    func_0033A580(p);
}

/* Buckets the current motion frame into six phases at +0x134C. */
extern "C" void func_00334AA0(char *p) {
    float f = ((Sub130 *)(p + 0x130))->m7C();
    if (f <= 300.0f) {
        *(unsigned char *)(p + 0x134C) = 0;
    } else if (f <= 500.0f) {
        *(unsigned char *)(p + 0x134C) = 1;
    } else if (f <= 700.0f) {
        *(unsigned char *)(p + 0x134C) = 2;
    } else if (f <= 800.0f) {
        *(unsigned char *)(p + 0x134C) = 3;
    } else if (f <= 900.0f) {
        *(unsigned char *)(p + 0x134C) = 4;
    } else {
        *(unsigned char *)(p + 0x134C) = 5;
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

extern "C" void func_00330BD0(char *, int, char *, int, int);

extern "C" void func_0035F500(char *p) {
    *(unsigned char *)(p + 0xCD) = 0;
    *(unsigned char *)(p + 0xCE) = 3;
    *(unsigned char *)(p + 0xCF) = 7;
    (*(Anim6 **)(p + 0xA8))->m40();
    (*(Anim6 **)(p + 0xA8))->m1C(0xC);
    (*(Anim6 **)(p + 0xA8))->m48(0xE, *(char **)(p + 0x10) + 0x10);
    switch (**(signed char **)(p + 4)) {
    default:
        func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 0, 0);
        break;
    case 0x19:
        func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 7, 0);
        break;
    }
    *(int *)(p + 0xD4) = 0;
}

extern "C" void func_004A2CF0(char *p) {
    *(unsigned char *)(p + 0xCD) = 1;
    *(unsigned char *)(p + 0xCE) = 3;
    *(unsigned char *)(p + 0xCF) = 0;
    (*(Anim6 **)(p + 0xA8))->m48(0x385, *(char **)(p + 0x10) + 0x10);
    (*(Anim6 **)(p + 0xA8))->m48(0x3E7, *(char **)(p + 0x10) + 0x10);
    func_00330BD0(D_01DFABA0, 0x1C, *(char **)(p + 0x10) + 0x10, 6, 0);
    *(int *)(p + 0xE0) = 0;
    *(int *)(p + 0xE4) = 0;
    *(int *)(p + 0xE8) = 0;
    *(int *)(p + 0xEC) = 0;
    *(int *)(p + 0xF0) = 0;
    *(float *)(p + 0xF4) = -0.7f;
    *(int *)(p + 0xF8) = 0;
    *(int *)(p + 0xFC) = 0;
    ((ObjE4 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
    *(int *)(p + 0xD4) = 0;
}

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
extern "C" void func_0013D900(char *, int);
extern "C" void func_0013DC30(char *, int, int);
extern "C" void func_0013E040(char *, int, int);

/* Mode switch: aborts to state 2 when flagged, otherwise on confirm arms the stage and fades. */
extern "C" void func_0022F620(char *p) {
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

extern "C" void func_002C3070(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 8:
    case 9:
    case 10:
    case 11:
        ((ObjA8 *)(p + 0x4C0))->mA8(0x14);
        ((ObjA8 *)(p + 0x4C0))->mA8(0x15);
    }
    switch (*(signed char *)(p + 0x3B0)) {
    case 8:
    case 9:
        func_001A1E10(func_00279290(p + 0xAC0));
        func_001A1E10(func_00279290(p + 0x10C0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

extern "C" void func_003449C0(char *p) {
    func_001A1E10(func_00279290(p + 0x4C0));
    switch (*(signed char *)(p + 0x3B0)) {
    case 12:
    case 13:
    case 14:
    case 15:
        ((ObjA8 *)(p + 0x4C0))->mA8(0x10);
        ((ObjA8 *)(p + 0x4C0))->mA8(0x11);
    }
    switch (*(signed char *)(p + 0x3B0)) {
    case 12:
    case 13:
        func_001A1E10(func_00279290(p + 0xAC0));
        func_001A1E10(func_00279290(p + 0x10C0));
    }
    func_001A1E10(func_00279290(p + 0x16C0));
}

extern "C" void func_00438170(char *, char *, char *, char *);

/* Arms a timed event, snapshots the clock, picks the matching motion frame and enters state 0x17. */
extern "C" void func_00433570(char *p, int a, int b, int c, int d) {
    char *g;
    char *m;
    char *n;
    float t;
    *(int *)(p + 0x134) = a;
    *(int *)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x144) = t;
    *(int *)(p + 0x484C) = ((Sub130 *)(p + 0x130))->m80(*(float *)(p + 0x144));
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    m = p;
    if (m != 0) {
        m += 0x40;
    }
    n = p;
    if (n != 0) {
        n += 0xD0;
    }
    func_00438170(p, p + 0x480, n, m);
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    ((ObjB *)p)->m2F4(0x17);
}

/* Enters state 0x3B, sets its phase bytes, restarts motion 0x1B and sparks the six weapon joints. */
extern "C" void func_003F0320(char *p) {
    ((ObjB *)p)->m2F8(0x3B);
    *(unsigned char *)(p + 0x3434) = 0;
    *(unsigned char *)(p + 0x3435) = 3;
    *(unsigned char *)(p + 0x3436) = 4;
    func_003E6750(p, 0x1B, 0, 0);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x834) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x840) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x84C) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8E4) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8F0) + 0x104), 16);
    func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8FC) + 0x104), 16);
}

extern "C" void func_004CC3A0(char *, char *, char *, char *);

extern "C" void func_004C39E0(char *p, int a, int b, int c, int d) {
    char *g;
    char *m;
    char *n;
    float t;
    *(int *)(p + 0x134) = a;
    *(int *)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x144) = t;
    *(int *)(p + 0xB2C0) = ((Sub130 *)(p + 0x130))->m80(*(float *)(p + 0x144));
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    m = p;
    if (m != 0) {
        m += 0x40;
    }
    n = p;
    if (n != 0) {
        n += 0xD0;
    }
    func_004CC3A0(p, p + 0xE30, n, m);
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    ((ObjB *)p)->m2F8(0x16);
}

class Obj64 {
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
    virtual void m64();
};

static inline char *cur_key(char *p, int f, int n, int k) {
    if (*(unsigned char *)(p + f) != 0 && 0 < *(int *)(p + n)) {
        return **(char ***)(p + k);
    }
    return 0;
}

extern "C" void func_0027A120(char *p) {
    if (*(unsigned char *)(p + 0xB) != 0) {
        ((Obj64 *)(p + 0x400))->m64();
        *(float *)(p + 0x5A0) = *(float *)(cur_key(p, 0x4AC, 0x410, 0x414) + 0x10C);
        *(float *)(p + 0x5A4) = *(float *)(cur_key(p, 0x4AC, 0x410, 0x414) + 0x120);
        *(float *)(p + 0x5A8) = *(float *)(cur_key(p, 0x4AC, 0x410, 0x414) + 0x134);
        *(float *)(p + 0x5AC) = 1.0f;
        __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(p + 0x5B0) : "memory");
    }
}

extern "C" void func_0027B450(char *p) {
    if (*(unsigned char *)(p + 0xB) != 0) {
        ((Obj64 *)(p + 0x270))->m64();
        *(float *)(p + 0x410) = *(float *)(cur_key(p, 0x31C, 0x280, 0x284) + 0x10C);
        *(float *)(p + 0x414) = *(float *)(cur_key(p, 0x31C, 0x280, 0x284) + 0x120);
        *(float *)(p + 0x418) = *(float *)(cur_key(p, 0x31C, 0x280, 0x284) + 0x134);
        *(float *)(p + 0x41C) = 1.0f;
        __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(p + 0x420) : "memory");
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

/* Resets the attack and its target transform, recomputes facing, then stores a tenth of it. */
extern "C" void func_00363070(char *p) {
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

extern "C" void func_0046B130(char *p) {
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

extern "C" void func_004A7930(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if ((*(Anim8 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim8 **)(p + 0xA8))->m40();
            (*(Anim8 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim8 **)(p + 0xA8))->m24();
        break;
    case 1:
        (*(Anim8 **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}

extern "C" void func_003C0280(char *, int);
extern "C" void func_003C0110(char *, int, float);
extern "C" void func_003C0190(char *, char *, float);

extern "C" void func_003BF5F0(char *p) {
    *(float *)(p + 0x1668) = 1.0f;
    *(unsigned char *)(p + 0x1BC6) = 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1B98) = 15.0f;
    case 1:
        *(float *)(p + 0x1B98) = *(float *)(p + 0x1B98) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1B98) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        func_003C0280(p, 0x800);
        func_003C0110(p, 0x200, 5.0f);
        ((Sub130 *)(p + 0x130))->m6C();
        func_003C0190(p, p + 0x150, 200.0f);
        break;
    case 2:
        ((ObjB *)p)->m304(0xD);
        break;
    }
}

extern "C" void func_00452980(char *);
extern "C" void func_0028C5C0(char *, int, float);

extern "C" void func_00452720(char *p) {
    char *q;
    unsigned char *f;
    func_001AD100(p);
    if (*(unsigned char *)(p + 0x11E0) != 0) {
        func_00206730(p + 0x1630);
        switch (*(unsigned char *)(p + 4)) {
        case 0:
            ((Obj130b *)p)->m130();
            break;
        case 1:
            func_00452980(p);
            break;
        }
        if (*(unsigned char *)(p + 0x11E7) == 0) {
            func_0028C5C0(p + 0x1260, 0, *(float *)(p + 0x10));
            q = *(char **)(p + 0x1630);
            if (q != 0) {
                f = (unsigned char *)(q + 0x3B);
                if (*f == 1) {
                    *f = 0;
                }
            }
        } else {
            q = *(char **)(p + 0x1630);
            if (q != 0) {
                f = (unsigned char *)(q + 0x3B);
                if (*f == 0) {
                    *f = 1;
                }
            }
        }
        if (*(unsigned char *)(p + 4) == 1) {
            func_00195E20(D_005BE098, p);
        }
    }
}

extern "C" char D_00568010[];
extern "C" void func_0037E690(char *);

/* Advances the active rotor timers, and when the phase timer expires picks the next phase duration. */
extern "C" void func_00379F80(char *p) {
    int i;
    char *q;
    int k;
    for (i = 0, q = p; i < *(int *)(p + 0x6E80); i++, q += 2) {
        if (*(short *)(q + 0x6668) != 0) {
            *(short *)(q + 0x6668) = *(short *)(q + 0x6668) + 0x200;
        }
    }
    *(float *)(p + 0x77E8) = *(float *)(p + 0x77E8) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x77E8) < 0.0f) {
        ((ObjB *)p)->m2FC(0xB);
        k = ((Sub130 *)(p + 0x130))->m80(((Sub130 *)(p + 0x130))->m7C());
        *(float *)(p + 0x77E8) = *(float *)(k * 12 + (D_00568010 + *(int *)(p + 0x77CC) * 84));
        func_0037E690(p);
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

/* True when the current hit kind (via mFC) is 4 or 5 in modes 0 and 2; never while state 3. */
extern "C" int func_0035A250(char *p, int k) {
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

/* On a fresh hit, set the knockback phase, push the body along its velocity and maybe enter 0x58. */
extern "C" void func_003F29B0(char *p) {
    if ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0) != 0) {
        *(unsigned char *)(p + 0x3437) = 2;
        *(unsigned char *)(p + 0x3438) = 2;
        *(unsigned char *)(p + 0x3A80) = 1;
        *(unsigned char *)(p + 0x3A81) = 0;
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x3A10) * *(float *)(p + 0x10);
        *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x3A14) * *(float *)(p + 0x10);
        *(float *)(p + 0x718) = *(float *)(p + 0x718) + *(float *)(p + 0x3A18) * *(float *)(p + 0x10);
        *(float *)(p + 0x3A14) = *(float *)(p + 0x3A14) + -2.0f * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x3AA4) <= 0.0f)) {
            func_003E6750(p, 0x32, 0, 0);
            ((ObjB *)p)->m2F8(0x58);
            func_00207480(0, 0xF, (int)(p + 0x6E0), 16);
        }
    }
}

/* Charges a meter by the frame rate (mode 0, cap 5) or by 1 (mode 1, cap 200), firing sounds on overflow. */
extern "C" void func_0036D4D0(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0)) <= 5.0f)) {
            (*(Anim8 **)(p + 0xA8))->m48(0x3E2, *(char **)(p + 0x10) + 0x10);
            (*(Anim8 **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        }
        break;
    case 1:
        if (!((*(float *)(p + 0x100) = *(float *)(p + 0x100) + 1.0f) <= 200.0f)) {
            (*(Anim8 **)(p + 0xA8))->m48(0x3E2, *(char **)(p + 0x10) + 0x10);
            (*(Anim8 **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        }
        break;
    }
}


extern "C" void func_0046D5E0(char *p) {
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

class ObjAC {
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
    virtual void mA8();
    virtual void mAC();
};

class ObjCCv {
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
    virtual void mCC(char *);
};

extern "C" float D_01DF5D30[];

/* Accumulates the meter and edge-triggers the on/off handlers (not in state 3). */
extern "C" void func_00321E30(char *p) {
    *(float *)(p + 0x84) = *(float *)(p + 0x84) + *(float *)(p + 0x80) * D_01DF5D30[0];
    if (*(float *)(p + 0x84) < 0.0f) {
        *(float *)(p + 0x84) = 0.0f;
    }
    *(unsigned char *)(p + 0x8D) = *(unsigned char *)(p + 0x8E);
    if (!(*(float *)(p + 0x84) <= *(float *)(p + 0x88)) || *(unsigned char *)(p + 0x8C) != 0) {
        switch (*(unsigned char *)D_01CAFF3C) {
        case 4:
            *(unsigned char *)(p + 0x8D) = 1;
        }
    }
    if (*(unsigned char *)(p + 0x8D) != 0) {
        if (*(unsigned char *)(p + 0x8F) == 0 && *(unsigned char *)(p + 0x1D) != 3) {
            ((ObjAC *)p)->mA8();
        }
    } else {
        if (*(unsigned char *)(p + 0x8F) != 0 && *(unsigned char *)(p + 0x1D) != 3) {
            ((ObjAC *)p)->mAC();
        }
    }
    *(unsigned char *)(p + 0x8F) = *(unsigned char *)(p + 0x8D);
}

extern "C" void func_004539C0(char *p) {
    switch (*(unsigned char *)(p + 0x11E2)) {
    case 0:
        if (*(unsigned char *)(p + 0x11E5) != 0) {
            ((ObjCCv *)(p + 0x520))->mCC(p + 0x1220);
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x11E5) != 0) {
            ((ObjCCv *)(p + 0x520))->mCC(p + 0x1220);
        }
        if (*(unsigned char *)(p + 0x11E6) != 0) {
            ((ObjCCv *)(p + 0x960))->mCC(p + 0x1220);
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x11E6) != 0) {
            ((ObjCCv *)(p + 0x960))->mCC(p + 0x1220);
        }
        break;
    }
    if (*(unsigned char *)(p + 0x11E5) != 0 || *(unsigned char *)(p + 0x11E6) != 0) {
        ((ObjCCv *)(p + 0xE0))->mCC(p + 0x1220);
        ((ObjCCv *)(p + 0xDA0))->mCC(p + 0x1220);
    }
}

class Obj98 {
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
    virtual void m98(int);
};

extern "C" void func_00381A60(char *, char *, char *, char *);
extern "C" int D_0056842C[];

extern "C" void func_00381920(char *p, int a, int b, int c, int d) {
    char *g;
    char *m;
    char *n;
    float t;
    *(int *)(p + 0x134) = a;
    *(int *)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x144) = t;
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    *(int *)(p + 0x1388) = 0;
    m = p;
    if (m != 0) {
        m += 0x40;
    }
    n = p;
    if (n != 0) {
        n += 0xD0;
    }
    func_00381A60(p, p + 0x2E0, n, m);
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    switch (*(unsigned short *)(p + 0x302)) {
    case 1:
        ((ObjB *)p)->m2F0(0xE);
        break;
    default:
        ((ObjB *)p)->m2F0(0xE);
        break;
    }
    ((Obj98 *)(p + 0x130))->m98(D_0056842C[0]);
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

/* Three-phase stance: wait for the hit frame, then the end frame, ticking the target transform. */
extern "C" void func_00365660(char *p) {
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

extern "C" void func_003A0CD0(char *, int);
extern "C" void func_003A02B0(char *, int);

static inline unsigned char pair_done2(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_00393F20(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x1A;
        func_0024DA80(p + 0x29D0, 0, 0x1A);
        func_0024DA80(p + 0x2AA0, 0, 0x1A);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        break;
    case 1:
        if (!(((AnimF *)(p + 0x4C4))->m28(0) < 5.0f)) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        func_003A0CD0(p, 0x888);
        if (pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
        break;
    }
}

class ObjB4BC {
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
    virtual void mB4(int, int, int, int);
    virtual void d44();
    virtual void mBC(float);
};

class Obj1Cf {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void m1C(float);
};

extern "C" int func_0039DED0(char *);
extern "C" void func_00131700(char *, char *, char *);
extern "C" void func_00105230(char *, char *, char *);
extern "C" void func_001318E0(char *, char *, char *);
extern "C" int func_003A0230(char *);
extern "C" char D_0056B0A0[];
extern "C" char D_0056B0A4[];
extern "C" void func_001A1E70(char *, int);
extern "C" void func_0044E5C0(char *, int);
extern "C" int func_001AEA60(char *, int, int);
extern "C" int func_0031B860(int, char *, int, float);
extern "C" float D_0057895C[];
extern "C" int D_00578690[];
extern "C" void func_002F2E30(char *, char *);
extern "C" void func_0034B270(int, char *, int);
extern "C" void func_004CBD90(char *);
extern "C" void func_004D1AF0(char *, char *, int);
extern "C" char D_0058AAA0[];
extern "C" void func_004CBBE0(char *, float);
extern "C" float D_005BDDC4;

extern "C" void func_00397E60(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x35;
        func_0024DA80(p + 0x29D0, 0, 0x35);
        func_0024DA80(p + 0x2AA0, 0, 0x35);
        ((ObjB4BC *)(p + 0xD80))->mB4(0, 0, 0, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        ((ObjB4BC *)(p + 0xD80))->mBC(*(float *)(p + 0x10));
        if (pair_done2(p) == 1 && (unsigned char)func_0039DED0(p) == 1) {
            func_003A0230(p);
        }
    }
}

extern "C" void func_00397F90(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x35;
        func_0024DA80(p + 0x29D0, 0, 0x35);
        func_0024DA80(p + 0x2AA0, 0, 0x35);
        ((ObjB4BC *)(p + 0xD80))->mB4(3, 0, 0, 0);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        ((ObjB4BC *)(p + 0xD80))->mBC(*(float *)(p + 0x10));
        if (pair_done2(p) == 1 && (unsigned char)func_0039DED0(p) == 1) {
            func_003A0230(p);
        }
    }
}


extern "C" void func_0044FB70(char *p) {
    char *g;
    float t;
    int i;
    int *q;
    func_0044E5C0(p, 0);
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x82C) = t;
    *(unsigned char *)(p + 0x802) = 4;
    for (i = 0, q = D_00578690; i < 4; i++, q++) {
        if (*(float *)(p + 0x82C) < (float)*q) {
            *(unsigned char *)(p + 0x802) = i;
            break;
        }
    }
    *(unsigned char *)(p + 0x803) = 0;
    *(int *)(p + 0x83C) = func_0031B860(func_001AEA60(D_00666750, 6, 3), p + 0x830, 3, D_0057895C[0]);
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2E30(g, p);
    }
    func_0034B270(8, p, 0);
}

extern "C" void func_004C5460(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
        ((ObjB *)p)->m300(0);
        *(float *)(p + 0xB178) = D_005BDDC4;
        break;
    case 1:
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            break;
        }
        func_004D1AF0(p, D_0058AAA0, 0);
        if (((Sub130 *)(p + 0x130))->m88() != 0) {
            func_004CBBE0(p, 3.0f);
        }
        *(float *)(p + 0xB178) = *(float *)(p + 0xB178) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xB178) < 0.0f) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
}

extern "C" void func_003F01B0(char *p) {
    *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x3A14) * *(float *)(p + 0x10);
    *(float *)(p + 0x3A14) = *(float *)(p + 0x3A14) + -0.896f * *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x3AA4) <= 0.0f)) {
        ((ObjB *)p)->m2F8(0x2C);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 2;
        func_003E6750(p, 0x20, 0, 0);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x834) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x840) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x84C) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8E4) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8F0) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8FC) + 0x104), 0x10);
    }
}
class CamV {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(char *, char *);
    virtual float m18();
    virtual float m1C();
    virtual void d6();
    virtual void d7();
    virtual float m28();
};

extern "C" void func_002A6C10(char *, char *, char *);

static inline unsigned char gsa(char *g) {
    if (*(unsigned char *)(g + 0x1A) == 1) {
        return 1;
    } else {
        return 0;
    }
}

static inline unsigned char gsb(char *g) {
    if (*(int **)(g + 8) != 0 && **(int **)(g + 8) != 0) {
        return 1;
    }
    if (*(int *)(g + 0x1C) - *(int *)(g + 0x20) != 0) {
        return 1;
    }
    if (*(unsigned char *)(g + 0x1A) == 1) {
        return 1;
    }
    return 0;
}

static inline unsigned char gsc(char *g) {
    if (g != 0) {
        return gsb(g);
    }
    return 0;
}

extern "C" void func_002A6CA0(char *p, int a1) {
    *(unsigned char *)(p + 0x90) = 0;
    *(int *)(p + 0xA0) = a1;
    *(unsigned char *)(p + 0xA4) = 0;
    *(float *)(p + 0xA8) = 10000000.0f;
    *(float *)(p + 0xAC) = 10000000.0f;
    ((CamV *)p)->m14(p + 0x80, p + 0x70);
    *(float *)(p + 0x20) = ((CamV *)p)->m18();
    *(float *)(p + 0x24) = ((CamV *)p)->m1C();
    func_002A6C10(p, p + 0x70, p + 0x80);
    if (gsc(*(char **)(*(char **)D_01CAFF0C + 0x20))) {
        *(float *)(p + 0x9C) = ((CamV *)p)->m28();
    } else {
        *(float *)(p + 0x9C) = 1.0f;
    }
}
class AnimG {
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
class Sub130c {
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
    virtual void m98(int);
};
extern "C" void func_00330BD0(char *, int, char *, int, int);
extern "C" char D_01DFABA0[];
extern "C" void func_0037EAD0(char *, char *, char *, char *);
extern "C" int func_0039DDF0(char *, float);
extern "C" void func_003A06D0(char *);
extern "C" void func_0039D330(char *, int);

extern "C" void func_0036AAC0(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(AnimG **)(p + 0xA8))->m28() < 180.0f)) {
            (*(AnimG **)(p + 0xA8))->m40();
            (*(AnimG **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            switch (**(signed char **)(p + 4)) {
            default:
                func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 0, 0);
                break;
            case 0x19:
                func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 7, 0);
                break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        (*(AnimG **)(p + 0xA8))->m24();
        break;
    case 1:
        (*(AnimG **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}

extern "C" void func_0036AC70(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(AnimG **)(p + 0xA8))->m28() < 170.0f)) {
            (*(AnimG **)(p + 0xA8))->m40();
            (*(AnimG **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            switch (**(signed char **)(p + 4)) {
            default:
                func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 0, 0);
                break;
            case 0x19:
                func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 7, 0);
                break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        (*(AnimG **)(p + 0xA8))->m24();
        break;
    case 1:
        (*(AnimG **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}

extern "C" void func_0037E8B0(char *p, int a1, int a2, int a3, int a4) {
    char *g;
    char *b1;
    char *b2;
    float t;
    *(int *)(p + 0x134) = a1;
    *(int *)(p + 0x138) = a2;
    *(int *)(p + 0x13C) = a3;
    *(int *)(p + 0x140) = a4;
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x144) = t;
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0x168) = 0;
    *(int *)(p + 0x7818) = 0;
    g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (g != 0) {
        g += 0x40;
    }
    *(char **)(p + 0x148) = g;
    b1 = p;
    if (b1 != 0) {
        b1 += 0x40;
    }
    b2 = p;
    if (b2 != 0) {
        b2 += 0xD0;
    }
    func_0037EAD0(p, p + 0x710, b2, b1);
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    switch (*(unsigned short *)(p + 0x732)) {
    case 1:
        ((ObjB *)p)->m2F4(0x64);
        break;
    default:
        ((ObjB *)p)->m2F4(0x64);
        break;
    }
    ((Sub130c *)(p + 0x130))->m98(D_0056842C[0]);
}

extern "C" void func_003980C0(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x37;
        func_0024DA80(p + 0x29D0, 0, 0x37);
        func_0024DA80(p + 0x2AA0, 0, 0x37);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        if ((unsigned char)func_0039DDF0(p, 110.0f) != 1 && pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
    func_003A06D0(p);
    if (((AnimF *)(p + 0x4C4))->m28(0) < 30.0f) {
        func_003A0CD0(p, 0x300);
    }
}

extern "C" void func_00398200(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x38;
        func_0024DA80(p + 0x29D0, 0, 0x38);
        func_0024DA80(p + 0x2AA0, 0, 0x38);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        if ((unsigned char)func_0039DDF0(p, 110.0f) != 1 && pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
    func_003A06D0(p);
    if (((AnimF *)(p + 0x4C4))->m28(0) < 30.0f) {
        func_003A0CD0(p, 0x300);
    }
}

extern "C" void func_00398340(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x39;
        func_0024DA80(p + 0x29D0, 0, 0x39);
        func_0024DA80(p + 0x2AA0, 0, 0x39);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        if ((unsigned char)func_0039DDF0(p, 95.0f) != 1 && pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
    func_003A06D0(p);
    if (((AnimF *)(p + 0x4C4))->m28(0) < 30.0f) {
        func_003A0CD0(p, 0x300);
    }
}

extern "C" void func_00398480(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x3A;
        func_0024DA80(p + 0x29D0, 0, 0x3A);
        func_0024DA80(p + 0x2AA0, 0, 0x3A);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 1;
    case 1:
        if ((unsigned char)func_0039DDF0(p, 95.0f) != 1 && pair_done2(p) == 1) {
            func_003A02B0(p, 2);
        }
    }
    func_003A06D0(p);
    if (((AnimF *)(p + 0x4C4))->m28(0) < 30.0f) {
        func_003A0CD0(p, 0x300);
    }
}

extern "C" void func_00399000(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x3B;
        func_0024DA80(p + 0x29D0, 0, 0x3B);
        func_0024DA80(p + 0x2AA0, 0, 0x3B);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 0;
    case 1:
        if (!(((AnimF *)(p + 0x4C4))->m28(0) < 146.0f)) {
            func_0039D330(p, 0);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if (pair_done2(p) == 1) {
            *(unsigned char *)(p + 0x2DE0) = 1;
            func_003A02B0(p, 2);
        }
        break;
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
class ObjV134 {
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
    virtual int m134(int);
};
extern "C" void func_00376E40(char *);
extern "C" void func_00376B80(char *, int);
extern "C" void func_00376B40(char *, int);
extern "C" char *func_004B9710(char *, int, char *, int, int, int);

extern "C" void func_00399140(char *p) {
    *(unsigned short *)(p + 0x2DD8) = *(unsigned short *)(p + 0x2DD8) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x3C;
        func_0024DA80(p + 0x29D0, 0, 0x3C);
        func_0024DA80(p + 0x2AA0, 0, 0x3C);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2DE0) = 0;
    case 1:
        if (!(((AnimF *)(p + 0x4C4))->m28(0) < 143.0f)) {
            func_0039D330(p, 1);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if (pair_done2(p) == 1) {
            *(unsigned char *)(p + 0x2DE0) = 1;
            func_003A02B0(p, 2);
        }
        break;
    }
}

extern "C" void func_0046E210(char *p) {
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

extern "C" void func_004AE1D0(char *p) {
    char *e;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 2;
    func_00376E40(p);
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x400000;
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x4000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x4A, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        e = func_00207480(3, 0x322, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xA70) + 0x104);
            e[0x9A] = 0;
            e[0x3A] = 1;
        }
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            e = func_004B9710(p + 0x9B0, *(int *)(p + 0x9F0), p, ((ObjV134 *)p)->m134(5), 1, 0);
            if (e != 0) {
                ((ObjV134 *)e)->m130();
            }
            func_00376B40(p, 3);
        }
    }
}
extern "C" void func_003B6060(char *);
extern "C" void func_003B6310(char *);
extern "C" int func_003B3F70(char *);
extern "C" void func_003B4840(char *);
extern "C" void func_003B4F60(char *);

extern "C" void func_003B0B20(char *p) {
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x13;
        func_0024DA80(p + 0x1D00, 0, 0x13);
        func_0024DA80(p + 0x1DD0, 0, 0x13);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(int *)(p + 0x2204) = *(int *)(p + 0x2210);
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 36.0f)) {
            func_003B6310(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
}

extern "C" void func_003B30D0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x27;
        func_0024DA80(p + 0x1D00, 0, 0x27);
        func_0024DA80(p + 0x1DD0, 0, 0x27);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6490(p, 2);
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 25.0f) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            return;
        }
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
    func_003B4F60(p);
}

extern "C" void func_003B3220(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x28;
        func_0024DA80(p + 0x1D00, 0, 0x28);
        func_0024DA80(p + 0x1DD0, 0, 0x28);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6490(p, 3);
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 25.0f) && (unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
            return;
        }
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        break;
    }
    func_003B4F60(p);
}

extern "C" void func_003EFFC0(char *p) {
    *(float *)(p + 0x3A94) = *(float *)(p + 0x3A94) - *(float *)(p + 0x10);
    *(float *)(p + 0x714) = *(float *)(p + 0x714) + *(float *)(p + 0x3A14) * *(float *)(p + 0x10);
    *(float *)(p + 0x3A14) = *(float *)(p + 0x3A14) + -0.896f * *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x3AA4) <= 0.0f)) {
        ((ObjB *)p)->m2F8(0x29);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 3;
        *(unsigned char *)(p + 0x3436) = 2;
        func_003E6750(p, 0x20, 0, 0);
        *(unsigned char *)(p + 0x3A9C) = 0;
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x834) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x840) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x84C) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8E4) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8F0) + 0x104), 0x10);
        func_00207480(0, 0x2C, *(int *)(*(char **)(p + 0x8FC) + 0x104), 0x10);
    }
}
struct Ent340 {
    char pad[0x15C];
    int f15C;
    char pad2[0x340 - 0x160];
};

static inline void ent_clr(char *m, unsigned int i) {
    if (i < *(unsigned short *)(m + 0xA8)) {
        (*(Ent340 **)(m + 0xBC))[i].f15C = 0;
    }
}

extern "C" void func_001A2180(char *, int, int);
extern "C" void func_0043EB20(char *, int);
extern "C" int D_00575840[];
extern "C" float D_00575A6C[];
extern "C" float D_00575ACC[];

extern "C" void func_003F0FE0(char *p) {
    char *m;
    int i;
    ((ObjB *)p)->m2F8(0x47);
    func_003E6750(p, 0, 0, 0);
    *(unsigned char *)(p + 0x3437) = 2;
    *(unsigned char *)(p + 0x3438) = 2;
    *(float *)(p + 0x3A8C) = 120.0f;
    func_001A2180(func_00279290(p + 0x980), 0x40, 1);
    func_001A2180(func_00279290(p + 0xF80), 0x40, 1);
    m = func_00279290(p + 0x980);
    for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) {
        ent_clr(m, i);
    }
    m = func_00279290(p + 0xF80);
    for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) {
        ent_clr(m, i);
    }
}

extern "C" void func_003F1210(char *p) {
    char *m;
    int i;
    ((ObjB *)p)->m2F8(0x48);
    func_003E6750(p, 0, 0, 0);
    *(unsigned char *)(p + 0x3437) = 2;
    *(unsigned char *)(p + 0x3438) = 2;
    *(float *)(p + 0x3A8C) = 120.0f;
    func_001A2180(func_00279290(p + 0x980), 0x40, 1);
    func_001A2180(func_00279290(p + 0xF80), 0x40, 1);
    m = func_00279290(p + 0x980);
    for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) {
        ent_clr(m, i);
    }
    m = func_00279290(p + 0xF80);
    for (i = 0; i < *(unsigned short *)(m + 0xA8); i++) {
        ent_clr(m, i);
    }
}

static inline unsigned char lt_i(float a, int *q) {
    return a < (float)*q;
}

extern "C" void func_0043FF40(char *p) {
    char *g;
    float t;
    int i;
    int *q;
    int v;
    func_0043EB20(p, 0);
    g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0 && *(ObjT1C **)(g + 0x10) != 0) {
        t = (*(ObjT1C **)(g + 0x10))->m1C();
    } else {
        t = 0.0f;
    }
    *(float *)(p + 0x7F0) = t;
    *(unsigned char *)(p + 0x7C2) = 4;
    for (i = 0, q = D_00575840; i < 4; i++, q++) {
        if (!!(*(float *)(p + 0x7F0) < (float)*q)) {
            *(unsigned char *)(p + 0x7C2) = i;
            break;
        }
    }
    v = func_001AEA60(D_00666750, 6, 3);
    if (*(signed char *)(p + 0x7C1) == 0) {
        *(int *)(p + 0x800) = func_0031B860(v, p + 0x7F4, 5, D_00575A6C[0]);
    } else {
        *(int *)(p + 0x800) = func_0031B860(v, p + 0x7F4, 4, D_00575ACC[0]);
    }
    g = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (g != 0) {
        func_002F2E30(g, p);
    }
}
class Obj400 {
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
    virtual void m64(char *);
};

extern "C" int func_004D2D90(char *);
extern "C" int func_0024E780(char *, int, int);

extern "C" void func_004C67A0(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x5B);
        }
        break;
    case 1:
        if ((unsigned char)func_0024E780(*(char **)(p + 0xAB00), 1, 0) == 1) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x5C);
        }
        break;
    case 2:
        if ((unsigned char)func_0024E780(*(char **)(p + 0xAB00), 1, 0) == 1) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m2F8(0x29);
        }
        break;
    }
}

static inline char *seg_at(char *t, unsigned int i) {
    if (*(unsigned int *)(t + 4) < i + 1) {
        return 0;
    }
    if (((int *)(t + 8))[i] == 0) {
        return 0;
    }
    return t + ((int *)(t + 8))[i];
}

static inline char *cur_400(char *p) {
    if (*(unsigned char *)(p + 0x4AC) != 0 && 0 < *(int *)(p + 0x410)) {
        return **(char ***)(p + 0x414);
    }
    return 0;
}

extern "C" void func_00279980(char *p, unsigned int a1, int a2, int a3, char *t) {
    char *v;
    if (*(unsigned char *)(p + 0xB) != 0) {
        if (t == 0) {
            t = *(char **)(p + 0x10);
        }
        ((Obj400 *)(p + 0x400))->m64(seg_at(t, a1));
        *(float *)(p + 0x5A0) = *(float *)(cur_400(p) + 0x10C);
        *(float *)(p + 0x5A4) = *(float *)(cur_400(p) + 0x120);
        *(float *)(p + 0x5A8) = *(float *)(cur_400(p) + 0x134);
        *(float *)(p + 0x5AC) = 1.0f;
        v = p + 0x5B0;
        __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(v) : "memory");
    }
}

static inline char *cur_270(char *p) {
    if (*(unsigned char *)(p + 0x31C) != 0 && 0 < *(int *)(p + 0x280)) {
        return **(char ***)(p + 0x284);
    }
    return 0;
}

extern "C" void func_0027ACE0(char *p, unsigned int a1, int a2, int a3, char *t) {
    char *v;
    if (*(unsigned char *)(p + 0xB) != 0) {
        if (t == 0) {
            t = *(char **)(p + 0x10);
        }
        ((Obj400 *)(p + 0x270))->m64(seg_at(t, a1));
        *(float *)(p + 0x410) = *(float *)(cur_270(p) + 0x10C);
        *(float *)(p + 0x414) = *(float *)(cur_270(p) + 0x120);
        *(float *)(p + 0x418) = *(float *)(cur_270(p) + 0x134);
        *(float *)(p + 0x41C) = 1.0f;
        v = p + 0x420;
        __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0
	sqc2 $vf20, 0x0(%0)" : : "r"(v) : "memory");
    }
}
extern "C" void func_00466460(char *p) {
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
class ObjC0C {
public:
    virtual void d0();
    virtual int mC();
};

extern "C" void func_003B4D80(char *, int, int);

extern "C" unsigned char func_0035A420(char *p, signed char k) {
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

extern "C" unsigned char func_00497D80(char *p, signed char k) {
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

extern "C" void func_003B02C0(char *p) {
    float f;
    *(unsigned short *)(p + 0x20CC) = *(unsigned short *)(p + 0x20CC) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 5;
        func_0024DA80(p + 0x1D00, 0, 5);
        func_0024DA80(p + 0x1DD0, 0, 5);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
            *(unsigned char *)(p + 0x2215) = 1;
            return;
        }
        break;
    }
    f = ((AnimF *)(p + 0x704))->m28(0);
    if (!(f < 44.0f) && f <= 63.0f) {
        func_003B4D80(p, 0x400, 0);
    }
    func_003B4F60(p);
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

extern "C" float D_00577C60[];
extern "C" float D_00577C64[];
extern "C" float D_00577C68[];
extern "C" int func_00437B60(char *);
extern "C" int func_004361D0(char *);
extern "C" int func_00437E00(char *, int);

extern "C" void func_00435EF0(char *p) {
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((ObjB *)p)->m2FC(0xB);
        break;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x41A0) == 1) {
            if (*(float *)(p + 0x164) < D_00577C60[0] && (unsigned char)func_00437B60(p) == 1) {
                ((ObjB *)p)->m2F4(0x1D);
                break;
            }
            if (*(float *)(p + 0x164) < D_00577C64[0]) {
                ((ObjB *)p)->m2F4(0x28);
                break;
            }
            if ((unsigned char)func_00437E00(p, func_004361D0(p)) == 0 || !(*(float *)(p + 0x164) < D_00577C68[0])) {
                ((ObjB *)p)->m2F4(0x17);
            } else {
                ((ObjB *)p)->m2F4(0x16);
            }
        }
        break;
    }
}

extern "C" void func_00436060(char *p) {
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((ObjB *)p)->m2FC(0xA);
        break;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x41A0) == 1) {
            if (*(float *)(p + 0x164) < D_00577C60[0] && (unsigned char)func_00437B60(p) == 1) {
                ((ObjB *)p)->m2F4(0x1D);
                break;
            }
            if (*(float *)(p + 0x164) < D_00577C64[0]) {
                ((ObjB *)p)->m2F4(0x28);
                break;
            }
            if ((unsigned char)func_00437E00(p, func_004361D0(p)) == 0 || !(*(float *)(p + 0x164) < D_00577C68[0])) {
                ((ObjB *)p)->m2F4(0x17);
            } else {
                ((ObjB *)p)->m2F4(0x16);
            }
        }
        break;
    }
}


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


extern "C" void func_0035B340(char *p) {
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
                    ((SelfB4 *)p)->mB4(0x29);
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

extern "C" void func_00498CA0(char *p) {
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
extern "C" void func_001B1120(int);
extern "C" char D_01CAF67B[];
extern "C" void func_0048D950(char *, int, int, int, int);
extern "C" void func_0048D990(char *);
extern "C" int func_0048DBC0(char *);
extern "C" char D_00645A30[];
extern "C" void func_00195520(char *, int);
extern "C" void func_00208050(char *, int);
extern "C" int func_0032D3D0(int, char *, float);
extern "C" int func_002FF750(int, int, int);

extern "C" void func_00237C10(char *p) {
    unsigned char r;
    func_001B1120(1);
    switch (*(unsigned char *)(p + 0x19)) {
    case 0:
        D_01CAF67B[0] = 1;
        func_0048D950(p + 0x193F8, 3, 5, 0, 0);
        D_005BC1A8->m18(0x80000000, 0x1E);
        *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        break;
    case 1:
        if ((unsigned char)D_005BC1A8->m2C() == 1) {
            *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
        }
        break;
    case 2:
        func_0048D990(p + 0x193F8);
        r = (unsigned char)func_0048DBC0(p + 0x193F8);
        if (r != 0) {
            switch (r) {
            case 1:
            case 2:
                *(unsigned char *)(p + 0x19) = *(unsigned char *)(p + 0x19) + 1;
                break;
            }
        }
        break;
    case 3:
        D_01CAF67B[0] = 0;
        *(int *)(p + 0x19480) = 1;
        *(unsigned char *)(p + 0x18) = 3;
        *(unsigned char *)(p + 0x19) = 0;
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    func_001B1120(0);
}

static inline char *seg_n(char *t, unsigned int i) {
    if (*(unsigned int *)(t + 4) < i + 1) {
        return 0;
    }
    if (((int *)(t + 8))[i] == 0) {
        return 0;
    }
    return t + ((int *)(t + 8))[i];
}

static inline char *motion_at(char *o, unsigned int i) {
    if (**(unsigned short **)(o + 8) == 0) {
        return seg_n(*(char **)(o + 0xC), i);
    }
    return *(char **)(o + 0xC);
}

extern "C" void func_00333FD0(char *p) {
    char *q;
    func_00208050(motion_at(*(char **)(p + 0x4D0), 8), 2);
    *(char **)(p + 0x12B4) = func_00207480(3, 0xFA, 0, 0x10);
    q = *(char **)(p + 0x12B4);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x668) + 0x104);
        q[0x9A] = 0;
        *(*(char **)(p + 0x12B4) + 0x3A) = 1;
    }
    *(char **)(p + 0x12B8) = func_00207480(3, 0xFD, 0, 0x10);
    q = *(char **)(p + 0x12B8);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x684) + 0x104);
        q[0x9A] = 0;
        *(*(char **)(p + 0x12B8) + 0x3A) = 1;
    }
    *(char **)(p + 0x12BC) = func_00207480(3, 0x2CD, 0, 0x10);
    q = *(char **)(p + 0x12BC);
    if (q != 0) {
        *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x6B0) + 0x104);
        q[0x9A] = 0;
        *(*(char **)(p + 0x12BC) + 0x3A) = 1;
    }
    *(int *)(p + 0xC8) = func_0032D3D0(0, p, 2.5f);
    *(int *)(p + 0x12B0) = func_002FF750(0x11, *(int *)(*(char **)(p + 0x684) + 0x104), 0);
}
extern "C" void func_0041DAB0(char *, char *, int);
extern "C" void func_0041DBA0(char *, char *);
extern "C" void func_003FA440(char *, int);
extern "C" int func_003F9F90(char *);
extern "C" void func_003FA550(char *, float);
extern "C" float func_0041E060(char *);
extern "C" int func_004243B0(char *);
extern "C" void func_003FA3F0(char *, int);
extern "C" void func_003A5C70(char *);
extern "C" void func_003A5D20(char *, int);
extern "C" void func_0024E7B0(char *, int, int);
extern "C" void func_003AB360(char *);
extern "C" int func_003ACB40(char *);
extern "C" void func_003AA8F0(char *);
extern "C" void func_002EF940(char *, char *);
extern "C" short func_0034B940(char *, char *);
extern "C" int func_0028B8E0(char *);
extern "C" int func_0028B620(char *);
extern "C" void func_0028B980(char *, char *, int);

extern "C" void func_00424990(char *p) {
    float f;
    char *b;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_003FA440(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        f = ((AnimF *)(p + 0x544))->m28(0);
        if (28.0f < f && f < 58.0f) {
            func_0041DAB0(p + 0x50, p + 0x90, func_003F9F90(p));
        } else if (58.0f < f && f < 60.0f) {
            func_003FA550(p, 5.0f);
        }
        func_0041DBA0(p, p + 0x540);
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            *(float *)(p + 0x54) = func_0041E060(b);
            if ((unsigned char)func_004243B0(p) == 1) {
                func_003FA3F0(p, 3);
            } else {
                func_003FA3F0(p, 0);
            }
        }
    }
}

extern "C" void func_003A8070(char *p) {
    char *e;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        e = func_00207480(3, 0x17A, 0, 0x10);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x2100;
            e[0x9A] = 0;
        }
        func_003A5C70(p);
    case 1:
        func_003A5D20(p, 0);
        if ((unsigned char)func_0024E780(p + 0x4BF0, 0, 0) == 2) {
            func_0024E7B0(p + 0x4BF0, 0, 0);
            func_003AB360(p);
        }
        if ((unsigned char)func_0024E800(p + 0x4BF0) == 1) {
            *(float *)(p + 0x4E08) = 40.0f;
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        }
        break;
    case 2:
        *(float *)(p + 0x4E08) = *(float *)(p + 0x4E08) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x4E08) < 0.0f && (unsigned char)func_003ACB40(p) == 0) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 0;
            func_003AA8F0(p);
        }
        func_003A5D20(p, 1);
        break;
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0x5080);
    *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
}

class ObjM74 {
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
    virtual void m74(float);
};

class Obj180 {
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
    virtual void mB0(int, char *);
    virtual void d43();
    virtual void mB8(int, int, int, int, int);
    virtual void mBC(float);
};

extern "C" signed char func_001FC8F0(char *p, float x) {
    if (*(unsigned char *)(p + 0x191) == 0) {
        return 2;
    }
    if (*(unsigned char *)(p + 0xAC) == 0) {
        *(unsigned char *)(p + 0xAC) = 5;
        return *(signed char *)(p + 0xAC);
    }
    *(float *)(p + 0x108) = x;
    *(float *)(p + 0x128) = *(float *)(p + 0x128) + x;
    if (!(x <= 0.0f)) {
        if (*(unsigned char *)(p + 0x9C) != 0) {
            if (!(*(float *)(p + 0x128) <= *(float *)(p + 0x7C)) || !(*(float *)(p + 0x128) <= *(float *)(p + 0x3C))) {
                *(float *)(p + 0x128) = *(float *)(p + 0x5C);
                *(unsigned char *)(p + 0xAC) = 4;
            } else {
                *(unsigned char *)(p + 0xAC) = 2;
            }
        } else if (!(*(float *)(p + 0x128) <= *(float *)(p + 0x3C))) {
            *(float *)(p + 0x128) = *(float *)(p + 0x3C);
            *(unsigned char *)(p + 0xAC) = 4;
        }
    } else if (x < 0.0f) {
        if (*(unsigned char *)(p + 0x9C) != 0) {
            if (*(float *)(p + 0x128) < *(float *)(p + 0x5C) || *(float *)(p + 0x128) < *(float *)(p + 0x1C)) {
                *(float *)(p + 0x128) = *(float *)(p + 0x7C);
                *(unsigned char *)(p + 0xAC) = 4;
            }
        } else if (*(float *)(p + 0x128) < *(float *)(p + 0x1C)) {
            *(float *)(p + 0x128) = *(float *)(p + 0x1C);
            *(unsigned char *)(p + 0xAC) = 4;
        } else {
            *(unsigned char *)(p + 0xAC) = 2;
        }
    }
    ((ObjM74 *)p)->m74(*(float *)(p + 0x128));
    return *(signed char *)(p + 0xAC);
}

extern "C" void func_0028D3D0(char *p) {
    char *e;
    if ((unsigned char)func_0028B8E0(p) == 0) {
        return;
    }
    if ((unsigned char)func_0028B620(p) == 0) {
        *(unsigned char *)(p + 0xD8) = 1;
    } else {
        *(unsigned char *)(p + 0xD8) = *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
    }
    if (*(float *)(*(char **)(p + 0xE0) + 0x29A8) <= 0.0f) {
        func_0028B980(p, p + 0x890, *(unsigned char *)(p + 0xD8));
        if (*(unsigned char *)(p + 0xDC) == 1) {
            ((Obj180 *)(p + 0x180))->mBC(*(float *)(p + 0x10));
        }
        switch (*(signed char *)(p + 0xDA)) {
        case 0:
            e = *(char **)(p + 0xE0);
            if (*(unsigned char *)(e + 0x24EC) != *(unsigned char *)(e + 0x24D2) || *(unsigned char *)(p + 0xDC) == 1) {
                ((Obj180 *)(p + 0x180))->mB0(*(int *)(p + 0x8D0), p + 0x100);
            }
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        case 1:
            e = *(char **)(p + 0xE0);
            if (*(unsigned char *)(e + 0x24EC) != *(unsigned char *)(e + 0x24D2)) {
                ((Obj180 *)(p + 0x180))->mB8(0, 0, 0, 0, 0);
                *(unsigned char *)(p + 0xDC) = 1;
            }
            break;
        }
        if (*(unsigned char *)(p + 0xD8) != 1 && *(unsigned char *)(*(char **)(p + 0xE0) + 0x24EB) != 0 &&
            *(char **)(p + 0x8D4) != 0) {
            func_003023F0(*(int *)(p + 0x8D4));
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

extern "C" int func_0033A660(char *, int);
extern "C" void func_0033A620(char *, int, int);
extern "C" int func_003B3CF0(char *);
extern "C" void func_003B4E70(char *, int, int);

extern "C" void func_00338740(char *p) {
    char *q;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x1368) = 120.0f;
        func_0033A660(p, 0);
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 120.0f;
            *(char **)(p + 0x12D4) = func_00207480(3, 0x340, 0, 0x10);
            q = *(char **)(p + 0x12D4);
            if (q != 0) {
                *(int *)(q + 0x90) = *(int *)(*(char **)(p + 0x68C) + 0x104);
                q[0x9A] = 3;
            }
        }
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 0.75f * *(float *)(p + 0x10);
        break;
    case 2:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 0x1350) = 0;
            func_0033A660(p, 1);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_0033A620(p, 0, 6);
        }
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0x10);
        break;
    case 3:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjB *)p)->m304(0x20);
        }
        break;
    }
}

extern "C" void func_0033A1C0(char *p) {
    char *q;
    func_0033A660(p, 1);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(char **)(p + 0x12D8) = func_00207480(3, 0x182, 0, 0x10);
        q = *(char **)(p + 0x12D8);
        if (q != 0) {
            *(int *)(q + 0x94) = *(int *)(*(char **)(p + 0x668) + 0x104);
            q[0x99] = 0;
        }
        *(float *)(p + 0x1368) = 60.0f;
        *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
        break;
    case 1:
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1368) = 120.0f;
        }
        break;
    case 2:
        *(float *)(p + 0x1354) = *(float *)(p + 0x1354) + (1.0f / 120.0f) * *(float *)(p + 0x10);
        if (!(*(float *)(p + 0x1354) <= 1.0f)) {
            *(float *)(p + 0x1354) = 1.0f;
        }
        *(float *)(p + 0x1368) = *(float *)(p + 0x1368) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1368) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x1354) = 1.0f;
        }
        break;
    case 3:
        if ((unsigned char)func_0024E800(p + 0xDF0) == 1) {
            ((ObjB *)p)->m304(0x20);
        }
        break;
    }
}

static inline unsigned char nz2217(char *p) {
    return *(unsigned char *)(p + 0x2217) != 0;
}

extern "C" void func_003B3B60(char *p) {
    *(unsigned short *)(p + 0x20CC) = *(unsigned short *)(p + 0x20CC) | 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x35;
        func_0024DA80(p + 0x1D00, 0, 0x35);
        func_0024DA80(p + 0x1DD0, 0, 0x35);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x2217) = 0;
        func_003B6060(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 50.0f) && nz2217(p) == 1 && (unsigned char)func_003B3CF0(p) == 1) {
            return;
        }
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
        }
        if (((AnimF *)(p + 0x704))->m28(0) < 9.0f) {
            func_003B4E70(p, 0x1000, 0);
        }
        break;
    }
    func_003B4F60(p);
}

extern "C" void func_0043A210(char *p) {
    int k;
    float f;
    *(short *)(p + 0x47BA) = *(short *)(p + 0x160) - *(short *)(p + 0x4850);
    k = ((Sub130 *)(p + 0x130))->m80(*(float *)(p + 0x144));
    *(float *)(p + 0x168) = 1.0f + (*(float **)(*(char **)(p + 0x138) + 0x14))[k];
    f = 360.0f * (float)*(short *)(p + 0x47BA) / 65536.0f;
    if (!(f <= -135.0f) && f < -45.0f) {
        ((ObjB *)p)->m2F4(0x27);
    } else if (!(f <= -45.0f) && f < 45.0f) {
        ((ObjB *)p)->m2F4(0x25);
    } else if (!(f <= 45.0f) && f <= 135.0f) {
        ((ObjB *)p)->m2F4(0x26);
    } else {
        ((ObjB *)p)->m2F4(0x24);
    }
}

extern "C" void func_0046B2A0(char *p) {
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

extern "C" void func_004A7AA0(char *p) {
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
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 2;
        }
        (*(AnimJ **)(p + 0xA8))->m24();
        break;
    case 2:
        (*(AnimJ **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}
extern "C" int func_002A4A40(char *);
extern "C" float D_00561DA0[][3];
extern "C" void func_002965E0(char *, int);
extern "C" void func_0029FD40(char *);
extern "C" void func_0028C8E0(char *, int);
extern "C" void func_0028C910(char *);
extern "C" char *func_0028C3A0(char *, int, int, char *);

extern "C" void func_0029C940(char *p) {
    int k;
    *(float *)(p + 0x9644) = *(float *)(p + 0x9644) + *(float *)(p + 0x10);
    k = func_002A4A40(p);
    if (!(*(float *)(p + 0x9644) <= 100.0f / ((float *)D_00561DA0[k])[*(int *)(p + 0x8928)])) {
        ((ObjM74 *)(char *)func_002792A0(p + 0x1D00))->m74(277.0f);
        ((ObjM74 *)(char *)func_002792A0(p + 0x2900))->m74(277.0f);
        ((ObjM74 *)(char *)func_002792A0(p + 0x2F00))->m74(277.0f);
        ((ObjM74 *)(char *)func_002792A0(p + 0x3500))->m74(277.0f);
        *(unsigned char *)(p + 5) = 0x20;
    }
    if (func_0024E800(p + 0x8980) != 0 || *(unsigned char *)(p + 0x8922) == 0) {
        func_002965E0(p, 0xFFFF);
        func_0029FD40(p);
        *(int *)(p + 0xAA9C) = 0;
        *(unsigned char *)(p + 0xA563) = 0;
    }
}

class ObjLift {
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
    virtual void d113b();
    virtual void m1D4(int, char *);
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
    virtual void m22C();
    virtual void m230();
};

extern "C" void func_002AA9C0(char *p) {
    if (*(unsigned char *)(p + 0x23CC) != 0) {
        switch (*(int *)(p + 0x23D0)) {
        case 0:
            ((ObjLift *)p)->m1D4(0x1A, p + 0x50);
            ((ObjLift *)p)->m22C();
            *(float *)(p + 0x23D4) = 40.0f;
            *(int *)(p + 0x23D0) = 1;
            break;
        case 1:
            *(float *)(p + 0x23D4) = *(float *)(p + 0x23D4) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x23D4) <= 0.0f) {
                ((ObjLift *)p)->m230();
                *(int *)(p + 0x23D0) = 2;
                *(unsigned char *)(p + 0x23CC) = 0;
            }
            break;
        case 2:
            break;
        }
    }
    if (*(unsigned char *)(p + 0x23D8) != 0) {
        switch (*(int *)(p + 0x23DC)) {
        case 0:
            ((ObjLift *)p)->m22C();
            *(float *)(p + 0x23E0) = 30.0f;
            *(int *)(p + 0x23DC) = 1;
            break;
        case 1:
            *(float *)(p + 0x23E0) = *(float *)(p + 0x23E0) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x23E0) <= 0.0f) {
                ((ObjLift *)p)->m230();
                *(float *)(p + 0x23E0) = 30.0f;
                *(int *)(p + 0x23DC) = 2;
            }
            break;
        case 2:
            *(float *)(p + 0x23E0) = *(float *)(p + 0x23E0) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x23E0) <= 0.0f) {
                *(int *)(p + 0x23DC) = 3;
                *(unsigned char *)(p + 0x23D8) = 0;
            }
            break;
        case 3:
            break;
        }
    }
}

extern "C" void func_003F24F0(char *p) {
    char *e;
    func_003F2E90(p);
    func_003F2F60(p);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 0)) {
    case 1:
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x6E0) * (2.0f * *(float *)(p + 0x10));
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x6E4) * (2.0f * *(float *)(p + 0x10));
        *(float *)(p + 0x710) = *(float *)(p + 0x710) + *(float *)(p + 0x6E8) * (2.0f * *(float *)(p + 0x10));
    }
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 4)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 5);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 0x1E, *(char **)(*(char **)(p + 0x8C8) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        func_0028C910(p + 0x2180);
        func_0028C8E0(p + 0x2180, 8);
        e = func_0028C3A0(p + 0x2180, 0xA, 0x1E, *(char **)(*(char **)(p + 0x7FC) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        ((ObjB *)p)->m2F8(0x54);
        *(unsigned char *)(p + 0x3434) = 0;
        *(unsigned char *)(p + 0x3435) = 0;
        *(unsigned char *)(p + 0x3436) = 0;
        *(float *)(p + 0x3A8C) = 10.0f;
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

class Sub8C {
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
    virtual void m8C();
};

extern "C" void func_0039D820(char *);
extern "C" void func_003FA440(char *, int);
extern "C" int func_0041D6B0(float *, float);
extern "C" void func_0041D670(char *);
extern "C" void func_003FA3F0(char *, int);
extern "C" int func_00437BE0(char *);
extern "C" int func_004361D0(char *);
extern "C" int func_00437E00(char *, int);
extern "C" int D_01CAFF10[];
extern "C" int D_01CAFF38[];
extern "C" int D_01CAFF14[];
extern "C" char D_01CAF520[];
extern "C" char D_006011E4[];
extern "C" char D_00631568[];
extern "C" int D_005BE09C;
extern "C" void func_001F9BF0(char *);
extern "C" void func_0020E4D0(char *, int, int);
extern "C" void func_00286F20(char *, int);
extern "C" void func_0027BEA0(char *);
extern "C" void func_001ACCD0(int);
extern "C" void func_0013E0A0(char *);
extern "C" float func_0041DB20(char *);
extern "C" int func_00423B90(char *);
extern "C" void func_003F85D0(char *);
extern "C" void func_00423BD0(char *);
extern "C" void func_00423EB0(char *);
extern "C" void func_003F8E90(char *);
extern "C" void func_003F9080(char *);
extern "C" void func_003F94A0(char *);
extern "C" void func_003F9700(char *);
extern "C" void func_001A2F20(char *, int, int);
extern "C" char *func_004FED00(char *, int, int);
extern "C" void func_0041D7F0(char *, float);
extern "C" void func_0041D6E0(char *, char *, int, float);
extern "C" int func_0041E120(char *, float);
extern "C" float D_005BDF2C;
extern "C" float func_0041DB40(char *);
extern "C" void func_00492E20(char *, int);
extern "C" char *func_003D0CB0(char *, int, int, int, int, int);
extern "C" int func_00427DE0(char *);
extern "C" void func_00427E30(char *);
extern "C" void func_00428040(char *);
extern "C" void func_00428160(char *);
extern "C" void func_003F8B60(char *);
extern "C" void func_004284F0(char *);
extern "C" char D_00568014[];
extern "C" char D_00568018[];
extern "C" void func_00505A70(char *, int, int, int, char *, int, int, float, float, float);
extern "C" int D_00561ECC[];
extern "C" void func_002A4910(char *, char *, char *, char *);
extern "C" char D_005626A0[];
extern "C" char D_005626B0[];
extern "C" void func_0034B9A0(char *, short, float, float, float);
extern "C" void func_002CE2B0(char *);
extern "C" void func_002CDEF0(char *);
extern "C" int func_002CFA00(char *, float);
extern "C" void func_002CDFB0(char *);
extern "C" void func_003A0B30(char *);
extern "C" void func_003A0BD0(char *);
extern "C" void func_003A0AB0(char *);

extern "C" void func_00394EE0(char *p) {
    char *e;
    switch (*(unsigned char *)(p + 0x2F3C)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x5B;
        func_0024DA80(p + 0x29D0, 0, 0x5B);
        func_0024DA80(p + 0x2AA0, 0, 0x5B);
        e = func_00207480(3, 0x313, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xCC4) + 0x104);
            e[0x9A] = 0;
        }
        break;
    case 1:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x5C;
        func_0024DA80(p + 0x29D0, 0, 0x5C);
        func_0024DA80(p + 0x2AA0, 0, 0x5C);
        e = func_00207480(3, 0x314, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xCC4) + 0x104);
            e[0x9A] = 0;
        }
        ((ObjB4BC *)(p + 0x1380))->mB4(5, 0, 0, 0);
        break;
    case 2:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x5D;
        func_0024DA80(p + 0x29D0, 0, 0x5D);
        func_0024DA80(p + 0x2AA0, 0, 0x5D);
        e = func_00207480(3, 0x315, 0, 0x10);
        if (e != 0) {
            *(int *)(e + 0x90) = *(int *)(*(char **)(p + 0xCC4) + 0x104);
            e[0x9A] = 0;
        }
        ((ObjB4BC *)(p + 0x1380))->mB4(5, 0, 0, 0);
        break;
    }
    func_0039D820(p);
}

extern "C" void func_00461B60(char *p) {
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

extern "C" void func_0049DA60(char *p) {
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
            func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 6, 0);
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

extern "C" void func_004245E0(char *p) {
    float f;
    char *q;
    if (*(float *)(p + 0x478) <= 0.0f) {
        *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000000;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 1;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x3B8) = 30.0f - 9.0f * (float)(unsigned int)*(unsigned char *)(p + 0x3AB);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), *(float *)(p + 0x10)) == 1) {
            func_003FA440(p, -1);
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        f = ((AnimF *)(p + 0x544))->m28(0);
        *(float *)(p + 0x3A4) = f;
        if (53.0f <= f) {
            if (*(int *)(p + 0x454) == 0) {
                *(char **)(p + 0x454) = func_00207480(3, 0x241, 0, 0x10);
                q = *(char **)(p + 0x454);
                if (q != 0) {
                    *(char **)(q + 0x90) = p + 0x360;
                    q[0x9A] = 0;
                    (*(char **)(p + 0x454))[0x3A] = 1;
                }
            }
            *(unsigned char *)(p + 6) = 3;
        }
    case 3:
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_0041D670(p + 0x454);
            func_003FA3F0(p, 0);
        }
        break;
    }
}

extern "C" int func_00437C50(char *p) {
    switch ((unsigned char)func_00437BE0(p)) {
    case 0:
        if ((unsigned char)func_00437E00(p, func_004361D0(p)) == 1) {
            ((Sub8C *)(p + 0x130))->m8C();
            ((ObjB *)p)->m2F4(0x1B);
            return 1;
        }
        if ((unsigned char)D_01CAFF3C[0] == 4) {
            ((Sub8C *)(p + 0x130))->m8C();
            ((ObjB *)p)->m2F4(0x1C);
            return 1;
        }
        break;
    case 1:
        ((Sub8C *)(p + 0x130))->m8C();
        ((ObjB *)p)->m2F4(0x1D);
        return 1;
    case 2:
        if ((unsigned char)D_01CAFF3C[0] == 4 && (unsigned char)func_00437E00(p, func_004361D0(p)) == 1) {
            ((Sub8C *)(p + 0x130))->m8C();
            ((ObjB *)p)->m2F4(0x1B);
            return 1;
        }
        ((Sub8C *)(p + 0x130))->m8C();
        ((ObjB *)p)->m2F4(0x1C);
        return 1;
    }
    return 0;
}

class ObjCam20 {
public:
    virtual void d0();
    virtual void mC();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void m20();
};

extern "C" void func_0036A870(char *p) {
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
            switch (**(signed char **)(p + 4)) {
            default:
                func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 0, 0);
                break;
            case 0x19:
                func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 7, 0);
                break;
            }
            *(int *)(p + 0xD4) = 2;
        }
        (*(AnimJ **)(p + 0xA8))->m24();
        break;
    case 2:
        (*(AnimJ **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
        break;
    }
}

extern "C" void func_00235A30(char *p) {
    char *g;
    *(int *)(p + 0xC) = D_01CAFF10[0];
    func_001F9BF0(D_01DF5D20);
    D_01CAFF38[0] = *(int *)(p + 0x10) = *(short *)(*(char **)(*(char **)(p + 0xC) + 4) + 0xF2);
    *(int *)(p + 0x14) = *(short *)(*(char **)(*(char **)(p + 0xC) + 4) + 0xF4);
    func_0020E4D0(*(char **)(*(char **)(p + 0xC) + 4), *(int *)(p + 0x10), *(int *)(p + 0x14));
    func_00286F20(*(char **)(*(char **)(p + 0xC) + 8), *(int *)(p + 0x10));
    *(char **)D_01CAFF0C = p + 0x140;
    *(char **)(p + 0x164) = p;
    *(char **)(p + 0x140) = p + 0x5BF0;
    *(int *)(p + 0x158) = *(int *)(*(char **)(p + 0xC) + 4);
    *(char **)(p + 0x15C) = p + 0x180;
    *(char **)(p + 0x160) = p + 0xB70;
    *(int *)(p + 0x144) = *(int *)(p + 0xC);
    *(char **)(p + 0x16C) = p + 0x18E94;
    *(char **)(p + 0x170) = p + 0x18EA0;
    *(char **)(p + 0x168) = p + 0x19484;
    if (*(int *)(p + 0x10) == 0xC) {
        (*(char **)D_01CAFF0C)[0xA] = 1;
    } else {
        (*(char **)D_01CAFF0C)[0xA] = 0;
    }
    D_01CAFF14[0] = (int)(p + 0x30);
    func_0027BEA0(p + 0x18EA8);
    *(char **)(p + 0x2308) = p + 0x45C0;
    *(char **)(p + 0x230C) = p + 0x47C0;
    *(unsigned char *)(p + 0x5BE0) = 0;
    D_01CAF520[0] = 0;
    (*(char **)D_01CAFF0C)[9] = 0;
    func_001ACCD0(D_005BE09C);
    func_0013E0A0(D_006011E4);
    func_0013E0A0(D_00631568);
    g = *(char **)D_01CAFF0C;
    if (*(unsigned char *)(g + 0xA) != 0) {
        (*(ObjCam20 **)(*(char **)(g + 4) + 0x10))->mC();
        (*(ObjCam20 **)(*(char **)(g + 4) + 0x10))->m20();
    }
}

class ObjB40 {
public:
    virtual void d0();
    virtual void d1();
    virtual void m10(float);
};

class Obj40m {
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
    virtual void m3C(int);
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
    virtual void mD4(int);
};

class Obj6C74 {
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
    virtual void m74();
};

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" void func_004237C0(char *p) {
    ((ObjB40 *)(p + 0xB40))->m10(*(float *)(p + 0x10));
    if (!(*(float *)(p + 0x3C4) <= *(float *)(p + 0xEA4))) {
        if (func_0041DB20(p + 0x50) < 500.0f) {
            *(unsigned char *)(p + 0x488) = 0x14;
            *(float *)(p + 0x478) = 120.0f;
        }
    } else if (*(unsigned char *)(p + 5) == 2) {
        if ((unsigned char)func_00423B90(p) == 1) {
            if ((unsigned char)func_0041D6B0((float *)(p + 0x478), *(float *)(p + 0x10)) == 1) {
                *(unsigned char *)(p + 0x488) = 0x14;
                *(float *)(p + 0x478) = 120.0f;
            }
        } else {
            *(float *)(p + 0x478) = 120.0f;
        }
    }
    if (*(unsigned char *)(p + 0x488) == 0x14) {
        if (*(unsigned char *)(p + 5) == 0) {
            func_003FA3F0(p, 3);
        } else if (*(unsigned char *)(p + 5) == 3) {
            *(unsigned char *)(p + 0x488) = 0;
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_003F85D0(p);
        break;
    case 2:
        func_00423BD0(p);
        break;
    case 3:
        func_00423EB0(p);
        break;
    case 10:
        func_003F8E90(p);
        break;
    case 11:
        func_003F9080(p);
        break;
    case 12:
        func_003F94A0(p);
        break;
    case 13:
        func_003F9700(p);
        break;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) & 0xBFFFFFFF;
}

extern "C" void func_0031BB30(char *p) {
    char *s;
    char *d;
    ((Obj40m *)(p + 0x40))->m3C(0);
    ((Obj40m *)(p + 0x40))->mD4(1);
    s = *(char **)((char *)func_00279290(p + 0x40) + 0x108) + 0x30;
    d = p + 0x640;
    QCOPY(d, s);
    s = *(char **)((char *)func_00279290(p + 0x40) + 0x108) + 0x70;
    d = p + 0x660;
    QCOPY(d, s);
    s = *(char **)((char *)func_00279290(p + 0x40) + 0x108) + 0xB0;
    d = p + 0x650;
    QCOPY(d, s);
    s = *(char **)((char *)func_00279290(p + 0x40) + 0x108) + 0xF0;
    d = p + 0x670;
    QCOPY(d, s);
    *(float *)(p + 0x680) = *(float *)(p + 0x684) = *(float *)(p + 0x688) = *(float *)(p + 0x68C) = 0.0f;
    *(float *)(p + 0x690) = 0.12f;
    *(float *)(p + 0x694) = 0.0f;
    *(float *)(p + 0x698) = 0.0f;
    *(float *)(p + 0x6A8) = 0.0f;
    *(int *)(p + 0x6AC) = 0;
    func_001A1E70((char *)func_00279290(p + 0x40), 0);
    func_001A1E70((char *)func_00279290(p + 0x40), 1);
    func_001A1E70((char *)func_00279290(p + 0x40), 2);
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
    switch (*(unsigned char *)(p + 0x6A5)) {
    case 0:
        break;
    case 1:
        func_001A2F20((char *)func_00279290(p + 0x40), 2, 0x767696);
        func_001A2F20((char *)func_00279290(p + 0x40), 3, 0x5656F6);
        break;
    case 2:
        func_001A2F20((char *)func_00279290(p + 0x40), 2, 0x767696);
        func_001A2F20((char *)func_00279290(p + 0x40), 3, 0xFA5A6E);
        break;
    }
}

extern "C" void func_003F8E90(char *p) {
    char *e;
    char *b;
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 0x40000000;
    *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x10000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x16, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        func_003FA440(p, -1);
        *(int *)(p + 0x47C) = 0;
        e = func_004FED00(p, 1, 0);
        if (e != 0) {
            ((ObjV134 *)e)->m130();
        }
        *(float *)(p + 0x3B8) = 128.0f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 150.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x8000000;
        *(float *)(p + 0x47C) = *(float *)(p + 0x47C) + 1.0f;
        if (!(*(float *)(p + 0x47C) <= 128.0f)) {
            *(float *)(p + 0x47C) = 128.0f;
        }
        if ((unsigned char)func_0041D6B0((float *)(p + 0x3B8), *(float *)(p + 0x10)) == 1) {
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        func_0041D7F0(p + 0x64, -3.2f * *(float *)(p + 0x10));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        if ((unsigned char)func_0041E120(b, 0.0f) == 1) {
            func_003FA550(p, 5.0f);
            func_0034BA60(0x14, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            func_003FA3F0(p, 0);
        }
        break;
    }
}

extern "C" void func_004C6C00(char *p) {
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x28);
        }
        break;
    case 1:
        if (((ObjB *)p)->m2EC() == 0x77) {
            if (*(float *)(p + 0x164) < D_005BDF2C) {
                *(unsigned char *)(p + 0xB158) = 3;
                ((ObjB *)p)->m300(0x2A);
            } else {
                *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
                ((ObjB *)p)->m300(0x29);
            }
        }
        break;
    case 2:
        if (*(float *)(p + 0x164) < D_005BDF2C) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x2A);
        } else if (((ObjB *)p)->m2EC() == 0x77) {
            *(unsigned char *)(p + 0xB158) = *(unsigned char *)(p + 0xB158) + 1;
            ((ObjB *)p)->m300(0x2A);
        }
        break;
    case 3:
        if (((ObjB *)p)->m2EC() == 0x77) {
            ((ObjB *)p)->m2F8(0x17);
        }
        break;
    }
}

extern "C" void func_0035F860(char *p) {
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
            switch (**(signed char **)(p + 4)) {
            default:
                func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 0, 0);
                break;
            case 0x19:
                func_00330BD0(D_01DFABA0, 0x27, *(char **)(p + 0x10) + 0x10, 7, 0);
                break;
            }
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

extern "C" void func_0036C0B0(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(AnimJ **)(p + 0xA8))->m28() < 240.0f)) {
            ((Obj6C74 *)p)->m6C();
            ((Obj6C74 *)p)->m74();
            if (*(float *)(p + 0x34) < 500.0f) {
                *(int *)(p + 0xD4) = 1;
            } else {
                (*(AnimJ **)(p + 0xA8))->m18(0x5A);
                *(int *)(p + 0xD4) = 2;
            }
        }
        break;
    case 1:
        if ((*(AnimJ **)(p + 0xA8))->m2C() != 0) {
            (*(AnimJ **)(p + 0xA8))->m48(9, *(char **)(p + 0x10) + 0x10);
            (*(AnimJ **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            (*(AnimJ **)(p + 0xA8))->m48(0x388, *(char **)(p + 0x10) + 0x10);
            switch (**(signed char **)(p + 4)) {
            default:
                func_00330BD0(D_01DFABA0, 0x1B, *(char **)(p + 0x10) + 0x10, 0, 0);
                break;
            case 0x19:
                func_00330BD0(D_01DFABA0, 0x1B, *(char **)(p + 0x10) + 0x10, 7, 0);
                break;
            }
            return;
        }
        break;
    case 2:
        if ((*(AnimJ **)(p + 0xA8))->m2C() != 0) {
            ((ObjEC *)p)->mEC(0xE);
        }
        break;
    }
}

extern "C" void func_00493D20(char *p) {
    char *e;
    if (func_0041DB40(p + 0x50) < 600.0f) {
        func_00492E20(p, *(unsigned char *)(p + 0x3C94));
        return;
    }
    switch (((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)]) {
    case 0:
        ((signed char *)(p + 0x3CA8))[*(int *)(p + 0x3C94)] = 0;
        ((unsigned char *)(p + 0x3CB8))[*(int *)(p + 0x3C94)] = 6;
        ((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)] = 1;
    case 1:
        e = func_003D0CB0(p + 0x9B0, *(int *)(p + 0x9F0), *(int *)(p + 0x90C), ((ObjV134 *)p)->m134(0x11), 0,
                          ((signed char *)(p + 0x3CA8))[*(int *)(p + 0x3C94)]);
        if (e != 0) {
            ((ObjV134 *)e)->m130();
        }
        ((float *)(p + 0x3CC8))[*(int *)(p + 0x3C94)] = 15.0f;
        ((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)] = 2;
    case 2:
        if ((unsigned char)func_0041D6B0((float *)(p + *(int *)(p + 0x3C94) * 4 + 0x3CC8), *(float *)(p + 0x10)) == 1) {
            ((signed char *)(p + 0x3CA8))[*(int *)(p + 0x3C94)]++;
            if (!(((signed char *)(p + 0x3CB8))[*(int *)(p + 0x3C94)] > ((signed char *)(p + 0x3CA8))[*(int *)(p + 0x3C94)])) {
                ((float *)(p + 0x3CC8))[*(int *)(p + 0x3C94)] = 60.0f;
                ((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)] = 3;
            } else {
                ((float *)(p + 0x3CC8))[*(int *)(p + 0x3C94)] = 6.0f;
                ((unsigned char *)(p + 0x3C98))[*(int *)(p + 0x3C94)] = 1;
            }
        }
        break;
    case 3:
        if ((unsigned char)func_0041D6B0((float *)(p + *(int *)(p + 0x3C94) * 4 + 0x3CC8), *(float *)(p + 0x10)) == 1) {
            func_00492E20(p, *(unsigned char *)(p + 0x3C94));
        }
        break;
    }
}

class ObjSt {
public:
    virtual void d0();
    virtual void d1();
    virtual int m10();
    virtual int m14();
    virtual int m18();
};

class AnimM4C {
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
    virtual void m4C(int);
};

extern "C" void func_004978A0(char *p, char *s) {
    if (*(unsigned char *)(p + 0x1D) == 3) {
        return;
    }
    *(signed char *)(p + 0x3C) = *(signed char *)(s + 0);
    *(signed char *)(p + 0x3D) = *(signed char *)(s + 1);
    *(signed char *)(p + 0x3E) = *(signed char *)(s + 2);
    *(float *)(p + 0x40) = *(float *)(s + 4);
    *(float *)(p + 0x44) = *(float *)(s + 8);
    *(float *)(p + 0x48) = *(float *)(s + 0xC);
    *(float *)(p + 0x4C) = *(float *)(s + 0x10);
    *(float *)(p + 0x50) = *(float *)(s + 0x14);
    *(signed char *)(p + 0x54) = *(signed char *)(s + 0x18);
    *(float *)(p + 0x58) = *(float *)(s + 0x1C);
    *(signed char *)(p + 0x5C) = *(signed char *)(s + 0x20);
    *(float *)(p + 0x60) = *(float *)(s + 0x24);
    *(float *)(p + 0x64) = *(float *)(s + 0x28);
    *(float *)(p + 0x68) = *(float *)(s + 0x2C);
    *(unsigned char *)(p + 0x6C) = *(unsigned char *)(s + 0x30);
    *(int *)(p + 0x70) = *(int *)(s + 0x34);
    *(float *)(p + 0x74) = *(float *)(s + 0x38);
    *(signed char *)(p + 0x78) = *(signed char *)(s + 0x3C);
    *(signed char *)(p + 0x79) = *(signed char *)(s + 0x3D);
    *(signed char *)(p + 0x7A) = *(signed char *)(s + 0x3E);
    if ((unsigned char)(*(ObjSt **)(p + 0xC))->m14() == 1) {
        ((SelfB4 *)p)->mB4(0x10);
    }
    switch ((unsigned char)(*(ObjSt **)(p + 0xC))->m10()) {
    case 0:
        (*(ObjSt **)(p + 0xC))->m18();
        break;
    case 1:
        switch ((unsigned char)(*(ObjSt **)(p + 0xC))->m18()) {
        case 0:
        case 1:
            break;
        default:
            ((SelfB4 *)p)->mB4(8);
            break;
        }
        break;
    }
    switch (*(unsigned char *)(p + 0x10C)) {
    case 0:
        (*(AnimM4C **)(p + 0xA8))->m4C(0);
        break;
    case 1:
        (*(AnimM4C **)(p + 0xA8))->m4C(1);
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

extern "C" void func_004279F0(char *p) {
    if (*(unsigned char *)(p + 0x48D) == 0) {
        ((ObjB40 *)(p + 0xB40))->m10(*(float *)(p + 0x10));
        if (*(unsigned char *)(p + 5) == 0 && (unsigned char)func_0041D6B0((float *)(p + 0x478), *(float *)(p + 0x10)) == 1 &&
            (unsigned char)func_00427DE0(p) == 1) {
            *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) | 0x2000;
            func_003FA3F0(p, 3);
            *(float *)(p + 0x478) = 120.0f - 20.0f * (float)(unsigned int)*(unsigned char *)(p + 0x3AB);
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_003F85D0(p);
        break;
    case 2:
        func_00427E30(p);
        break;
    case 3:
        func_00428040(p);
        break;
    case 4:
        func_00428160(p);
        break;
    case 6:
        func_003F8B60(p);
        break;
    case 7:
        func_004284F0(p);
        break;
    case 10:
        func_003F8E90(p);
        break;
    case 12:
        func_003F94A0(p);
        break;
    case 13:
        func_003F9700(p);
        break;
    }
    if (D_01CAFF38[0] == 0x191 && *(float *)(p + 0x58) < 1950.0f) {
        *(int *)(p + 0x3BC) = *(int *)(p + 0x3BC) & ~0x800;
        *(unsigned char *)(p + 0x489) = 0;
    }
    *(short *)(p + 0x484) = *(short *)(p + 0x90);
}

class ObjE8 {
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
    virtual int m2E8();
};

extern "C" int func_0048D140(char *p) {
    switch ((*(ObjE8 **)(p + 0x1130))->m2E8()) {
    case 0x5E:
    case 0x5F:
    case 0x60:
        break;
    case 0x61:
        *(unsigned char *)(p + 4) = 3;
        return 1;
    default:
        *(unsigned char *)(p + 4) = 3;
        return 1;
    case 0x63:
    case 0x62:
    case 0x90:
        break;
    }
    return 0;
}

extern "C" void func_00311730(char *p) {
    char *a;
    if (*(unsigned char *)(p + 0xD6) == 0) {
        func_00104C00(p + 0x2040, (int)func_002D9F00(*(char **)(p + 0xE0), *(unsigned char *)(p + 0xD4)), p + 0x2080);
    } else {
        a = *(char **)(p + 0xE0);
        if (*(unsigned char *)(a + 0x28A0) == 0) {
            switch (*(unsigned char *)(a + 0x28B0)) {
            case 1:
            case 4:
            case 5:
                break;
            default:
                func_00104C00(p + 0x2040, *(int *)(*(char **)(a + *(unsigned char *)(p + 0xD4) * 4 + 0x6C90) + 0x104), p + 0x2080);
                break;
            }
        }
    }
    ((ObjC8 *)(p + 0x4C0))->mC8(p + 0x2040);
}

extern "C" void func_0037E690(char *p) {
    int k = ((Sub130 *)(p + 0x130))->m80(((Sub130 *)(p + 0x130))->m7C());
    func_00505A70(p + 0x710, *(int *)(p + 0x750), 0, 0, p, *(int *)(p + 0x77CC), k,
                  *(float *)(k * 12 + (D_00568010 + *(int *)(p + 0x77CC) * 84)),
                  *(float *)(k * 12 + (D_00568014 + *(int *)(p + 0x77CC) * 84)),
                  *(float *)(k * 12 + (D_00568018 + *(int *)(p + 0x77CC) * 84)));
}

class ObjF1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

class Sub98 {
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
    virtual void m98(int);
};

static inline float cur_f1c() {
    char *g = *(char **)(*(char **)D_01CAFF0C + 4);
    if (g != 0) {
        ObjF1C *o = *(ObjF1C **)(g + 0x10);
        if (o != 0) {
            return o->m1C();
        }
    }
    return 0.0f;
}

static inline char *up(char *q, int off) {
    if (q != 0) {
        q += off;
    }
    return q;
}

extern "C" void func_002A4810(char *p, int a, int b, int c, int d) {
    *(int *)(p + 0x134) = a;
    *(int *)(p + 0x138) = b;
    *(int *)(p + 0x13C) = c;
    *(int *)(p + 0x140) = d;
    *(float *)(p + 0x144) = cur_f1c();
    *(short *)(p + 0x160) = 0;
    *(int *)(p + 0x164) = 0;
    *(int *)(p + 0xAA2C) = 0;
    *(int *)(p + 0xAB78) = 0;
    {
        char *b = up(p, 0x40);
        char *a = up(p, 0xD0);
        func_002A4910(p, p + 0x8930, a, b);
    }
    *(unsigned char *)(p + 0x14C) = 0;
    *(unsigned char *)(p + 0x14D) = 0;
    ((Sub98 *)(p + 0x130))->m98(D_00561ECC[0]);
}

class AnimBD {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void m18(int);
    virtual void d1C();
    virtual void d20();
    virtual void m24();
    virtual void d28();
    virtual int m2C();
    virtual int m30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void d40();
    virtual void d44();
    virtual void m48(int, char *);
};

class SelfBD {
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

class Obj1D8 {
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
    virtual int m34();
};

class Self1C4 {
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
    virtual short m1C4();
};

extern "C" void func_0036BDC0(char *p) {
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (*(unsigned char *)(p + 0x1C) == 1) {
            *(unsigned char *)(p + 0xCD) = 1;
            (*(AnimBD **)(p + 0xA8))->m18(0x50);
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 33.0f;
            *(float *)(p + 0xE8) = 16.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -1.5f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((SelfBD *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            *(int *)(p + 0x100) = 0;
            *(int *)(p + 0xD4) = 1;
        } else {
            (*(AnimBD **)(p + 0xA8))->m24();
        }
        break;
    case 1:
        *(float *)(p + 0x100) = *(float *)(p + 0x100) + *(float *)(p + 0xB0);
        if (*(float *)(p + 0x100) <= 40.0f) {
            (*(AnimBD **)(p + 0xA8))->m48(0x3E4, *(char **)(p + 0x10) + 0x10);
        } else {
            (*(AnimBD **)(p + 0xA8))->m48(0x384, *(char **)(p + 0x10) + 0x10);
        }
        ((SelfBD *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if ((*(AnimBD **)(p + 0xA8))->m30() != 0) {
                *(unsigned char *)(p + 0xCD) = 0;
                (*(AnimBD **)(p + 0xA8))->m18(0x39);
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
        if ((*(AnimBD **)(p + 0xA8))->m2C() != 0) {
            ((SelfBD *)p)->mEC(0xE);
        }
        (*(AnimBD **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_002CC150(char *p) {
    switch (*(unsigned char *)(p + 0x5AD)) {
    case 0:
        QCOPY(p + 0x60, D_005626A0);
        QCOPY(p + 0x70, D_005626B0);
        *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, p + 0x50);
        *(float *)(p + 0x84) = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
        *(unsigned char *)(p + 0x5AD) = *(unsigned char *)(p + 0x5AD) + 1;
    case 1:
        if ((unsigned char)(*(Obj1D8 **)(p + 0x1D8))->m34() == 1 && !(*(float *)(p + 0x2D68) < 90.0f)) {
            *(short *)(p + 0x90) = ((Self1C4 *)p)->m1C4();
            *(float *)(p + 0x84) = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
            func_00207480(3, 0x150, *(int *)(*(char **)(p + 0x4FC) + 0x104), 0x10);
            func_002CE2B0(p);
            return;
        }
        if (*(float *)(p + 0x64) <= 0.0f) {
            func_002CDEF0(p);
        }
        func_0034B9A0(p + 0x50, *(short *)(p + 0x90) + 0x8000, *(float *)(p + 0x68), *(float *)(p + 0x64), *(float *)(p + 0x10));
        *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78) * *(float *)(p + 0x10);
        *(float *)(p + 0x64) = *(float *)(p + 0x64) + *(float *)(p + 0x74) * *(float *)(p + 0x10);
        if (*(float *)(p + 0x68) < 0.5f) {
            *(float *)(p + 0x68) = 0.5f;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x5AD) < 2 && *(float *)(p + 0x64) < 0.0f && (unsigned char)func_002CFA00(p, 0.0f) == 1) {
        func_00207480(3, 0x14F, (int)(p + 0x1890), 0x10);
        func_002CDFB0(p);
    }
}

class S130b {
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
    virtual short m78(short, short);
};

static inline void cam4(char *p, float x, float z) {
    *(float *)(p + 0x150) = x;
    *(float *)(p + 0x154) = 0.0f;
    *(float *)(p + 0x158) = z;
    *(float *)(p + 0x15C) = 1.0f;
}

extern "C" void func_003A0840(char *p) {
    switch (*(short *)(p + 0xAC0)) {
    case 0x3F:
        if (*(unsigned char *)(p + 5) < 0x14) {
            if (*(unsigned char *)(p + 0x2DD4) == 0) {
                cam4(p, 2860.0f, 2200.0f);
            } else {
                cam4(p, 2170.0f, 2200.0f);
            }
        } else {
            cam4(p, 2500.0f, 3000.0f);
        }
        break;
    case 0x40:
        if (*(unsigned char *)(p + 5) < 0x14) {
            if (*(unsigned char *)(p + 0x2DE7) == 1) {
                if (*(unsigned char *)(p + 0x2DD4) == 0) {
                    cam4(p, 2860.0f, 2200.0f);
                } else {
                    cam4(p, 2170.0f, 2200.0f);
                }
            } else {
                if (*(unsigned char *)(p + 0x2DD4) == 0) {
                    cam4(p, 2862.0f, 4000.0f);
                } else {
                    cam4(p, 2133.0f, 4000.0f);
                }
            }
        } else if (*(unsigned char *)(p + 5) < 0x1E) {
            cam4(p, 2500.0f, 3000.0f);
        } else {
            ((S130b *)(p + 0x130))->m6C();
        }
        break;
    default:
        ((S130b *)(p + 0x130))->m6C();
        break;
    }
    ((S130b *)(p + 0x130))->m74();
    ((S130b *)(p + 0x130))->m70();
    *(short *)(p + 0x2DEC) = ((S130b *)(p + 0x130))->m78(*(short *)(p + 0x160), *(short *)(p + 0x90));
    func_003A0B30(p);
    func_003A0BD0(p);
    func_003A0AB0(p);
    *(short *)(p + 0x2DF2) = *(short *)(p + 0x2DF0);
    *(short *)(p + 0x2DF0) = (*(unsigned char *)(p + 0x2DF4) << 4) | *(unsigned char *)(p + 0x2DF5);
}
