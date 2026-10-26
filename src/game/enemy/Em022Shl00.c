void func_001AD140(char *);

extern char D_0056C470[];

void func_0041D840(char *, char *, float);

void func_0028C200(char *, char *, char *, int, void *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline char *base42D(char *p) { char *q = p; if (q != 0) q += 0x40; return q; }

void func_0042D460(char *p) {
    char *func_00207480(int, int, char *, int);
    char *q;
    char *r;
    char *t;
    char *e;
    {
        char *o = *(char **)(p + 0xD0);
        *(signed char *)(p + 0x44) = -1;
        *(unsigned char *)(p + 0x45) = 4;
        VCOPY(p + 0x50, o + 0x50);
        VCOPY(p + 0x80, o + 0x80);
    }
    {
        short a = 0.5f + 65536.0f * *(float *)(p + 0x84) / 6.283185f;
        *(short *)(p + 0x90) = (unsigned short)a;
    }
    func_0041D840(base42D(p), p + 0x150, 1.0f);
    *(char **)(p + 0x450) = func_00207480(3, 0x36C, 0, 0x10);
    e = *(char **)(p + 0x450);
    if (e == 0) {
        func_001AD140(p);
        return;
    }
    t = p + 0x190;
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 0;
    q = *(char **)(p + 0x450);
    *(unsigned char *)(q + 0x3A) = 1;
    *(unsigned char *)(p + 0x3F0) = 1;
    *(unsigned char *)(p + 0x3F1) = 0;
    *(short *)(p + 0x3F2) = 0;
    *(unsigned char *)(p + 0x400) = 6;
    *(float *)(p + 0x410) = 0.0f;
    *(float *)(p + 0x414) = 0.0f;
    *(float *)(p + 0x418) = 0.0f;
    *(float *)(p + 0x41C) = 1.0f;
    *(float *)(p + 0x424) = 5.0f;
    *(float *)(p + 0x420) = 100.0f;
    func_0028C200(p + 0x1D0, p + 0x3F0, p + 0x400, 3, D_0056C470, p, 0);
    *(int *)(p + 0x2A8) = 0x40;
    func_0028C8E0(p + 0x1D0, 0);
    func_0028C910(p + 0x1D0);
    r = p + 0x190;
    func_0028C3A0(p + 0x1D0, 0, -1, r);
    *(int *)(p + 0x454) = 0;
    *(unsigned char *)(p + 4) = 1;
    *(unsigned char *)(p + 5) = 0;
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0042D400(char *);

char *func_0042D2B0(char *p, char *s, char *u) {
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
    **q = func_001B0FD0(a, 0x460, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x460, t);
        if (r != 0) {
            func_0042D400(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
        *(char **)(ret + 0xD0) = p;
        *(char **)(ret + 0x458) = s;
        *(char **)(ret + 0x45C) = u;
    }
    return ret;
}

void func_001AD100(char *);

void func_00206730(char *);

void func_0028C5C0(char *, int, float);

int func_0041D6B0(float *, float);

void func_0034BA60(int, char *, int, int, int);

int func_0041D600(char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_0042D610(char *p) {
    char *func_00207480(int, int, int, int);
    void func_0041D670(char *);
    char *q;
    char *b;
    if ((unsigned char)func_0041D600(p) == 0) {
        return;
    }
    func_001AD100(p);
    func_00206730(p + 0x450);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_0034BA60(0x3D, p + 0x50, 0x28, 0, 1);
        *(float *)(p + 0x454) = 240.0f;
        *(unsigned char *)(p + 5) = 1;
    case 1:
        QCOPY(p + 0x50, *(char **)(p + 0xD0) + 0x50);
        if (*(float *)(p + 0x454) < 180.0f) {
            func_0034BA60(0x3F, p + 0x50, 0x28, 0, 1);
            func_0041D670(p + 0x450);
            *(char **)(p + 0x450) = func_00207480(3, 0x233, 0, 0x10);
            q = *(char **)(p + 0x450);
            if (q == 0) {
                func_001AD140(p);
                return;
            }
            *(char **)(q + 0x90) = p + 0x190;
            q[0x9A] = 1;
            *(float *)(p + 0x420) = 1500.0f;
            *(float *)(p + 0x424) = *(float *)(p + 0x424) + 280.0f;
            *(unsigned char *)(p + 5) = 2;
        }
    case 2:
        *(float *)(p + 0x424) = *(float *)(p + 0x424) + 1.0f;
        if ((unsigned char)func_0041D6B0((float *)(p + 0x454), *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
    }
    b = p;
    if (b != 0) {
        b += 0x40;
    }
    func_0041D840(b, p + 0x150, 1.0f);
    if (!(*(float *)(p + 0x454) <= 150.0f) && *(float *)(p + 0x454) < 180.0f) {
        func_0028C5C0(p + 0x1D0, 0, 1.0f);
    }
}

void func_0028C740();

void func_0042D800(int p0) {
    void func_0041D670();
    func_0028C740((p0 + 464));
    func_0041D670((p0 + 1104));
}

extern void func_0042D830();

void func_0042D8D0(char *p) { func_0042D830(p + -64); }

void func_0042D8E0(char *p) { func_0042D830(p + -160); }
