// cc: ee-gcc2.96 -O2 -G0
int func_00193598(p0, p1, p2) char *p0; int p1; int p2; {
    int tmp0;
    int tmp1;
    int tmp2;
    tmp0 = (p1 * *(int *)(p0 + 4));
    tmp1 = (*(int *)(p0 + 8) - p1);
    tmp2 = *(int *)(p0 + 0);
    *(int *)(p0 + 8) = (*(int *)(p0 + 8) - p1);
    *(int *)(p0 + 0) = ((tmp2 + tmp0) + p2);
    return tmp1;
}

void func_001623A8();

void func_00193250();

void func_001933C8();

void func_001935C0(p0, p1) int p0; int p1; {
    func_001623A8(p1);
    func_00193250(p0, 0);
    func_001933C8(p0, 0, ((unsigned int)(p1 & 255) >> 1), (p1 & 255));
}

void func_001623D0();

void func_00193618() {
    func_001623D0();
}
