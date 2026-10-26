int func_00195E20(p0, p1) int p0; char *p1; {
    int v0;
    v0 = 1;
    if (*(unsigned char *)(p1 + 54) == v0) {
        v0 = 0;
    } else {
        *(char *)(p1 + 54) = v0;
    }
    return v0;
}

void func_00195E00(void) {}

extern char D_00645A30[];

void func_001958C0();

void func_00195E10(void) {
    func_001958C0(D_00645A30);
}
