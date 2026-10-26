void func_00100580(char *);

extern char D_005AB140[];

extern char D_005AB158[];

void func_0024FD30(char *, int);

void func_002E77F0(char *, int);

char *func_002E78A0(char *p, short flags) {
    if (p) {
        *(char **)p = D_005AB140;
        *(char **)(p + 4) = D_005AB158;
        func_0024FD30(p + 4, 0);
        func_002E77F0(p, 0);
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_0024FD10();

void func_002E77D0();

int func_002E7840(p0) int p0; {
    func_002E77D0();
    func_0024FD10((p0 + 4));
    *(char **)((char *)p0 + 0) = D_005AB140;
    *(char **)((char *)p0 + 4) = D_005AB158;
    *(int *)((char *)p0 + 12) = 0;
    *(int *)((char *)p0 + 16) = 0;
    *(int *)((char *)p0 + 20) = 0;
    *(int *)((char *)p0 + 24) = 0;
    return p0;
}

void func_002E7920(p0, p1, p2, p3, p4, p5) char *p0; int p1; int p2; int p3; int p4; int p5; {
    *(int *)(p0 + 12) = p1;
    *(int *)(p0 + 16) = p2;
    *(int *)(p0 + 20) = p3;
    *(int *)(p0 + 24) = p4;
    *(int *)(p0 + 28) = p5;
    *(char *)(p0 + 64) = 0;
    *(char *)(p0 + 65) = 0;
}
