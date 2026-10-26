// cc: ee-gcc2.96 -O2 -G0
void func_00180180();

int func_001803A0();

int func_00189B00();

int func_0018D040();

void func_0018C340(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    tmp0 = func_001803A0();
    v1 = v0;
    v2 = 1;
    v3 = 0xff000153;
    if (tmp0 != 0) {
        func_00180180(0, v3, v2);
        return;
    } else {
        func_0018D040(v1, 47, v2);
        func_00189B00(v0);
        return;
    }
}
