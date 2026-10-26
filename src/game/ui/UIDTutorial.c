char * func_002790E0();

extern char D_005A6F50[];

extern char D_005B1C50[];

void func_0013D6A0();

char * func_003F3E10(p) char *p; {
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
    *(char * *)(p) = D_005B1C50;
    func_002790E0(p + 64, 135, -1);
    *(char *)(p + 1600) = 0;
    *(char *)(p + 1729) = 0;
    *(char *)(p + 1730) = 0;
    return p;
}

extern char D_01DFA340[];

int func_003F44F0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = (*(unsigned char *)(p0 + 4) < 3);
    if (tmp0 == 0) {
        return (*(unsigned char *)D_01DFA340 != 0);
    }
    return 0;
}

unsigned char func_003F44D0(char *p) { return *(unsigned char *)(p + 1730); }

void func_003F44E0(char *p0) {
    *(char *)(p0 + 1729) = 1;
}
