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
extern "C" char D_005789A0[];
extern "C" int D_00578A50[];
extern "C" void func_00131700(float *, float *, float *);
extern "C" void func_00105230(float *, float *, float *);
extern "C" char *func_00207480(int, int, float *, int);

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

class O450 {
public:
    virtual void d8();
    virtual void dC();
    virtual void m10(int);
};

extern "C" O450 *func_002F7C10(int, int);
extern "C" char *func_00279290(char *);
extern "C" void func_001A5CC0(char *);
extern "C" void func_001A5B90(char *);
extern "C" void func_00138340(int);
extern "C" void func_001A2000(char *, int);
extern "C" void func_001A1E70(char *, int);
extern char D_00666750[];
extern "C" char D_0054F910[];
extern "C" void func_002E2800(char *, int, int);
extern "C" int func_001AED80(char *, int, int, int);
extern "C" void func_0024D9F0(char *, int, int, int, char *, char *, char *, char *, char *);
extern "C" void func_0028C200(char *, int, int, int, char *, char *, int);
extern "C" void func_00208050(int, int);
extern "C" void func_001A23D0(char *);
extern "C" void func_001A5C30(char *);
extern "C" int func_001A5DA0(char *);
extern "C" void func_001A5D70(char *, short);
extern "C" void func_00104C00(char *, char *, char *);

extern "C" void func_00450B00(char *p) {
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    int i;
    O450 *o;
    char *e;
    unsigned char *u;
    *(unsigned char *)(p + 0xEB) = 0;
    for (i = 0; i < 8; i++) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + i * 64 + 0x120) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(D_005789A0 + i * 16) : "memory");
        r[0] = 0.0f;
        r[1] = 6.283185f * (v[3] / 360.0f);
        r[2] = 0.0f;
        r[3] = 1.0f;
        v[3] = 1.0f;
        func_00131700((float *)(p + i * 64 + 0x120), (float *)(p + i * 64 + 0x120), r);
        func_00105230((float *)(p + i * 64 + 0x120), (float *)(p + i * 64 + 0x120), v);
        ((char **)(p + 0x320))[i] = func_00207480(1, 0x2E0, (float *)(p + i * 64 + 0x120), 0x40);
        e = ((char **)(p + 0x320))[i];
        e[0x7A3] = 0;
        e[0x7A4] = 1;
        u = ((unsigned char **)(p + 0x320))[i];
        u[0x9C] = 0x80;
        u[0x9D] = 0x80;
        u[0x9E] = 0x80;
        u[0x9B] = 2;
        ((float *)(p + 0xF0))[i] = 1000.0f;
    }
    for (i = 0; i < 8; i++) {
        o = func_002F7C10(D_00578A50[i], 0);
        if (o != 0) o->m10(0);
    }
    *(int *)(p + 0xC) |= 0x40;
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}

class S2D6 {
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
    virtual int m200(unsigned char *, float *, char *);
};

class A2D6 {
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
    virtual void mCC(char *);
};

class B2D6 {
public:
    virtual void d8();
    virtual void dC();
    virtual void m10();
};

extern "C" void func_002D6770(char *p) {
    unsigned char c;
    float x;
    char *w;
    if (*(unsigned char *)(p + 0x3904) == 0) {
        if ((unsigned char)((S2D6 *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x678) + 0x104) + 0x30) == 1) {
            func_001A5CC0(func_00279290(p + 0x780));
            func_001A5CC0(func_00279290(p + 0xD80));
            func_001A5CC0(func_00279290(p + 0x1380));
            func_00138340(c);
        } else {
            func_001A5B90(func_00279290(p + 0x780));
            func_001A5B90(func_00279290(p + 0xD80));
            func_001A5B90(func_00279290(p + 0x1380));
        }
    } else {
        func_001A5CC0(func_00279290(p + 0x780));
        func_001A5CC0(func_00279290(p + 0xD80));
        func_001A5CC0(func_00279290(p + 0x1380));
        func_00138340((int)*(float *)(p + 0x38EC));
    }
    w = p + 0x1EF0;
    ((A2D6 *)(p + 0x780))->mCC(w);
    ((B2D6 *)(p + 0x1980))->m10();
    ((A2D6 *)(p + 0xD80))->mCC(*(char **)(*(char **)(p + 0x6CC) + 0x104));
    ((B2D6 *)(p + 0x1A10))->m10();
    ((A2D6 *)(p + 0x1380))->mCC(w);
    if (*(unsigned char *)(p + 0x3900) == 0) {
        func_001A2000(func_00279290(p + 0x1380), 0);
    } else {
        ((B2D6 *)(p + 0x1AA0))->m10();
        func_001A1E70(func_00279290(p + 0x1380), 0);
    }
}

class O310 {
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
    virtual void mB0(int, char *);
};

static inline char *el310(char *o, int n) { if (n >= *(int *)(o + 0x1A0)) return 0; return *(char **)(o + 0x170) + n * 0x80; }

extern "C" void func_00310DA0(char *p) {
    unsigned int i;
    int a;
    ((O310 *)(p + 0xE40))->mB0(0, p + 0x12C);
    ((O310 *)(p + 0x1440))->mB0(0, p + 0x140);
    ((O310 *)(p + 0x1A40))->mB0(0, p + 0x154);
    for (i = 0; i < 3; i++) {
        func_002E2800(p + i * 0x70 + 0x170, 5, 5);
        el310(p + i * 0x70, 0)[0x78] = 1;
        el310(p + i * 0x70, 4)[0x78] = 1;
        *(float *)(p + i * 0x70 + 0x184) = 200.0f;
        *(float *)(p + i * 0x70 + 0x17C) = 0.97f;
    }
    func_0024D9F0(p + 0xB50, func_001AED80(D_00666750, 2, (unsigned short)(*(signed char *)(p + 0x46) * 15 + 1), 5), 0, 1, p + 0x20C0, p + 0x4C4, p + 0x100, p + 0x10, p + 0xC20);
    a = func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 6);
    func_0028C200(p + 0xC20, a, func_001AED80(D_00666750, 0, (unsigned short)*(signed char *)(p + 0x46), 7), 0, D_0054F910, p, 0);
    func_00208050(func_001AED80(D_00666750, 2, (unsigned short)(*(signed char *)(p + 0x46) * 15 + 1), 3), 1);
}

class S43A {
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
    virtual int m200(unsigned char *, float *, char *);
};

class A43A {
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
    virtual void mCC(char *);
};

class B43A {
public:
    virtual void d8();
    virtual void dC();
    virtual void m10();
};

extern "C" void func_0043AD70(char *p) {
    unsigned char c;
    float x;
    if ((unsigned char)((S43A *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x4C8) + 0x104) + 0x30) == 1) {
        func_001A5CC0(func_00279290(p + 0x580));
        func_001A5CC0(func_00279290(p + 0xB80));
        func_001A5CC0(func_00279290(p + 0x1180));
        func_001A5CC0(func_00279290(p + 0x1780));
        func_001A5CC0(func_00279290(p + 0x1D80));
        func_001A5CC0(func_00279290(p + 0x2380));
        func_001A5CC0(func_00279290(p + 0x2980));
        func_00138340(c);
    } else {
        func_001A5B90(func_00279290(p + 0x580));
        func_001A5B90(func_00279290(p + 0xB80));
        func_001A5B90(func_00279290(p + 0x1180));
        func_001A5B90(func_00279290(p + 0x1780));
        func_001A5B90(func_00279290(p + 0x1D80));
        func_001A5B90(func_00279290(p + 0x2380));
        func_001A5B90(func_00279290(p + 0x2980));
    }
    ((A43A *)(p + 0x580))->mCC(p + 0x3510);
    ((A43A *)(p + 0xB80))->mCC(p + 0x3510);
    ((A43A *)(p + 0x1180))->mCC(p + 0x3510);
    ((A43A *)(p + 0x1780))->mCC(p + 0x3510);
    ((A43A *)(p + 0x1D80))->mCC(p + 0x3510);
    ((A43A *)(p + 0x2380))->mCC(p + 0x3510);
    ((A43A *)(p + 0x2980))->mCC(p + 0x3510);
    ((B43A *)(p + 0x2F80))->m10();
    ((B43A *)(p + 0x3010))->m10();
}

class S40D {
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
    virtual int m200(unsigned char *, float *, char *);
};

class A40D {
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
    virtual void mCC(char *);
};

typedef struct { int v[16]; } M40D;
extern "C" int func_0034B800(char *, float *, short, int, float);
extern "C" void func_0034BA60(int, char *, signed char, int, int);
extern "C" void func_0039D0F0(char *, int);

extern "C" void func_0040DE20(char *p) {
    unsigned char c;
    float x;
    M40D m2;
    char m[64];
    unsigned char r;
    short n;
    r = ((S40D *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x410) + 0x104) + 0x30);
    if (r == 1) {
        func_001A5CC0(func_00279290(p + 0x4C0));
        func_00138340(c);
    } else {
        func_001A23D0(func_00279290(p + 0x4C0));
        func_001A5C30(func_00279290(p + 0x4C0));
    }
    m2 = *(M40D *)(p + 0x1E80);
    ((A40D *)(p + 0x4C0))->mCC((char *)&m2);
    if (*(unsigned char *)(p + 0x2620) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0xAC0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0xAC0));
            func_001A5C30(func_00279290(p + 0xAC0));
        }
        n = func_001A5DA0(func_00279290(p + 0x4C0));
        func_001A5D70(func_00279290(p + 0xAC0), n - 1);
        ((A40D *)(p + 0xAC0))->mCC(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2624)] + 0x104));
    }
    if (*(unsigned char *)(p + 0x2622) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0x16C0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0x16C0));
            func_001A5C30(func_00279290(p + 0x16C0));
        }
        func_00104C00(m, *(char **)(*(char **)(p + 0x428) + 0x104), p + 0x1F00);
        ((A40D *)(p + 0x16C0))->mCC(m);
    }
}

extern "C" void func_0041C5A0(char *p) {
    unsigned char c;
    float x;
    M40D m2;
    char m[64];
    unsigned char r;
    short n;
    r = ((S40D *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x410) + 0x104) + 0x30);
    if (r == 1) {
        func_001A5CC0(func_00279290(p + 0x4C0));
        func_00138340(c);
    } else {
        func_001A23D0(func_00279290(p + 0x4C0));
        func_001A5C30(func_00279290(p + 0x4C0));
    }
    m2 = *(M40D *)(p + 0x1E80);
    ((A40D *)(p + 0x4C0))->mCC((char *)&m2);
    if (*(unsigned char *)(p + 0x2620) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0xAC0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0xAC0));
            func_001A5C30(func_00279290(p + 0xAC0));
        }
        n = func_001A5DA0(func_00279290(p + 0x4C0));
        func_001A5D70(func_00279290(p + 0xAC0), n - 1);
        ((A40D *)(p + 0xAC0))->mCC(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2624)] + 0x104));
    }
    if (*(unsigned char *)(p + 0x2622) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0x16C0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0x16C0));
            func_001A5C30(func_00279290(p + 0x16C0));
        }
        func_00104C00(m, *(char **)(*(char **)(p + 0x428) + 0x104), p + 0x1F00);
        ((A40D *)(p + 0x16C0))->mCC(m);
    }
}

extern "C" void func_00283F80(char *p) {
    unsigned char c;
    float x;
    M40D m2;
    char m[64];
    unsigned char r;
    short n;
    r = ((S40D *)p)->m200(&c, &x, *(char **)(*(char **)(p + 0x410) + 0x104) + 0x30);
    if (r == 1) {
        func_001A5CC0(func_00279290(p + 0x4C0));
        func_00138340(c);
    } else {
        func_001A23D0(func_00279290(p + 0x4C0));
        func_001A5C30(func_00279290(p + 0x4C0));
    }
    m2 = *(M40D *)(p + 0x1E80);
    ((A40D *)(p + 0x4C0))->mCC((char *)&m2);
    if (*(unsigned char *)(p + 0x2620) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0xAC0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0xAC0));
            func_001A5C30(func_00279290(p + 0xAC0));
        }
        n = func_001A5DA0(func_00279290(p + 0x4C0));
        func_001A5D70(func_00279290(p + 0xAC0), n - 1);
        ((A40D *)(p + 0xAC0))->mCC(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2624)] + 0x104));
    }
    if (*(unsigned char *)(p + 0x2621) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0x10C0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0x10C0));
            func_001A5C30(func_00279290(p + 0x10C0));
        }
        n = func_001A5DA0(func_00279290(p + 0x4C0));
        func_001A5D70(func_00279290(p + 0x10C0), n - 1);
        ((A40D *)(p + 0x10C0))->mCC(*(char **)(((char **)(p + 0x404))[*(int *)(p + 0x2628)] + 0x104));
    }
    if (*(unsigned char *)(p + 0x2622) != 0) {
        if (r == 1) {
            func_001A5CC0(func_00279290(p + 0x16C0));
            func_00138340(c);
        } else {
            func_001A23D0(func_00279290(p + 0x16C0));
            func_001A5C30(func_00279290(p + 0x16C0));
        }
        func_00104C00(m, *(char **)(*(char **)(p + 0x428) + 0x104), p + 0x1F00);
        ((A40D *)(p + 0x16C0))->mCC(m);
    }
}

class A3C0 {
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
    virtual void m34(char *, char *);
    virtual void m38(char *, char *);
};

class X3C0 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void m14(int, char *, char *, A3C0 *);
};

class Y3C0 {
public:
    virtual void d8();
    virtual void dC();
    virtual void d10();
    virtual void m14(char *, A3C0 *, int);
};

extern "C" void func_003C0690(char *p, char *hit, A3C0 *att, char *pos) {
    float v[4] __attribute__((aligned(16)));
    char *q;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    switch (*(signed char *)(hit + 2)) {
    case 0:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)(p + 0x8EC) + 0x104) + 0x30) : "memory");
        if ((unsigned char)func_0034B800(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, v, *(short *)(p + 0x90) + 0x8000, 0x4000, 5000.0f) == 1) {
            func_0034BA60(*(int *)(hit + 0x34), pos, *(signed char *)(p + 0x46), 0, 1);
            ((X3C0 *)(p + 0x1B18))->m14(0, pos, hit, att);
            ((Y3C0 *)(p + 0x1B00))->m14(hit, att, *(int *)(p + 0x1AB0));
            if (p != 0) p += 0x40;
            att->m38(hit, p);
        } else {
            ((X3C0 *)(p + 0x1B18))->m14(2, pos, hit, att);
            q = p;
            if (q != 0) q += 0x40;
            att->m34(hit, q);
            func_0034BA60(8, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        }
        break;
    case 1:
        ((X3C0 *)(p + 0x1B18))->m14(2, pos, hit, att);
        func_0034BA60(6, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        break;
    }
}

class C392 {
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
    virtual unsigned int mB4();
};

class B392 {
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
    virtual void mC8(char *);
};

extern "C" C392 *func_002792A0(char *);
extern "C" void func_00207470(int, int, char *);
extern "C" void func_00105578(float *, float *, float);
extern "C" void func_00133890(char *, float *, float *);
extern "C" void func_001AF080(char *, int);
extern "C" void func_0013D5D0(char *);
extern "C" void func_0024DA80(char *, int, int);
extern "C" int func_0034A6E0(char *, int);

static inline bool on392(char *p) { if (*(unsigned char *)(p + 0x2DE1) == 1) return true; return false; }

extern "C" void func_00392670(char *p) {
    float d[4] __attribute__((aligned(16)));
    unsigned int n;
    unsigned int i;
    if (on392(p) == 1) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2D40), "r"(d) : "memory");
        d[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(d) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(d) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0x2D80), "r"(p + 0xF0) : "memory");
        n = func_002792A0(p + 0x4C0)->mB4();
        for (i = 0; i < n; i++) {
            if (((char **)(p + 0xCC0))[i] != 0 && *(char **)(((char **)(p + 0xCC0))[i] + 0x104) != 0) {
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0xCC0))[i] + 0x104) + 0x30), "r"(d) : "memory");
                *(float *)(*(char **)(((char **)(p + 0xCC0))[i] + 0x104) + 0x3C) = 1.0f;
            }
        }
    }
    if (*(unsigned char *)(p + 0x2F3C) != 1) {
        func_0039D0F0(p, 0);
        ((B392 *)(p + 0xD80))->mC8(p + 0x2E40);
    }
    if (*(unsigned char *)(p + 0x2F3C) != 0) {
        func_0039D0F0(p, 1);
        ((B392 *)(p + 0x1380))->mC8(p + 0x2E80);
    }
    switch (*(unsigned char *)(p + 0x2DD5)) {
    case 1:
        *(float *)(p + 0x2900) = *(float *)(p + 0x10);
        ((B392 *)(p + 0x1980))->mC8(*(char **)(*(char **)(p + 0xCF0) + 0x104));
        break;
    case 2:
        *(float *)(p + 0x29C0) = *(float *)(p + 0x10);
        ((B392 *)(p + 0x1F80))->mC8(*(char **)(*(char **)(p + 0xCF0) + 0x104));
        break;
    }
}

class C380 {
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
    virtual int mB4();
};

extern "C" void func_00380F70(char *p) {
    float m[16] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    int i;
    for (i = 0; i < ((C380 *)func_002792A0(p + 0x340))->mB4(); i++) {
        func_00104C00(*(char **)(((char **)(p + 0x9D0))[i] + 0x104), p + 0x1240, *(char **)(((char **)(p + 0x9D0))[i] + 0x100));
    }
    *(float *)(p + 0x1270) = *(float *)(p + 0x1270) + *(float *)(p + 0x1340);
    *(float *)(p + 0x1274) = *(float *)(p + 0x1274) + *(float *)(p + 0x1344);
    *(float *)(p + 0x1278) = *(float *)(p + 0x1278) + *(float *)(p + 0x1348);
    *(float *)(p + 0x1344) = *(float *)(p + 0x1344) + (-(0.005f * *(float *)(p + 0x10)) * (float)*(short *)(p + 0xB90) - 0.1f * *(float *)(p + 0x10));
    if (*(float *)(p + 0x1274) < 100.0f) {
        *(unsigned char *)(p + 5) = 4;
        func_0034BA60(0x2C, p + 0x1270, 0x29, 0, 1);
        if (*(short *)(p + 0xB90) % 2) func_00207470(3, 0x3B6, p + 0x1240);
        *(float *)(p + 0x145C) = 5.0f;
        *(float *)(p + 0x1460) = 0.0f;
        return;
    }
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105578(m, m, 0.0245436914f);
    func_00104C00(p + 0x1240, p + 0x1240, (char *)m);
    a[0] = *(float *)(p + 0x1260);
    a[1] = *(float *)(p + 0x1264) + 0.01f * *(float *)(p + 0x10);
    a[2] = *(float *)(p + 0x1268);
    a[3] = 0.0f;
    b[0] = *(float *)(p + 0x1250);
    b[1] = *(float *)(p + 0x1254);
    b[2] = *(float *)(p + 0x1258);
    func_00133890(p + 0x1240, a, b);
}

class O4426 {
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
    virtual void mD0();
};

extern "C" void func_004426B0(char *p) {
    int j;
    int i;
    if (*(int *)(p + 0xC4) != 0) func_001AF080(D_00666750, *(int *)(p + 0xC4));
    if (*(int *)(p + 0xC8) != 0) func_001AF080(D_00666750, *(int *)(p + 0xC8));
    if (*(int *)(p + 0xCC) != 0) func_001AF080(D_00666750, *(int *)(p + 0xCC));
    if (*(int *)(p + 0xD0) != 0) func_001AF080(D_00666750, *(int *)(p + 0xD0));
    if (*(int *)(p + 0xD4) != 0) func_001AF080(D_00666750, *(int *)(p + 0xD4));
    if (*(int *)(p + 0xD8) != 0) func_001AF080(D_00666750, *(int *)(p + 0xD8));
    if (*(int *)(p + 0xDC) != 0) func_001AF080(D_00666750, *(int *)(p + 0xDC));
    for (i = 0; i < 3; i++) ((O4426 *)(p + i * 0x600 + 0x100))->mD0();
    for (i = 0; i < 3; i++) ((O4426 *)(p + i * 0x600 + 0x1900))->mD0();
    ((O4426 *)(p + 0x1300))->mD0();
    if (*(unsigned char *)(p + 0xA94B) == 1) ((O4426 *)(p + 0x9700))->mD0();
    for (i = 0; i < 6; i++) {
        if (*(unsigned char *)(p + i * 8 + 0xA8AB) == 1) ((O4426 *)(p + i * 0x600 + 0x2B00))->mD0();
    }
    for (i = 0; i < 12; i++) {
        if (*(unsigned char *)(p + i * 8 + 0xA8DB) == 1) ((O4426 *)(p + i * 0x600 + 0x4F00))->mD0();
    }
    for (j = 0; j < *(int *)(p + 0x38); j++) func_0013D5D0(p + j * 0x10 + 0x3C);
}

class A34A {
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
    virtual void m140(int);
};

class B34A {
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
    virtual void m130();
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
    virtual void d200();
    virtual void m204();
};

extern "C" B34A *func_00472DB0(char *, int, char *, int, int, int);
extern "C" int func_0024E800(char *);
extern "C" void func_003B4B60(char *, int);
extern "C" void func_003B4F60(char *);
extern "C" void func_003B4D80(char *, int, int);
extern "C" void func_003B5910(char *, int, int);
extern "C" void func_003B4E70(char *, int, int);
extern "C" void func_003B51C0(char *);
extern "C" void func_003B6060(char *);
extern "C" char D_01CAFF3C[];
extern "C" unsigned char *D_005644E0[];
extern "C" float D_005644C0[];
extern "C" float func_003B5650(char *, int, int);
extern "C" unsigned char func_003B5780(char *, int);
extern "C" short func_003B5700(char *, int);
extern "C" void func_003B6140(char *);
extern "C" int func_003B5E50(char *);
extern "C" void func_003B61F0(char *);
extern "C" void func_003B61B0(char *);
extern "C" int func_003B5DC0(char *, char *, float, float);
extern "C" int func_00124EC0(int);
extern "C" void func_003B5B90(char *, int);
extern "C" void func_003B5FB0(char *);
extern "C" void func_003B6760(char *);
extern "C" void func_003B6640(char *);
extern "C" void func_003B66F0(char *);
extern "C" void func_003B5F30(char *);
extern "C" void func_003B6090(char *);
extern "C" void func_003B47F0(char *);
extern "C" void func_00105760(float *, float *, float);
extern "C" void func_00104B80(float *, float *, float *);
extern "C" int D_01CAFF38[];
extern "C" char D_00566160[];
extern "C" void func_001A1E10(char *);
extern "C" void func_001A2D00(char *, int);
extern "C" void func_00132540(float *, float *, float);
extern "C" float func_00132470(char *, char *);
extern "C" void func_003C0110(char *, int, float);
extern "C" void func_003C0190(char *, char *, float);
extern "C" float D_00569860[];
extern "C" float D_005697A0[];
extern "C" float D_005697D0[];
extern "C" float D_00569800[];
extern "C" void func_0024D6A0(char *, int, unsigned int);
extern "C" void func_003A9A80(char *);
extern "C" void func_0034B330(int);
extern "C" float func_0021CCF0(char *, float);
extern "C" int func_0024D6B0(char *, unsigned char *);
extern "C" int func_0021D320(char *, int, int, unsigned char, unsigned char);
extern "C" void func_003AA990(char *, int);
extern "C" void func_003AA8F0(char *);
extern "C" void func_002EF940(char *, char *);

extern "C" void func_0034A240(char *p, int k) {
    B34A *o;
    unsigned char a;
    unsigned char b;
    switch (k) {
    default:
        a = (*(unsigned char **)(p + 0x2300))[k * 2];
        b = (*(unsigned char **)(p + 0x2300))[k * 2 + 1];
        func_0024DA80(p + 0x2160, a, b);
        func_0024DA80(p + 0x2230, a, b);
        *(unsigned char *)(p + 0x2B41) = a;
        *(unsigned char *)(p + 0x2B42) = b;
        if (*(A34A **)(p + 0x2BC8) != 0) (*(A34A **)(p + 0x2BC8))->m140(k);
        break;
    case 0x3E8:
        o = func_00472DB0(p + 0x3B0, *(int *)(p + 0x3F0), p, *(int *)(*(char **)(p + 0x2BC8) + 0x19C), 0, func_0034A6E0(p, *(int *)(p + 0x3E0)));
        if (o != 0) {
            o->m130();
            *(B34A **)(p + 0x2CF0) = o;
        } else {
            *(B34A **)(p + 0x2CF0) = 0;
        }
        break;
    case 0x3E9:
        o = func_00472DB0(p + 0x3B0, *(int *)(p + 0x3F0), p, *(int *)(*(char **)(p + 0x2BC8) + 0x19C), 1, func_0034A6E0(p, *(int *)(p + 0x3E0)));
        if (o != 0) {
            o->m130();
            *(B34A **)(p + 0x2CF4) = o;
        } else {
            *(B34A **)(p + 0x2CF4) = 0;
        }
        break;
    case 0x3EA:
        o = func_00472DB0(p + 0x3B0, *(int *)(p + 0x3F0), p, *(int *)(*(char **)(p + 0x2BC8) + 0x19C), 1, func_0034A6E0(p, *(int *)(p + 0x3E0)));
        if (o != 0) {
            o->m130();
            *(B34A **)(p + 0x2CF8) = o;
        } else {
            *(B34A **)(p + 0x2CF8) = 0;
        }
        break;
    case 0x3EB:
        if (*(B34A **)(p + 0x2CF0) != 0) (*(B34A **)(p + 0x2CF0))->m204();
        if (*(B34A **)(p + 0x2CF4) != 0) (*(B34A **)(p + 0x2CF4))->m204();
        if (*(B34A **)(p + 0x2CF8) != 0) (*(B34A **)(p + 0x2CF8))->m204();
        break;
    }
}

class W4B8p {
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
    virtual int m1BC();
};

static inline unsigned char both_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_003B0540(char *p, int k) {
    float v;
    bool b;
    *(unsigned short *)(p + 0x20CC) |= 1;
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (!k) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0xB;
            func_0024DA80(p + 0x1D00, 0, 0xB);
            func_0024DA80(p + 0x1DD0, 0, 0xB);
        } else {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0xF;
            func_0024DA80(p + 0x1D00, 0, 0xF);
            func_0024DA80(p + 0x1DD0, 0, 0xF);
        }
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(unsigned char *)(p + 0x21C4) = 0;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        func_003B5910(p, 0xFFFF, 1);
        if (k) {
            func_003B4E70(p, 0x8000, 1);
        }
        break;
    case 1:
        if (both_done(p) == 1) {
            if (!k) {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0xC;
                func_0024DA80(p + 0x1D00, 0, 0xC);
                func_0024DA80(p + 0x1DD0, 0, 0xC);
            } else {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x10;
                func_0024DA80(p + 0x1D00, 0, 0x10);
                func_0024DA80(p + 0x1DD0, 0, 0x10);
            }
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            *(int *)(p + 0x60) = 0;
            *(float *)(p + 0x64) = 30.0f;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(float *)(p + 0x74) = -1.0f;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
            *(unsigned char *)(p + 0x21C7) = 0;
            *(unsigned char *)(p + 0x21C8) = 0;
            *(unsigned char *)(p + 0x2219) = 0;
            *(unsigned char *)(p + 0x2218) = 0;
        }
        break;
    case 2:
        if (*(float *)(p + 0x64) <= 0.0f) {
            if (!k) {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0xD;
                func_0024DA80(p + 0x1D00, 0, 0xD);
                func_0024DA80(p + 0x1DD0, 0, 0xD);
            } else {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x11;
                func_0024DA80(p + 0x1D00, 0, 0x11);
                func_0024DA80(p + 0x1DD0, 0, 0x11);
            }
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            *(int *)(p + 0x70) = 0;
            *(float *)(p + 0x74) = -1.0f;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(float *)(p + 0x21A4) = -20.0f;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
        }
        break;
    case 3:
        if ((unsigned char)((W4B8p *)p)->m1BC() == 1) {
            if (!k) {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0xE;
                func_0024DA80(p + 0x1D00, 0, 0xE);
                func_0024DA80(p + 0x1DD0, 0, 0xE);
            } else {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x12;
                func_0024DA80(p + 0x1D00, 0, 0x12);
                func_0024DA80(p + 0x1DD0, 0, 0x12);
            }
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
            *(int *)(p + 0x60) = 0;
            *(int *)(p + 0x64) = 0;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(int *)(p + 0x74) = 0;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
            *(unsigned char *)(p + 0x21C4) = 1;
            *(unsigned char *)(p + 0x21C7) = 1;
            *(unsigned char *)(p + 0x21C8) = 1;
            *(unsigned char *)(p + 0x2219) = 1;
            *(unsigned char *)(p + 0x2218) = 1;
        }
        break;
    case 4:
        if (both_done(p) == 1) {
            if ((*(unsigned char *)(p + 0x2216) != 0) == 1) {
                *(unsigned char *)(p + 0x2216) = 0;
                func_003B4B60(p, 0x1D);
            } else {
                func_003B4B60(p, 2);
            }
        } else if ((*(unsigned char *)(p + 0x2216) != 0) == 0) {
            func_003B4D80(p, 0x800, 0);
        }
        break;
    }
    if (*(unsigned char *)(p + 6) >= 2 && *(unsigned char *)(p + 6) < 4) {
        b = false;
        v = (*(float *)(p + 0x2208) - 250.0f) / 10.0f + 5.0f;
        if (v < 5.0f) {
            v = 5.0f;
        } else if (!(v <= 30.0f)) {
            v = 30.0f;
        }
        if (!k) {
            if (*(unsigned char *)(p + 0x220C) & 1) {
                b = true;
            }
        } else if ((unsigned char)((*(unsigned char *)(p + 0x220C) != 0) ^ 1)) {
            b = true;
        } else {
            v *= -1.0f;
        }
        if (!b) {
            *(float *)(p + 0x68) = v;
            *(float *)(p + 0x78) = v;
            *(float *)(p + 0x21A8) = v;
        } else {
            *(float *)(p + 0x68) = 5.0f;
            *(float *)(p + 0x78) = 5.0f;
            *(float *)(p + 0x21A8) = 5.0f;
        }
        func_003B4F60(p);
        func_003B51C0(p);
    }
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

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

extern "C" void func_003B24B0(char *p) {
    float d[4] __attribute__((aligned(16)));
    float h;
    unsigned char *t;
    bool b;
    *(unsigned short *)(p + 0x20CC) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x2B;
        func_0024DA80(p + 0x1D00, 0, 0x2B);
        func_0024DA80(p + 0x1DD0, 0, 0x2B);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        func_003B6060(p);
        *(int *)(p + 0x2200) = *(int *)(p + 0x2204);
        *(float *)(p + 0x2208) = func_003B5650(p, *(int *)(p + 0x2200), 0);
        *(unsigned char *)(p + 0x220C) = func_003B5780(p, *(int *)(p + 0x2200));
        *(short *)(p + 0x220E) = func_003B5700(p, *(int *)(p + 0x2200));
        func_003B5910(p, 0xFFFF, 1);
        func_003B6140(p);
        t = D_005644E0[(unsigned char)D_01CAFF3C[0]];
        *(unsigned char *)(p + 0x2214) = t[func_003B5E50(p)];
        *(unsigned char *)(p + 0x2230) = 1;
        *(float *)(p + 0x20C4) = D_005644C0[(unsigned char)D_01CAFF3C[0]];
    case 1:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2C;
            func_0024DA80(p + 0x1D00, 0, 0x2C);
            func_0024DA80(p + 0x1DD0, 0, 0x2C);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 2:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2D;
            func_0024DA80(p + 0x1D00, 0, 0x2D);
            func_0024DA80(p + 0x1DD0, 0, 0x2D);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 3:
        break;
    case 10:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x33;
            func_0024DA80(p + 0x1D00, 0, 0x33);
            func_0024DA80(p + 0x1DD0, 0, 0x33);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 11:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 34.0f)) {
            func_003B61F0(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 12:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 36.0f)) {
            func_003B61B0(p);
            if (*(unsigned char *)(p + 0x2214) == 0) {
                *(unsigned char *)(p + 5) = 0x1E;
            } else {
                *(unsigned char *)(p + 5) = 0x14;
            }
        }
        break;
    case 20:
        if (*(unsigned char *)(p + 0x2230) == 0 || *(int *)(p + 0x21F8) == 0) {
            func_003B4B60(p, 2);
            *(int *)(p + 0x21F8) = 0;
            *(unsigned char *)(p + 0x2230) = 0;
            return;
        }
        if (both_done(p) == 1 && *(short *)(p + 0x21C2) != 0) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0;
            func_0024DA80(p + 0x1D00, 0, 0);
            func_0024DA80(p + 0x1DD0, 0, 0);
        }
        if (*(unsigned char *)(p + 0x2230) == 2) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            if ((int)*(unsigned char *)(p + 0x2214) > 0) {
                *(unsigned char *)(p + 0x2214) = *(unsigned char *)(p + 0x2214) - 1;
            }
        }
        break;
    case 21:
        if (*(unsigned char *)(p + 0x2230) == 0 || *(int *)(p + 0x21F8) == 0) {
            func_003B4B60(p, 2);
            *(int *)(p + 0x21F8) = 0;
            *(unsigned char *)(p + 0x2230) = 0;
            return;
        }
        if (both_done(p) == 1 && *(short *)(p + 0x21C2) != 0) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0;
            func_0024DA80(p + 0x1D00, 0, 0);
            func_0024DA80(p + 0x1DD0, 0, 0);
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(*(char **)(p + 0x21F8) + 0x50) : "memory");
        h = (float)func_00124EC0((int)*(float *)(*(char **)(p + 0x21F8) + 0x68));
        __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "r"(p + 0x50) : "memory");
        if (!(200.0f * *(float *)(p + 0x20E0) + 14.0f * h < (float)func_00124EC0((int)fsqrt(d[0] * d[0] + d[2] * d[2])))) {
            b = false;
            if (*(short *)(p + 0x21C2) == 0x2F) {
                if (!(((AnimF *)(p + 0x704))->m28(0) < 50.0f)) {
                    b = true;
                }
            } else {
                b = true;
            }
            if (b) {
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x2F;
                func_0024DA80(p + 0x1D00, 0, 0x2F);
                func_0024DA80(p + 0x1DD0, 0, 0x2F);
                *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            }
        }
        break;
    case 22:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 50.0f)) {
            if (*(unsigned char *)(p + 0x2214) == 0) {
                *(unsigned char *)(p + 5) = 0x1E;
            } else {
                *(unsigned char *)(p + 5) = 0x14;
            }
        }
        break;
    case 30:
        if ((*(unsigned char *)(p + 0x2230) == 0 || *(int *)(p + 0x21F8) == 0) && (both_done(p) == 1 || *(short *)(p + 0x21C2) == 0)) {
            func_003B4B60(p, 2);
            *(int *)(p + 0x21F8) = 0;
            *(unsigned char *)(p + 0x2230) = 0;
            return;
        }
        if (both_done(p) == 1 && *(short *)(p + 0x21C2) != 0) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0;
            func_0024DA80(p + 0x1D00, 0, 0);
            func_0024DA80(p + 0x1DD0, 0, 0);
        }
        break;
    }
    func_003B4F60(p);
    if (*(unsigned char *)(p + 5) >= 1 && *(unsigned char *)(p + 5) < 4) {
        if ((unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x2E;
            func_0024DA80(p + 0x1D00, 0, 0x2E);
            func_0024DA80(p + 0x1DD0, 0, 0x2E);
            *(unsigned char *)(p + 5) = 10;
        }
    }
}

extern "C" void func_003B0C70(char *p, unsigned char k) {
    float v;
    bool b;
    *(unsigned short *)(p + 0x20CC) |= 1;
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(int *)(p + 0x2200) = 6;
        switch (k) {
        case 0:
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0xB;
            func_0024DA80(p + 0x1D00, 0, 0xB);
            func_0024DA80(p + 0x1DD0, 0, 0xB);
            break;
        case 1:
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0xF;
            func_0024DA80(p + 0x1D00, 0, 0xF);
            func_0024DA80(p + 0x1DD0, 0, 0xF);
            break;
        case 2:
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 7;
            func_0024DA80(p + 0x1D00, 0, 7);
            func_0024DA80(p + 0x1DD0, 0, 7);
            break;
        }
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 0;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        if (k != 2) {
            func_003B5910(p, 0xFFFF, 1);
        }
        if (k == 1) {
            func_003B4E70(p, 0x8000, 1);
        }
        break;
    case 1:
        if (both_done(p) == 1) {
            switch (k) {
            case 0:
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0xC;
                func_0024DA80(p + 0x1D00, 0, 0xC);
                func_0024DA80(p + 0x1DD0, 0, 0xC);
                break;
            case 1:
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 0x10;
                func_0024DA80(p + 0x1D00, 0, 0x10);
                func_0024DA80(p + 0x1DD0, 0, 0x10);
                break;
            case 2:
                *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
                *(short *)(p + 0x21C2) = 8;
                func_0024DA80(p + 0x1D00, 0, 8);
                func_0024DA80(p + 0x1DD0, 0, 8);
                break;
            }
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(int *)(p + 0x60) = 0;
            *(float *)(p + 0x64) = 30.0f;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(float *)(p + 0x74) = -1.0f;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
            if (k == 2) {
                *(float *)(p + 0x20C4) = 20.0f;
            } else {
                *(float *)(p + 0x20C4) = 300.0f;
            }
            *(unsigned char *)(p + 0x21C7) = 0;
            *(unsigned char *)(p + 0x21C8) = 0;
            *(unsigned char *)(p + 0x2219) = 0;
            *(unsigned char *)(p + 0x2218) = 0;
        }
        break;
    case 2:
        if (k == 2) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            break;
        }
        if (*(float *)(p + 0x64) <= 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x70) = 0.0f;
            *(float *)(p + 0x74) = -1.0f;
            *(float *)(p + 0x78) = 0.0f;
            *(float *)(p + 0x7C) = 0.0f;
            *(float *)(p + 0x21A0) = 0.0f;
            *(float *)(p + 0x21A4) = -8.0f;
            *(float *)(p + 0x21A8) = 0.0f;
            *(float *)(p + 0x21AC) = 0.0f;
        }
    case 3:
        b = false;
        if (k == 2) {
            if ((unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 1) {
                b = true;
            }
        } else if (*(float *)(p + 0x2208) <= 50.0f || (unsigned char)func_003B5DC0(p, p + 0x20C4, 1.0f, 0.0f) == 1) {
            b = true;
        }
        if (b) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x14;
            func_0024DA80(p + 0x1D00, 0, 0x14);
            func_0024DA80(p + 0x1DD0, 0, 0x14);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x64) = -0.5f;
        } else if ((unsigned char)((W4B8p *)p)->m1BC() == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x13;
            func_0024DA80(p + 0x1D00, 0, 0x13);
            func_0024DA80(p + 0x1DD0, 0, 0x13);
            *(unsigned char *)(p + 5) = 6;
            func_003B5B90(p, 6);
        }
        break;
    case 4:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x15;
            func_0024DA80(p + 0x1D00, 0, 0x15);
            func_0024DA80(p + 0x1DD0, 0, 0x15);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(float *)(p + 0x64) = -10.0f;
            *(float *)(p + 0x74) = -8.0f;
            *(float *)(p + 0x21A4) = -30.0f;
        }
        break;
    case 5:
        if ((unsigned char)((W4B8p *)p)->m1BC() == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0x16;
            func_0024DA80(p + 0x1D00, 0, 0x16);
            func_0024DA80(p + 0x1DD0, 0, 0x16);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            *(int *)(p + 0x60) = 0;
            *(int *)(p + 0x64) = 0;
            *(int *)(p + 0x68) = 0;
            *(int *)(p + 0x6C) = 0;
            *(int *)(p + 0x70) = 0;
            *(int *)(p + 0x74) = 0;
            *(int *)(p + 0x78) = 0;
            *(int *)(p + 0x7C) = 0;
            *(int *)(p + 0x21A0) = 0;
            *(int *)(p + 0x21A4) = 0;
            *(int *)(p + 0x21A8) = 0;
            *(int *)(p + 0x21AC) = 0;
        }
        break;
    case 6:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 35.0f)) {
            func_003B5FB0(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 7:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 40.0f)) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_003B5B90(p, 6);
            func_003B6760(p);
            func_003B6640(p);
            func_003B66F0(p);
        }
        break;
    case 8:
        if (both_done(p) == 1) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 6;
            func_0024DA80(p + 0x1D00, 0, 6);
            func_0024DA80(p + 0x1DD0, 0, 6);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 9:
        if (!(((AnimF *)(p + 0x704))->m28(0) < 10.0f)) {
            func_003B5F30(p);
            func_003B6060(p);
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        }
        break;
    case 10:
        if (both_done(p) == 1) {
            func_003B4B60(p, 2);
            func_003B6090(p);
            *(unsigned char *)(p + 0x21C9) = 0;
            func_003B47F0(p);
            *(unsigned char *)(p + 0x21CC) = 0;
        }
        break;
    }
    if (k != 2 && (*(unsigned char *)(p + 5) == 2 || *(unsigned char *)(p + 5) == 3)) {
        b = false;
        v = (*(float *)(p + 0x2208) - 250.0f) / 10.0f + 10.0f;
        if (v < 10.0f) {
            v = 10.0f;
        } else if (!(v <= 20.0f)) {
            v = 20.0f;
        }
        switch (k) {
        case 0:
            if (*(unsigned char *)(p + 0x220C) & 1) {
                b = true;
            }
            break;
        case 1:
            if ((unsigned char)((*(unsigned char *)(p + 0x220C) != 0) ^ 1)) {
                b = true;
            } else {
                v *= -1.0f;
            }
            break;
        }
        if (!b) {
            *(float *)(p + 0x68) = v;
            *(float *)(p + 0x78) = v;
            *(float *)(p + 0x21A8) = v;
        } else {
            *(float *)(p + 0x68) = 10.0f;
            *(float *)(p + 0x78) = 10.0f;
            *(float *)(p + 0x21A8) = 10.0f;
        }
        func_003B4F60(p);
    }
    if (*(unsigned char *)(p + 5) >= 2 && *(unsigned char *)(p + 5) < 6) {
        func_003B51C0(p);
    }
}

extern "C" bool func_003A0F60(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    unsigned char f = 0;
    bool r;
    if (*(float *)(p + 0x70) != 0.0f) {
        *(float *)(p + 0x60) = *(float *)(p + 0x60) + *(float *)(p + 0x70);
        if (!(*(float *)(p + 0x70) <= 0.0f)) {
            if (!(*(float *)(p + 0x60) < *(float *)(p + 0x2E00))) {
                *(float *)(p + 0x60) = *(float *)(p + 0x2E00);
                f |= 1;
            }
        } else if (*(float *)(p + 0x60) <= *(float *)(p + 0x2E00)) {
            *(float *)(p + 0x60) = *(float *)(p + 0x2E00);
            f |= 1;
        }
    } else {
        f |= 1;
    }
    if (*(float *)(p + 0x78) != 0.0f) {
        *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78);
        if (!(*(float *)(p + 0x78) <= 0.0f)) {
            if (!(*(float *)(p + 0x68) < *(float *)(p + 0x2E08))) {
                *(float *)(p + 0x68) = *(float *)(p + 0x2E08);
                f |= 2;
            }
        } else if (*(float *)(p + 0x68) <= *(float *)(p + 0x2E08)) {
            *(float *)(p + 0x68) = *(float *)(p + 0x2E08);
            f |= 2;
        }
    } else {
        f |= 2;
    }
    if (*(float *)(p + 0x60) == 0.0f && *(float *)(p + 0x68) == 0.0f) {
        return 1;
    }
    v[0] = *(float *)(p + 0x60) * *(float *)(p + 0x10);
    v[1] = 0.0f;
    v[2] = *(float *)(p + 0x68) * *(float *)(p + 0x10);
    v[3] = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105760(m, m, a);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    if (f == 3) {
        r = true;
    } else {
        r = false;
    }
    return r;
}

extern "C" bool func_003B4FA0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    unsigned char f = 0;
    bool r;
    if (*(float *)(p + 0x70) != 0.0f) {
        *(float *)(p + 0x60) = *(float *)(p + 0x60) + *(float *)(p + 0x70);
        if (!(*(float *)(p + 0x70) <= 0.0f)) {
            if (!(*(float *)(p + 0x60) < *(float *)(p + 0x21A0))) {
                *(float *)(p + 0x60) = *(float *)(p + 0x21A0);
                f |= 1;
            }
        } else if (*(float *)(p + 0x60) <= *(float *)(p + 0x21A0)) {
            *(float *)(p + 0x60) = *(float *)(p + 0x21A0);
            f |= 1;
        }
    } else {
        f |= 1;
    }
    if (*(float *)(p + 0x78) != 0.0f) {
        *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78);
        if (!(*(float *)(p + 0x78) <= 0.0f)) {
            if (!(*(float *)(p + 0x68) < *(float *)(p + 0x21A8))) {
                *(float *)(p + 0x68) = *(float *)(p + 0x21A8);
                f |= 2;
            }
        } else if (*(float *)(p + 0x68) <= *(float *)(p + 0x21A8)) {
            *(float *)(p + 0x68) = *(float *)(p + 0x21A8);
            f |= 2;
        }
    } else {
        f |= 2;
    }
    if (*(float *)(p + 0x60) == 0.0f && *(float *)(p + 0x68) == 0.0f) {
        return 1;
    }
    v[0] = *(float *)(p + 0x60) * *(float *)(p + 0x10);
    v[1] = 0.0f;
    v[2] = *(float *)(p + 0x68) * *(float *)(p + 0x10);
    v[3] = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105760(m, m, a);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    if (f == 3) {
        r = true;
    } else {
        r = false;
    }
    return r;
}

class ObjUI {
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
    virtual void z28();
    virtual void z29();
    virtual void z30();
    virtual void z31();
    virtual void z32();
    virtual void z33();
    virtual void z34();
    virtual void z35();
    virtual void z36();
    virtual void z37();
    virtual void z38();
    virtual void z39();
    virtual void z40();
    virtual void z41();
    virtual void z42();
    virtual void z43();
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
    virtual void z64();
    virtual void z65();
    virtual void z66();
    virtual void z67();
    virtual void z68();
    virtual void z69();
    virtual void z70();
    virtual void z71();
    virtual void z72();
    virtual void z73();
    virtual void z74();
    virtual void z75();
    virtual void z76();
    virtual void z77();
    virtual void z78();
    virtual void z79();
    virtual void z80();
    virtual void z81();
    virtual void z82();
    virtual void z83();
    virtual void z84();
    virtual void z85();
    virtual void z86();
    virtual void z87();
    virtual void z88();
    virtual void z89();
    virtual void z90();
    virtual void z91();
    virtual void z92();
    virtual void z93();
    virtual void z94();
    virtual void z95();
    virtual void z96();
    virtual void z97();
    virtual void z98();
    virtual void z99();
    virtual void z100();
    virtual void z101();
    virtual void z102();
    virtual void z103();
    virtual void z104();
    virtual void z105();
    virtual void z106();
    virtual void z107();
    virtual void z108();
    virtual void z109();
    virtual void z110();
    virtual void z111();
    virtual void z112();
    virtual void z113();
    virtual void z114();
    virtual void z115();
    virtual void z116();
    virtual void z117();
    virtual void z118();
    virtual void z119();
    virtual void z120();
    virtual void z121();
    virtual void z122();
    virtual void z123();
    virtual void z124();
    virtual void z125();
    virtual void z126();
    virtual void z127();
    virtual void z128();
    virtual void z129();
    virtual void z130();
    virtual void z131();
    virtual void z132();
    virtual void z133();
    virtual void z134();
    virtual void z135();
    virtual void z136();
    virtual void z137();
    virtual void z138();
    virtual void z139();
    virtual void z140();
    virtual void z141();
    virtual void z142();
    virtual void z143();
    virtual void z144();
    virtual void z145();
    virtual void z146();
    virtual void z147();
    virtual void z148();
    virtual void z149();
    virtual void z150();
    virtual void z151();
    virtual void z152();
    virtual void z153();
    virtual void z154();
    virtual void z155();
    virtual void z156();
    virtual void z157();
    virtual void z158();
    virtual void z159();
    virtual void z160();
    virtual void z161();
    virtual void z162();
    virtual void z163();
    virtual void z164();
    virtual void z165();
    virtual void z166();
    virtual void z167();
    virtual void z168();
    virtual void z169();
    virtual void z170();
    virtual void z171();
    virtual void z172();
    virtual void z173();
    virtual void z174();
    virtual void z175();
    virtual void z176();
    virtual void z177();
    virtual void z178();
    virtual void z179();
    virtual void z180();
    virtual void z181();
    virtual void z182();
    virtual void z183();
    virtual void z184();
    virtual void z185();
    virtual void m2F0(int);
    virtual void z187();
    virtual void z188();
    virtual void z189();
    virtual void z190();
    virtual void m304(int);
};

static inline int gray4(unsigned char c) { return (c << 24) | (c << 16) | (c << 8) | c; }

extern "C" void func_003BF9C0(char *p) {
    float d[4] __attribute__((aligned(16)));
    char *o;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 6) = 0;
        switch (D_01CAFF38[0]) {
        case 0xCD:
            *(char **)(p + 0x2754) = D_00566160 + *(unsigned char *)(p + 0x2750) * 32;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x2740), "r"(*(char **)(p + 0x2754) + 0x10) : "memory");
            break;
        }
        *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x134) + 0x20);
        func_001A1E10(func_00279290(p + 0x9C0));
        func_001A1E70(func_00279290(p + 0xFC0), 0);
        func_001A1E70(func_00279290(p + 0xFC0), 1);
        *(float *)(p + 0x1BB4) = 1.0f;
        *(float *)(p + 0x1BB8) = 1.0f;
        *(unsigned char *)(p + 0x1BC8) = 0;
        o = func_00279290(p + 0x9C0);
        func_001A2D00(o, gray4(*(unsigned char *)(p + 0x1BC8)));
    case 1:
        if (*(unsigned char *)(p + 0x1BC8) < 0xFF) {
            *(unsigned char *)(p + 0x1BC8) = *(unsigned char *)(p + 0x1BC8) + 1;
        }
        o = func_00279290(p + 0x9C0);
        func_001A2D00(o, gray4(*(unsigned char *)(p + 0x1BC8)));
        switch (*(unsigned char *)(p + 6)) {
        case 0:
            if ((unsigned char)func_0024E800(p + 0x1680) == 1) {
                *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
                func_001A1E10(func_00279290(p + 0xFC0));
                func_001A2D00(func_00279290(p + 0x9C0), 0xFFFFFF);
            }
            break;
        case 1:
            break;
        }
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x2740), "r"(p + 0x50) : "memory");
        func_00132540(d, d, 3.0f);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(d) : "memory");
        if (func_00132470(p + 0x50, p + 0x2740) < 10.0f) {
            if (**(signed char **)(p + 0x2754) != -1) {
                (*(unsigned char *)(p + 0x2750))++;
                *(char **)(p + 0x2754) = D_00566160 + (unsigned char)*(unsigned char *)(p + 0x2750) * 32;
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x2740), "r"(*(char **)(p + 0x2754) + 0x10) : "memory");
            } else {
                ((ObjUI *)p)->m304(0xD);
                *(unsigned char *)(p + 0x2750) = 0;
                return;
            }
        }
        func_003C0110(p, 0x200, 5.0f);
        func_003C0190(p, p + 0x2740, 200.0f);
        break;
    }
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
extern "C" short D_005643E0[];
extern "C" int *D_00564550[];
extern "C" int func_003B5A20(char *);
extern "C" int func_003B5A00(char *, short);
extern "C" float func_003B57C0(char *, int);
extern "C" unsigned char func_003B58D0(char *, int);
extern "C" short func_003B5850(char *, int);
extern "C" char D_00549910[];
extern "C" void func_001AD100(char *);
extern "C" void func_0028B610(char *);
extern "C" void func_003C95E0(char *);
extern "C" int func_0028B8E0(char *);
extern "C" int func_0028B620(char *);
extern "C" void func_0028BA90(char *, char *, char *, unsigned char);
extern "C" void func_003023F0(char *);
extern "C" void func_0028BF50(char *);
extern "C" int D_005688C0[];
extern "C" float *D_005688A0[];
extern "C" float D_00568510[];
extern "C" void func_003D0790(char *, unsigned char);
extern "C" char D_00645A30[];
extern "C" void func_001AAD30(char *);
extern "C" char *func_001B0FD0(char *, int, int);
extern "C" char *func_001B1610(int, char *);
extern "C" void func_0044C9E0(char *);
extern "C" void func_001B1440(char *, char *, char *);
extern "C" void func_001959E0(char *, int, char *);
extern "C" void func_001B1430(char *, int);
extern "C" void func_0013D240(char *, int);

extern "C" void func_003A9700(char *p) {
    unsigned char c;
    unsigned char k;
    unsigned char m;
    unsigned char b;
    char *o;
    unsigned char a;
    int n;
    unsigned char d;
    k = 0x14;
    m = 0;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0024D6A0(o, 0, (unsigned int)D_00569860[*(unsigned char *)(p + 0x4E18) * (*(unsigned char *)(p + 0x4E17) * 3)]);
        *(float *)(p + 0x517C) = D_005697A0[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)];
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        func_003A9A80(p);
        func_0034B330(1);
        D_005BC1A8->m18(0x18FF80FF, 0x28);
    case 1:
        if (!(func_0021CCF0(o, *(float *)(p + 0x10) * D_005697D0[*(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18)]) <= 0.0f)) {
            n = *(unsigned char *)(p + 0x4E17) * 3 + *(unsigned char *)(p + 0x4E18);
            *(float *)(p + 0x50D4) = *(float *)(p + 0x50D4) + *(float *)(p + 0x10) * (D_005697D0[n] * D_00569800[n]);
            if (!(*(float *)(p + 0x50D4) <= *(float *)(p + 0x5168))) {
                *(float *)(p + 0x50D4) = *(float *)(p + 0x5168);
            }
        }
        a = 0;
        b = 0;
        d = 0;
        if ((unsigned char)func_0024D6B0(o, &c) == 1) {
            a = 1;
            k = 0x15;
            m = 0;
        } else {
            *(float *)(p + 0x517C) = *(float *)(p + 0x517C) - *(float *)(p + 0x10);
            if (*(float *)(p + 0x517C) < 0.0f) {
                b = 1;
                k = 0x16;
                m = b;
            }
        }
        if ((unsigned char)func_0021D320(o, 2, *(unsigned char *)(p + 0x5162), m, k) == 0) {
            d = 1;
        }
        if (a == 1) {
            *(unsigned char *)(p + 0x5189) = 1;
            *(unsigned char *)(p + 0x5164) = 0;
            func_0034B330(0);
            D_005BC1A8->m14(0x80000000, 0x14);
        } else if (b == 1) {
            func_003AA990(p, 0x25);
            *(unsigned char *)(p + 0x5164) = 0;
            func_0034B330(0);
            D_005BC1A8->m14(0x80000000, 0x14);
        } else if (d == 1) {
            *(signed char *)(p + 0x4E1A) = -1;
            *(unsigned char *)(p + 0x4E1B) = 0;
            *(unsigned char *)(p + 0x4E16) = 9;
            func_003AA8F0(p);
            *(unsigned char *)(p + 0x5164) = 0;
            func_0034B330(0);
            D_005BC1A8->m14(0x80000000, 0x14);
        }
        break;
    }
    func_002EF940(*(char **)D_01CAFF0C, p + 0x5080);
}

static inline unsigned char both28(char *o) { if (*(unsigned char *)(o + 0x28AE) == 1 && *(unsigned char *)(o + 0x28A9) == 1) { return 1; } return 0; }

extern "C" unsigned char func_003B4030(char *p) {
    unsigned char found;
    int i;
    short *t;
    char *o;
    int *tbl;
    if ((*(unsigned char *)(p + 0x21C9) != 0) == 0) {
        return 0;
    }
    if ((unsigned char)func_003B5A20(p) == 0) {
        if (*(short *)(p + 0x222C) == 1) {
            *(short *)(p + 0x20CE) = 0xF;
            return 1;
        }
        found = 0;
        if ((unsigned char)func_003B5A00(p, *(int *)(p + 0x2210)) == 1) {
            if ((unsigned char)func_003B5A00(p, D_005643E0[*(int *)(p + 0x2210)]) == 0) {
                found = 1;
                *(int *)(p + 0x2200) = D_005643E0[*(int *)(p + 0x2210)];
                *(int *)(p + 0x2204) = *(int *)(p + 0x2210);
            }
        }
        if (!found) {
            for (i = 0, t = D_005643E0; i < 6; i++, t++) {
                if ((unsigned char)func_003B5A00(p, i) == 0) {
                    if ((unsigned char)func_003B5A00(p, *t) == 1) {
                        found = 1;
                        *(int *)(p + 0x2200) = i;
                        *(int *)(p + 0x2204) = D_005643E0[i];
                        break;
                    }
                }
            }
        }
        if (!found) {
            if ((unsigned char)func_003B5A00(p, *(int *)(p + 0x2210)) == 1) {
                found = 1;
                *(int *)(p + 0x2200) = 6;
                *(int *)(p + 0x2204) = *(int *)(p + 0x2210);
            }
        }
        if (found) {
            *(float *)(p + 0x2208) = func_003B57C0(p, *(int *)(p + 0x2200));
            *(unsigned char *)(p + 0x220C) = func_003B58D0(p, *(int *)(p + 0x2200));
            *(short *)(p + 0x220E) = func_003B5850(p, *(int *)(p + 0x2200));
            if (*(int *)(p + 0x2200) == *(int *)(p + 0x21FC) && *(float *)(p + 0x2208) <= 100.0f) {
                *(short *)(p + 0x20CE) = 0x1D;
            } else {
                *(unsigned char *)(p + 0x2216) = 1;
                if (*(unsigned char *)(p + 0x220C) & 1) {
                    *(short *)(p + 0x20CE) = 0xE;
                } else {
                    *(short *)(p + 0x20CE) = 0xD;
                }
            }
            return 1;
        }
    }
    if (*(unsigned char *)(p + 0x2190) == 1) {
        o = *(char **)(*(char **)D_01CAFF0C + 0xC);
        if (o != 0 && both28(o) == 1) {
            *(short *)(p + 0x20CE) = 0x25;
            return 1;
        }
    }
    if (*(unsigned char *)(p + 0x218E) < 2) {
        if (*(unsigned char *)(p + 0x218F) & 1) {
            *(short *)(p + 0x20CE) = 0x26;
            return 1;
        }
        tbl = D_00564550[(unsigned char)D_01CAFF3C[0]];
        *(short *)(p + 0x20CE) = tbl[func_003B5E50(p)];
        return 1;
    }
    if (*(unsigned char *)(p + 0x218E) < 3) {
        if (*(short *)(p + 0x20D0) == 0x1E || *(short *)(p + 0x20D0) == 0x1F) {
            *(short *)(p + 0x20CE) = 0x1C;
        } else {
            *(short *)(p + 0x20CE) = 0x1B;
        }
        return 1;
    }
    if (!(*(unsigned char *)(p + 0x218E) < 3)) {
        *(short *)(p + 0x20CE) = 0x17;
        return 1;
    }
    return 0;
}

extern "C" bool func_004B8400(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    unsigned char f = 0;
    bool r;
    if (*(float *)(p + 0x70) != 0.0f) {
        *(float *)(p + 0x60) = *(float *)(p + 0x60) + *(float *)(p + 0x70);
        if (!(*(float *)(p + 0x70) <= 0.0f)) {
            if (!(*(float *)(p + 0x60) < *(float *)(p + 0xA40))) {
                *(float *)(p + 0x60) = *(float *)(p + 0xA40);
                f |= 1;
            }
        } else if (*(float *)(p + 0x60) <= *(float *)(p + 0xA40)) {
            *(float *)(p + 0x60) = *(float *)(p + 0xA40);
            f |= 1;
        }
    } else {
        f |= 1;
    }
    if (*(float *)(p + 0x78) != 0.0f) {
        *(float *)(p + 0x68) = *(float *)(p + 0x68) + *(float *)(p + 0x78);
        if (!(*(float *)(p + 0x78) <= 0.0f)) {
            if (!(*(float *)(p + 0x68) < *(float *)(p + 0xA48))) {
                *(float *)(p + 0x68) = *(float *)(p + 0xA48);
                f |= 2;
            }
        } else if (*(float *)(p + 0x68) <= *(float *)(p + 0xA48)) {
            *(float *)(p + 0x68) = *(float *)(p + 0xA48);
            f |= 2;
        }
    } else {
        f |= 2;
    }
    if (*(float *)(p + 0x60) == 0.0f && *(float *)(p + 0x68) == 0.0f) {
        return 1;
    }
    v[0] = *(float *)(p + 0x60);
    v[1] = 0.0f;
    v[2] = *(float *)(p + 0x68);
    v[3] = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105760(m, m, a);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    if (f == 3) {
        r = true;
    } else {
        r = false;
    }
    return r;
}

class ObjB00 {
public:
    virtual void q0();
    virtual void q1();
    virtual void q2();
    virtual void q3();
    virtual void q4();
    virtual void q5();
    virtual void q6();
    virtual void q7();
    virtual void q8();
    virtual void q9();
    virtual void q10();
    virtual void q11();
    virtual void q12();
    virtual void q13();
    virtual void q14();
    virtual void q15();
    virtual void q16();
    virtual void q17();
    virtual void q18();
    virtual void q19();
    virtual void q20();
    virtual void q21();
    virtual void q22();
    virtual void q23();
    virtual void q24();
    virtual void q25();
    virtual void q26();
    virtual void q27();
    virtual void q28();
    virtual void q29();
    virtual void q30();
    virtual void q31();
    virtual void q32();
    virtual void q33();
    virtual void q34();
    virtual void q35();
    virtual void q36();
    virtual void q37();
    virtual void q38();
    virtual void q39();
    virtual void q40();
    virtual void q41();
    virtual void mB0(int, char *);
    virtual void mB4(int, int, int, int);
    virtual void q44();
    virtual void mBC(float);
};

extern "C" void func_003C9860(char *p) {
    unsigned char k;
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0028B610(p);
        func_003C95E0(p);
        *(char **)(p + 0xE4) = D_00549910;
        *(unsigned char *)(p + 0xDC) = 0;
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(unsigned char *)(p + 5) = 0;
    case 1:
        if ((unsigned char)func_0028B8E0(p) == 0) {
            return;
        }
        k = ((unsigned char)func_0028B620(p) == 0) ? 1 : *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2);
        func_0028BA90(p, p + 0x1700, p + 0x1740, k);
        if (k != 1 && *(unsigned char *)(*(char **)(p + 0xE0) + 0x24EB) != 0 && *(char **)(p + 0x1800) != 0) {
            func_003023F0(*(char **)(p + 0x1800));
        }
        if (*(unsigned char *)(p + 0xDC) == 1) {
            ((ObjB00 *)(p + 0xB00))->mBC(*(float *)(p + 0x10));
        }
        switch (*(signed char *)(p + 0xDA)) {
        case -1:
            break;
        default:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2) || *(unsigned char *)(p + 0xDC) == 1) {
                ((ObjB00 *)(p + 0xB00))->mB0(*(int *)(p + 0x1CC), p + 0x1C4);
            }
            *(unsigned char *)(p + 0xDC) = 0;
            break;
        case 6:
        case 7:
        case 8:
        case 0x16:
        case 0x33:
            if (*(unsigned char *)(*(char **)(p + 0xE0) + 0x24EC) != *(unsigned char *)(*(char **)(p + 0xE0) + 0x24D2)) {
                ((ObjB00 *)(p + 0xB00))->mB4(*(signed char *)(p + 0xDA) - 1, 0, 0, 0);
                *(unsigned char *)(p + 0xDC) = 1;
            }
            break;
        }
        func_0028BF50(p);
        break;
    }
}

class Obj1C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual float m1C();
};

static inline bool flt(float a, float b) { return a < b; }

extern "C" void func_003CF790(char *p) {
    int i;
    char *q;
    char *o;
    char *a;
    float f;
    for (i = 0, q = p; i < 24; i++, q += 0x720) {
        *(int *)(q + 0x560) = 0;
        *(int *)(q + 0x564) = 0;
        *(int *)(q + 0x568) = 0;
        *(float *)(q + 0x56C) = 1.0f;
        *(int *)(q + 0x570) = 0;
        *(int *)(q + 0x574) = 0;
        *(int *)(q + 0x578) = 0;
        *(float *)(q + 0x57C) = 1.0f;
        func_003D0790(p, i);
    }
    o = *(char **)(*(char **)D_01CAFF0C + 4);
    if (o != 0 && (a = *(char **)(o + 0x10)) != 0) {
        f = ((Obj1C *)a)->m1C();
    } else {
        f = 0.0f;
    }
    *(float *)(p + 0xACEC) = f;
    *(unsigned char *)(p + 0xACE7) = 4;
    if (*(unsigned char *)(p + 0xACE6) != 2) {
        for (i = 0; i < 4; i++) {
            if (flt(*(float *)(p + 0xACEC), (float)D_005688C0[i])) {
                *(unsigned char *)(p + 0xACE7) = i;
                break;
            }
        }
    }
    *(float **)(p + 0xACE0) = D_005688A0[*(unsigned char *)(p + 0xACE7)];
    *(unsigned char *)(p + 0x45) = 6;
    *(float *)(p + 0x50) = D_00568510[*(unsigned char *)(p + 0xACE6) * 3];
    *(float *)(p + 0x54) = (*(float **)(p + 0xACE0))[0];
    *(float *)(p + 0x58) = (*(float **)(p + 0xACE0))[1];
    *(float *)(p + 0x5C) = 1.0f;
    if (*(unsigned char *)(p + 0xACE6) == 0) {
        *(short *)(p + 0x90) = 0x4000;
    } else {
        *(short *)(p + 0x90) = -0x3FFF;
    }
    *(unsigned int *)(p + 0xC) = *(unsigned int *)(p + 0xC) | 0x40;
}

class V130f {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void m130();
};

typedef struct { unsigned char f; int x; char **pp; } HB;
extern "C" void func_004D6360(char *);
extern "C" void func_00407700(char *);
extern "C" void func_00408550(char *);
extern "C" void func_0047C870(char *);
extern "C" void func_001AD140(char *);
extern "C" void func_0038B880(char *);

extern "C" char *func_0044C8B0(void) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x690, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x690, t);
        if (r != 0) {
            func_0044C9E0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    ((V130f *)o)->m130();
    return ret;
}

class V128f {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void m128(char *);
};

extern "C" char *func_004D6200(char *p) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x1C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x1C0, t);
        if (r != 0) {
            func_004D6360(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        ((V128f *)ret)->m128(p);
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

extern "C" char *func_00407580(char *p, char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x440, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x440, t);
        if (r != 0) {
            func_00407700(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x420) = p;
        ((V128f *)ret)->m128(s);
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

extern "C" char *func_004083D0(char *p, char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x440, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x440, t);
        if (r != 0) {
            func_00408550(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x410) = p;
        ((V128f *)ret)->m128(s);
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

class ObjF2C {
public:
    virtual void u0();
    virtual void u1();
    virtual void u2();
    virtual void u3();
    virtual void u4();
    virtual void u5();
    virtual void u6();
    virtual void u7();
    virtual void u8();
    virtual int m2C(char *, char *);
    virtual void u10();
    virtual void u11();
    virtual void u12();
    virtual void u13();
    virtual void u14();
    virtual void u15();
    virtual void u16();
    virtual void u17();
    virtual void u18();
    virtual void u19();
    virtual void u20();
    virtual void u21();
    virtual void u22();
    virtual void u23();
    virtual void u24();
    virtual void u25();
    virtual void u26();
    virtual void u27();
    virtual void u28();
    virtual void u29();
    virtual void u30();
    virtual void u31();
    virtual void u32();
    virtual void u33();
    virtual void u34();
    virtual void u35();
    virtual void u36();
    virtual void u37();
    virtual void u38();
    virtual void u39();
    virtual void u40();
    virtual void u41();
    virtual void u42();
    virtual void u43();
    virtual void u44();
    virtual void u45();
    virtual void u46();
    virtual void u47();
    virtual void u48();
    virtual void u49();
    virtual void u50();
    virtual void mD4(int);
    virtual void u52();
    virtual void u53();
    virtual void u54();
    virtual void u55();
    virtual void u56();
    virtual void u57();
    virtual void u58();
    virtual void u59();
    virtual void u60();
    virtual void u61();
    virtual void u62();
    virtual void u63();
    virtual void u64();
    virtual void u65();
    virtual void u66();
    virtual void u67();
    virtual void u68();
    virtual void u69();
    virtual void u70();
    virtual void u71();
    virtual void u72();
    virtual void u73();
    virtual void m130();
};

static inline char *ent10(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(t + i * 4 + 8) == 0) { r = 0; } else { r = t + *(int *)(t + i * 4 + 8); } return r; }

extern "C" char *func_0047C670(char *p, char *h, short *idx) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (p == 0) {
        return 0;
    }
    if (h == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xE80, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xE80, t);
        if (r != 0) {
            func_0047C870(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    if ((unsigned char)((ObjF2C *)(o + 0xA40))->m2C(ent10(h, *idx * 10), p) == 0) {
        func_001AD140(ret);
        return 0;
    }
    ((ObjF2C *)(ret + 0xA40))->mD4(1);
    return ret;
}

class ObjG2C {

public:

    virtual void u0();

    virtual char *mC();

    virtual void u2();

    virtual void u3();

    virtual void u4();

    virtual void u5();

    virtual void u6();

    virtual void u7();

    virtual void u8();

    virtual int m2C(char *, char *);

    virtual void u10();

    virtual void u11();

    virtual void u12();

    virtual void u13();

    virtual void u14();

    virtual void u15();

    virtual void u16();

    virtual void u17();

    virtual void u18();

    virtual void u19();

    virtual void u20();

    virtual void u21();

    virtual void u22();

    virtual void u23();

    virtual void u24();

    virtual void u25();

    virtual void u26();

    virtual void u27();

    virtual void u28();

    virtual void u29();

    virtual void u30();

    virtual void u31();

    virtual void u32();

    virtual void u33();

    virtual void u34();

    virtual void u35();

    virtual void u36();

    virtual void u37();

    virtual void u38();

    virtual void u39();

    virtual void u40();

    virtual void u41();

    virtual void u42();

    virtual void u43();

    virtual void u44();

    virtual void u45();

    virtual void u46();

    virtual void u47();

    virtual void u48();

    virtual void u49();

    virtual void u50();

    virtual void mD4(int);

};

typedef struct { float f[3]; } SF3;
extern "C" void func_00401690(char *);

extern "C" char *func_0038B630(char *p, char *h, short *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (p == 0) {
        return 0;
    }
    if (h == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xA70, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xA70, t);
        if (r != 0) {
            func_0038B880(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    *(short *)(o + 0xE4) = *sc;
    *(SF3 *)(o + 0xE8) = *(SF3 *)((char *)sc + 4);
    *(SF3 *)(o + 0xF4) = *(SF3 *)((char *)sc + 0x10);
    *(float *)(o + 0x100) = *(float *)((char *)sc + 0x1C);
    *(float *)(o + 0x104) = *(float *)((char *)sc + 0x20);
    ((ObjG2C *)(ret + 0x110))->m2C(ent10(h, *sc * 10), p);
    func_001A5C30(((ObjG2C *)(ret + 0x110))->mC());
    ((ObjG2C *)(ret + 0x110))->mD4(1);
    return ret;
}

class ObjG401 {

public:

    virtual void u0();

    virtual char *mC();

    virtual void u2();

    virtual void u3();

    virtual void u4();

    virtual void u5();

    virtual void u6();

    virtual void u7();

    virtual void u8();

    virtual int m2C(char *, char *);

    virtual void u10();

    virtual void u11();

    virtual void u12();

    virtual void u13();

    virtual void u14();

    virtual void u15();

    virtual void u16();

    virtual void u17();

    virtual void u18();

    virtual void u19();

    virtual void u20();

    virtual void u21();

    virtual void u22();

    virtual void u23();

    virtual void u24();

    virtual void u25();

    virtual void u26();

    virtual void u27();

    virtual void u28();

    virtual void u29();

    virtual void u30();

    virtual void u31();

    virtual void u32();

    virtual void u33();

    virtual void u34();

    virtual void u35();

    virtual void u36();

    virtual void u37();

    virtual void u38();

    virtual void u39();

    virtual void u40();

    virtual void u41();

    virtual void u42();

    virtual void u43();

    virtual void u44();

    virtual void u45();

    virtual void u46();

    virtual void u47();

    virtual void u48();

    virtual void u49();

    virtual void u50();

    virtual void mD4(int);

};

typedef struct { short a; short b; int w[4]; } SC401;
extern "C" void func_0013D6A0(char *);
extern "C" void func_0050EA20(char *);
extern "C" void func_0013D640(char *, char *);
extern "C" void func_004E0880(char *);
extern "C" void func_00474B30(char *);
extern "C" void func_001A5BD0(char *);

extern "C" char *func_00401350(char *p, char *h, SC401 *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    char *e0;
    char *e1;
    int i;
    int off;
    if (p == 0) {
        return 0;
    }
    if (h == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x1B7C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x1B7C0, t);
        if (r != 0) {
            func_00401690(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret == 0) {
        return 0;
    }
    e0 = ent10(h, sc->a * 10);
    e1 = ent10(h, sc->b * 10);
    for (i = 0, off = 0; i < 0x27; i++, off += 0xB40) {
        if (!(unsigned char)((ObjG401 *)(ret + off + 0x110))->m2C(e0, p)) {
            func_001AD140(ret);
            return 0;
        }
        func_001A5C30(((ObjG401 *)(ret + off + 0x110))->mC());
        if (!(unsigned char)((ObjG401 *)(ret + off + 0x580))->m2C(e1, p)) {
            func_001AD140(ret);
            return 0;
        }
        func_001A5C30(((ObjG401 *)(ret + off + 0x580))->mC());
        *(int *)(ret + off + 0xC24) = sc->w[0];
        *(int *)(ret + off + 0xC28) = sc->w[1];
        *(int *)(ret + off + 0xC2C) = sc->w[2];
        *(int *)(ret + off + 0xC30) = sc->w[3];
    }
    return ret;
}

class O50E {
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
    virtual float m7C();
};

extern "C" char *func_0050EB90(char *p0) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    int n;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x560, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0050EA20(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x9, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x228) = p0;
        *(int *)(ret + 0x190) = *(int *)(p0 + 0x7F0);
        n = (int)(((O50E *)(p0 + 0x130))->m7C() / 300.0f);
        if (n > 3) n = 3;
        if (*(unsigned char *)(p0 + 0x1BD)) n = 4;
        *(char *)(ret + 0x230) = n;
        *(char *)(p0 + 0x3A3C) = 0;
        *(char *)(ret + 0x45) = 4;
    }
    return ret;
}

class O4E0 {
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
    virtual float m7C();
};

extern "C" char *func_004E09F0(char *p0, int p1, int p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    int n;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x570, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_004E0880(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x9, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x210) = p1;
        *(char **)(ret + 0x220) = p0;
        *(float *)(ret + 0x224) = 10.0f * p1;
        *(int *)(ret + 0x214) = p2;
        *(int *)(ret + 0x190) = *(int *)(p0 + 0x7F0);
        n = (int)(((O4E0 *)(p0 + 0x130))->m7C() / 300.0f);
        if (n > 3) n = 3;
        if (*(unsigned char *)(p0 + 0x1BD)) n = 4;
        *(char *)(ret + 0x22D) = n;
        *(int *)(ret + 0x560) = 0;
        *(int *)(ret + 0x564) = 0;
        *(char *)(ret + 0x45) = 4;
    }
    return ret;
}

class ObjG474 {

public:

    virtual void u0();

    virtual char *mC();

    virtual void u2();

    virtual void u3();

    virtual void u4();

    virtual void u5();

    virtual void u6();

    virtual void u7();

    virtual void u8();

    virtual int m2C(char *, char *);

    virtual void u10();

    virtual void u11();

    virtual void u12();

    virtual void u13();

    virtual void u14();

    virtual void u15();

    virtual void u16();

    virtual void u17();

    virtual void u18();

    virtual void u19();

    virtual void u20();

    virtual void u21();

    virtual void u22();

    virtual void u23();

    virtual void u24();

    virtual void u25();

    virtual void u26();

    virtual void u27();

    virtual void u28();

    virtual void u29();

    virtual void u30();

    virtual void u31();

    virtual void u32();

    virtual void u33();

    virtual void u34();

    virtual void u35();

    virtual void u36();

    virtual void u37();

    virtual void u38();

    virtual void u39();

    virtual void u40();

    virtual void u41();

    virtual void u42();

    virtual void u43();

    virtual void u44();

    virtual void u45();

    virtual void u46();

    virtual void u47();

    virtual void u48();

    virtual void u49();

    virtual void u50();

    virtual void mD4(int);

};

typedef struct { signed char id; char x; short y; } E474;

typedef struct { char a; char b; } B474;

typedef struct { float f[5]; signed char c14; E474 e[16]; signed char c56; B474 g[16]; unsigned char h[3]; float k[10]; } S474;
extern "C" void func_00504000(char *);

extern "C" char *func_004747E0(char *p, char *h, S474 *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *e;
    if (p == 0) {
        return 0;
    }
    if (h == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0xAD0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xAD0, t);
        if (r != 0) {
            func_00474B30(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret == 0) {
        return 0;
    }
    *(S474 *)(ret + 0xE4) = *sc;
    *(char **)(ret + 0xDC) = p;
    *(char **)(ret + 0xE0) = h;
    *(char *)(ret + 0x194) = 0;
    e = ent10(h, sc->e[0].id * 10);
    ((ObjG474 *)(ret + 0x1B0))->m2C(e, p);
    func_001A5BD0(((ObjG474 *)(ret + 0x1B0))->mC());
    ((ObjG474 *)(ret + 0x640))->m2C(e, p);
    func_001A5BD0(((ObjG474 *)(ret + 0x640))->mC());
    *(int *)(ret + 0xC) |= 0x40;
    return ret;
}

typedef struct { signed char c0; signed char c1; signed char c2; signed char c3; int a; int b; unsigned short h; } S504;
extern "C" void func_0039D820(char *);
extern "C" void func_0039D840(char *);
extern "C" void func_0039D890(char *);
extern "C" unsigned char func_0039DDF0(char *, float);
extern "C" void func_003A02B0(char *, int);
extern "C" void func_003A06D0(char *);
extern "C" void func_003A0CD0(char *, int);
extern "C" float D_00573260[];
extern "C" void func_00206730(char *);
extern "C" int func_003F3830(char *);
extern "C" void func_003208A0(char *, int, int);
extern "C" void func_00105668(float *, float *, float);
extern "C" void func_00320B60(char *, int, int);
extern "C" char *func_002D9F00(char *, int);
extern "C" void func_00105300(char *, char *);
extern "C" float D_00555080[];
extern "C" float D_00555084[];
extern "C" float D_00555088[];

extern "C" char *func_005041E0(int p0, int p1, S504 s, char p3, char p4) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;

    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x1A40, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00504000(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x38) = p0;
        *(int *)(ret + 0x3C) = p1;
        *(S504 *)(ret + 0x1384) = s;
        *(char *)(ret + 0x1394) = p3;
        *(char *)(ret + 0x1395) = p4;
    }
    return ret;
}

class O398 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual float m28(int);
};

static inline unsigned char both398(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_003985C0(char *p) {
    float f;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x57;
        func_0024DA80(p + 0x29D0, 0, 0x57);
        func_0024DA80(p + 0x2AA0, 0, 0x57);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        *(float *)(p + 0x68) = 22.5f;
        *(float *)(p + 0x78) = 22.5f;
        *(float *)(p + 0x2E08) = 22.5f;
        break;
    case 1:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 65.0f)) {
            func_0039D820(p);
            func_0039D840(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 77.0f)) {
            func_0039D890(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (func_0039DDF0(p, 140.0f) != 1) {
            if (both398(p) == 1) {
                func_003A02B0(p, 2);
            }
        }
        break;
    }
    func_003A06D0(p);
    f = ((O398 *)(p + 0x4C4))->m28(0);
    if (!(f < 45.0f) && f < 63.0f) {
        func_003A0CD0(p, 0x300);
    }
    if (!(f < 65.0f) && f < 77.0f) {
        func_003A0F60(p);
    }
}

static inline unsigned char both398b(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_00398AE0(char *p) {
    float f;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x59;
        func_0024DA80(p + 0x29D0, 0, 0x59);
        func_0024DA80(p + 0x2AA0, 0, 0x59);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        *(float *)(p + 0x68) = 42.857143f;
        *(float *)(p + 0x78) = 42.857143f;
        *(float *)(p + 0x2E08) = 42.857143f;
        break;
    case 1:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 70.0f)) {
            func_0039D820(p);
            func_0039D840(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 77.0f)) {
            func_0039D890(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (func_0039DDF0(p, 150.0f) != 1) {
            if (both398b(p) == 1) {
                func_003A02B0(p, 2);
            }
        }
        break;
    }
    func_003A06D0(p);
    f = ((O398 *)(p + 0x4C4))->m28(0);
    if (!(f < 55.0f) && f < 70.0f) {
        func_003A0CD0(p, 0x300);
    }
    if (!(f < 70.0f) && f < 77.0f) {
        func_003A0F60(p);
    }
}

class O3E5 {
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
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual void u2EC();
    virtual void m2F0(int);
    virtual void u2F4();
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual void u310();
    virtual void m314(int, int);
};

class O3E5B {
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
    virtual float m7C();
};

static inline float frand3E5(void) {
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
    return 2.3283064e-10f * (float)y;
}

static inline int lvl3E5(char *p) {
    int n = (int)(((O3E5B *)(p + 0x130))->m7C() / 300.0f);
    if (n > 3) n = 3;
    if (*(unsigned char *)(p + 0x1BD)) n = 4;
    return n;
}

extern "C" void func_003E59F0(char *p, int a, int b) {
    float r;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    func_00206730(p + 0x3BE8);
    func_00206730(p + 0x3BEC);
    func_00206730(p + 0x3BF0);
    if (*(char **)(p + 0x3BE8) != 0) func_001AD140(*(char **)(p + 0x3BE8));
    if (*(char **)(p + 0x3BEC) != 0) func_001AD140(*(char **)(p + 0x3BEC));
    if (*(char **)(p + 0x3BF0) != 0) func_001AD140(*(char **)(p + 0x3BF0));
    switch (*(unsigned char *)(p + 0x3B91)) {
    case 0:
        r = 100.0f * frand3E5();
        if (*(unsigned char *)(p + 0x3435) == 0 && func_003F3830(p) != 0 && r <= D_00573260[lvl3E5(p)]) {
            ((O3E5 *)p)->m2F0(0x10);
            *(float *)(p + 0x3A98) = 10.0f;
            *(unsigned char *)(p + 0x3B91) = 1;
        } else {
            func_003208A0(p + 0x130, a, b);
            *(unsigned char *)(p + 0x3B91) = 2;
        }
        break;
    case 1:
        ((O3E5 *)p)->m2F0(0x10);
        *(float *)(p + 0x3A98) = 10.0f;
        break;
    case 2:
        func_003208A0(p + 0x130, a, b);
        break;
    }
    ((O3E5 *)p)->m314(a, b);
}

static inline unsigned char both398c(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_00398850(char *p) {
    float f;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x58;
        func_0024DA80(p + 0x29D0, 0, 0x58);
        func_0024DA80(p + 0x2AA0, 0, 0x58);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        *(float *)(p + 0x68) = 22.5f;
        *(float *)(p + 0x78) = 22.5f;
        *(float *)(p + 0x2E08) = 22.5f;
        break;
    case 1:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 65.0f)) {
            func_0039D820(p);
            func_0039D840(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 77.0f)) {
            func_0039D890(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (func_0039DDF0(p, 140.0f) != 1) {
            if (both398c(p) == 1) {
                func_003A02B0(p, 2);
            }
        }
        break;
    }
    func_003A06D0(p);
    f = ((O398 *)(p + 0x4C4))->m28(0);
    if (!(f < 45.0f) && f < 63.0f) {
        func_003A0CD0(p, 0x300);
    }
    if (!(f < 65.0f) && f < 77.0f) {
        func_003A0F60(p);
    }
}

static inline unsigned char both398d(char *p) {
    if ((unsigned char)func_0024E800(p + 0x29D0) == 1 && (unsigned char)func_0024E800(p + 0x2AA0) == 1) {
        return 1;
    }
    return 0;
}

extern "C" void func_00398D70(char *p) {
    float f;
    *(unsigned short *)(p + 0x2DD8) |= 1;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x2DDE) = *(short *)(p + 0x2DDC);
        *(short *)(p + 0x2DDC) = 0x5A;
        func_0024DA80(p + 0x29D0, 0, 0x5A);
        func_0024DA80(p + 0x2AA0, 0, 0x5A);
        (*(unsigned char *)(p + 5))++;
        *(unsigned char *)(p + 0x2DE0) = 1;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 0.0f;
        *(float *)(p + 0x70) = 0.0f;
        *(float *)(p + 0x74) = 0.0f;
        *(float *)(p + 0x78) = 0.0f;
        *(float *)(p + 0x7C) = 0.0f;
        *(float *)(p + 0x2E00) = 0.0f;
        *(float *)(p + 0x2E04) = 0.0f;
        *(float *)(p + 0x2E08) = 0.0f;
        *(float *)(p + 0x2E0C) = 0.0f;
        *(float *)(p + 0x68) = 42.857143f;
        *(float *)(p + 0x78) = 42.857143f;
        *(float *)(p + 0x2E08) = 42.857143f;
        break;
    case 1:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 70.0f)) {
            func_0039D820(p);
            func_0039D840(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 2:
        if (!(((O398 *)(p + 0x4C4))->m28(0) < 77.0f)) {
            func_0039D890(p);
            (*(unsigned char *)(p + 5))++;
        }
        break;
    case 3:
        if (func_0039DDF0(p, 150.0f) != 1) {
            if (both398d(p) == 1) {
                func_003A02B0(p, 2);
            }
        }
        break;
    }
    func_003A06D0(p);
    f = ((O398 *)(p + 0x4C4))->m28(0);
    if (!(f < 55.0f) && f < 70.0f) {
        func_003A0CD0(p, 0x300);
    }
    if (!(f < 70.0f) && f < 77.0f) {
        func_003A0F60(p);
    }
}

class O359 {
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
    virtual void m74();
    virtual short m78(short, short);
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual int m90(int);
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void mB4(int);
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
    virtual void uEC();
    virtual void uF0();
    virtual int mF4();
};

class O359B {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual int m14();
};

extern "C" void func_003593F0(char *p, signed char k) {
    short s;
    int a;
    if (*(unsigned char *)(p + 0xB4) == 0xE && *(unsigned char *)(p + 0xCC) == 0xE) return;
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    if ((unsigned char)((O359B *)*(char **)(p + 0xC))->m14()) return;
    if ((unsigned char)((O359 *)p)->mF4()) return;
    if (k == 0) {
        ((O359 *)p)->m6C();
        ((O359 *)p)->m74();
        if (*(float *)(p + 0x34) < 400.0f) {
            ((O359 *)p)->m70();
            if ((short)(((O359 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) + 0x4000) >= 0) {
                s = ((O359 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x90)) - 0x671C;
                if (s >= 0 && s < 0x31C8) {
                    a = ((O359 *)p)->m90(0);
                    if (a != 0xD) {
                        ((O359 *)p)->mB4(a);
                        return;
                    }
                }
            }
        }
    }
    if (k == 1) {
        ((O359 *)p)->m6C();
        ((O359 *)p)->m74();
        if (*(float *)(p + 0x34) < 10000.0f) {
            ((O359 *)p)->m70();
            if ((short)(((O359 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) + 0x4000) >= 0) {
                s = ((O359 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x90)) - 0x78E4;
                if (s >= 0 && s < 0xE3A) {
                    a = ((O359 *)p)->m90(0);
                    if (a != 0xD) {
                        ((O359 *)p)->mB4(a);
                        return;
                    }
                }
            }
        }
    }
}

extern "C" unsigned char func_004D81D0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a;
    float b;
    unsigned char fl;
    a = 6.283185f * ((float)*(short *)(p + 0x514) / 65536.0f);
    b = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    fl = 0;
    if (*(float *)(p + 0x70) != 0.0f) {
        *(float *)(p + 0x60) += *(float *)(p + 0x70);
        if (*(float *)(p + 0x70) > 0.0f) {
            if (!(*(float *)(p + 0x60) < *(float *)(p + 0x4F0))) {
                *(float *)(p + 0x60) = *(float *)(p + 0x4F0);
                fl |= 1;
            }
        } else {
            if (*(float *)(p + 0x60) <= *(float *)(p + 0x4F0)) {
                *(float *)(p + 0x60) = *(float *)(p + 0x4F0);
                fl |= 1;
            }
        }
    } else {
        fl |= 1;
    }
    if (*(float *)(p + 0x78) != 0.0f) {
        *(float *)(p + 0x68) += *(float *)(p + 0x78);
        if (*(float *)(p + 0x78) > 0.0f) {
            if (!(*(float *)(p + 0x68) < *(float *)(p + 0x4F8))) {
                *(float *)(p + 0x68) = *(float *)(p + 0x4F8);
                fl |= 2;
            }
        } else {
            if (*(float *)(p + 0x68) <= *(float *)(p + 0x4F8)) {
                *(float *)(p + 0x68) = *(float *)(p + 0x4F8);
                fl |= 2;
            }
        }
    } else {
        fl |= 2;
    }
    if (*(float *)(p + 0x60) == 0.0f && *(float *)(p + 0x68) == 0.0f) {
        return 1;
    }
    v[0] = *(float *)(p + 0x60) * *(float *)(p + 0x10);
    v[1] = 0.0f;
    v[2] = *(float *)(p + 0x68) * *(float *)(p + 0x10);
    v[3] = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105668(m, m, a);
    func_00105760(m, m, b);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    {
        unsigned char r;
        if (fl == 3) r = 1; else r = 0;
        return r;
    }
}

extern "C" unsigned char func_004F8BB0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float a;
    float b;
    unsigned char fl;
    a = 6.283185f * ((float)*(short *)(p + 0x614) / 65536.0f);
    b = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    fl = 0;
    if (*(float *)(p + 0x70) != 0.0f) {
        *(float *)(p + 0x60) += *(float *)(p + 0x70);
        if (*(float *)(p + 0x70) > 0.0f) {
            if (!(*(float *)(p + 0x60) < *(float *)(p + 0x5F0))) {
                *(float *)(p + 0x60) = *(float *)(p + 0x5F0);
                fl |= 1;
            }
        } else {
            if (*(float *)(p + 0x60) <= *(float *)(p + 0x5F0)) {
                *(float *)(p + 0x60) = *(float *)(p + 0x5F0);
                fl |= 1;
            }
        }
    } else {
        fl |= 1;
    }
    if (*(float *)(p + 0x78) != 0.0f) {
        *(float *)(p + 0x68) += *(float *)(p + 0x78);
        if (*(float *)(p + 0x78) > 0.0f) {
            if (!(*(float *)(p + 0x68) < *(float *)(p + 0x5F8))) {
                *(float *)(p + 0x68) = *(float *)(p + 0x5F8);
                fl |= 2;
            }
        } else {
            if (*(float *)(p + 0x68) <= *(float *)(p + 0x5F8)) {
                *(float *)(p + 0x68) = *(float *)(p + 0x5F8);
                fl |= 2;
            }
        }
    } else {
        fl |= 2;
    }
    if (*(float *)(p + 0x60) == 0.0f && *(float *)(p + 0x68) == 0.0f) {
        return 1;
    }
    v[0] = *(float *)(p + 0x60) * *(float *)(p + 0x10);
    v[1] = 0.0f;
    v[2] = *(float *)(p + 0x68) * *(float *)(p + 0x10);
    v[3] = 0.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105668(m, m, a);
    func_00105760(m, m, b);
    func_00104B80(v, m, v);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    {
        unsigned char r;
        if (fl == 3) r = 1; else r = 0;
        return r;
    }
}

class O497 {
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
    virtual void m74();
    virtual short m78(short, short);
    virtual void u7C();
    virtual void u80();
    virtual void u84();
    virtual void u88();
    virtual void u8C();
    virtual int m90(int);
    virtual void u94();
    virtual void u98();
    virtual void u9C();
    virtual void uA0();
    virtual void uA4();
    virtual void uA8();
    virtual void uAC();
    virtual void uB0();
    virtual void mB4(int);
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
    virtual void uEC();
    virtual void uF0();
    virtual int mF4();
};

class O497B {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual int m14();
};

extern "C" void func_004972A0(char *p, signed char k) {
    short s;
    int a;
    if (*(unsigned char *)(p + 0xB4) == 0xE && *(unsigned char *)(p + 0xCC) == 0xE) return;
    if (*(unsigned char *)(p + 0x1D) == 3) return;
    if ((unsigned char)((O497B *)*(char **)(p + 0xC))->m14()) return;
    if ((unsigned char)((O497 *)p)->mF4()) return;
    if (k == 0) {
        ((O497 *)p)->m6C();
        ((O497 *)p)->m74();
        if (*(float *)(p + 0x34) < 400.0f) {
            ((O497 *)p)->m70();
            if ((short)(((O497 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) + 0x4000) >= 0) {
                s = ((O497 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x90)) - 0x671C;
                if (s >= 0 && s < 0x31C8) {
                    a = ((O497 *)p)->m90(0);
                    if (a != 0xD) {
                        ((O497 *)p)->mB4(a);
                        return;
                    }
                }
            }
        }
    }
    if (k == 1) {
        ((O497 *)p)->m6C();
        ((O497 *)p)->m74();
        if (*(float *)(p + 0x34) < 10000.0f) {
            ((O497 *)p)->m70();
            if ((short)(((O497 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50)) + 0x4000) >= 0) {
                s = ((O497 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x90)) - 0x78E4;
                if (s >= 0 && s < 0xE3A) {
                    a = ((O497 *)p)->m90(0);
                    if (a != 0xD) {
                        ((O497 *)p)->mB4(a);
                        return;
                    }
                }
            }
        }
    }
}

class O3E5C {
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
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual void u2EC();
    virtual void m2F0(int);
    virtual void u2F4();
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual void u310();
    virtual void m314(int, int);
};

class O3E5D {
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
    virtual float m7C();
};

static inline float frand3E5C(void) {
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
    return 2.3283064e-10f * (float)y;
}

static inline int lvl3E5C(char *p) {
    int n = (int)(((O3E5D *)(p + 0x130))->m7C() / 300.0f);
    if (n > 3) n = 3;
    if (*(unsigned char *)(p + 0x1BD)) n = 4;
    return n;
}

extern "C" void func_003E5CA0(char *p, int a, int b) {
    float r;
    if (*(unsigned char *)(p + 0x14D) == 3) return;
    func_00206730(p + 0x3BE8);
    func_00206730(p + 0x3BEC);
    func_00206730(p + 0x3BF0);
    if (*(char **)(p + 0x3BE8) != 0) func_001AD140(*(char **)(p + 0x3BE8));
    if (*(char **)(p + 0x3BEC) != 0) func_001AD140(*(char **)(p + 0x3BEC));
    if (*(char **)(p + 0x3BF0) != 0) func_001AD140(*(char **)(p + 0x3BF0));
    switch (*(unsigned char *)(p + 0x3B91)) {
    case 0:
        r = 100.0f * frand3E5C();
        if (*(unsigned char *)(p + 0x3435) == 0 && func_003F3830(p) != 0 && r <= D_00573260[lvl3E5C(p)]) {
            ((O3E5C *)p)->m2F0(0x10);
            *(float *)(p + 0x3A98) = 10.0f;
            *(unsigned char *)(p + 0x3B91) = 1;
        } else {
            func_00320B60(p + 0x130, a, b);
            *(unsigned char *)(p + 0x3B91) = 2;
        }
        break;
    case 1:
        ((O3E5C *)p)->m2F0(0x10);
        *(float *)(p + 0x3A98) = 10.0f;
        break;
    case 2:
        func_00320B60(p + 0x130, a, b);
        break;
    }
    ((O3E5C *)p)->m314(a, b);
}

class O368 {
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

class O368P {
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

static inline char *mgr368(void) { return *(char **)(*(char **)D_01CAFF0C + 0xC); }

extern "C" void func_00368670(char *p) {
    float m[16] __attribute__((aligned(16)));
    float a;
    float b;
    short s;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (((O368 *)*(char **)(p + 0xA8))->m2C()) {
            ((O368 *)*(char **)(p + 0xA8))->m18(0x3E);
            ((O368 *)*(char **)(p + 0xA8))->m48(0x3E4, *(char **)(p + 0x10) + 0x10);
        }
        if (*(unsigned char *)(mgr368() + 0x2848) != 0x1F) {
            ((O368 *)*(char **)(p + 0xA8))->m18(0x1D);
            *(int *)(p + 0xD4) = 1;
            break;
        }
        a = 8.0088f;
        b = -22.0434f;
        func_00105300((char *)m, func_002D9F00(mgr368(), 0x12));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(m) : "memory");
        *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
        *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
        s = *(short *)(*(char **)(p + 0x10) + 0x50) - *(short *)(mgr368() + 0x90) + 0x4000;
        if (s > 0) {
            s = 0;
        } else {
            s = -0x8000;
            a *= -1.0f;
            b *= -1.0f;
        }
        *(short *)(*(char **)(p + 0x10) + 0x50) = s + *(short *)(mgr368() + 0x90);
        *(float *)(*(char **)(p + 0x10) + 0x10) += a * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) + b * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x14) += -28.8183f;
        *(float *)(*(char **)(p + 0x10) + 0x18) += b * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) - a * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x1C) = 1.0f;
        break;
    case 1:
        if (((O368 *)*(char **)(p + 0xA8))->m2C()) {
            ((O368 *)*(char **)(p + 0xA8))->m18(0x15);
            *(int *)(p + 0xD4) = 2;
        }
        ((O368 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (((O368 *)*(char **)(p + 0xA8))->m2C()) {
            ((O368P *)p)->mEC(0xE);
        }
        ((O368 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

class O00368A30 {
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

class O00368A30P {
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

static inline char *mgr00368A30(void) { return *(char **)(*(char **)D_01CAFF0C + 0xC); }

extern "C" void func_00368A30(char *p) {
    float m[16] __attribute__((aligned(16)));
    float a;
    float b;
    short s;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (((O00368A30 *)*(char **)(p + 0xA8))->m2C()) {
            ((O00368A30 *)*(char **)(p + 0xA8))->m18(0x3F);
            ((O00368A30 *)*(char **)(p + 0xA8))->m48(0x3E4, *(char **)(p + 0x10) + 0x10);
        }
        if (*(unsigned char *)(mgr00368A30() + 0x2848) != 0x1F) {
            ((O00368A30 *)*(char **)(p + 0xA8))->m18(0x1E);
            *(int *)(p + 0xD4) = 1;
            break;
        }
        a = 8.0088f;
        b = -22.0434f;
        func_00105300((char *)m, func_002D9F00(mgr00368A30(), 0x12));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(m) : "memory");
        *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
        *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
        s = *(short *)(*(char **)(p + 0x10) + 0x50) - *(short *)(mgr00368A30() + 0x90) + 0x4000;
        if (s > 0) {
            s = 0;
        } else {
            s = -0x8000;
            a *= -1.0f;
            b *= -1.0f;
        }
        *(short *)(*(char **)(p + 0x10) + 0x50) = s + *(short *)(mgr00368A30() + 0x90);
        *(float *)(*(char **)(p + 0x10) + 0x10) += a * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) + b * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x14) += -28.8183f;
        *(float *)(*(char **)(p + 0x10) + 0x18) += b * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) - a * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x1C) = 1.0f;
        break;
    case 1:
        if (((O00368A30 *)*(char **)(p + 0xA8))->m2C()) {
            ((O00368A30 *)*(char **)(p + 0xA8))->m18(0x14);
            *(int *)(p + 0xD4) = 2;
        }
        ((O00368A30 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (((O00368A30 *)*(char **)(p + 0xA8))->m2C()) {
            ((O00368A30P *)p)->mEC(0xE);
        }
        ((O00368A30 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

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

extern "C" void func_00469230(char *p) {
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

extern "C" void func_004695F0(char *p) {
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

class O004A5A40 {
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

class O004A5A40P {
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

static inline char *mgr004A5A40(void) { return *(char **)(*(char **)D_01CAFF0C + 0xC); }

extern "C" void func_004A5A40(char *p) {
    float m[16] __attribute__((aligned(16)));
    float a;
    float b;
    short s;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (((O004A5A40 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004A5A40 *)*(char **)(p + 0xA8))->m18(0x3E);
            ((O004A5A40 *)*(char **)(p + 0xA8))->m48(0x3E4, *(char **)(p + 0x10) + 0x10);
        }
        if (*(unsigned char *)(mgr004A5A40() + 0x2848) != 0x1F) {
            ((O004A5A40 *)*(char **)(p + 0xA8))->m18(0x1D);
            *(int *)(p + 0xD4) = 1;
            break;
        }
        a = 8.0088f;
        b = -22.0434f;
        func_00105300((char *)m, func_002D9F00(mgr004A5A40(), 0x12));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(m) : "memory");
        *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
        *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
        s = *(short *)(*(char **)(p + 0x10) + 0x50) - *(short *)(mgr004A5A40() + 0x90) + 0x4000;
        if (s > 0) {
            s = 0;
        } else {
            s = -0x8000;
            a *= -1.0f;
            b *= -1.0f;
        }
        *(short *)(*(char **)(p + 0x10) + 0x50) = s + *(short *)(mgr004A5A40() + 0x90);
        *(float *)(*(char **)(p + 0x10) + 0x10) += a * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) + b * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x14) += -28.8183f;
        *(float *)(*(char **)(p + 0x10) + 0x18) += b * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) - a * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x1C) = 1.0f;
        break;
    case 1:
        if (((O004A5A40 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004A5A40 *)*(char **)(p + 0xA8))->m18(0x15);
            *(int *)(p + 0xD4) = 2;
        }
        ((O004A5A40 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (((O004A5A40 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004A5A40P *)p)->mEC(0xE);
        }
        ((O004A5A40 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

class O004A5E00 {
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

class O004A5E00P {
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

static inline char *mgr004A5E00(void) { return *(char **)(*(char **)D_01CAFF0C + 0xC); }

extern "C" void func_004A5E00(char *p) {
    float m[16] __attribute__((aligned(16)));
    float a;
    float b;
    short s;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (((O004A5E00 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004A5E00 *)*(char **)(p + 0xA8))->m18(0x3F);
            ((O004A5E00 *)*(char **)(p + 0xA8))->m48(0x3E4, *(char **)(p + 0x10) + 0x10);
        }
        if (*(unsigned char *)(mgr004A5E00() + 0x2848) != 0x1F) {
            ((O004A5E00 *)*(char **)(p + 0xA8))->m18(0x1E);
            *(int *)(p + 0xD4) = 1;
            break;
        }
        a = 8.0088f;
        b = -22.0434f;
        func_00105300((char *)m, func_002D9F00(mgr004A5E00(), 0x12));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(m) : "memory");
        *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
        *(float *)(*(char **)(p + 0x10) + 0x24) = 0.0f;
        s = *(short *)(*(char **)(p + 0x10) + 0x50) - *(short *)(mgr004A5E00() + 0x90) + 0x4000;
        if (s > 0) {
            s = 0;
        } else {
            s = -0x8000;
            a *= -1.0f;
            b *= -1.0f;
        }
        *(short *)(*(char **)(p + 0x10) + 0x50) = s + *(short *)(mgr004A5E00() + 0x90);
        *(float *)(*(char **)(p + 0x10) + 0x10) += a * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) + b * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x14) += -28.8183f;
        *(float *)(*(char **)(p + 0x10) + 0x18) += b * func_00131C20(*(short *)(*(char **)(p + 0x10) + 0x50)) - a * func_00131BA0(*(short *)(*(char **)(p + 0x10) + 0x50));
        *(float *)(*(char **)(p + 0x10) + 0x1C) = 1.0f;
        break;
    case 1:
        if (((O004A5E00 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004A5E00 *)*(char **)(p + 0xA8))->m18(0x14);
            *(int *)(p + 0xD4) = 2;
        }
        ((O004A5E00 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (((O004A5E00 *)*(char **)(p + 0xA8))->m2C()) {
            ((O004A5E00P *)p)->mEC(0xE);
        }
        ((O004A5E00 *)*(char **)(p + 0xA8))->m24();
        break;
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

extern "C" void func_0046B7E0(char *p) {
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

class A4A7 {
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

class P4A7 {
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

extern "C" void func_004A7FE0(char *p) {
    short d;
    int lim;
    if (!(((A4A7 *)*(char **)(p + 0xA8))->m28() < D_00555080[0]) && ((A4A7 *)*(char **)(p + 0xA8))->m28() <= D_00555084[0]) {
        ((P4A7 *)p)->m6C();
        ((P4A7 *)p)->m70();
        d = ((P4A7 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
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
        if (!(((A4A7 *)*(char **)(p + 0xA8))->m28() < 25.0f)) {
            *(int *)(p + 0xD4) = 1;
        }
        ((A4A7 *)*(char **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!(((A4A7 *)*(char **)(p + 0xA8))->m28() < 30.0f)) {
            ((A4A7 *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 2;
        }
        ((A4A7 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!(((A4A7 *)*(char **)(p + 0xA8))->m28() < 34.0f)) {
            ((A4A7 *)*(char **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 3;
        }
        ((A4A7 *)*(char **)(p + 0xA8))->m24();
        break;
    case 3:
        if (((A4A7 *)*(char **)(p + 0xA8))->m2C()) {
            ((A4A7 *)*(char **)(p + 0xA8))->m44();
            ((P4A7 *)p)->mEC(0xE);
        }
        ((A4A7 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

class A46C {
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
    virtual void m40();
    virtual void m44();
    virtual void m48(int, char *);
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void m70();
};

class P46C {
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

typedef struct { float f[4]; } F46C;

static inline unsigned int rnd46C(void) {
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

static inline unsigned char nz46C(int x) { if (x == 0) return 0; return 1; }

extern "C" void func_0046BBC0(char *p) {
    float v[2] __attribute__((aligned(16)));
    float q[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short s;
    unsigned int y;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 100.0f)) {
            ((A46C *)*(char **)(p + 0xA8))->m40();
            ((A46C *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 1;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 104.0f)) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCE) = 4;
            *(unsigned char *)(p + 0xCF) = 0;
            ((A46C *)*(char **)(p + 0xA8))->m18(0x57);
            ((A46C *)*(char **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            v[0] = 87.0f;
            v[1] = 25.0f;
            ((A46C *)*(char **)(p + 0xA8))->m48(0xBB8, (char *)v);
            ((A46C *)*(char **)(p + 0xA8))->m40();
            *(int *)(p + 0xD4) = 2;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 25.0f)) {
            ((P46C *)p)->m6C();
            y = rnd46C();
            *(F46C *)(*(char **)(p + 0x10) + 0x10) = *(F46C *)(p + 0x20);
            s = (unsigned short)y;
            *(float *)(*(char **)(p + 0x10) + 0x10) += 300.0f * func_00131BA0(s);
            *(float *)(*(char **)(p + 0x10) + 0x18) += 300.0f * func_00131C20(s);
            if (nz46C(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C))) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] += 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, r, m, 0)) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = r[1];
                }
            }
            *(int *)(p + 0xD4) = 3;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 3:
        ((P46C *)p)->m70();
        *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
        *(int *)(p + 0xD4) = 4;
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 30.0f)) {
            ((A46C *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 8, 0);
            *(int *)(p + 0xD4) = 5;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 5:
        if (!(((A46C *)*(char **)(p + 0xA8))->m28() < 34.0f)) {
            ((A46C *)*(char **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 6;
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    case 6:
        if (((A46C *)*(char **)(p + 0xA8))->m2C()) {
            ((A46C *)*(char **)(p + 0xA8))->m44();
            ((P46C *)p)->mEC(0xE);
        }
        ((A46C *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

class A4A8 {
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
    virtual void m40();
    virtual void m44();
    virtual void m48(int, char *);
    virtual void u4C();
    virtual void u50();
    virtual void u54();
    virtual void u58();
    virtual void u5C();
    virtual void u60();
    virtual void u64();
    virtual void u68();
    virtual void u6C();
    virtual void m70();
};

class P4A8 {
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

typedef struct { float f[4]; } F4A8;
extern "C" int func_001F9A70(int, char *, float);
extern "C" int D_005BE09C;
extern "C" void func_00138330(void);
extern "C" int func_001ACCF0(int, float, float, float, float);
extern "C" void func_003FA440(char *, int);
extern "C" char *func_0042F650(char *, unsigned int);
extern "C" void func_003FA730(char *, char *, char *, float *, float *);
extern "C" int func_003FA5B0(char *, float *);
extern "C" void func_003FA5F0(char *, int, char *);
extern "C" void func_0041D6E0(char *, char *, int, float);
extern "C" int func_0041E120(char *, float);
extern "C" void func_003FA3F0(char *, int);
extern "C" unsigned char D_0056BA62[];
extern "C" int func_0041D600(char *);
extern "C" void func_0041D9E0(char *, float *, float *);
extern "C" char *func_00448600(int, char *, float *);
extern "C" void func_0041D840(char *, char *, float);
extern "C" void func_003305E0(char *, int, int, char *, int, int, int);

static inline unsigned int rnd4A8(void) {
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

static inline unsigned char nz4A8(int x) { if (x == 0) return 0; return 1; }

extern "C" void func_004A83C0(char *p) {
    float v[2] __attribute__((aligned(16)));
    float q[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    short s;
    unsigned int y;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 100.0f)) {
            ((A4A8 *)*(char **)(p + 0xA8))->m40();
            ((A4A8 *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x19, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 1;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 1:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 104.0f)) {
            *(unsigned char *)(p + 0xCD) = 0;
            *(unsigned char *)(p + 0xCE) = 4;
            *(unsigned char *)(p + 0xCF) = 0;
            ((A4A8 *)*(char **)(p + 0xA8))->m18(0x57);
            ((A4A8 *)*(char **)(p + 0xA8))->m48(0x386, *(char **)(p + 0x10) + 0x10);
            v[0] = 87.0f;
            v[1] = 25.0f;
            ((A4A8 *)*(char **)(p + 0xA8))->m48(0xBB8, (char *)v);
            ((A4A8 *)*(char **)(p + 0xA8))->m40();
            *(int *)(p + 0xD4) = 2;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 2:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 25.0f)) {
            ((P4A8 *)p)->m6C();
            y = rnd4A8();
            *(F4A8 *)(*(char **)(p + 0x10) + 0x10) = *(F4A8 *)(p + 0x20);
            s = (unsigned short)y;
            *(float *)(*(char **)(p + 0x10) + 0x10) += 250.0f * func_00131BA0(s);
            *(float *)(*(char **)(p + 0x10) + 0x18) += 250.0f * func_00131C20(s);
            if (nz4A8(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C))) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(q), "r"(*(char **)(p + 0x10) + 0x10) : "memory");
                q[1] += 400.0f;
                q[3] = 1.0f;
                if (func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, q, r, m, 0)) {
                    *(float *)(*(char **)(p + 0x10) + 0x14) = r[1];
                }
            }
            *(int *)(p + 0xD4) = 3;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 3:
        ((P4A8 *)p)->m70();
        *(short *)(*(char **)(p + 0x10) + 0x50) = *(short *)(p + 0x30);
        *(int *)(p + 0xD4) = 4;
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 30.0f)) {
            ((A4A8 *)*(char **)(p + 0xA8))->m48(3, *(char **)(p + 0x10) + 0x10);
            func_00330BD0(D_01DFABA0, 0x1A, *(char **)(p + 0x10) + 0x10, 6, 0);
            *(int *)(p + 0xD4) = 5;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 5:
        if (!(((A4A8 *)*(char **)(p + 0xA8))->m28() < 34.0f)) {
            ((A4A8 *)*(char **)(p + 0xA8))->m48(0x387, *(char **)(p + 0x10) + 0x10);
            *(int *)(p + 0xD4) = 6;
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    case 6:
        if (((A4A8 *)*(char **)(p + 0xA8))->m2C()) {
            ((A4A8 *)*(char **)(p + 0xA8))->m44();
            ((P4A8 *)p)->mEC(0xE);
        }
        ((A4A8 *)*(char **)(p + 0xA8))->m24();
        break;
    }
}

class Anim8 {
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
};

class Self8 {
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
    virtual void dE8();
    virtual void mEC(int);
};

extern "C" void func_004674A0(char *p) {
    short d;
    short e;
    float k;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim8 **)(p + 0xA8))->m28() < 3.0f) && (*(Anim8 **)(p + 0xA8))->m28() <= 28.0f) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += (float)*(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if ((*(Anim8 **)(p + 0xA8))->m2C() != 0) ((Self8 *)p)->mEC(0xE);
        (*(Anim8 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim8 **)(p + 0xA8))->m28() < 25.0f) && (*(Anim8 **)(p + 0xA8))->m28() <= 30.0f) {
            ((Self8 *)p)->m6C();
            ((Self8 *)p)->m70();
            d = ((Self8 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            k = 2731.0f * *(float *)(p + 0xB0);
            if (!((float)d <= k)) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
            }
            k = 2731.0f * *(float *)(p + 0xB0);
            if ((float)d < -k) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
            }
        }
        if ((*(Anim8 **)(p + 0xA8))->m2C() != 0) ((Self8 *)p)->mEC(0xE);
        (*(Anim8 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim8 **)(p + 0xA8))->m28() < 25.0f) && (*(Anim8 **)(p + 0xA8))->m28() <= 30.0f) {
            ((Self8 *)p)->m6C();
            ((Self8 *)p)->m70();
            e = ((Self8 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            k = 2731.0f * *(float *)(p + 0xB0);
            if (!((float)e <= k)) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
            }
            k = 2731.0f * *(float *)(p + 0xB0);
            if ((float)e < -k) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
            }
        }
        if ((*(Anim8 **)(p + 0xA8))->m2C() != 0) ((Self8 *)p)->mEC(0xE);
        (*(Anim8 **)(p + 0xA8))->m24();
        break;
    }
}

class Anim8_00366760 {
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
};

class Self8_00366760 {
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
    virtual void dE8();
    virtual void mEC(int);
};

extern "C" void func_00366760(char *p) {
    short d;
    short e;
    float k;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim8_00366760 **)(p + 0xA8))->m28() < 3.0f) && (*(Anim8_00366760 **)(p + 0xA8))->m28() <= 28.0f) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += (float)*(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if ((*(Anim8_00366760 **)(p + 0xA8))->m2C() != 0) ((Self8_00366760 *)p)->mEC(0xE);
        (*(Anim8_00366760 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim8_00366760 **)(p + 0xA8))->m28() < 25.0f) && (*(Anim8_00366760 **)(p + 0xA8))->m28() <= 30.0f) {
            ((Self8_00366760 *)p)->m6C();
            ((Self8_00366760 *)p)->m70();
            d = ((Self8_00366760 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            k = 2731.0f * *(float *)(p + 0xB0);
            if (!((float)d <= k)) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
            }
            k = 2731.0f * *(float *)(p + 0xB0);
            if ((float)d < -k) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
            }
        }
        if ((*(Anim8_00366760 **)(p + 0xA8))->m2C() != 0) ((Self8_00366760 *)p)->mEC(0xE);
        (*(Anim8_00366760 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim8_00366760 **)(p + 0xA8))->m28() < 25.0f) && (*(Anim8_00366760 **)(p + 0xA8))->m28() <= 30.0f) {
            ((Self8_00366760 *)p)->m6C();
            ((Self8_00366760 *)p)->m70();
            e = ((Self8_00366760 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            k = 2731.0f * *(float *)(p + 0xB0);
            if (!((float)e <= k)) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
            }
            k = 2731.0f * *(float *)(p + 0xB0);
            if ((float)e < -k) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
            }
        }
        if ((*(Anim8_00366760 **)(p + 0xA8))->m2C() != 0) ((Self8_00366760 *)p)->mEC(0xE);
        (*(Anim8_00366760 **)(p + 0xA8))->m24();
        break;
    }
}

class Anim8_004A3CB0 {
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
};

class Self8_004A3CB0 {
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
    virtual void dE8();
    virtual void mEC(int);
};

extern "C" void func_004A3CB0(char *p) {
    short d;
    short e;
    float k;
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(Anim8_004A3CB0 **)(p + 0xA8))->m28() < 3.0f) && (*(Anim8_004A3CB0 **)(p + 0xA8))->m28() <= 28.0f) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += (float)*(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if ((*(Anim8_004A3CB0 **)(p + 0xA8))->m2C() != 0) ((Self8_004A3CB0 *)p)->mEC(0xE);
        (*(Anim8_004A3CB0 **)(p + 0xA8))->m24();
        break;
    case 3:
        if (!((*(Anim8_004A3CB0 **)(p + 0xA8))->m28() < 25.0f) && (*(Anim8_004A3CB0 **)(p + 0xA8))->m28() <= 30.0f) {
            ((Self8_004A3CB0 *)p)->m6C();
            ((Self8_004A3CB0 *)p)->m70();
            d = ((Self8_004A3CB0 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            k = 2731.0f * *(float *)(p + 0xB0);
            if (!((float)d <= k)) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
            }
            k = 2731.0f * *(float *)(p + 0xB0);
            if ((float)d < -k) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
            }
        }
        if ((*(Anim8_004A3CB0 **)(p + 0xA8))->m2C() != 0) ((Self8_004A3CB0 *)p)->mEC(0xE);
        (*(Anim8_004A3CB0 **)(p + 0xA8))->m24();
        break;
    case 4:
        if (!((*(Anim8_004A3CB0 **)(p + 0xA8))->m28() < 25.0f) && (*(Anim8_004A3CB0 **)(p + 0xA8))->m28() <= 30.0f) {
            ((Self8_004A3CB0 *)p)->m6C();
            ((Self8_004A3CB0 *)p)->m70();
            e = ((Self8_004A3CB0 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
            k = 2731.0f * *(float *)(p + 0xB0);
            if (!((float)e <= k)) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + k;
            }
            k = 2731.0f * *(float *)(p + 0xB0);
            if ((float)e < -k) {
                *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) - k;
            }
        }
        if ((*(Anim8_004A3CB0 **)(p + 0xA8))->m2C() != 0) ((Self8_004A3CB0 *)p)->mEC(0xE);
        (*(Anim8_004A3CB0 **)(p + 0xA8))->m24();
        break;
    }
}

class A464 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int);
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual int m2C();
    virtual int m30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void m48(int, char *);
};

class P464 {
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void uE8();
    virtual void mEC(int);
};

static inline unsigned int rnd464(void) {
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

extern "C" void func_004647B0(char *p) {
    short d;
    ((P464 *)p)->m6C();
    ((P464 *)p)->m70();
    d = ((P464 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x100) {
        d = 0x100;
    }
    if (d < -0x100) {
        d = -0x100;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(float *)(p + 0xC4) -= *(float *)(p + 0xB0)) <= 0.0f)) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += *(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if (((A464 *)*(char **)(p + 0xA8))->m2C()) {
            *(unsigned char *)(p + 0xCD) = 1;
            ((A464 *)*(char **)(p + 0xA8))->m18(0x38);
            switch (rnd464() & 1) {
            case 0:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 33.0f;
            *(float *)(p + 0xE8) = 8.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -1.5f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P464 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            case 1:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 44.0f;
            *(float *)(p + 0xE8) = 4.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -2.0f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P464 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        ((P464 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if (((A464 *)*(char **)(p + 0xA8))->m30()) {
                *(unsigned char *)(p + 0xCD) = 0;
                ((A464 *)*(char **)(p + 0xA8))->m18(0x39);
                ((A464 *)*(char **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
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
        if (((A464 *)*(char **)(p + 0xA8))->m2C()) {
            ((P464 *)p)->mEC(0xE);
        }
        break;
    }
}

class A4A1 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int);
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual int m2C();
    virtual int m30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void m48(int, char *);
};

class P4A1 {
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void uE8();
    virtual void mEC(int);
};

static inline unsigned int rnd4A1(void) {
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

extern "C" void func_004A10C0(char *p) {
    short d;
    ((P4A1 *)p)->m6C();
    ((P4A1 *)p)->m70();
    d = ((P4A1 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x100) {
        d = 0x100;
    }
    if (d < -0x100) {
        d = -0x100;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(float *)(p + 0xC4) -= *(float *)(p + 0xB0)) <= 0.0f)) {
            *(short *)(*(char **)(p + 0x10) + 0x50) += *(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if (((A4A1 *)*(char **)(p + 0xA8))->m2C()) {
            *(unsigned char *)(p + 0xCD) = 1;
            ((A4A1 *)*(char **)(p + 0xA8))->m18(0x38);
            switch (rnd4A1() & 1) {
            case 0:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 33.0f;
            *(float *)(p + 0xE8) = 8.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -1.5f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P4A1 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            case 1:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 44.0f;
            *(float *)(p + 0xE8) = 4.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -2.0f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P4A1 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        ((P4A1 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if (((A4A1 *)*(char **)(p + 0xA8))->m30()) {
                *(unsigned char *)(p + 0xCD) = 0;
                ((A4A1 *)*(char **)(p + 0xA8))->m18(0x39);
                ((A4A1 *)*(char **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
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
        if (((A4A1 *)*(char **)(p + 0xA8))->m2C()) {
            ((P4A1 *)p)->mEC(0xE);
        }
        break;
    }
}

class A363 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void m18(int);
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual int m2C();
    virtual int m30();
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void m48(int, char *);
};

class P363 {
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
    virtual void mE4(char *, char *, char *, char *);
    virtual void uE8();
    virtual void mEC(int);
};

static inline unsigned int rnd363(void) {
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

extern "C" void func_00363170(char *p) {
    short d;
    float k;
    ((P363 *)p)->m6C();
    ((P363 *)p)->m70();
    d = ((P363 *)p)->m78(*(short *)(p + 0x30), *(short *)(*(char **)(p + 0x10) + 0x50));
    if (d > 0x100) {
        d = 0x100;
    }
    if (d < -0x100) {
        d = -0x100;
    }
    *(short *)(*(char **)(p + 0x10) + 0x50) += d * *(float *)(p + 0xB0);
    switch (*(int *)(p + 0xD4)) {
    case 0:
        if (!((*(float *)(p + 0xC4) -= *(float *)(p + 0xB0)) <= 0.0f)) {
            *(short *)(*(char **)(p + 0x10) + 0x50) = (float)*(short *)(*(char **)(p + 0x10) + 0x50) + (float)*(short *)(p + 0xC0) * *(float *)(p + 0xB0);
        }
        if (((A363 *)*(char **)(p + 0xA8))->m2C()) {
            *(unsigned char *)(p + 0xCD) = 1;
            ((A363 *)*(char **)(p + 0xA8))->m18(0x38);
            switch (rnd363() & 1) {
            case 0:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 33.0f;
            *(float *)(p + 0xE8) = 8.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -1.5f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P363 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            case 1:
            *(float *)(p + 0xE0) = 0.0f;
            *(float *)(p + 0xE4) = 44.0f;
            *(float *)(p + 0xE8) = 4.0f;
            *(float *)(p + 0xEC) = 1.0f;
            *(float *)(p + 0xF0) = 0.0f;
            *(float *)(p + 0xF4) = -2.0f;
            *(float *)(p + 0xF8) = 0.0f;
            *(float *)(p + 0xFC) = 1.0f;
            ((P363 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
            break;
            }
            *(int *)(p + 0xD4) = 1;
        }
        break;
    case 1:
        ((P363 *)p)->mE4(p + 0xE0, p + 0xF0, *(char **)(p + 0x10) + 0x20, *(char **)(p + 0x10) + 0x30);
        if (*(float *)(*(char **)(p + 0x10) + 0x24) < 0.0f) {
            if (((A363 *)*(char **)(p + 0xA8))->m30()) {
                *(unsigned char *)(p + 0xCD) = 0;
                ((A363 *)*(char **)(p + 0xA8))->m18(0x39);
                ((A363 *)*(char **)(p + 0xA8))->m48(0xA, *(char **)(p + 0x10) + 0x10);
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
        if (((A363 *)*(char **)(p + 0xA8))->m2C()) {
            ((P363 *)p)->mEC(0xE);
        }
        break;
    }
}

static inline int get8_2D6(char *q) { return *(int *)(q + 8); }

extern "C" void func_002D6A10(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x3500), "r"(v) : "memory");
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v) : "memory");
    for (i = 0; i < 38; i++) {
        if (((char **)(p + 0x674))[i] != 0 && *(char **)(((char **)(p + 0x674))[i] + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x674))[i] + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(((char **)(p + 0x674))[i] + 0x104) + 0x3C) = 1.0f;
        }
    }
    for (i = 0; i < 8; i++) {
        if (((char **)(p + 0x70C))[i] != 0 && *(char **)(((char **)(p + 0x70C))[i] + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x70C))[i] + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(((char **)(p + 0x70C))[i] + 0x104) + 0x3C) = 1.0f;
        }
    }
    for (i = 0; i < 19; i++) {
        if (((char **)(p + 0x72C))[i] != 0 && *(char **)(((char **)(p + 0x72C))[i] + 0x104) != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(((char **)(p + 0x72C))[i] + 0x104) + 0x30), "r"(v) : "memory");
            *(float *)(*(char **)(((char **)(p + 0x72C))[i] + 0x104) + 0x3C) = 1.0f;
        }
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(p + 0x3540), "r"(p + 0xF0) : "memory");
    if ((unsigned char)func_001F9A70(get8_2D6(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548), p + 0x50, 1000.0f) == 0) {
        *(unsigned char *)(p + 4) = 3;
        func_001AD140(p);
    }
}

class S3E5 {
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
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual int m1FC(unsigned char *, float *);
};

class A3E5 {
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
    virtual void mCC(char *);
};

class B3E5 {
public:
    virtual void u8();
    virtual void uC();
    virtual void m10();
};

extern "C" void func_003E5060(char *p) {
    unsigned char c;
    float x;
    unsigned char ok;
    switch (*(unsigned char *)(p + 0x342C)) {
    case 0x49:
    case 0x4A:
    case 0x4B:
        ok = 1;
        break;
    default:
        if ((unsigned char)((S3E5 *)p)->m1FC(&c, &x) == 1) {
            func_001A5CC0(func_00279290(p + 0x980));
            func_001A5CC0(func_00279290(p + 0xF80));
            func_00138340(0x40);
        } else {
            func_001A5B90(func_00279290(p + 0x980));
            func_001A5B90(func_00279290(p + 0xF80));
            func_00138330();
        }
        ok = func_001ACCF0(D_005BE09C, *(float *)(p + 0x710), 100.0f + *(float *)(p + 0x714), *(float *)(p + 0x718), 150.0f);
        break;
    }
    if (ok) {
        ((A3E5 *)(p + 0x980))->mCC(p + 0x6E0);
        ((A3E5 *)(p + 0xF80))->mCC(p + 0x6E0);
        switch (*(int *)(p + 0x7D8)) {
        case 1:
            ((B3E5 *)(p + 0x1580))->m10();
            ((B3E5 *)(p + 0x1610))->m10();
            break;
        }
    }
    switch (*(int *)(p + 0x35E4)) {
    case 1:
    case 2:
    case 3:
    case 4:
        ((A3E5 *)(p + 0x16C0))->mCC(p + 0x6E0);
        break;
    }
    if (*(unsigned char *)(p + 0x36E1)) {
        ((A3E5 *)(p + 0x16C0))->mCC(p + 0x6E0);
    }
}

class B0_4262 {
public:
    char pad[0x40];
};

class B1_4262 {
public:
    int x;
};

class D_4262 : public B0_4262, public B1_4262 {
public:
    int y;
};

class A4262 {
public:
    virtual void u8();
    virtual void uC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual float m28(int);
};

class X4262 {
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
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void m130();
};

static inline float frand4262(void) {
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
    return 2.3283064e-10f * (float)y;
}

extern "C" void func_00426280(D_4262 *self) {
    char *p = (char *)self;
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float *bp;
    float t;
    float f;
    unsigned int i;
    char *o;
    int k;
    t = ((A4262 *)(p + 0x544))->m28(0);
    *(unsigned int *)(p + 0x110) |= 0x40000001;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        func_003FA440(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (1.0f < t && t < 3.0f) {
            for (i = 0; i < 4; i++) {
                o = func_0042F650(p, i);
                if (o != 0) {
                    ((X4262 *)o)->m130();
                }
            }
            if (*(unsigned char *)(p + 0x3AB) > 0) {
                bp = b;
                func_003FA730(p, p + 0x50, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, a, bp);
                if (100.0f * frand4262() < 50.0f) {
                    k = (unsigned char)func_003FA5B0(p, a);
                } else {
                    k = (unsigned char)func_003FA5B0(p, bp);
                }
                func_003FA5F0(p, k, p + 0x60);
                f = 0.2f * (float)*(unsigned char *)(p + 0x3AB);
                *(float *)(p + 0x60) *= f;
                *(float *)(p + 0x68) *= f;
                *(unsigned char *)(p + 6) = 2;
            }
        }
    case 2:
        if (*(unsigned char *)(p + 0x3AB) > 0 && 90.0f < t && t < 120.0f) {
            func_0041D6E0((char *)(B1_4262 *)self, p + 0x60, 0, *(float *)(p + 0x10));
            func_0041E120((char *)(B1_4262 *)self, 0.0f);
        }
        if ((unsigned char)func_0024E800(p + 0xB60) == 1) {
            func_003FA3F0(p, 0);
        }
        break;
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

class X42F {
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
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void m130();
};

static inline float frand42F(void) {
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
    return 2.3283064e-10f * (float)y;
}

extern "C" void func_0042F160(char *p) {
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    unsigned char i;
    char *o;
    char *q;
    float t;
    if ((unsigned char)func_0041D600(p) == 0) return;
    func_001AD100(p);
    func_00206730(p + 0x460);
    if ((t = (*(float *)(p + 0x464) -= *(float *)(p + 0x10))) < 0.0f) {
        func_001AD140(p);
        return;
    }
    if (!(t <= 27.0f) && t < 32.0f && (*(float *)(p + 0x468) -= *(float *)(p + 0x10)) <= 0.0f) {
        for (i = 0; i < D_0056BA62[*(unsigned char *)(p + 0x46C) * 16]; i++) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(p + 0x450) : "memory");
            v[0] = v[0] + (200.0f * frand42F() - 100.0f);
            v[1] = v[1] + (200.0f * frand42F() - 100.0f);
            v[2] = v[2] + (200.0f * frand42F() - 100.0f);
            func_0041D9E0(p + 0x50, v, w);
            o = func_00448600(*(int *)(p + 0xD0), p + 0x50, w);
            if (o != 0) {
                ((X42F *)o)->m130();
            }
        }
        *(float *)(p + 0x468) = 1.0f;
    }
    q = p;
    if (q) q += 0x40;
    func_0041D840(q, p + 0x150, 1.0f);
}

class B0_455 {
public:
    char pad[0x40];
};

class B1_455 {
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
    virtual void m34(char *, char *);
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
    virtual void m64(char *, int, float, float, float);
    char b4;
    signed char b5;
};

class D_455 : public B0_455, public B1_455 {
public:
    int y;
};

class P_455 : public B0_455, public B1_455 {
public:
    int z;
};

extern "C" int func_002242C0(D_455 *);
extern "C" int func_00455B90(P_455 *);
extern "C" void func_00456B70(P_455 *, int, char *);

extern "C" void func_00455880(P_455 *self, char *a, B1_455 *e, char *w) {
    char *p = (char *)self;
    int r;
    if (a == 0) return;
    if (e == 0) return;
    if (e->b5 == 0 && (unsigned char)func_002242C0(static_cast<D_455 *>(e)) == 1) return;
    if (((signed char *)a)[2] != 0) {
        if (e->b5 == 2) {
            switch (*(unsigned char *)(a + 0x3D)) {
            case 0xD:
            case 0xE:
                break;
            default:
                return;
            }
        } else {
            switch (*(unsigned char *)(a + 0x3D)) {
            case 0xF:
            case 0x10:
                break;
            default:
                return;
            }
        }
    }
    if (e->b5 == 0 && (unsigned char)func_002242C0(static_cast<D_455 *>(e)) == 1) return;
    r = (unsigned char)func_00455B90(self);
    if (r == 1) {
        e->m64(a, 0, *(float *)(a + 4), 1.0f, 1.0f);
    } else {
        e->m34(a, (char *)(B1_455 *)self);
        *(unsigned char *)(p + 0x641) = 1;
    }
    func_00456B70(self, r, w);
    if (r == 1) {
        func_003305E0(D_01DFABA0, 8, 0x41, w, 0x22, 0, 0);
    } else {
        func_003305E0(D_01DFABA0, 8, 0x42, w, 0x22, 0, 0);
    }
}

class V393 {
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
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual void u2EC();
    virtual void u2F0();
    virtual void u2F4();
    virtual void u2F8();
    virtual void u2FC();
    virtual void u300();
    virtual void u304();
    virtual void u308();
    virtual void u30C();
    virtual void u310();
    virtual void u314();
    virtual void u318();
    virtual void u31C();
    virtual void u320();
    virtual void u324();
    virtual void u328();
    virtual void u32C();
    virtual void u330();
    virtual void u334();
    virtual void u338();
    virtual void u33C();
    virtual void u340();
    virtual void u344();
    virtual void u348();
    virtual void u34C();
    virtual void m350(char *, char *);
};

typedef struct { short h[3]; } __attribute__((aligned(4))) S6_393;

extern "C" S6_393 D_005BCC80;
extern "C" S6_393 D_005BCC88;
extern "C" void func_005012F0(char *, char *);
extern "C" char D_00562AA0[];
extern "C" void func_00376E40(char *);
extern "C" void func_00376B80(char *, int);
extern "C" short func_0034B940(char *, char *);
extern "C" void func_0034B8C0(char *, short *, int);
extern "C" int func_0024E780(char *, int, int);
extern "C" void func_0024E7B0(char *, int, int);
extern "C" void func_00376B40(char *, int);
extern "C" void func_001973C0(char *, int, int);
extern "C" void func_00197630(char *);
extern "C" void func_001A5BA0(char *, int);
extern "C" void func_001A6FD0(char *, char *);
extern "C" void func_001F8CD0(char *, char *);
extern "C" void func_003F32B0(char *);
extern "C" void func_003F2E90(char *);
extern "C" void func_003EAF00(char *);
extern "C" void func_003E9930(char *);
extern "C" void func_003E9EB0(char *);

extern "C" void func_00393890(char *p, char *a, char *w) {
    S6_393 u;
    S6_393 t;
    unsigned char b;
    u = D_005BCC80;
    t = D_005BCC88;
    if ((*(unsigned char *)(p + 0x2DD7) != 0) == 1) return;
    *(unsigned char *)(p + 0x2DD7) = 1;
    if (*(signed char *)(a + 2) == 0 && (*(unsigned char *)(p + 0x2EC4) >= *(unsigned char *)(p + 0x2EC5)) == 1) {
        func_003A02B0(p, t.h[*(unsigned char *)(p + 0x2F3C)]);
    } else {
        if (*(signed char *)(a + 2) == 1 && (*(unsigned char *)(p + 0x2EC4) >= *(unsigned char *)(p + 0x2EC5)) == 1) {
            b = *(unsigned char *)(p + 0x2EE1);
            if (b == 1 || (b > 1 && !(*(unsigned short *)(p + 0x2EDE) & 0x100))) {
                *(unsigned char *)(p + 0x2DE5) = 0;
            }
        }
        func_003A02B0(p, u.h[*(unsigned char *)(p + 0x2F3C)]);
    }
    *(char *)(p + 0x16C) = *(signed char *)(a + 0);
    *(char *)(p + 0x16D) = *(signed char *)(a + 1);
    *(char *)(p + 0x16E) = *(signed char *)(a + 2);
    *(float *)(p + 0x170) = *(float *)(a + 4);
    *(float *)(p + 0x174) = *(float *)(a + 8);
    *(float *)(p + 0x178) = *(float *)(a + 0xC);
    *(float *)(p + 0x17C) = *(float *)(a + 0x10);
    *(float *)(p + 0x180) = *(float *)(a + 0x14);
    *(char *)(p + 0x184) = *(signed char *)(a + 0x18);
    *(float *)(p + 0x188) = *(float *)(a + 0x1C);
    *(char *)(p + 0x18C) = *(signed char *)(a + 0x20);
    *(float *)(p + 0x190) = *(float *)(a + 0x24);
    *(float *)(p + 0x194) = *(float *)(a + 0x28);
    *(float *)(p + 0x198) = *(float *)(a + 0x2C);
    *(char *)(p + 0x19C) = *(unsigned char *)(a + 0x30);
    *(int *)(p + 0x1A0) = *(int *)(a + 0x34);
    *(float *)(p + 0x1A4) = *(float *)(a + 0x38);
    *(char *)(p + 0x1A8) = *(signed char *)(a + 0x3C);
    *(char *)(p + 0x1A9) = *(signed char *)(a + 0x3D);
    *(char *)(p + 0x1AA) = *(signed char *)(a + 0x3E);
    ((V393 *)p)->m350(a, w);
}

class O501 {
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
    virtual void m88(int, int, int);
    virtual void u8C();
    virtual void m90(int);
};

extern "C" void func_00501300(char *p, char *a) {
    switch (*(signed char *)(a + 1)) {
    case 0:
        func_001A1E70(func_00279290(p + 0xC0), 0);
        *(unsigned char *)(a + 5) = 4;
        *(unsigned char *)(a + 3) = 0;
        (*(signed char *)(a + 1))++;
    case 1:
        *(unsigned char *)(a + 5) += 2;
        ((O501 *)(p + 0xC0))->m88(0, *(unsigned char *)(a + 5), 1);
        if (!(*(unsigned char *)(a + 5) < 0x40)) {
            *(unsigned char *)(a + 3) = 1;
            (*(signed char *)(a + 1))++;
        }
        break;
    case 2:
        if (*(signed char *)(a + 4) == 0) {
            *(unsigned char *)(a + 5) = 0x40;
            ((O501 *)(p + 0xC0))->m88(0, *(unsigned char *)(a + 5), 1);
            *(signed char *)(a + 4) = -1;
            *(unsigned char *)(a + 3) = 0;
            (*(signed char *)(a + 1))++;
        }
        break;
    case 3:
        *(unsigned char *)(a + 5) -= 8;
        ((O501 *)(p + 0xC0))->m88(0, *(unsigned char *)(a + 5), 1);
        if (!(*(unsigned char *)(a + 5) > 0)) {
            ((O501 *)(p + 0xC0))->m90(0);
            func_001A2000(func_00279290(p + 0xC0), 0);
            *(unsigned char *)(a + 3) = 3;
            *(signed char *)(a + 1) = -1;
        }
        break;
    case -1:
    default:
        ((O501 *)(p + 0xC0))->m90(0);
        func_001A2000(func_00279290(p + 0xC0), 0);
        func_005012F0(p, a);
        break;
    }
}

class B0_4B0 {
public:
    char pad[0x40];
};

class B1_4B0 {
public:
    int x;
};

class D_4B0 : public B0_4B0, public B1_4B0 {
public:
    int y;
};

extern "C" void func_004B0820(D_4B0 *self) {
    char *p = (char *)self;
    short s;
    float f;
    float d;
    unsigned char r;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 0x97A) = 2;
        func_00376B80(p, -1);
        f = 25.0f;
        if (*(int *)(p + 0x910) == 0) f = f * 1.05f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        s = func_0034B940(p + 0x50, D_00562AA0);
        d = func_00132470(p + 0x50, D_00562AA0);
        if (!(d <= 1800.0f)) *(short *)(p + 0x96C) = -0x42D7;
        if (d < 1700.0f) *(short *)(p + 0x96C) = -0x3E93;
        s += *(short *)(p + 0x96C);
        s -= *(short *)(p + 0x90);
        if (!(d <= 1900.0f)) {
            func_0034B8C0(p + 0x90, &s, (int)(728.0f * *(float *)(p + 0x10)));
        } else {
            func_0034B8C0(p + 0x90, &s, (int)(182.0f * *(float *)(p + 0x10)));
        }
        func_0041D6E0((char *)(B1_4B0 *)self, p + 0x60, 1, *(float *)(p + 0x10));
        r = func_0024E780(p + 0x2B20, 0, 0);
        func_0024E7B0(p + 0x2B20, 0, 0);
        if (r == 1) {
            if (*(unsigned short *)(p + 0x970) != 0 && *(signed char *)(p + 0x973) > 5) {
                *(signed char *)(p + 0x973) -= 2;
            }
            (*(signed char *)(p + 0x973))--;
            if (!(*(signed char *)(p + 0x973) > 0)) {
                *(int *)(p + 0x8FC) &= ~0x400;
                func_00376B40(p, 5);
            }
        }
        break;
    }
}

class O202 {
public:
    virtual void u8();
    virtual char *mC();
    virtual void u10();
    virtual void u14();
    virtual void u18();
    virtual void u1C();
    virtual void u20();
    virtual void u24();
    virtual void u28();
    virtual void u2C();
    virtual void m30(char *, char *, char *);
    virtual void u34();
    virtual void u38();
    virtual void u3C();
    virtual void u40();
    virtual void u44();
    virtual void u48();
    virtual void u4C();
    virtual void m50();
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
    virtual void mD4(int);
};

static inline char *ent202(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch202(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent202(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_002025A0(char *p, char *h) {
    char *x;
    char *y;
    func_001973C0(p + 0x480, 0x18, 0x20);
    x = gch202(h, 2);
    y = gch202(h, 1);
    ((O202 *)(p + 0x40))->m30(x, y, p + 0x480);
    func_00197630(p + 0x480);
    *(unsigned char *)(p + 0x4B0) = 1;
    func_001A5BA0(((O202 *)(p + 0x40))->mC(), 0);
    func_001A6FD0(((O202 *)(p + 0x40))->mC(), p + 0x4C0);
    ((O202 *)(p + 0x40))->mD4(1);
    ((O202 *)(p + 0x40))->m50();
    *(char **)(p + 0x55C) = gch202(h, 3);
    func_001F8CD0(p + 0x500, *(char **)(p + 0x55C));
    *(char **)(p + 0x560) = gch202(h, 6);
    if (*(char **)(p + 0x560) != 0) {
        func_001F8CD0(p + 0x524, *(char **)(p + 0x560));
    }
}

class O3EB {
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
    virtual int m88();
};

typedef struct { unsigned char b[4]; } A3EB;

typedef struct { float f[9]; } M3EB;

typedef struct { float x; float y; float z; } V3EB;

typedef struct { A3EB a; M3EB m; V3EB v; float w; } T3EB;

extern "C" int func_002018A0(char *, float *, float *, float *, T3EB *, int);
extern "C" float D_005BD9D4;
extern "C" int D_00577C80[];
extern "C" int func_00437E60(char *);
extern "C" int func_004377A0(char *, char *, char *);
extern "C" int func_00433F50(char *, int, unsigned char);
extern "C" void func_004372D0(char *, int);
extern "C" int func_004361D0(char *);
extern "C" void func_002075C0(int, int, char *, int);
extern "C" void func_0022BFA0(char *, char *, char *, int);
extern "C" void func_001FD820(char *, int);
extern "C" void func_001FD3D0(char *);
extern "C" void func_001FA370(char *, int, char *, int, int *);
extern "C" float D_005BDE98;
extern "C" float D_005BDE9C;
extern "C" float D_005BDEA0;
extern "C" float D_005BDEA4;
extern "C" float D_005BDEA8;
extern "C" int func_004D2D90(char *);
extern "C" float D_005BDF0C;
extern "C" void func_004CBD90(char *);
extern "C" int func_0021CAD0(char *);

extern "C" void func_003EBE40(char *p) {
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    T3EB t;
    char *e;
    func_003F32B0(p);
    func_003F2E90(p);
    *(float *)(p + 0x710) = *(float *)(p + 0x710) - 20.0f * *(float *)(p + 0x35B0);
    *(float *)(p + 0x718) = *(float *)(p + 0x718) - 20.0f * *(float *)(p + 0x35B8);
    e = *(char **)(p + 0x21FC);
    if (e != 0 && (*(int *)(e + 8) & 0x1000)) {
        func_003EAF00(p);
        return;
    }
    if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, a, b, c, &t, 0x10) == 1) {
        *(T3EB *)(p + 0x3588) = t;
        if (((unsigned char)((*(unsigned char *)(p + 0x358B) << 8) | *(unsigned char *)(p + 0x358A)) & 0x1000) | 0x800) {
            func_003E9930(p);
            return;
        }
    } else {
        func_003E9930(p);
        return;
    }
    if (func_0024E800(p + 0x1FD0) != 0) {
        if (((O3EB *)(p + 0x130))->m88() != 0) {
            func_003E9EB0(p);
        } else {
            func_003EAF00(p);
        }
    }
}

class W434 {
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
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual int m2E8();
    virtual void u2EC();
    virtual void u2F0();
    virtual void m2F4(int);
    virtual void u2F8();
    virtual void m2FC(int);
};

extern "C" void func_00434A80(char *p) {
    switch (*(unsigned char *)(p + 0x47BF)) {
    case 0:
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((W434 *)p)->m2FC(0x71);
        *(unsigned char *)(p + 0x4858) = func_00437E60(p);
        *(int *)(p + 0x47E0) = func_004377A0(p, p + 0x50, p + 0x4859);
        *(int *)(p + 0x47E0) = func_00433F50(p, *(int *)(p + 0x47E0), *(unsigned char *)(p + 0x4858));
        func_004372D0(p, *(int *)(p + 0x47E0));
        break;
    case 1:
        *(short *)(p + 0x47BA) = (short)func_0034B940(p + 0x47F0, p + 0x50) - *(short *)(p + 0x4850);
        func_0034B8C0(p + 0x4850, (short *)(p + 0x47BA), (int)(D_005BD9D4 * *(float *)(p + 0x10)));
        if (((W434 *)p)->m2E8() != 0x90) break;
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((W434 *)p)->m2FC(0x72);
        *(int *)(p + 0x4848) = D_00577C80[*(int *)(p + 0x484C)];
        func_00330BD0(D_01DFABA0, 0x2D, (char *)func_004361D0(p), 0x22, 0);
        func_002075C0(3, 0x41, *(char **)(*(char **)(p + 0x548) + 0x104), 3);
        break;
    case 2:
        *(short *)(p + 0x47BA) = (short)func_0034B940(p + 0x47F0, p + 0x50) - *(short *)(p + 0x4850);
        func_0034B8C0(p + 0x4850, (short *)(p + 0x47BA), (int)(D_005BD9D4 * *(float *)(p + 0x10)));
        if (((W434 *)p)->m2E8() != 0x90) break;
        if (--*(int *)(p + 0x4848) > 0) {
            ((W434 *)p)->m2FC(0x72);
            break;
        }
        *(unsigned char *)(p + 0x47BF) = *(unsigned char *)(p + 0x47BF) + 1;
        ((W434 *)p)->m2FC(0x73);
        break;
    case 3:
        if (((W434 *)p)->m2E8() != 0x90) break;
        ((W434 *)p)->m2F4(0x17);
        break;
    }
}

class O333 {
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
    virtual void mB0(char *, char *);
};

static inline char *ent333(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 1) return 0; if (*(int *)(q + 8 + i * 4) == 0) return 0; return q + *(int *)(q + 8 + i * 4); }

static inline char *gch333(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return ent333(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" void func_00333C40(char *p) {
    char *e;
    *(char **)(p + 0xEC0) = gch333(*(char **)(p + 0x4D0), 3);
    *(char **)(p + 0xEC4) = gch333(*(char **)(p + 0x4D0), 4);
    *(char **)(p + 0xEC8) = gch333(*(char **)(p + 0x4D0), 5);
    *(char **)(p + 0xECC) = gch333(*(char **)(p + 0x4D0), 6);
    ((O333 *)(p + 0x740))->mB0(*(char **)(p + 0xEC0), p + 0x660);
    e = gch333(*(char **)(p + 0x4D0), 2);
    func_0022BFA0(p + 0x4E0, p + 0x660, e, 0);
    func_0022BFA0(p + 0x5A0, p + 0x660, e, 1);
    *(char **)(*(char **)(p + 0x660) + 0xFC) = p + 0x1230;
    *(unsigned char *)(p + 0x123C) = 0;
    *(int *)(p + 0x1250) = 0;
    *(int *)(p + 0x1254) = 0;
    *(int *)(p + 0x1258) = 0;
    *(int *)(p + 0x125C) = 0;
    *(int *)(p + 0x1260) = 0;
    *(int *)(p + 0x1264) = 0;
    *(int *)(p + 0x1268) = 0;
    *(int *)(p + 0x126C) = 0;
    *(int *)(p + 0x1270) = 0;
    *(int *)(p + 0x1274) = 0;
    *(int *)(p + 0x1278) = 0;
    *(int *)(p + 0x127C) = 0;
}

class O1FC {
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
    virtual void m74(float);
};

extern "C" void func_001FC220(char *p, char *h, int n, unsigned char f) {
    int t;
    unsigned short *fl;
    int k;
//P<
    unsigned short m;
    int i;
    int j;
    char *o;
//P>
    if (n > 0) {
        func_001FD820(p, n);
        *(unsigned char *)(p + 0x188) = f;
    } else {
        *(float *)(p + 0x168) = 1.0f;
        *(float *)(p + 0x148) = 1.0f;
    }
    func_001FD3D0(p);
    if (h == 0) return;
    *(float *)(p + 0x1C) = *(float *)(h + 8);
    *(float *)(p + 0x3C) = *(float *)(h + 0xC);
    *(float *)(p + 0x5C) = *(float *)(h + 0x10);
    *(float *)(p + 0x7C) = *(float *)(h + 0x14);
    *(unsigned char *)(p + 0x9C) = (*(unsigned short *)(h + 0x18) & 1) != 0;
    *(char **)(p + 0xE4) = h;
    if ((unsigned short)(*(unsigned short *)(h + 0x18) & 2) == 0) {
        fl = (unsigned short *)(h + 0x1C);
        j = 0;
        fl++;
        k = 1;
        for (i = 0; i < *(int *)(p + 0x10); i++) {
            o = (*(char ***)(p + 0x14))[i];
            m = *fl;
            fl++;
            if (m & 0x40) { func_001FA370(o + 0x10C, j, h, k, &t); k = j; j++; }
            if (m & 0x80) { func_001FA370(o + 0x120, j, h, k, &t); k = j; j++; }
            if (m & 0x100) { func_001FA370(o + 0x134, j, h, k, &t); k = j; j++; }
            if (m & 0x8) { func_001FA370(o + 0x148, j, h, k, &t); k = j; j++; }
            if (m & 0x10) { func_001FA370(o + 0x15C, j, h, k, &t); k = j; j++; }
            if (m & 0x20) { func_001FA370(o + 0x170, j, h, k, &t); k = j; j++; }
            if (m & 0x1) { func_001FA370(o + 0x184, j, h, k, &t); k = j; j++; }
            if (m & 0x2) { func_001FA370(o + 0x198, j, h, k, &t); k = j; j++; }
            if (m & 0x4) { func_001FA370(o + 0x1AC, j, h, k, &t); k = j; j++; }
        }
        *(float *)(p + 0x128) = *(float *)(p + 0x1C);
        *(unsigned char *)(p + 0xAC) = 2;
        *(char **)(p + 0xBC) = h;
        *(unsigned char *)(p + 0xA4) = 0;
    } else {
        *(char **)(p + 0xBC) = h + *(int *)h;
        *(unsigned char *)(p + 0xA4) = 1;
    }
    ((O1FC *)p)->m74(*(float *)(p + 0x128));
}

class O4C6D {
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
    virtual void uEC();
    virtual void uF0();
    virtual void uF4();
    virtual void uF8();
    virtual void uFC();
    virtual void u100();
    virtual void u104();
    virtual void u108();
    virtual void u10C();
    virtual void u110();
    virtual void u114();
    virtual void u118();
    virtual void u11C();
    virtual void u120();
    virtual void u124();
    virtual void u128();
    virtual void u12C();
    virtual void u130();
    virtual void u134();
    virtual void u138();
    virtual void u13C();
    virtual void u140();
    virtual void u144();
    virtual void u148();
    virtual void u14C();
    virtual void u150();
    virtual void u154();
    virtual void u158();
    virtual void u15C();
    virtual void u160();
    virtual void u164();
    virtual void u168();
    virtual void u16C();
    virtual void u170();
    virtual void u174();
    virtual void u178();
    virtual void u17C();
    virtual void u180();
    virtual void u184();
    virtual void u188();
    virtual void u18C();
    virtual void u190();
    virtual void u194();
    virtual void u198();
    virtual void u19C();
    virtual void u1A0();
    virtual void u1A4();
    virtual void u1A8();
    virtual void u1AC();
    virtual void u1B0();
    virtual void u1B4();
    virtual void u1B8();
    virtual void u1BC();
    virtual void u1C0();
    virtual void u1C4();
    virtual void u1C8();
    virtual void u1CC();
    virtual void u1D0();
    virtual void u1D4();
    virtual void u1D8();
    virtual void u1DC();
    virtual void u1E0();
    virtual void u1E4();
    virtual void u1E8();
    virtual void u1EC();
    virtual void u1F0();
    virtual void u1F4();
    virtual void u1F8();
    virtual void u1FC();
    virtual void u200();
    virtual void u204();
    virtual void u208();
    virtual void u20C();
    virtual void u210();
    virtual void u214();
    virtual void u218();
    virtual void u21C();
    virtual void u220();
    virtual void u224();
    virtual void u228();
    virtual void u22C();
    virtual void u230();
    virtual void u234();
    virtual void u238();
    virtual void u23C();
    virtual void u240();
    virtual void u244();
    virtual void u248();
    virtual void u24C();
    virtual void u250();
    virtual void u254();
    virtual void u258();
    virtual void u25C();
    virtual void u260();
    virtual void u264();
    virtual void u268();
    virtual void u26C();
    virtual void u270();
    virtual void u274();
    virtual void u278();
    virtual void u27C();
    virtual void u280();
    virtual void u284();
    virtual void u288();
    virtual void u28C();
    virtual void u290();
    virtual void u294();
    virtual void u298();
    virtual void u29C();
    virtual void u2A0();
    virtual void u2A4();
    virtual void u2A8();
    virtual void u2AC();
    virtual void u2B0();
    virtual void u2B4();
    virtual void u2B8();
    virtual void u2BC();
    virtual void u2C0();
    virtual void u2C4();
    virtual void u2C8();
    virtual void u2CC();
    virtual void u2D0();
    virtual void u2D4();
    virtual void u2D8();
    virtual void u2DC();
    virtual void u2E0();
    virtual void u2E4();
    virtual void u2E8();
    virtual int m2EC();
    virtual void u2F0();
    virtual void u2F4();
    virtual void m2F8(int);
    virtual void u2FC();
    virtual void m300(int);
};

extern "C" void func_004C6DF0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float n[16] __attribute__((aligned(16)));
    float f;
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        if ((unsigned char)func_004D2D90(p) != 0) {
            if (*(int *)(p + 0xB280) != 0) {
                ((O4C6D *)p)->m2F8(0x17);
            } else {
                (*(unsigned char *)(p + 0xB158))++;
                ((O4C6D *)p)->m300(0x66);
            }
        }
        break;
    case 1:
        if (((O4C6D *)p)->m2EC() == 0x77) {
            (*(unsigned char *)(p + 0xB158))++;
            ((O4C6D *)p)->m300(0x67);
            *(float *)(p + 0xB170) = D_005BDE98;
            *(float *)(p + 0xB174) = 0.0f;
        }
        break;
    case 2:
        f = *(float *)(p + 0xB170) + D_005BDE9C;
        f = f < D_005BDEA0 ? f : D_005BDEA0;
        *(float *)(p + 0xB170) = f;
        *(float *)(p + 0xB174) = *(float *)(p + 0xB174) + f;
        *(float *)(p + 0xB160) = 0.0f;
        *(float *)(p + 0xB164) = 0.0f;
        *(float *)(p + 0xB168) = *(float *)(p + 0xB170);
        *(float *)(p + 0xB16C) = 1.0f;
        __asm__ volatile("lqc2 $vf5, 0x0(%1)
	lqc2 $vf4, 0x30(%0)
	vmove.xyz $vf4, $vf5
	sqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(p + 0xB160) : "memory");
        func_00105760(n, m, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
        __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(p + 0xB160), "r"(n) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0xB160) : "memory");
        *(float *)(p + 0x5C) = 1.0f;
        if (*(float *)(p + 0x164) < D_005BDEA8) {
            (*(unsigned char *)(p + 0xB158))++;
            ((O4C6D *)p)->m300(0x68);
        } else if (!(*(float *)(p + 0xB174) < D_005BDEA4)) {
            (*(unsigned char *)(p + 0xB158))++;
            ((O4C6D *)p)->m300(0x68);
        }
        break;
    case 3:
        if (((O4C6D *)p)->m2EC() == 0x77) {
            ((O4C6D *)p)->m2F8(0x17);
        }
        break;
    }
}

class B0_4B0a {
public:
    char pad[0x40];
};

class B1_4B0a {
public:
    int x;
};

class D_4B0a : public B0_4B0a, public B1_4B0a {
public:
    int y;
};

extern "C" void func_004B0A70(D_4B0a *self) {
    char *p = (char *)self;
    short s;
    float f;
    float d;
    unsigned char r;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 0x97A) = 1;
        func_00376B80(p, -1);
        f = 25.0f;
        if (*(int *)(p + 0x910) == 0) f = f * 1.05f;
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        s = func_0034B940(p + 0x50, D_00562AA0);
        d = func_00132470(p + 0x50, D_00562AA0);
        if (!(d <= 1800.0f)) *(short *)(p + 0x96C) = 0x42D8;
        if (d < 1700.0f) *(short *)(p + 0x96C) = 0x3E94;
        s += *(short *)(p + 0x96C);
        s -= *(short *)(p + 0x90);
        if (!(d <= 1900.0f)) {
            func_0034B8C0(p + 0x90, &s, (int)(728.0f * *(float *)(p + 0x10)));
        } else {
            func_0034B8C0(p + 0x90, &s, (int)(182.0f * *(float *)(p + 0x10)));
        }
        func_0041D6E0((char *)(B1_4B0a *)self, p + 0x60, 1, *(float *)(p + 0x10));
        r = func_0024E780(p + 0x2B20, 0, 0);
        func_0024E7B0(p + 0x2B20, 0, 0);
        if (r == 1) {
            if (*(unsigned short *)(p + 0x970) != 0 && *(signed char *)(p + 0x973) > 5) {
                *(signed char *)(p + 0x973) -= 2;
            }
            (*(signed char *)(p + 0x973))--;
            if (!(*(signed char *)(p + 0x973) > 0)) {
                *(int *)(p + 0x8FC) &= ~0x400;
                func_00376B40(p, 6);
            }
        }
        break;
    }
}

class P4D41 {
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
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual int m2E8();
    virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
};

class Q4D41 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68();
    virtual void m6C();
    virtual void m70();
    virtual void m74();
    virtual short m78(short, short);
};

class R4D41 {
public:
    virtual void d8(); virtual void dC(); virtual void d10();
    virtual int m14();
};

static inline unsigned char bitA4D41(unsigned char s) { unsigned char r = 0; if ((unsigned int)(s - 0x17) < 0x1C && ((1 << (s - 0x17)) & 0x80003FD)) r = 1; return r; }

static inline unsigned char inA4D41(unsigned char s) { unsigned char r = 1; if (!bitA4D41(s) && s != 0x42) r = 0; return r; }

static inline unsigned char inB4D41(unsigned char s) { unsigned char r = 0; if ((unsigned int)(s - 0x17) < 0xA && ((1 << (s - 0x17)) & 0x3FD)) r = 1; return r; }

static inline int inC4D41(unsigned char s) { unsigned char r = 1; if ((unsigned int)(s - 2) > 1) r = 0; return r; }

extern "C" void func_004D4120(char *p, signed char k) {
    char *t;
    unsigned char r;
    if (*(unsigned char *)(p + 4) != 0 && *(unsigned char *)(p + 0x14D) != 3 && !(unsigned char)((R4D41 *)*(char **)(p + 0x13C))->m14() && !(unsigned char)((P4D41 *)p)->m2E8()) {
        if (k == 0) {
            ((Q4D41 *)(p + 0x130))->m6C();
            ((Q4D41 *)(p + 0x130))->m74();
            if (*(float *)(p + 0x164) < D_005BDF0C) {
                ((Q4D41 *)(p + 0x130))->m70();
                if ((short)(((Q4D41 *)(p + 0x130))->m78(*(short *)(p + 0x160), *(short *)(*(char **)(p + 0x140) + 0x50)) + 0x2000) < 0x4000) {
                    if (inA4D41(*(unsigned char *)(p + 0xB154)) == 1) func_004CBD90(p);
                }
            } else {
                t = *(char **)(*(char **)D_01CAFF0C + 0xC);
                if (func_0021CAD0(t) != 0) {
                    switch ((unsigned char)func_0021CAD0(t)) {
                    case 0xF: case 0x17:
                        if (inB4D41(*(unsigned char *)(p + 0xB154)) == 1 && !(unsigned char)inC4D41(*(unsigned char *)(p + 0xB2C9))) ((P4D41 *)p)->m2F8(0x42);
                        break;
                    }
                }
            }
        } else if (k == 1) {
            if (inB4D41(*(unsigned char *)(p + 0xB154)) == 1 && !(unsigned char)inC4D41(*(unsigned char *)(p + 0xB2C9))) ((P4D41 *)p)->m2F8(0x42);
        }
    }
}

class V2F2 {
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
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194();
    virtual void m198();
};

typedef struct { char *d; void *nx; } L2F1;
extern "C" void func_002F2250(char *);

static inline int ok2F1(L2F1 *x) { return x != 0; }

static inline int end2F1(L2F1 *x) { return ok2F1(x) ^ 1; }

static inline char *nxt2F2(char *p) { char *r; L2F1 *x = *(L2F1 **)(p + 0x83C); r = 0; if (!end2F1(x)) { r = x->d; *(L2F1 **)(p + 0x83C) = (L2F1 *)x->nx; } return r; }

class O2CF7 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual void d88(); virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4();
    virtual void dA8(); virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0();
    virtual float *mC4();
};

extern "C" void func_002CF780(char *p) {
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float *v;
    v = ((O2CF7 *)(p + 0x640))->mC4();
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(p + 0x2F40), "r"(v) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x2F40), "r"(p + 0x2F40), "f"(*(float *)(p + 0x2D70)) : "t0", "memory");
    __asm__ volatile("lqc2 $vf5, 0x0(%1)
	lqc2 $vf4, 0x30(%0)
	vmove.xyz $vf4, $vf5
	sqc2 $vf4, 0x30(%0)" : : "r"(n), "r"(p + 0x2F40) : "memory");
    func_00105760(m, n, 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x30(%1)
	lqc2 $vf5, 0x0(%0)
	vmove.xyz $vf5, $vf4
	sqc2 $vf5, 0x0(%0)" : : "r"(p + 0x2F40), "r"(m) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x2F40) : "memory");
}

class O4767 {
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
    virtual void d188(); virtual void d18C(); virtual void d190(); virtual void d194();
    virtual void m198();
};

typedef struct { unsigned char b0; char pad[15]; float pos[4]; short ang; short h92; short h94; short pad2; int w98; int w9C; int wA0; int wA4; } S4767 __attribute__((aligned(16)));

extern "C" O4767 *func_002F2850(char *, S4767 *);
extern "C" char D_005BE0C8[4];
extern "C" void func_00128488(char *, int, int);
extern "C" int *func_001F95B0(char *);
extern "C" int func_001F8DE0(char *, char *);
extern "C" int *func_001F95C0(char *, int);
extern "C" unsigned char *func_001F9610(char *, int);
extern "C" void func_002022F0(char *, char *, unsigned char *);
extern "C" int func_001BF4F0(char *, char *, char *);
extern "C" int func_001F8FA0(char *, char *);
extern "C" int func_001BF9F0(char *, char *, char *, float *);
extern "C" float func_0024CBB0(char *, int);
extern "C" short func_00221710(char *);
extern "C" int func_00131B60(int);
extern "C" float func_00131B50(float);
extern "C" char *D_0058AA60[][3];
extern "C" int func_004D2BB0(char *);
extern "C" int func_004D2610(char *);
extern "C" int func_004D2CB0(char *);
extern "C" void func_004CBBE0(char *, float);
extern "C" int func_0034BBE0(int, char *);

extern "C" void func_00476780(char *p, unsigned char k, int m) {
    S4767 s;
    float d[4] __attribute__((aligned(16)));
    int i;
    O4767 *o;
    short t;
    func_002F2250(*(char **)(*(char **)D_01CAFF0C + 0x20));
    for (i = 0; i < 3; i++) {
        if (((int *)(p + 0xF04))[i] == 0) break;
    }
    s.b0 = k;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(s.pos), "r"(p + 0xEF0) : "memory");
    s.pos[1] += 100.0f;
    s.pos[3] = 1.0f;
    t = 0.5f + 65536.0f * *(float *)(p + 0xF00) / 6.283185f;
    s.ang = (short)(unsigned short)t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(p + 0xEC0) : "memory");
    switch (i) {
    case 0:
        break;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "f"(200.0f) : "t0", "memory");
        break;
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	lqc2 $vf6, 0x0(%0)
	vmulx.xyz $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "f"(-200.0f) : "t0", "memory");
        break;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vadd.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(s.pos), "r"(s.pos), "r"(d) : "memory");
    s.h94 = 0;
    s.w98 = 0;
    s.w9C = 0;
    s.wA0 = 0;
    s.wA4 = 0;
    switch (m) {
    case 0: s.h94 = 0; break;
    case 1: s.h94 = 2; break;
    case 2: s.h94 = 3; break;
    }
    switch (*(unsigned char *)(p + 0xF13)) {
    case 0:
        s.h92 = 0xE;
        o = func_002F2850(*(char **)(*(char **)D_01CAFF0C + 0x20), &s);
        break;
    case 1:
        s.h92 = 0;
        o = func_002F2850(*(char **)(*(char **)D_01CAFF0C + 0x20), &s);
        if (o != 0) o->m198();
        break;
    }
    if (o != 0) {
        ((O4767 **)(p + 0xF04))[i] = o;
        if (*(unsigned char *)(p + 0xF13) == 0) ((unsigned char *)(p + 0xF10))[i] = 0;
        else ((unsigned char *)(p + 0xF10))[i] = 1;
    }
}

static inline unsigned char tas1FF(unsigned int *v, unsigned int k) {
    unsigned int b;
    unsigned int *w;
    unsigned char r;
    w = &v[k >> 5];
    b = 1 << (k & 0x1F);
    r = !((b & *w) != 0);
    *w |= b;
    return r;
}

static inline unsigned char hasf1FF(unsigned char *t, unsigned short m) {
    unsigned short x = (t[3] << 8) | t[2];
    unsigned short *px = &x;
    return (*px & m) != 0;
}

extern "C" int func_001FFF40(char *p, char *b, int mask) {
    char buf[0x40];
    unsigned int vis[200];
    int i;
    int *ids;
    int n;
    int *lst;
    unsigned char *t;
    func_00128488((char *)vis, 0, 0x320);
    lst = func_001F95B0(((char **)(p + 8))[*(int *)p]);
    n = func_001F8DE0(((char **)(p + 8))[*(int *)p], b);
    for (i = 0; i < n; i++, lst++) {
        for (ids = func_001F95C0(*(char **)(p + *(int *)p * 4 + 8), *lst); *ids != -1; ids++) {
            if (tas1FF(vis, (unsigned int)*ids / 56) == 1) {
                t = func_001F9610(*(char **)(p + *(int *)p * 4 + 8), *ids);
                if (mask == 0 || (mask != 0 && !hasf1FF(t, mask))) {
                    func_002022F0(p, buf, t);
                    if ((unsigned char)func_001BF4F0(D_005BE0C8, b, buf) == 1) return 1;
                }
            }
        }
    }
    return 0;
}

class V24E {
public:
    virtual void d8(); virtual void dC();
    virtual void g10(int, char *, unsigned char, int);
    virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30();
    virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void g50(int, unsigned char);
    virtual void d54();
    virtual unsigned char g58(int);
    virtual void d5C();
    virtual unsigned char g60(int);
};

static inline char *ent24E(char *t, unsigned int k) {
    if (*(unsigned int *)(t + 4) < k + 1) return 0;
    if (*(int *)((char *)(k * 4) + (int)t + 8) == 0) return 0;
    return t + *(int *)(t + k * 4 + 8);
}

extern "C" void func_0024E530(char *p, char *q, int a, int b) {
    char *t;
    char *h;
    char *e;
    int i;
    t = *(char **)(p + 0x18) + *(unsigned short *)(*(char **)(p + 0x18) + *(unsigned char *)(q + 4) * 2);
    *(char **)(p + 0x1C) = t + *(unsigned short *)(t + *(unsigned char *)(q + 5) * 2);
    h = *(char **)(p + 0x1C);
    *(char **)(p + 0x1C) = h + 2;
    *(char **)(p + 0x20) = *(char **)(p + 0x1C) + *(unsigned char *)h * 6;
    for (i = 0; i < *(unsigned char *)h; i++) {
        e = *(char **)(p + 0x1C);
        *(char **)(p + 0x1C) = e + 6;
        if (*(unsigned char *)e == *(int *)(p + 0x38)) {
            if (*(unsigned char *)(e + 2) == 1) *(unsigned char *)(p + 0x7E) = 1;
            else *(unsigned char *)(p + 0x7E) = 0;
            (*(V24E **)(p + 0x44))->g10(*(int *)(p + 0x38), ent24E(*(char **)(*(char **)(p + 0x40) + *(unsigned short *)(e + 4) / 100 * 4), *(unsigned short *)(e + 4) % 100), (unsigned char)a, b);
            switch (*(unsigned char *)(e + 1)) {
            case 0:
                *(unsigned char *)(p + 0x7F) = 0;
                (*(V24E **)(p + 0x44))->g50(*(int *)(p + 0x38), *(unsigned char *)(p + 0x7F));
                break;
            case 1:
                *(unsigned char *)(p + 0x7F) = 1;
                (*(V24E **)(p + 0x44))->g50(*(int *)(p + 0x38), *(unsigned char *)(p + 0x7F));
                break;
            case 2:
                *(unsigned char *)(p + 0x7F) = (*(V24E **)(p + 0x44))->g60(0);
                break;
            }
            *(unsigned char *)(p + 0x86) = (*(V24E **)(p + 0x44))->g58(*(int *)(p + 0x38));
            return;
        }
    }
}

static inline unsigned char tstFAC(unsigned int *v, unsigned int b, unsigned int i) {
    if ((1 << b) & v[i]) return 0;
    return 1;
}

static inline unsigned char tasFAC(unsigned int *v, unsigned int k) {
    unsigned char r;
    unsigned int b = k & 0x1F;
    unsigned int i = k >> 5;
    r = tstFAC(v, b, i);
    v[i] |= 1 << b;
    return r;
}

static inline unsigned char hasFAC(unsigned char *t, unsigned short m) {
    unsigned short x = (t[3] << 8) | t[2];
    if (x & m) return 1;
    return 0;
}

extern "C" unsigned char func_001FFAC0(char *p, char *b, int mask) {
    float v[4] __attribute__((aligned(16)));
    unsigned int vis[200];
    char buf[0x40];
    unsigned char found;
    int i;
    int n;
    int *ids;
    int *lst;
    unsigned char *t;
    found = 0;
    lst = func_001F95B0(((char **)(p + 8))[*(int *)p]);
    n = func_001F8FA0(((char **)(p + 8))[*(int *)p], b);
    func_00128488((char *)vis, 0, 0x320);
    for (i = 0; i < n; i++) {
        for (ids = func_001F95C0(((char **)(p + 8))[*(int *)p], lst[i]); *ids != -1; ids++) {
            t = func_001F9610(((char **)(p + 8))[*(int *)p], *ids);
            if (mask == 0 || (mask != 0 && hasFAC(t, mask) == 0)) {
                if (tasFAC(vis, (unsigned int)*ids / 56) == 1) {
                    func_002022F0(p, buf, t);
                    if ((unsigned char)func_001BF9F0(D_005BE0C8, b, buf, v) == 1) {
                        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b), "r"(v) : "memory");
                        found = 1;
                    }
                }
            }
        }
    }
    return found;
}

static inline unsigned char act221(char *o) {
    if (*(int **)(o + 8) != 0 && **(int **)(o + 8) != 0) return 1;
    if (*(int *)(o + 0x1C) - *(int *)(o + 0x20) != 0) return 1;
    if (*(unsigned char *)(o + 0x1A) == 1) return 1;
    return 0;
}

static inline unsigned char busy221(void) {
    char *o = *(char **)(*(char **)D_01CAFF0C + 0x20);
    if (o != 0) return act221(o);
    return 0;
}

extern "C" unsigned short func_002213A0(char *p, int mode) {
    unsigned short r;
    short a;
    float f;
    if (*(unsigned char *)(p + 0x299F) != 0 || busy221() == 1
        || (*(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) == 7 && !(func_0024CBB0(p, 9) <= 0.0f))
        || (*(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C) == 7 && !(func_0024CBB0(p, 10) <= 0.0f))) {
        a = func_00221710(p);
        if (a < 0x4000) {
            r = 0;
            if (a < 0x1554) a = 0x1554;
            f = func_00131B50((float)(short)func_00131B60(a - 0x4000) / 10924.0f);
        } else {
            r = 4;
            if (a > 0x6000) a = 0x6000;
            f = func_00131B50((float)(short)func_00131B60(a - 0x4000) / 8192.0f);
        }
        if (!(f <= 1.0f)) f = 1.0f;
        *(float *)(p + 0x2430) = f;
        if (mode == 1) r++;
    } else {
        r = 6;
        *(float *)(p + 0x2430) = 1.0f;
    }
    return r;
}

class V4C4 {
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
    virtual void d1C8(); virtual void d1CC(); virtual void d1D0(); virtual void d1D4(); virtual void d1D8(); virtual void d1DC(); virtual void d1E0(); virtual void d1E4();
    virtual void d1E8(); virtual void d1EC(); virtual void d1F0(); virtual void d1F4(); virtual void d1F8(); virtual void d1FC(); virtual void d200(); virtual void d204();
    virtual void d208(); virtual void d20C(); virtual void d210(); virtual void d214(); virtual void d218(); virtual void d21C(); virtual void d220(); virtual void d224();
    virtual void d228(); virtual void d22C(); virtual void d230(); virtual void d234(); virtual void d238(); virtual void d23C(); virtual void d240(); virtual void d244();
    virtual void d248(); virtual void d24C(); virtual void d250(); virtual void d254(); virtual void d258(); virtual void d25C(); virtual void d260(); virtual void d264();
    virtual void d268(); virtual void d26C(); virtual void d270(); virtual void d274(); virtual void d278(); virtual void d27C(); virtual void d280(); virtual void d284();
    virtual void d288(); virtual void d28C(); virtual void d290(); virtual void d294(); virtual void d298(); virtual void d29C(); virtual void d2A0(); virtual void d2A4();
    virtual void d2A8(); virtual void d2AC(); virtual void d2B0(); virtual void d2B4(); virtual void d2B8(); virtual void d2BC(); virtual void d2C0(); virtual void d2C4();
    virtual void d2C8(); virtual void d2CC(); virtual void d2D0(); virtual void d2D4(); virtual void d2D8(); virtual void d2DC(); virtual void d2E0(); virtual void d2E4();
    virtual void d2E8(); virtual void d2EC(); virtual void d2F0(); virtual void d2F4();
    virtual void m2F8(int);
    virtual void d2FC();
    virtual void m300(int);
};

class W4C4 {
public:
    virtual void d8(); virtual void dC(); virtual void d10(); virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24();
    virtual void d28(); virtual void d2C(); virtual void d30(); virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44();
    virtual void d48(); virtual void d4C(); virtual void d50(); virtual void d54(); virtual void d58(); virtual void d5C(); virtual void d60(); virtual void d64();
    virtual void d68(); virtual void d6C(); virtual void d70(); virtual void d74(); virtual void d78(); virtual void d7C(); virtual void d80(); virtual void d84();
    virtual int m88();
    virtual void d8C(); virtual void d90(); virtual void d94(); virtual void d98(); virtual void d9C(); virtual void dA0(); virtual void dA4(); virtual void dA8();
    virtual void dAC(); virtual void dB0(); virtual void dB4(); virtual void dB8(); virtual void dBC(); virtual void dC0(); virtual void dC4(); virtual void dC8();
    virtual void dCC(); virtual void dD0(); virtual void dD4(); virtual void dD8(); virtual void dDC(); virtual void dE0(); virtual void dE4(); virtual void dE8();
    virtual void dEC(); virtual void dF0(); virtual void dF4(); virtual void dF8(); virtual void dFC(); virtual void d100(); virtual void d104(); virtual void d108();
    virtual void d10C(); virtual void d110(); virtual void d114(); virtual void d118(); virtual void d11C();
    virtual void m120(float *);
};

extern "C" void func_004C43B0(char *p) {
    float w[7];
    float f;
    char *e;
    char *q;
    int n;
    unsigned char c;
    int i;
    char *r;
    unsigned char b;
    switch (*(unsigned char *)(p + 0xB158)) {
    case 0:
        *(unsigned char *)(p + 0xB158) += 1;
        ((V4C4 *)p)->m300(0);
        return;
    case 1:
        ((W4C4 *)*(char **)((*(char **)D_01CAFF0C) + 0xC))->m120(&f);
        if (f <= 0.0f) {
            ((V4C4 *)p)->m2F8(0x38);
            return;
        }
        if ((unsigned char)func_004D2BB0(p) == 1) {
            ((V4C4 *)p)->m2F8(0x39);
            return;
        }
        if ((unsigned char)func_004D2610(p) == 1) {
            func_004CBD90(p);
            return;
        }
        if ((unsigned char)func_004D2CB0(p) == 1) {
            ((V4C4 *)p)->m2F8(0x44);
            return;
        }
        if (((W4C4 *)(p + 0x130))->m88() != 0) {
            func_004CBBE0(p, 3.0f);
            return;
        }
        e = D_0058AA60[*(int *)(p + 0xB2C0)][*(unsigned char *)(p + 0xB2C8)];
        n = 0;
        if (*(int *)e != 0) {
            q = e;
            do {
                w[n] = *(float *)(q + 4);
                n++;
                q += 8;
            } while (*(int *)q != 0);
        }
        c = *(unsigned char *)(e + func_0034BBE0(n, (char *)w) * 8);
        b = *(unsigned char *)(p + 0xB156);
        if (c == b) {
            i = 0;
            if (*(int *)e != 0) {
                r = e;
                do {
                    if (b != *(int *)r) {
                        c = *(unsigned char *)(e + i * 8);
                        break;
                    }
                    r += 8;
                    i++;
                } while (*(int *)r != 0);
            }
        }
        *(unsigned char *)(p + 0xB156) = c;
        ((V4C4 *)p)->m2F8(c);
        break;
    }
}
