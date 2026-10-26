// cc: ee-gcc2.96 -O2 -G0
extern char D_0053F09C[];

void func_00189C88();

void func_00189C60() {
    func_00189C88();
    *(int *)D_0053F09C = 0;
}

extern char D_00597AF0[];

void func_00180180();

void func_00189C88() {
    int v0;
    if (*(int *)D_00597AF0 != 0x5a5a5a5a) {
        func_00180180(0, 0xff000201);
        return;
    } else {
        return;
    }
}
