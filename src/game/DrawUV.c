void func_0019D320();

void func_0019D330();

void func_0019D340();

int func_0019DA00();

void func_0019DA50();

int func_001B0FD0();

int func_004010A0(char *p, int h, int a) {
    int n;
    int r;
    func_0019D320(h, a);
    n = func_0019DA00(h);
    r = func_001B0FD0(p + 4, n, -2);
    if (r == 0) {
        func_0019D330(h);
        return 0;
    }
    func_0019D340(h, r);
    func_0019DA50(h, n);
    *(int *)(p + 24) = h;
    *(char *)(p + 20) = 1;
    return 1;
}

extern char D_005B2510[];

void func_0013D6A0();

void func_00400F80();

char * func_00400FF0(p) char *p; {
    func_00400F80(p);
    *(char * *)(p) = D_005B2510;
    func_0013D6A0(p + 4);
    *(char *)(p + 20) = 0;
    return p;
}

int func_0019DA60();

void func_001A5B70();

int func_00401140(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0) {
    char *v0;
    int v1;
    v0 = p0;
    if (*(unsigned char *)(p0 + 20) != 0) {
        if (f0 < 0.0f) {
            func_001A5B70(*(int *)(v0 + 24));
        } else {
            *(float *)(*(char **)(v0 + 24) + 432) = f0;
        }
        v1 = func_0019DA60(*(int *)(v0 + 24));
    }
    return v1;
}

extern void func_0013D5D0();

void func_004011A0(char *p) { func_0013D5D0(p + 4); }
