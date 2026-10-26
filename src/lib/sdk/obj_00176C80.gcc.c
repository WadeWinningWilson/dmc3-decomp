// cc: ee-gcc2.96 -O2 -G0
void func_0018CF18();

void func_00176C80(p0, p1) int p0; int p1; {
    func_0018CF18(*(int *)((char *)p0 + 64), 95);
    func_0018CF18(*(int *)((char *)p0 + 64), 95, p1);
}

void func_00180560();

void func_00176CC8(p0) char *p0; {
    func_00180560(*(int *)(p0 + 64));
}

void func_0018D168();

int func_00176D20() {
    char stk[0x10] __attribute__((aligned(16)));
    func_0018D168(0, 61, (stk + 0));
    return *(int *)((stk + 0) + 0);
}

void func_00176D70();

void func_00192D50();

void func_00192E78();

void func_00176D48() {
    func_00192D50();
    func_00192E78((char *)func_00176D70, 0);
}

void func_001798E8();

void func_00176D70(p0, p1) int p0; int p1; {
    func_001798E8(p1);
}

void func_00192E20();

void func_00176D88() {
    func_00192E20();
}
