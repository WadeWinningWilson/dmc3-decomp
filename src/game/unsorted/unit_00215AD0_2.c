char *func_0021B0B0(char *p, short k) {
    int i;
    char *e;
    for (i = 0, e = p; i < 10; i++, e += 2) {
        if (k == *(short *)e) {
            return p + i * 12 + 0x14;
        }
    }
    return 0;
}

extern char D_005D0E70[];

int func_0013DA70();

void func_00215B10();

int func_00215C80();

int func_00215AD0(p0) int p0; {
    int tmp0;
    func_00215B10();
    func_00215C80(p0);
    *(char *)((char *)p0 + 1) = 0;
    tmp0 = func_0013DA70(D_005D0E70);
    return tmp0;
}
