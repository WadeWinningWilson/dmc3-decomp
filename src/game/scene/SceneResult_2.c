extern char D_01CAF51F[];

extern char D_0055A1E0[];

extern char D_00559BB0[];

void func_002FF9D0(char *p) {
    if (*(unsigned char *)D_01CAF51F == 0) {
        *(char **)(p + 0x40) = D_0055A1E0;
    } else {
        *(char **)(p + 0x40) = D_00559BB0;
    }
}

char *func_001B0FD0(char *, int, int);

void func_00128488(char *, int, int);

int func_002FFA10(char *p) {
    char *r;
    switch (*(unsigned char *)(p + 0x39)) {
    case 0:
    case 1:
        r = func_001B0FD0(p + 0x694, 0x4340, 1);
        if (r == 0) {
            return 0;
        }
        *(char **)(p + 0x44) = r;
        func_00128488(*(char **)(p + 0x44), 0, 0x4340);
        break;
    case 2:
    case 3:
        r = func_001B0FD0(p + 0x694, 0x2C0, 1);
        if (r == 0) {
            return 0;
        }
        *(char **)(p + 0x48) = r;
        func_00128488(*(char **)(p + 0x48), 0, 0x2C0);
        break;
    }
    return 1;
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AB890[];

void func_0013D6A0();

char * func_002FF910(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005AB890;
    func_002790E0(p + 128, 135, -1);
    func_0013D6A0(p + 1684);
    *(char *)(p + 4) = 0;
    *(char *)(p + 56) = 0;
    *(char *)(p + 1664) = 0;
    *(int *)(p + 1668) = 0;
    *(int *)(p + 1672) = 0;
    *(char *)(p + 1676) = 0;
    *(char *)(p + 1677) = 1;
    *(int *)(p + 1680) = 0;
    *(char *)(p + 1700) = 0;
    return p;
}

void func_002FF750();

void func_002FF740(int p0, int p1) {
    func_002FF750(p0, p1, 0);
}
