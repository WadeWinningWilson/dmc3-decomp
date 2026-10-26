char *func_004D2740(char *);

extern char D_01CAFF0C[];

void func_00105578(float *, float *, float);

void func_00105760(float *, float *, float);

void func_00104C00(float *, float *, float *);

int func_002D9EB0(char *);

void func_004F5230(char *p, int a) {
    float v[4] __attribute__((aligned(16)));
    float m3[16] __attribute__((aligned(16)));
    float m2[16] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    char *b;
    char *q;
    char *r;
    short ang;
    b = *(char **)(*(char **)(func_004D2740(*(char **)(p + 0x484)) + 0xC) + 0x104) + 0x30;
    ang = 5461.5f * (0.5f + (float)*(int *)(p + 0xBC0)) + (float)a;
    v[0] = 100.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m3), "r"(v) : "memory");
    func_00105578(m2, m3, 6.283185f * ((float)ang / 65536.0f));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m1) : "memory");
    func_00105760(m1, m1, 6.283185f * ((float)(short)(int)*(short *)(*(char **)(p + 0x484) + 0x90) / 65536.0f));
    func_00104C00(m2, m1, m2);
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(m2) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v), "r"(b) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
    q = *(char **)(*(char **)D_01CAFF0C + 0xC);
    r = *(char **)(((char **)(q + 0x1388))[func_002D9EB0(q)] + 0x104) + 0x30;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x50), "r"(r) : "memory");
    *(unsigned char *)(p + 0xBEC) = 1;
}

/* Pushes flagged entries up along their velocity once the player is above them. */
extern char D_01CAFF0C[];

extern float D_005BDED0;

void func_004F5410(char *p, short a, unsigned char flag, float f) {
    float v[4] __attribute__((aligned(16)));
    float m2[16] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    char *q;
    char *b;
    short ang;
    q = *(char **)(*(char **)D_01CAFF0C + 0xC);
    if (flag == 0) {
        b = *(char **)(((char **)(q + 0x1388))[func_002D9EB0(q)] + 0x104) + 0x30;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xBD0), "r"(b) : "memory");
    } else {
        b = p + 0xBD0;
    }
    ang = a + (*(short *)(p + 0xBEA) + *(int *)(p + 0xBC0) * 0x2AAB);
    v[0] = 0.0f;
    v[1] = f;
    v[2] = D_005BDED0;
    v[3] = 1.0f;
    __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m2), "r"(v) : "memory");
    func_00105760(m1, m2, 6.283185f * ((float)ang / 65536.0f));
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(m1) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(v), "r"(b) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0x50), "r"(b) : "memory");
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V4;

void func_00133890(char *, char *, V4 *);

extern V4 D_0058BB70;

void func_004F50B0(char *p) {
    V4 t;
    t = D_0058BB70;
    func_00133890(p + 0x170, p + 0xF0, &t);
    *(float *)(p + 0x1A0) = *(float *)(p + 0x50);
    *(float *)(p + 0x1A4) = *(float *)(p + 0x54);
    *(float *)(p + 0x1A8) = *(float *)(p + 0x58);
    *(float *)(p + 0x1AC) = 1.0f;
}

void func_004F55A0(char *p0) {
    int t0;
    t0 = (*(int *)(p0 + 3020) + 1);
    *(int *)(p0 + 3020) = (*(int *)(p0 + 3020) + 1);
}
