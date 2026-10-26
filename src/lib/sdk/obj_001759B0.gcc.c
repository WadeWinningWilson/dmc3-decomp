// cc: ee-gcc2.96 -O2 -G0
extern char D_00596518[];

int func_001738D0();

int func_00175A68();

int func_00175E88();

void func_001798E8();

int func_00175A00(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = p0;
    tmp0 = func_00175E88();
    v1 = v0;
    if (tmp0 == 0) {
        func_001798E8(D_00596518);
        v2 = 0;
    } else {
        tmp1 = func_00175A68(v1);
        tmp2 = func_001738D0(v0);
        v2 = (tmp1 + tmp2);
    }
    return v2;
}

extern char D_00596548[];

int func_00175970();

void func_0018D2F0();

int func_00175A68(p0) int p0; {
    char stk[0xa0] __attribute__((aligned(16)));
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    tmp0 = func_00175E88();
    v0 = p0;
    if (tmp0 == 0) {
        func_001798E8(D_00596548);
        v1 = 0;
    } else {
        tmp1 = func_00175970(v0);
        func_0018D2F0(tmp1, (stk + 0));
        v1 = (*(int *)((stk + 0) + 4) - *(int *)((stk + 0) + 16));
    }
    return v1;
}

void func_00175AF8();

void func_00175AC8(p0, p1) int p0; int p1; {
    func_00175AF8(p0, p1, 3);
}

void func_00175AE0(p0, p1) int p0; int p1; {
    func_00175AF8(p0, p1, 4);
}
