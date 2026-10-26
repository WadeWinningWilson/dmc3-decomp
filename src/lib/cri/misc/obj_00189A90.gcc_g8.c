// cc: ee-gcc2.96 -O2 -G8
void func_00180180();

int func_001803A0();

void func_00189B00();

void func_00189AB8(p0) int p0; {
    int v0;
    int v1;
    int tmp0;
    tmp0 = func_001803A0();
    v0 = 0xff000000;
    v1 = p0;
    v0 = (v0 | 323);
    if (tmp0 != 0) {
        func_00180180(0);
        return;
    } else {
        func_00189B00(v1, v0);
        return;
    }
}
