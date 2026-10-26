void func_00100580(char *);

extern char D_005B26C0[];

void func_00406170(char *, int);

void func_0013D240(char *, int);

char *func_004027D0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B26C0;
        func_00406170(p + 92, -1);
        if (p + 24 != 0) {
            func_0013D240(p + 40, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0013D6A0();

void func_00406130();

char *func_00402740(char *p0) {
    *(char **)(p0 + 0) = D_005B26C0;
    func_0013D6A0((p0 + 40));
    func_00406130((p0 + 92));
    *(int *)(p0 + 68) = 0;
    *(int *)(p0 + 72) = 0;
    *(int *)(p0 + 76) = 0;
    *(int *)(p0 + 80) = 0;
    *(int *)(p0 + 356) = 0;
    *(int *)(p0 + 360) = 0;
    *(int *)(p0 + 364) = 0;
    *(int *)(p0 + 372) = 0;
    *(int *)(p0 + 376) = 0;
    *(int *)(p0 + 380) = 0;
    *(int *)(p0 + 384) = 0;
    *(int *)(p0 + 388) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 12;
    *(char *)(p0 + 392) = 0;
    *(int *)(p0 + 84) = 0;
    return p0;
}
