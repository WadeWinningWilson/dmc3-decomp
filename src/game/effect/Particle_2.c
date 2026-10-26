extern char D_005A7030[];

extern char D_005A7120[];

int func_001B5210();

int func_001B51D0(p0) int p0; {
    func_001B5210();
    *(char **)((char *)p0 + 0) = D_005A7030;
    *(char **)((char *)p0 + 0) = D_005A7120;
    return p0;
}
