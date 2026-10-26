void func_004D6FA0(char *);

void func_004D71A0(char *);

void func_004D7230(char *);

void func_004D72B0(char *);

static inline char *seg0(char *t) {
    if (*(unsigned int *)(t + 4) < 1) {
        return 0;
    }
    if (((int *)(t + 8))[0] == 0) {
        return 0;
    }
    return t + ((int *)(t + 8))[0];
}

static inline char *motion_cur(char *o) {
    if (**(unsigned short **)(o + 8) == 0) {
        return seg0(*(char **)(o + 0xC));
    }
    return *(char **)(o + 0xC);
}

void func_004D6E40(char *p) {
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(char **)(p + 0x134) = motion_cur(*(char **)(p + 0x130));
    *(int *)(p + 0x138) = 0;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 0.0f;
    *(float *)(p + 0x70) = 0.0f;
    *(float *)(p + 0x74) = 0.0f;
    *(float *)(p + 0x78) = 0.0f;
    *(float *)(p + 0x7C) = 0.0f;
    *(float *)(p + 0x4F0) = 0.0f;
    *(float *)(p + 0x4F4) = 0.0f;
    *(float *)(p + 0x4F8) = 0.0f;
    *(float *)(p + 0x4FC) = 0.0f;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(short *)(p + 0x514) = 0;
    switch (*(unsigned char *)(p + 0x50C)) {
    case 0:
        func_004D6FA0(p);
        break;
    case 3:
        func_004D71A0(p);
        break;
    case 4:
        func_004D7230(p);
        break;
    case 5:
        func_004D72B0(p);
        break;
    }
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}

int func_0034BA60();

int func_004D8510(char *p0, char *p1, float f0, float f1);

int func_004D8560(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f2, float f3) {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    v0 = p0;
    v1 = p1;
    v2 = *(char **)(p0 + 1288);
    v3 = func_004D8510(p0, (v0 + 1308), 1.0f, 0.0f);
    v4 = 1;
    if ((v3 & 255) == v4) {
        v3 = func_0034BA60(v1, (v0 + 80), *(signed char *)(v2 + 70), 0, v4);
        *(float *)(v0 + 1308) = *(float *)(v0 + 1304);
    }
    return v3;
}

void func_004D8550(char *p0, float f0) {
    *(float *)(p0 + 1304) = f0;
    *(int *)(p0 + 1308) = 0;
}
