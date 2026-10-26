// cc: ee-gcc2.96 -O2 -G0
void func_0017D080();

void func_00180180();

int func_001803A0();

void func_0018BC38(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    v1 = p1;
    tmp0 = func_001803A0();
    v2 = 0xff000000;
    v3 = 0;
    if (tmp0 != 0) {
        func_00180180(v3, (v2 | 313));
        return;
    } else {
        func_0017D080(v0, v1);
        return;
    }
}
