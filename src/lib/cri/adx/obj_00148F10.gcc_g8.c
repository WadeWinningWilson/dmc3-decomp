// cc: ee-gcc2.96 -O2 -G8
void func_00161C80();

void func_00148F10(p0, p1) int p0; int p1; {
    func_00161C80(7, 0, p0, p1);
}

extern char D_00525B30[];

void func_001578F8();

void func_0015A368();

void func_00148FE8(p0) int p0; {
    *(int *)D_00525B30 = p0;
    func_0015A368();
    func_001578F8(p0);
}
