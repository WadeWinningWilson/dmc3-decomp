extern float D_01DF5D20[];

extern char D_01CAFF0C[];

int func_00332DD0(char *);

void func_00414BC0(char *p) {
    float d = *(float *)(p + 0xC) * D_01DF5D20[0];
    unsigned char k = func_00332DD0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90);
    switch (k) {
    case 0:
        d = d;
        break;
    case 1:
        d = d;
        break;
    case 2:
        d = d * 1.5f;
        break;
    case 3:
        d = d * 3.0f;
        break;
    case 4:
        d = d * 5.0f;
        break;
    }
    *(float *)(p + 4) += d;
    if (*(float *)(p + 4) > *(float *)(p + 0x10)) {
        *(float *)(p + 4) = *(float *)(p + 0x10);
    }
}

void func_00414D10(float *p) {
    float v;
    p[2] = 100.0f;
    p[1] = 100.0f;
    p[3] = 0.001f;
    p[4] = 110.0f;
    v = p[2] - 100.0f;
    p[5] = v;
    if (v < 0.0f) {
        p[5] = 0.0f;
    }
}

extern char D_005B3150[];

void func_00414A90();

int func_00414B00(p0) int p0; {
    func_00414A90();
    *(char **)((char *)p0 + 0) = D_005B3150;
    return p0;
}

void func_00414CC0(p0, p1) char *p0; char *p1; {
    float v0;
    v0 = 0.0f;
    *(float *)(p0 + 4) = *(float *)(p1 + 0);
    *(float *)(p0 + 8) = *(float *)(p1 + 0);
    *(float *)(p0 + 12) = *(float *)(p1 + 8);
    *(float *)(p0 + 16) = *(float *)(p1 + 4);
    *(float *)(p0 + 20) = (*(float *)(p0 + 8) - 100.0f);
    if (*(float *)(p0 + 20) < v0) {
        *(float *)(p0 + 20) = v0;
    }
}

void func_00414D60(p0) char *p0; {
    float v0;
    *(float *)(p0 + 8) = (*(float *)(p0 + 8) - 20.0f);
    v0 = *(float *)(p0 + 20);
    if (*(float *)(p0 + 8) < v0) {
        *(float *)(p0 + 8) = v0;
    }
    *(float *)(p0 + 4) = *(float *)(p0 + 8);
}

float func_00414DA0(char *p) { return *(float *)(p + 4); }

void func_00414BA0(char *p0) {
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 20) = 0;
}
