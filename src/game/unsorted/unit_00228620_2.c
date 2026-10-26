void func_00104E78(char *, char *);

void func_0028C940(char *);

void func_002293F0(char *p, char *self, char *it) {
    void func_00104C00(char *, char *, char *);
    int func_00229C60(char *, char *, char *, float *);
    float tmp[4] __attribute__((aligned(16)));
    char m1[0x40] __attribute__((aligned(16)));
    char m2[0x40] __attribute__((aligned(16)));
    int mask;
    char *mt;
    signed char k = *(signed char *)(*(char **)(self + 0xC0) + 2);
    if (it == 0) return;
    mask = 0x1000 << (unsigned char)k;
    mt = self + 0x60;
    do {
        if (*(unsigned char *)it == 2 && self != it && *(int *)(self + 0xC0) != *(int *)(it + 0xC0)
            && (mask & *(int *)(it + 0xC)) != 0
            && (unsigned char)func_00229C60(p, self, it, tmp) == 1
            && *(float *)(self + 0xD4) <= *(float *)(it + 0xD4)) {
            func_00104E78(m1, mt);
            func_00104C00(m2, self + 0x20, m1);
            func_00104C00(*(char **)(it + 0xC0) + 0x1A0, m2, *(char **)(it + 0xC0) + 0x1A0);
            func_00104C00(*(char **)(it + 0xC0) + 0x1E0, m2, *(char **)(it + 0xC0) + 0x1E0);
            func_0028C940(*(char **)(it + 0xC0));
        }
        it = *(char **)(it + 0x304);
    } while (it != 0);
}

typedef struct { float v[4]; } F4;

void func_0022A870(char *);

void func_002290E0(char *p) {
    void func_00105300(char *, char *);
    int i;
    char *e = p;
    for (i = 0; i < 100; i++) {
        p = e;
        switch (*(unsigned char *)(p + 0x50)) {
        case 3:
            *(unsigned char *)(p + 0x50) = 0;
            func_0022A870(p + 0x50);
            break;
        case 2:
            *(F4 *)(p + 0x130) = *(F4 *)(p + 0x120);
            func_00105300(p + 0xB0, p + 0x70);
            break;
        }
        e += 0x310;
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *func_00229990_g(char *o) {
    return *(char **)(o + 0xC0);
}

static inline void func_00229990_h(unsigned int *f, unsigned int b, unsigned char k) {
    *f |= b << k;
}

static inline unsigned int func_00229990_t(unsigned int f, unsigned char k) {
    return (1 << k) & f;
}

void func_00229990(char *a, char *p, char *q) {
    unsigned char func_00229C60(char *, char *, char *, float *);
    float v[4] __attribute__((aligned(16)));
    signed char c = *(signed char *)(*(char **)(p + 0xC0) + 2);
    for (; q != 0; q = *(char **)(q + 0x300)) {
        if (*(unsigned char *)q == 2 && p != q && func_00229990_g(p) != func_00229990_g(q) &&
            func_00229990_t(*(unsigned int *)(q + 0xC), c) != 0 && func_00229C60(a, p, q, v) != 0) {
            switch (*(unsigned char *)(p + 0x110)) {
            case 1:
                QCOPY(p + 0x120, v);
            }
            QCOPY(p + 0xB0, v);
            QCOPY(q + 0xB0, v);
            func_00229990_h((unsigned int *)(p + 8), 0x40, *(signed char *)(*(char **)(q + 0xC0) + 2));
            func_00229990_h((unsigned int *)(q + 8), 1, *(signed char *)(*(char **)(p + 0xC0) + 2));
            *(char **)(p + 0xA4) = q;
        }
    }
}

void func_002289C0(p0) char *p0; {
    int v0;
    int v1;
    v0 = 0;
    v1 = 2;
    do {
        if (*(unsigned char *)(p0 + 80) == v1) {
            *(int *)(p0 + 88) = 0;
        }
        v0 = (v0 + 1);
        p0 = (p0 + 784);
    } while ((v0 < 100));
}

extern char D_01CAFF0C[];

void func_00228AC0();

int func_00228D20();

int func_00228EA0();

int func_002289F0(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    func_00228AC0(p0, 14);
    func_00228AC0(v0, 8);
    func_00228D20(v0, 14);
    func_00228D20(v0, 11);
    func_00228D20(v0, 8);
    func_00228D20(v0, 5);
    v2 = func_00228D20(v0, 2);
    v1 = v0;
    if (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 24) + 154) == 0) {
        func_00228EA0(v1, 15);
        func_00228EA0(v0, 12);
        func_00228EA0(v0, 9);
        func_00228EA0(v0, 6);
        func_00228EA0(v0, 3);
        v2 = func_00228EA0(v0, 0);
    }
    return v2;
}

int func_00229190();

int func_00229690();

int func_00228D20(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    v0 = (char *)p0;
    v2 = *(char **)((char *)(p0 + ((p1 & 255) << 2)) + 0);
    v1 = p1;
    if (v2 != 0) {
        do {
            if (*(unsigned char *)(v2 + 0) == 2) {
                if ((*(int *)(v2 + 12) & 4096) != 0) {
                    v3 = func_00229690(v0, v2, *(int *)(v0 + 8), v1, 2);
                }
                if ((*(int *)(v2 + 12) & 8192) != 0) {
                    v3 = func_00229690(v0, v2, *(int *)(v0 + 20), v1, 5);
                }
                if ((*(int *)(v2 + 12) & 16384) != 0) {
                    v3 = func_00229690(v0, v2, *(int *)(v0 + 32), v1, 8);
                }
                if ((*(int *)(v2 + 12) & 32768) != 0) {
                    v3 = func_00229690(v0, v2, *(int *)(v0 + 44), v1, 11);
                }
                if ((*(int *)(v2 + 12) & 0x10000) != 0) {
                    v3 = func_00229690(v0, v2, *(int *)(v0 + 56), v1, 14);
                }
                if ((*(int *)(v2 + 12) & 0x20000) != 0) {
                    func_00229690(v0, v2, *(int *)(v0 + 68), v1, 17);
                    v3 = func_00229190(v0, v1, v2);
                }
            }
            v2 = *(char **)(v2 + 772);
        } while (v2 != 0);
    }
    return v3;
}

void func_00100580();

void func_0022A7B0();

int func_0022A750(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_0022A7B0();
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}

void func_0022A7E0(p0) char *p0; {
    *(char *)(p0 + 1) = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 32)) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 96)) : "memory");
    *(float *)(p0 + 20) = 1.0f;
    *(char *)(p0 + 3) = 0;
    *(char *)(p0 + 5) = 5;
    *(char *)(p0 + 2) = 0;
    *(char *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 164) = 0;
    *(int *)(p0 + 192) = 0;
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 260) = 0;
    *(int *)(p0 + 752) = 0;
    *(int *)(p0 + 756) = 0;
    *(int *)(p0 + 760) = 0;
    *(char *)(p0 + 196) = 0;
    *(char *)(p0 + 199) = 0;
    *(char *)(p0 + 198) = 0;
    *(char *)(p0 + 197) = 0;
}

int func_0022A990();

int func_0022A9D0();

int func_0022AAA0();

int func_0022AC00();

int func_0022AE80();

int func_0022AF70();

int func_0022B000();

int func_0022A890(p0) char *p0; {
    int func_00105300();
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = *(int *)(p0 + 24);
    v1 = p0;
    if (v0 != 0) {
        v5 = func_00105300((v1 + 32), v0);
    } else {
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((v1 + 32)) : "memory");
    }
    v3 = *(unsigned char *)(*(char **)(v1 + 260) + 0);
    switch (v3) {
    case 0:
        v5 = func_0022A990(v1);
        break;
    case 1:
        v5 = func_0022A9D0(v1);
        break;
    case 2:
        v5 = func_0022AAA0(v1);
        break;
    case 3:
        v5 = func_0022AC00(v1);
        break;
    case 4:
        v5 = func_0022AE80(v1);
        break;
    case 5:
        v5 = func_0022AF70(v1);
        break;
    case 6:
        v5 = func_0022B000(v1);
        break;
    }
    v2 = *(signed char *)(v1 + 1);
    if (v2 == 0) {
        *(char *)(v1 + 1) = (v2 + 1);
    }
    return v5;
}

extern char D_00540790[];

int func_00104B80();

void func_00105578(char *, char *, float);

void func_00105668(char *, char *, float);

void func_00105760(char *, char *, float);

int func_0022B170(p0) char *p0; {
    int func_00104C00();
    char stk[0x90] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    func_00104C00(((stk + -48) + 64), (*(int *)(p0 + 192) + 416), (v0 + 32));
    *(float *)((stk + -48) + 48) = *(float *)(*(char **)(v0 + 260) + 16);
    *(float *)((stk + -48) + 52) = *(float *)(*(char **)(v0 + 260) + 20);
    *(float *)((stk + -48) + 56) = *(float *)(*(char **)(v0 + 260) + 24);
    *(int *)((stk + -48) + 60) = 0x3f800000;
    func_00104B80((v0 + 208), ((stk + -48) + 64), ((stk + -48) + 48));
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -48) + 128)) : "memory");
    *(float *)((stk + -48) + 128) = *(float *)(*(char **)(v0 + 260) + 40);
    *(float *)((stk + -48) + 148) = *(float *)(*(char **)(v0 + 260) + 44);
    *(float *)((stk + -48) + 168) = *(float *)(*(char **)(v0 + 260) + 48);
    func_00105668(((stk + -48) + 128), ((stk + -48) + 128), (6.283185005187988f * (*(float *)(*(char **)(v0 + 260) + 28) / 360.0f)));
    func_00105760(((stk + -48) + 128), ((stk + -48) + 128), (6.283185005187988f * (*(float *)(*(char **)(v0 + 260) + 32) / 360.0f)));
    func_00105578(((stk + -48) + 128), ((stk + -48) + 128), (6.283185005187988f * (*(float *)(*(char **)(v0 + 260) + 36) / 360.0f)));
    *(float *)((stk + -48) + 176) = *(float *)(*(char **)(v0 + 260) + 16);
    *(float *)((stk + -48) + 180) = *(float *)(*(char **)(v0 + 260) + 20);
    *(float *)((stk + -48) + 184) = *(float *)(*(char **)(v0 + 260) + 24);
    v1 = func_00104C00(((stk + -48) + 128), ((stk + -48) + 64), ((stk + -48) + 128));
    v2 = 0;
    while ((v2 < 8)) {
        v1 = func_00104B80(((v0 + (v2 << 4)) + 288), ((stk + -48) + 128), (D_00540790 + (v2 << 4)));
        v2 = (v2 + 1);
    }
    return v1;
}

void func_0022B3F0(p0, p1, p2) char *p0; char *p1; int p2; {
    int tmp0;
    tmp0 = *(int *)(p0 + 192);
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(((*(int *)(p0 + 192) + (p2 << 6)) + 464)), "r"(p1) : "memory");
    *(float *)((char *)((p2 << 6) + tmp0) + 476) = 1.0f;
}
