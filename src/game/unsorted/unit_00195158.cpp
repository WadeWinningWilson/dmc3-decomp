class V1C_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual int m(void);
};

extern "C" void func_001957A0(char *p, signed char k) {
    char *o;
    int w = ((int *)(p + 0x450))[(unsigned int)k >> 5];
    if (w & (1 << (k & 31))) return;
    for (o = *(char **)(p + k * 4); o != 0; o = *(char **)(o + 32)) {
        switch (*(unsigned char *)(o + 24)) {
        case 2:
            ((V1C_0_i *)o)->m();
            break;
        case 1:
        case 3:
        case 4:
        case 0:
            break;
        }
    }
}

class V20_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual int m(void);
};

extern "C" {
int func_00195690(int p0, int p1) {
    int v0;
    int v1;
    char *v2;
    int tmp0;
    v2 = *(char **)((char (*)[4])((char *)p0 + 0))[(signed char)p1];
    if (v2 != 0) {
        do {
            v0 = *(unsigned char *)(v2 + 24);
            if (v0 != 0) {
                if (v0 != 4) {
                    tmp0 = 3;
                    if (v0 != tmp0) {
                        switch (v0) {
                        case 1:
                        case 2:
                            v1 = ((V20_0_i *)v2)->m();
                            break;
                        }
                    }
                }
            }
            v2 = *(char **)(v2 + 32);
        } while (v2 != 0);
    }
    return v1;
}
}

class V14_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual int m(void);
};

extern "C" {
int func_00195970(int p0, int p1) {
    char *v0;
    int v1;
    v0 = *(char **)((char *)(p0 + ((signed char)p1 << 2)) + 0);
    if (v0 != 0) {
        do {
            if (*(unsigned char *)(v0 + 54) == 1) {
                v1 = ((V14_0_i *)v0)->m();
            }
            v0 = *(char **)(v0 + 32);
        } while (v0 != 0);
    }
    return v1;
}
}
