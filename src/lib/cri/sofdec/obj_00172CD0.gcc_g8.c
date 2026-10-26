// cc: ee-gcc2.96 -O2 -G8
extern char D_00595BA0[];

void func_00172DA0();

int func_00175E88();

void func_001798E8();

int func_00172D50(p0) int p0; {
    int v0;
    int tmp0;
    tmp0 = func_00175E88();
    v0 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00595BA0);
        return 0;
    } else {
        func_00172DA0(v0);
        return;
    }
}
