int func_004F9040(char *p) {
    char *func_00207480(int, int, float *, int);
    char *q;
    *(char **)(p + 0x138) = func_00207480(3, 0x19D, 0, 16);
    q = *(char **)(p + 0x138);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x5B0;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x138) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

int func_004F9110(char *p) {
    char *func_00207480(int, int, float *, int);
    char *q;
    *(char **)(p + 0x13C) = func_00207480(3, 0x19E, 0, 16);
    q = *(char **)(p + 0x13C);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x5B0;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x13C) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

int func_004F90B0(char *p) {
    char *func_00207480(int, int, char *, int);
    char *e = func_00207480(3, 0x291, 0, 16);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x5B0;
        e[0x9A] = 0;
        e[0x3A] = 1;
        return 1;
    }
    return 0;
}

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

void func_004F93B0(int *);

void func_004F7EB0(char *);

void func_004F8100(char *);

void func_004F82F0(char *);

void func_004F8710(char *);

void func_004F8B00(char *);

void func_004F7DE0(char *p) {
    int t;
    func_001AD100(p);
    t = *(int *)(p + 0x608);
    func_004F93B0(&t);
    *(int *)(p + 0x608) = t;
    *(unsigned char *)(p + 0x616) = 0;
    switch (*(unsigned char *)(p + 0x60C)) {
    case 0:
        func_004F7EB0(p);
        break;
    case 1:
        func_004F8100(p);
        break;
    case 2:
        func_004F82F0(p);
        break;
    case 3:
        func_004F8710(p);
        break;
    }
    func_004F8B00(p);
    func_0028C5C0(p + 0x140, 0, *(float *)(p + 0x10));
}

extern char D_01CAFF0C[];

short func_00131D10(float, float);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

static inline float fsqrt_4F7(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

void func_004F7C50(char *p) {
    void func_004F8F20(char *);
    void func_004F8E40(char *);
    void func_004F92D0(char *, int);
    float v[4] __attribute__((aligned(16)));
    *(unsigned char *)(p + 0x360) = 5;
    *(unsigned char *)(p + 0x361) = 0;
    *(short *)(p + 0x362) = 0;
    *(unsigned char *)(p + 0x370) = 2;
    *(float *)(p + 0x380) = 0.0f;
    *(float *)(p + 0x384) = 0.0f;
    *(float *)(p + 0x388) = 0.0f;
    *(float *)(p + 0x38C) = 1.0f;
    *(float *)(p + 0x390) = 55.0f;
    *(unsigned char *)(p + 0x364) = 2;
    *(unsigned char *)(p + 0x365) = 0;
    *(short *)(p + 0x366) = 1;
    *(unsigned char *)(p + 0x3C0) = 2;
    *(float *)(p + 0x3D0) = 0.0f;
    *(float *)(p + 0x3D4) = 0.0f;
    *(float *)(p + 0x3D8) = 0.0f;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 110.0f;
    func_004F8F20(p);
    func_004F8E40(p);
    func_004F92D0(p, 0x1D);
    QCOPY(v, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
    VSUBR54(v, v, p + 0x50);
    v[1] = v[1] + 100.0f;
    *(short *)(p + 0x614) = -func_00131D10(v[1], fsqrt_4F7(v[0] * v[0] + v[2] * v[2]));
    if (*(short *)(p + 0x614) > -0x1000) {
        *(short *)(p + 0x614) = -0x1000;
    } else if (*(short *)(p + 0x614) < -0x3000) {
        *(short *)(p + 0x614) = -0x3000;
    }
    *(float *)(p + 0x68) = 25.0f;
    *(float *)(p + 0x5F8) = 25.0f;
    *(unsigned char *)(p + 0x618) = 0;
    *(unsigned char *)(p + 0x617) = 0;
}

int func_004F7BA0(p0) char *p0; {
    void func_004F8E40();
    void func_004F8F20();
    int func_004F92D0();
    int tmp0;
    *(char *)(p0 + 864) = 5;
    *(char *)(p0 + 865) = 0;
    *(short *)(p0 + 866) = 0;
    *(char *)(p0 + 880) = 2;
    *(int *)(p0 + 896) = 0;
    *(int *)(p0 + 900) = 0;
    *(int *)(p0 + 904) = 0;
    *(int *)(p0 + 908) = 0x3f800000;
    *(int *)(p0 + 912) = 0x425c0000;
    *(char *)(p0 + 868) = 2;
    *(char *)(p0 + 869) = 0;
    *(short *)(p0 + 870) = 1;
    *(char *)(p0 + 960) = 2;
    *(int *)(p0 + 976) = 0;
    *(int *)(p0 + 980) = 0;
    *(int *)(p0 + 984) = 0;
    *(int *)(p0 + 988) = 0x3f800000;
    *(int *)(p0 + 992) = 0x42dc0000;
    func_004F8F20(p0, 0x425c0000, 0x3f800000, 2);
    func_004F8E40(p0);
    tmp0 = func_004F92D0(p0, 29);
    *(int *)(p0 + 104) = 0x41a00000;
    *(int *)(p0 + 1528) = 0x41a00000;
    *(char *)(p0 + 1560) = 0;
    *(char *)(p0 + 1559) = 0;
    return tmp0;
}

void func_004F91E0();

void func_004F7DD0(p0) char *p0; {
    *(char *)(p0 + 1561) = 0;
    *(int *)(p0 + 1536) = 0x40400000;
    func_004F91E0();
}

int func_004F8E00(char *p0, char *p1, float f0, float f1) {
    *(float *)(p1 + 0) -= (f0 * *(float *)(p0 + 16));
    if (*(float *)(p1 + 0) <= f1) {
        *(float *)(p1 + 0) = f1;
        return 1;
    } else {
        return 0;
    }
}

int func_004F8EB0(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = *(char **)(p0 + 444);
    if (v0 == 0) {
        v1 = 1;
    } else {
        v2 = *(int *)(v0 + 8);
        if (*(unsigned char *)(p0 + 5) == 0) {
            v2 = (0x30440 & v2);
        } else {
            v2 = (0x30500 & v2);
        }
        if (v2 != 0) {
            v1 = 1;
        } else {
            v1 = 0;
        }
    }
    return v1;
}

int func_0028C790();

int func_004F9180(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = (int)p0;
    if (*(int *)(p0 + 444) != 0) {
        v2 = 0;
        do {
            v1 = func_0028C790((v0 + 320), v2);
            v2 = (v2 + 1);
        } while ((v2 < 4));
    }
    return v1;
}

int func_004F9270(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = (int)p0;
    if (*(int *)(p0 + 444) != 0) {
        v2 = 0;
        do {
            v1 = func_0028C790((v0 + 320), v2);
            v2 = (v2 + 1);
        } while ((v2 < 3));
    }
    return v1;
}

extern void func_004F7A40();

void func_004F9400(char *p) { func_004F7A40(p + -64); }

extern void func_004F8A90();

void func_004F9410(char *p) { func_004F8A90(p + -64); }

extern void func_004F9310();

void func_004F9420(char *p) { func_004F9310(p + -64); }

void func_004F9430(char *p) { func_004F9310(p + -160); }

void func_004F9440(char *p) { func_004F9310(p + -208); }

void func_004F7DC0(char *p0) {
    *(char *)(p0 + 1561) = 0;
    *(int *)(p0 + 1536) = 0x40400000;
}
