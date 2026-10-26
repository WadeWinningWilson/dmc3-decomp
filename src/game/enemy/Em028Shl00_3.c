void func_003BA640(char *);

void func_003BA070(char *p, unsigned char a, unsigned char b) {
    void func_003BA400(char *);
    void func_003BA680(char *, int);
    void func_003B92A0(char *);
    *(unsigned char *)(p + 0x1B5) = 3;
    if (a == 1) {
        *(unsigned char *)(p + 0x1B6) = 1;
        if (*(unsigned char *)(p + 0x1B4) != 0) {
            *(float *)(p + 0x240) = *(float *)(p + 0x50) - *(float *)(*(char **)(p + 0x1DC) + 0x50);
            *(float *)(p + 0x244) = *(float *)(p + 0x54) - *(float *)(*(char **)(p + 0x1DC) + 0x54);
            *(float *)(p + 0x248) = *(float *)(p + 0x58) - *(float *)(*(char **)(p + 0x1DC) + 0x58);
        } else {
            *(float *)(p + 0x240) = *(float *)(p + 0x50) - *(float *)(p + 0x200);
            *(float *)(p + 0x244) = *(float *)(p + 0x54) - *(float *)(p + 0x204);
            *(float *)(p + 0x248) = *(float *)(p + 0x58) - *(float *)(p + 0x208);
        }
        func_003BA640(p);
    } else {
        *(unsigned char *)(p + 0x1B6) = 0;
        func_003BA400(p);
    }
    if (b == 1) {
        func_003BA680(p, 1);
    }
    func_003B92A0(p);
    *(unsigned char *)(p + 5) = 0;
}

void func_003B9E50(char *p0) {
    void func_003B92A0();
    void func_003BA400();
    *(char *)(p0 + 437) = 0;
    *(char *)(p0 + 438) = 0;
    func_003B92A0();
    func_003BA400(p0);
    *(char *)(p0 + 5) = 0;
}

int func_001AD140();

void func_003B9D20();

int func_003BA2B0();

int func_003B8A50(p0) int p0; {
    int func_003BA680();
    char *v0;
    int v1;
    int v2;
    int tmp0;
    char *tmp1;
    v0 = (char *)p0;
    tmp0 = func_003BA680(p0, 1);
    v1 = (int)v0;
    if ((tmp0 & 255) == 0) {
        v2 = func_001AD140(v1);
    } else {
        tmp1 = *(char **)(v0 + 528);
        *(char **)(*(char **)(v0 + 528) + 144) = (v0 + 592);
        *(char *)(tmp1 + 154) = 0;
        *(int *)(v0 + 480) = 0x3f800000;
        *(int *)(v0 + 484) = 0x3f800000;
        *(int *)(v0 + 488) = 0x3f800000;
        *(int *)(v0 + 492) = 0x3f800000;
        func_003B9D20(v0, tmp1);
        v2 = func_003BA2B0(v0);
        *(int *)(v0 + 452) = 0x43af0000;
        *(int *)(v0 + 128) = 0;
        *(int *)(v0 + 132) = 0;
        *(int *)(v0 + 136) = 0;
        *(int *)(v0 + 140) = 0x3f800000;
    }
    return v2;
}

int func_003B96A0(p0) char *p0; {
    int func_003BA680();
    int v0;
    if (*(unsigned char *)(p0 + 433) != 0) {
        *(char *)(p0 + 433) = 0;
        v0 = func_003BA680(p0, 1);
    }
    return v0;
}

int func_003B9BD0();

int func_003B9BA0(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 432) != 0) {
        *(char *)(p0 + 432) = 0;
        v0 = func_003B9BD0();
    }
    return v0;
}
