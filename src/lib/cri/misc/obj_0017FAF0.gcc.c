// cc: ee-gcc2.96 -O2 -G0
int func_0017FE88();

void func_00191BC8();

void func_00191C38();

void func_00191CB8();

void func_00191D28();

void func_0017FC20(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    char *v2;
    int v3;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = p1;
    v1 = p0;
    v2 = (char *)p2;
    if (v0 != 0) {
        tmp0 = func_0017FE88(p0, p1, (char *)func_00191BC8);
        *(int *)(v2 + 0) = tmp0;
        tmp1 = func_0017FE88(v1, v0, (char *)func_00191C38);
        *(int *)(v2 + 4) = tmp1;
        tmp2 = func_0017FE88(v1, v0, (char *)func_00191CB8);
        *(int *)(v2 + 8) = tmp2;
        v3 = func_0017FE88(v1, v0, (char *)func_00191D28);
        *(int *)(v2 + 12) = v3;
    }
}

int func_0017FEE8() {
    return 2;
}

int func_0017FE50();

void func_00191778();

void func_001917C8();

void func_00191818();

void func_00191868();

void func_00191920();

void func_00191970();

void func_001919C0();

void func_0017FAF0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp6;
    tmp0 = func_0017FE50(p0, (char *)func_00191778);
    *(int *)((char *)p1 + 0) = tmp0;
    tmp1 = func_0017FE50(p0, (char *)func_001917C8);
    *(int *)((char *)p1 + 4) = tmp1;
    tmp2 = func_0017FE50(p0, (char *)func_00191818);
    *(int *)((char *)p1 + 8) = tmp2;
    tmp3 = func_0017FE50(p0, (char *)func_00191868);
    *(int *)((char *)p1 + 12) = tmp3;
    tmp4 = func_0017FE50(p0, (char *)func_00191920);
    *(int *)((char *)p1 + 16) = tmp4;
    tmp5 = func_0017FE50(p0, (char *)func_00191970);
    *(int *)((char *)p1 + 20) = tmp5;
    tmp6 = func_0017FE50(p0, (char *)func_001919C0);
    *(int *)((char *)p1 + 24) = tmp6;
}
