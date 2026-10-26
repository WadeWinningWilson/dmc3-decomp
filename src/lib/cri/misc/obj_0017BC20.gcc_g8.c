// cc: ee-gcc2.96 -O2 -G8
int func_0014E880();

void func_001500D0();

int func_0017BE48();

int func_0018B530();

int func_0017BDD8(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    int tmp4;
    int tmp5;
    v0 = (char *)p0;
    tmp0 = func_0018B530();
    if (tmp0 != 1) {
        tmp4 = func_0014E880(*(int *)(v0 + 12), *(int *)(v0 + 24), *(int *)(v0 + 20));
        v1 = tmp4;
    } else {
        tmp5 = func_0017BE48();
        v1 = tmp5;
    }
    v2 = 0;
    if (v1 != 0) {
        func_001500D0(v1, 0);
        v2 = v1;
    }
    return v2;
}

extern char D_0053EE30[];

int func_0014F258();

void func_0014F4C8();

void func_0018FBD0();

int func_00194FD8();

int func_00195148();

int func_0017BF58(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    char stk[0x40] __attribute__((aligned(16)));
    int tmp0;
    int tmp1;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp6;
    tmp0 = func_0014F258(p1);
    *(int *)D_0053EE30 = tmp0;
    func_0014F4C8(p1, ((stk + 0) + 48), ((stk + 0) + 52));
    tmp1 = *(int *)((stk + 0) + 48);
    *(long *)((stk + 0) + 8) = *(int *)((stk + 0) + 52);
    *(long *)((stk + 0) + 0) = tmp1;
    tmp3 = func_00194FD8();
    *(long *)((stk + 0) + 16) = tmp3;
    tmp4 = func_00195148();
    *(long *)((stk + 0) + 24) = tmp4;
    func_0018FBD0(p0, (stk + 0), ((stk + 0) + 16), ((stk + 0) + 32));
    tmp5 = *(int *)((stk + 0) + 32);
    tmp6 = *(int *)((stk + 0) + 40);
    *(int *)((char *)p2 + 0) = *(int *)((stk + 0) + 32);
    *(int *)((char *)p3 + 0) = tmp6;
    return tmp5;
}

void func_0014EC60();

int func_0017C0D8() {
    func_0014EC60();
    return 0;
}

void func_00150378();

void func_0018FB68();

void func_0017C2E0(p0, p1, p2) int p0; int p1; int p2; {
    func_00150378(p0, p2);
    func_0018FB68(p1, p2);
}
