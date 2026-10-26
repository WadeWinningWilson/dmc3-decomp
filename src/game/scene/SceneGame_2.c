int func_0022CB30();

int func_0022CB50(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_0022CB30();
    *(int *)((char *)p0 + 0) = p1;
    *(int *)((char *)p0 + 4) = p1;
    *(char *)((char *)p0 + 8) = 0;
    return tmp0;
}

unsigned char func_0022CBA0(char *p) { return *(unsigned char *)(p + 8); }

void func_0022CBC0();

void func_0022CBB0(int p0, int p1) {
    func_0022CBC0(p0, p1, 0);
}
