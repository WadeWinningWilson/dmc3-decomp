// cc: ee-gcc2.96 -O2 -G0
void func_0016E3C0(p0, p1, p2) char *p0; int p1; int p2; {
    p0 = (p0 + 1000);
    *(int *)(p0 + 0) = p1;
    *(int *)(p0 + 4) = p2;
    *(int *)(p0 + 8) = 0;
}

int func_0016E3D8(p0, p1, p2) int p0; char *p1; char *p2; {
    char *v0;
    int v1;
    v0 = (char *)(p0 + 1000);
    if (p1 != 0) {
        v1 = *(int *)(v0 + 0);
        *(int *)(p1 + 0) = v1;
    }
    if (p2 != 0) {
        v1 = *(int *)(v0 + 8);
        *(int *)(p2 + 0) = v1;
    }
    return v1;
}
