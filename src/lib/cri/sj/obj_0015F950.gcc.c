// cc: ee-gcc2.96 -O2 -G0
void func_0015E7E8();

void func_0015E800();

int func_0015FB80();

int func_0015FB18(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int tmp0;
    func_0015E7E8();
    tmp0 = func_0015FB80(p0, p1, p2, p3);
    func_0015E800();
    return tmp0;
}

int func_0015FC68(p0) char *p0; {
    return *(int *)(p0 + 28);
}

int func_0015FC70(p0) char *p0; {
    return *(int *)(p0 + 32);
}

int func_0015FC78(p0) char *p0; {
    return *(int *)(p0 + 36);
}

void func_0015FC80(p0, p1, p2, p3) int p0; char *p1; int p2; int p3; {
    p1 = (char *)((int)p1 << 1);
    p1 = (p1 + p2);
    p1 = (char *)((int)p1 << 2);
    p1 = (p1 + p0);
    *(int *)(p1 + 40) = p3;
}

int func_0015FC98(p0, p1, p2) int p0; char *p1; int p2; {
    p1 = (char *)((int)p1 << 1);
    p1 = (p1 + p2);
    p1 = (char *)((int)p1 << 2);
    p1 = (p1 + p0);
    return *(int *)(p1 + 40);
}
