extern char D_005A6FE0[];

extern char D_005A70D0[];

int func_001B5210();

int func_001B5F70(p0) int p0; {
    func_001B5210();
    *(char **)((char *)p0 + 0) = D_005A6FE0;
    *(char **)((char *)p0 + 0) = D_005A70D0;
    return p0;
}
