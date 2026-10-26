// cc: ee-gcc2.96 -O2 -G8
extern char D_00591390[];

void func_001446F0();

void func_00149538();

int func_0014AAE8();

void func_0014FB98(p0, p1) int p0; int p1; {
    char *v0;
    int tmp1;
    int tmp2;
    v0 = (char *)p0;
    if (v0 == 0) {
        func_001446F0(D_00591390);
        return;
    } else {
        *(short *)(v0 + 64) = p1;
        tmp1 = *(int *)(v0 + 12);
        tmp2 = func_0014AAE8(*(int *)(v0 + 4));
        func_00149538(tmp1, (*(short *)(v0 + 64) + tmp2));
        return;
    }
}
