void func_00100580(char *);

extern char D_005AC460[];

char *func_0031E3B0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005AC460;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_0031E390(char *p0) {
    *(char **)(p0 + 0) = D_005AC460;
    return p0;
}
