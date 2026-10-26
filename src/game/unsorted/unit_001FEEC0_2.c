float func_001FF0F0(char *a, int b) {
    int func_001FEFB0(char *, int);
    char *o = (char *)func_001FEFB0(a, b);
    if (o == 0) {
        return -1.0f;
    }
    return (float)*(int *)(o + 0x68);
}

int func_001B3930();

int func_001FF000();

int func_001FF040(p0, p1, p2) int p0; int p1; int p2; {
    int func_001FEFB0();
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp0;
    int tmp1;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    tmp0 = func_001FEFB0(p0, v2);
    if (tmp0 != 0) {
        v5 = 1;
    } else {
        tmp1 = func_001FF000(v0);
        v3 = tmp1;
        if (v3 == -1) {
            v5 = 0;
        } else {
            v4 = func_001B3930(v1);
            if (v4 == 0) {
                v5 = 0;
            } else {
                *(short *)((char *)(v0 + (v3 << 3)) + 0) = v2;
                *(int *)((char *)(v0 + (v3 << 3)) + 4) = v4;
                v5 = 1;
            }
        }
    }
    return v5;
}
