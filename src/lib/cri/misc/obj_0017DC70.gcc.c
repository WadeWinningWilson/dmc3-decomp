// cc: ee-gcc2.96 -O2 -G0
int func_0017DF10() {
    return 0;
}

int func_0018F900();

int func_0017DF80(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    char *v1;
    int v2;
    char *v3;
    int v4;
    int tmp1;
    v1 = (char *)p0;
    v2 = 0;
    v3 = (v1 + 4872);
    v4 = p2;
    v3 = (v3 + (p1 * 116));
    v0 = 12;
    if (*(int *)(v3 + 4) == 0) {
        tmp1 = func_0018F900(p0, *(int *)(v3 + 76), v0, v4, 0);
        v2 = tmp1;
    }
    *(int *)(v1 + 68) = 1;
    return v2;
}
