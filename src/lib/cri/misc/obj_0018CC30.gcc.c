// cc: ee-gcc2.96 -O2 -G0
void func_00180180();

int func_001803A0();

int func_0018CCA0(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    char *v5;
    v0 = (char *)p0;
    v1 = p1;
    v2 = func_001803A0();
    v3 = 0xff000000;
    v4 = 0;
    if (v2 != 0) {
        func_00180180(v4, (v3 | 348));
        return;
    } else {
        v5 = *(char **)(v0 + 13864);
        if (v5 != 0) {
            *(int *)(v5 + 3540) = v1;
        }
        return v2;
    }
}
