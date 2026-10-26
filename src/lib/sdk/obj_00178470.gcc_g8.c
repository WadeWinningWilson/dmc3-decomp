// cc: ee-gcc2.96 -O2 -G8
extern char D_00597220[];

int func_00175E88();

void func_001785D8();

void func_00178730();

void func_001798E8();

void func_001786D8(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p0;
    tmp0 = func_00175E88();
    v1 = v0;
    v2 = 0;
    if (tmp0 == 0) {
        func_001798E8(D_00597220, v2);
        return;
    } else {
        func_001785D8(v1, v2);
        func_00178730(v0);
        return;
    }
}
