// cc: ee-gcc2.96 -O2 -G0
void func_0015E7E8();

void func_0015E800();

void func_0015ED48();

void func_0015ECE8(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    func_0015E7E8();
    func_0015ED48(p0, p1, p2, p3);
    func_0015E800();
}

void func_0015EE68();

void func_0015EE18(p0, p1, p2) int p0; int p1; int p2; {
    func_0015E7E8();
    func_0015EE68(p0, p1, p2);
    func_0015E800();
}

void func_0015EF48();

void func_0015EEF8(p0, p1, p2) int p0; int p1; int p2; {
    func_0015E7E8();
    func_0015EF48(p0, p1, p2);
    func_0015E800();
}

int func_0015F0A0();

int func_0015F038(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int tmp0;
    func_0015E7E8();
    tmp0 = func_0015F0A0(p0, p1, p2, p3);
    func_0015E800();
    return tmp0;
}

int func_0015F160(p0) char *p0; {
    return *(int *)(p0 + 20);
}

int func_0015F168(p0) char *p0; {
    return *(int *)(p0 + 24);
}
