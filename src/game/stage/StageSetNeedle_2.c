extern char D_005B0F90[];

extern char D_005B0FB4[];

extern char D_005B1034[];

int func_00252FA0();

void func_002790E0();

int func_0028C110();

void func_0031DCB0();

void func_00400FF0();

int func_003D0EA0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B0F90;
    *(char **)((char *)p0 + 64) = D_005B0FB4;
    *(char **)((char *)p0 + 160) = D_005B1034;
    *(char *)((char *)p0 + 432) = 0;
    func_002790E0((p0 + 576));
    func_0031DCB0((p0 + 2112));
    func_00400FF0((p0 + 2256));
    func_0028C110((p0 + 2288));
    return p0;
}

extern void func_003D0B80();

void func_003D0C60(char *p) { func_003D0B80(p + -64); }

void func_003D0C70(char *p) { func_003D0B80(p + -160); }

extern void func_003D0B20();

void func_003D0C80(char *p) { func_003D0B20(p + -208); }

extern void func_003D0B00();

void func_003D0C90(char *p) { func_003D0B00(p + -208); }

void func_003D0CA0(char *p) { func_003D0B80(p + -208); }

void func_003D08D0(void) {}
