extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_00503220(char *);

extern float D_0058BF70[];

extern "C" char *func_00503350(unsigned char p0) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x58, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00503220(t);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x2C, **q);
        (**q)[0x18] = 1;
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(unsigned char *)(ret + 0x54) = p0;
        *(float *)(ret + 0x48) = D_0058BF70[0];
    }
    return ret;
}
