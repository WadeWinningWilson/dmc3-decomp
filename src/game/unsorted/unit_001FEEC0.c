typedef struct { short k; short pad; int v; } KLEnt;

int func_001FEFB0(KLEnt *t, short k) {
    int i;
    for (i = 0; i < 500; i++) {
        if (t[i].k == k) {
            return t[i].v;
        }
    }
    return 0;
}

int func_001FEF10(p0) int p0; {
    int v0;
    char *v1;
    v0 = 0;
    v1 = (char *)p0;
    do {
        *(short *)(v1 + 0) = -1;
        *(int *)(v1 + 4) = 0;
        v0 = (v0 + 8);
        *(short *)(v1 + 8) = -1;
        *(int *)(v1 + 12) = 0;
        *(short *)(v1 + 16) = -1;
        *(int *)(v1 + 20) = 0;
        *(short *)(v1 + 24) = -1;
        *(int *)(v1 + 28) = 0;
        *(short *)(v1 + 32) = -1;
        *(int *)(v1 + 36) = 0;
        *(short *)(v1 + 40) = -1;
        *(int *)(v1 + 44) = 0;
        *(short *)(v1 + 48) = -1;
        *(int *)(v1 + 52) = 0;
        *(short *)(v1 + 56) = -1;
        *(int *)(v1 + 60) = 0;
        v1 = (v1 + 64);
    } while ((v0 < 492));
    *(short *)((char *)(p0 + (v0 << 3)) + 0) = -1;
    *(int *)((char *)(p0 + (v0 << 3)) + 4) = 0;
    *(short *)((char *)(p0 + (v0 << 3)) + 8) = -1;
    *(int *)((char *)(p0 + (v0 << 3)) + 12) = 0;
    *(short *)((char *)(p0 + (v0 << 3)) + 16) = -1;
    *(int *)((char *)(p0 + (v0 << 3)) + 20) = 0;
    *(short *)((char *)(p0 + (v0 << 3)) + 24) = -1;
    *(int *)((char *)(p0 + (v0 << 3)) + 28) = 0;
    return 1;
}

int func_001FF000(p0) char *p0; {
    int v0;
    int v1;
    v0 = 0;
    v1 = -1;
    do {
        if (*(short *)(p0 + 0) == v1) {
            return v0;
        }
        v0 = (v0 + 1);
        p0 = (p0 + 8);
    } while ((v0 < 500));
    v0 = v1;
    return v0;
}

void func_001FEFA0(void) {}
