extern char D_01CAFF0C[];

void func_002FC670(char *);

void func_002FD7C0(char *);

#define VMOVE3(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline int flag_2FC(short s) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    if (s < 32) {
        unsigned int *w = (unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18);
        return (*w & (1 << (s & 31))) != 0;
    } else {
        unsigned int *w = (unsigned int *)((char *)((s - 32) / 32 * 4) + (int)g + 0x44);
        return (*w & (1 << ((s - 32) & 31))) != 0;
    }
}

void func_002FC320(char *p) {
    int i;
    int j;
    if (*(short *)(p + 0xDC) != -1 && flag_2FC(*(short *)(p + 0xDC))) func_002FC670(p);
    *(int *)(p + 0x880) = 0;
    *(int *)(p + 0x87C) = 0;
    *(int *)(p + 0x878) = 0;
    i = 0;
    while (i < 16) {
        *(int *)((char *)(i * 4) + (int)p + 0x884) = 0;
        i++;
    }
    func_002FD7C0(p);
    p[0x828] = 0;
    p[0x45] = 6;
    p[0x9C0] = 0;
    p[0x9C1] = 0;
    *(short *)(p + 0x9C2) = 0;
    *(int *)(p + 0x9C8) = 0;
    *(int *)(p + 0x9CC) = 0;
    *(int *)(p + 0x9D0) = 0;
    *(int *)(p + 0x9E0) = 0;
    *(int *)(p + 0x9E4) = 0;
    *(int *)(p + 0x9E8) = 0;
    *(float *)(p + 0x9EC) = 1.0f;
    *(float *)(p + 0x9F0) = 100000.0f;
    p[0x9F4] = 0;
    p[0x9F5] = 0;
    *(short *)(p + 0x9F6) = 0;
    j = 0;
    while (j < 10) {
        *(short *)((char *)(j * 2) + (int)p + 0x9F8) = -1;
        j++;
    }
    p[0x9C0] = 0;
    p[0x9C1] = 0;
    *(short *)(p + 0x9C2) = 1;
    *(short *)(p + 0x9C4) = 0;
    *(char **)(p + 0x9C8) = p;
    *(int *)(p + 0x9CC) = 0;
    *(char **)(p + 0x9D0) = p + 0x560;
    VMOVE3(p + 0x9E0, p + 0x560);
    *(int *)(p + 0xC) |= 0x40;
}

void func_002FCF10();

int func_002FD110(char *p0) {
    *(int *)(p0 + 2116) = 0;
    *(int *)(p0 + 2120) = 0;
    *(int *)(p0 + 2124) = 0;
    func_002FCF10();
    return 0;
}

extern char D_005BE098;

int func_00195E20();

void func_0028C5C0(char *, int, float);

int func_002FC570();

void func_002FC700();

void func_002FC960();

void func_002FD2A0();

int func_002FDD40();

int func_002FC4F0(p0) int p0; {
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    func_002FC570();
    func_002FDD40(v0);
    v1 = (int)v0;
    if (*(unsigned char *)(v0 + 2081) == 1) {
        func_002FC700(v1);
    } else {
        func_002FC960(v0);
    }
    func_002FD2A0(v0);
    func_0028C5C0((v0 + 1440), 0, 1.0f);
    tmp0 = func_00195E20(&D_005BE098, v0);
    return tmp0;
}

int func_00105230();

int func_001AD140();

int func_002FD8D0(p0) char *p0; {
    char stk[0x50] __attribute__((aligned(16)));
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    if (((20.0f * (*(float *)(p0 + 2120) / 200.0f)) * *(float *)(p0 + 16)) > 6.666666507720947f) {
        if (*(int *)(v0 + 2176) == 0) {
            *(int *)((stk + -32) + 32) = 0;
            *(int *)((stk + -32) + 44) = 0x3f800000;
            *(int *)((stk + -32) + 36) = 0;
            *(int *)((stk + -32) + 40) = 0;
            __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(((stk + -32) + 48)) : "memory");
            v4 = func_00105230(((stk + -32) + 48), ((stk + -32) + 48), ((stk + -32) + 32));
            v1 = *(char **)(v0 + 2176);
            v2 = (int)(v0 + 1376);
            if (v1 != 0) {
                *(int *)(v1 + 144) = v2;
                *(char *)(v1 + 154) = 0;
            }
        }
    } else {
        v3 = *(int *)(v0 + 2176);
        if (v3 != 0) {
            v4 = func_001AD140(v3);
            *(int *)(v0 + 2176) = 0;
        }
    }
    return v4;
}

extern char D_01CAFF14[];

int func_00277EF0(char *, float);

int func_00278060();

int func_002FDD40(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = func_00277EF0((v0 + 2256), *(float *)(v0 + 16));
    v2 = 1;
    if ((v1 & 255) == v2) {
        v1 = func_00278060((v0 + 2256), *(int *)D_01CAFF14);
    } else {
        if (*(unsigned char *)(v0 + 2084) == v2) {
            *(char *)(v0 + 2084) = 0;
        }
        if (*(unsigned char *)(v0 + 2085) == 1) {
            *(char *)(v0 + 2085) = 0;
        }
        if (*(unsigned char *)(v0 + 2086) == 1) {
            *(char *)(v0 + 2086) = 0;
        }
    }
    return v1;
}

extern void func_002FE010();

void func_002FE120(char *p) { func_002FE010(p + -64); }

void func_002FE130(char *p) { func_002FE010(p + -160); }

void func_002FE170(char *p) { func_002FE010(p + -208); }

void func_002FC120(char *p, short v) { *(short *)(p + 220) = v; }

void func_002FC180();

void func_002FE000(char *p0) {
    *(char *)(p0 + 2080) = 0;
    func_002FC180();
}
