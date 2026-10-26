void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00471520(char *);

char *func_00471330(char *p, float *v, int n, int m, float *w, unsigned char c, float f) {
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
    *b.pp = func_001B0FD0(a, 0x4C0, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x4C0, t);
        if (r != 0) {
            func_00471520(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
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
        *(char **)(ret + 0x464) = p;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(v) : "memory");
        *(float *)(ret + 0x5C) = 1.0f;
        *(int *)(ret + 0x46C) = n;
        *(int *)(ret + 0x468) = m;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x490), "r"(w) : "memory");
        *(float *)(ret + 0x49C) = 1.0f;
        *(float *)(ret + 0x470) = f;
        *(unsigned char *)(ret + 0x4B1) = c;
        *(signed char *)(ret + 0x44) = -1;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}
