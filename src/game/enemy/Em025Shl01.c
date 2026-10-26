/* Turn angle from degrees, two position updates, keeps 20 units above the target. */
extern char D_01CAFF0C[];

void func_0028C200(char *, char *, char *, int, char *, char *, char *);

void func_0028C8E0(char *, int);

void func_002E7920(char *, int, int, int, char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

char *func_00207480(int, int, float *, int);

#define VUNIT(d) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(d) : "memory")

extern char D_0055FEF0[];

static inline void set4_370(float *v, float x, float y, float z, float w) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
    v[3] = w;
}

void func_00370510(char *p) {
    void func_001AD140(char *);
    void func_00105300(char *, char *);
    float m[16] __attribute__((aligned(16)));
    char *b;
    char *o;
    char *e;
    char *g;
    p[0x370] = 3;
    p[0x371] = 0;
    *(short *)(p + 0x372) = 0;
    p[0x380] = 2;
    *(int *)(p + 0x390) = 0;
    *(int *)(p + 0x394) = 0;
    *(int *)(p + 0x398) = 0;
    *(float *)(p + 0x39C) = 1.0f;
    *(float *)(p + 0x3A0) = 50.0f;
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 2, D_0055FEF0, p, p + 0x3D0);
    func_0028C8E0(p + 0x150, 0);
    b = p;
    if (b) b += 0x40;
    func_002E7920(p + 0x3D0, 0, 0, 0, b, 0);
    func_0028C910(p + 0x150);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x4F0);
    func_0028C3A0(p + 0x150, 0, -1, p + 0x530);
    e = *(char **)(p + 0x1CC);
    e[2] = 1;
    g = *(char **)(*(char **)D_01CAFF0C + 0xC);
    VUNIT(p + 0x4B0);
    *(float *)(p + 0x4E0) = *(float *)(g + 0x50);
    *(float *)(p + 0x4E4) = 1000.0f + *(float *)(g + 0x54);
    *(float *)(p + 0x4E8) = *(float *)(g + 0x58);
    *(float *)(p + 0x4B0) = *(float *)(*(char **)(p + 0x57C) + 0x10);
    *(float *)(p + 0x4C4) = *(float *)(*(char **)(p + 0x57C) + 0x10);
    *(float *)(p + 0x4D8) = *(float *)(*(char **)(p + 0x57C) + 0x10);
    func_00105300(p + 0x4F0, p + 0x4B0);
    func_00105300(p + 0x530, p + 0x4B0);
    *(float *)(p + 0x524) = *(float *)(p + 0x524) - 80.0f;
    *(float *)(p + 0x564) = *(float *)(p + 0x564) + 150.0f;
    set4_370((float *)(p + 0x4A0), 0.0f, 0.0f, 0.0f, 0.0f);
    VUNIT(m);
    *(char **)(p + 0x578) = func_00207480(3, 0x75, m, 0x10);
    if ((o = *(char **)(p + 0x578)) != 0) {
        *(char **)(o + 0x90) = p + 0x4B0;
        o[0x9A] = 0;
        e = *(char **)(p + 0x578);
        e[0x3A] = 1;
    } else {
        func_001AD140(p);
    }
    *(float *)(p + 0x570) = 40.0f;
    *(float *)(p + 0x580) = **(float **)(p + 0x57C);
}

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

void func_0028C740(char *);

char *func_00207470(int, int, char *);

void func_00370EF0(char *p) {
    void func_0034BA60(int, char *, signed char, int, int);
    void func_001AD140(char *);
    void func_00105300(float *, char *);
    float v[4];
    unsigned int f;
    func_001AD100(p);
    f = *(unsigned int *)(*(char **)(p + 0x1CC) + 8);
    *(float *)(p + 0x570) = *(float *)(p + 0x570) - 1.0f;
    if ((f & 3) != 0 || *(float *)(p + 0x570) < 0.0f) {
        (*(unsigned char *)(p + 5))++;
        if (*(char **)(p + 0x578) != 0) {
            func_001AD140(*(char **)(p + 0x578));
        }
        *(char **)(p + 0x578) = func_00207470(3, 0xAB, p + 0x4B0);
        if (*(char **)(p + 0x578) != 0) {
            *(unsigned char *)(*(char **)(p + 0x578) + 0x3A) = 1;
        }
        *(float *)(p + 0x570) = 50.0f;
        v[0] = *(float *)(p + 0x4E0);
        v[1] = *(float *)(p + 0x4E4);
        v[2] = *(float *)(p + 0x4E8);
        v[3] = 1.0f;
        func_0034BA60(0x1D, (char *)v, *(signed char *)(*(char **)(p + 0x480) + 0x46), 0, 1);
        func_0028C740(p + 0x150);
    }
    func_00105300((float *)(p + 0x4F0), p + 0x4B0);
    func_00105300((float *)(p + 0x530), p + 0x4B0);
    *(float *)(p + 0x524) = *(float *)(p + 0x524) - 80.0f;
    *(float *)(p + 0x564) = *(float *)(p + 0x564) + 80.0f;
    func_0028C5C0(p + 0x150, 0, 1.0f);
}

void func_00371040(char *p) {
    void func_001AD140(char *);
    *(float *)(p + 0x570) = *(float *)(p + 0x570) - 1.0f;
    if (*(float *)(p + 0x570) < 0.0f) {
        func_0028C5C0(p + 0x150, 0, 1.0f);
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x150, 0, 1.0f);
    }
}

void func_00370830(char *p) {
    void func_00105300(char *, char *);
    *(float *)(p + 0x580) = *(float *)(p + 0x580) - 1.0f;
    if (*(float *)(p + 0x580) < 0.0f) {
        *(float *)(p + 0x570) = 40.0f;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
    }
    func_00105300(p + 0x4F0, p + 0x4B0);
    func_00105300(p + 0x530, p + 0x4B0);
    *(float *)(p + 0x524) = *(float *)(p + 0x524) - 80.0f;
    *(float *)(p + 0x564) = *(float *)(p + 0x564) + 150.0f;
    func_0028C5C0(p + 0x150, 0, 1.0f);
}

int func_003710D0(p0) char *p0; {
    int func_001AD140();
    int v0;
    int v1;
    v0 = *(int *)(p0 + 1400);
    if (v0 != 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

int func_00371190();

int func_00371100(p0) int p0; {
    int func_001AD140();
    int func_0034BA60();
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00371190();
    if ((v2 & 255) != 0) {
        if (*(unsigned char *)(v0 + 5) != 4) {
            *(float *)((stk + -32) + 32) = *(float *)(v0 + 1248);
            *(float *)((stk + -32) + 36) = *(float *)(v0 + 1252);
            *(float *)((stk + -32) + 40) = *(float *)(v0 + 1256);
            *(int *)((stk + -32) + 44) = 0x3f800000;
            v2 = func_0034BA60(29, ((stk + -32) + 32), *(signed char *)(*(char **)(v0 + 1152) + 70), 0, 1);
            v1 = *(int *)(v0 + 1400);
            if (v1 != 0) {
                v2 = func_001AD140(v1);
            }
        }
    }
    return v2;
}

void func_002282B0();

int func_00371190(p0) int p0; {
    func_002282B0((p0 + 1152));
    return (*(int *)((char *)p0 + 1152) != 0);
}

extern void func_003711C0();

void func_00371280(char *p) { func_003711C0(p + -64); }

void func_00371290(char *p) { func_003711C0(p + -160); }

void func_003710B0(void) {}

void func_003710C0(void) {}
