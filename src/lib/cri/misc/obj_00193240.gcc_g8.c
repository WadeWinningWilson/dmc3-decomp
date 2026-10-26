// cc: ee-gcc2.96 -O2 -G8
int func_00193240(p0, p1) int p0; char *p1; {
    p1 = (char *)((int)p1 << 2);
    p1 = (p1 + p0);
    return *(int *)(p1 + 64);
}

void func_00194108();

void func_00193360(p0) char *p0; {
    func_00194108(*(int *)(p0 + 40));
}

void func_001926F8();

void func_00193250();

void func_001933C8(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    func_001926F8(*(int *)((char *)p0 + 52), (p1 & 255), (p2 & 255), (p3 & 255));
    func_00193250(p0, 0);
}
