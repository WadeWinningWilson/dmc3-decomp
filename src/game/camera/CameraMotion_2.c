int func_00210830(int a, int b) {
    void func_00210850(int, int, int *);
    int r;
    func_00210850(a, b, &r);
    return r;
}

int func_001FA8E0(int, float);

int func_00210090(char *p0, float f0) {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    if (*(unsigned char *)(p0 + 144) != 0) {
        *(float *)(v0 + 148) = f0;
        v1 = 0;
        v2 = (int)v0;
        do {
            v3 = func_001FA8E0((v2 + 156), *(float *)(v0 + 148));
            v1 = (v1 + 1);
            v2 = (v2 + 20);
        } while ((v1 < 14));
        *(float *)(v0 + 112) = (*(float *)(v0 + 276) + *(float *)(v0 + 156));
        *(float *)(v0 + 116) = (*(float *)(v0 + 296) + *(float *)(v0 + 176));
        *(float *)(v0 + 120) = (*(float *)(v0 + 316) + *(float *)(v0 + 196));
        *(float *)(v0 + 128) = (*(float *)(v0 + 336) + *(float *)(v0 + 156));
        *(float *)(v0 + 132) = (*(float *)(v0 + 356) + *(float *)(v0 + 176));
        *(float *)(v0 + 136) = (*(float *)(v0 + 376) + *(float *)(v0 + 196));
        *(float *)(v0 + 32) = ((2.0f * (3.141592502593994f * *(float *)(v0 + 396))) / 360.0f);
        *(float *)(v0 + 36) = *(float *)(v0 + 416);
    }
    return v3;
}

int func_00210810(p0) int p0; {
    int func_00210850();
    char stk[0x10] __attribute__((aligned(16)));
    int tmp0;
    tmp0 = func_00210850(p0, -1, ((stk + -16) + 28));
    return tmp0;
}

void func_0020FB00(char *p0) {
    *(int *)(p0 + 160) = 0;
    *(int *)(p0 + 180) = 0;
    *(int *)(p0 + 200) = 0;
    *(int *)(p0 + 220) = 0;
    *(int *)(p0 + 240) = 0;
    *(int *)(p0 + 260) = 0;
    *(int *)(p0 + 280) = 0;
    *(int *)(p0 + 300) = 0;
    *(int *)(p0 + 320) = 0;
    *(int *)(p0 + 340) = 0;
    *(int *)(p0 + 360) = 0;
    *(int *)(p0 + 380) = 0xc2c80000;
    *(int *)(p0 + 400) = 0x425c0000;
    *(int *)(p0 + 420) = 0;
}
