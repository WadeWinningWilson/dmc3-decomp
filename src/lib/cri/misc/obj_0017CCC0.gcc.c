// cc: ee-gcc2.96 -O2 -G0
int func_0015F280();

void func_00180180();

int func_0017CCC0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int tmp0;
    v0 = p1;
    v1 = (char *)p0;
    v2 = (p2 - p3);
    v3 = p3;
    v4 = 0;
    v5 = 0xff00040c;
    *(int *)(v1 + 0) = 0;
    *(int *)(v1 + 8) = v0;
    *(int *)(v1 + 12) = v2;
    if (v2 <= 0) {
        func_00180180(v4, v5, v3);
        return;
    } else {
        *(int *)(v1 + 16) = p3;
        *(int *)(v1 + 20) = 0;
        tmp0 = func_0015F280(v0, v2, v3);
        v6 = 0;
        *(int *)(v1 + 4) = tmp0;
        v7 = 0xff00040a;
        if (tmp0 == 0) {
            func_00180180(v6, v7);
            return;
        } else {
            return 0;
        }
    }
}

void func_0017CD98();

void func_0017CD58(p0) int p0; {
    func_0017CD98(p0, 0);
    func_0017CD98(p0, 1);
    func_0017CD98(p0, 2);
}
