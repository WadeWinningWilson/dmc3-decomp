typedef struct { short k; short pad; int v; } KLEnt;

typedef struct { short n; short pad; KLEnt e[272]; } KLTab272;

int func_001F3A50(KLTab272 *t, short k) {
    int i;
    for (i = 0; i < 272; i++) {
        if (t->e[i].k == k) {
            return t->e[i].v;
        }
    }
    return 0;
}

void func_00104B80(char *, float *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00131700(float *, float *, float *);

void func_001EFFE0(char *p, float r) {
    float a[2];
    float v[4] __attribute__((aligned(16)));
    float g[4] __attribute__((aligned(16)));
    float o[4] __attribute__((aligned(16)));
    float m[16] __attribute__((aligned(16)));
    a[0] = *(float *)(p + 0x704);
    a[1] = *(float *)(p + 0x708);
    if (!(a[0] <= 180.0f)) a[0] = a[0] - 360.0f;
    if (a[0] < -180.0f) a[0] = a[0] + 360.0f;
    if (!(a[1] <= 180.0f)) a[1] = a[1] - 360.0f;
    if (a[1] < -180.0f) a[1] = a[1] + 360.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    v[0] = r;
    v[3] = 1.0f;
    g[3] = 1.0f;
    g[0] = 0.0f;
    g[1] = 6.283185f * (a[0] / 360.0f);
    g[2] = 6.283185f * (a[1] / 360.0f);
    UNIT(m);
    func_00131700(m, m, g);
    func_00104B80((char *)o, m, v);
    *(float *)(p + 0x6F8) = o[0];
    *(float *)(p + 0x6FC) = o[1];
    *(float *)(p + 0x700) = o[2];
}

void func_001EEEE0();

void func_001EE1D0(char *p0) {
    *(char *)(p0 + 4) = 0;
    *(char *)(p0 + 57) = 0;
    func_001EEEE0();
    *(char *)(p0 + 1954) = 0;
    *(short *)(p0 + 1952) = -1;
    *(int *)(p0 + 1944) = 0;
    *(int *)(p0 + 1948) = 0;
    *(char *)(p0 + 1955) = 0;
}

void func_001EEF40();

void func_001F1170();

void func_001F11A0();

void func_001F1200();

void func_001F1560();

void func_001EE220(int p0) {
    func_001F1170();
    func_001F11A0(p0);
    func_001F1200(p0);
    func_001F1560(p0);
    func_001EEF40(p0);
}

extern char D_005A6FB0[];

extern char D_005A7370[];

void func_001B1570();

void func_001B1590();

void func_002790E0();

int func_001EE110(p0) int p0; {
    func_001B1590();
    *(char **)((char *)p0 + 0) = D_005A6FB0;
    *(char *)((char *)p0 + 56) = 0;
    *(char *)((char *)p0 + 57) = 0;
    *(char *)((char *)p0 + 58) = 0;
    *(char *)((char *)p0 + 152) = 0;
    *(int *)((char *)p0 + 68) = 0;
    *(int *)((char *)p0 + 64) = 0;
    *(char *)((char *)p0 + 59) = 0;
    func_001B1570((p0 + 80));
    *(int *)((char *)p0 + 144) = 0;
    *(char *)((char *)p0 + 154) = 0;
    *(int *)((char *)p0 + 148) = 0;
    *(char *)((char *)p0 + 153) = 0;
    *(char *)((char *)p0 + 155) = 0;
    *(char *)((char *)p0 + 159) = 0;
    *(char *)((char *)p0 + 158) = 0;
    *(char *)((char *)p0 + 157) = 0;
    *(char *)((char *)p0 + 156) = 0;
    *(char *)((char *)p0 + 60) = 0;
    *(short *)((char *)p0 + 62) = -1;
    *(char **)((char *)p0 + 0) = D_005A7370;
    func_002790E0((p0 + 192));
    *(char *)((char *)p0 + 1954) = 0;
    *(short *)((char *)p0 + 1952) = 0;
    *(int *)((char *)p0 + 1944) = 0;
    *(int *)((char *)p0 + 1948) = 0;
    *(char *)((char *)p0 + 1955) = 0;
    *(char *)((char *)p0 + 1956) = 0;
    return p0;
}

void func_001EE570(char *p, int v) { *(int *)(p + 160) = v; }

void func_001F2C20(void) {}

void func_001F2C30(void) {}
