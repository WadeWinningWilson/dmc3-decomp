// cc: ee-gcc2.96 -O2 -G0
extern char D_0051E308[];

void func_00146858();

void func_00150110();

int func_00148AF0() {
    char *v0;
    v0 = D_0051E308;
    if (*(int *)(v0 + 0) == 0) {
        *(int *)(v0 + 0) = 1;
        func_00150110();
        func_00146858();
        *(int *)(v0 + 0) = 0;
    }
    return 0;
}

void func_00148260();

void func_00148B98() {
    func_00148260();
}
