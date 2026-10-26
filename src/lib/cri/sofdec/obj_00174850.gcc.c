// cc: ee-gcc2.96 -O2 -G0
int func_00175970();

void func_0018E3C8();

void func_00174898(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int tmp0;
    tmp0 = func_00175970();
    func_0018E3C8(tmp0, p1, p2, p3);
}

void func_0018E4B8();

void func_001748E8(p0) int p0; {
    int tmp0;
    if (p0 != 0) {
        tmp0 = func_00175970();
        func_0018E4B8(tmp0);
        return;
    } else {
        func_0018E4B8();
        return;
    }
}
