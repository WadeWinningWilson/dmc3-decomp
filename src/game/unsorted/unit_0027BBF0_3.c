char *func_0027CD80();

int func_0027CB50(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v0;
    char *v1;
    v0 = p1;
    if (!(*(short *)(p0 + 0) > (short)p1)) {
        return -1;
    } else {
        v1 = func_0027CD80(p0, *(int *)(p0 + 168), v0);
        if (v1 != 0) {
            return *(short *)(v1 + 4);
        } else {
            return -1;
        }
    }
}

void func_0027BDC0();

void func_0027BDB0(int p0, int p1) {
    func_0027BDC0(p0, p1, 0);
}
