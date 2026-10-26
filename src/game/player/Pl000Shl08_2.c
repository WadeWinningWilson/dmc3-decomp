extern char D_005B6FF0[];

extern char D_005B7014[];

extern char D_005B7094[];

int func_00252FA0();

int func_0028C110();

int func_00485420(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B6FF0;
    *(char **)((char *)p0 + 64) = D_005B7014;
    *(char **)((char *)p0 + 160) = D_005B7094;
    func_0028C110((p0 + 368));
    *(char *)((char *)p0 + 69) = 2;
    *(short *)((char *)p0 + 144) = 0;
    *(int *)((char *)p0 + 1056) = 0;
    return p0;
}

extern void func_00485ED0();

void func_00486350(char *p) { func_00485ED0(p + -64); }
