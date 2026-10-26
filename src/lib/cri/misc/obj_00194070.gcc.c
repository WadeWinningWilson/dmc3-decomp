// cc: ee-gcc2.96 -O2 -G0
int func_001940D8(float f0, float f1) {
    float v0;
    int v1;
    v1 = 1;
    if (f0 >= f1) {
        v1 = 0;
    }
    v0 = (f1 - f0);
    if (v0 < -14.0f) {
        v1 = 0;
    }
    return v1;
}

void func_00194108(p0, p1, p2) char *p0; char *p1; char *p2; {
    *(float *)(p1 + 0) = *(float *)(p0 + 60);
    *(float *)(p2 + 0) = *(float *)(p0 + 64);
}
