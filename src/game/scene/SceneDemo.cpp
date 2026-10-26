extern "C" {
extern char * D_005BC1A8;
}

extern "C" {
extern char D_01CAF2C0[];
}

extern "C" {
extern char D_01CAF51F[];
}

extern "C" {
extern char D_01CAF570[];
}

extern "C" {
extern char D_01CAFF10[];
}

extern "C" {
extern char D_01CAFF14[];
}

extern "C" {
void func_001ABE60(char *, int);
}

extern "C" {
void func_001B1130(int);
}

extern "C" {
int func_00286FD0(int, int);
}

extern "C" {
int func_002CFC90(int);
}

extern "C" {
void func_00323140(int, int, int, int, int);
}

extern "C" {
void func_003712B0(char *, int);
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
int func_002DBD80(char *p0) {
    char *v0;
    int v1;
    int v2;
    int tmp7;
    int tmp9;
    int tmp11;
    *(int *)(p0 + 12) = *(int *)D_01CAFF10;
    *(int *)(p0 + 20) = *(short *)(*(char **)(*(char **)(p0 + 12) + 4) + 242);
    v0 = p0;
    if (!(*(int *)(p0 + 20) < 200)) {
        *(char *)(v0 + 16) = 1;
    } else {
        *(char *)(v0 + 16) = 0;
    }
    func_00323140(*(int *)(*(char **)(v0 + 12) + 12), 0, 32, 1, 1);
    tmp7 = func_00286FD0(*(int *)(*(char **)(v0 + 12) + 8), *(int *)(v0 + 20));
    if (tmp7 != 0) {
        func_003712B0(D_01CAF570, 1);
    }
    *(char **)D_01CAFF14 = (v0 + 0x1cd30);
    *(char *)D_01CAF51F = 1;
    func_001B1130(1);
    tmp9 = func_002CFC90(*(int *)(v0 + 20));
    if (tmp9 != 0) {
        func_001ABE60(D_01CAF2C0, 1);
    }
    tmp11 = ((V24_2_iii *)D_005BC1A8)->m(0, 0);
    return tmp11;
}
}
