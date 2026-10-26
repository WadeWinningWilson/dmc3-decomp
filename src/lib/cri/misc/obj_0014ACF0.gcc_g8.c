// cc: ee-gcc2.96 -O2 -G8
extern char D_005265C8[];

extern char D_00590F70[];

void func_0014ACB0();

void func_0014ACF0();

int func_0014AEA8(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    if (*(int *)D_005265C8 == 0) {
        func_0014ACB0();
    }
    func_0014ACF0(D_00590F70, 6, v0, v1, v2);
    return 0;
}
