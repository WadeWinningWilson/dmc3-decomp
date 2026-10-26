void func_00100580(char *);

extern char D_005B31D0[];

char *func_00414DD0(char *p, short flags) {
    if (p != 0) {
        *(char **)p = D_005B31D0;
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00414DB0(char *p0) {
    *(char **)(p0 + 0) = D_005B31D0;
    return p0;
}
