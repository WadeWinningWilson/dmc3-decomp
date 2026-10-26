// cc: ee-gcc2.96 -O2 -G0
void func_00180180();

int func_001803A0();

void func_0018D510();

int func_0018D490(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p1;
    tmp0 = func_001803A0();
    v1 = p0;
    v2 = p2;
    v3 = 0xff000117;
    if (tmp0 != 0) {
        func_00180180(0, v3, v2);
        return;
    } else {
        func_0018D510(v1, v0, v2);
        return 0;
    }
}
