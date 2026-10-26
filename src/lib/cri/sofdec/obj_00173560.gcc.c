// cc: ee-gcc2.96 -O2 -G0
extern char D_00595CD8[];

int func_00175970();

int func_00175E88();

void func_001798E8();

void func_00187F08();

int func_001737A8(p0) int p0; {
    int v0;
    int tmp0;
    int tmp1;
    tmp0 = func_00175E88();
    v0 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00595CD8);
        return 0;
    } else {
        tmp1 = func_00175970(v0);
        func_00187F08(tmp1);
        return;
    }
}
