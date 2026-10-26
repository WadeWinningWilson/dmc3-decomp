/* Creates the object at +0x748 and links it back. */
char *func_00207480(int, int, int, int);

void func_004E2690(char *p) {
    char *o;
    *(char **)(p + 0x748) = func_00207480(3, 0x2D6, 0, 16);
    o = *(char **)(p + 0x748);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x6C0;
        o[0x9A] = 0;
        *(*(char **)(p + 0x748) + 0x3A) = 1;
    }
}

void func_004E26F0(char *p) {
    char *o;
    *(char **)(p + 0x74C) = func_00207480(3, 0x2D7, 0, 16);
    o = *(char **)(p + 0x74C);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x700;
        o[0x9A] = 0;
        *(*(char **)(p + 0x74C) + 0x3A) = 1;
    }
}

void func_004E23D0(char *);

 void func_004E2690(char *);

 void func_004E2540(char *);

 float func_004504E0(int);

void func_004E1E90(char *p) {
    float f;
    *(float *)(p + 0x660) = 1.0f;
    *(float *)(p + 0x664) = 1.0f;
    *(float *)(p + 0x668) = 3.0f;
    *(float *)(p + 0x66C) = 1.0f;
    if (*(unsigned char *)(p + 0x641) == 0) {
        *(float *)(p + 0x648) = -60.0f;
    } else {
        *(float *)(p + 0x648) = 60.0f;
    }
    *(float *)(p + 0x644) = 5.0f;
    func_004E23D0(p);
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x680) : "memory");
    func_004E2690(p);
    func_004E2540(p);
    f = func_004504E0(*(int *)(p + 0x744));
    *(float *)(p + 0x64C) = f;
    *(float *)(p + 0x650) = f;
    (*(unsigned char *)(p + 4))++;
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

extern char D_01CAFF0C[];

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_004E2BC0(char *);

static inline void cp4E2(char *d, char *s) { __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory"); }

char *func_004E29F0(char *p, float *v, int n, float f) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_001AAD30(a);
    *b.pp = func_001B0FD0(a, 0x690, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x690, t);
        if (r != 0) {
            func_004E2BC0(r);
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
        *(char **)(ret + 0x634) = p;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(v) : "memory");
        *(float *)(ret + 0x5C) = 1.0f;
        *(int *)(ret + 0x638) = n;
        cp4E2(ret + 0x660, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50);
        *(float *)(ret + 0x664) += 100.0f;
        *(float *)(ret + 0x66C) = 1.0f;
        *(float *)(ret + 0x63C) = f;
        *(signed char *)(ret + 0x44) = -1;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

void func_001AD140(char *);

void func_00206730(char *);

void func_0028C740(char *);

void func_004E2350(char *p) {
    int i;
    for (i = 0; i < 2; i++) {
        func_00206730(p + i * 4 + 0x748);
        if (*(char **)(p + i * 4 + 0x748) != 0) {
            func_001AD140(*(char **)(p + i * 4 + 0x748));
            *(char **)(p + i * 4 + 0x748) = 0;
        }
    }
    func_0028C740(p + 0x150);
    func_0028C740(p + 0x370);
}

void func_004E28B0(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

extern void func_004E2810();

void func_004E2910(char *p) { func_004E2810(p + -64); }

void func_004E2920(char *p) { func_004E2810(p + -160); }

void func_004E27E0(void) {}

void func_004E27F0(void) {}

void func_004E2800(void) {}
