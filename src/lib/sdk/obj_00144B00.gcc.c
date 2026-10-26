// cc: ee-gcc2.96 -O2 -G0
extern char D_00590540[];

extern char D_00590578[];

void func_001446F0();

int func_00144C08(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    if (!((unsigned int)p0 < (unsigned int)256)) {
        v0 = (int)D_00590540;
        func_001446F0(v0);
        v1 = -3;
    } else {
        v1 = 0;
        if (p1 == 0) {
            v0 = (int)D_00590578;
            func_001446F0(v0);
            v1 = -3;
        }
    }
    return v1;
}

void func_00144C70();

void func_00144C50(p0, p1, p2) int p0; int p1; int p2; {
    func_00144C70(p0, p1, 0, p2);
}
