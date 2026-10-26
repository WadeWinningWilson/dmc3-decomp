// cc: ee-gcc2.96 -O2 -G0
extern char D_0053EE14[];

int func_00175758();

int func_00175788();

int func_00175718() {
    int v0;
    if (*(int *)D_0053EE14 == 0) {
        v0 = func_00175788();
    } else {
        v0 = func_00175758();
    }
    return v0;
}

void func_001282D0();

int func_00175758(p0, p1, p2) int p0; int p1; int p2; {
    func_001282D0((0x70000000 + p2), p0, p1);
    return 0;
}
