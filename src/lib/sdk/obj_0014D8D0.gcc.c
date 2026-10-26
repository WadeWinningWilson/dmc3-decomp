// cc: ee-gcc2.96 -O2 -G0
int func_0014D8D0(p0) char *p0; {
    int v0;
    if (*(int *)(p0 + 8) != 0) {
        return *(int *)(p0 + 88);
    }
    return 0;
}

void func_001431D8();

void func_001431F0();

void func_0014D8E8();

int func_0014D920(p0) int p0; {
    func_001431D8();
    func_0014D8E8(p0);
    *(int *)((char *)p0 + 92) = 0xfffff;
    func_001431F0();
    return 1;
}

int func_0014D960(p0, p1) int p0; int p1; {
    func_001431D8();
    func_0014D8E8(p0);
    *(int *)((char *)p0 + 92) = p1;
    func_001431F0();
    return 1;
}
