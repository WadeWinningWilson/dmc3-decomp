extern char D_00666750[];

extern char D_01DFABA0[];

char *func_001AEA60(char *, int, int);

int func_0013D670(char *);

int func_0032FCD0(char *, int);

int func_0032FD00(char *, int);

void func_001282D0(int, char *, int);

void func_002F9790(char *, int, int);

void func_002F9780(char *, int, int);

unsigned int func_0032FD30(char *, int);

void func_0032FDA0(char *, int, char **, int);

static inline char *ent287(char *t, int i) {
    if (*(unsigned int *)(t + 4) < i + 1) return 0;
    if (*(int *)(t + 8 + i * 4) == 0) return 0;
    return t + *(int *)(t + 8 + i * 4);
}

static inline char *chk287(char *h, int i) {
    if (**(unsigned short **)(h + 8) == 0) return ent287(*(char **)(h + 0xC), i);
    return *(char **)(h + 0xC);
}

static inline int csz287(char *h, int i) {
    int n;
    char *t;
    char *a;
    char *b;
    if (**(unsigned short **)(h + 8) == 0) {
        t = *(char **)(h + 0xC);
        n = *(int *)(t + 4);
        if (i >= n) return 0;
        a = ent287(t, i);
        if (n - 1 == i) b = *(char **)(h + 0xC) + func_0013D670(h + 0x10);
        else b = ent287(t, i + 1);
        return b - a;
    }
    return func_0013D670(h + 0x10);
}

void func_00287560(char *p) {
    char *e;
    signed char a = -1;
    signed char b = a;
    char *h;
    unsigned int sz;
    int r;
    int i;
    int j;
    char *buf[8];
    *(signed char *)(p + 0x3D4) = 0;
    for (e = *(char **)(p + 0x394); e != 0; e = *(char **)(e + 8)) {
        if (*(unsigned char *)(e + 0x11) == 6) {
            if (*(int *)(e + 0x14) == 0xC) a = *(signed char *)(p + 0x3D4);
            if (*(int *)(e + 0x14) == 0xD) b = *(signed char *)(p + 0x3D4);
            *(int *)(p + *(signed char *)(p + 0x3D4) * 4 + 0x3B4) = *(int *)(e + 0xC);
            (*(signed char *)(p + 0x3D4))++;
        }
    }
    if (*(signed char *)(p + 0x3D4) != 0) {
        if (a != -1 && b != -1) {
            (*(signed char *)(p + 0x3D4))--;
            for (i = a; i < *(signed char *)(p + 0x3D4); i++) {
                *(int *)(p + i * 4 + 0x3B4) = *(int *)(p + i * 4 + 0x3B8);
            }
        }
        buf[0] = chk287(*(char **)(p + 0x3B4), 0);
        if (buf[0] == 0) {
            h = func_001AEA60(D_00666750, 6, 0);
            buf[0] = chk287(h, 1);
            r = func_0032FCD0(D_01DFABA0, 7);
            sz = csz287(h, 1);
        } else {
            r = func_0032FCD0(D_01DFABA0, 7);
            sz = csz287(*(char **)(p + 0x3B4), 0);
        }
        if (func_0032FD30(D_01DFABA0, 7) < sz) sz = func_0032FD30(D_01DFABA0, 7);
        func_001282D0(r, buf[0], sz);
        func_002F9790(D_01DFABA0, 7, r);
        for (j = 0; j < *(signed char *)(p + 0x3D4); j++) {
            buf[j] = chk287(*(char **)(p + j * 4 + 0x3B4), 1);
        }
        r = func_0032FD00(D_01DFABA0, 7);
        func_0032FDA0(D_01DFABA0, r, buf, *(signed char *)(p + 0x3D4));
        func_002F9780(D_01DFABA0, 7, r);
        *(unsigned char *)(p + 0x3D5) = 0;
        *(int *)(p + 0x3D8) = 0;
    }
}

char *func_00287270(char *p, unsigned char k, int id) {
    char *v;
    for (v = *(char **)(p + 0x394); v != 0; v = *(char **)(v + 8)) {
        if (*(unsigned char *)(v + 0x11) == k && *(int *)(v + 0x14) == id) {
            *(int *)(v + 0x18) += 1;
            return v;
        }
    }
    return 0;
}

void func_00287120(char *p, int k) {
    void func_00286B90(char *, int, int);
    if (*(int *)(p + 928) == 12) {
        func_00286B90(p, 5, k);
        func_00286B90(p, 6, 28);
    } else if (k == 27) {
        func_00286B90(p, 5, 0);
        func_00286B90(p, 6, 27);
    } else {
        func_00286B90(p, 5, k);
        func_00286B90(p, 6, k);
    }
}

typedef struct { short k; short pad; int a; int b; } K12;

typedef struct { short n; short pad; K12 e[64]; } K12Tab;

int func_00287D90(K12Tab *, int, int, int);

int func_00287E30(K12Tab *t, int k, int a, int b) {
    if (func_00287D90(t, k, a, b) != 0) {
        return 1;
    }
    if (t->n >= 64) {
        return 0;
    }
    t->e[t->n].k = k;
    t->e[t->n].a = a;
    t->e[t->n].b = b;
    t->n += 1;
    return 1;
}

typedef struct { int a; short k; short pad; int v; } K12M;

int func_00287DE0(K12M *t, short k) {
    int i;
    char *e;
    for (i = 0, e = (char *)t; i < 64; i++, e += 12) {
        if (*(short *)(e + 4) == k) {
            return t[i + 1].a;
        }
    }
    return 0;
}

char *func_002871E0(char *p, unsigned char k, int id) {
    char *v;
    for (v = *(char **)(p + 0x394); v != 0; v = *(char **)(v + 8)) {
        if (*(unsigned char *)(v + 0x11) == k && *(int *)(v + 0x14) == id) {
            return v;
        }
    }
    for (v = *(char **)(p + 0x388); v != 0; v = *(char **)(v + 8)) {
        if (*(unsigned char *)(v + 0x11) == k && *(int *)(v + 0x14) == id) {
            return v;
        }
    }
    return 0;
}

void func_00209E30(int *, int, char *);

unsigned char func_00203670(int, int);

static inline unsigned char ok286(char *h) {
    char *o = *(char **)(h + 0xC);
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

static inline char *inner286(char *q) {
    if (*(unsigned int *)(q + 4) < 10) return 0;
    if (*(int *)(q + 0x2C) == 0) return 0;
    return q + *(int *)(q + 0x2C);
}

static inline char *data286(char *h) {
    char *o = *(char **)(h + 0xC);
    if (**(unsigned short **)(o + 8) == 0) return inner286(*(char **)(o + 0xC));
    return *(char **)(o + 0xC);
}

static inline void sub286(int *a, int *b) {
    *a = *b;
}

static inline void sinit286(int *s, char *p) {
    int *e = &s[1];
    int *d = &s[3];
    *d = 0;
    s[2] = *(int *)(p + 0x3DC);
    s[4] = (int)p;
    s[0] = *(int *)(p + 0x3E0);
    *e = s[0] + *(int *)(s[0] + *(int *)(s[0] + 8));
    sub286(d, e);
}

int func_002869A0(char *p) {
    int func_00286B90(char *, int, int);
    int s[5];
    char *o;
    char *x;
    switch (*(unsigned char *)(p + 0x39D)) {
    case 1:
        *(int *)(p + 0x3A8) = func_00286B90(p, 1, *(int *)(p + 0x3A0));
        if (*(int *)(p + 0x3A8) == 0) {
            *(unsigned char *)(p + 0x39D) = 0;
            return 1;
        }
        *(unsigned char *)(p + 0x39D) = 2;
    case 2:
        if (!ok286(*(char **)(p + 0x3A8))) break;
        x = data286(*(char **)(p + 0x3A8));
        sinit286(s, p);
        func_00209E30(s, *(int *)(p + 0x3A0), x);
        *(unsigned char *)(p + 0x39D) = 3;
        break;
    case 3:
        func_00286B90(p, 0, *(int *)(p + 0x3A0));
        func_00286B90(p, 2, *(int *)(p + 0x3A0));
        if (*(int *)(p + 0x3A0) == 0x1A5 && func_00203670(1, 0) == 0) *(unsigned char *)(p + 0x3A4) = 1;
        *(unsigned char *)(p + 0x39D) = 4;
        break;
    case 4:
        *(unsigned char *)(p + 0x39D) = 5;
        break;
    case 5:
        if (*(int *)(p + 0x388) == 0) {
            *(unsigned char *)(p + 0x39D) = 0;
            return 1;
        }
        break;
    case 0:
        return 1;
    }
    return 0;
}

void func_002874D0(char *, char *);

void func_00287320(char *p) {
    int i;
    char *e;
    for (i = 0; i < 32; i++) {
        e = p + i * 0x1C;
        if (*(int *)(e + 0x10) != 0 && *(int *)(e + 0x1C) == 0 && *(unsigned char *)(e + 0x14) == 0) {
            func_002874D0(p, e + 4);
        }
    }
}

void func_00287320(char *p);

void func_001AEEC0(char *);

void func_002873A0(char *);

void func_00286F20(char *p, int a) {
    *(unsigned char *)(p + 0x3A4) = 0;
    if (*(unsigned char *)(p + 0x39C) != 0) {
        *(unsigned char *)(p + 0x39C) = 4;
        func_001AEEC0(D_00666750);
        *(unsigned char *)(p + 0x3AC) = 1;
        *(int *)(p + 0x3B0) = a;
    } else {
        if (*(unsigned char *)(p + 0x39E) != 1 || *(int *)(p + 0x3A0) != a) {
            func_002873A0(p);
            func_00287320(p);
        }
        *(unsigned char *)(p + 0x39C) = 1;
        *(unsigned char *)(p + 0x39E) = 1;
        *(int *)(p + 0x3A0) = a;
        *(unsigned char *)(p + 0x39D) = 1;
    }
}

int func_0032FD90(char *, char *);

void func_002F97B0(char *, int, char *, int, int);

int func_002F9800(char *, int);

static inline char *inner287(char *q, int i) {
    if (*(unsigned int *)(q + 4) < i + 2) return 0;
    if (*(int *)(q + 0xC + i * 4) == 0) return 0;
    return q + *(int *)(q + 0xC + i * 4);
}

static inline char *chunk287(char *h, int i) {
    if (**(unsigned short **)(h + 8) == 0) return inner287(*(char **)(h + 0xC), i);
    return *(char **)(h + 0xC);
}

int func_00287A80(char *p) {
    signed char h;
    int r;
    if (*(signed char *)(p + 0x3D4) == 0) return 1;
    h = *(signed char *)(p + 0x3D5) / 2;
    switch (*(signed char *)(p + 0x3D5) % 2) {
    case 0:
        r = func_0032FD90(D_01DFABA0, chunk287(*(char **)((char *)(h * 4) + (int)p + 0x3B4), 0));
        func_002F97B0(D_01DFABA0, 7, chunk287(*(char **)((char *)(h * 4) + (int)p + 0x3B4), 1), r, *(int *)(p + 0x3D8));
        *(int *)(p + 0x3D8) += r;
        (*(signed char *)(p + 0x3D5))++;
        break;
    case 1:
        if (func_002F9800(D_01DFABA0, 0) != 0) break;
        if (h + 1 >= *(signed char *)(p + 0x3D4)) return 1;
        (*(signed char *)(p + 0x3D5))++;
        break;
    }
    return 0;
}

void func_001AF080(char *, int);

void func_00247550(char *, char *);

void func_002874D0(char *p, char *o) {
    if (o) {
        switch (*(unsigned char *)(o + 0x11)) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6:
            func_001AF080(D_00666750, *(int *)(o + 0xC));
        }
        *(int *)(o + 0xC) = 0;
        *(int *)(o + 0x18) = 0;
        func_00247550(p + 0x390, o);
    }
}

char *func_00287480(char *p) {
    int i;
    for (i = 0; i < 32; i++) {
        if (*(int *)(p + i * 0x1C + 0x10) == 0) {
            *(int *)((char *)(i * 0x1C) + (int)p + 0x1C) = 0;
            return (char *)(i * 0x1C) + (int)p + 4;
        }
    }
    return 0;
}

void func_002873E0(p0) int p0; {
    int v0;
    int v1;
    int v2;
    char *v3;
    v3 = (char *)(p0 + 4);
    v2 = 0;
    v0 = 1;
    v1 = 5;
    do {
        if (*(int *)(v3 + 12) != 0) {
            if (*(unsigned char *)(v3 + 17) == v1) {
                *(int *)(v3 + 24) = v0;
            }
        }
        v2 = (v2 + 1);
        v3 = (v3 + 28);
    } while ((v2 < 32));
}

void func_00287430(p0) int p0; {
    int v0;
    int v1;
    char *v2;
    v2 = (char *)(p0 + 4);
    v0 = 0;
    v1 = 5;
    do {
        if (*(int *)(v2 + 12) != 0) {
            if (*(unsigned char *)(v2 + 17) == v1) {
                *(int *)(v2 + 24) = 0;
            }
        }
        v0 = (v0 + 1);
        v2 = (v2 + 28);
    } while ((v0 < 32));
}

int func_00287CF0(p0) char *p0; {
    int v0;
    int v1;
    *(short *)(p0 + 0) = 0;
    v1 = 0;
    v0 = -1;
    do {
        *(short *)(p0 + 4) = v0;
        *(int *)(p0 + 8) = 0;
        v1 = (v1 + 8);
        *(int *)(p0 + 12) = 0;
        *(short *)(p0 + 16) = v0;
        *(int *)(p0 + 20) = 0;
        *(int *)(p0 + 24) = 0;
        *(short *)(p0 + 28) = v0;
        *(int *)(p0 + 32) = 0;
        *(int *)(p0 + 36) = 0;
        *(short *)(p0 + 40) = v0;
        *(int *)(p0 + 44) = 0;
        *(int *)(p0 + 48) = 0;
        *(short *)(p0 + 52) = v0;
        *(int *)(p0 + 56) = 0;
        *(int *)(p0 + 60) = 0;
        *(short *)(p0 + 64) = v0;
        *(int *)(p0 + 68) = 0;
        *(int *)(p0 + 72) = 0;
        *(short *)(p0 + 76) = v0;
        *(int *)(p0 + 80) = 0;
        *(int *)(p0 + 84) = 0;
        *(short *)(p0 + 88) = v0;
        *(int *)(p0 + 92) = 0;
        *(int *)(p0 + 96) = 0;
        p0 = (p0 + 96);
    } while ((v1 < 64));
    return 1;
}

void func_00287D80(void) {}

int func_002871D0(char *p0) {
    return ((*(unsigned char *)(p0 + 924) ^ 0) == 0);
}

void func_002872D0(int p0, char *p1) {
    int t0;
    t0 = (*(int *)(p1 + 24) + -1);
    *(int *)(p1 + 24) = (*(int *)(p1 + 24) + -1);
}
