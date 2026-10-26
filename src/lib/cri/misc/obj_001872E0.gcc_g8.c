// cc: ee-gcc2.96 -O2 -G8
void func_00180180();

int func_00187720();

int func_00187A08();

void func_00187C30();

int func_00187650(p0, p1) int p0; int p1; {
    int v5;
    char *v2;
    int v6;
    int v3;
    int v7;
    char *v1;
    int v4;
    char *v0;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    v1 = *(char **)(v0 + 8120);
    tmp0 = func_00187720();
    v2 = (char *)tmp0;
    v3 = p1;
    v4 = (int)v0;
    if (1 != *(int *)(v2 + 0)) {
        func_00180180(v4, 0xff000f0e);
        return;
    } else {
        tmp1 = func_00187A08(v4, v3);
        v5 = *(int *)(v1 + 112);
        v6 = (int)v0;
        v7 = 0xff000f0f;
        if (v5 != tmp1) {
            func_00180180(v6, v7);
            return;
        } else {
            *(int *)(v2 + 0) = 0;
            func_00187C30(v5);
            return 0;
        }
    }
}
