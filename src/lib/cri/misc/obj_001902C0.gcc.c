// cc: ee-gcc2.96 -O2 -G0
void func_0017D290();

void func_00180180();

int func_001803A0();

void func_00190910();

int func_00190498(p0, p1, p2, p3, p4) int p0; int p1; int p2; int p3; int p4; {
    int v0;
    int v1;
    int v10;
    int v2;
    int v3;
    int v4;
    int v5;
    char *v6;
    int v7;
    int v8;
    int v9;
    int tmp0;
    v0 = p0;
    v1 = p4;
    v3 = p2;
    v4 = p3;
    v5 = p1;
    v6 = (char *)(v0 + 8520);
    tmp0 = func_001803A0();
    v7 = 0;
    v8 = 0xff000192;
    v2 = 8;
    if (tmp0 != 0) {
        func_00180180(v7, v8);
        return;
    } else {
        v9 = *(int *)(v6 + 16);
        v10 = *(int *)(v6 + 8);
        if (v9 == v2) {
            func_00180180(v0, 0xff000602);
            return;
        } else {
            func_00190910(((v10 + (v5 << 4)) + 4), v3, 0, v4, v1);
            func_0017D290(v0, v9, v5, ((v10 + (v5 << 4)) + 4));
            return 0;
        }
    }
}
