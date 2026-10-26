/* Hand-matched functions whose callee prototypes conflict with declarations in misc3-9. */
extern char D_01DFABA0[];

void func_001AD140(char *);

extern signed char D_01CAFF3C[];

extern unsigned char D_01CAFF3D[];

extern char D_01CAFF10[];

extern char D_01CAFF30[];

extern char D_01CB0520[];

extern int D_005BE098;

extern char D_006663C0[];

unsigned char func_002A67F0(signed char, unsigned char);

unsigned char func_004D5370(char *);

void func_004D5980(char *);

unsigned short func_001AE360(char *, int);

void func_003303F0(char *, int, int, int, int);

void func_004D6100(char *);

void func_00195E20(int *, char *);

static inline unsigned char gg4D4(signed char n) {
    return *(unsigned char *)(*(char **)((*(char **)D_01CAFF10) + 4) + (signed char)(n - 1) + 0x690);
}

static inline int nz4D4(int x) { return x != 0; }

void func_004D4E00(char *p) {
    int j;
    int i;
    char *d;
    int k;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        for (i = 0; i < 5; i++) {
            *(signed char *)(p + i + 0x4EC1) = 0;
            for (j = 1; j < 21; j++) {
                if (*(int *)(p + 0x4F3C) == 8 && i == func_002A67F0(D_01CAFF3C[0], D_01CAFF3D[0])) {
                    *(signed char *)(p + i * 0x15 + j + 0x4EC6) = *(signed char *)((*(char **)D_01CAFF10) + j + 0x71);
                } else {
                    *(signed char *)(p + i * 0x15 + j + 0x4EC6) = *(signed char *)(D_01CAFF30 + i * 0x15 + j + 0x560);
                }
                if (*(signed char *)(p + i * 0x15 + j + 0x4EC6) != -1) *(signed char *)(p + i + 0x4EC1) = j;
            }
        }
        *(unsigned char *)(p + 0x4F44) = 0;
        for (k = 0; k < 12; k++) {
            if (*(int *)(p + 0x4F3C) == 8) {
                d = p + k + 0x4F2F;
                *(unsigned char *)d = gg4D4(k + 1);
            } else {
                d = p + k + 0x4F2F;
                *(unsigned char *)d = *(unsigned char *)(D_01CAFF30 + (signed char)k + 0xE4);
            }
            if (*(signed char *)d != 0) *(unsigned char *)(p + 0x4F44) = 1;
        }
        if (nz4D4(*(int *)D_01CB0520 & 1) == 1) *(unsigned char *)(p + 0x4F40) = 1;
        if (nz4D4(*(int *)D_01CB0520 & 2) == 1) *(unsigned char *)(p + 0x4F41) = 1;
        if (nz4D4(*(int *)D_01CB0520 & 4) == 1) *(unsigned char *)(p + 0x4F42) = 1;
        if (*(signed char *)(p + 0x4EC1) >= 11 || *(signed char *)(p + 0x4EC2) >= 11 || *(signed char *)(p + 0x4EC3) >= 11 ||
            *(signed char *)(p + 0x4EC4) >= 11) {
            *(unsigned char *)(p + 0x4F43) = 1;
        } else {
            *(unsigned char *)(p + 0x4F43) = 0;
        }
        if (func_004D5370(p) == 0) goto fail;
        func_004D5980(p);
        *(unsigned char *)(p + 4) = 1;
        *(unsigned char *)(p + 5) = 0;
    case 1:
        if (func_001AE360(D_006663C0, 0) & 0x50) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 0x4EC0) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    case 2:
        *(unsigned char *)(p + 4) = 3;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 3:
        break;
    }
    func_004D6100(p);
    func_00195E20(&D_005BE098, p);
    return;
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 3;
    *(unsigned char *)(p + 5) = 0;
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005B92A0[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

char * func_004D4BA0(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005B92A0;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 13, 135);
    *(char *)(p + 20032) = 0;
    return p;
}

int func_004D5340(p0) char *p0; {
    int v0;
    if ((*(unsigned char *)(p0 + 4) < 3)) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 20160);
        return v0;
    }
}

int func_004D6200();

int func_004D6180(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char stk[0x10] __attribute__((aligned(16)));
    int v0;
    int v1;
    int v2;
    v0 = p1;
    __asm__ volatile("lqc2 $vf4, 0x30(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%1)" : : "r"(p0), "r"(((stk + -48) + 48)) : "memory");
    v1 = 0;
    *(float *)((stk + -48) + 60) = 1.0f;
    while ((v1 < (signed char)v0)) {
        v2 = func_004D6200(((stk + -48) + 48));
        v1 = (v1 + 1);
    }
    return v2;
}

void func_004D5150(void) {}
