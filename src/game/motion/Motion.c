void func_00105300(char *, char *);

void func_00131650(float *, float *);

void func_00104E78(float *, float *);

void func_00104C00(float *, float *, char *);

void func_001FD820(char *p, int n) {
    float m2[16] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    float m0[16] __attribute__((aligned(16)));
    int i;
    char *e;
    if (*(unsigned char *)(p + 0x104) == 0) {
        volatile float f = (float)n;
        *(int *)(p + 0x148) = 0;
        *(float *)(p + 0x168) = 1.0f / (1.0f + f);
        for (i = 0; i < *(int *)(p + 0x10); i++) {
            e = *(char **)(*(char **)(p + 0x14) + i * 4);
            if (*(char **)(e + 0xF0) != 0) {
                func_00105300((char *)m0, *(char **)(*(char **)(e + 0xF0) + 0x104));
                func_00131650(m0, m0);
                func_00131650(m0 + 4, m0 + 4);
                func_00131650(m0 + 8, m0 + 8);
                func_00104E78(m1, m0);
                func_00104C00(m2, m1, *(char **)(e + 0x104));
                m2[12] = m2[12] / *(float *)(*(char **)(e + 0xF0) + 0xE0);
                m2[13] = m2[13] / *(float *)(*(char **)(e + 0xF0) + 0xE4);
                m2[14] = m2[14] / *(float *)(*(char **)(e + 0xF0) + 0xE8);
                func_00105300(e, (char *)m2);
            } else {
                func_00105300(e, *(char **)(e + 0x100));
            }
            *(float *)(e + 0x90) = *(float *)(e + 0x184);
            *(float *)(e + 0x94) = *(float *)(e + 0x198);
            *(float *)(e + 0x98) = *(float *)(e + 0x1AC);
            *(float *)(e + 0x9C) = 0.0f;
        }
    } else {
        volatile float f = (float)n;
        *(int *)(p + 0x148) = 0;
        *(float *)(p + 0x168) = 1.0f / (1.0f + f);
        for (i = 0; i < *(int *)(p + 0x10); i++) {
            e = *(char **)(*(char **)(p + 0x14) + i * 4);
            func_00105300(e, *(char **)(e + 0x100));
            *(float *)(e + 0x90) = *(float *)(e + 0x184);
            *(float *)(e + 0x94) = *(float *)(e + 0x198);
            *(float *)(e + 0x98) = *(float *)(e + 0x1AC);
            *(float *)(e + 0x9C) = 0.0f;
        }
    }
}

void func_001FDA70(char *p, int k, int n) {
    float m2[16] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    float m0[16] __attribute__((aligned(16)));
    int i;
    int q;
    char *e;
    char *a;
    int *kp = &k;
    if (*(unsigned char *)(p + 0x104) == 0) {
        a = (char *)(k * 4) + (int)p;
        *(int *)(a + 0x148) = 0;
        *(float *)(a + 0x168) = 1.0f / (1.0f + (float)n);
        for (i = 0; i < *(int *)(p + 0x10); i++) {
            e = *(char **)(*(char **)(p + 0x14) + i * 4);
            if (*(short *)(e + 0xF4) == k) {
                if (*(char **)(e + 0xF0) != 0) {
                    func_00105300((char *)m0, *(char **)(*(char **)(e + 0xF0) + 0x104));
                    func_00131650(m0, m0);
                    func_00131650(m0 + 4, m0 + 4);
                    func_00131650(m0 + 8, m0 + 8);
                    func_00104E78(m1, m0);
                    func_00104C00(m2, m1, *(char **)(e + 0x104));
                    m2[12] = m2[12] / *(float *)(*(char **)(e + 0xF0) + 0xE0);
                    m2[13] = m2[13] / *(float *)(*(char **)(e + 0xF0) + 0xE4);
                    m2[14] = m2[14] / *(float *)(*(char **)(e + 0xF0) + 0xE8);
                    func_00105300(e, (char *)m2);
                } else {
                    func_00105300(e, *(char **)(e + 0x100));
                }
                *(float *)(e + 0x90) = *(float *)(e + 0x184);
                *(float *)(e + 0x94) = *(float *)(e + 0x198);
                *(float *)(e + 0x98) = *(float *)(e + 0x1AC);
            }
        }
    } else {
        a = (char *)(k * 4) + (int)p;
        *(int *)(a + 0x148) = 0;
        *(float *)(a + 0x168) = 1.0f / (1.0f + (float)n);
        for (q = 0; q < *(int *)(p + 0x10); q++) {
            e = *(char **)(*(char **)(p + 0x14) + q * 4);
            if (*(short *)(e + 0xF4) == k) {
                func_00105300(e, *(char **)(e + 0x100));
                *(float *)(e + 0x90) = *(float *)(e + 0x184);
                *(float *)(e + 0x94) = *(float *)(e + 0x198);
                *(float *)(e + 0x98) = *(float *)(e + 0x1AC);
            }
        }
    }
}

typedef struct { short k; short pad; int v; } KEnt;

typedef struct { short n; short pad; KEnt e[272]; } KTab;

int func_001FEDC0(KTab *t, int v, int k) {
    int func_001FED70(KTab *, int);
    if (func_001FED70(t, k) != 0) {
        return 1;
    }
    if (t->n >= 128) {
        return 0;
    }
    t->e[t->n].k = k;
    t->e[t->n].v = v;
    t->n += 1;
    return 1;
}

float func_001FA830(float x, float v0, float x0, float v1, float x1) {
    float t = (x - x0) / (x1 - x0);
    return (1.0f - t) * v0 + t * v1;
}

float func_001FEE60(char *a, int b) {
    int func_001FED70(char *, int);
    char *o = (char *)func_001FED70(a, b);
    if (o == 0) {
        return -1.0f;
    }
    if (*(unsigned char *)(o + 0x30) != 1) {
        return (float)*(int *)(o + 0x20);
    }
    return 1000000.0f;
}

void func_001F9EC0(char *);

void func_001FB670(char *, float *, int);

int func_001F9EE0(char *o, int idx, char *d) {
    char *e;
    char *q;
    int i;
    int n;
    int r;
    float b[8];
    q = d + *(int *)d;
    e = q + 4;
    if (idx >= *(int *)q) {
        func_001F9EC0(o);
        return 0;
    }
    n = idx / 10;
    r = idx % 10;
    for (i = 0; i < n; i++) {
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
        e += *(unsigned short *)e;
    }
    for (i = 0; i < r; i++) e += *(unsigned short *)e;
    *(char **)(o + 8) = e;
    switch (*(unsigned char *)(*(char **)(o + 8) + 4)) {
    case 0:
    case 1:
    case 6:
        e += 8;
        break;
    case 2:
    case 7:
        e += 0x10;
        break;
    case 3:
        e += 0x20;
        break;
    case 4:
    case 5:
        break;
    }
    *(char **)(o + 0xC) = e;
    func_001FB670(o, b, 0);
    *(float *)o = b[2];
    return 1;
}

int func_001FA370(char *o, int idx, char *d, int prev, char **cache) {
    char *e;
    char *q;
    int i;
    int n;
    int r;
    float b[8];
    q = d + *(int *)d;
    e = q + 4;
    if (idx >= *(int *)q) {
        func_001F9EC0(o);
        return 0;
    }
    if (idx == prev + 1) {
        e = *cache;
        e += *(unsigned short *)e;
    } else if (idx != 0) {
        n = idx / 10;
        r = idx % 10;
        for (i = 0; i < n; i++) {
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
            e += *(unsigned short *)e;
        }
        for (i = 0; i < r; i++) e += *(unsigned short *)e;
    }
    *cache = e;
    *(char **)(o + 8) = e;
    switch (*(unsigned char *)(*(char **)(o + 8) + 4)) {
    case 0:
    case 1:
    case 6:
        e += 8;
        break;
    case 2:
    case 7:
        e += 0x10;
        break;
    case 3:
        e += 0x20;
        break;
    case 4:
    case 5:
        break;
    }
    *(char **)(o + 0xC) = e;
    func_001FB670(o, b, 0);
    *(float *)o = b[2];
    return 1;
}

void func_001FEA30(int unused, char *a, char *b) {
    float m[16];
    func_00105300((char *)m, *(char **)(a + 0x104));
    func_00105300(*(char **)(a + 0x104), *(char **)(b + 0x104));
    func_00105300(*(char **)(b + 0x104), (char *)m);
}

void func_00100450();

void func_001F9E40();

void func_001F9E70();

void func_001FBA00();

int func_001FB9B0(p0) int p0; {
    func_00100450((p0 + 268), (char *)func_001F9E40, (char *)func_001F9E70, 20, 9);
    func_001FBA00(p0);
    return p0;
}

void func_001FBA00(p0) char *p0; {
    *(int *)(p0 + 240) = 0;
    *(int *)(p0 + 260) = 0;
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 128) = 0;
    *(int *)(p0 + 252) = 0;
    *(short *)(p0 + 246) = 0;
    *(short *)(p0 + 244) = 0;
    *(short *)(p0 + 248) = 1;
    *(int *)(p0 + 464) = 0;
    *(int *)(p0 + 468) = 0;
    *(int *)(p0 + 472) = 0;
    *(int *)(p0 + 476) = 0;
    *(int *)(p0 + 224) = 0x3f800000;
    *(int *)(p0 + 228) = 0x3f800000;
    *(int *)(p0 + 232) = 0x3f800000;
    *(int *)(p0 + 236) = 0x3f800000;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p0) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 160)) : "memory");
    *(float *)(p0 + 144) = 1.0f;
    *(float *)(p0 + 148) = 1.0f;
    *(float *)(p0 + 152) = 1.0f;
    *(float *)(p0 + 156) = 0.0f;
    *(char *)(p0 + 448) = 0;
    *(char *)(p0 + 449) = 1;
}

extern char D_005A74E0[];

void func_001FBAF0();

int func_00278D10();

int func_001FBAB0(p0) int p0; {
    func_00278D10();
    *(char **)((char *)p0 + 0) = D_005A74E0;
    func_001FBAF0(p0);
    return p0;
}

void func_001FBAF0(p0) char *p0; {
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 20) = 0;
    *(char *)(p0 + 24) = 0;
    *(int *)(p0 + 184) = 0;
    *(char *)(p0 + 172) = 0;
    *(int *)(p0 + 296) = 0;
    *(int *)(p0 + 264) = 0;
    *(int *)(p0 + 328) = 0x3f800000;
    *(int *)(p0 + 360) = 0x3f800000;
    *(char *)(p0 + 164) = 0;
    *(int *)(p0 + 228) = 0;
    *(char *)(p0 + 173) = 0;
    *(int *)(p0 + 300) = 0;
    *(int *)(p0 + 268) = 0;
    *(int *)(p0 + 332) = 0x3f800000;
    *(int *)(p0 + 364) = 0x3f800000;
    *(char *)(p0 + 165) = 0;
    *(int *)(p0 + 232) = 0;
    *(char *)(p0 + 174) = 0;
    *(int *)(p0 + 304) = 0;
    *(int *)(p0 + 272) = 0;
    *(int *)(p0 + 336) = 0x3f800000;
    *(int *)(p0 + 368) = 0x3f800000;
    *(char *)(p0 + 166) = 0;
    *(int *)(p0 + 236) = 0;
    *(char *)(p0 + 175) = 0;
    *(int *)(p0 + 308) = 0;
    *(int *)(p0 + 276) = 0;
    *(int *)(p0 + 340) = 0x3f800000;
    *(int *)(p0 + 372) = 0x3f800000;
    *(char *)(p0 + 167) = 0;
    *(int *)(p0 + 240) = 0;
    *(char *)(p0 + 176) = 0;
    *(int *)(p0 + 312) = 0;
    *(int *)(p0 + 280) = 0;
    *(int *)(p0 + 344) = 0x3f800000;
    *(int *)(p0 + 376) = 0x3f800000;
    *(char *)(p0 + 168) = 0;
    *(int *)(p0 + 244) = 0;
    *(char *)(p0 + 177) = 0;
    *(int *)(p0 + 316) = 0;
    *(int *)(p0 + 284) = 0;
    *(int *)(p0 + 348) = 0x3f800000;
    *(int *)(p0 + 380) = 0x3f800000;
    *(char *)(p0 + 169) = 0;
    *(int *)(p0 + 248) = 0;
    *(char *)(p0 + 178) = 0;
    *(int *)(p0 + 320) = 0;
    *(int *)(p0 + 288) = 0;
    *(int *)(p0 + 352) = 0x3f800000;
    *(int *)(p0 + 384) = 0x3f800000;
    *(char *)(p0 + 170) = 0;
    *(int *)(p0 + 252) = 0;
    *(char *)(p0 + 179) = 0;
    *(int *)(p0 + 324) = 0;
    *(int *)(p0 + 292) = 0;
    *(int *)(p0 + 356) = 0x3f800000;
    *(int *)(p0 + 388) = 0x3f800000;
    *(char *)(p0 + 171) = 0;
    *(int *)(p0 + 256) = 0;
    *(char *)(p0 + 180) = 3;
    *(char *)(p0 + 400) = 1;
    *(char *)(p0 + 260) = 1;
    *(char *)(p0 + 401) = 1;
    *(char *)(p0 + 402) = 1;
}

int func_001FE270();

int func_001FE9F0(p0) int p0; {
    char stk[0x40] __attribute__((aligned(16)));
    int tmp0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -16) + 16)) : "memory");
    *(float *)((stk + -16) + 16) = -1.0f;
    tmp0 = func_001FE270(p0, ((stk + -16) + 16));
    return tmp0;
}

void func_001FEBA0(p0, p1) char *p0; int p1; {
    int v2;
    char *v1;
    int v0;
    v2 = 0;
    if ((0 < *(int *)(p0 + 16))) {
        v0 = 0;
        do {
            v1 = *(char **)((char *)(*(int *)(p0 + 20) + v0) + 0);
            if (*(short *)(v1 + 244) == p1) {
                *(short *)(v1 + 248) = 0;
            }
            v0 = (v0 + 4);
            v2 = (v2 + 1);
        } while ((v2 < *(int *)(p0 + 16)));
    }
}

float func_001FEC00(p0, p1) int p0; int p1; {
    return *(float *)((char *)((p1 << 2) + p0) + 296);
}

float func_001FEC20(p0, p1) int p0; int p1; {
    return *(float *)((char *)((p1 << 2) + p0) + 28);
}

float func_001FEC40(p0, p1) int p0; int p1; {
    return *(float *)((char *)((p1 << 2) + p0) + 60);
}

float func_001FEC60(p0, p1) int p0; int p1; {
    return *(float *)((char *)((p1 << 2) + p0) + 92);
}

float func_001FEC80(p0, p1) int p0; int p1; {
    return *(float *)((char *)((p1 << 2) + p0) + 124);
}

int func_001FECA0(p0, p1) int p0; int p1; {
    return *(signed char *)((char *)(p1 + p0) + 172);
}

void func_001FECC0(p0, p1, p2) int p0; int p1; int p2; {
    *(char *)((char *)(p1 + p0) + 156) = p2;
}

int func_001FECE0(p0, p1) int p0; int p1; {
    return *(unsigned char *)((char *)(p1 + p0) + 156);
}

int func_001FECF0(p0) char *p0; {
    int v0;
    int v1;
    *(short *)(p0 + 0) = 0;
    v1 = 0;
    v0 = -1;
    do {
        *(short *)(p0 + 4) = v0;
        *(int *)(p0 + 8) = 0;
        v1 = (v1 + 8);
        *(short *)(p0 + 12) = v0;
        *(int *)(p0 + 16) = 0;
        *(short *)(p0 + 20) = v0;
        *(int *)(p0 + 24) = 0;
        *(short *)(p0 + 28) = v0;
        *(int *)(p0 + 32) = 0;
        *(short *)(p0 + 36) = v0;
        *(int *)(p0 + 40) = 0;
        *(short *)(p0 + 44) = v0;
        *(int *)(p0 + 48) = 0;
        *(short *)(p0 + 52) = v0;
        *(int *)(p0 + 56) = 0;
        *(short *)(p0 + 60) = v0;
        *(int *)(p0 + 64) = 0;
        p0 = (p0 + 64);
    } while ((v1 < 128));
    return 1;
}

int func_001FEB90(char *p) { return *(int *)(p + 16); }

float func_001FEC10(char *p) { return *(float *)(p + 296); }

float func_001FEC30(char *p) { return *(float *)(p + 28); }

float func_001FEC50(char *p) { return *(float *)(p + 60); }

float func_001FEC70(char *p) { return *(float *)(p + 92); }

float func_001FEC90(char *p) { return *(float *)(p + 124); }

signed char func_001FECB0(char *p) { return *(signed char *)(p + 172); }

void func_001FECD0(char *p, char v) { *(char *)(p + 156) = v; }

void func_001FED60(void) {}
