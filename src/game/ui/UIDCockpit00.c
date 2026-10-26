unsigned char func_0030A700(char *p) {
    unsigned char r = 0;
    if (*(unsigned char *)(p + 0x558A) == 0) {
        if (*(int *)(p + 0x558C) >= *(int *)(p + 0x5590)) {
            r = 1;
        }
    } else {
        if (*(int *)(p + 0x558C) <= 0) {
            r = 1;
        }
    }
    return r;
}

void func_00309FD0(char *);

void func_00309F60(char *p, unsigned char a, unsigned int n, unsigned char b, unsigned char c) {
    *(unsigned char *)(p + 0x557C) = 0;
    *(float *)(p + 0x5584) = (float)n;
    *(unsigned char *)(p + 0x5598) = b;
    *(unsigned char *)(p + 0x557D) = a;
    *(unsigned char *)(p + 0x557B) = c;
    func_00309FD0(p);
}

unsigned char func_0030A000(char *p) {
    unsigned char r = 0;
    if (*(unsigned char *)(p + 0x557C) == 0) return 0;
    if (*(unsigned char *)(p + 0x557D) == 0) {
        if (!(*(float *)(p + 0x5580) < *(float *)(p + 0x5584))) r = 1;
    } else {
        if (*(float *)(p + 0x5580) <= 0.0f) r = 1;
    }
    return r;
}

extern signed char D_01CAF516[];

unsigned int func_0030A080(char *p, unsigned int t) {
    unsigned int m;
    unsigned int ss;
    unsigned int f;
    unsigned int s;
    s = t / (unsigned int)D_01CAF516[0];
    m = s / 60 % 60;
    ss = s % 60;
    f = t % 60;
    if (m > 99) m = 99;
    return f + (m * 10000 + ss * 100);
}

extern char D_01CAFF0C[];

int func_0024D640(char *);

static inline unsigned char busy2_307(char *o) {
    if (*(int **)(o + 8) && **(int **)(o + 8)) return 1;
    if (*(int *)(o + 0x1C)) return 1;
    if (*(unsigned char *)(o + 0x1A) == 1) return 1;
    return 0;
}

static inline unsigned char busy_307(char *g) {
    char *o = *(char **)(g + 0x20);
    if (o) return busy2_307(o);
    return 0;
}

static inline unsigned char h1_307(int r, int e) {
    return e ? r : 0;
}

static inline unsigned char h2_307(int e) {
    if (e) return 0;
    return busy_307(*(char **)D_01CAFF0C);
}

static inline int h3_307(int e) {
    if (e) return 0;
    return func_0024D640(*(char **)(*(char **)D_01CAFF0C + 0xC));
}

int func_00307A40(char *p) {
    float f;
    int e;
    int r;
    r = *(unsigned char *)(p + 0x554F);
    e = *(int *)(p + 0x54C0);
    if (h1_307(r, e) == 1) return 1;
    if (h2_307(e) == 1) return 1;
    if ((unsigned char)h3_307(e) == 1) return 1;
    if (!(*(float *)(p + 0x54C8) == *(float *)(p + 0x54CC))) return 1;
    if (!(*(float *)(p + 0x5500) == *(float *)(p + 0x54FC))) return 1;
    if (*(int *)(p + 0x54C0)) {
        f = 0.0f;
    } else {
        f = *(float *)(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x28BC);
    }
    if (!(0.0f == f)) return 1;
    return 0;
}

void func_001AD140(char *);

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00304D90(char *);

int func_003050D0(char *);

char *func_00304F30(int p0, char *p1) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    char *v;
    int k;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x55C0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00304D90(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
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
        *(int *)(ret + 0x38) = p0;
        *(char **)(ret + 0x54C0) = p1;
        if ((v = *(char **)(ret + 0x54C0)) != 0) {
            k = *(int *)(v + 4);
        } else {
            v = *(char **)(*(char **)D_01CAFF0C + 4);
            k = v ? *(int *)(v + 0x1C) : 0;
        }
        *(int *)(ret + 0x5564) = k;
        *(int *)(ret + 0x5568) = k;
        if (!(unsigned char)func_003050D0(ret)) {
            func_001AD140(ret);
            ret = 0;
        }
        *(char *)(ret + 0x557C) = 0;
        *(char *)(ret + 0x557A) = 0;
        *(char *)(ret + 0x5589) = 0;
    }
    return ret;
}

int func_001AD100();

int func_00306620();

int func_00306660();

int func_003065C0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_001AD100();
    v2 = *(unsigned char *)(v0 + 4);
    if (v2 != 1) {
        if (v2 != 0) {
            return v1;
        } else {
            tmp0 = func_00306620(v0);
            return tmp0;
        }
    } else {
        v3 = func_00306660(v0);
        return v3;
    }
}

int func_002F7E50();

void func_0030A630(p0, p1, p2, p3) char *p0; int p1; int p2; int p3; {
    int v0;
    char *v1;
    int v2;
    int v3;
    char *v4;
    int v5;
    *(char *)(p0 + 21899) = p1;
    v1 = p0;
    *(int *)(p0 + 21900) = 0;
    v2 = (p3 & 65535);
    *(char *)(p0 + 21898) = p2;
    *(char *)(p0 + 21897) = 1;
    *(char *)(p0 + 21896) = 1;
    *(int *)(p0 + 21904) = v2;
    v0 = *(unsigned char *)(p0 + 21899);
    switch (v0) {
    case 0:
        break;
    case 1:
        v3 = func_002F7E50(v0, v2, 1);
        *(int *)(v1 + 21908) = v3;
        if (*(int *)(v1 + 21904) == 0) {
            *(int *)(v1 + 21904) = *(int *)(v1 + 21908);
        }
        break;
    case 2:
        v4 = *(char **)(*(char **)D_01CAFF0C + 4);
        if (v4 != 0) {
            v5 = *(int *)(v4 + 28);
        } else {
            v5 = 0;
        }
        *(int *)(v1 + 21908) = v5;
        break;
    }
}

void func_0030A9D0(p0, p1) char *p0; int p1; {
    int v0;
    int tmp0;
    *(char *)(p0 + 21913) = p1;
    v0 = (p1 & 255);
    tmp0 = 2;
    if (v0 != tmp0) {
        switch (v0) {
        case 0:
            *(int *)(p0 + 21916) = 0x40a00000;
            *(int *)(p0 + 21920) = 3;
            break;
        case 1:
            *(int *)(p0 + 21916) = 0x40a00000;
            *(int *)(p0 + 21920) = 5;
            break;
        }
    } else {
        *(int *)(p0 + 21916) = 0x41700000;
        *(int *)(p0 + 21920) = 10;
    }
}

void func_00309FC0(char *p) { *(char *)(p + 21884) = 0; }

float func_0030A070(char *p) { return *(float *)(p + 21888); }

void func_0030A7D0(void) {}

char *func_00304E70(char *p0) {
    *(char *)(p0 + 0) = 0;
    return p0;
}

void func_00309FB0(char *p0) {
    *(char *)(p0 + 21884) = 1;
}

void func_0030A6F0(char *p0) {
    *(char *)(p0 + 21897) = 0;
    *(char *)(p0 + 21896) = 0;
}
