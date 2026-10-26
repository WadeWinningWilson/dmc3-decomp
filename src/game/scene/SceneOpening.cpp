class V14_2_iiv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(int, int);
};

extern "C" {
extern char D_005BBDD8;
}

extern "C" {
extern char * D_005BC1A8;
}

extern "C" {
extern int D_005BE0FC;
}

extern "C" {
extern char D_01CAF51F[];
}

extern "C" {
extern char D_01DFABA0[];
}

extern "C" {
int func_00331300(char *);
}

extern "C" int func_0022E8F0(char *p0) {
    int v0;
    char *tmp3;
    int tmp4;
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 20) = D_005BE0FC;
    *(int *)(p0 + 28) = *(int *)((&D_005BBDD8 + (*(int *)(p0 + 20) << 2)) + 0);
    D_005BE0FC = (D_005BE0FC + 1) % 2;
    tmp3 = D_005BC1A8;
    ((V14_2_iiv *)tmp3)->m(0, 1);
    tmp4 = func_00331300(D_01DFABA0);
    *(char *)D_01CAF51F = 2;
    return tmp4;
}
