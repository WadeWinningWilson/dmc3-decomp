void func_001EBC40(p0, p1) char *p0; int p1; {
    int v0;
    *(float *)(p0 + 0) = (float)(unsigned int)*(unsigned char *)(*(char **)(p0 + 8) + 2);
    v0 = (p1 & 255);
    if ((*(unsigned char *)(*(char **)(p0 + 8) + 3) + 1) >= v0) {
        *(short *)(p0 + 4) = v0;
    } else {
        *(short *)(p0 + 4) = 0;
    }
}
