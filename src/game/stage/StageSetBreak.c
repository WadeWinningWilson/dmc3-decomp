typedef struct N2EF { int v; struct N2EF *next; } N2EF;

typedef struct { int x; N2EF n[256]; N2EF *used; N2EF *free; int y; } P2EF;

static inline void init2EF(P2EF *pl) {
    int i;
    pl->used = 0;
    pl->free = &pl->n[0];
    for (i = 0; i < 255; i++) pl->n[i].next = &pl->n[i + 1];
    pl->n[255].next = 0;
}

void func_002EF4D0(char *p, int k) {
    if (((char **)(p + 0xC))[k] != 0) {
        init2EF((P2EF *)(((char **)(p + 0xC))[k] + 0x336C));
        init2EF((P2EF *)(((char **)(p + 0xC))[k] + 0x2B5C));
        *(int *)(((char **)(p + 0xC))[k] + 0x3B7C) = 0;
    }
}

void func_002EEF10(char *p) {
    init2EF((P2EF *)(*(char **)(p + 0xC) + 0x336C));
    init2EF((P2EF *)(*(char **)(p + 0xC) + 0x2B5C));
    *(int *)(*(char **)(p + 0xC) + 0x3B7C) = 0;
    if (*(char **)(p + 0x10) != 0) {
        init2EF((P2EF *)(*(char **)(p + 0x10) + 0x336C));
        init2EF((P2EF *)(*(char **)(p + 0x10) + 0x2B5C));
        *(int *)(*(char **)(p + 0x10) + 0x3B7C) = 0;
    }
}

void func_00131700(float *, float *, float *);

void func_001318E0(float *, float *, float *);

char *func_001B4250(float *, int, int, int);

char *func_001EDE80(float *, int, int, int);

char *func_001B11B0(float *, int, int, int);

char *func_00205A00(float *, int, int, int);

void func_002EED10(char *e) {
    void func_00105230(float *, float *, float *);
    float r[4] __attribute__((aligned(16)));
    float t[4] __attribute__((aligned(16)));
    float s[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    char *h;
    int i;
    char *o;
    h = e;
    for (i = 0, e += 0x10; i < *(unsigned short *)(h + 6); e += 0x28, i++) {
        t[0] = *(float *)(e + 4);
        t[1] = *(float *)(e + 8);
        t[2] = *(float *)(e + 0xC);
        t[3] = 1.0f;
        r[0] = 6.283185f * (*(float *)(e + 0x10) / 360.0f);
        r[1] = 6.283185f * (*(float *)(e + 0x14) / 360.0f);
        r[2] = 6.283185f * (*(float *)(e + 0x18) / 360.0f);
        r[3] = 1.0f;
        s[0] = *(float *)(e + 0x1C);
        s[1] = *(float *)(e + 0x20);
        s[2] = *(float *)(e + 0x24);
        s[3] = 1.0f;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
        func_00131700(m, m, r);
        func_00105230(m, m, t);
        func_001318E0(m, m, s);
        switch (*(short *)e) {
        case 0: o = func_001B4250(m, 0, *(short *)(e + 2), 0); break;
        case 1: o = func_001EDE80(m, 0, *(short *)(e + 2), 0); break;
        case 2: o = func_001B11B0(m, 0, *(short *)(e + 2), 0); break;
        case 3: o = func_00205A00(m, 0, *(short *)(e + 2), 0); break;
        }
        if (o != 0) *(int *)(o + 0xC) |= 0x40;
    }
}

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

void func_0013D6A0(char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0028C110(char *);

void func_0013D640(char *, char *);

extern char D_005AB240[];

extern char D_005AB264[];

extern char D_005AB2E4[];

void func_0024F750(char *);

extern char D_00557300[];

char *func_002EE6D0(char *p0) {
    void func_0013D240(char *, int);
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    char *v;
    char *w;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x360, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0024F750(t);
            *(char **)t = D_005AB240;
            *(char **)(t + 0x40) = D_005AB264;
            *(char **)(t + 0xA0) = D_005AB2E4;
            func_0028C110(t + 0xD0);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    o = ret;
    if (o == 0) {
        return 0;
    }
    func_0028C200(o + 0xD0, o + 0x2F0, o + 0x300, 4, D_00557300, o, 0);
    w = ret; *(char *)(w + 0xD3) = 0xD;
    *(char *)(ret + 0x2F0) = 1;
    *(char *)(ret + 0x2F1) = 0;
    *(short *)(ret + 0x2F2) = 0;
    *(char *)(ret + 0x300) = 2;
    *(int *)(ret + 0x310) = 0;
    *(int *)(ret + 0x314) = 0;
    *(int *)(ret + 0x318) = 0;
    *(float *)(ret + 0x31C) = 1.0f;
    *(float *)(ret + 0x320) = 300.0f;
    func_0028C8E0(ret + 0xD0, 0);
    func_0028C910(ret + 0xD0);
    func_0028C3A0(ret + 0xD0, 0, 3, p0);
    *(float *)(ret + 0x350) = 3.0f;
    if ((v = *(char **)(ret + 0x14C)) != 0) {
        *(int *)(v + 0xC) = 0x140;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p0 + 0x30) : "memory");
    *(float *)(ret + 0x5C) = 1.0f;
    *(int *)(ret + 0xC) |= 0x40;
    return ret;
}

char *func_00207480(int, int, float *, int);

extern char D_01DFABA0[];

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00330DA0(char *, int, int, char *);

void func_002EE2E0(char *p, char *e, int u, float *v) {
    void func_00105230(float *, float *, char *);
    float m[16];
    if (*(int *)(p + 0x444) == -1) {
        return;
    }
    *(int *)(p + 0x444) = (int)((float)*(int *)(p + 0x444) - *(float *)(e + 4));
    if (*(int *)(p + 0x444) <= 0) {
        *(unsigned char *)(p + 0x496) = 1;
    } else if (*(signed char *)(e + 2) == 1) {
        func_00330DA0(D_01DFABA0, 1, *(int *)(p + 0x720), p + 0x480);
    } else {
        func_00330DA0(D_01DFABA0, 2, *(int *)(p + 0x720), p + 0x480);
    }
    UNIT(m);
    func_00105230(m, m, (char *)v);
    func_00207480(3, 0x1C, m, 0x20);
}

extern char D_01CAFF0C[];

float func_00132470(char *, char *);

static inline unsigned char push2EF(char *q, char *s) {
    char **n = *(char ***)(q + 0x808);
    if (n != 0) {
        *(char **)(q + 0x808) = n[1];
        n[0] = s;
        n[1] = *(char **)(q + 0x804);
        *(char ***)(q + 0x804) = n;
        return 1;
    }
    return 0;
}

unsigned char func_002EF940(char *p, char *s) {
    if (*(unsigned char *)(*(char **)(*(char **)D_01CAFF0C + 0x18) + 0x9A) == 1) return 0;
    *(unsigned char *)(s + 0) = 0;
    *(unsigned char *)(s + 1) = 0;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(*(char **)(s + 0x10)), "r"(s + 0x20) : "memory");
    *(float *)(s + 0x2C) = 1.0f;
    *(float *)(s + 0x30) = func_00132470(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, s + 0x20);
    *(unsigned short *)(s + 4) = 0;
    if (*(float *)(s + 0x30) <= 3000.0f) *(unsigned short *)(s + 4) |= 8;
    if (*(float *)(s + 0x30) <= 300.0f) *(unsigned short *)(s + 4) |= 1;
    if (*(float *)(s + 0x30) <= 600.0f) *(unsigned short *)(s + 4) |= 2;
    if (*(float *)(s + 0x30) <= 900.0f) *(unsigned short *)(s + 4) |= 4;
    *(int *)(*(char **)(p + 0xC) + 0x3B7C) = *(int *)(*(char **)(p + 0xC) + 0x3B7C) + 1;
    if (*(char **)(p + 0x10) != 0) *(int *)(*(char **)(p + 0x10) + 0x3B7C) = *(int *)(*(char **)(p + 0x10) + 0x3B7C) + 1;
    if (*(char **)(p + 0x10) != 0) push2EF(*(char **)(p + 0x10) + 0x2B5C, s);
    return push2EF(*(char **)(p + 0xC) + 0x2B5C, s);
}

void func_002EE3D0(char *p, float *out) {
    *out = (float)*(int *)(p + 0x444);
}

void func_002EB840(int, char *, float);

void func_002EC050(int, char *, float);

void func_002EA290(int, int, char *, int);

void func_002EE580(char *p, int k, int n) {
    int i;
    switch ((signed char)k) {
    case 0:
        func_002EB840(n, p + 0x480, 100.0f);
        break;
    case 10: case 11: case 12: case 13: case 14: case 15:
        for (i = 0; i < n; i++) func_002EC050((unsigned char)k, p + 0x480, 10.0f);
        break;
    case 5: case 6: case 7: case 8: case 9: case 16: case 17: case 18: case 19:
        func_002EA290(k, (unsigned char)n, p + 0x480, 1);
        break;
    case 1: case 2: case 3: case 4:
        break;
    }
}

void func_00105300(char *, char *);

void func_00104B80(char *, char *, char *);

void func_00104C00(char *, char *, char *);

void func_002EE290(char *p) {
    float m[16];
    func_00105300((char *)m, p + 0x640);
    func_00104B80(p + 0x50, (char *)m, p + 0x50);
    func_00104C00(p + 0x450, (char *)m, p + 0x450);
}

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

void func_002EE920(char *p) {
    void func_001AD140(char *);
    func_001AD100(p);
    *(float *)(p + 0x350) = *(float *)(p + 0x350) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x350) <= 0.0f) {
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0xD0, (unsigned int)*(float *)(p + 0x10), 1.0f);
    }
}

typedef struct N361 {
    int v;
    struct N361 *next;
} N361;

typedef struct {
    int x;
    N361 n[256];
    int cnt;
    N361 *head;
} Q361;

typedef struct {
    char pad[0x2B5C];
    Q361 q;
    char pad2[0x3B7C - 0x3368];
    int z;
} T361;

void func_002EF7C0(char *p, int k) {
    T361 *t = ((T361 **)(p + 0xC))[k];
    Q361 *q = &t->q;
    int i;
    q->cnt = 0;
    q->head = &q->n[0];
    for (i = 0; i < 255; i++) {
        q->n[i].next = &q->n[i + 1];
    }
    q->n[255].next = 0;
    ((T361 **)(p + 0xC))[k]->z = 0;
}

void func_002EE3E0(char *p, float *out) {
    *out = (float)*(int *)(p + 0x448);
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005AADD0[];

extern char D_005AB380[];

extern char D_005AB3A4[];

extern char D_005AB424[];

extern char D_005AB4B8[];

void func_001003E0();

void func_0024F810();

void func_0028C1A0();

void func_00401030();

char *func_002EEB50(char *p, short flag) {
    void func_0013D240();
    if (p != 0) {
        *(char * *)(p) = D_005AB380;
        *(char * *)(p + 64) = D_005AB3A4;
        *(char * *)(p + 160) = D_005AB424;
        *(char * *)(p + 208) = D_005AB4B8;
        func_0028C1A0(p + 1184, -1);
        func_00401030(p + 908, -1);
        func_001003E0(p + 876, (void *)func_0013D240, 16, 2);
        func_001003E0(p + 224, (void *)func_0013D240, 16, 32);
        if (p + 208 != 0) {
            *(char * *)(p + 208) = D_005AADD0;
        }
        func_0024F810(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_002EDC40(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 940);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 940) = 0;
    }
    return v2;
}

void func_002EE680(p0, p1) char *p0; int p1; {
    int tmp0;
    tmp0 = 2;
    if (tmp0 != p1) {
        switch (p1) {
        case 0:
            *(char *)(p0 + 1175) = 0;
            break;
        case 1:
            *(char *)(p0 + 1174) = 1;
            break;
        }
    } else {
        *(char *)(p0 + 864) = 5;
    }
}

extern void func_002EEA90();

void func_002EEC90(char *p) { func_002EEA90(p + -208); }

extern void func_002EEAA0();

void func_002EECA0(char *p) { func_002EEAA0(p + -208); }

extern void func_002EEAF0();

void func_002EECB0(char *p) { func_002EEAF0(p + -208); }

extern void func_002EE670();

void func_002EECD0(char *p) { func_002EE670(p + -208); }

extern void func_002EEA00();

void func_002EECF0(char *p) { func_002EEA00(p + -64); }

void func_002EED00(char *p) { func_002EEA00(p + -160); }

void func_002EE9D0(void) {}

void func_002EE9E0(void) {}

void func_002EE9F0(void) {}
