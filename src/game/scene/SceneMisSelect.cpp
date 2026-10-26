extern "C" {
extern char * D_005BC1A8;
}

extern "C" {
extern int D_005BC660;
}

extern "C" {
extern char D_006480D0[];
}

extern "C" {
extern char D_01CB12BC[];
}

extern "C" {
extern char D_01DFA310[];
}

extern "C" {
void func_00195F60(char *);
}

extern "C" {
void func_001960F0(char *, int);
}

extern "C" {
int func_0030E440(char *, int);
}

class V24_2_iiv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void m(int, int);
};

extern "C" {
int func_002FE180(int p0) {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    ((V24_2_iiv *)D_005BC1A8)->m(0, 0);
    func_001960F0(D_006480D0, 36);
    func_00195F60(D_006480D0);
    v1 = func_0030E440(D_01DFA310, *(int *)D_01CB12BC);
    v2 = D_005BC660;
    switch (v2) {
    case 0:
        D_005BC660 = 1;
        *(int *)(v0 + 24) = 3;
        *(int *)(v0 + 28) = 2;
        *(int *)(v0 + 32) = 0;
        *(char *)(v0 + 120) = 4;
        return v1;
    case 1:
        *(int *)(v0 + 24) = 1;
        *(int *)(v0 + 28) = 2;
        *(int *)(v0 + 32) = 0;
        *(char *)(v0 + 120) = 0;
        return v1;
    case 2:
        *(int *)(v0 + 24) = 1;
        *(int *)(v0 + 28) = 2;
        *(int *)(v0 + 32) = 1;
        *(char *)(v0 + 120) = 0;
        return v1;
    }
    *(int *)(v0 + 24) = 1;
    *(int *)(v0 + 28) = -1;
    *(int *)(v0 + 32) = 0;
    *(char *)(v0 + 120) = 0;
    return v1;
}
}
