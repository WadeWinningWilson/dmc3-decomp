// cc: ee-gcc2.96 -O2 -G8
void func_00193428();

void func_00177510(p0) char *p0; {
    func_00193428(*(int *)(p0 + 172));
}

extern char D_00596D58[];

int func_00175E88();

int func_00176DD8();

void func_001798E8();

void func_001931D0();

void func_00177540(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    v0 = p1;
    v1 = p2;
    tmp0 = func_00175E88();
    v2 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00596D58);
        return;
    } else {
        tmp1 = func_00176DD8(v2);
        func_001931D0(tmp1, v0, v1);
        return;
    }
}
