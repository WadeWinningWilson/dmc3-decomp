/* func_004D8120 for a second object type; an object setup; 4 attachment slots; per-entry draw. */
void func_00131760(char *, char *, char *);

void func_004F8B00(char *p) {
    *(float *)(p + 0x80) = 6.283185f * (*(short *)(p + 0x614) / 65536.0f);
    *(float *)(p + 0x84) = 6.283185f * (*(short *)(p + 0x90) / 65536.0f);
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x5B0) : "memory");
    func_00131760(p + 0x5B0, p + 0x5B0, p + 0x80);
    __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(p + 0x5B0), "r"(p + 0x50) : "memory");
}

void func_00206730(char *);

extern float D_0058BDC0[];

unsigned char func_004F8E00(char *, char *, float, float);

void func_0028C910(char *);

void func_0028C8E0(char *, int);

void func_0028C3A0(char *, int, int, char *);

void func_004F92D0(char *, int);

void func_004F9270(char *);

void func_001AD140(char *);

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
void func_004F8710(char *p) {
    extern int D_005BD0C8;
    void func_0028C200(char *, char *, char *, int, int, char *, int);
    int i;
    int k;
    func_00206730(p + 0x138);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (func_004F8E00(p, p + 0x600, 1.0f, 0.0f) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x600) = 55.0f;
            *(float *)(p + 0x604) = 15.0f;
            *(unsigned char *)(p + 0x619) = 1;
            func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BD0C8, p, 0);
            func_0028C910(p + 0x140);
            *(float *)(p + 0x224) = 1.0f;
            *(int *)(p + 0x218) = 0x40;
            func_0028C8E0(p + 0x140, 10);
            for (i = 0; i < 3; i++) {
                *(unsigned char *)((char *)(i * 4) + (int)p + 0x360) = 1;
                *(unsigned char *)((char *)(i * 4) + (int)p + 0x361) = 0;
                *(short *)((char *)(i * 4) + (int)p + 0x362) = i;
                *(unsigned char *)((char *)(i * 0x50) + (int)p + 0x370) = 2;
                *(float *)((char *)(i * 0x50) + (int)p + 0x380) = 0.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x384) = 0.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x388) = 0.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x38C) = 1.0f;
                *(float *)((char *)(i * 0x50) + (int)p + 0x390) = 120.0f;
                func_0028C3A0(p + 0x140, i, -1, p + i * 0x40 + 0x4B0);
                UNIT(p + i * 0x40 + 0x4B0);
                VCOPY(p + i * 0x40 + 0x4E0, p + 0x50);
                *(float *)((char *)(i * 0x40) + (int)p + 0x4E4) = *(float *)((char *)(i * 0x40) + (int)p + 0x4E4) + -160.0f;
            }
            func_004F92D0(p, 0x22);
        }
        break;
    case 1:
        if (func_004F8E00(p, p + 0x600, 1.0f, 0.0f) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(unsigned char *)(p + 0x619) = 0;
            func_004F9270(p);
        }
        break;
    case 2:
        if (*(int *)(p + 0x138) == 0) {
            func_004F9270(p);
            func_001AD140(p);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x619) != 0 && func_004F8E00(p, p + 0x604, 1.0f, 0.0f) == 0) {
        for (k = 0; k < 3; k++) {
            *(float *)((char *)(k * 0x40) + (int)p + 0x4E4) = *(float *)((char *)(k * 0x40) + (int)p + 0x4E4) + D_0058BDC0[k];
        }
    }
}
#undef UNIT

extern float D_0058BD80[];

extern float D_0058BDA0[];

extern float D_0058BDB0[];

extern unsigned char D_01CAFF3C[];

extern char D_01CAFF0C[];

void func_004F9040(char *);

unsigned char func_004F9110(char *);

unsigned char func_004F90B0(char *);

void func_004F9180(char *);

#define G (*(char **)D_01CAFF0C)

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
void func_004F82F0(char *p) {
    extern int D_005BD0C8;
    void func_0028C200(char *, char *, char *, int, int, char *, int);
    int i;
    int k;
    func_00206730(p + 0x138);
    func_00206730(p + 0x13C);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (func_004F8E00(p, p + 0x600, 1.0f, 0.0f) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x600) = D_0058BD80[D_01CAFF3C[0]];
            VCOPY(p + 0x50, *(char **)(G + 0xC) + 0x50);
            *(float *)(p + 0x54) = 2.0f;
            UNIT(p + 0x5B0);
            VCOPY(p + 0x5E0, p + 0x50);
            func_004F9040(p);
            func_004F92D0(p, 0x21);
        }
        break;
    case 1:
        if (func_004F8E00(p, p + 0x600, 1.0f, 0.0f) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x600) = 45.0f;
            *(float *)(p + 0x604) = 15.0f;
            *(unsigned char *)(p + 0x619) = 2;
            if (*(char **)(p + 0x138) != 0) func_001AD140(*(char **)(p + 0x138));
            if (func_004F9110(p) == 1) {
                func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BD0C8, p, 0);
                func_0028C910(p + 0x140);
                *(float *)(p + 0x224) = 1.0f;
                *(int *)(p + 0x218) = 0x40;
                func_0028C8E0(p + 0x140, 9);
                for (i = 0; i < 4; i++) {
                    *(unsigned char *)((char *)(i * 4) + (int)p + 0x360) = 1;
                    *(unsigned char *)((char *)(i * 4) + (int)p + 0x361) = 0;
                    *(short *)((char *)(i * 4) + (int)p + 0x362) = i;
                    *(unsigned char *)((char *)(i * 0x50) + (int)p + 0x370) = 2;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x380) = 0.0f;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x384) = 0.0f;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x388) = 0.0f;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x38C) = 1.0f;
                    *(float *)((char *)(i * 0x50) + (int)p + 0x390) = D_0058BDA0[i];
                    func_0028C3A0(p + 0x140, i, -1, p + i * 0x40 + 0x4B0);
                    UNIT(p + i * 0x40 + 0x4B0);
                    VCOPY(p + i * 0x40 + 0x4E0, p + 0x50);
                    *(float *)((char *)(i * 0x40) + (int)p + 0x4E4) = *(float *)((char *)(i * 0x40) + (int)p + 0x4E4) + -180.0f;
                }
            }
        } else if (*(unsigned char *)(p + 0x619) <= 0 && *(float *)(p + 0x600) <= 8.0f) {
            if (func_004F90B0(p) == 1) {
                *(unsigned char *)(p + 0x619) = 1;
                func_004F92D0(p, 0x22);
            }
        }
        break;
    case 2:
        if (func_004F8E00(p, p + 0x600, 1.0f, 0.0f) == 1) {
            (*(unsigned char *)(p + 5))++;
            *(unsigned char *)(p + 0x619) = 0;
            func_004F9180(p);
        }
        break;
    case 3:
        if (*(char **)(p + 0x138) == 0 && *(char **)(p + 0x13C) == 0) {
            func_004F9180(p);
            func_001AD140(p);
            return;
        }
        break;
    }
    if (*(unsigned char *)(p + 0x619) == 2 && func_004F8E00(p, p + 0x604, 1.0f, 0.0f) == 0) {
        for (k = 0; k < 4; k++) {
            *(float *)((char *)(k * 0x40) + (int)p + 0x4E4) = *(float *)((char *)(k * 0x40) + (int)p + 0x4E4) + D_0058BDB0[k];
        }
    }
}
#undef UNIT

void func_004F89D0(char *p) {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 784), "r"(stk) : "memory");
    *(float *)(stk + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 80), "r"(stk) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 224), "r"(stk) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p + 848), "r"(p + 240) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 1504), "r"(stk) : "memory");
    *(float *)(p + 1516) = 1.0f;
}

void func_004F8A90(char *p, char *o) {
    int k = *(unsigned char *)(p + 0x60C);
    if (k == 0 || k == 1) {
        if (*(unsigned char *)(p + 0x616) == 0) {
            if (*(unsigned char *)(o + 0x3D) == 12 && *(unsigned char *)(p + 5) == 0) {
                *(char *)(p + 0x616) = 1;
                *(char *)(p + 0x617) = 1;
            } else if (*(signed char *)(o + 2) == 0) {
                *(char *)(p + 0x616) = 1;
                *(char *)(p + 0x618) = 1;
                return;
            }
        }
    }
}

void func_004F8FB0(char *p) {
    void func_0028C200(char *, char *, char *, int, char *, char *, int);
    extern char *D_005BD0C8;
    func_0028C200(p + 0x140, p + 0x360, p + 0x370, 4, D_005BD0C8, p, 0);
    func_0028C8E0(p + 0x140, 6);
    *(int *)(p + 0x218) = 0x30104;
    func_0028C910(p + 0x140);
    func_0028C3A0(p + 0x140, 0, -1, p + 0x5B0);
    func_0028C3A0(p + 0x140, 1, -1, p + 0x5B0);
}

void func_004F8F20(char *p) {
    void func_0028C200(char *, char *, char *, int, char *, char *, int);
    extern char *D_005BD0C8;
    func_0028C200(p + 0x140, p + 0x360, p + 0x370, 3, D_005BD0C8, p, 0);
    *(int *)(p + 0x218) = 0x30443;
    *(float *)(p + 0x224) = 1.0f;
    func_0028C8E0(p + 0x140, 5);
    func_0028C910(p + 0x140);
    func_0028C3A0(p + 0x140, 0, -1, p + 0x5B0);
    func_0028C3A0(p + 0x140, 1, -1, p + 0x5B0);
}

#define SETPOS(m, s) __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(s) : "memory")

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")
int func_004F91E0(char *p) {
    char *func_00207480(int, int, char *, int);
    float m[16];
    UNIT(m);
    SETPOS(m, p + 0x50);
    *(char **)(p + 0x138) = func_00207480(3, 0x2E8, (char *)m, 0x10);
    if (*(char **)(p + 0x138) != 0) {
        *(unsigned char *)(*(char **)(p + 0x138) + 0x3A) = 1;
        return 1;
    }
    return 0;
}
#undef UNIT

void func_0028C740(char *);

void func_004F8FB0(char *p);

void func_004F8F20(char *p);

extern char *D_005BD0D8;

int func_004F8EB0(char *);

void func_00332AE0(char *, char *, float, float);

void func_004F8BB0(char *);

void func_004F8100(char *p) {
    char *func_00207480(int, int, char *, int);
    unsigned char r;
    func_00206730(p + 0x138);
    r = 0;
    if ((unsigned char)func_004F8EB0(p) == 1) {
        r = 2;
    } else if (*(unsigned char *)(p + 0x617) != 0) {
        r = 1;
    }
    if (r) {
        if (r == 1) {
            func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005BD0D8 + 0xC0, 1.0f, 800.0f);
        }
        func_00207480(3, 0x362, p + 0x5B0, 0x10);
        func_004F92D0(p, 0x1E);
        if (*(char **)(p + 0x138) != 0) {
            func_001AD140(*(char **)(p + 0x138));
        }
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(unsigned char *)(p + 0x618) != 0) {
            *(unsigned char *)(p + 5) = 1;
            *(unsigned char *)(p + 0x618) = 0;
            *(short *)(p + 0x614) += 0x8000;
            *(float *)(p + 0x68) = *(float *)(p + 0x68) * 1.05f;
            func_0028C740(p + 0x140);
            func_004F8FB0(p);
            func_00207480(3, 0x18E, p + 0x5B0, 0x10);
            func_004F92D0(p, 0x1F);
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x618) != 0) {
            *(unsigned char *)(p + 5) = 0;
            *(unsigned char *)(p + 0x618) = 0;
            *(short *)(p + 0x614) += 0x8000;
            *(float *)(p + 0x68) = *(float *)(p + 0x68) * 1.05f;
            func_0028C740(p + 0x140);
            func_004F8F20(p);
            func_00207480(3, 0x18E, p + 0x5B0, 0x10);
            func_004F92D0(p, 0x1F);
        }
        break;
    }
    func_004F8BB0(p);
}

void func_004F7BA0(char *);

void func_004F7C50(char *);

void func_004F7DC0(char *);

void func_004F7DD0(char *);

static inline char *seg0(char *t) {
    if (*(unsigned int *)(t + 4) < 1) {
        return 0;
    }
    if (((int *)(t + 8))[0] == 0) {
        return 0;
    }
    return t + ((int *)(t + 8))[0];
}

static inline char *motion_cur(char *o) {
    if (**(unsigned short **)(o + 8) == 0) {
        return seg0(*(char **)(o + 0xC));
    }
    return *(char **)(o + 0xC);
}

void func_004F7A40(char *p) {
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(char **)(p + 0x134) = motion_cur(*(char **)(p + 0x130));
    *(int *)(p + 0x13C) = 0;
    *(int *)(p + 0x138) = 0;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 0.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 0.0f;
    *(float *)(p + 0x5F0) = 0.0f;
    *(float *)(p + 0x5F4) = 0.0f;
    *(float *)(p + 0x5F8) = 0.0f;
    *(float *)(p + 0x5FC) = 0.0f;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(short *)(p + 0x614) = 0;
    switch (*(unsigned char *)(p + 0x60C)) {
    case 0:
        func_004F7BA0(p);
        break;
    case 1:
        func_004F7C50(p);
        break;
    case 2:
        func_004F7DC0(p);
        break;
    case 3:
        func_004F7DD0(p);
        break;
    }
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}

int func_004F8E40(char *p) {
    char *func_00207480(int, int, float *, int);
    char *q;
    *(char **)(p + 0x138) = func_00207480(3, 0x361, 0, 16);
    q = *(char **)(p + 0x138);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x5B0;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x138) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_00100580(char *);

void func_0028C1A0(char *, int);

char *func_004F9310(char *p, short flag) {
    extern char D_005BA990[];
    extern char D_005BA9B4[];
    extern char D_005BAA34[];
    extern char D_005BAAC8[];
    void func_0024FEA0(char *, int);
    if (p != 0) {
        *(char **)p = D_005BA990;
        *(char **)(p + 64) = D_005BA9B4;
        *(char **)(p + 160) = D_005BAA34;
        *(char **)(p + 208) = D_005BAAC8;
        func_0028C1A0(p + 320, -1);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_004F93B0(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

void func_004F8A60(void) {}

void func_004F8A70(void) {}

void func_004F8A80(void) {}
