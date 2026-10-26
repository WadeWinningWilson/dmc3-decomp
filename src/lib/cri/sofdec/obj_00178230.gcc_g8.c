// cc: ee-gcc2.96 -O2 -G8
void func_00193150();

void func_00178230() {
    func_00193150();
}

extern char D_00596FF8[];

int func_00175E88();

int func_00176DD8();

void func_001798E8();

void func_001935C0();

void func_00178248(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p1;
    tmp0 = func_00175E88();
    v1 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00596FF8);
        return;
    } else {
        tmp1 = func_00176DD8(v1);
        func_001935C0(tmp1, v0);
        return;
    }
}
