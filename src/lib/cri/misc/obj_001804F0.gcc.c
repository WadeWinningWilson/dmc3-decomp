// cc: ee-gcc2.96 -O2 -G0
void func_00180180();

void func_00180518(p0) int p0; {
    func_00180180(p0, 0xff000501);
}

void func_00180538(p0) int p0; {
    func_00180180(p0, 0xff000501);
}

int func_00180558() {
    return 0;
}

extern char D_0053F078[];

extern char D_006410A0[];

int func_0016C9E8();

int func_001806B0();

int func_00180640() {
    int v0;
    int v1;
    int tmp0;
    tmp0 = func_001806B0();
    if (tmp0 != 0) {
        for (;;) {
        }
    } else {
        v1 = func_0016C9E8(8, D_006410A0);
        if (v1 != 0) {
            func_00180180(0, 0xff000d01);
            return;
        } else {
            *(int *)D_0053F078 = 0;
            return v1;
        }
    }
}

int func_001806B0() {
    return 0;
}

void func_001806F0();

void func_001806D8() {
    func_001806F0();
}
