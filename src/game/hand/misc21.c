/* Hand-matched functions whose callee prototypes conflict with misc3-20. */

extern char *D_005BC2E0;
extern int D_005BDD80;
extern char D_00587220[];
extern char D_01CAFF0C[];
char *func_00207480(int, int, int, int);
void func_00131700(float *, float *, float *);
void func_00104B80(float *, float *, float *);
unsigned char func_002D9FA0(char *, float *);
float func_00132D80(float *, float *);
void func_00131650(char *, char *);
void func_004BD1D0(char *);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")
#define VSUB(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")
static inline int sel4BC(unsigned char c) { int k; switch (c) { case 0: case 2: k = 0x32; break; case 1: k = 0x32; break; } return k; }
#define G (*(char **)D_01CAFF0C)

static inline unsigned char on4BC(char *pl) { unsigned char r; if (*(unsigned char *)(pl + 0x28A6) != 0) r = 1; else r = 0; return r; }

void func_004BCB80(char *pp) {
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
    char *p = pp;
    *(float *)(p + 0x3E8) = *(float *)(p + 0x3E8) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x3E8) <= 0.0f) {
    e = func_00207480(3, 0x271, 0, 8);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x380;
        e[0x9A] = 0;
        e[0x3A] = 1;
        *(char **)(p + 0x3F8) = e;
    }
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(p + 0x3F4)), "r"(q) : "memory");
    UNIT(m);
    v[0] = 0.0f;
    v[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    v[2] = 0.0f;
    v[3] = 1.0f;
    func_00131700(m, m, v);
    w[0] = 0.0f;
    w[1] = 50.0f;
    w[2] = 50.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    q[0] += o[0];
    q[1] += o[1];
    q[2] += o[2];
    q[3] = 1.0f;
    *(float *)(p + 0x50) = q[0];
    *(float *)(p + 0x54) = q[1];
    *(float *)(p + 0x58) = q[2];
    *(float *)(p + 0x5C) = 1.0f;
    VCOPY(p + 0x3C0, p + 0x50);
    *(float *)(p + 0x3CC) = 1.0f;
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 1000.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    pl = *(char **)(G + 0xC);
    r[0] = *(float *)(pl + 0x50) + o[0];
    r[1] = *(float *)(p + 0x54);
    r[2] = *(float *)(pl + 0x58) + o[2];
    r[3] = 1.0f;
    if (on4BC(pl) == 1 && func_002D9FA0(pl, s) == 1) {
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
    *(float *)(p + 0x3E0) = 0.3f;
    func_004BD1D0(p);
    k = 0x32;
    switch (*(unsigned char *)(p + 0x370)) {
    case 0:
        break;
    case 1:
        k = 0x32;
        break;
    case 2:
        k = 0x32;
        break;
    }
    func_0028C200(p + 0x150, (char *)&D_005BDD80, D_00587220, 1, D_005BC2E0 + k * 0x40, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    *(int *)(p + 0x228) = 0x30F3F;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x380);
    func_0028C3A0(p + 0x150, 1, -1, p + 0x380);
    *(float *)(p + 0x3E4) = 360.0f;
    (*(unsigned char *)(p + 4))++;
    }
}

typedef union { float f[4]; int i[4]; } V4BB __attribute__((aligned(16)));
extern char *D_005BC2E0;
extern int D_005BDD78;
extern char D_00587160[];
extern char D_01CAFF0C[];
extern int D_01CAFF38[];
void func_00131700(float *, float *, float *);
void func_00104B80(float *, float *, float *);
unsigned char func_00201770(char *, float *, float *, float *, int);
void func_001AD140(char *);
unsigned char func_002D9FA0(char *, float *);
float func_00132D80(float *, float *);
void func_00131650(char *, char *);
void func_004BC0C0(char *);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define VSUB(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")
#define q qq.f
#define tmp tt.f
#define G (*(char **)D_01CAFF0C)

static inline unsigned char on4BB(char *pl) { unsigned char r; if (*(unsigned char *)(pl + 0x28A6) != 0) r = 1; else r = 0; return r; }

void func_004BBA90(char *p) {
    V4BB qq;
    float r2[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    V4BB tt;
    float r[4] __attribute__((aligned(16)));
    float s[16] __attribute__((aligned(16)));
    float s2[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float b[4] __attribute__((aligned(16)));
    float x;
    float dy;
    char *pl;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(p + 0x370)), "r"(q) : "memory");
    UNIT(m);
    v[0] = 0.0f;
    v[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    v[2] = 0.0f;
    v[3] = 1.0f;
    func_00131700(m, m, v);
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 100.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    q[0] += o[0];
    q[1] += o[1];
    q[2] += o[2];
    q[3] = 1.0f;
    switch (D_01CAFF38[0]) {
    case 0x67:
    case 0x70:
    case 0x71:
    case 0xD8:
    case 0xD4:
        q[1] = *(float *)(*(char **)(G + 0xC) + 0x2924);
        break;
    default:
        tt = qq;
        tmp[1] = tmp[1] + 20.0f;
        if (func_00201770(*(char **)(G + 0x14) + 0x548, tmp, r, s, 2) == 1) {
            q[1] = -10.0f + r[1];
        } else {
            func_001AD140(p);
            return;
        }
        break;
    }
    *(float *)(p + 0x50) = q[0];
    *(float *)(p + 0x54) = q[1];
    *(float *)(p + 0x58) = q[2];
    *(float *)(p + 0x5C) = 1.0f;
    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 300.0f;
    w[3] = 1.0f;
    func_00104B80(o, m, w);
    pl = *(char **)(G + 0xC);
    r2[0] = *(float *)(pl + 0x50) + o[0];
    r2[1] = *(float *)(p + 0x54);
    r2[2] = *(float *)(pl + 0x58) + o[2];
    r2[3] = 1.0f;
    if (on4BB(pl) == 1 && func_002D9FA0(pl, s2) == 1) {
        VSUB(a, r2, p + 0x50);
        a[3] = 1.0f;
        VSUB(b, s2, p + 0x50);
        b[3] = 1.0f;
        x = func_00132D80(a, b);
        if (!(x <= 0.0f) && !(x <= 0.866025f)) {
            r2[0] = s2[0];
            r2[1] = *(float *)(p + 0x54);
            r2[2] = s2[2];
        }
    }
    VSUB(p + 0x3C0, r2, q);
    func_00131650(p + 0x3C0, p + 0x3C0);
    *(float *)(p + 0x3D0) = 3.0f;
    dy = *(float *)(*(char **)(p + 0x3E0) + 0x54) - *(float *)(p + 0x54);
    dy = dy < 0.0f ? -dy : dy;
    if (!(dy <= 50.0f)) {
        func_001AD140(p);
        return;
    }
    func_0028C200(p + 0x150, (char *)&D_005BDD78, D_00587160, 1, D_005BC2E0 + 0x700, p, 0);
    func_0028C8E0(p + 0x150, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x380);
    *(int *)(p + 0x228) = 0x30F3F;
    func_004BC0C0(p);
    *(int *)(p + 0x3D8) = 0;
    *(float *)(p + 0x3D4) = 30.0f;
    *(unsigned char *)(p + 0x3DC) = 0;
}
