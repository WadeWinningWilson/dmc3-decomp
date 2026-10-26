 void func_002D8F40(int, unsigned char);

extern char D_01CAFF0C[];

extern char D_005BE11C[4];

extern char D_005BE120[4];

extern char D_005BE124[4];

void func_002B47F0(char *p, int k) {
    D_005BE11C[0] = 0;
    D_005BE120[0] = 0;
    D_005BE124[0] = 0;
    *(int *)(p + 0x294) = *(int *)(p + 0x298);
    *(unsigned char *)(p + 0x24A2) = 0xFF;
    *(unsigned char *)(p + 0x24A1) = 0xFF;
    *(unsigned char *)(p + 0x24A3) = 0xFF;
    *(unsigned char *)(p + 0x24A0) = k;
    func_002D8F40(*(int *)(*(char **)D_01CAFF0C + 0xC), *(unsigned char *)(p + 0x24A0));
}

void func_001318E0(float *, float *, float *);

void func_00105230(float *, float *, float *);

void func_00104B80(char *, float *, char *);

float func_00131B50(float);

float func_00131B80(float);

typedef struct { float v[4]; } V209 __attribute__((aligned(16)));

extern V209 D_0054D9B0;

void func_002B4830(char *d, float *s) {
    float m[16] __attribute__((aligned(16)));
    V209 r;
    float c[4] __attribute__((aligned(16)));
    float x;
    float z;
    float w;
    x = s[4] * s[10] - s[8] * s[6] + 0.5f * ((s[0] + s[12]) * (s[6] - s[10])) - 0.5f * ((s[4] - s[8]) * (s[2] + s[18]));
    z = func_00131B80(func_00131B50(x));
    w = (z - 60.0f) / z;
    r = D_0054D9B0;
    r.v[0] = w;
    r.v[2] = w;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(c), "r"((char *)s) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"((char *)s + 0x10) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"((char *)s + 0x20) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"((char *)s + 0x30) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	mfc1 $t0, %2
	nop
	qmtc2.ni $t0, $vf5
	vmulx.xyzw $vf6, $vf4, $vf5x
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(c), "f"(0.25f) : "t0", "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"((char *)s), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x10), "r"((char *)s + 0x10), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x20), "r"((char *)s + 0x20), "r"(c) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%2)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%0)" : : "r"(d + 0x30), "r"((char *)s + 0x30), "r"(c) : "memory");
    *(float *)(d + 0xC) = *(float *)(d + 0x1C) = *(float *)(d + 0x2C) = *(float *)(d + 0x3C) = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)
	sqc2 $vf1, 0x20(%0)
	sqc2 $vf2, 0x10(%0)
	sqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_001318E0(m, m, r.v);
    func_00105230(m, m, c);
    func_00104B80(d, m, d);
    func_00104B80(d + 0x10, m, d + 0x10);
    func_00104B80(d + 0x20, m, d + 0x20);
    func_00104B80(d + 0x30, m, d + 0x30);
    *(float *)(d + 0x40) = s[16];
}

void func_002B4730(char *p, char *a) {
    int i;
    char *e;
    char **q;
    *(char **)(p + 0x90) = a;
    i = 0;
    a += 0x10;
    if (i < *(unsigned short *)(*(char **)(p + 0x90) + 6)) {
        e = p;
        do {
            *(unsigned char *)(e + 0xA0) = 0;
            *(char **)(e + 0x94) = a;
            a += 0x40;
            *(char **)(e + 0x98) = a;
            q = (char **)(e + 0x94);
            switch (*(unsigned char *)(*(char **)(e + 0x94) + 1)) {
            case 0: a += 0x70; break;
            case 1: a += 0x450; break;
            case 2: a += 0x860; break;
            case 3: a += 0x70; break;
            case 4: case 5: break;
            }
            q[2] = a;
            i++;
            e += 0x10;
            a += *(unsigned char *)(q[0] + 0x14) * 0x50;
        } while (i < *(unsigned short *)(*(char **)(p + 0x90) + 6));
    }
}

int func_002B5500(p0) char *p0; {
    int v0;
    char *v1;
    v0 = *(unsigned char *)(p0 + 9377);
    if (v0 == 255) {
        v1 = (char *)*(unsigned char *)(p0 + 9376);
    } else {
        v1 = (char *)(v0 << 4);
        v1 = (v1 + (int)p0);
        v1 = *(char **)(v1 + 148);
        v1 = (char *)*(unsigned char *)(v1 + 2);
        if (v1 == 0) {
            v1 = (char *)*(unsigned char *)(p0 + 9376);
        } else {
            v1 = (v1 + -1);
            v1 = (char *)((int)v1 & 255);
        }
    }
    return (int)v1;
}

int func_002B5610(char *p) { return *(int *)(p + 660); }
