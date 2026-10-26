char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AC790[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

char * func_0032EA00(p) char *p; {
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
    *(char * *)(p) = D_005AC790;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 5, 135);
    func_002790E0(p + 192);
    *(char *)(p + 1728) = 0;
    *(int *)(p + 144) = 0;
    *(char *)(p + 1859) = 0;
    *(char *)(p + 1860) = 0;
    *(char *)(p + 1857) = 0;
    return p;
}

extern char D_01DFA340[];

int func_0032F5D0(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = (*(unsigned char *)(p0 + 4) < 2);
    if (tmp0 == 0) {
        return (*(unsigned char *)D_01DFA340 != 0);
    }
    return 0;
}

extern char D_01C61820[];

int func_001B69F0();

int func_0030FD40();

int func_0032F600(p0) int p0; {
    int tmp0;
    int tmp2;
    tmp0 = func_0030FD40(D_01DFA340, 11059, 144, 184, 0x585858, 0, 0xfffff2, 1);
    tmp2 = func_001B69F0(D_01C61820, 144, 184, 0xfffff1, (short)((unsigned int)tmp0 >> 16), (short)(tmp0 & 65535), 0x80404040, *(int *)((char *)p0 + 144));
    return tmp2;
}

unsigned char func_0032F5B0(char *p) { return *(unsigned char *)(p + 1860); }

void func_0032F5C0(char *p0) {
    *(char *)(p0 + 1859) = 1;
}
