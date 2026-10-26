// cc: ee-gcc2.96 -O2 -G8
extern char D_005194D4[];

extern char D_00590438[];

void func_00140F80();

void func_00140FC0();

int func_00141178(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    if (*(int *)D_005194D4 == 0) {
        func_00140F80();
    }
    func_00140FC0(D_00590438, 6, v0, v1, v2);
    return 0;
}

extern char D_005194F8[];

void func_00128488();

void func_00152380();

void func_00141208() {
    func_00152380();
    func_00140F80();
    func_00128488(D_005194F8, 0, 4160);
}
