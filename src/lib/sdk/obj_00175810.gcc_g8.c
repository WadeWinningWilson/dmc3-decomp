// cc: ee-gcc2.96 -O2 -G8
int func_00104490();

int func_00104A60();

int func_00175810() {
    int v0;
    int v1;
    int v2;
    int tmp0;
    tmp0 = func_00104490();
    v0 = tmp0;
    v2 = v0;
    do {
        v1 = func_00104A60(v2, 1, 30);
        v2 = v0;
    } while (v1 != 0);
    return v1;
}

void func_00175858(p0, p1) int p0; int p1; {
    int tmp0;
    int tmp1;
    tmp0 = func_00104490();
    tmp1 = func_00104A60(tmp0, 1, 30);
    *(int *)((char *)p1 + 0) = tmp1;
}
