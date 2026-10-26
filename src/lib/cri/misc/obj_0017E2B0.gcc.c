// cc: ee-gcc2.96 -O2 -G0
void func_00180180();

int func_001803A0();

int func_0018D040();

int func_0017E2B0(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    tmp0 = func_001803A0();
    v0 = p0;
    v1 = 1;
    v2 = 0xff000161;
    if (tmp0 != 0) {
        func_00180180(0, v2, v1);
        return;
    } else {
        func_0018D040(v0, 49, v1);
        return 0;
    }
}
