void func_001AD100(void);

extern char D_01CAFF0C[];

extern char D_01DFABA0[];

void func_003305E0(char *, int, int, char *, int, int, int);

void func_0028C5C0(char *, int, float);

void func_004E28B0(char *);

void func_004E3530(char *, int, int, int);

void func_004E3070(char *);

void func_004E3160(char *);

void func_004E3240(char *);

void func_004E3320(char *);

float func_0011DBE0(float, float);

void func_004E2DD0(char *p) {
    void func_001AD140(char *);
    void func_00206730(char *);
    int i;
    int j;
    int f;
    char *b;
    char *e;
    func_001AD100();
    func_00206730(p + 0x630);
    func_004E28B0(p + 0x634);
    if (*(int *)(p + 0x630) == 0) {
        func_001AD140(p);
        return;
    }
    f = 0;
    for (j = 0; j < 2; j++) {
        b = (char *)(j * 0x220) + (int)p;
        for (i = 0; i < 2; i++) {
            e = *(char **)((char *)(i * 4) + (int)b + 0x20C);
            if (e != 0) f = *(int *)(e + 8);
            if (f & 0x30141) {
                func_004E3530(p, i, j, f);
                func_003305E0(D_01DFABA0, 8, 0x88, p + 0x50, 0x2D, 0, 0);
                func_001AD140(p);
                return;
            }
        }
    }
    if (*(char **)(p + 0x634) == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(*(char **)(p + 0x634) + 0x800) == 3) {
        func_001AD140(p);
        return;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x660), "r"(*(char **)((*(char **)D_01CAFF0C) + 0xC) + 0x50) : "memory");
    *(float *)(p + 0x664) = *(float *)(p + 0x664) + 100.0f;
    *(float *)(p + 0x66C) = 1.0f;
    switch ((unsigned char)*(unsigned char *)(p + 5)) {
    case 0:
        func_004E3070(p);
        break;
    case 1:
        func_004E3160(p);
        break;
    case 2:
        func_004E3240(p);
        break;
    }
    func_004E3320(p);
    *(short *)(p + 0x90) = 0.5f + 65536.0f * func_0011DBE0(*(float *)(p + 0xF0), *(float *)(p + 0xF8)) / 6.283185f;
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
    func_0028C5C0(p + 0x3B0, 0, *(float *)(p + 0x10));
    if ((*(float *)(p + 0x640) -= *(float *)(p + 0x10)) < 0.0f) {
        *(float *)(p + 0x640) = 90.0f;
        func_003305E0(D_01DFABA0, 8, 0x84, p + 0x50, 0x2D, 0, 0);
    }
}

void func_00131650(char *, char *);

void func_00104B80(char *, float *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00131700(float *, float *, float *);

void func_00131D70(char *, char *);

#define VSUBR54(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

extern float D_0058B450[];

void func_004E3550(char *p, unsigned char k) {
    float m[16];
    float r[4];
    if (k == 0) {
        UNIT(m);
        r[0] = 0.0f;
        r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
        r[2] = 0.0f;
        r[3] = 1.0f;
        func_00131700(m, m, r);
        func_00104B80(p + 0x670, m, D_0058B450 + *(int *)(p + 0x638) * 4);
        *(float *)(p + 0xF0) = *(float *)(p + 0x670);
        *(float *)(p + 0xF4) = *(float *)(p + 0x674);
        *(float *)(p + 0xF8) = *(float *)(p + 0x678);
        *(float *)(p + 0xFC) = 1.0f;
    } else {
        VSUBR54(p + 0xF0, p + 0x660, p + 0x50);
        func_00131650(p + 0xF0, p + 0xF0);
    }
    func_00131D70(p + 0x80, p + 0xF0);
}

char *func_00207480(int, int, float *, int);

int func_004E34C0(char *p) {
    char *q;
    *(char **)(p + 0x630) = func_00207480(3, 0x345, 0, 16);
    q = *(char **)(p + 0x630);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x150;
        *(char *)(q + 0x9A) = 0;
        *(char *)(*(char **)(p + 0x630) + 0x3A) = 1;
        return 1;
    }
    return 0;
}

void func_004E3670(char *p) {
    extern float D_0058B500[];
    float m[16];
    float r[4];
    UNIT(m);
    r[0] = 0.0f;
    r[1] = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
    r[2] = 0.0f;
    r[3] = 1.0f;
    func_00131700(m, m, r);
    func_00104B80(p + 0x650, m, D_0058B500 + *(int *)(p + 0x638) * 4);
    *(float *)(p + 0x650) = *(float *)(p + 0x650) + *(float *)(p + 0x50);
    *(float *)(p + 0x654) = *(float *)(p + 0x654) + *(float *)(p + 0x54);
    *(float *)(p + 0x658) = *(float *)(p + 0x658) + *(float *)(p + 0x58);
    *(float *)(p + 0x65C) = 1.0f;
}

extern char D_005788B0[];

extern char D_005788F0[];

void func_0028C200();

void func_0028C3A0();

void func_0028C790();

void func_0028C8E0();

void func_0028C910();

void func_004E33A0(p) char *p; {
    func_0028C790(p + 400, 0);
    func_0028C790(p + 944, 0);
    *(char *)(p + 1488) = 1;
    *(char *)(p + 1489) = 0;
    *(short *)(p + 1490) = 0;
    *(char *)(p + 1504) = 2;
    *(int *)(p + 1520) = 0;
    *(int *)(p + 1524) = 0;
    *(int *)(p + 1528) = 0;
    *(int *)(p + 1532) = 1065353216;
    *(int *)(p + 1536) = 1101004800;
    func_0028C200(p + 400, p + 1488, p + 1504, 3, D_005788B0, p, 0);
    func_0028C8E0(p + 400, 0);
    func_0028C910(p + 400);
    *(int *)(p + 616) = 196673;
    func_0028C3A0(p + 400, 0, -1, p + 336);
    func_0028C200(p + 944, p + 1488, p + 1504, 1, D_005788F0, p, 0);
    func_0028C8E0(p + 944, 0);
    func_0028C910(p + 944);
    *(int *)(p + 1160) = 196868;
    func_0028C3A0(p + 944, 0, -1, p + 336);
}

int func_004E32E0(p0) int p0; {
    int func_001AD140();
    int func_00206730();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00206730((v0 + 1584));
    v1 = *(int *)(v0 + 1584);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 1584) = 0;
    }
    return v2;
}

extern void func_004E2D40();

void func_004E3830(char *p) { func_004E2D40(p + -64); }

extern void func_004E3790();

void func_004E3840(char *p) { func_004E3790(p + -64); }

void func_004E3850(char *p) { func_004E3790(p + -160); }

void func_004E3760(void) {}

void func_004E3770(void) {}

void func_004E3780(void) {}
