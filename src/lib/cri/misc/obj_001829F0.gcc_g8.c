// cc: ee-gcc2.96 -O2 -G8
void func_00180180();

int func_001803A0();

void func_00182B20();

void func_00182A98(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v5;
    int v3;
    int v1;
    int v2;
    int v4;
    int v0;
    int tmp0;
    v0 = p0;
    v1 = p1;
    tmp0 = func_001803A0();
    v2 = 0;
    v3 = p2;
    v5 = 0xff000185;
    v4 = p3;
    if (tmp0 != 0) {
        func_00180180(v2, v5, v3, v4);
        return;
    } else {
        func_00182B20(v0, v1);
        return;
    }
}
