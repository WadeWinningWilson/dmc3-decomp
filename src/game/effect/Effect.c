void func_00105300(float *, char *);

void func_00104B80(float *, float *, float *);

int func_002070F0(char *);

void func_00207100(char *, float *);

void func_00104C00(float *, float *, char *);

void func_00104E78(float *, float *);

float func_001324E0(float *);

void func_001EFFE0(char *, float);

typedef struct { float x, y, z, w; } V4F __attribute__((aligned(16)));

void func_001F0170(char *p) {
    V4F w;
    V4F v;
    float n[16] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    float l;
    float s;
    float d;
    float r;
    *(float *)(p + 0x6EC) += *(float *)(p + 0x6F8) * *(float *)(p + 0x10);
    *(float *)(p + 0x6F0) += *(float *)(p + 0x6FC) * *(float *)(p + 0x10);
    *(float *)(p + 0x6F4) += *(float *)(p + 0x700) * *(float *)(p + 0x10);
    v.x = 0.0f;
    ((float *)&v)[1] = *(float *)(p + 0x748) * *(float *)(p + 0x10);
    ((float *)&v)[2] = 0.0f;
    v.w = 1.0f;
    if ((unsigned char)func_002070F0(p) == 1) {
        func_00207100(p, m);
        func_00104C00(n, m, p + 0x50);
    } else {
        func_00105300(n, p + 0x50);
    }
    n[12] = 0.0f;
    n[13] = 0.0f;
    n[14] = 0.0f;
    func_00104E78(n, n);
    func_00104B80((float *)&v, n, (float *)&v);
    *(float *)(p + 0x6EC) += v.x;
    *(float *)(p + 0x6F0) += v.y;
    *(float *)(p + 0x6F4) += v.z;
    w.x = *(float *)(p + 0x6F8);
    w.y = *(float *)(p + 0x6FC);
    w.z = *(float *)(p + 0x700);
    w.w = 1.0f;
    r = func_001324E0((float *)&w);
    l = r;
    s = *(float *)(*(char **)(p + 0xA0) + 0x7C);
    d = s * *(float *)(p + 0x10);
    if (s < 1.0f && !(d < 1.0f)) d = 0.99999f;
    r -= d;
    if (!(l <= 0.0f)) {
        if (r < 0.0f) r = 0.0f;
    } else if (l < 0.0f) {
        if (!(r <= 0.0f)) r = 0.0f;
    } else {
        r = 0.0f;
    }
    func_001EFFE0(p, r);
}

char *func_001B0FD0(char *, int, int);

extern char D_00645A30[];

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_001EE110(char *);

void func_00207410(char *, char *, char *, char *);

void func_00207460(char *, char *, char *);

extern char D_01DF7E20[];

char *func_0013D2A0(char *, char *, int);

void func_001EE570(char *, char *);

void func_001EE1D0(char *);

char *func_001EDF40(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    if (D_01DF7E20 == 0) {
        **q = func_001B0FD0(a, 0x7C0, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0x7C0);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0x7C0, t);
        if (r != 0) {
            func_001EE110(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xE, **q);
        func_001B1430(**q, 1);
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
        func_00207410(ret, a0, a3, a4);
        func_00207460(ret, a1, a5);
        *(float *)(ret + 0x40) = f;
        func_001EE570(ret, a2);
        func_001EE1D0(ret);
    }
    return ret;
}

unsigned char func_001EEC40(char *p, float *pos, unsigned int vol) {
    extern char *D_005BE09C;
    float v[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float l;
    float r;
    char *c;
    unsigned char res;
    c = *(char **)(D_005BE09C + 0x23C);
    switch (*(unsigned char *)(*(char **)(p + 0xA0) + 0x1D4)) {
    case 0:
        return vol;
    case 1:
        if (!(*(float *)(*(char **)(p + 0xA0) + 0x1D8) <= 0.0f)) {
        v[0] = pos[0];
        v[1] = pos[1];
        v[2] = pos[2];
        v[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%0)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%1)" : : "r"(c + 0x70), "r"(d), "r"(v) : "memory");
        l = func_001324E0(d);
        if (!(l <= *(float *)(*(char **)(p + 0xA0) + 0x1D8))) return vol;
        l = l / *(float *)(*(char **)(p + 0xA0) + 0x1D8);
        return (unsigned int)(vol * l);
        }
        return vol;
    case 2:
        r = *(float *)(*(char **)(p + 0xA0) + 0x1D8) - 200.0f;
        if (!(r <= 0.0f)) {
        v[0] = pos[0];
        v[1] = pos[1];
        v[2] = pos[2];
        v[3] = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%1)" : : "r"(c + 0x70), "r"(d), "r"(v) : "memory");
        l = func_001324E0(d);
        if (!(l <= r)) return 0;
        l = 1.0f - l / r;
        return (unsigned int)(vol * l);
        }
        res = 0;
        break;
    }
    return res;
}

typedef struct { short k; short pad; int v; } KEnt;

typedef struct { short n; short pad; KEnt e[272]; } KTab;

int func_001F3AA0(KTab *t, int v, int k) {
    int func_001F3A50(KTab *, int);
    if (func_001F3A50(t, k) != 0) {
        return 1;
    }
    if (t->n >= 272) {
        return 0;
    }
    t->e[t->n].k = k;
    t->e[t->n].v = v;
    t->n += 1;
    return 1;
}

float func_001F3B40(char *a, int b) {
    char *func_001F3A50(char *, int);
    char *o = func_001F3A50(a, b);
    if (o == 0) {
        return -1.0f;
    }
    if (*(unsigned char *)(o + 0x84) != 1) {
        return (float)*(int *)(o + 0x80);
    }
    return 1000000.0f;
}

void func_001AD140(char *);

void func_001AD100(char *);

int func_00207060(char *);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_00207850(char *);

void func_001EF6B0(char *);

void func_001EE2F0(char *p) {
    extern signed char D_005BE0E4;
    func_001AD100(p);
    func_00207850(p);
    if (func_00207060(p) != 0) {
        func_001AD140(p);
        return;
    }
    if (D_005BE0E4 != 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x39) != 0) {
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0xA0) + 0x84) == 0) {
        *(float *)(p + 0x6E8) = *(float *)(p + 0x6E8) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x6E8) < 0.0f) {
            if (*(unsigned char *)(p + 0x98) == 1) {
                *(unsigned char *)(p + 4) = 2;
                return;
            }
            func_001AD140(p);
            return;
        }
    }
    func_001EF6B0(p);
    if (!(*(float *)(p + 0x40) <= 0.0f)) {
        *(float *)(p + 0x40) = *(float *)(p + 0x40) - *(float *)(p + 0x10);
        return;
    }
    if (*(unsigned char *)(p + 0x3B) == 0) {
        func_00195E20(D_005BE098, p);
    }
}

void func_00131650(char *, char *);

static inline char *up(char *q, int off) {
    if (q != 0) {
        q += off;
    }
    return q;
}

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

#define OPCROSS(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tlqc2 $vf6, 0x0(%0)\n\tvopmula.xyz $ACC, $vf4, $vf5\n\tvopmsub.xyz $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

#define QCOPYW1V4(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tvmove.w $vf4, $vf0\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_001F36E0(char *u, char *m, char *pos, char *up) {
    extern int D_005BE09C;
    float d[4];
    VSUBR(d, pos, *(char **)((char *)D_005BE09C + 0x23C) + 0x70);
    func_00131650(m, up);
    OPCROSS(m + 0x10, d, m);
    func_00131650(m + 0x10, m + 0x10);
    OPCROSS(m + 0x20, m, m + 0x10);
    *(float *)(m + 0xC) = 0.0f;
    *(float *)(m + 0x1C) = 0.0f;
    *(float *)(m + 0x2C) = 0.0f;
    QCOPYW1V4(m + 0x30, pos);
}

void func_001F37B0(char *u, char *m, char *pos, char *up) {
    extern int D_005BE09C;
    float d[4];
    VSUBR(d, pos, *(char **)((char *)D_005BE09C + 0x23C) + 0x70);
    func_00131650(m + 0x10, up);
    OPCROSS(m, m + 0x10, d);
    func_00131650(m, m);
    OPCROSS(m + 0x20, m, m + 0x10);
    *(float *)(m + 0xC) = 0.0f;
    *(float *)(m + 0x1C) = 0.0f;
    *(float *)(m + 0x2C) = 0.0f;
    QCOPYW1V4(m + 0x30, pos);
}

void func_001F0CD0(char *p) {
    int i;
    short h;
    for (i = 0; i < 3; i++) {
        if (*(unsigned char *)(*(char **)(p + 0xA0) + i + 0x88) == 1) {
            h = *(short *)(*(char **)(p + 0xA0) + i * 2 + 0x8E);
            if (h >= 0) {
                *(float *)(p + i * 4 + 0x764) = (float)h;
            } else {
                *(unsigned char *)(*(char **)(p + 0xA0) + i + 0x88) = 0;
            }
        } else {
            *(int *)(p + i * 4 + 0x764) = 0;
        }
        *(short *)(p + i * 2 + 0x758) = 0;
        *(unsigned char *)(p + i + 0x770) = 0;
        *(short *)(p + i * 2 + 0x75E) = 0;
    }
    *(float *)(p + 0x718) = *(float *)(*(char **)(p + 0xA0) + 0xA8);
    *(float *)(p + 0x71C) = *(float *)(*(char **)(p + 0xA0) + 0xAC);
    *(float *)(p + 0x720) = *(float *)(*(char **)(p + 0xA0) + 0xB0);
}

char *func_00279290(char *);

short func_001A5DA0(char *);

void func_001A5D70(char *, short);

int func_001F3880(char *p, char *a, short n) {
    short s;
    switch (*(unsigned char *)(*(char **)(p + 0xA0) + 1)) {
    case 0: case 1: case 2: case 3: case 4:
        return 0;
    case 5:
        s = func_001A5DA0(func_00279290(a));
        func_001A5D70(func_00279290(p + 0xC0), s + n);
        break;
    }
    return 1;
}

int func_001F1170(char *p) {
    if (*(unsigned char *)(*(char **)(p + 0xA0) + 1) != 5) goto other;
    return 1;
other:
    return 1;
}

void func_001EE410(char *p) {
    extern signed char D_005BE0E4;
    func_001AD100(p);
    if (func_00207060(p) != 0) {
        func_001AD140(p);
    } else if (D_005BE0E4 != 0) {
        func_001AD140(p);
    } else {
        *(volatile unsigned char *)(p + 0x39);
    }
}

float func_001F36B0(char *p) {
    char *o = *(char **)(p + 0xA0);
    if (*(unsigned char *)(o + 0x84) != 1) {
        return (float)*(int *)(o + 0x80);
    }
    return 1000000.0f;
}

int func_001F10B0();

int func_001F1570();

int func_001F1960();

int func_001F1D20();

int func_001F2C20();

int func_001F2C30();

int func_001F2C40();

int func_001EE480(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v3 = func_001F10B0();
    v1 = *(unsigned char *)(*(char **)(v0 + 160) + 1);
    switch (v1) {
    case 0:
        v3 = func_001F1570(v0);
        break;
    case 1:
        v3 = func_001F1960(v0);
        break;
    case 2:
        v3 = func_001F1D20(v0);
        break;
    case 3:
        v3 = func_001F2C20(v0);
        break;
    case 4:
        v3 = func_001F2C30(v0);
        break;
    case 5:
        v3 = func_001F2C40(v0);
        break;
    }
    return v3;
}

int func_001F08A0();

int func_001F0920();

int func_001F0840(p0) char *p0; {
    int v1;
    int v0;
    v0 = *(unsigned char *)(*(char **)(p0 + 160) + 228);
    switch (v0) {
    case 0:
        v1 = func_001F08A0(p0, v0);
        break;
    case 1:
        v1 = func_001F0920(p0, v0);
        break;
    }
    return v1;
}

int func_001F08A0(p0) char *p0; {
    int v0;
    char *v1;
    float v2;
    float v3;
    float v4;
    float v5;
    v0 = 0;
    v1 = p0;
    v2 = 360.0f;
    v3 = -180.0f;
    v4 = 180.0f;
    do {
        v5 = (*(float *)(v1 + 1804) + (*(float *)(v1 + 1868) * *(float *)(p0 + 16)));
        *(float *)(v1 + 1804) = v5;
        if (v5 > v4) {
            *(float *)(v1 + 1804) = (v5 - v2);
        } else {
            if (v5 < v3) {
                *(float *)(v1 + 1804) = (v5 + v2);
            }
        }
        v0 = (v0 + 1);
        v1 = (v1 + 4);
    } while ((v0 < 3));
}

extern char D_01DF7A30[];

int func_0013B740();

int func_00206E00();

int func_001F10B0(p0) char *p0; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp4;
    v0 = p0;
    v1 = *(char **)(p0 + 160);
    tmp0 = 5;
    if (*(unsigned char *)(v1 + 1) == tmp0) {
        return 1;
    } else {
        v2 = *(short *)(v1 + 4);
        tmp1 = -1;
        if (v2 == tmp1) {
            return 1;
        } else {
            tmp2 = func_00206E00(D_01DF7A30, (v0 + 1940), v2);
            v3 = (tmp2 & 255);
            switch (v3) {
            case 2:
                tmp4 = func_0013B740(*(int *)(v0 + 1940), 2);
                return (tmp4 == 1);
            case 0:
            case 1:
            case 3:
                break;
            }
            return 1;
        }
    }
}

int func_001EBD90();

int func_001F11A0(p0) char *p0; {
    char *v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = *(char **)(p0 + 160);
    tmp0 = 5;
    if (*(unsigned char *)(v0 + 1) == tmp0) {
        return 1;
    } else {
        v1 = *(short *)(v0 + 8);
        tmp1 = -1;
        if (v1 == tmp1) {
            return 1;
        } else {
            func_001EBD90((p0 + 1728), v1);
            return 1;
        }
    }
}

void func_001F3680(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 58);
    v0 = 2;
    if (tmp0 == 0) {
        *(char *)(p0 + 56) = v0;
    } else {
        *(char *)(p0 + 56) = 3;
    }
}

int func_001F39D0(p0) char *p0; {
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
    } while ((v1 < 272));
    return 1;
}

int func_001F1560(void) { return 1; }

void func_001F3A40(void) {}
