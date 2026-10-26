void func_002F91E0();

void func_002F9680(void) {
    void func_002FA800();
    func_002F91E0(0);
    func_002FA800(0);
}

extern char D_005587A0[];

int func_001156A8();

int func_002F9620(p0, p1) int p0; int p1; {
    char stk[0x10] __attribute__((aligned(16)));
    int v0;
    v0 = func_001156A8(p1, 40, D_005587A0, ((stk + -16) + 28));
    if (v0 < 0) {
        for (;;) {
        }
    } else {
        return v0;
    }
}

int func_002F96D0(p0, p1) char *p0; int p1; {
    int func_002FA800();
    int v0;
    switch (p1) {
    case 0:
        *(int *)(p0 + 0) = 0;
        v0 = func_002FA800(1);
        break;
    case 1:
        *(int *)(p0 + 0) = 1;
        v0 = func_002FA800(0);
        break;
    case 2:
        *(int *)(p0 + 0) = 2;
        v0 = func_002FA800(0);
        break;
    }
    return v0;
}

void func_002FA870();

int func_002F9750(p0, p1) int p0; int p1; {
    func_002FA870(p1);
}

int func_002F9400();

int func_002F9450();

int func_002F97B0(p0, p1, p2, p3, p4) int p0; int p1; int p2; int p3; int p4; {
    int tmp0;
    int tmp1;
    tmp0 = func_002F9400(p1);
    tmp1 = func_002F9450(p2, p3, (p4 + tmp0));
    return tmp1;
}

void func_002FAB80();

void func_002F9810(p0, p1, p2, p3, p4, p5) int p0; int p1; int p2; int p3; int p4; int p5; {
    func_002FAB80(p1, p2, p3, p4, p5);
}

extern void func_002F9280();

void func_002F96B0(void) { func_002F9280(); }

void func_002F9420();

void func_002F96C0(int p0, int p1) {
    func_002F9420(p1);
}

void func_002F93E0();

void func_002F9760(int p0, int p1) {
    func_002F93E0(p1);
}

void func_002F93F0();

void func_002F9770(int p0, int p1) {
    func_002F93F0(p1);
}

void func_002F9410();

void func_002F9780(int p0, int p1, int p2) {
    func_002F9410(p1, p2);
}

void func_002F9430();

void func_002F9790(int p0, int p1, int p2) {
    func_002F9430(p1, p2);
}

void func_002F9440();

void func_002F97A0(int p0, int p1, int p2) {
    func_002F9440(p1, p2);
}

void func_002F92C0();

void func_002F9800(int p0, int p1) {
    func_002F92C0(p1);
}

void func_002FB040();

void func_002F9830(int p0, int p1, int p2) {
    func_002FB040(p1, p2);
}

void func_002F9460();

void func_002F9840(int p0, int p1) {
    func_002F9460(p1);
}

void func_002F9470();

void func_002F9850(int p0, int p1, int p2, int p3) {
    func_002F9470(p1, p2, p3);
}

void func_002FA900();

void func_002F9860(int p0, int p1, int p2, int p3) {
    func_002FA900(p1, p2, p3);
}

void func_002FA980();

void func_002F9870(int p0, int p1) {
    func_002FA980(p1);
}
