#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_001C1850(char *, float *, char *, char *, char *, char *);

int func_001C12D0(char *, char *, char *, char *, int);

int func_001BFA00(char *a, char *b, char *c, char *d, int e, float *out) {
    float v[4] __attribute__((aligned(16)));
    switch (func_001C1850(a, v, c, d, b, b + 0x10)) {
    case 0:
    case 0x11:
    case 0x22:
        return 0;
    case 0x12:
    case 0x21:
        if (func_001C12D0(a, (char *)v, c, d, e) != 0) {
            if (out != 0) {
                QCOPY(out, v);
            }
            return 1;
        }
        break;
    case 1:
    case 2:
    case 0x10:
    case 0x20:
        if (func_001C12D0(a, (char *)v, c, d, e) != 0) {
            if (out != 0) {
                QCOPY(out, v);
            }
            return 1;
        }
        break;
    }
    return 0;
}

extern signed char D_00540870[];

float func_001C1A90(char *, char *, char *, char *);

int func_001C1180(char *u, char *a, char *pl) {
    int i;
    float d;
    for (i = 0; i < 6; i++) {
        d = func_001C1A90(u, pl + D_00540870[i * 4] * 16, pl + i * 16 + 0x80, a);
        if (((d > 0.0f) ^ 1) == 0) return 0;
    }
    return 1;
}

float func_00132630(float *, char *);

void func_001C1510(char *, float *, char *, char *, char *);

void func_00131680(float *, char *, char *, float);

#define VSUB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

int func_001BE570(char *ctx, char *s, char *t, float *out) {
    float func_00132470(char *, char *);
    float c[4];
    float d[4];
    float e[4];
    float u[4];
    float v[4];
    float a;
    func_001C1510(ctx, c, t, t + 0x10, s);
    VSUB(v, c, s);
    func_001C1510(ctx, d, t, t + 0x10, s + 0x10);
    VSUB(u, d, s + 0x10);
    if (func_00132630(v, (char *)u) <= 0.0f) {
        a = func_00132470((char *)c, s);
        {
            float b = func_00132470((char *)d, s + 0x10);
            func_00131680(e, s, s + 0x10, b / (a + b));
        }
        VSUB(v, t, e);
        VSUB(u, t + 0x10, e);
        if (func_00132630(v, (char *)u) <= 0.0f) {
            if (out != 0) {
                QCOPY(out, e);
            }
            return 1;
        }
    }
    return 0;
}

int func_001156A8(int, int, int, int *);

int func_001C3ED0(char *p, char *t, int i, int a, int b) {
    int r;
    int h = ((int *)(t + 4))[i];
    while (func_001156A8(h, a, b, &r) < 0) {
    }
    return r;
}

void func_00132580(float *, char *, float);

#define VSUB3(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

#define VMUL3(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvmul.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

#define VMUL3R(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvmul.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

#define VADD3(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

int func_001C15B0(char *o, float *out, float *s, float *q, float *r) {
    float b[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    float l;
    float m;
    VSUB3(a, q, s);
    VMUL3R(b, a, a);
    l = b[2] + (b[0] + b[1]);
    if (l <= 0.01f) return 0;
    VSUB3(b, r, s);
    VMUL3(b, a, b);
    m = b[2] + (b[0] + b[1]);
    if (m < 0.01f || l < m) return 0;
    m = m / l;
    func_00132580(out, (char *)a, m);
    VADD3(out, out, s);
    return 1;
}

float func_001C2980(char *, char *);

static inline float fsqrt_1C2(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

float func_001C2B60(char *p, char *q) {
    return fsqrt_1C2(func_001C2980(p, q));
}

float func_001C2B90(char *, char *);

float func_001C31D0(char *p, char *q) {
    return fsqrt_1C2(func_001C2B90(p, q));
}

unsigned char func_001C3200(char *, float *, char *, float *, float *);

int func_001BE6F0(char *u, char *s, char *c, float *out) {
    float q[8] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    QCOPY(a, s + 0x10);
    VSUB(d, s, s + 0x10);
    if (func_001C3200(u, a, c, &q[7], r) == 1) {
        QCOPY(out, r);
        return 1;
    }
    return 0;
}

void func_00114D10();

void func_00114D80();

void func_001C3F30(void) {
    func_00114D80();
    func_00114D10();
}

void func_00132540(char *, char *, float);

void func_001C16F0();

int func_001BE4C0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    float func_00132470();
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    char *v1;
    char *v2;
    char *v3;
    int v4;
    float tmp0;
    v0 = (char *)p1;
    v1 = (char *)p2;
    v3 = (char *)p3;
    func_001C16F0(p0, ((stk + -64) + 64), p2, (v1 + 16), v0);
    tmp0 = func_00132470(((stk + -64) + 64), v0);
    v2 = ((stk + -64) + 64);
    if (tmp0 < *(float *)(v1 + 32)) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%2)" : : "r"(v0), "r"(v2), "r"(v3) : "memory");
        func_00132540(v3, v3, *(float *)(v1 + 32));
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%1)" : : "r"(((stk + -64) + 64)), "r"(v3) : "memory");
        v4 = 1;
    } else {
        v4 = 0;
    }
    return v4;
}

extern void func_001C3C50();

void func_001C3C40(void) { func_001C3C50(); }
