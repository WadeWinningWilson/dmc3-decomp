// cc: ee-gcc2.96 -O2 -G0
void func_00177A30();

void func_00177BE0();

void func_00177990(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v2;
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = *(int *)(v0 + 400);
    v2 = (v0 + 424);
    if (v1 != 0) {
        v2 = *(char **)(v2 + 0);
        v1 = 1;
        if ((int)v2 != v1) {
            func_00177A30();
            func_00177BE0(v0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

void func_001779E8(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    v1 = *(int *)(v0 + 400);
    if (v1 == 0) {
        return;
    } else {
        func_00177A30();
        func_00177BE0(v0);
        return;
    }
}
