// cc: ee-gcc2.96 -O2 -G8
extern char D_005968A8[];

void func_001753C0();

int func_00175E88();

void func_001791E8();

void func_001798E8();

void func_001763F8(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v3;
    int v1;
    int v0;
    int v2;
    int tmp0;
    v0 = p0;
    v1 = p1;
    tmp0 = func_00175E88();
    v2 = v0;
    v3 = v1;
    if (tmp0 == 0) {
        func_001798E8(D_005968A8);
        return;
    } else {
        func_001753C0(v2, v3);
        func_001791E8((v0 + 660), v1);
        return;
    }
}
