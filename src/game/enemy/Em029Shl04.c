extern char D_01CAFF0C[];

char *func_00207480(int, int, int, int);

void func_001AD140(char *);

void func_0028C5C0(char *, int, float);

void func_0041D840(char *, char *, float);

void func_004BA670(char *p) {
    int func_0041D6B0(char *, float);
//P<
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *t;
    char *q;
    char *e;
//P>
    switch (*(int *)(p + 0x504)) {
    case 0:
        *(float *)(p + 0x508) = 600.0f;
        *(char **)(p + 0x4F4) = func_00207480(3, 0x281, 0, 0x10);
        if ((e = *(char **)(p + 0x4F4)) != 0) {
            t = p + 0x460;
            *(char **)(e + 0x90) = t;
            e[0x9A] = 0;
            e = *(char **)(p + 0x4F4);
            e[0x3A] = 1;
        }
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x50C) = 1.5f;
        *(int *)(p + 0x504) = 1;
    case 1:
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(v), "r"(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50) : "memory");
        v[1] = v[1] + 150.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x50), "r"(v) : "memory");
        d[0] = d[0] * 0.08f;
        d[1] = d[1] * 0.08f;
        d[2] = d[2] * 0.08f;
        *(float *)(p + 0x50) = *(float *)(p + 0x50) - d[0];
        *(float *)(p + 0x54) = *(float *)(p + 0x54) - d[1];
        *(float *)(p + 0x58) = *(float *)(p + 0x58) - d[2];
        if (*(char **)(p + 0x21C) != 0 && (*(int *)(*(char **)(p + 0x21C) + 8) & 0x1000)) {
            *(int *)(*(char **)(p + 0xD0) + 0x8FC) |= 0x40;
            func_001AD140(p);
            return;
        }
        if ((unsigned char)func_0041D6B0(p + 0x508, *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
        break;
    }
    q = p;
    if (q != 0) q += 0x40;
    func_0041D840(q, p + 0x420, *(float *)(p + 0x50C));
    func_0028C5C0(p + 0x1A0, 0, 1.0f);
}

void func_004B9BA0(char *p) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 80), "r"(p + 80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 128), "r"(p + 128) : "memory");
    *(short *)(p + 144) = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 132) / 6.283185005187988f);
    if (*(int *)(p + 1276) == 2) {
        *(float *)(p + 84) += 150.0f;
    }
}

float func_0041E060(char *);

void func_004B9AB0(char *p) {
    char *b;
    *(float *)(p + 1008) *= 0.5f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 80), "r"(p + 80) : "memory");
    *(float *)(p + 84) += 70.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 128), "r"(p + 128) : "memory");
    *(short *)(p + 144) = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 132) / 6.283185005187988f);
    b = p;
    if (b != 0) {
        b += 64;
    }
    *(float *)(p + 1252) = func_0041E060(b);
    *(float *)(p + 1260) = 1.0f;
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_0013D6A0(char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

extern char D_005B8940[];

extern char D_005B8964[];

extern char D_005B89E4[];

void func_00252FA0(char *);

void func_0028C110(char *);

void func_0013D640(char *, char *);

char *func_004BAD60(char *p0, int p1, short p2, char p3) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x3F0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B8940;
            *(char **)(t + 0x40) = D_005B8964;
            *(char **)(t + 0xA0) = D_005B89E4;
            func_0028C110(t + 0x150);
            *(int *)(t + 0x370) = 0;
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x8, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(int *)(ret + 0x378) = p1;
        *(short *)(ret + 0x90) = p2;
        *(char *)(ret + 0x374) = p3;
        *(char **)(ret + 0x3E8) = p0;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
    }
    return ret;
}

void func_0046EC00(char *, int, char *, int, int, float, float);

void func_004BA4D0(char *p) {
    int func_0041D6B0(float *, float);
    void func_0028C740(char *);
    char *q;
    char *e;
    char *b;
    switch (*(int *)(p + 0x504)) {
    case 0:
        *(char **)(p + 0x4F4) = func_00207480(3, 0x281, 0, 0x10);
        q = *(char **)(p + 0x4F4);
        if (q != 0) {
            *(char **)(q + 0x90) = p + 0x460;
            q[0x9A] = 0;
            (*(char **)(p + 0x4F4))[0x3A] = 1;
        }
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x508) = 120.0f;
        *(int *)(p + 0x504) = 1;
    case 1:
        e = *(char **)(p + 0x21C);
        if (e != 0 && (*(int *)(e + 8) & 0x1000)) {
            e = *(char **)(*(char **)D_01CAFF0C + 0xC);
            func_0046EC00(e + 0x3CE0, 1, e + 0x50, *(int *)(p + 0xD0), 0, 60.0f, 240.0f);
            func_0028C740(p + 0x1A0);
            *(int *)(p + 0x504) = 2;
        }
    case 2:
        *(float *)(p + 0x50C) = *(float *)(p + 0x50C) * 1.017f;
        *(float *)(p + 0x3F0) = *(float *)(p + 0x3F0) * 1.017f;
        if ((unsigned char)func_0041D6B0((float *)(p + 0x508), *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
    }
    b = p;
    if (b != 0) {
        b += 0x40;
    }
    func_0041D840(b, p + 0x420, *(float *)(p + 0x50C));
    func_0028C5C0(p + 0x1A0, 0, 1.0f);
}

void func_0041D670();

void func_004BAC60(int p0) {
    void func_0028C740();
    func_0028C740((p0 + 416));
    func_0041D670((p0 + 1268));
    func_0041D670((p0 + 1272));
}

extern void func_004B9910();

void func_004BAD30(char *p) { func_004B9910(p + -64); }

extern void func_004BACA0();

void func_004BAD40(char *p) { func_004BACA0(p + -64); }

void func_004BAD50(char *p) { func_004BACA0(p + -160); }

void func_004BAC40(void) {}

void func_004BAC50(void) {}
