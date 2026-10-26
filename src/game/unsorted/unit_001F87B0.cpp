extern "C" unsigned char func_001F9A70(float **b, float *p, float r) {
    return p[0] >= (*b)[2] - r && p[1] >= (*b)[3] - r && p[2] >= (*b)[4] - r && p[0] <= (*b)[5] + r && p[1] <= (*b)[6] + r && p[2] <= (*b)[7] + r;
}
