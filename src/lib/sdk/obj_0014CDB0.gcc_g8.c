// cc: ee-gcc2.96 -O2 -G8
int func_0014B470();

void func_0014B510();

int func_0014CDD0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int tmp1;
    int tmp2;
    int tmp4;
    v0 = (char *)p0;
    *(int *)(v0 + 68) = p1;
    v1 = *(int *)(v0 + 128);
    if (*(int *)(v0 + 128) != 0) {
        func_0014B510(v1);
    }
    tmp1 = func_0014B470(*(int *)(v0 + 68));
    tmp2 = *(int *)(v0 + 132);
    *(int *)(v0 + 128) = tmp1;
    v2 = tmp2;
    if (tmp2 != 0) {
        func_0014B510(v2);
    }
    tmp4 = func_0014B470(*(int *)(v0 + 68));
    *(int *)(v0 + 132) = tmp4;
    return tmp4;
}
