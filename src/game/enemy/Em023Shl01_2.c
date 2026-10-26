void func_001AD140(char *);

extern char D_005BE098[4];

void func_001AD100(char *);

void func_00206730(char *);

void func_0028C5C0(char *, int, float);

void func_00195E20(char *, char *);

void func_0034BA60(int, char *, int, int, int);

void func_00382A50(char *);

void func_004E7910(char *);

void func_004E79B0(char *);

void func_004E7C40(char *);

void func_004E7E70(char *p);

void func_004E7740(char *p) {
    char *g;
    char *d;
    char *s;
    func_00382A50(p + 0x258);
    func_00206730(p + 0x25C);
    g = *(char **)(p + 0x258);
    if (g == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(((char **)(g + 0x69F8))[*(int *)(p + 0x19C)] + 0x135C) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(g + 0x77C8) != 0) {
        func_001AD140(p);
        return;
    }
    func_001AD100(p);
    if (*(float *)(p + 0x194) < 0.0f) {
        func_001AD140(p);
        func_0034BA60(0x2E, p + 0x50, 0x29, 0, 1);
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_004E7910(p);
        break;
    case 1:
        func_004E79B0(p);
        break;
    case 2:
        func_004E7C40(p);
        break;
    case 3:
        func_004E7E70(p);
        break;
    }
    d = p + 0x50;
    s = p + 0x1E0;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory");
    *(float *)(p + 0x580) = *(float *)(p + 0x580) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x580) < 0.0f) {
        *(float *)(p + 0x580) = *(float *)(p + 0x57C);
        func_0034BA60(0x2D, d, 0x29, 0, 1);
    }
    func_0028C5C0(p + 0x260, 0, 1.0f);
    func_00195E20(D_005BE098, p);
}

extern char D_005BA1D0[];

extern char D_005BA1F4[];

extern char D_005BA274[];

int func_00252FA0();

int func_0028C110();

int func_004E71D0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005BA1D0;
    *(char **)((char *)p0 + 64) = D_005BA1F4;
    *(char **)((char *)p0 + 160) = D_005BA274;
    func_0028C110((p0 + 608));
    *(int *)((char *)p0 + 600) = 0;
    *(int *)((char *)p0 + 404) = 0;
    return p0;
}

extern void func_004E7520();

void func_004E80E0(char *p) { func_004E7520(p + -64); }

void func_004E80D0(char *p0) {
    *(char *)(p0 + 408) = 1;
}
