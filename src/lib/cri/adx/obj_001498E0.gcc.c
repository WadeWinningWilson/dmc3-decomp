// cc: ee-gcc2.96 -O2 -G0
void func_00128488();

void func_00141400();

void func_001431D8();

void func_001431F0();

void func_001498E0(p0) int p0; {
    char *v0;
    int v1;
    v0 = (char *)p0;
    if (v0 != 0) {
        v1 = *(int *)(v0 + 4);
        if (*(int *)(v0 + 4) != 0) {
            *(int *)(v0 + 4) = 0;
            func_00141400(v1);
        }
        func_001431D8();
        func_00128488(v0, 0, 168);
        func_001431F0();
        return;
    } else {
        return;
    }
}

int func_00149940(p0) char *p0; {
    return *(signed char *)(p0 + 1);
}

void func_0013F870();

void func_0013FA58();

void func_00149948(p0, p1) int p0; int p1; {
    *(int *)((char *)p0 + 8) = p1;
    func_0013FA58(*(int *)((char *)p0 + 4));
    func_0013F870(*(int *)((char *)p0 + 4), p1);
}

void func_00149988(p0, p1, p2) char *p0; int p1; int p2; {
    p1 = (p1 << 2);
    p0 = (p0 + p1);
    *(int *)(p0 + 12) = p2;
}

void func_0013F8A0();

void func_0013FA88();

void func_00149998(p0, p1) int p0; int p1; {
    *(int *)((char *)p0 + 56) = p1;
    func_0013FA88(*(int *)((char *)p0 + 4));
    func_0013F8A0(*(int *)((char *)p0 + 4), p1);
}

void func_0013F8C0();

void func_0013FB18();

void func_001499D8(p0) int p0; {
    func_0013FB18(*(int *)((char *)p0 + 4));
    func_0013F8C0(*(int *)((char *)p0 + 4));
}

void func_00149720();

void func_00149A08(p0) int p0; {
    func_00149720();
    *(char *)((char *)p0 + 1) = 1;
}

int func_00141D70();

int func_00149A38(p0) int p0; {
    int tmp1;
    tmp1 = func_00141D70(*(int *)((char *)p0 + 4));
    *(char *)((char *)p0 + 1) = 0;
    return tmp1;
}
