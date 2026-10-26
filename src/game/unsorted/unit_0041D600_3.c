void func_00105760(float *, float *, float);

void func_00105668(char *, char *, float);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

#define GETPOS(d,m) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(m) : "memory")

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define SETPOS(m, s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

void func_0041D6E0(char *p, float *v, int f, float s) {
    float m[16] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    d[0] = v[0] * s;
    d[1] = v[1] * s;
    d[2] = v[2] * s;
    if ((unsigned char)f == 1) {
        UNIT(m);
        SETPOS(m, d);
        func_00105668((char *)m, (char *)m, *(float *)(p + 0x40));
        func_00105760(m, m, (float)*(short *)(p + 0x50) / 65536.0f * 6.283185f);
        GETPOS(d, m);
    }
    VADDIP(p + 0x10, d);
    *(float *)(p + 0x1C) = 1.0f;
}

int func_0041D6B0(float *x, float d) {
    return (*x -= d) <= 0.0f;
}

float func_00132470(char *, char *);

extern char D_01CAFF0C[];

float func_0041DB20(char *q) {
    return func_00132470(q, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
}

void func_0041D800(char *p0, float f0, float f1) {
    float v0;
    v0 = (*(float *)(p0 + 0) + f0);
    *(float *)(p0 + 0) = v0;
    if (v0 > f1) {
        *(float *)(p0 + 0) = f1;
    }
}

float func_0041E060();

int func_0041E120(int p0, float f0) {
    char *v0;
    float v1;
    float v2;
    int v3;
    v0 = (char *)p0;
    v1 = f0;
    v2 = func_0041E060();
    if (*(float *)(v0 + 20) <= ((10.0f + v2) + v1)) {
        v3 = 1;
        *(float *)(v0 + 20) = (v2 + v1);
    } else {
        v3 = 0;
    }
    return v3;
}

float func_0041D7F0(char *p0, float f0) {
    float t0;
    t0 = (*(float *)(p0 + 0) + f0);
    *(float *)(p0 + 0) = (*(float *)(p0 + 0) + f0);
    return t0;
}
