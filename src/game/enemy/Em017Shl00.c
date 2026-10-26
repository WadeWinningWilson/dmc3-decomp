void func_001AD140(char *);

int func_0041D6B0(float *x, float d);

void func_00206730(char *);

void func_001AD100(char *);

int func_0041D600(char *p);

void func_0041D840(char *a, char *b, float s);

void func_004FF000(char *p) {
    char *b;
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0x460);
        if (*(int *)(p + 0x460) == 0) {
            func_001AD140(p);
            return;
        }
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            if (*(int *)(p + 0x470) == 0) {
                *(float *)(p + 0x464) = 150.0f;
            } else {
                *(float *)(p + 0x464) = 100.0f;
            }
            *(float *)(p + 0x46C) = 150.0f / *(float *)(p + 0x464);
            *(unsigned char *)(p + 5) = 1;
        case 1:
            *(float *)(p + 0x434) = *(float *)(p + 0x434) + *(float *)(p + 0x46C);
            if ((unsigned char)func_0041D6B0((float *)(p + 0x464), *(float *)(p + 0x10)) == 1) {
                func_001AD140(p);
                return;
            }
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x160, 1.0f);
    }
}

char *func_00207480(int, int, char *, int);

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *base4FE(char *p) { char *q = p; if (q != 0) q += 0x40; return q; }

static inline void set4FE(float *v, float x, float y, float z, float w) { v[0] = x; v[1] = y; v[2] = z; v[3] = w; }

static inline void set3FE(float *v, float x, float y, float z) { v[0] = x; v[1] = y; v[2] = z; }

void func_004FEE70(char *p) {
    char *q;
    char *e;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    VCOPY(p + 0x50, *(char **)(p + 0xD0) + 0x50);
    set4FE((float *)(p + 0x80), 0.0f, 0.0f, 0.0f, 1.0f);
    set4FE((float *)(p + 0x60), 0.0f, 0.0f, 0.0f, 1.0f);
    {
        short a = 0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f;
        *(short *)(p + 0x90) = (unsigned short)a;
    }
    set3FE((float *)(p + 0x464), 0.0f, 1.0f, 0.0f);
    func_0041D840(base4FE(p), p + 0x160, 1.0f);
    if (*(int *)(p + 0x470) == 0) {
        *(char **)(p + 0x460) = func_00207480(3, 0x210, 0, 0x10);
    } else {
        *(char **)(p + 0x460) = func_00207480(3, 0x1EE, 0, 0x10);
    }
    e = *(char **)(p + 0x460);
    q = p + 0x1A0;
    if (e != 0) {
        *(char **)(e + 0x90) = q;
        *(unsigned char *)(e + 0x9A) = 0;
    } else {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
}

extern char D_00645A30[];

void func_0028C110(char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

extern char D_005BAF70[];

extern char D_005BAF94[];

extern char D_005BB014[];

char *func_004FED00(int p0, int p1, int p2) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x480, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005BAF70;
            *(char **)(t + 0x40) = D_005BAF94;
            *(char **)(t + 0xA0) = D_005BB014;
            *(char *)(t + 0x160) = 0;
            func_0028C110(t + 0x1E0);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
        *(int *)(ret + 0xD0) = p0;
        *(int *)(ret + 0x470) = p1;
        *(int *)(ret + 0x474) = p2;
    }
    return ret;
}

extern void func_0041D670();

void func_004FF120(char *p) { func_0041D670(p + 1120); }

extern void func_004FF130();

void func_004FF1D0(char *p) { func_004FF130(p + -64); }

void func_004FF1E0(char *p) { func_004FF130(p + -160); }
