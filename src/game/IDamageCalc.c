void func_00100580(char *);

extern char D_005AB1C0[];

char *func_002E89C0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005AB1C0;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_002E89A0(char *p0) {
    *(char **)(p0 + 0) = D_005AB1C0;
    return p0;
}
