// cc: ee-gcc2.96 -O2 -G0
void func_0017D290();

void func_00180180();

int func_001803A0();

void func_00190910();

int func_001905C0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int tmp0;
    v0 = p0;
    v1 = p2;
    v2 = p3;
    v3 = p1;
    v4 = (char *)(v0 + 8520);
    tmp0 = func_001803A0();
    v5 = 0;
    v6 = 0xff000191;
    v7 = 8;
    if (tmp0 != 0) {
        func_00180180(v5, v6);
        return;
    } else {
        v8 = *(int *)(v4 + 16);
        v9 = *(int *)(v4 + 8);
        if (v8 == v7) {
            func_00180180(v0, 0xff000602);
            return;
        } else {
            func_00190910(((v9 + (v3 << 4)) + 4), v1, v2, 0, 0);
            func_0017D290(v0, v8, v3, ((v9 + (v3 << 4)) + 4));
            return 0;
        }
    }
}

int func_001906D0() {
    return 0;
}

int func_001906D8() {
    return 0;
}

void func_00190728();

void func_001907B0();

int func_00190838();

int func_001906E0(p0) int p0; {
    int tmp0;
    func_00190728();
    tmp0 = func_00190838(p0);
    func_001907B0(p0);
    return tmp0;
}

int func_001907A8() {
    return 1;
}
