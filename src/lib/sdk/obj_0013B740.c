void func_00138830();

char *func_0013B800();

int func_0013B740(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    char *v2;
    int v3;
    v0 = p0;
    v1 = p1;
    v2 = func_0013B800(20);
    if (v2 == 0) {
        v3 = 0;
    } else {
        *(int *)(v2 + 0) = 0x30000000;
        *(int *)(v2 + 4) = 0;
        *(int *)(v2 + 12) = v0;
        func_00138830(v1, 0, v2);
        v3 = 1;
    }
    return v3;
}
