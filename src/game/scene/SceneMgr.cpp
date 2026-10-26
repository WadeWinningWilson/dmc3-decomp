extern "C" void func_0013D5D0(char *);

class VA8 {
public:
    virtual void m8(int);
    virtual void mC();
    virtual void m10();
    virtual int m14();
};

class VA4 {
public:
    virtual char *m8(char *, int);
};

class VA0 {
public:
    virtual void d8();
    virtual int mC(int, int);
};

extern "C" int func_0022C8C0(char *p) {
    if (*(int *)(p + 0x1C) == -2) {
        if (*(char **)(p + 8) != 0) {
            (*(char **)(p + 8))[8] = 1;
        }
        *(int *)(p + 0x1C) = -1;
    } else if (*(int *)(p + 0x1C) != -1) {
        if (*(VA8 **)(p + 8) != 0) {
            (*(VA8 **)(p + 8))->m10();
            (*(VA8 **)(p + 8))->m8(-1);
            func_0013D5D0(p + 0xC);
        }
        *(char **)(p + 8) = (*(VA4 **)(p + 4))->m8(p + 0xC, *(int *)(p + 0x1C));
        if (*(char **)(p + 8) != 0) {
            *(int *)(*(char **)(p + 8) + 4) = *(int *)(p + 0x1C);
            (*(VA8 **)(p + 8))->mC();
        }
        *(int *)(p + 0x1C) = -1;
    }
    if (*(VA8 **)(p + 8) != 0) {
        int r = (*(VA8 **)(p + 8))->m14();
        return ((VA0 *)p)->mC(*(int *)(*(char **)(p + 8) + 4), r);
    }
    return 0;
}
