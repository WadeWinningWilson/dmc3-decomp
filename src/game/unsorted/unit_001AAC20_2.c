void func_00104C00();

void func_001AC9C0(int p0) {
    func_00104C00((p0 + 320), (p0 + 64), (p0 + 256));
    func_00104C00((p0 + 384), (p0 + 128), (p0 + 256));
}

int func_001AC900();

int func_001AC980(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_001AC900(p0, (p1 + 48));
    *(int *)((char *)p0 + 572) = p1;
    return tmp0;
}
