void func_001AD140(char *);

extern char D_00666750[];

void func_001AF080(char *, int);

extern char D_01DFA310[];

void func_0030E910(char *, int, int);

unsigned char func_00487840(char *p) {
    unsigned char r = 0;
    switch (*(int *)(p + 4)) {
    case 0:
        if (*(char **)(p + 0xC) != 0) {
            func_001AD140(*(char **)(p + 0xC));
            *(char **)(p + 0xC) = 0;
        }
        if (*(char **)(p + 0x10) != 0) {
            func_001AD140(*(char **)(p + 0x10));
            *(char **)(p + 0x10) = 0;
        }
        if (*(char **)(p + 0x14) != 0) {
            func_001AD140(*(char **)(p + 0x14));
            *(char **)(p + 0x14) = 0;
        }
        if (*(char **)(p + 0x18) != 0) {
            func_001AD140(*(char **)(p + 0x18));
            *(char **)(p + 0x18) = 0;
        }
        if (*(char **)(p + 0x1C) != 0) {
            func_001AD140(*(char **)(p + 0x1C));
            *(char **)(p + 0x1C) = 0;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
    case 1:
    case 2:
    case 3:
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        break;
    case 4:
        if (*(char **)(p + 0x20) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x20));
            *(char **)(p + 0x20) = 0;
        }
        if (*(char **)(p + 0x24) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x24));
            *(char **)(p + 0x24) = 0;
        }
        if (*(char **)(p + 0x28) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x28));
            *(char **)(p + 0x28) = 0;
        }
        if (*(char **)(p + 0x2C) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x2C));
            *(char **)(p + 0x2C) = 0;
        }
        if (*(char **)(p + 0x30) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x30));
            *(char **)(p + 0x30) = 0;
        }
        if (*(unsigned char *)(p + 0x38) == 0 && *(char **)(p + 0x34) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x34));
            *(char **)(p + 0x34) = 0;
            func_0030E910(D_01DFA310, 0x2EE0, 0x30E6);
        }
        r = 1;
        break;
    }
    return r;
}

extern char D_00540330[];

extern char D_00666712[];

int func_001AF3F0();

int func_001AFB90();

int func_00486390(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    char *tmp2;
    *(char *)(p0 + 56) = p1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 56) == 0) {
        if (*(int *)(v0 + 52) == 0) {
            v4 = func_001AF3F0(D_00666750, (D_00540330 + (*(signed char *)D_00666712 << 2)), 0, 0);
            *(int *)(v0 + 52) = v4;
        }
    }
    *(char *)(v0 + 57) = 0;
    *(int *)(v0 + 0) = 0;
    v2 = *(char **)(v0 + 12);
    if (v2 == 0) {
        v4 = func_001AFB90(D_00666750, 430, 0, 8);
        *(int *)(v0 + 32) = v4;
        *(int *)(v0 + 4) = 0;
    } else {
        *(char *)(v2 + 6400) = 1;
        tmp2 = *(char **)(v0 + 12);
        *(char *)(*(char **)(v0 + 12) + 4) = 1;
        *(char *)(tmp2 + 6402) = 0;
        *(char *)(tmp2 + 6403) = -1;
        *(char *)(tmp2 + 6400) = 1;
        *(char *)(tmp2 + 6401) = 0;
        *(int *)(v0 + 4) = 2;
    }
    return v4;
}
