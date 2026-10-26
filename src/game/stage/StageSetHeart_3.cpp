extern "C" {
extern char D_00578670[];
}

extern "C" {
int func_002F7C10(int, int);
}

class V10_1_ii {
public:
    virtual void d0();
    virtual void d1();
    virtual int m(int);
};

class VC_1_ii {
public:
    virtual void d0();
    virtual int m(int);
};

extern "C" {
void func_0044E700(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    char *v0;
    int v1;
    int v2;
    v2 = func_002F7C10(*(int *)((D_00578670 + (p1 << 3)) + 0), 0);
    v0 = (char *)v2;
    v1 = (p2 & 255);
    if (v0 != 0) {
        if (v1 == 1) {
            v2 = ((V10_1_ii *)v0)->m(0);
        } else {
            v2 = ((VC_1_ii *)v0)->m(0);
        }
    }
}
}
