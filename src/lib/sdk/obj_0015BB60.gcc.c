// cc: ee-gcc2.96 -O2 -G0
void func_0015BB48();

void func_0015BB60();

void func_0015BBB8();

void func_0015BB78(p0, p1) int p0; int p1; {
    func_0015BB48();
    func_0015BBB8(p0, p1);
    func_0015BB60();
}

extern char D_0053167C[];

extern char D_00531680[];

void func_0015BBB8(p0, p1) int p0; int p1; {
    *(int *)D_0053167C = p0;
    *(int *)D_00531680 = p1;
}
