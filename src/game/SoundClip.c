extern char D_005D0E70[];

void func_0013DA10(char *, int);

int func_0030AB30(char *p) {
    float v = *(float *)(p + 0x10);
    if (v < 0.0f) {
        v = -v;
    }
    if (v <= 0.0001f) {
        return 0;
    }
    func_0013DA10(D_005D0E70, 0);
    return 1;
}

void func_00210220(char *);

char *func_00210240(char *);

void func_0030ABB0(char *p) {
    func_00210220(p);
    *(int *)(p + 0x20) = *(short *)(func_00210240(p) + 4);
}

float func_0030ABF0() {
    return 60.0f;
}

void func_0030AC00(void) {}

void func_0030AC10(void) {}

void func_0030ABA0(char *p0) {
    *(int *)(p0 + 32) = -1;
}
