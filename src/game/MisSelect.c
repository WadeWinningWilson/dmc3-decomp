void func_001AD140(char *);

extern char D_00666750[];

void func_001AF080(char *, int);

void func_0048DBE0(char *);

void func_0048DF30(char *);

void func_0048E2A0(char *);

void func_0048E5F0(char *);

void func_0048E970(char *);

void func_0048D990(char *p) {
    int k = *(int *)(p + 4);
    signed char x;
    signed char y;
    switch (k) {
    case 0:
        *(int *)(p + 4) = k + 1;
    case 1:
        *(signed char *)(p + 0x2A) = *(signed char *)(p + 0x29);
        (*(int *)(p + 4))++;
        *(int *)(p + 8) = 0;
    case 2:
        switch (*(signed char *)(p + 0x29)) {
        case 0: func_0048DBE0(p); break;
        case 1: func_0048DF30(p); break;
        case 2: func_0048E2A0(p); break;
        case 3: func_0048E5F0(p); break;
        case 4: func_0048E5F0(p); break;
        case 5: func_0048E970(p); break;
        }
        break;
    case 3:
        if (*(signed char *)(p + 0x28) == 0) {
            x = *(signed char *)(p + 0x29);
            y = *(signed char *)(p + 0x2A);
            if (x != y) {
                *(signed char *)(p + 0x34) = *(signed char *)(p + 0x2A);
                *(signed char *)(p + 0x29) = *(signed char *)(p + 0x2A);
                *(int *)(p + 4) = 4;
            } else if (x == 0) {
                *(int *)(p + 4) = 5;
            } else {
                *(signed char *)(p + 0x29) = 0;
                *(signed char *)(p + 0x2A) = 0;
                *(int *)(p + 4) = 4;
            }
        } else {
            *(int *)(p + 4) = 5;
        }
        break;
    case 4:
        *(int *)(p + 4) = 1;
        break;
    case 5:
        if (*(char **)(p + 0x30)) func_001AD140(*(char **)(p + 0x30));
        if (*(char **)(p + 0x38)) func_001AD140(*(char **)(p + 0x38));
        if (*(char **)(p + 0x48)) func_001AD140(*(char **)(p + 0x48));
        (*(int *)(p + 4))++;
        break;
    case 6: case 7:
        *(int *)(p + 4) = k + 1;
        break;
    case 8:
        if (*(int *)(p + 0x1C)) func_001AF080(D_00666750, *(int *)(p + 0x1C));
        if (*(int *)(p + 0x20)) func_001AF080(D_00666750, *(int *)(p + 0x20));
        if (*(int *)(p + 0x24)) func_001AF080(D_00666750, *(int *)(p + 0x24));
        (*(int *)(p + 4))++;
        break;
    case 9:
        break;
    }
}

extern char D_005B75F8[];

void func_00100580();

int func_0048D900(p0, p1) int p0; int p1; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005B75F8;
        if ((short)p1 > 0) {
            func_00100580();
        }
    }
    return (int)v0;
}

void func_0048D950(p0, p1, p2, p3, p4) char *p0; int p1; int p2; int p3; int p4; {
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(char *)(p0 + 24) = (p3 < 0);
    *(char *)(p0 + 25) = p4;
    *(int *)(p0 + 64) = 0;
    *(int *)(p0 + 68) = -1;
    *(int *)(p0 + 20) = p2;
    *(char *)(p0 + 40) = p1;
    *(char *)(p0 + 41) = p1;
    *(char *)(p0 + 52) = 0;
}

int func_0048DBC0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = 9;
    if (*(int *)(p0 + 4) == tmp0) {
        return *(signed char *)(p0 + 43);
    }
    return 0;
}

char *func_0048D8B0(char *p0) {
    *(char **)(p0 + 0) = D_005B75F8;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 32;
    *(int *)(p0 + 48) = 0;
    *(int *)(p0 + 56) = 0;
    *(int *)(p0 + 72) = 0;
    *(int *)(p0 + 28) = 0;
    *(int *)(p0 + 32) = 0;
    *(int *)(p0 + 36) = 0;
    *(char *)(p0 + 45) = 0;
    return p0;
}
