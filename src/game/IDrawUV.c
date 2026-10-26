void func_00100580(char *);

extern char D_005B2530[];

char *func_00400FA0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005B2530;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00400F80(char *p0) {
    *(char **)(p0 + 0) = D_005B2530;
    return p0;
}
