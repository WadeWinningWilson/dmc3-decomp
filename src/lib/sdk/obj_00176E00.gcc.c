// cc: ee-gcc2.96 -O2 -G0
int func_00176E78();

void func_00176ED8();

void func_00176F90();

void func_00176FB0();

void func_00176FF8();

void func_00176E00(p0, p1, p2) int p0; int p1; int p2; {
    int tmp1;
    tmp1 = func_00176E78(*(int *)((char *)p1 + 4));
    *(int *)((char *)p2 + 0) = tmp1;
    func_00176ED8(p1, p2);
    func_00176F90(p1, p2);
    func_00176FB0(p0, p1, p2);
    func_00176FF8(p0, p2);
}
