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
    virtual void d55();
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
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual float m7C();
    virtual int m80(float);
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
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
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
    virtual void d25();
    virtual void d26();
    virtual void d27();
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
    virtual void d186();
    virtual void d187();
    virtual void m2F8(int);
    virtual void d189();
    virtual void m300(int);
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
