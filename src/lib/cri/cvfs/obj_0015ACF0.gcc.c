// cc: ee-gcc2.96 -O2 -G0
void func_0015E800();

void func_0015ACF0() {
    func_0015E800();
}

extern char D_0052C3B8[];

extern char D_0052C3BC[];

void func_0015AD08(p0, p1) int p0; int p1; {
    int v0;
    if (p0 == 0) {
        *(int *)D_0052C3B8 = 0;
        *(int *)D_0052C3BC = 0;
        return;
    } else {
        *(int *)D_0052C3B8 = p0;
        *(int *)D_0052C3BC = p1;
        return;
    }
}
