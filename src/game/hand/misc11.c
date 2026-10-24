/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-10. */
void func_00131760(float *, float *, float *);
void func_00105230(float *, float *, float *);
char *func_0027A710(char *);
void func_00105300(char *, float *);
void func_00105760(char *, char *, float);
unsigned char func_004FDD50(char *, char *, float, float);
void func_00104B80(float *, char *, float *);
void func_002A0090(char *);
void func_001318E0(float *, float *, float *);
char *func_00207470(int, int, float *);

#define M47D(p, k) ((float *)((p) + (k) * 0xA0 + 0xF0))

void func_0047D2A0(char *p, unsigned char k) {
    float t[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    int i;
    t[0] = (&((float *)(p + 0xF0))[k * 40])[16];
    t[1] = (&((float *)(p + 0xF0))[k * 40])[17];
    t[2] = (&((float *)(p + 0xF0))[k * 40])[18];
    t[3] = 1.0f;
    for (i = 0; i < 3; i++) {
        a[i] = (&((float *)(p + 0xF0))[k * 40])[20 + i];
        if (!(a[i] <= 180.0f)) a[i] -= 360.0f;
        if (a[i] < -180.0f) a[i] += 360.0f;
    }
    r[0] = 6.283185f * (a[0] / 360.0f);
    r[1] = 6.283185f * (a[1] / 360.0f);
    r[2] = 6.283185f * (a[2] / 360.0f);
    r[3] = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(M47D(p, k)) : "memory");
    func_00131760(M47D(p, k), M47D(p, k), r);
    func_00105230(M47D(p, k), M47D(p, k), t);
    func_00105300(*(char **)(func_0027A710(p + 0xA40) + 0x108) + (k + 1) * 64, M47D(p, k));
}

void func_004FD680(char *p) {
    float v[4] __attribute__((aligned(16))) = { 0 };
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0xB70) : "memory");
    func_00105760(p + 0xB70, p + 0xB70, *(float *)(p + 0x2B0));
    if (*(unsigned char *)(p + 0x2EE) != 0 && *(float *)(p + 0x2C4) != 0.0f) {
        if (*(unsigned char *)(p + 0x2EC) != 0) v[0] = -1.0f * *(float *)(p + 0x2C4);
        else v[0] = *(float *)(p + 0x2C4);
        if (func_004FDD50(p, p + 0x2E4, 1.0f, 0.0f) == 1) {
            *(float *)(p + 0x2E4) = 2.0f * *(float *)(p + 0x10);
            *(unsigned char *)(p + 0x2EC) ^= 1;
            if (*(unsigned char *)(p + 0x2EE) == 2 && func_004FDD50(p, p + 0x2DC, 1.0f, 0.0f) == 1) {
                *(float *)(p + 0x2DC) = *(float *)(p + 0x2D4);
                func_004FDD50(p, p + 0x2C4, *(float *)(p + 0x2CC), 0.0f);
            }
        }
    }
    if (*(unsigned char *)(p + 0x2EF) != 0 && *(float *)(p + 0x2C8) != 0.0f) {
        if (*(unsigned char *)(p + 0x2ED) != 0) v[1] = -1.0f * *(float *)(p + 0x2C8);
        else v[1] = *(float *)(p + 0x2C8);
        if (func_004FDD50(p, p + 0x2E8, 1.0f, 0.0f) == 1) {
            *(float *)(p + 0x2E8) = *(float *)(p + 0x10);
            *(unsigned char *)(p + 0x2ED) ^= 1;
            if (*(unsigned char *)(p + 0x2EF) == 2 && func_004FDD50(p, p + 0x2E0, 1.0f, 0.0f) == 1) {
                *(float *)(p + 0x2E0) = *(float *)(p + 0x2D8);
                func_004FDD50(p, p + 0x2C8, *(float *)(p + 0x2D0), 0.0f);
            }
        }
    }
    if (*(unsigned char *)(p + 0x2EE) != 0 || *(unsigned char *)(p + 0x2EF) != 0) {
        func_00104B80(v, p + 0xB70, v);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v), "r"(p + 0x50) : "memory");
        func_00105230((float *)(p + 0xB70), (float *)(p + 0xB70), v);
    } else {
        func_00105230((float *)(p + 0xB70), (float *)(p + 0xB70), (float *)(p + 0x50));
    }
}

typedef struct { float v[7][4]; } A29F __attribute__((aligned(16)));

typedef struct { int v[7]; } I29F __attribute__((aligned(16)));

extern A29F D_00549EF0;
extern A29F D_00549F60;
extern I29F D_00549FD0;

void func_0029FD40(char *p) {
    A29F r = D_00549EF0;
    A29F t = D_00549F60;
    I29F k = D_00549FD0;
    char *s[7] = { p + 0x1AD8, p + 0x1AD8, p + 0x1AD8, p + 0x1AD8, p + 0x1BD0, p + 0x1BE4, p + 0x1BF8 };
    float m[16] __attribute__((aligned(16)));
    int i;
    char *o;
    func_002A0090(p);
    for (i = 0; i < 7; i++) {
    }
    for (i = 0; i <= 1; i++) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_001318E0(m, m, r.v[i]);
        func_00105230(m, m, t.v[i]);
        ((char **)(p + 0xA9A8))[i] = func_00207470(2, 0x15, m);
        if ((o = ((char **)(p + 0xA9A8))[i]) != 0) {
            *(int *)(o + 0x90) = *(int *)(((char **)s[i])[k.v[i]] + 0x104);
            *(unsigned char *)(o + 0x9A) = 0;
        }
    }
    for (i = 4; i <= 6; i++) {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_001318E0(m, m, r.v[i]);
        func_00105230(m, m, t.v[i]);
        ((char **)(p + 0xA9A8))[i] = func_00207470(2, 0x17, m);
        if ((o = ((char **)(p + 0xA9A8))[i]) != 0) {
            *(int *)(o + 0x90) = *(int *)(((char **)s[i])[k.v[i]] + 0x104);
            *(unsigned char *)(o + 0x9A) = 0;
        }
    }
}
