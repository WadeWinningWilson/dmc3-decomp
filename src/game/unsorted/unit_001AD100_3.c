void func_001AD4B0();

void func_001AD960();

int func_001ADDC0();

int func_001AD430(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = (int)p0;
    if (*(int *)(p0 + 0) != 0) {
        v2 = 0;
        do {
            func_001AD4B0(v0, v2, 0);
            func_001AD960(v0, v2, 0);
            v1 = func_001ADDC0(v0, v2, 0);
            v2 = (v2 + 1);
        } while ((v2 < 2));
    }
    return v1;
}
