int func_004FDD50(char *p0, char *p1, float f0, float f1) {
    *(float *)(p1 + 0) -= (f0 * *(float *)(p0 + 16));
    if (*(float *)(p1 + 0) <= f1) {
        *(float *)(p1 + 0) = f1;
        return 1;
    } else {
        return 0;
    }
}

extern void func_004FDEB0();

void func_004FDFA0(char *p) { func_004FDEB0(p + -64); }

void func_004FDFB0(char *p) { func_004FDEB0(p + -160); }

void func_004FDFF0(char *p) { func_004FDEB0(p + -208); }

void func_004FDE80(void) {}

void func_004FDE90(void) {}

char *func_004FDEA0(char *p) { return p + 2928; }

void func_004FD950(char *p0) {
    *(int *)(p0 + 708) = 0;
    *(int *)(p0 + 724) = 0;
    *(char *)(p0 + 748) = 0;
    *(int *)(p0 + 740) = 0;
    *(char *)(p0 + 750) = 0;
}

void func_004FD970(char *p0) {
    *(int *)(p0 + 712) = 0;
    *(int *)(p0 + 728) = 0;
    *(char *)(p0 + 749) = 0;
    *(int *)(p0 + 744) = 0;
    *(char *)(p0 + 751) = 0;
}
