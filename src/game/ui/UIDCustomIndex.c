extern char D_00666750[];

void func_001AF080(char *, int);

extern unsigned char D_00666712[];

extern int D_00540350[];

int func_001AF3F0(char *, int *, int, int);

int func_0013BF20(char *);

typedef struct { int h; int x; } S404;

static inline int ok404(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *chunkB404(char *c) { if (*(unsigned int *)(c + 4) < 2) return 0; if (*(int *)(c + 0xC) == 0) return 0; return c + *(int *)(c + 0xC); }

static inline char *getB404(char *o) { if (**(unsigned short **)(o + 8) == 0) return chunkB404(*(char **)(o + 0xC)); return *(char **)(o + 0xC); }

unsigned char func_004047E0(char *p) {
    unsigned char r;
    int i;
    char *o;
    char *c;
    r = 0;
    if (*(unsigned char *)(p + 0x17) == 1) {
        i = (*(int *)(p + 0x54) + 1) & 1;
    } else {
        i = *(int *)(p + 0x54);
    }
    switch (*(int *)(p + 8)) {
    case 0:
        ((S404 *)(p + 0x44))[i].h = func_001AF3F0(D_00666750, &D_00540350[D_00666712[0]], 0, 0);
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 1:
        o = (char *)((S404 *)(p + 0x44))[i].h;
        if ((unsigned char)ok404((unsigned char *)o) != 1) break;
        c = getB404(o);
        if (c != 0) {
            *(int *)(p + 0x58) = func_0013BF20(c);
            if (*(int *)(p + 0x58) == 0) {
                *(int *)(p + 4) = 10;
                break;
            }
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if (((S404 *)(p + 0x44))[i].h != 0) {
            func_001AF080(D_00666750, ((S404 *)(p + 0x44))[i].h);
            ((S404 *)(p + 0x44))[i].h = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 3:
        r = 1;
        break;
    default:
        *(int *)(p + 4) = 10;
        break;
    }
    return r;
}

void func_00100580(char *);

void func_001003E0(char *, void *, int, int);

extern char D_005B26D0[];

extern char D_005A6F50[];

char *func_00404AC0(char *p, short flag) {
    void func_0013D240(char *, int);
    void func_002791E0(char *, int);
    if (p != 0) {
        *(char **)p = D_005B26D0;
        func_001003E0(p + 320, (void *)func_002791E0, 1536, 5);
        func_001003E0(p + 60, (void *)func_0013D240, 16, 16);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240(p + 36, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00404740(char *p, unsigned char d) {
    int v = *(signed char *)(p + 0x15);
    switch (*(unsigned char *)(p + 0x15)) {
    case 1: case 2: case 3: case 4: case 5:
        switch (d) {
        case 1: case 2:
            break;
        case 3:
            v = (unsigned char)(*(unsigned char *)(p + 0x15) - 1);
            if (v <= 0) v = 5;
            break;
        case 4:
            v = (unsigned char)(*(unsigned char *)(p + 0x15) + 1);
            if (v >= 6) v = 1;
            break;
        }
        break;
    case 0: case 6:
        break;
    }
    return v;
}

extern char D_00645A30[];

void func_0028C110(char *);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

extern char D_005B2700[];

extern char D_005B2724[];

extern char D_005B27A4[];

char *func_004056B0(char *p0, float *p1, char p2, char p3) {
    void func_0013D6A0(char *);
    void func_0013D240(char *, int);
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x460, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B2700;
            *(char **)(t + 0x40) = D_005B2724;
            *(char **)(t + 0xA0) = D_005B27A4;
            func_0028C110(t + 0x150);
            *(char *)(t + 0x45) = 2;
            *(int *)(t + 0x450) = 0;
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
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
    if (ret != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p1) : "memory");
        *(char *)(ret + 0x458) = p2;
        *(char **)(ret + 0x450) = p0;
        *(char *)(ret + 0x45) = 0;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
        *(char *)(ret + 0x459) = p3;
    }
    return ret;
}

char * func_002790E0();

void func_00100450();

void func_001AAD30();

char * func_004049E0(p) char *p; {
    void func_0013D240();
    void func_0013D6A0();
    void func_002791E0();
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005B26D0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 16, 135);
    func_00100450(p + 320, (void *)func_002790E0, (void *)func_002791E0, 1536, 5);
    *(char *)(p + 8064) = 0;
    *(char *)(p + 8192) = 2;
    *(char *)(p + 8193) = 0;
    return p;
}

int func_00405540(p0) char *p0; {
    int v0;
    if ((*(unsigned char *)(p0 + 4) < 3)) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 8192);
        return v0;
    }
}

void func_00405420(void) {}

signed char func_00405570(char *p) { return *(signed char *)(p + 8193); }

int func_00405530(char *p0) {
    return ((*(unsigned char *)(p0 + 4) < 2) ^ 1);
}

void func_004043E0();

void func_00404710(char *p0) {
    func_004043E0(p0, *(signed char *)(p0 + 21), 0, 0);
}

void func_00404720(char *p0) {
    func_004043E0(p0, *(signed char *)(p0 + 21), 1, 0);
}

void func_00404730(char *p0) {
    func_004043E0(p0, *(signed char *)(p0 + 22), 0, 1);
}
