/* Hand-matched functions that declare D_01CAFF0C as a plain char array (forcing reloads after stores) or whose callee prototypes conflict with misc3-13. */
extern char D_01CAFF0C[];
void func_00104C00(char *, char *, float *);
void func_00105230(char *, char *, float *);
void func_00131700(float *, float *, float *);
extern char *D_005BE09C;
extern float D_01DFC120[];
extern float D_01DFC130[];
extern float D_01DFC140[];
extern float D_01DFC150[];
float func_001324B0(float *, float *);
short func_0034B940(float *, float *);
void func_00105760(float *, float *, float);
void func_00104B80(float *, float *, float *);

#define E40F(p, i) (*(char **)((char *)((i) * 4) + (int)(p) + 0x108))

#define ID40F(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")

void func_0040FDF0(char *p, unsigned short i) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float a;
    a = 45.0f * (float)(unsigned int)*(unsigned short *)(E40F(p, i) + 0x496);
    if (!(a <= 180.0f)) a -= 360.0f;
    if (a < -180.0f) a += 360.0f;
    ID40F(m);
    r[0] = 0.0f;
    r[1] = 6.283185f * (a / 360.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    ID40F(E40F(p, i) + 0x450);
    t[0] = *(float *)(p + 0xFC) + 200.0f * (float)*(unsigned short *)(E40F(p, i) + 0x490);
    t[1] = *(float *)(p + 0x100) + (float)*(unsigned short *)(E40F(p, i) + 0x492);
    t[2] = *(float *)(p + 0x104) + 200.0f * (float)*(unsigned short *)(E40F(p, i) + 0x494);
    t[3] = 1.0f;
    func_00105230(E40F(p, i) + 0x450, E40F(p, i) + 0x450, t);
    func_00104C00(E40F(p, i) + 0x450, E40F(p, i) + 0x450, m);
}

#define VADD41E(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(d), "r"(s) : "memory")

void func_0041E410(void) {
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float e[4] __attribute__((aligned(16)));
    float f[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float r;
    if (*(char **)(D_005BE09C + 0x23C) != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(D_005BE09C + 0x23C) + 0x70), "r"(e) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(f), "r"(*(char **)((*(char **)D_01CAFF0C) + 0xC) + 0x50) : "memory");
        a[0] = -400.0f;
        a[1] = 0.0f;
        a[2] = 0.0f;
        a[3] = 1.0f;
        b[0] = -100.0f;
        b[1] = 0.0f;
        b[2] = -70.0f;
        b[3] = 1.0f;
        c[0] = 100.0f;
        c[1] = 0.0f;
        c[2] = -70.0f;
        c[3] = 1.0f;
        d[0] = 400.0f;
        d[1] = 0.0f;
        d[2] = 0.0f;
        d[3] = 1.0f;
        d[2] = a[2] = -(300.0f + func_001324B0(e, f));
        r = 6.283185f * ((float)func_0034B940(f, e) / 65536.0f);
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00105760(m, m, r);
        func_00104B80(D_01DFC120, m, a);
        func_00104B80(D_01DFC130, m, b);
        func_00104B80(D_01DFC140, m, c);
        func_00104B80(D_01DFC150, m, d);
        VADD41E(D_01DFC120, f);
        VADD41E(D_01DFC130, f);
        VADD41E(D_01DFC140, f);
        VADD41E(D_01DFC150, f);
    }
}
