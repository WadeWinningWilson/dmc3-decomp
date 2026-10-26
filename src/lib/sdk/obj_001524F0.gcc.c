// cc: ee-gcc2.96 -O2 -G0
int func_001524F0(p0, p1, p2) char *p0; char *p1; char *p2; {
    unsigned short tmp3;
    *(short *)(p1 + 0) = *(unsigned short *)(p0 + 40);
    *(short *)(p2 + 0) = *(unsigned short *)(p0 + 42);
    *(short *)(p1 + 2) = *(unsigned short *)(p0 + 44);
    tmp3 = *(unsigned short *)(p0 + 46);
    *(short *)(p2 + 2) = *(unsigned short *)(p0 + 46);
    return tmp3;
}

int func_00152528(p0, p1, p2, p3) char *p0; char *p1; char *p2; char *p3; {
    unsigned short tmp2;
    *(short *)(p1 + 0) = *(unsigned short *)(p0 + 52);
    *(short *)(p2 + 0) = *(unsigned short *)(p0 + 54);
    tmp2 = *(unsigned short *)(p0 + 56);
    *(short *)(p3 + 0) = *(unsigned short *)(p0 + 56);
    return tmp2;
}

void func_00128488();

void func_00152548(p0) int p0; {
    char *v0;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(int *)(v0 + 0) = 0;
        func_00128488(p0, 0, 60);
        return;
    } else {
        return;
    }
}
