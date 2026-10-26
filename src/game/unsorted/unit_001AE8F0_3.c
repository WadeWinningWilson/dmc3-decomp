extern char D_0053FF90[];

int func_001AEAA0(int p0, int p1, int p2) {
    return (p0 + (((p2 & 65535) + *(unsigned short *)((D_0053FF90 + ((p1 & 255) << 1)) + 0)) << 5));
}

char *func_001AEAD0();

int func_001AEF60();

void func_001AF080();

int func_001AF3F0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int v0;
    int v1;
    char *tmp0;
    int tmp1;
    tmp0 = func_001AEAD0(p0, 5);
    v1 = (int)tmp0;
    *(short *)(tmp0 + 2) = 0;
    tmp1 = func_001AEF60(p0, v1, p1, p3, p2);
    v0 = p0;
    if ((tmp1 & 255) == 0) {
        func_001AF080(v0, v1);
        v1 = 0;
    }
    return v1;
}
