// cc: ee-gcc2.96 -O2 -G8
void func_0016DE38();

int func_0016FB98();

int func_0016FDC0();

int func_001706F8();

void func_0016E030(p0, p1) int p0; int p1; {
    int v4;
    int v1;
    int v2;
    int v0;
    int v3;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = p1;
    v1 = p0;
    tmp0 = func_001706F8();
    if (tmp0 != 0) {
        func_0016DE38(0, 0xff03020a);
        return;
    } else {
        v4 = 0xff030305;
        do {
            tmp1 = func_0016FB98(v0);
            v2 = v0;
            v3 = (tmp1 & 204);
            if (tmp1 == 0) break;
            if (v3 != 0) {
                v4 = 0;
                break;
            }
            tmp2 = func_0016FDC0(v2, 1, 4);
        } while (tmp2 == 4);
        func_0016DE38(v1, v4);
        return;
    }
}
