// cc: ee-gcc2.96 -O2 -G0
int func_00172B70(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)(p0 + 512);
    v1 = (*(int *)(v0 + 12) + p1);
    v2 = 0;
    if (!((unsigned int)*(int *)(v0 + 4) < (unsigned int)v1)) {
        v2 = *(int *)(v0 + 8);
        *(int *)(v0 + 12) = v1;
        *(int *)(v0 + 8) = (v2 + p1);
    }
    return v2;
}
