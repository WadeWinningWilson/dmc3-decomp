extern "C" void func_001AD140(char *);

class Snd29C {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m14(unsigned int, int);
    virtual void m18(unsigned int, int);
    virtual void m1C(unsigned int, int, int);
    virtual void m20(unsigned int, int, int);
    virtual void m24(int, int);
    virtual void m28(int, int, int);
    virtual int m2C();
};

extern "C" char D_00666750[];

extern "C" int func_001AFB90(char *, int, int, int);

extern "C" void func_001AF080(char *, int);

extern "C" int func_00509AA0(char *);

extern "C" void func_00509B10(char *);

extern "C" int func_00509F90(char *);

extern "C" int func_0050F270(char *);

extern "C" int func_0050F7F0(int);

static inline int ok2FF(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

extern "C" {
void func_002FF1E0(char *p) {
    extern Snd29C *D_005BC1A8;
    extern void func_0048D950(char *, int, int, int, int);
    extern void func_0048D990(char *);
    extern int func_0048DBC0(char *);
    char *h;
    switch (*(unsigned int *)(p + 0x10)) {
    case 0:
        *(unsigned char *)(*(char **)(p + 0x34) + 0x7965) = 1;
        func_0048D950(p + 0x3C, 1, 8, 0, 0);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
    case 1:
        func_0048D990(p + 0x3C);
        switch ((unsigned char)func_0048DBC0(p + 0x3C)) {
        case 1:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        case 2:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        case 0:
            break;
        }
        break;
    case 2:
        if ((unsigned char)func_00509AA0(p + 0x88) == 1) *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        else *(int *)(p + 0x10) = 5;
        break;
    case 3:
        func_00509B10(p + 0x88);
        switch ((unsigned char)func_00509F90(p + 0x88)) {
        case 0:
            break;
        case 1:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        }
        break;
    case 4:
        if ((unsigned char)D_005BC1A8->m2C() != 1) break;
        D_005BC1A8->m14(0x80000000, 0x1E);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 5:
        *(int *)(p + 0x30) = func_001AFB90(D_00666750, 0xEEE, 0, 8);
        if (*(int *)(p + 0x30) == 0) {
            *(int *)(p + 0x10) = 0xC;
            break;
        }
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 6:
        if ((unsigned char)ok2FF(*(char **)(p + 0x30)) != 1) break;
        if ((*(int *)(p + 0x38) = func_0050F270(*(char **)(p + 0x30))) == 0) {
            *(int *)(p + 0x10) = 8;
            break;
        }
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 7:
        *(unsigned char *)(p + 0x24) = func_0050F7F0(*(int *)(p + 0x38));
        switch (*(unsigned char *)(p + 0x24)) {
        case 0:
            break;
        case 1: case 2: default:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        }
        break;
    case 8:
        if (*(char **)(p + 0x38) != 0) {
            func_001AD140(*(char **)(p + 0x38));
            *(char **)(p + 0x38) = 0;
        }
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 9: case 10:
        *(int *)(p + 0x10) = *(unsigned int *)(p + 0x10) + 1;
        break;
    case 11:
        h = *(char **)(p + 0x30);
        if (h != 0) {
            if (!(unsigned char)ok2FF(h)) break;
            func_001AF080(D_00666750, (int)h);
            *(int *)(p + 0x30) = 0;
        }
        switch (*(unsigned char *)(p + 0x24)) {
        case 1: default:
            *(int *)(p + 0x10) = 0xC;
            break;
        case 2:
            *(int *)(p + 0x10) = 0xE;
            break;
        }
        break;
    case 12:
        func_0048D950(p + 0x3C, 3, 8, 0, 0);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
    case 13:
        func_0048D990(p + 0x3C);
        switch ((unsigned char)func_0048DBC0(p + 0x3C)) {
        case 1:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        case 2:
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        case 0:
            break;
        }
        break;
    case 14:
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        *(int *)(p + 0x10) = 0;
        break;
    }
}
}

class V14_2_iiv {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void m(int, int);
};

class V2C_0_i {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual int m(void);
};

extern "C" {
void func_002FF090(char *p0) {
    extern char * D_005BC1A8;
    void func_0048D950(char *, int, int, int, int);
    void func_0048D990(char *);
    int func_0048DBC0(char *);
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = *(int *)(p0 + 16);
    switch (v1) {
    case 0:
        func_0048D950((v0 + 60), 3, 8, 0, 0);
        *(char *)(*(char **)(v0 + 52) + 31077) = 1;
        *(int *)(v0 + 16) = (*(int *)(v0 + 16) + 1);
        /* fall through */
    case 1:
        func_0048D990((v0 + 60));
        v2 = func_0048DBC0((v0 + 60));
        v3 = (v2 & 255);
        switch (v3) {
        case 1:
            *(int *)(v0 + 16) = (*(int *)(v0 + 16) + 1);
            break;
        case 2:
            *(int *)(v0 + 16) = (*(int *)(v0 + 16) + 1);
            break;
        case 0:
            break;
        }
        break;
    case 2:
        ((V14_2_iiv *)D_005BC1A8)->m(0x80000000, 30);
        *(char *)(*(char **)(v0 + 52) + 31077) = 0;
        *(int *)(v0 + 16) = (*(int *)(v0 + 16) + 1);
        /* fall through */
    case 3:
        v2 = ((V2C_0_i *)D_005BC1A8)->m();
        if ((v2 & 255) == 1) {
            *(char *)(*(char **)(v0 + 52) + 31076) = 1;
            *(int *)(v0 + 12) = (*(int *)(v0 + 12) + -1);
            *(int *)(v0 + 16) = 0;
        }
        break;
    }
}
}
