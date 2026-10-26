char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AC700[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

char * func_00325B00(p) char *p; {
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
    *(char * *)(p) = D_005AC700;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 4, 135);
    *(char *)(p + 6208) = 0;
    *(char *)(p + 6402) = 0;
    *(char *)(p + 6403) = -1;
    *(char *)(p + 6400) = 0;
    *(char *)(p + 6401) = 0;
    *(char *)(p + 6404) = 0;
    *(char *)(p + 6405) = 0;
    return p;
}
