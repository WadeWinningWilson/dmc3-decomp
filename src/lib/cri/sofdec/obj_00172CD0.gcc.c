// cc: ee-gcc2.96 -O2 -G0
int func_00172CD0(p0) char *p0; {
    int tmp0;
    tmp0 = (*(int *)(p0 + 528) + 1);
    *(int *)(p0 + 528) = (*(int *)(p0 + 528) + 1);
    return tmp0;
}

int func_00172CE0(p0) char *p0; {
    int tmp0;
    tmp0 = (*(int *)(p0 + 528) + -1);
    *(int *)(p0 + 528) = (*(int *)(p0 + 528) + -1);
    return tmp0;
}

int func_00172CF0(p0) char *p0; {
    return *(int *)(p0 + 528);
}

int func_00172DA0(p0) char *p0; {
    return *(int *)(p0 + 88);
}

void func_001709F8();

void func_00173238(p0, p1, p2) int p0; int p1; int p2; {
    func_001709F8(p0, p1, (p2 * 1000));
}

int func_001733B8(p0, p1) char *p0; char *p1; {
    int tmp0;
    signed char tmp5;
    int tmp6;
    p0 = (p0 + 140);
    tmp0 = *(int *)(p1 + 60);
    *(int *)(p0 + 0) = *(int *)(p1 + 88);
    *(int *)(p0 + 4) = *(int *)(p1 + 92);
    *(int *)(p0 + 8) = *(signed char *)(p1 + 108);
    *(int *)(p0 + 12) = *(signed char *)(p1 + 109);
    tmp5 = *(signed char *)(p1 + 110);
    *(int *)(p0 + 20) = tmp0;
    *(int *)(p0 + 16) = tmp5;
    tmp6 = *(int *)(p1 + 64);
    *(int *)(p0 + 28) = 0;
    *(int *)(p0 + 24) = tmp6;
    return tmp6;
}
