/* Hand-matched functions whose callee prototypes conflict with misc3-21. */

extern char *D_005BC2E0;
extern int D_005BDD70;
extern char D_005870A0[];
extern char D_01CAFF0C[];
char *func_00207480(int, int, int, int);
void func_00131700(float *, float *, float *);
void func_00104B80(float *, float *, float *);
unsigned char func_002D9FA0(char *, float *);
float func_00132D80(float *, float *);
void func_00131650(char *, char *);
void func_004BB660(char *);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")
#define VSUB(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")
static inline int sel4BC(unsigned char c) { int k; switch (c) { case 0: case 2: k = 0x32; break; case 1: k = 0x32; break; } return k; }
#define G (*(char **)D_01CAFF0C)

static inline unsigned char on4BA(char *pl) { unsigned char r; if (*(unsigned char *)(pl + 0x28A6) != 0) r = 1; else r = 0; return r; }

void func_004BAF80(char *p) {
    float q[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float t;
    float x;
    char *e;
    char *pl;
    int k;
    e = func_00207480(3, 0x25D, 0, 8);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x380;
        e[0x9A] = 0;
        e[0x3A] = 1;
        *(char **)(p + 0x370) = e;
    }
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(p + 0x378)), "r"(q) : "memory");
    UNIT(m);
    v[0] = 0.0f;
    v[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    v[2] = 0.0f;
    v[3] = 1.0f;
    func_00131700(m, m, v);
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 50.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    *(float *)(p + 0x50) = q[0] + o[0];
    *(float *)(p + 0x54) = q[1] + o[1];
    *(float *)(p + 0x58) = q[2] + o[2];
    *(float *)(p + 0x5C) = 1.0f;
    VCOPY(p + 0x3C0, p + 0x50);
    *(float *)(p + 0x3CC) = 1.0f;
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 600.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    pl = *(char **)(G + 0xC);
    r[0] = *(float *)(pl + 0x50) + o[0];
    r[1] = *(float *)(p + 0x54);
    r[2] = *(float *)(pl + 0x58) + o[2];
    r[3] = 1.0f;
    if (on4BA(pl) == 1 && func_002D9FA0(pl, s) == 1) {
        VSUB(a, r, p + 0x50);
        a[3] = 1.0f;
        VSUB(b, s, p + 0x50);
        b[3] = 1.0f;
        x = func_00132D80(a, b);
        if (!(x <= 0.0f) && !(x <= 0.866025f)) {
            r[0] = s[0];
            r[1] = s[1];
            r[2] = s[2];
        }
    }
    VSUB(p + 0x3D0, r, q);
    func_00131650(p + 0x3D0, p + 0x3D0);
    *(float *)(p + 0x3E0) = 1.0f;
    func_004BB660(p);
    func_0028C200(p + 0x150, (char *)&D_005BDD70, D_005870A0, 1, D_005BC2E0, p, 0);
    switch (*(signed char *)(p + 0x374)) {
    case 0:
        k = 0x20;
        break;
    case 1:
        k = 0x21;
        break;
    case 2:
        k = 0x22;
        break;
    }
    func_0028C8E0(p + 0x150, k);
    func_0028C910(p + 0x150);
    *(int *)(p + 0x228) = 0x30F3F;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x380);
    func_0028C3A0(p + 0x150, 1, -1, p + 0x380);
    *(float *)(p + 0x3E4) = 600.0f;
}
