// cc: ee-gcc2.96 -O2 -G8
void func_00158448();

int func_001585C8();

int func_0014E520(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int tmp3;
    v0 = (char *)p0;
    v1 = 0;
    v2 = p1;
    v3 = 0;
    v4 = p2;
    v5 = 0;
    if (v0 != 0) {
        tmp3 = func_001585C8(v2, v4, *(int *)(v0 + 8), *(int *)(v0 + 12), *(int *)(v0 + 4));
        v1 = tmp3;
    } else {
        func_00158448(p0, v3, v5, 0);
    }
    return v1;
}
