void func_00100580(char *);

extern char D_005AC310[];

char *func_0031DC60(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005AC310;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_0031DC40(char *p0) {
    *(char **)(p0 + 0) = D_005AC310;
    return p0;
}
