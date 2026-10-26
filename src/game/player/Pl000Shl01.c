extern char D_005AAE00[];

extern char D_005AAE24[];

extern char D_005AAEA4[];

int func_00252FA0();

int func_0028C110();

int func_002E5C00(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005AAE00;
    *(char **)((char *)p0 + 64) = D_005AAE24;
    *(char **)((char *)p0 + 160) = D_005AAEA4;
    func_0028C110((p0 + 384));
    *(char *)((char *)p0 + 69) = 2;
    *(short *)((char *)p0 + 144) = 0;
    return p0;
}

extern void func_002E69E0();

void func_002E6BB0(char *p) { func_002E69E0(p + -64); }

extern void func_002E6B60();

void func_002E6BC0(char *p) { func_002E6B60(p + -64); }

extern void func_002E5C60();

void func_002E6BD0(char *p) { func_002E5C60(p + -64); }

void func_002E6BE0(char *p) { func_002E5C60(p + -160); }

void func_002E6B90(void) {}

void func_002E6BA0(void) {}
