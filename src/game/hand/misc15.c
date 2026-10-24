/* Hand-matched functions whose callee prototypes conflict with misc3-14 (part 2). */

void func_00104B80(char *, float *, float *);
void func_00104C00(float *, char *, float *);
void func_00105300(float *, char *);
void func_00105760(float, float *, float *);
void func_0030B770(char *);

#define ID30B(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define CP30B(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_0030B4C0(char *p) {
    float v[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *q;
    int i;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
    case 1:
    case 2:
    case 3:
        q = *(char **)(p + 0xD0);
        if (q == 0) break;
        if (*(unsigned char *)(p + 0x1748) == 0) {
            v[0] = *(float *)(p + 0xE8);
        } else {
            v[0] = -*(float *)(p + 0xE8);
        }
        v[1] = 0.0f;
        v[2] = 0.0f;
        v[3] = 1.0f;
        for (i = 0; i < 3; i++) {
            switch (i) {
            case 2:
                ID30B(m);
                func_00105760(6.283185f * (-*(float *)(p + 0x1734) / 360.0f), m, m);
                func_00104C00(m, *(char **)(((char **)(q + 0x4F4))[*(int *)(p + 0x1744)] + 0x104), m);
                break;
            case 1:
                func_00105300(m, *(char **)(((char **)(q + 0x4F4))[*(int *)(p + 0x1744)] + 0x104));
                break;
            case 0:
                ID30B(m);
                func_00105760(6.283185f * (*(float *)(p + 0x1734) / 360.0f), m, m);
                func_00104C00(m, *(char **)(((char **)(q + 0x4F4))[*(int *)(p + 0x1744)] + 0x104), m);
                break;
            }
            func_00104B80(p + i * 16 + 0x1640, m, v);
            if (*(unsigned char *)(p + 0x1748) == 0) {
                CP30B(p + i * 16 + 0x1610, m);
            } else {
                CP30B(p + i * 16 + 0x1610, m);
                *(float *)((char *)(i * 16) + (int)p + 0x1610) *= -1.0f;
                *(float *)((char *)(i * 16) + (int)p + 0x1614) *= -1.0f;
                *(float *)((char *)(i * 16) + (int)p + 0x1618) *= -1.0f;
            }
        }
        break;
    }
    func_0030B770(p);
}

void func_001AD140(char *);
void func_00206730(char *);
void func_0028C790(char *, int);
int func_004D8510(float, float, char *, char *);

static inline short ang4D7(float r) {
    return (int)(0.5f + 65536.0f * r / 6.283185f);
}

void func_004D7DB0(char *p) {
    float v[4] __attribute__((aligned(16)));
    int k;
    int i;
    float r;
    short t;
    func_00206730(p + 0x138);
    k = *(int *)(p + 0x1BC);
    if ((unsigned char)func_004D8510(1.0f, 0.0f, p, p + 0x504) == 0) {
        *(float *)(p + 0x630) += 20.0f * *(float *)(p + 0x10);
    }
    if ((unsigned char)func_004D8510(1.0f, 0.0f, p, p + 0x500) == 1) {
        if (k != 0) {
            for (i = 0; i < 4; i++) func_0028C790(p + 0x140, i);
        }
    } else {
        r = 0.14726216f * *(float *)(p + 0x10);
        t = ang4D7(r);
        *(short *)(p + 0x634) += (short)(unsigned short)t;
        for (i = 0; i < 4; i++) {
            r = 6.283185f * ((float)(short)(*(short *)(p + 0x90) + *(short *)(p + 0x634) + i * 0x4000) / 65536.0f);
            v[0] = 0.0f;
            v[1] = 0.0f;
            v[2] = *(float *)(p + 0x630);
            v[3] = 1.0f;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + (i << 6) + 0x530) : "memory");
            func_00105760(r, (float *)(p + (i << 6) + 0x530), (float *)(p + (i << 6) + 0x530));
            func_00104B80((char *)v, (float *)(p + (i << 6) + 0x530), v);
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x50), "r"(v) : "memory");
            v[3] = 1.0f;
            __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(p + (i << 6) + 0x530), "r"(v) : "memory");
        }
    }
    if (*(int *)(p + 0x138) == 0) {
        if (k != 0) {
            for (i = 0; i < 4; i++) func_0028C790(p + 0x140, i);
        }
        func_001AD140(p);
    }
}
