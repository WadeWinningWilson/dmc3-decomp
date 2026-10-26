short func_001F8640(char *, unsigned char, short);

char *func_0012B2E8(char *, char *);

int func_001F85A0(char *p, unsigned char k, short n, char *dst) {
    unsigned short *t = *(unsigned short **)((char *)(k * 4) + (int)p + 0x2C);
    short i;
    if (*t < n) {
        return 0;
    }
    i = func_001F8640(p, k, n);
    if (i == -1) {
        return 0;
    }
    func_0012B2E8(dst, (char *)t + i * 32 + 2);
    return 1;
}

int func_001F80D0();

int func_001F8120();

int func_001F81A0();

int func_001F7FF0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p1;
    func_001F80D0();
    v2 = func_001F81A0(p0, v0);
    tmp0 = (v0 & 255);
    v1 = p0;
    if (tmp0 == 10) {
        v2 = func_001F8120(v1, v0);
    }
    return v2;
}
