int func_0027BDC0(char *, int, int);

int func_0027BF60(char *p) {
    int i;
    int r;
    char *e;
    for (i = 0, e = p; i < 20; i++, e += 2) {
        if (*(short *)(e + 4) >= 0) {
            func_0027BDC0(p, *(short *)(e + 4) & 255, 0);
            r = func_0027BDC0(p, *(unsigned char *)(e + 4), 1);
        }
    }
    return r;
}

short func_0027CB50(char *, int);

int func_0027BDB0(char *, unsigned char);

int func_0027CBB0(char *, int, short);

int func_0027CCC0(char *, int, short);

int func_0027BCB0(char *, unsigned char);

int func_0027C1F0(char *, int, int, int, int);

int func_0027C040(char *p, int k) {
    short n;
    int i;
    int a;
    int b;
    int r;
    if (*(int *)(p + 0xA8) == 0) return -1;
    if (*(short *)p <= (short)k) return -2;
    n = func_0027CB50(p, k);
    for (i = 0; i < *(short *)(p + 0x54); i++) {
        if (*(short *)(p + i * 2 + 0x2C) >= 0) {
            func_0027BDB0(p, *(short *)(p + i * 2 + 0x2C));
            *(short *)(p + i * 2 + 0x2C) = -1;
        }
    }
    for (i = 0; i < n; i++) {
        a = func_0027CBB0(p, k, i);
        b = func_0027CCC0(p, k, i);
        if (b == 0) return -1;
        r = func_0027BCB0(p, a);
        if (r >= 0) {
            *(short *)(p + r * 2 + 0x2C) = a;
        }
        if (func_0027C1F0(p, a, b, 1, 0) != 0) return -1;
    }
    *(short *)(p + 2) = k;
    *(short *)(p + 0x54) = n;
    return 0;
}

extern char D_01C61900[];

int func_001C4890();

int func_0027BCC0(p0, p1, p2) int p0; int p1; int p2; {
    int func_0027BC50();
    int v0;
    int v1;
    int v5;
    int v4;
    int v2;
    char *v3;
    int v6;
    int tmp0;
    int tmp1;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    tmp0 = func_0027BC50();
    if ((short)tmp0 >= 0) {
        return -2;
    } else {
        v4 = -1;
        v5 = 0;
        v3 = (char *)v0;
        do {
            if (*(short *)(v3 + 4) == v4) {
                v4 = v5;
                break;
            }
            v5 = (v5 + 1);
            v3 = (v3 + 2);
        } while ((v5 < 20));
        if (v4 < 0) {
            return -1;
        } else {
            *(short *)((char *)((v4 << 1) + v0) + 4) = (v1 & 255);
            tmp1 = func_001C4890(D_01C61900, v1, 0);
            *(int *)((char *)((v4 << 2) + v0) + 88) = tmp1;
            *(char *)((char *)(v4 + v0) + 172) = v2;
            v6 = v4;
            return v6;
        }
    }
}

int func_0027BE50(p0) int p0; {
    int func_0027BC50();
    int v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p0;
    tmp0 = func_0027BC50();
    v1 = (short)tmp0;
    if (v1 < 0) {
        v2 = 0;
    } else {
        v2 = *(int *)((char *)((v1 << 2) + v0) + 88);
    }
    return v2;
}

int func_0027CC60();

int func_0027BFD0(p0, p1) int p0; int p1; {
    char *v0;
    int tmp1;
    v0 = (char *)p0;
    if (p1 == 0) {
        return 0;
    } else {
        *(int *)(v0 + 168) = p1;
        *(short *)(v0 + 0) = *(int *)(*(char **)(v0 + 168) + 4);
        tmp1 = func_0027CC60();
        if ((signed char)tmp1 != 1) {
            *(int *)(v0 + 168) = 0;
            return 0;
        } else {
            return 1;
        }
    }
}

int func_0027CB40();

char *func_0027CD80();

int func_0027CC60(p0) int p0; {
    char *v1;
    char *v0;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_0027CB40();
    if ((tmp0 & 255) == 0) {
        v1 = (char *)-1;
    } else {
        v1 = func_0027CD80(v0, *(int *)(v0 + 168), 0);
        v1 = (v1 != 0) ? (char *)*(signed char *)(v1 + 6) : (char *)-1;
    }
    return (int)v1;
}

void func_0027BC40(int p0, int p1) {
    void func_0027BC50();
    func_0027BC50(p0, p1, 0);
}
