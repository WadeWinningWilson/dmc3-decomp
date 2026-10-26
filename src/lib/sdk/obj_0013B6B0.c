void func_00138830();

char *func_0013B800();

int func_0013C740();

int func_0013B6B0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    v0 = p1;
    v1 = p3;
    tmp0 = func_0013C740();
    if (tmp0 == 0) {
        v2 = 0;
    } else {
        v3 = func_0013B800(20);
        if (v3 == 0) {
            v2 = 0;
        } else {
            *(int *)(v3 + 0) = 0x30000000;
            *(int *)(v3 + 4) = 0;
            *(int *)(v3 + 12) = v0;
            func_00138830(v1, 0, v3);
            v2 = 1;
        }
    }
    return v2;
}
