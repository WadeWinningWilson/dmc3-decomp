extern "C" {
extern char * D_005BC1A8;
}

extern "C" {
extern int D_005BE1A4;
}

extern "C" {
extern char D_01CAF51F[];
}

class V24_2_iii {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual int m(int, int);
};

extern "C" {
int func_0034AD00(char *p0) {
    int v0;
    char *v1;
    int v2;
    int tmp1;
    *(int *)(p0 + 16) = 0;
    v1 = p0;
    *(int *)(p0 + 20) = 0;
    *(int *)(p0 + 12) = 0;
    v2 = ((V24_2_iii *)D_005BC1A8)->m(0, 0);
    v0 = D_005BE1A4;
    *(char *)D_01CAF51F = 3;
    if (v0 != 3) {
        tmp1 = 2;
        if (v0 != tmp1) {
            if (v0 != 1) {
                if (v0 != 0) {
                    return v2;
                } else {
                    *(int *)(v1 + 16) = 1;
                    return v2;
                }
            } else {
                *(int *)(v1 + 16) = 0;
                return v2;
            }
        } else {
            *(int *)(v1 + 16) = 1;
            return v2;
        }
    } else {
        *(int *)(v1 + 16) = 0;
        return v2;
    }
}
}
