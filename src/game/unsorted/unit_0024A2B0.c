float func_00132630(float *, float *);

void func_00132580(float *, float, float *);

void func_001323E0(float *);

void func_0024BBC0(char *, char *, char *, float *, float);

int func_0024B500(char *p, char *a, char *b) {
    void func_00131650(float *, float *);
    float func_00132470(char *, float *);
    float v80[4] __attribute__((aligned(16)));
    float v70[4] __attribute__((aligned(16)));
    float v60[4] __attribute__((aligned(16)));
    unsigned int f;
    float t;
    f = 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v60), "r"((b + 0x130)), "r"((b + 0x120)) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v70), "r"((b + 0x120)), "r"((b + 0x130)) : "memory");
    func_00131650(v60, v60);
    func_00131650(v70, v70);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"((a + 0xD0)), "r"((b + 0x120)) : "memory");
    if (func_00132630(v80, v60) < 0.0f) f |= 1;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"((a + 0xD0)), "r"((b + 0x130)) : "memory");
    if ((t = func_00132630(v80, v70)) < 0.0f) f |= 2;
    switch (f) {
    case 0:
        func_00132580(v80, t, v70);
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"(b + 0x130) : "memory");
        break;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v80), "r"((b + 0x120)) : "memory");
        break;
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v80), "r"((b + 0x130)) : "memory");
        break;
    case 3:
        return 1;
    }
    t = func_00132470(a + 0xD0, v80);
    if (t < *(float *)(a + 0x130) + *(float *)(b + 0x140)) {
        t = *(float *)(a + 0x130) + *(float *)(b + 0x140) - t;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(v80), "r"(a + 0xD0) : "memory");
        func_001323E0(v80);
        func_0024BBC0(p, a, b, v80, t);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"((a + 0x120)), "r"((a + 0xD0)) : "memory");
        return 1;
    }
    return 0;
}

#define VSUB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

int func_0024A540(char *a, char *p, char *q) {
    void func_00131650(char *, char *);
    float func_00132470(char *, char *);
    float v[4] __attribute__((aligned(16)));
    float d;
    float r;
    d = func_00132470(p + 0xD0, q + 0xD0);
    r = *(float *)(p + 0x130) + *(float *)(q + 0x130);
    if (d < 0.001f) {
        __asm__ volatile("lqc2 $vf4, 0x20(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 0x20), "r"(v) : "memory");
        v[1] = 0.0f;
        v[3] = 0.0f;
        func_00131650((char *)v, (char *)v);
        func_0024BBC0(a, p, q, v, r);
        return 1;
    }
    if (d < r) {
        r = r - d;
        VSUB(v, q + 0xD0, p + 0xD0);
        v[1] = 0.0f;
        v[3] = 0.0f;
        func_00131650((char *)v, (char *)v);
        func_0024BBC0(a, p, q, v, r);
        return 1;
    }
    return 0;
}

int func_001FF610(float *);

void func_001323A0(float *);

void func_0024A670(float f, char *a, char *p, char *q, float *s, int t) {
    float v[4] __attribute__((aligned(16)));
    t = (t != -1) ? t : func_001FF610(s);
    switch (t) {
    case 0:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(s) : "memory");
        v[1] = 0.0f;
        func_001323A0(v);
        func_0024BBC0(a, p, q, v, f);
        break;
    case 1:
        func_0024BBC0(a, p, q, s, f);
        break;
    case 2:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(s) : "memory");
        v[0] = v[2] = 0.0f;
        func_001323A0(v);
        func_0024BBC0(a, p, q, v, f);
        break;
    }
}

float func_001324E0(float *);

float func_0024B880(float, float, float, float);

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

int func_0024B940(char *p, char *a, char *b) {
    float v60[4] __attribute__((aligned(16)));
    float v50[4] __attribute__((aligned(16)));
    float t;
    float r;
    float d;
    float s;
    v60[0] = (*(float *)((b) + (0x120))) - (*(float *)((a) + (0x120)));
    v60[1] = 0.0f;
    v60[2] = (*(float *)((b) + (0x128))) - (*(float *)((a) + (0x128)));
    t = (*(float *)((a) + (0x130))) + (*(float *)((b) + (0x134)));
    t = t - func_001324E0(v60);
    if (t < 0.0f) return 0;
    r = func_0024B880((*(float *)((a) + (0x124))) + (*(float *)((a) + (0x130))), (*(float *)((a) + (0x124))) - (*(float *)((a) + (0x130))), (*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130))), (*(float *)((b) + (0x124))));
    if (r < 0.0f) return 0;
    if (t < r) {
        if (!((*(float *)((a) + (0x124))) <= (*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130))))) {
            d = (*(float *)((a) + (0x124))) - ((*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130))));
            r = func_001324E0(v60) - (*(float *)((b) + (0x134)));
            t = fsqrt((*(float *)((a) + (0x130))) * (*(float *)((a) + (0x130))) - d * d) - r;
        } else if ((*(float *)((a) + (0x124))) < (*(float *)((b) + (0x124)))) {
            d = (*(float *)((b) + (0x124))) - (*(float *)((a) + (0x124)));
            r = func_001324E0(v60) - (*(float *)((b) + (0x134)));
            t = fsqrt((*(float *)((a) + (0x130))) * (*(float *)((a) + (0x130))) - d * d) - r;
        }
        if (t < 0.0f) return 0;
        func_0024BBC0(p, a, b, v60, t);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(a + 0x120), "r"(a + 0xD0) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x120), "r"(b + 0xD0) : "memory");
    } else {
        v50[1] = 1.0f;
        v50[2] = 0.0f;
        v50[0] = 0.0f;
        if (!((*(float *)((a) + (0x124))) <= (*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130))) / 2.0f))
            r = (*(float *)((a) + (0x124))) - ((*(float *)((a) + (0x130))) + ((*(float *)((b) + (0x124))) + (*(float *)((b) + (0x130)))));
        else
            r = (*(float *)((a) + (0x124))) - ((*(float *)((b) + (0x124))) - (*(float *)((a) + (0x130))));
        func_0024BBC0(p, a, b, v50, r);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(a + 0x120), "r"(a + 0xD0) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(b + 0x120), "r"(b + 0xD0) : "memory");
    }
    return 1;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_0024B750(char *w, char *a, char *b) {
    float func_00132470(char *, char *);
    float tmp[4];
    float d;
    float r;
    d = func_00132470(a + 0xD0, b + 0xD0);
    r = *(float *)(a + 0x130) + *(float *)(b + 0x130);
    if (d < 0.001f) {
        __asm__ volatile("lqc2 $vf4, 0x20(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(a + 0x20), "r"(tmp) : "memory");
        func_0024BBC0(w, a, b, tmp, r);
        QCOPY(a + 0x120, a + 0xD0);
        QCOPY(b + 0x120, b + 0xD0);
        return 1;
    }
    if (d < r) {
        r = r - d;
        VSUB(tmp, b + 0xD0, a + 0xD0);
        func_0024BBC0(w, a, b, tmp, r);
        QCOPY(a + 0x120, a + 0xD0);
        QCOPY(b + 0x120, b + 0xD0);
        return 1;
    }
    return 0;
}

int func_0024A4E0(p0, p1, p2) int p0; int p1; int p2; {
    float func_00132470();
    int v0;
    float tmp0;
    tmp0 = func_00132470((p1 + 208), (p2 + 208));
    v0 = 1;
    if (tmp0 >= (*(float *)((char *)p1 + 16) + *(float *)((char *)p2 + 16))) {
        v0 = 0;
    }
    return v0;
}
