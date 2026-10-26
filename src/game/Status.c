void func_00100580(char *);

extern char D_005B2D48[];

void func_00406170(char *, int);

void func_0013D240(char *, int);

char *func_00408D60(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B2D48;
        func_00406170(p + 76, -1);
        if (p + 32 != 0) {
            func_0013D240(p + 48, -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0013D6A0();

void func_00406130();

char *func_00408CE0(char *p0) {
    *(char **)(p0 + 0) = D_005B2D48;
    func_0013D6A0((p0 + 48));
    func_00406130((p0 + 76));
    *(int *)(p0 + 20) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 28) = 0;
    *(int *)(p0 + 348) = 0;
    *(int *)(p0 + 352) = 0;
    *(int *)(p0 + 356) = 0;
    *(int *)(p0 + 364) = 0;
    *(int *)(p0 + 372) = 0;
    *(int *)(p0 + 376) = 0;
    *(int *)(p0 + 380) = 0;
    *(int *)(p0 + 384) = 0;
    *(int *)(p0 + 392) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    return p0;
}
