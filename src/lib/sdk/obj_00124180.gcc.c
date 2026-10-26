// cc: ee-gcc2.96 -O2 -G0
extern char D_00518310[];

extern char D_0058EBF8[];

void func_00124EA8();

void func_001269A8();

void func_00124ED8(p0, p1, p2) int p0; int p1; int p2; {
    func_001269A8(*(int *)(*(char **)D_00518310 + 12), D_0058EBF8, p2, p0, p1);
    func_00124EA8();
}
