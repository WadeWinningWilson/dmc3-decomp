// cc: ee-gcc2.96 -O2 -G0
extern char D_00529AEC[];

extern char D_00529AF0[];

void func_001542E8(p0, p1) int p0; int p1; {
    int v0;
    if (p0 == 0) {
        *(int *)D_00529AEC = 0;
        *(int *)D_00529AF0 = 0;
        return;
    } else {
        *(int *)D_00529AEC = p0;
        *(int *)D_00529AF0 = p1;
        return;
    }
}
