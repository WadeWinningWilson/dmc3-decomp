extern char D_0056FFB0[];

void func_003F3A90(char *);

void func_0028C200(char *, char *, char *, int, char *, char *, char *);

void func_002E7920(char *, int, int, int, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_00105300(char *, char *);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_0050EDC0(char *p) {
    void func_001AD140(char *);
    char *b;
    char *e;
    char *d;
    char *s;
    func_003F3A90(p + 0x228);
    if (*(int *)(p + 0x228) == 0) {
        func_001AD140(p);
        return;
    }
    *(unsigned char *)(p + 0x2F0) = 2;
    *(float *)(p + 0x300) = 0.0f;
    *(float *)(p + 0x304) = 0.0f;
    *(float *)(p + 0x308) = 0.0f;
    *(float *)(p + 0x30C) = 1.0f;
    *(float *)(p + 0x310) = 150.0f;
    *(unsigned char *)(p + 0x2E4) = 5;
    *(unsigned char *)(p + 0x2E5) = 0;
    *(short *)(p + 0x2E6) = 0;
    func_0028C200(p + 0x340, p + 0x2E4, p + 0x2F0, 3, D_0056FFB0, p, p + 0x2A0);
    b = p;
    if (b != 0) {
        b += 0x40;
    }
    func_002E7920(p + 0x2A0, 0, 0, 0, b, 0);
    func_0028C8E0(p + 0x340, 1);
    *(int *)(p + 0x418) = 0x20040;
    *(unsigned char *)(p + 0x343) = 0;
    func_0028C910(p + 0x340);
    e = func_0028C3A0(p + 0x340, 0, -1, p + 0x1E0);
    if (e != 0) {
        e[2] = 1;
    }
    *(unsigned char *)(p + 0x231) = 0;
    func_00105300(p + 0x1E0, *(char **)(p + 0x228) + 0x3680);
    d = p + 0x50;
    s = p + 0x210;
    QCOPY(d, s);
    s = p + 0x210;
    d = p + 0x1D0;
    QCOPY(d, s);
    (*(unsigned char *)(p + 4))++;
}

void func_00252FA0(char *);

void func_002E7840(char *);

void func_0028C110(char *);

char *func_0050EA20(char *p) {
    extern char D_005BB6D0[];
    extern char D_005BB6F4[];
    extern char D_005BB774[];
    int i;
    func_00252FA0(p);
    *(char **)p = D_005BB6D0;
    *(char **)(p + 0x40) = D_005BB6F4;
    *(char **)(p + 0xA0) = D_005BB774;
    *(unsigned char *)(p + 0x240) = 0;
    *(unsigned char *)(p + 0x241) = 0;
    *(short *)(p + 0x242) = 0;
    *(int *)(p + 0x248) = 0;
    *(int *)(p + 0x24C) = 0;
    *(int *)(p + 0x250) = 0;
    *(int *)(p + 0x260) = 0;
    *(int *)(p + 0x264) = 0;
    *(int *)(p + 0x268) = 0;
    *(float *)(p + 0x26C) = 1.0f;
    *(float *)(p + 0x270) = 100000.0f;
    *(unsigned char *)(p + 0x274) = 0;
    *(unsigned char *)(p + 0x275) = 0;
    *(short *)(p + 0x276) = 0;
    for (i = 0; i < 10; i++) {
        *(short *)(p + i * 2 + 0x278) = -1;
    }
    func_002E7840(p + 0x2A0);
    func_0028C110(p + 0x340);
    return p;
}

void func_0050F0B0(void) {
    extern void func_001AD140(); func_001AD140(); }

extern void func_0028C740();

void func_0050F0F0(char *p) { func_0028C740(p + 832); }

extern void func_0050F100();

void func_0050F120(char *p) { func_0050F100(p + -64); }

extern void func_0050EAF0();

void func_0050F130(char *p) { func_0050EAF0(p + -64); }

void func_0050F140(char *p) { func_0050EAF0(p + -160); }

void func_0050F0C0(void) {}

void func_0050F0D0(void) {}

void func_0050F0E0(void) {}

void func_0050F0A0(char *p0) {
    unsigned char t0;
    t0 = (*(unsigned char *)(p0 + 4) + 1);
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
}
