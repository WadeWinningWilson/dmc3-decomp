// cc: ee-gcc2.96 -O2 -G8
extern char D_00596D98[];

int func_00175E88();

int func_00176DD8();

void func_001798E8();

void func_001931C0();

void func_001931E8();

void func_001775F0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    v0 = p1;
    v1 = p2;
    v2 = p3;
    tmp0 = func_00175E88();
    v3 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00596D98);
        return;
    } else {
        tmp1 = func_00176DD8(v3);
        func_001931C0(tmp1, v0, v1);
        func_001931E8(tmp1, v2);
        return;
    }
}

extern char D_00596DD0[];

void func_00193328();

void func_00177688(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p1;
    tmp0 = func_00175E88();
    v1 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00596DD0);
        return;
    } else {
        tmp1 = func_00176DD8(v1);
        func_00193328(tmp1, v0);
        return;
    }
}
