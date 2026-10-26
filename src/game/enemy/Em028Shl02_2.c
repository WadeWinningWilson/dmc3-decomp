extern char D_00568D20[];

void func_0028C200();

void func_0028C3A0();

void func_0028C8E0();

void func_0028C910();

void func_00408B30(p) char *p; {
    func_0028C200(p + 336, p + 880, p + 896, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 336, 2);
    func_0028C910(p + 336);
    *(char *)(p + 880) = 1;
    *(char *)(p + 881) = 0;
    *(short *)(p + 882) = 0;
    *(char *)(p + 896) = 2;
    *(int *)(p + 912) = 0;
    *(int *)(p + 916) = 0;
    *(int *)(p + 920) = 0;
    *(int *)(p + 924) = 1065353216;
    *(int *)(p + 928) = 1117782016;
    func_0028C3A0(p + 336, 0, -1, p + 976);
    if (*(char **)(p + 460) != 0) {
        *(char *)(*(char **)(p + 460) + 2) = 1;
    }
}

extern void func_001AD140();

void func_00408A50(void) { func_001AD140(); }

extern void func_00408630();

void func_00408C90(char *p) { func_00408630(p + -64); }

extern void func_00408520();

void func_00408CA0(char *p) { func_00408520(p + -64); }

extern void func_00408A60();

void func_00408CB0(char *p) { func_00408A60(p + -64); }
