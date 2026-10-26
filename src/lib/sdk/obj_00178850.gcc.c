// cc: ee-gcc2.96 -O2 -G0
extern char D_00597390[];

extern char D_005973C0[];

int func_00175E88();

int func_00178778();

int func_00178AC0();

void func_00178AD8();

void func_001798E8();

int func_00178A00(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = p1;
    v1 = p0;
    tmp0 = func_00175E88();
    v2 = v1;
    if (tmp0 == 0) {
        func_001798E8(D_00597390);
        v3 = 0;
        return v3;
    } else {
        tmp1 = func_00178778(v2);
        v3 = 0;
        if ((v0 < tmp1)) {
            v4 = v0;
            if (v0 < 0) {
                func_001798E8(D_005973C0, v4);
                v3 = 0;
                return v3;
            } else {
                tmp2 = func_00178AC0(v1, v4);
                func_00178AD8(v1, tmp2);
                return;
            }
        } else {
            return v3;
        }
    }
}

void func_0015A938();

int func_00178AC0(p0) char *p0; {
    func_0015A938(*(int *)(p0 + 76));
}

void func_0015A9C8();

void func_00178AD8(p0) char *p0; {
    func_0015A9C8(*(int *)(p0 + 76));
}

void func_0015AA60();

void func_00178AF0(p0) char *p0; {
    func_0015AA60(*(int *)(p0 + 76));
}

void func_0015AAF8();

void func_00178B08(p0) char *p0; {
    func_0015AAF8(*(int *)(p0 + 76));
}

void func_0015AB90();

void func_00178B48(p0) char *p0; {
    int v0;
    int v1;
    v0 = *(int *)(p0 + 76);
    v1 = v0;
    if (v0 != 0) {
        func_0015AB90(v1);
        return;
    } else {
        return;
    }
}

int func_00178D20();

int func_00178CA8() {
    char stk[0x10] __attribute__((aligned(16)));
    int tmp0;
    tmp0 = func_00178D20((stk + 0), ((stk + 0) + 4), ((stk + 0) + 8));
    return tmp0;
}
