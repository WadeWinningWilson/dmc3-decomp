// cc: ee-gcc2.96 -O2 -G0
extern char D_0051A550[];

extern char D_0051A554[];

void func_00161DD8();

void func_001446C8(p0, p1) int p0; int p1; {
    *(int *)D_0051A550 = p0;
    *(int *)D_0051A554 = p1;
    func_00161DD8();
}
