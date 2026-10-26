// cc: ee-gcc2.96 -O2 -G0
void func_0016E398();

void func_00180180();

int func_001803A0();

int func_001829F0(p0, p1, p2, p3, p4) int p0; int p1; int p2; int p3; int p4; {
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp0;
    v2 = (char *)p0;
    v3 = p1;
    tmp0 = func_001803A0();
    v4 = p2;
    v5 = p3;
    v6 = p4;
    v0 = 0;
    v1 = 0xff000184;
    if (tmp0 != 0) {
        func_00180180(v0, v1, v4, v5, v6);
        return;
    } else {
        func_0016E398(*(int *)(*(char **)(v2 + 8120) + 0), v3, v4, v5, v6);
        return 0;
    }
}
