// cc: ee-gcc2.96 -O2 -G0
int func_001419B0(p0) char *p0; {
    return *(signed char *)(p0 + 13);
}

int func_00141A18(p0) char *p0; {
    return *(int *)(p0 + 16);
}

int func_00141A20(p0) char *p0; {
    return *(signed char *)(p0 + 15);
}

int func_00141A28(p0) char *p0; {
    return *(int *)(p0 + 24);
}

int func_00141A30(p0) char *p0; {
    return *(short *)(p0 + 28);
}

int func_00141A38(p0) char *p0; {
    return *(int *)(p0 + 32);
}

int func_00141A40(p0) char *p0; {
    return *(short *)(p0 + 36);
}

int func_00141A48(p0) char *p0; {
    return *(int *)(p0 + 40);
}

int func_00141A50(p0) char *p0; {
    int v0;
    v0 = 0;
    if (p0 != 0) {
        v0 = *(int *)(p0 + 44);
    }
    return v0;
}

int func_00141A68(p0) char *p0; {
    return *(int *)(p0 + 48);
}

int func_00141A70(p0) char *p0; {
    return *(int *)(p0 + 52);
}

int func_00141A78(p0) char *p0; {
    return *(int *)(p0 + 204);
}

int func_00141A80(p0) char *p0; {
    return *(short *)(p0 + 224);
}

int func_00141A88(p0, p1) int p0; char *p1; {
    p1 = (char *)((int)p1 << 1);
    p1 = (p1 + p0);
    return *(short *)(p1 + 226);
}

int func_00141A98(p0) int p0; {
    return (p0 + 208);
}

void func_001524C8();

void func_00152518();

void func_00141AE0(p0) int p0; {
    func_001524C8(*(int *)((char *)p0 + 8), (p0 + 172), (p0 + 176));
    func_00152518(*(int *)((char *)p0 + 8), *(short *)((char *)p0 + 166), *(short *)((char *)p0 + 168), *(short *)((char *)p0 + 170));
}

extern char D_005194EC[];

extern char D_005194EE[];

extern char D_005194F0[];

int func_0012B400();

void func_00140FC0();

void func_00141B88(p0) int p0; {
    int tmp0;
    tmp0 = func_0012B400();
    func_00140FC0(p0, tmp0, D_005194EC, D_005194EE, D_005194F0);
}
