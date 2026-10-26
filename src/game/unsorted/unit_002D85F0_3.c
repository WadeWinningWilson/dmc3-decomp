int func_002DAD40();

int func_002DACE0(p0) int p0; {
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_002DAD40();
    if ((tmp0 & 255) != 2) {
        v1 = (short)((((*(unsigned short *)(v0 + 18920) + 32767) + 1) + *(short *)(v0 + 10468)) - *(short *)(v0 + 144));
    } else {
        v1 = 0;
    }
    return v1;
}
