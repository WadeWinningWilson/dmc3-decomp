/* Hand-matched C++ (virtual calls). The classes are synthetic: dummy virtuals put each method
 * at the vtable slot its call sites use (slot offset = 8 + 4 * index). */

class Anim {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
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
