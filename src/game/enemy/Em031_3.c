int func_003B4030();

int func_003B43C0();

void func_003B47F0();

int func_003B5BE0();

int func_003B5CD0();

int func_003B3F70(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    v0 = (char *)p0;
    tmp0 = func_003B5BE0();
    v1 = (int)v0;
    if ((tmp0 & 255) == 1) {
        *(char *)(v0 + 8649) = 0;
        func_003B47F0(v1);
        *(char *)(v0 + 8652) = 0;
        return 1;
    } else {
        tmp1 = func_003B5CD0(v0);
        if ((tmp1 & 255) == 1) {
            return 1;
        } else {
            tmp2 = func_003B43C0(v0);
            if ((tmp2 & 255) == 1) {
                return 1;
            } else {
                tmp3 = func_003B4030(v0);
                v2 = (int)v0;
                if ((tmp3 & 255) == 1) {
                    *(char *)(v0 + 8649) = 0;
                    func_003B47F0(v2);
                    *(char *)(v0 + 8652) = 0;
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }
}

void func_003B4B60(char *p0, int p1) {
    short t0;
    t0 = *(short *)(p0 + 8400);
    *(short *)(p0 + 8402) = *(short *)(p0 + 8400);
    *(short *)(p0 + 8400) = p1;
    *(char *)(p0 + 7) = 0;
    *(char *)(p0 + 6) = 0;
    *(char *)(p0 + 5) = 0;
}
