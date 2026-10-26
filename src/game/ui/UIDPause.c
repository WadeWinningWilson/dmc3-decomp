int func_001AD140();

int func_002DE040();

int func_002DE3A0();

int func_002DDFC0(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    int v2;
    int v1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 108) == 1) {
        v2 = func_001AD140(p0, 1);
    } else {
        v1 = *(unsigned char *)(v0 + 4);
        switch (v1) {
        case 0:
            v2 = func_002DE040(p0, 1);
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
            break;
        case 1:
            v2 = func_002DE3A0(p0, 1);
            break;
        }
    }
    return v2;
}

void func_002DF2F0(void) {}

void func_002DF290(char *p0) {
    int t0;
    t0 = *(int *)(p0 + 112);
    *(int *)(p0 + 120) = *(int *)(p0 + 112);
}
