char *func_001A5B50(char *);

float *func_00277610(char *, float *, int, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define VADDR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

void func_00304C30(char *p, char *t) {
    float v[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    char *o;
    char *m;
    float *r;
    if (t != 0) {
        o = func_001A5B50(*(char **)(p + 0xC));
        if (o == 0) {
            m = *(char **)(*(char **)(p + 0xC) + 0x108) + *(unsigned short *)(*(char **)(p + 0xC) + 0xBA) * 0x40;
        } else {
            m = *(char **)(o + 0x108) + *(unsigned short *)(*(char **)(p + 0xC) + 0xBA) * 0x40;
        }
        QCOPY(v, m + 0x30);
        v[3] = 1.0f;
        r = func_00277610(t, v, 0x1C, 0);
        if (!(r[8] <= 0.0f)) {
            QCOPY(p + 0x30, r);
            VADDR54(p + 0x30, v, p + 0x30);
            *(float *)(p + 0x3C) = 1.0f;
        } else {
            w[0] = 200.0f;
            w[1] = 300.0f;
            w[2] = 50.0f;
            w[3] = 0.0f;
            VADDR54(p + 0x30, v, w);
            *(float *)(p + 0x3C) = 1.0f;
        }
    }
}

extern char *D_005BE0D8;

void func_001282D0(char *, char *, int);

int func_001AE4B0(unsigned int n);

float func_00104D00(float *, float *);

void func_001AE4F0(int);

void func_00304AE0(char *, float *, char *, char *, char *);

unsigned int func_003047F0(char *);

unsigned int func_00304790(char *);

void func_00304850(char *p, int k, char *verts, float *n) {
    int idx = *(signed char *)(D_005BE0D8 + 0xE);
    unsigned char *fl = (unsigned char *)func_001AE4B0(0x10);
    char *o = *(char **)(p + 0x18) + k * 0x60;
    int i;
    int *t;
    float v[4] __attribute__((aligned(16)));
    char *c;
    char *d;
    unsigned short *ix;
    int *w;
    char *q;
    int j;
    for (i = 0; i < *(int *)(o + 8); i++) {
        t = (int *)(*(char **)(o + 0x20) + i * 0x10);
        func_00304AE0(p, v, verts + t[0] * 16, verts + t[1] * 16, verts + t[2] * 16);
        if (func_00104D00(n, v) < 0.0f) {
            fl[i] = 1;
        } else {
            fl[i] = 0;
            continue;
        }
        if (func_003047F0(p) & 0x3FFFF) {
            fl[i] = 0;
            continue;
        }
        if (func_00304790(p) & 0x3FFFF) {
            fl[i] = 0;
            continue;
        }
        (*(int *)(o + 0xC))++;
    }
    if (*(int *)(o + 0xC) > 0) {
        func_001282D0(((char **)(o + 0x40))[idx], verts, *(int *)(o + 4) << 4);
        c = (char *)((*(unsigned int *)((char *)(idx * 4) + (int)o + 0x30) + 0x20) & 0x0FFFFFFF);
        for (j = 0; j < *(int *)(o + 8); j++) {
            if (fl[j]) {
                d = *(char **)((char *)(idx * 4) + (int)o + 0x50) + j * 0x30;
                ix = (unsigned short *)(*(char **)(o + 0x24) + j * 8);
                w = (int *)(*(char **)((char *)(idx * 4) + (int)o + 0x48) + j * 0x10);
                w[0] = fl[ix[0]];
                w[1] = fl[ix[1]];
                w[2] = fl[ix[2]];
                w[3] = 0;
                *(char **)(c + 4) = d;
                c = d + 0x20;
            }
        }
        *(int *)(c + 4) = ((int *)(o + 0x38))[idx];
    }
    func_001AE4F0(0x10);
}

void func_00104B80(char *, char *, char *);

int func_00304680(char *p, int k, char *m, char *out) {
    char *e = *(char **)(p + 0x18) + k * 96;
    char *src = *(char **)(e + 0x28);
    unsigned char *idx = *(unsigned char **)(e + 0x2C);
    int i;
    for (i = 0; i < *(int *)(e + 4); i++) {
        func_00104B80(out, m + *idx * 64, src);
        src += 0x10;
        idx++;
        out += 0x10;
    }
    return 0;
}

int func_001A1DF0();

int func_001A7560();

void func_00304030();

void func_003043E0();

int func_00304B10();

int func_00304BB0();

int func_00304360(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    if (*(int *)(p0 + 16) != 0) {
        v1 = func_001A1DF0(*(int *)(v0 + 12));
        v2 = (int)v0;
        if ((v1 & 255) != 0) {
            v1 = func_00304BB0(v2);
            v3 = (int)v0;
            if ((v1 & 255) != 0) {
                func_00304030(v3);
                func_003043E0(v0);
                v1 = func_00304B10(v0);
                v4 = (int)v0;
                if (*(int *)(v0 + 20) > 0) {
                    v1 = func_001A7560(v4, 0);
                }
            }
        }
    }
    return v1;
}

void func_00304740(p0, p1, p2, p3, p4) int p0; char *p1; char *p2; char *p3; char *p4; {
    __asm__ volatile("lqc2 $vf9, 0x0(%0)\n\tlqc2 $vf10, 0x10(%0)\n\tlqc2 $vf11, 0x20(%0)\n\tlqc2 $vf12, 0x30(%0)\n\tlqc2 $vf13, 0x0(%1)\n\tlqc2 $vf14, 0x10(%1)\n\tlqc2 $vf15, 0x20(%1)\n\tlqc2 $vf16, 0x30(%1)\n\tlqc2 $vf17, 0x0(%2)\n\tlqc2 $vf18, 0x10(%2)\n\tlqc2 $vf19, 0x20(%2)\n\tlqc2 $vf20, 0x30(%2)\n\tlqc2 $vf21, 0x0(%3)\n\tlqc2 $vf22, 0x10(%3)\n\tlqc2 $vf23, 0x20(%3)\n\tlqc2 $vf24, 0x30(%3)" : : "r"(p1), "r"(p2), "r"(p3), "r"(p4) : "memory");
}

void func_00304BC0(p0) char *p0; {
    int v0;
    char *v1;
    v0 = 0;
    if ((0 < *(unsigned char *)(p0 + 16))) {
        v1 = p0;
        do {
            v0 = (v0 + 1);
            *(int *)(v1 + 48) = (*(int *)(v1 + 48) + (int)p0);
            *(int *)(v1 + 52) = (*(int *)(v1 + 52) + (int)p0);
            *(int *)(v1 + 56) = (*(int *)(v1 + 56) + (int)p0);
            *(int *)(v1 + 60) = (*(int *)(v1 + 60) + (int)p0);
            v1 = (v1 + 48);
        } while ((v0 < *(unsigned char *)(p0 + 16)));
    }
}

void func_003038E0(char *p0, char *p1, int p2) {
    *(char **)(p0 + 12) = p1;
    *(int *)(p0 + 28) = p2;
    *(char **)(p1 + 276) = p0;
}

int func_00304020(char *p0, int p1) {
    return (p1 - *(int *)(p0 + 16));
}

void func_00304BA0(char *p0) {
    int t0;
    t0 = (*(unsigned short *)(p0 + 10) | 1);
    *(short *)(p0 + 10) = (*(unsigned short *)(p0 + 10) | 1);
}
