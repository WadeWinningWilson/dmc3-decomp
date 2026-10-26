void func_003160A0(char *p, signed char k) {
    char *func_00207470(int, int);
    char *o;
    switch (k) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
    case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
        o = func_00207470(*(signed char *)(*(char **)(p + 0xC) + 0), *(short *)(*(char **)(p + 0xC) + 2));
        if (o) {
            if (*(signed char *)(*(char **)(p + 4) + 6) == 0x34 || *(signed char *)(*(char **)(p + 4) + 6) == 0x1C) {
                *(int *)(o + 0x94) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
                *(unsigned char *)(o + 0x99) = 1;
            } else {
                *(int *)(o + 0x90) = *(int *)(*(char **)(*(char **)(p + 8) + 4) + 0x104);
                *(unsigned char *)(o + 0x9A) = 1;
            }
        }
        break;
    case 8: case 9: case 10:
        func_00207470(*(signed char *)(*(char **)(p + 0xC) + 8), *(short *)(*(char **)(p + 0xC) + 0xA));
        break;
    }
}

void func_00316180(char *p, signed char k) {
    void func_00207470(int, int);
    switch (k) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
        func_00207470(*(signed char *)(*(char **)(p + 0xC) + 0), *(short *)(*(char **)(p + 0xC) + 2));
        break;
    case 8: case 9: case 10:
        func_00207470(*(signed char *)(*(char **)(p + 0xC) + 8), *(short *)(*(char **)(p + 0xC) + 0xA));
        break;
    }
}

void func_00315980(char *p, signed char k) {
    void func_00207470(int, int);
    switch (k) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7:
        func_00207470(3, 0x1C);
        break;
    case 8: case 9:
        func_00207470(3, 4);
        break;
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
        func_00207470(3, 0x91);
        break;
    }
}

void func_00104D70(float *, float *);

short func_00131D10(float, float);

void func_00105668(char *, char *, float);

void func_00105578(char *, char *, float);

void func_00105760(char *, char *, float);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

#define VZERO20(d) __asm__ volatile("vsub.xyzw $vf20, $vf0, $vf0\n\tsqc2 $vf20, 0x0(%0)" : : "r"(d) : "memory")

#define VSUB(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_003161F0(char *o, char *m, float *pos, int ang, unsigned char f) {
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    short r;
    VZERO20(v);
    v[0] = *(float *)(*(char **)(**(char ***)(o + 8) + 0x104) + 0x30);
    v[1] = *(float *)(*(char **)(**(char ***)(o + 8) + 0x104) + 0x34);
    v[2] = *(float *)(*(char **)(**(char ***)(o + 8) + 0x104) + 0x38);
    VSUB(d, pos, v);
    d[1] = 0.0f;
    func_00104D70(d, d);
    r = func_00131D10(d[0], d[2]);
    UNIT(m);
    if (f == 0) {
        func_00105668(m, m, 0.7853981f);
    } else {
        func_00105668(m, m, 1.5707963f);
    }
    func_00105578(m, m, 6.283185f * ((float)ang / 65536.0f));
    func_00105760(m, m, 6.283185f * ((float)r / 65536.0f));
}

extern char D_005AC0A0[];

void func_00313DB0();

int func_00313E20(p0) int p0; {
    func_00313DB0();
    *(char **)((char *)p0 + 0) = D_005AC0A0;
    return p0;
}

void func_00313EC0(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    *(int *)(p0 + 4) = p1;
    *(int *)(p0 + 8) = p2;
    *(int *)(p0 + 12) = p3;
    *(int *)(p0 + 16) = p4;
    *(int *)(p0 + 20) = 0;
}

int func_003158D0(p0, p1) int p0; int p1; {
    char *func_00207470();
    int v0;
    char *v1;
    char *v2;
    v0 = (signed char)p1;
    v1 = (char *)p0;
    switch (v0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        v2 = func_00207470(3, 28);
        if (v2 != 0) {
            *(int *)(v2 + 148) = *(int *)(*(char **)(*(char **)(v1 + 8) + 4) + 260);
            *(char *)(v2 + 153) = 1;
        }
        break;
    case 8:
    case 9:
        v2 = func_00207470(3, 4);
        break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
        v2 = func_00207470(3, 145);
        break;
    }
    return (int)v2;
}

void func_00313EE0(char *p0) {
    int t0;
    t0 = (*(int *)(p0 + 20) + 1);
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) + 1);
}
