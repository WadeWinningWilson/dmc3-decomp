char *func_00207470(int, int, int);

void func_003FD0A0(char *p) {
    void func_001AD140(char *);
    char *o;
    if (*(char **)(p + 0x174)) func_001AD140(*(char **)(p + 0x174));
    switch (*(unsigned char *)(p + 0x150)) {
    case 0: case 1: case 2: case 3: case 4:
        *(char **)(p + 0x174) = func_00207470(3, 0x1CF, 0);
        break;
    case 5: case 6:
        *(char **)(p + 0x174) = func_00207470(3, 0x21E, 0);
        break;
    }
    o = *(char **)(p + 0x174);
    if (o) {
        *(char **)(o + 0x90) = p + 0x1A0;
        *(unsigned char *)(o + 0x9A) = 3;
        *(unsigned char *)(*(char **)(p + 0x174) + 0x3A) = 1;
    }
}

short func_00131D10(float, float);

extern char *D_005BC2E0;

extern int D_005BCFC8;

extern char D_0056A010[];

void func_001AD100(char *);

void func_00206730(char *);

void func_00286040(char *);

void func_00133890(char *, char *, float *);

void func_0028C200(char *, char *, char *, int, char *, char *, char *);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

void func_0028C5C0(char *, int, float);

char *func_002FF750(int, char *, int);

void func_003FBDA0(char *p);

void func_003FBFA0(char *);

void func_003023F0(char *);

void func_003FD0A0(char *p);

void func_003FB9D0(char *p) {
    void func_001AD140(char *);
    float v[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    char *e;
    func_001AD100(p);
    func_00206730(p + 0x174);
    func_00286040(p + 0x178);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(unsigned char *)(p + 5) = 0;
        *(unsigned char *)(p + 6) = 0;
        *(unsigned char *)(p + 7) = 0;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(p + 0x1A0) : "memory");
        v[0] = 0.0f;
        v[1] = 1.0f;
        v[2] = 0.0f;
        v[3] = 1.0f;
        func_00133890(p + 0x1A0, p + 0x60, v);
        *(float *)(p + 0x1D0) = *(float *)(p + 0x50);
        *(float *)(p + 0x1D4) = *(float *)(p + 0x54);
        *(float *)(p + 0x1D8) = *(float *)(p + 0x58);
        *(float *)(p + 0x1DC) = 1.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x190), "r"(p + 0x180) : "memory");
        *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
        switch (*(unsigned char *)(p + 0x150)) {
        case 0: *(int *)(p + 0x440) = 0x28; break;
        case 1: *(int *)(p + 0x440) = 0x29; break;
        case 2: *(int *)(p + 0x440) = 0x2A; break;
        case 3: *(int *)(p + 0x440) = 0x2A; break;
        case 4: *(int *)(p + 0x440) = 0x2A; break;
        case 5: *(int *)(p + 0x440) = 0x2B; break;
        case 6: *(int *)(p + 0x440) = 0x2C; break;
        }
        e = D_005BC2E0 + (*(int *)(p + 0x440) << 6);
        *(signed char *)(p + 0x400) = *(signed char *)(e + 0x0);
        *(signed char *)(p + 0x401) = *(signed char *)(e + 0x1);
        *(signed char *)(p + 0x402) = *(signed char *)(e + 0x2);
        *(float *)(p + 0x404) = *(float *)(e + 0x4);
        *(float *)(p + 0x408) = *(float *)(e + 0x8);
        *(float *)(p + 0x40C) = *(float *)(e + 0xC);
        *(float *)(p + 0x410) = *(float *)(e + 0x10);
        *(float *)(p + 0x414) = *(float *)(e + 0x14);
        *(signed char *)(p + 0x418) = *(signed char *)(e + 0x18);
        *(float *)(p + 0x41C) = *(float *)(e + 0x1C);
        *(signed char *)(p + 0x420) = *(signed char *)(e + 0x20);
        *(float *)(p + 0x424) = *(float *)(e + 0x24);
        *(float *)(p + 0x428) = *(float *)(e + 0x28);
        *(float *)(p + 0x42C) = *(float *)(e + 0x2C);
        *(unsigned char *)(p + 0x430) = *(unsigned char *)(e + 0x30);
        *(int *)(p + 0x434) = *(int *)(e + 0x34);
        *(float *)(p + 0x438) = *(float *)(e + 0x38);
        *(signed char *)(p + 0x43C) = *(signed char *)(e + 0x3C);
        *(signed char *)(p + 0x43D) = *(signed char *)(e + 0x3D);
        *(signed char *)(p + 0x43E) = *(signed char *)(e + 0x3E);
        switch (*(unsigned char *)(p + 0x151)) {
        case 0:
            break;
        case 1:
            *(float *)(p + 0x404) = *(float *)(p + 0x404) * 1.1f;
            break;
        case 2:
            *(float *)(p + 0x404) = *(float *)(p + 0x404) * 1.3f;
            break;
        }
        func_0028C200(p + 0x1E0, (char *)&D_005BCFC8, D_0056A010, 1, p + 0x400, p, 0);
        func_0028C8E0(p + 0x1E0, 0);
        func_0028C910(p + 0x1E0);
        *(int *)(p + 0x2B8) = 0x30F3F;
        func_0028C3A0(p + 0x1E0, 0, -1, p + 0x1A0);
        func_0028C3A0(p + 0x1E0, 1, -1, p + 0x1A0);
        func_0028C5C0(p + 0x1E0, 0, *(float *)(p + 0x10));
        func_003FD0A0(p);
        *(char **)(p + 0x178) = func_002FF750(0x13, p + 0x1A0, 0);
        *(float *)(p + 0x168) = 300.0f;
        break;
    case 1:
        switch (*(unsigned char *)(p + 0x150)) {
        case 0:
        case 1:
        case 5:
            func_003FBDA0(p);
            break;
        case 2:
        case 3:
        case 4:
        case 6:
            func_003FBFA0(p);
            break;
        }
        if (*(char **)(p + 0x178) != 0) func_003023F0(*(char **)(p + 0x178));
        break;
    case 2:
        func_001AD140(p);
        break;
    }
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

extern char D_005B2150[];

extern char D_005B2174[];

extern char D_005B21F4[];

char *func_003FD1A0(int p0, int p1, int p2) {
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
    **q = func_001B0FD0(a, 0x490, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B2150;
            *(char **)(t + 0x40) = D_005B2174;
            *(char **)(t + 0xA0) = D_005B21F4;
            func_0028C110(t + 0x1A0);
            *(int *)(t + 0x470) = 0;
            *(int *)(t + 0x474) = 0;
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
        *(int *)(ret + 0x190) = p0;
        *(int *)(ret + 0x478) = p1;
        *(float *)(ret + 0x47C) = 3.0f * p1;
        *(int *)(ret + 0xD0) = p2;
    }
    return ret;
}

void func_00132540(char *, char *, float);

void func_003FB700(char *);

char *func_003FB810(char *p0, float *p1, float *p2, char p3, char p4) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x450, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_003FB700(t);
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
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x180), "r"(p1) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x190), "r"(p2) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(ret + 0x60), "r"(p2), "r"(p1) : "memory");
        func_00132540(ret + 0x60, ret + 0x60, 75.0f);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p1) : "memory");
        *(char *)(ret + 0x150) = p3;
        *(char *)(ret + 0x151) = p4;
        *(char **)(ret + 0x170) = p0;
        *(char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
    }
    return ret;
}

int func_003FD050(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = *(int *)(p0 + 372);
    if (v1 != 0) {
        v3 = func_001AD140(v1);
    }
    v2 = *(int *)(v0 + 376);
    if (v2 != 0) {
        v3 = func_001AD140(v2);
    }
    return v3;
}

extern void func_003FCFF0();

void func_003FD160(char *p) { func_003FCFF0(p + -64); }

extern void func_003FD010();

void func_003FD170(char *p) { func_003FD010(p + -64); }

extern void func_003FB780();

void func_003FD180(char *p) { func_003FB780(p + -64); }

void func_003FD190(char *p) { func_003FB780(p + -160); }

void func_003FD040(void) {}
