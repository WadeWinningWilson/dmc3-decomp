extern char D_01C61900[];

short func_0027BC50(char *);

void func_001C52A0(char *, int);

short func_0027BDC0(char *p) {
    short i = func_0027BC50(p);
    if (i < 0) {
        return -1;
    }
    *(short *)((char *)(i * 2) + (int)p + 4) = -1;
    func_001C52A0(D_01C61900, *(int *)((char *)(i * 4) + (int)p + 0x58));
    *(unsigned char *)(i + (int)p + 0xAC) = 0;
    return i;
}

int func_0027CB50(short *, short);

char *func_0027CD80(short *, int, short);

int func_0027CBB0(short *p, short k, int j) {
    char *r;
    if (*p > k) goto a;
    return -1;
a:
    {
        short m = func_0027CB50(p, k);
        j = (short)j;
        if (m > j) goto b;
    }
    return -2;
b:
    r = func_0027CD80(p, *(int *)((char *)p + 0xA8), k);
    if (r != 0) return *(int *)(r + j * 8 + 8);
    return -1;
}

char *func_0027CCC0(short *p, short k, int j) {
    char *r;
    if (*p > k) goto a;
    return 0;
a:
    {
        short m = func_0027CB50(p, k);
        j = (short)j;
        if (m > j) goto b;
    }
    return 0;
b:
    r = func_0027CD80(p, *(int *)((char *)p + 0xA8), k);
    if (r != 0) return r + *(int *)(r + j * 8 + 0xC);
    return 0;
}

int func_0027CB40(char *p0) {
    return ((unsigned int)0 < (unsigned int)*(int *)(p0 + 168));
}

void func_0027BCC0();

void func_0027BCB0(int p0, int p1) {
    func_0027BCC0(p0, p1, 0);
}

void func_0027BE50();

void func_0027BE40(int p0, int p1) {
    func_0027BE50(p0, p1, 0);
}
