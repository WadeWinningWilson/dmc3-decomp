// cc: ee-gcc2.96 -O2 -G0
extern char D_0051D15C[];

void func_00146938(p0) int p0; {
    *(int *)D_0051D15C = p0;
}

void func_001446F0();

void func_00146948(p0, p1) int p0; int p1; {
    func_001446F0(p1);
}

void func_00146960(p0, p1) int p0; int p1; {
    func_001446F0(p1);
}

extern char D_0051D168[];

void func_00150110();

void func_00146978() {
    *(int *)(D_0051D168 + 0) = (*(int *)(D_0051D168 + 0) + 1);
    func_00150110();
}

void func_001469A0();

void func_001469F0();

void func_00146A10();

int func_001469C0() {
    func_001469F0(0);
    func_00146A10(0);
    func_001469A0(0);
    return 0;
}
