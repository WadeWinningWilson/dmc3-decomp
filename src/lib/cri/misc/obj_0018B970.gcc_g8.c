// cc: ee-gcc2.96 -O2 -G8
void func_00180180();

int func_001803A0();

void func_0018F900();

void func_0018B970(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p0;
    tmp0 = func_001803A0();
    v1 = 0xff000000;
    v2 = p1;
    v1 = (v1 | 308);
    if (tmp0 != 0) {
        func_00180180(0, v1, 9, v2, 0);
        return;
    } else {
        func_0018F900(v0, 0);
        return;
    }
}
