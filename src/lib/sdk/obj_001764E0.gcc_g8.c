// cc: ee-gcc2.96 -O2 -G8
extern char D_00596938[];

void func_00175408();

int func_00175E88();

void func_001798E8();

int func_00176550(p0, p1) int p0; int p1; {
    int v1;
    int v0;
    int tmp0;
    tmp0 = func_00175E88();
    v0 = p0;
    v1 = p1;
    if (tmp0 == 0) {
        func_001798E8(D_00596938);
        return 0;
    } else {
        func_00175408(v0, v1);
        return;
    }
}
