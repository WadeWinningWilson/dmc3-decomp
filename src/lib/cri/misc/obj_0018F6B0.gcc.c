// cc: ee-gcc2.96 -O2 -G0
void func_0018F770();

void func_0018F830();

void func_0018F6B0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    v0 = p0;
    func_0018F830(p0, 2, 3);
    func_0018F770(v0, 3, 4);
    v1 = v0;
    if (*(int *)((char *)p1 + 20) != 0) {
        func_0018F830(v1, 4, 5);
        func_0018F770(v0, 5, 6);
        func_0018F830(v0, 6, 7);
        return;
    } else {
        func_0018F830(v1, 4, 7);
        return;
    }
}
