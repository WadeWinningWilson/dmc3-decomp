// cc: ee-gcc2.96 -O2 -G0
int func_00172BE0();

int func_00172C70(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    v0 = p0;
    v4 = (char *)(v0 + 656);
    v3 = 31;
    do {
        v1 = *(int *)(v4 + 0);
        if (v1 != 0) {
            v2 = func_00172BE0(v0, v1);
            *(int *)(v4 + 0) = 0;
        }
        v3 = (v3 + -1);
        v4 = (v4 + -4);
    } while (v3 >= 0);
    return v2;
}
