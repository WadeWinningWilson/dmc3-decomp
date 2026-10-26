extern char D_0058B5B0[];

int func_001AD140();

void func_002530C0();

void func_004E3320();

int func_004E33A0();

int func_004E34C0();

void func_004E3550();

void func_004E3670();

int func_004E2D40(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_004E34C0();
    v1 = (int)v0;
    if ((tmp0 & 255) == 0) {
        v2 = func_001AD140(v1);
    } else {
        *(short *)(v0 + 144) = 0;
        func_004E3550(v0, 0);
        *(char *)(v0 + 328) = 1;
        func_002530C0(v0, D_0058B5B0);
        func_004E3670(v0);
        func_004E3320(v0);
        v2 = func_004E33A0(v0);
        *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
    }
    return v2;
}
