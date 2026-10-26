void func_001B4250(int a, int b, int c, int d) {
    void func_001B4260(int, int, int, int, int, int, float);
    func_001B4260(a, b, c, d, 0, 0, 0.0f);
}

int func_001B16B0();

int func_001B1A10();

int func_001B2780();

int func_001B1630(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_001B16B0(p0, v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        break;
    case 1:
        v2 = func_001B1A10(p0, v0);
        break;
    case 2:
        v2 = func_001B2780(p0, v0);
        break;
    }
    return v2;
}
