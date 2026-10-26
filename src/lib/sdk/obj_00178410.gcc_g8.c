// cc: ee-gcc2.96 -O2 -G8
extern char D_00597090[];

int func_00175E88();

int func_00176DD8();

void func_001798E8();

void func_00193458();

int func_00178410(p0) int p0; {
    int v0;
    int tmp0;
    int tmp1;
    tmp0 = func_00175E88();
    v0 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00597090);
        return 0;
    } else {
        tmp1 = func_00176DD8(v0);
        func_00193458(tmp1);
        return;
    }
}
