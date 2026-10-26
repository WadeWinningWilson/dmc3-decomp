void func_00100580(char *);

extern char D_005A8D80[];

char *func_00286270(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005A8D80;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00286250(char *p0) {
    *(char **)(p0 + 0) = D_005A8D80;
    return p0;
}
