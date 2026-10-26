void func_00100580(char *);

extern char D_005AC550[];

char *func_003204F0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005AC550;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_003204D0(char *p0) {
    *(char **)(p0 + 0) = D_005AC550;
    return p0;
}
