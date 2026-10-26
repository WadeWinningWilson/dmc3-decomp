// cc: ee-gcc2.96 -O2 -G0
void func_00183110(p0) int p0; {
    char *v0;
    int tmp0;
    v0 = (char *)(p0 + 3648);
    tmp0 = 0x7fffffff;
    if (*(int *)(v0 + 36) != tmp0) {
        *(int *)(v0 + 0) = 1;
    }
}

void func_0017E030();

void func_001831E0(p0, p1) char *p0; int p1; {
    func_0017E030(p0, *(int *)(p0 + 8132), p1);
}
