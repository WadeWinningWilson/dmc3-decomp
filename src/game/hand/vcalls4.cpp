/* Hand-matched C++ (virtual calls), part 4: functions whose callee prototypes conflict
 * with declarations in vcalls.cpp / vcalls2.cpp / vcalls3.cpp (e.g. func_00131BA0 taking short). */

class Anim6 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void d14();
    virtual void d18();
    virtual void d1C();
    virtual void d20();
    virtual void m24();
    virtual float m28();
    virtual int m2C();
    virtual void d30();
    virtual void d34();
    virtual void d38();
    virtual void d3C();
    virtual void m40();
    virtual void m44();
    virtual void m48(int, char *);
};
class Self6 {
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
    virtual void mEC(int);
};
extern "C" char D_01DFABA0[];
extern "C" char D_01CAFF0C[];
extern "C" unsigned int D_01DF8810[];
extern "C" unsigned int D_01DF7E50[];
extern "C" void func_00207A90(unsigned int *);
extern "C" void func_00330BD0(char *, int, char *, int, int);
extern "C" float func_00131BA0(short);
extern "C" float func_00131C20(short);
extern "C" int func_00201770(char *, float *, float *, float *, int);

static inline unsigned int mt_466(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

static inline void cp4_466(float *d, float *s) { float a = s[0]; float b = s[1]; float c = s[2]; float e = s[3]; d[0] = a; d[1] = b; d[2] = c; d[3] = e; }

static inline unsigned char has55C(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return 0;
    return 1;
}

extern "C" void func_00466CE0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_00467CB0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 900.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 900.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004681F0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 600.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 600.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_00468730(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_00469970(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 100.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 104.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 105.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 110.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 114.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A34F0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A44C0(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 900.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 900.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A4A00(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 600.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 600.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A4F40(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 40.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 44.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 45.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 50.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 54.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}

extern "C" void func_004A6180(char *p) {
    float q[4] __attribute__((aligned(16)));
    float out[4] __attribute__((aligned(16)));
    float buf[16] __attribute__((aligned(16)));
    short a;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 100.0f)) {
            (*(Anim6 **)(p + 0xA8))->m40();
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 104.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 2;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 105.0f)) {
            ((Self6 *)p)->m6C();
            a = mt_466() & 0xFFFF;
            cp4_466((float *)(*(char **)(p + 0x10) + 0x10), (float *)(p + 0x20));
            *(float *)(*(char **)(p + 0x10) + 0x10) = *(float *)(*(char **)(p + 0x10) + 0x10) + 300.0f * func_00131BA0(a);
            *(float *)(*(char **)(p + 0x10) + 0x18) = *(float *)(*(char **)(p + 0x10) + 0x18) + 300.0f * func_00131C20(a);
            if (has55C()) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] = q[1] + 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, out, buf, 0) != 0) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = out[1];
                }
            }
            ((Self6 *)p)->m70();
            *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
            *(int *)(p + 0xD4) = 3;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 110.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 4;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim6 **)(p + 0xA8))->m28() < 114.0f)) {
            (*(Anim6 **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 5;
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    case 5:
        if ((*(Anim6 **)(p + 0xA8))->m2C() != 0) {
            (*(Anim6 **)(p + 0xA8))->m44();
            ((Self6 *)p)->mEC(0xE);
        }
        (*(Anim6 **)(p + 0xA8))->m24();
        break;
    }
}
