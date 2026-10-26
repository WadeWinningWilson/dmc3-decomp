#define E2FF(p) ((*(Q2FF **)((p) + 0x40))[*(short *)((p) + 0x3A)])

typedef struct { float x, y, z, w; } V4F;

typedef struct { V4F a; V4F b; } P2FF;

typedef struct { char pad[0x30]; float p0[4]; float p1[4]; char pad2[0x60]; } Q2FF;

void func_00104B80(V4F *, float *, float *);

void func_002FFE20(char *p) {
    float v[4] __attribute__((aligned(16)));
    V4F a __attribute__((aligned(16)));
    V4F b __attribute__((aligned(16)));
    int i;
    v[0] = E2FF(p).p0[0];
    v[1] = E2FF(p).p0[1];
    v[2] = E2FF(p).p0[2];
    v[3] = 1.0f;
    func_00104B80(&a, *(float **)(p + 0x3C), v);
    v[0] = E2FF(p).p1[0];
    v[1] = E2FF(p).p1[1];
    v[2] = E2FF(p).p1[2];
    v[3] = 1.0f;
    func_00104B80(&b, *(float **)(p + 0x3C), v);
    for (i = 0; i < *(int *)(*(char **)(p + 0x44) + 0x42E4) + 2; i++) {
        ((P2FF *)*(char **)(p + 0x44))[i].a = a;
        ((P2FF *)*(char **)(p + 0x44))[i].b = b;
    }
}

void func_001B6460(int *, float *);

void func_001B6470(int *, char *);

void func_001B64B0(int *, char *);

void func_001B64E0(int *, char *);

void func_001B6500(int *, int);

void func_001B6510(int *, int);

void func_001B6520(int *, int);

void func_001B6530(int *, unsigned short);

void func_001B6540(int *, int);

void func_001B6550(int *, unsigned char);

void func_001B6560(int *, float);

void func_001B90E0(int *, int);

void func_001B9520(int *, int);

int func_003016E0(char *);

extern int D_01C61820[];

typedef struct { char pad[0x14]; unsigned char b14; char pad2[0x9B]; } E301;

void func_003014F0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float s = 1.0f;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    func_001B6470(D_01C61820, *(char **)(p + 0x44) + 0x2C0);
    func_001B64B0(D_01C61820, *(char **)(p + 0x44) + 0x2D80);
    func_001B6460(D_01C61820, m);
    func_001B6560(D_01C61820, (float)(unsigned int)s);
    func_001B6530(D_01C61820, *(int *)(*(char **)(p + 0x44) + 0x42F0) * 3);
    func_001B6510(D_01C61820, 2);
    func_001B6520(D_01C61820, 0);
    func_001B6550(D_01C61820, (*(E301 **)(p + 0x40))[*(short *)(p + 0x3A)].b14);
    func_001B6540(D_01C61820, 0);
    if (*(unsigned char *)(p + 0x39) == 1) {
        if ((unsigned char)func_003016E0(p) != 0) {
            func_001B64E0(D_01C61820, *(char **)(p + 0x44) + 0x3830);
            func_001B6500(D_01C61820, *(int *)(*(char **)(p + 0x44) + 0x42E0));
            func_001B9520(D_01C61820, 0);
        }
    } else {
        func_001B90E0(D_01C61820, 0);
    }
}

typedef struct { float x, y, z, w; } V4f;

void func_00300840(char *p, unsigned char flag) {
    void func_003008D0(void);
    int n;
    int off;
    if (flag == 1) {
        n = *(int *)(*(char **)(p + 68) + 17124) + 1;
        off = n << 5;
        while (n > 0) {
            n--;
            *(V4f *)(*(char **)(p + 68) + off) = *(V4f *)(*(char **)(p + 68) + off - 32);
            *(V4f *)(*(char **)(p + 68) + off + 16) = *(V4f *)(*(char **)(p + 68) + off - 16);
            off -= 32;
        }
    }
    func_003008D0();
}

typedef struct { int w[16]; } M64c;

void func_00300BD0(char *p) {
    **(M64c **)(p + 0x48) = **(M64c **)(p + 0x3C);
}

void func_00300CC0(char *);

void func_00300BD0(char *);

void func_00301160(char *);

void func_00300C40(char *p) {
    void func_003008D0(char *);
    switch (*(unsigned char *)(p + 0x39)) {
    case 0:
    case 1:
        func_003008D0(p);
        func_00300CC0(p);
        break;
    case 2:
    case 3:
        func_00300BD0(p);
        func_00301160(p);
        break;
    }
}

void func_002FFC60(char *);

void func_00300020(char *);

typedef struct { char pad[0xC]; int v; char rest[0xA0]; } R176;

void func_002FFB40(char *p) {
    *(unsigned char *)(p + 0x68C) = 0;
    switch (*(unsigned char *)(p + 0x39)) {
    case 0:
    case 1:
        func_002FFC60(p);
        break;
    case 2:
    case 3:
        func_00300020(p);
        break;
    }
    *(unsigned char *)(p + 0x38) = 1;
    *(float *)(p + 0x688) = 10.0f + (float)(*(R176 **)(p + 0x40))[*(short *)(p + 0x3A)].v;
}

typedef struct { int w[16]; } W64;

void func_00300A90(char *p, unsigned char f) {
    int i;
    if (f == 1) {
        for (i = 10; i > 0; i--) {
            W64 *a = (W64 *)*(char **)(p + 0x48);
            a[i] = a[i - 1];
        }
    }
    func_00300BD0(p);
}

typedef struct { int w[16]; } S40;

void func_003002D0(char *p) {
    int i;
    for (i = 0; i < 11; i++) {
        (*(S40 **)(p + 0x48))[i] = **(S40 **)(p + 0x3C);
    }
}

void func_00301860(void) {}
