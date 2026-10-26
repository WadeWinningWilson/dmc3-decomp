float func_00104D00(float *, float *);

#define VSUBR(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

typedef struct { float x, y, z; } V3C3;

int func_002C3680(char *o, float *pt) {
    float t[4] __attribute__((aligned(16)));
    float d[32];
    float best;
    int i;
    int bi = 0;
    t[0] = (*(V3C3 **)(o + 4))[0].x;
    t[1] = (*(V3C3 **)(o + 4))[0].y;
    t[2] = (*(V3C3 **)(o + 4))[0].z;
    t[3] = 1.0f;
    VSUBR(t, t, pt);
    best = d[0] = func_00104D00(t, t);
    for (i = 1; i < *(int *)(o + 8); i++) {
        t[0] = (*(V3C3 **)(o + 4))[i].x;
        t[1] = (*(V3C3 **)(o + 4))[i].y;
        t[2] = (*(V3C3 **)(o + 4))[i].z;
        t[3] = 1.0f;
        VSUBR(t, t, pt);
        d[i] = func_00104D00(t, t);
        if (!(best <= d[i])) {
            best = d[i];
            bi = i;
        }
    }
    if (bi != 0 && *(int *)(o + 8) - 1 > bi) {
        if (d[bi - 1] < d[bi + 1]) bi--;
    } else if (!(bi < *(int *)(o + 8) - 1)) {
        bi = *(int *)(o + 8) - 2;
    }
    return bi;
}

float *func_001AE4B0(int);

void func_001AE4F0(int);

void func_002C4120(float *x, float *a, float *b, float *c, float *d, int n) {
    float *g;
    float bet;
    int j;
    g = func_001AE4B0(8);
    bet = b[0];
    if (bet != 0.0f) bet = 1.0f / bet;
    x[0] = d[0] * bet;
    for (j = 1; j < n; j++) {
        g[j - 1] = bet * c[j - 1];
        bet = b[j] - a[j] * g[j - 1];
        if (bet != 0.0f) bet = 1.0f / bet;
        x[j] = bet * (d[j] - a[j] * x[j - 1]);
    }
    for (j = n - 2; j >= 0; j--) {
        x[j] = x[j] - g[j] * x[j + 1];
    }
    func_001AE4F0(8);
}

void func_002C32B0(char *p, float *out, int i, float t) {
    char *e;
    float s;
    if (i < 0 || !(i < *(int *)(p + 8) - 1)) return;
    if (t < 0.0f) t = 0.0f;
    if (!(t <= 1.0f)) t = 1.0f;
    e = p + i * 64 + 0x90;
    s = ((float *)(p + 0xC))[i];
    s *= t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(e), "f"(s) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(e + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(out), "f"(s) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(e + 0x20) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(out), "f"(s) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%0)
	vadd.xyzw $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(e + 0x30) : "memory");
    out[3] = 1.0f;
}

float func_001324E0();

int func_002C3BF0();

int func_002C31A0(p0, p1, p2) char *p0; int p1; int p2; {
    char stk[0x10] __attribute__((aligned(16)));
    int v0;
    char *v1;
    int v2;
    char *v3;
    char *v4;
    char *v5;
    char *v6;
    float tmp9;
    int tmp10;
    v0 = 0;
    *(int *)(p0 + 4) = p1;
    *(int *)(p0 + 8) = p2;
    v1 = p0;
    if ((0 < (*(int *)(p0 + 8) + -1))) {
        v2 = 0;
        v3 = v1;
        v4 = ((stk + -128) + 132);
        v5 = ((stk + -128) + 136);
        v6 = ((stk + -128) + 140);
        do {
            *(float *)((stk + -128) + 128) = (*(float *)((*(char **)(v1 + 4) + v2) + 12) - *(float *)((*(char **)(v1 + 4) + v2) + 0));
            *(float *)(v4 + 0) = (*(float *)((*(char **)(v1 + 4) + v2) + 16) - *(float *)((*(char **)(v1 + 4) + v2) + 4));
            *(float *)(v5 + 0) = (*(float *)((*(char **)(v1 + 4) + v2) + 20) - *(float *)((*(char **)(v1 + 4) + v2) + 8));
            *(int *)(v6 + 0) = 0x3f800000;
            tmp9 = func_001324E0(((stk + -128) + 128));
            v0 = (v0 + 1);
            v2 = (v2 + 12);
            *(float *)(v3 + 12) = (tmp9 / 100.0f);
            v3 = (v3 + 4);
        } while ((v0 < (*(int *)(v1 + 8) + -1)));
    }
    tmp10 = func_002C3BF0(v1);
    return tmp10;
}
