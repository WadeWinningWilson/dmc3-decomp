// cc: ee-gcc2.96 -O2 -G0
void func_00162188();

void func_001795D0() {
    func_00162188();
}

extern char D_0063FDC0[];

int func_00161B38();

int func_001795E8(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_00161B38(0, p0, p1);
    *(int *)D_0063FDC0 = tmp0;
    return tmp0;
}

void func_00161C08();

void func_00179618() {
    func_00161C08(0, *(int *)D_0063FDC0);
}

extern char D_0063FDC4[];

int func_00179638(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_00161B38(2, p0, p1);
    *(int *)D_0063FDC4 = tmp0;
    return tmp0;
}

void func_001796A8() {
    func_00161C08(2, *(int *)D_0063FDC4);
}

extern char D_0063FDC8[];

void func_001796F8() {
    func_00161C08(6, *(int *)D_0063FDC8);
}

extern char D_0063FDCC[];

void func_00179748() {
    func_00161C08(5, *(int *)D_0063FDCC);
}

void func_00162288();

void func_001622A0();

void func_001797C0();

void func_001797D8();

void func_00179768() {
    func_00162288((char *)func_001797C0, 0);
    func_001622A0((char *)func_001797D8, 0);
}

void func_00179798() {
    func_00162288(0, 0);
    func_001622A0(0, 0);
}
