extern char D_005B23D0[];

extern char D_005B23F4[];

extern char D_005B2474[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_00253000();

void func_0027A660();

void func_0028C1A0();

char *func_00400E60(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B23D0;
        *(char **)(p + 64) = D_005B23F4;
        *(char **)(p + 160) = D_005B2474;
        if ((p + 4704) != 0) {
            func_0013D240((p + 4756), -1);
        }
        func_0028C1A0((p + 3904), -1);
        func_0027A660((p + 2816), -1);
        func_0027A660((p + 1728), -1);
        func_0027A660((p + 640), -1);
        func_001003E0((p + 340), (void *)func_0013D240, 16, 9);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00400230(char *p, char *e) {
    if (e[2] == 0 && *(float *)(e + 0xC) >= 60.0f) {
        return 1;
    }
    return 0;
}

extern float D_005BCD2C;

void func_003FF6F0(char *p) {
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) += 1;
        break;
    case 1:
        *(float *)(p + 84) += D_005BCD2C * *(float *)(p + 16);
        if (*(float *)(p + 84) >= *(float *)(p + 4868)) {
            *(char *)(p + 5) = 0;
            *(char *)(p + 6) = 0;
        }
        break;
    }
}

void func_0028C3A0(char *, int, int, char *);

extern char D_01DFABA0[];

void func_00330BD0(char *, int, char *, int, int);

extern int D_005BE09C;

extern char D_005BE1A8[4];

void func_001ACC30(int, int, int, int, int);

void func_00400C10(char *, float);

void func_0036DF10(char *, int, int, int, int, int);

void func_0028C740(char *);

void func_003FF510(char *p) {
    unsigned char u;
    unsigned int fl;
    char *o;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        (*(unsigned char *)(p + 6))++;
        func_001ACC30(D_005BE09C, 1, 0x14, 0xA, 0);
        func_00330BD0(D_01DFABA0, 0x15, p + 0x50, 0x1E, 0);
        func_00400C10(p, 30.0f);
        func_001ACC30(D_005BE09C, 2, 0x1E, 0x3C, 0);
        func_0036DF10(D_005BE1A8, 0, 1, 0x40, 0x3C, 0);
        func_0028C740(p + 0xF40);
        p[0x1164] = 4;
        p[0x1165] = 0;
        *(short *)(p + 0x1166) = 1;
        p[0x11C0] = 2;
        *(int *)(p + 0x11D0) = 0;
        *(float *)(p + 0x11D4) = 500.0f;
        *(int *)(p + 0x11D8) = 0;
        *(float *)(p + 0x11DC) = 1.0f;
        *(float *)(p + 0x11E0) = 150.0f;
        *(int *)(p + 0x1018) = 0x3D44F;
        func_0028C3A0(p + 0xF40, 0, -1, p + 0x1F0);
        func_0028C3A0(p + 0xF40, 1, -1, p + 0x1F0);
        o = *(char **)(p + 0xFBC);
        if (o) {
            o[0xC4] = 3;
            o[0xC5] = u;
            o[0xC6] = 8;
            o[0xC7] = 0;
        }
        o = *(char **)(p + 0xFC0);
        if (o) {
            o[0xC4] = 3;
            o[0xC5] = u;
            o[0xC6] = 8;
            o[0xC7] = 0;
        }
        p[0x12D5] = 0;
        break;
    case 1:
        fl = 0;
        if (*(char **)(p + 0xFBC)) fl |= *(unsigned int *)(*(char **)(p + 0xFBC) + 8);
        if (*(char **)(p + 0xFC0)) fl |= *(unsigned int *)(*(char **)(p + 0xFC0) + 8);
        if (fl & 0x10008) {
            p[5] = 4;
            p[6] = 0;
        }
        break;
    }
}

extern int D_01CAFF38[];

extern float D_005BCD20;

extern float D_005BCD24;

extern float D_005BCD28;

extern float D_005BE1BC;

int func_0034B6B0(char *, char *, char *, float);

static inline float func_003FF390_m(float x, float m) {
    if (x > m) return x;
    return m;
}

void func_003FF390(char *p) {
    char buf[0x40];
    int r;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        *(float *)(p + 0xF0) = 0.0f;
        *(float *)(p + 0xF4) = D_005BCD24;
        *(float *)(p + 0xF8) = 0.0f;
        *(float *)(p + 0xFC) = 1.0f;
        *(float *)(p + 0x1300) = D_005BE1BC;
        break;
    case 1:
        *(float *)(p + 0x1300) = *(float *)(p + 0x1300) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x1300) < 0.0f) {
            *(unsigned char *)(p + 6) = *(unsigned char *)(p + 6) + 1;
        }
        break;
    case 2:
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + *(float *)(p + 0xF4) * *(float *)(p + 0x10);
        *(float *)(p + 0xF4) = *(float *)(p + 0xF4) - D_005BCD20 * *(float *)(p + 0x10);
        *(float *)(p + 0xF4) = func_003FF390_m(*(float *)(p + 0xF4), D_005BCD28);
        if (D_01CAFF38[0] == 0xD9) {
            r = *(float *)(p + 0x54) < 30.0f;
        } else {
            r = func_0034B6B0(p + 0x50, buf, p, 0.0f);
        }
        if ((unsigned char)r == 1) {
            *(unsigned char *)(p + 5) = 2;
            *(unsigned char *)(p + 6) = 0;
            *(float *)(p + 0x54) = 30.0f;
        }
        break;
    }
}

void func_003FF360(p0) char *p0; {
    float v0;
    v0 = 0.0f;
    *(float *)(p0 + 4864) -= *(float *)(p0 + 16);
    if (*(float *)(p0 + 4864) < v0) {
        *(char *)(p0 + 5) = 1;
    }
}

float func_001324E0();

void func_00400120(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char stk[0x10] __attribute__((aligned(16)));
    int v4;
    float v1;
    char *v0;
    char *v2;
    char *v3;
    float tmp0;
    v0 = (char *)p0;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((v0 + 4368)), "r"(((stk + -32) + 32)) : "memory");
    *(float *)((stk + -32) + 36) = 0.0f;
    *(float *)((stk + -32) + 44) = 1.0f;
    tmp0 = func_001324E0(((stk + -32) + 32));
    if (tmp0 > 5.0f) {
        *(char *)(v0 + 4821) = 1;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((v0 + 80)), "r"(((stk + -32) + 32)) : "memory");
    v1 = 1.0f;
    v4 = 0;
    v2 = ((stk + -32) + 32);
    while ((v4 < 9)) {
        v3 = *(char **)((char *)((v4 << 2) + (int)v0) + 4828);
        if (v3 != 0) {
            if (*(int *)(v3 + 260) != 0) {
                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((*(int *)(*(char **)((char *)((v4 << 2) + (int)v0) + 4828) + 260) + 48)), "r"(v2) : "memory");
                *(float *)(*(char **)(*(char **)((char *)((v4 << 2) + (int)v0) + 4828) + 260) + 60) = v1;
            }
        }
        v4 = (v4 + 1);
    }
}

extern void func_001AD140();

void func_003FFF60(void) { func_001AD140(); }

extern void func_003FE9D0();

void func_00400F40(char *p) { func_003FE9D0(p + -64); }

extern void func_00400270();

void func_00400F50(char *p) { func_00400270(p + -64); }

void func_00400110(void) {}
