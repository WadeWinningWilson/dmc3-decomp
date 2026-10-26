void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_003703B0(char *);

char *func_00370240(char *p, float *v, int n, int m) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_001AAD30(a);
    *b.pp = func_001B0FD0(a, 0x590, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x590, t);
        if (r != 0) {
            func_003703B0(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        func_001B1430(*b.pp, 1);
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
        *(char **)(ret + 0x480) = p;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x490), "r"(v) : "memory");
        *(int *)(ret + 0x57C) = n;
        *(int *)(ret + 0x584) = m;
        *(unsigned char *)(ret + 0x45) = 4;
        *(int *)(ret + 0x578) = 0;
    }
    return ret;
}

extern char D_00666750[];

void func_001AF080(char *, int);

void func_00370200(void) {
    int func_001AEA60(char *, int, unsigned short);
    int h = func_001AEA60(D_00666750, 6, 1);
    if (h != 0) {
        func_001AF080(D_00666750, h);
    }
}

extern char D_01DFA310[];

void func_0030E580(char *, char *);

static inline char *func_00370090_t(char *t, int i) {
    int v;
    if (*(unsigned int *)(t + 4) < i + 1U) return 0;
    v = *(int *)(t + i * 4 + 8);
    if (v == 0) return 0;
    return t + v;
}

static inline char *func_00370090_g(char *e, int i) {
    if (**(unsigned short **)(e + 8) == 0) return func_00370090_t(*(char **)(e + 0xC), i);
    return *(char **)(e + 0xC);
}

void func_00370090(void) {
    char *func_001AEA60(char *, int, int);
    char *e = func_001AEA60(D_00666750, 6, 1);
    func_0030E580(D_01DFA310, func_00370090_g(e, 0));
    func_0030E580(D_01DFA310, func_00370090_g(e, 1));
    func_0030E580(D_01DFA310, func_00370090_g(e, 2));
}

extern char D_00540330[];

void func_001AFCA0();

void func_00370060(p0, p1) int p0; int p1; {
    func_001AFCA0(D_00666750, 1, (D_00540330 + ((p1 & 255) << 2)));
}
