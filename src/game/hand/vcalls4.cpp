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
