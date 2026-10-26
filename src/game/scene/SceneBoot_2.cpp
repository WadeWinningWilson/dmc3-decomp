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

extern "C" Snd29C *D_005BC1A8;

extern "C" char D_00666750[];

extern "C" char D_01DFA310[];

extern "C" void func_0030E580(char *, char *);

extern "C" void func_0030E910(char *, int, int);

extern "C" char D_01DFC550[];

extern "C" signed char D_00666712[];

extern "C" void func_004EF480(char *, int);

extern "C" void func_004EF4C0(char *);

extern "C" char *func_001AF3F0(char *, char *, int, int);

extern "C" char D_006480D0[];

extern "C" char D_01CB1290[];

extern "C" signed char D_00666718[];

extern "C" signed char D_00666719[];

extern "C" int D_00540350[];

extern "C" int D_01CB12BC[];

extern "C" int D_01DFC55C[];

extern "C" int D_01DFC558[];

extern "C" void func_001F3BF0(char *);

extern "C" int func_001F3CC0(char *, int, int, int);

extern "C" void func_0030E440(char *, int);

extern "C" int func_0013BF20(char *);

extern "C" int func_004F1980(char *);

extern "C" void func_0022E090(char *, int, int);

extern "C" void func_0030E540(char *);

extern "C" void func_00196C40(char *, int);

extern "C" void func_001349C0(short, short);

extern "C" void func_001ED3F0(void);

extern "C" void func_001ED310(void);

static inline int ok22D(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

static inline char *inner22D(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk22D(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) return inner22D(*(char **)(h + 0xC), i); return *(char **)(h + 0xC); }

extern "C" int func_0022DD60(char *p) {
    char *q;
    switch (*(unsigned int *)(p + 0x10)) {
    case 0:
        func_001F3BF0(D_01CB1290);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 1:
        if ((unsigned char)func_001F3CC0(D_01CB1290, D_00666712[0], 0x1C2, 0x3FFC) == 0) break;
        *(char **)(p + 0x1C) = func_001AF3F0(D_00666750, (char *)&D_00540350[(unsigned char)D_00666712[0]], 0, 0);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
    case 2:
        if ((unsigned char)ok22D(*(unsigned char **)(p + 0x1C)) != 1) break;
        func_0030E440(D_01DFA310, D_01CB12BC[0]);
        func_0030E580(D_01DFA310, chunk22D(*(char **)(p + 0x1C), -1));
        q = chunk22D(*(char **)(p + 0x1C), 0);
        if (q != 0) *(int *)(p + 0x20) = func_0013BF20(q);
        D_005BC1A8->m24(0, 0);
        func_004EF480(D_01DFC550, 0);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 3:
        if (func_004F1980(D_01DFC550) != 0) {
            *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
            break;
        }
        func_0022E090(p, D_01DFC55C[0], D_01DFC558[0]);
        break;
    case 4:
        D_005BC1A8->m24(0x80000000, 1);
        *(int *)(p + 0x10) = *(int *)(p + 0x10) + 1;
        break;
    case 5:
        func_0030E910(D_01DFA310, 0x4E20, 0x4E84);
        func_0030E540(D_01DFA310);
        func_004EF4C0(D_01DFC550);
        if (*(int *)(p + 0x20) != 0) {
            func_00196C40(D_006480D0, *(int *)(p + 0x20));
            *(int *)(p + 0x20) = 0;
        }
        func_001349C0(-D_00666718[0], -D_00666719[0]);
        func_001ED3F0();
        func_001ED310();
        return 1;
    }
    return 0;
}
