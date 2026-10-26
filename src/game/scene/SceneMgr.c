void func_0013D240(char *, int);

void func_00100580(char *);

extern char D_005A7930[];

char *func_0022C850(char *p, short flags) {
    if (p) {
        *(char **)p = D_005A7930;
        func_0013D240(p + 0xC, -1);
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_0022C9F0(int p0, int p1, int p2) {
    return p2;
}
