char *func_00207480(int, int, char *, int);

void func_00407FB0(char *p) {
    void func_001AD140(char *);
    *(char **)(p + 0x414) = func_00207480(3, 0xBF, p + 0x3D0, 16);
    if (*(char **)(p + 0x414) == 0) {
        func_001AD140(p);
        return;
    }
    *(float *)(p + 0x41C) = 40.0f;
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(p + 0x50), "r"(p + 0x3D0) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
}

void func_001AD100(char *);

void func_003BA960(char *);

int func_002077F0(char *);

void func_00408220(char *);

void func_0028C5C0(char *, int, float);

void func_00408040(char *p) {
    void func_001AD140(char *);
    void func_00206730(char *);
    char *g;
    func_001AD100(p);
    func_00206730(p + 0x414);
    func_003BA960(p + 0x410);
    if (*(char **)(p + 0x414) != 0) {
        if ((unsigned char)func_002077F0(*(char **)(p + 0x414)) == 1) {
            *(int *)(p + 0x414) = 0;
            func_001AD140(p);
            return;
        }
    } else {
        func_001AD140(p);
        return;
    }
    g = *(char **)(p + 0x410);
    if (g == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(g + 0x4BE4) != 0x21 && *(unsigned char *)(g + 0x4BE4) != 0x22) {
        func_001AD140(p);
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(float *)(p + 0x41C) = *(float *)(p + 0x41C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x41C) < 0.0f) {
            *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
            func_00408220(p);
            *(unsigned char *)(p + 0x418) = 0;
        }
        break;
    case 1:
        if (*(unsigned char *)(p + 0x418) != 1) {
            func_0028C5C0(p + 0x150, 0, *(float *)(p + 0x10));
        }
        break;
    }
}

extern char D_00645A30[];

void func_00105300(float *, char *);

void func_001AAD30(char *);

char *func_001B0FD0(char *, int, int);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

char *func_00407D80(char *p, char *s) {
    void func_00407ED0(char *);
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
    **q = func_001B0FD0(a, 0x420, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x420, t);
        if (r != 0) {
            func_00407ED0(r);
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
        *(char **)(ret + 0x410) = p;
        func_00105300((float *)(ret + 0x3D0), s);
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

void func_0028C740();

void func_004081D0(p) char *p; {
    void func_001AD140();
    void func_00206730();
    func_00206730(p + 1044);
    if (*(char **)(p + 1044) != 0) {
        func_001AD140(*(char **)(p + 1044));
        *(int *)(p + 1044) = 0;
    }
    func_0028C740(p + 336);
}

void func_00408190(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (p1 != 0) {
        v0 = 1;
        if (p2 != 0) {
            *(char *)(p0 + 1048) = v0;
            *(int *)(p0 + 1052) = 0x41f00000;
        }
    }
}

extern void func_00408300();

void func_004083B0(char *p) { func_00408300(p + -64); }

void func_004083C0(char *p) { func_00408300(p + -160); }

void func_004081C0(void) {}

void func_004082E0(void) {}

void func_004082F0(void) {}
