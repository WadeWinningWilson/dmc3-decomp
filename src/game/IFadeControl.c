void func_00100580(char *);

extern char D_005A9490[];

char *func_002904C0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005A9490;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_002904A0(char *p0) {
    *(char **)(p0 + 0) = D_005A9490;
    return p0;
}
