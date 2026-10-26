char * func_002790E0();

extern char D_005A6F50[];

extern char D_005ABA40[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

void func_0027BBF0();

void func_00304E70();

char * func_00304D90(p) char *p; {
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
    *(char * *)(p) = D_005ABA40;
    func_00100450(p + 64, (void *)func_00304E70, (void *)func_0027BBF0, 128, 13, 135);
    func_00100450(p + 1728, (void *)func_002790E0, (void *)func_002791E0, 1536, 13);
    *(int *)(p + 21776) = 0;
    *(char *)(p + 21882) = 0;
    *(char *)(p + 21896) = 0;
    *(char *)(p + 21912) = 0;
    *(int *)(p + 21848) = 0;
    return p;
}

void func_00309FD0(p0) char *p0; {
    if (*(unsigned char *)(p0 + 21885) == 0) {
        *(int *)(p0 + 21888) = 0;
    } else {
        *(float *)(p0 + 21888) = *(float *)(p0 + 21892);
    }
}

void func_00306620(char *p0) {
    unsigned char t0;
    t0 = (*(unsigned char *)(p0 + 4) + 1);
    *(char *)(p0 + 4) = (*(unsigned char *)(p0 + 4) + 1);
    *(char *)(p0 + 21854) = 0;
    *(char *)(p0 + 21835) = 0;
    *(char *)(p0 + 21733) = 0;
    *(char *)(p0 + 21700) = 0;
    *(int *)(p0 + 21916) = 0;
    *(int *)(p0 + 21920) = 0;
    *(int *)(p0 + 21948) = 0;
    *(int *)(p0 + 21944) = 0;
    *(int *)(p0 + 21940) = 0;
    *(int *)(p0 + 21936) = 0;
}
