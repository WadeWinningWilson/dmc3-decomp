// cc: ee-gcc2.96 -O2 -G0
void func_00180180();

int func_001803A0();

int func_0018D040();

void func_0018E628();

int func_0018E340(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int tmp0;
    v0 = p0;
    v1 = p1;
    tmp0 = func_001803A0();
    v2 = 0;
    v3 = 4;
    v4 = 0xff000123;
    if (tmp0 != 0) {
        func_00180180(v2, v4, v3);
        return;
    } else {
        func_0018E628(v0, v1, v3);
        v5 = v0;
        v6 = 15;
        v7 = 4;
        if (v1 != 0) {
            func_0018D040(v5, v6, v7);
        }
        return 0;
    }
}

void func_0018DAF0();

void func_0018DFC8();

void func_0018E5A8(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    char *v1;
    int v2;
    int v3;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = (char *)p0;
    v1 = (v0 + 3368);
    func_0018DFC8(p0, (stk + 0), ((stk + 0) + 4));
    v2 = (int)v0;
    v3 = (int)v1;
    if (*(int *)(v1 + 652) == *(int *)((stk + 0) + 0)) {
        tmp0 = *(int *)((stk + 0) + 4);
        if (*(int *)(v1 + 656) != tmp0) {
            func_0018DAF0(v2, v3);
            tmp1 = *(int *)((stk + 0) + 0);
            tmp2 = *(int *)((stk + 0) + 4);
            *(int *)(v1 + 652) = *(int *)((stk + 0) + 0);
            *(int *)(v1 + 656) = tmp2;
        }
    } else {
        func_0018DAF0(v2, v3);
        tmp1 = *(int *)((stk + 0) + 0);
        tmp2 = *(int *)((stk + 0) + 4);
        *(int *)(v1 + 652) = *(int *)((stk + 0) + 0);
        *(int *)(v1 + 656) = tmp2;
    }
    *(int *)(v0 + 68) = 1;
}

void func_0018E628(p0, p1, p2) char *p0; int p1; int p2; {
    p2 = (p2 << 2);
    p0 = (p0 + p2);
    *(int *)(p0 + 3368) = p1;
}

int func_0018E6D8();

int func_0018E768(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int tmp0;
    tmp0 = func_0018E6D8(24000);
    *(int *)((char *)p3 + 0) = p0;
    return tmp0;
}

int func_0018E7A0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int tmp0;
    tmp0 = func_0018E6D8(30000);
    *(int *)((char *)p3 + 0) = p0;
    return tmp0;
}

int func_0018E7D8(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int tmp0;
    tmp0 = func_0018E6D8(0xea60);
    *(int *)((char *)p3 + 0) = p0;
    return tmp0;
}
