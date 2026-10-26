void func_00100580(char *);

extern char D_005AC360[];

char *func_0031DE80(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005AC360;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_0031DE60(char *p0) {
    *(char **)(p0 + 0) = D_005AC360;
    return p0;
}
