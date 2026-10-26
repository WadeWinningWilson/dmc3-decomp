extern char D_00568D20[];

void func_0028C200();

void func_0028C3A0();

void func_0028C8E0();

void func_0028C910();

void func_00408220(p) char *p; {
    func_0028C200(p + 336, p + 880, p + 896, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 336, 5);
    func_0028C910(p + 336);
    *(char *)(p + 880) = 1;
    *(char *)(p + 881) = 0;
    *(short *)(p + 882) = 0;
    *(char *)(p + 896) = 2;
    *(int *)(p + 912) = 0;
    *(int *)(p + 916) = 1120403456;
    *(int *)(p + 920) = 0;
    *(int *)(p + 924) = 1065353216;
    *(int *)(p + 928) = 1128792064;
    func_0028C3A0(p + 336, 0, 5, p + 976);
    if (*(char **)(p + 460) != 0) {
        *(char *)(*(char **)(p + 460) + 2) = 1;
    }
}

extern char D_005B2AD0[];

extern char D_005B2AF4[];

extern char D_005B2B74[];

int func_00252FA0();

int func_0028C110();

int func_00407ED0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B2AD0;
    *(char **)((char *)p0 + 64) = D_005B2AF4;
    *(char **)((char *)p0 + 160) = D_005B2B74;
    func_0028C110((p0 + 336));
    *(int *)((char *)p0 + 1040) = 0;
    *(int *)((char *)p0 + 1044) = 0;
    *(char *)((char *)p0 + 1048) = 0;
    *(int *)((char *)p0 + 1052) = 0;
    return p0;
}

extern void func_00407FB0();

void func_00408390(char *p) { func_00407FB0(p + -64); }

extern void func_00408190();

void func_004083A0(char *p) { func_00408190(p + -64); }
