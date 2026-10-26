void func_00104C00(char *, char *, float *);

void func_00105578(float *, float *, float);

#define E3DF(i) ((char *)((i) * 64) + (int)p)

void func_003DF0C0(char *p, float dt) {
    float m[16] __attribute__((aligned(16)));
    float tmp[4] __attribute__((aligned(16)));
    int i;
    float f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_00105578(m, m, 0.17453292f * dt);
    for (i = 0; i < *(int *)(p + 0xB10); i++) {
        if (*(unsigned char *)(E3DF(i) + 0x41) == 0 && *(signed char *)(E3DF(i) + 0x42) < 3) {
            switch (*(unsigned char *)(p + 0xB30)) {
            case 0:
                break;
            case 1:
                switch (*(unsigned char *)(p + 0xB31)) {
                case 1: func_00104C00(*(char **)(*(char **)(E3DF(i) + 0x10) + 0x104), *(char **)(*(char **)(E3DF(i) + 0x10) + 0x104), m); break;
                case 2: func_00104C00(*(char **)(E3DF(i) + 0x10), *(char **)(E3DF(i) + 0x10), m); break;
                case 0: break;
                }
                break;
            case 2:
                if (*(signed char *)(E3DF(i) + 0x42) == 0) break;
                switch (*(unsigned char *)(p + 0xB31)) {
                case 1: func_00104C00(*(char **)(*(char **)(E3DF(i) + 0x10) + 0x104), *(char **)(*(char **)(E3DF(i) + 0x10) + 0x104), m); break;
                case 2: func_00104C00(*(char **)(E3DF(i) + 0x10), *(char **)(E3DF(i) + 0x10), m); break;
                case 0: break;
                }
                break;
            }
        }
        *(float *)(E3DF(i) + 0x34) += *(float *)(p + 0xB18) * dt;
        *(float *)(E3DF(i) + 0x34) = *(float *)(E3DF(i) + 0x34) > -100.0f ? *(float *)(E3DF(i) + 0x34) : -100.0f;
        *(float *)(E3DF(i) + 0x30) *= *(float *)(p + 0xB24);
        *(float *)(E3DF(i) + 0x38) *= *(float *)(p + 0xB24);
        switch (*(unsigned char *)(p + 0xB31)) {
        case 1:
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(*(char **)(E3DF(i) + 0x10) + 0x104) + 0x30), "r"(p + i * 64 + 0x20) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + i * 64 + 0x30), "f"(dt) : "t0", "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(*(char **)(E3DF(i) + 0x10) + 0x104) + 0x30), "r"(tmp) : "memory");
            *(float *)(*(char **)(*(char **)(E3DF(i) + 0x10) + 0x104) + 0x3C) = 1.0f;
            break;
        case 2:
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	sqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(E3DF(i) + 0x10) + 0x30), "r"(p + i * 64 + 0x20) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(p + i * 64 + 0x30), "f"(dt) : "t0", "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(E3DF(i) + 0x10) + 0x30), "r"(tmp) : "memory");
            *(float *)(*(char **)(E3DF(i) + 0x10) + 0x3C) = 1.0f;
            break;
        case 0:
            break;
        }
    }
    f = (*(float *)(p + 0xB18) *= *(float *)(p + 0xB1C));
    *(float *)(p + 0xB18) = f < *(float *)(p + 0xB20) ? f : *(float *)(p + 0xB20);
}

int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BCEB0[8];

extern char D_005BCEB8[8];

extern char D_005BCEC0[8];

extern char D_005BCEC8[8];

extern char D_005BCED0[8];

extern char D_005BCED8[4];

extern char D_005BCEDC[4];

extern char D_005BCEE0[8];

extern char D_005BCEE8[8];

extern char D_005BCEF0[8];

extern char D_005BCEF8[8];

extern char D_005BCF00[8];

extern char D_005BCF08[8];

extern char D_005BCF10[8];

extern char D_005BCF18[8];

extern char D_005BCF20[8];

extern char D_005BCF28[8];

extern char D_005BCF30[4];

extern char D_005BCF34[4];

extern char D_005BCF38[8];

extern char D_005699F0[];

typedef struct { unsigned char m0; unsigned char m1; char pad[2]; unsigned int n; int a[4]; int b[4]; int c[4]; int d[4]; char pad2[8]; float v[3]; float one; int k; int x; int y; } S3DF;

static inline void clr3DF(int *a, int *b, int *c, int *d) {
    int i;
    for (i = 0; i < 4; i++) {
        a[i] = 0;
        b[i] = 0;
        c[i] = 0;
        d[i] = 0;
    }
}

int func_003E03E0(S3DF *);

int func_003DFF00(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S3DF s;
    unsigned int i;
    s.m0 = 0;
    s.m1 = 0;
    s.n = 0;
    clr3DF(s.a, s.b, s.c, s.d);
    s.v[0] = s.v[1] = s.v[2] = 0.0f;
    s.one = 1.0f;
    s.k = 0;
    s.x = 0;
    s.y = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BCEB0) == 0) {
            return func_003E03E0(&s);
        }
        if (func_0012B1A0(name, D_005BCEB8) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BCEC0) == 0) s.k = 0;
            else if (func_0012B1A0(w, D_005BCEC8) == 0) s.k = 1;
        } else if (func_0012B1A0(name, D_005BCED0) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BCED8) == 0) s.m0 = 1;
            else if (func_0012B1A0(w, D_005BCEDC) == 0) s.m0 = 0;
        } else if (func_0012B1A0(name, D_005BCEE0) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BCEE8) == 0) s.m1 = 0;
            else if (func_0012B1A0(w, D_005BCEF0) == 0) s.m1 = 1;
        } else if (func_0012B1A0(name, D_005BCEF8) == 0) {
            s.n = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCF00) == 0) {
            for (i = 0; i < s.n; i++) {
                func_0022CBB0(r, w);
                if (func_0012B1A0(w, D_005BCF08) == 0) s.a[i] = 0;
                else if (func_0012B1A0(w, D_005BCF10) == 0) s.a[i] = 1;
                else if (func_0012B1A0(w, D_005BCF18) == 0) s.a[i] = 8;
            }
        } else if (func_0012B1A0(name, D_005BCF20) == 0) {
            for (i = 0; i < s.n; i++) s.b[i] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCF28) == 0) {
            for (i = 0; i < s.n; i++) s.c[i] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCF30) == 0) {
            for (i = 0; i < s.n; i++) s.d[i] = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCF34) == 0) {
            s.v[0] = func_0022CD90(r);
            s.v[1] = func_0022CD90(r);
            s.v[2] = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005699F0) == 0) {
            s.x = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCF38) == 0) {
            s.y = func_0022CD60(r);
        }
    }
    return 0;
}

void func_003DEC10();

void func_003DEBF0(p0, p1, p2, p3, p4) int p0; int p1; int p2; int p3; int p4; {
    func_003DEC10(p0, p1, 0, p2, p3, p4);
}

void func_003DF080(p0, p1) char *p0; char *p1; {
    int v0;
    v0 = 0;
    while ((v0 < *(int *)(p0 + 2832))) {
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((p0 + (v0 << 6)) + 48)), "r"(p1) : "memory");
        v0 = (v0 + 1);
    }
}
