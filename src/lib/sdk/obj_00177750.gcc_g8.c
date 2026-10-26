// cc: ee-gcc2.96 -O2 -G8
extern char D_00596E40[];

int func_00175E88();

int func_00176DD8();

void func_001798E8();

void func_00193338();

void func_00177750(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p1;
    tmp0 = func_00175E88();
    v1 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00596E40);
        return;
    } else {
        tmp1 = func_00176DD8(v1);
        func_00193338(tmp1, v0);
        return;
    }
}

extern char D_00596E78[];

void func_00193340();

int func_001777B8(p0) int p0; {
    int v0;
    int tmp0;
    int tmp1;
    tmp0 = func_00175E88();
    v0 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00596E78);
        return 0;
    } else {
        tmp1 = func_00176DD8(v0);
        func_00193340(tmp1);
        return;
    }
}
