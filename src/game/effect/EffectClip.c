/* Per-kind float query: four lookups keyed on +0x20. */
extern char D_01DF6260[], D_01CB0A00[], D_01DF5E40[], D_01DF7210[];

float func_001FF0F0(char *, int);

 float func_001F3B40(char *, int);

 float func_001FEE60(char *, int);

 float func_002068F0(char *, int);

float func_0021B680(unsigned char *p) {
    float r = 0.0f;
    switch (p[0x20]) {
    case 0:
        r = func_001FF0F0(D_01DF6260, *(short *)(p + 0x52));
        break;
    case 1:
        r = func_001F3B40(D_01CB0A00, *(short *)(p + 0x52));
        break;
    case 2:
        r = func_001FEE60(D_01DF5E40, *(short *)(p + 0x52));
        break;
    case 3:
        r = func_002068F0(D_01DF7210, *(short *)(p + 0x52));
        break;
    }
    return r;
}

int func_001AD140();

int func_0021B640(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 24);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 24) = 0;
    }
    return v2;
}

void func_0021B780(void) {}

void func_0021B730(char *p0) {
    *(char *)(p0 + 32) = 0;
    *(short *)(p0 + 82) = -1;
    *(int *)(p0 + 40) = 0;
    *(int *)(p0 + 52) = 0;
    *(int *)(p0 + 64) = 0x3f800000;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 56) = 0;
    *(int *)(p0 + 68) = 0x3f800000;
    *(int *)(p0 + 48) = 0;
    *(int *)(p0 + 60) = 0;
    *(int *)(p0 + 72) = 0x3f800000;
    *(int *)(p0 + 76) = 0;
    *(char *)(p0 + 80) = 0;
    *(char *)(p0 + 33) = -1;
    *(short *)(p0 + 34) = 0;
    *(short *)(p0 + 36) = 0;
}
