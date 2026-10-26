void func_001B38B0(p0, p1, p2) int p0; char *p1; char *p2; {
    int v0;
    float v1;
    float v2;
    v0 = 0;
    v1 = 0.0f;
    do {
        v2 = *(float *)(p1 + 0);
        if (v1 != v2) {
            if (v2 < v1) {
                *(float *)(p1 + 0) = (v2 + *(float *)(p2 + 0));
            } else {
                *(float *)(p1 + 0) = (v2 - *(float *)(p2 + 0));
            }
            if ((*(float *)(p1 + 0) * v2) < v1) {
                *(float *)(p1 + 0) = v1;
            }
        }
        v0 = (v0 + 1);
        p1 = (p1 + 4);
        p2 = (p2 + 4);
    } while ((v0 <= 2));
}
