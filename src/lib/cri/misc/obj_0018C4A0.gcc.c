// cc: ee-gcc2.96 -O2 -G0
int func_0018F9B0();

int func_0018C708(p0) int p0; {
    int tmp0;
    tmp0 = func_0018F9B0(p0, 1);
    return (tmp0 != 0);
}

void func_00180180();

int func_001803A0();

void func_0018C798();

int func_0018C728(p0, p1) int p0; int p1; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p1;
    v1 = (char *)p0;
    *(int *)(v0 + 0) = 0;
    tmp0 = func_001803A0();
    v2 = 0xff000000;
    v3 = 0;
    if (tmp0 != 0) {
        func_00180180(v3, (v2 | 341));
        return;
    } else {
        func_0018C798(*(int *)(v1 + 13864), v0);
        return 0;
    }
}

void func_0018C8F8(p0, p1, p2, p3) int p0; int p1; int p2; char *p3; {
    *(int *)(p3 + 0) = 0;
}
