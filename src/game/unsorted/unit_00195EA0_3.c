void func_00199580(char *p, char *t, int f) {
    char *q = p + 0x10;
    char *h;
    int w;
    *(unsigned long long *)(p + 0x10) = *(unsigned long long *)(t + *(unsigned short *)(*(char **)(p + 0xC) + 2) * 48 + 0x10);
    if (f & 0x4000) {
        *(unsigned long long *)(q + 8) = 0;
    } else {
        *(unsigned long long *)(q + 8) = 0x60;
    }
    h = *(char **)(p + 0xC);
    w = *(unsigned short *)(h + 4);
    if (w == 0) {
        *(unsigned long long *)(q + 0x10) = 0;
    } else {
        *(unsigned long long *)(q + 0x10) = ((unsigned long long)*(unsigned short *)(h + 0xA) << 34) | (((unsigned long long)*(unsigned short *)(h + 8) << 24) | ((((unsigned long long)(unsigned short)w << 4) | 0xF) | ((unsigned long long)*(unsigned short *)(h + 6) << 14)));
    }
    *(unsigned long long *)(q + 0x18) = 0;
    *(unsigned char *)(q + 0x20) = 0;
}

void func_0019E2D0();

void func_0019E4C0();

void func_0019DE30(int p0) {
    func_0019E2D0();
    func_0019E4C0(p0);
}

int func_00199620();

int func_001996C0(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = 0;
    do {
        v2 = func_00199620(v0, v1);
        v1 = (v1 + 1);
    } while ((v1 < 2));
    return v2;
}

int func_00198460();

void func_00198FE0();

int func_00199090();

int func_00199100();

int func_00199180();

void func_0019BF40();

int func_0019C0A0();

int func_0019C360();

int func_0019C550();

void func_0019BDD0(p0, p1, p2) int p0; int p1; int p2; {
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp6;
    func_00198FE0(p0, p2);
    tmp0 = func_00199090(p0, p1);
    func_0019BF40(p0);
    tmp1 = func_00198460(p0, tmp0);
    tmp2 = func_00199100(p0, tmp1);
    tmp3 = func_00199180(p0, tmp2);
    tmp4 = func_0019C0A0(p0, tmp3);
    tmp5 = func_0019C360(p0, tmp4);
    tmp6 = func_0019C550(p0, tmp5);
    *(int *)((char *)p0 + 176) = (((tmp6 + 15) & -16) - p1);
}

int func_00198710();

void func_0019BE80(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp6;
    func_00198FE0(p0, p3);
    tmp0 = func_00199090(p0, p1);
    func_0019BF40(p0);
    tmp1 = func_00198710(p0, tmp0, p2);
    tmp2 = func_00199100(p0, tmp1);
    tmp3 = func_00199180(p0, tmp2);
    tmp4 = func_0019C0A0(p0, tmp3);
    tmp5 = func_0019C360(p0, tmp4);
    tmp6 = func_0019C550(p0, tmp5);
    *(int *)((char *)p0 + 176) = (((tmp6 + 15) & -16) - p1);
}

void func_00199710(char *p0) {
    *(int *)(p0 + 228) = 0;
    *(int *)(p0 + 224) = 0;
    *(char *)(p0 + 232) = 0;
}

void func_001A4140(char *p0, int p1, int p2) {
    int t0;
    int t1;
    *(int *)(p0 + 224) = p1;
    *(int *)(p0 + 228) = p2;
    t0 = (*(int *)(p0 + 224) & 4095);
    *(int *)(p0 + 224) = (*(int *)(p0 + 224) & 4095);
    t1 = (*(int *)(p0 + 228) & 4095);
    *(int *)(p0 + 228) = (*(int *)(p0 + 228) & 4095);
    *(char *)(p0 + 232) = 3;
}

void func_001A8910();

void func_001A74D0(int p0) {
    func_001A8910(p0, 126, 7);
}

void func_001A78C0(int p0) {
    func_001A8910(p0, 126, 7);
}

void func_001A7E20(int p0) {
    func_001A8910(p0, 126, 7);
}

void func_001A8050(int p0) {
    func_001A8910(p0, 126, 7);
}

void func_001A8270(int p0) {
    func_001A8910(p0, 0, 1);
}

void func_001A84A0(int p0) {
    func_001A8910(p0, 30, 5);
}

void func_001A86D0(int p0) {
    func_001A8910(p0, 30, 5);
}

void func_001A8900(int p0) {
    func_001A8910(p0, 30, 5);
}
