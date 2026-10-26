extern "C" void func_0013D6A0(char *);

extern "C" char *func_001B0FD0(char *, int, int);

extern "C" void func_0013D640(char *, char *);

extern "C" void func_001959E0(char *, int, char *);

extern "C" void func_0013D240(char *, int);

extern "C" char D_00645A30[];

typedef struct { unsigned char f; int x; char **pp; } HB;

extern "C" void func_0036D670(char *);

#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

extern "C" char *func_0036D760(char *p0, int p1) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x490, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0036D670(t);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 9, *b.pp);
        {
            char *x = *b.pp;
            x[0x18] = 1;
        }
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x484) = p0;
        *(int *)(ret + 0x488) = p1;
        *(unsigned char *)(ret + 0x45) = 4;
        VCOPY(ret + 0x50, p0 + 0x50);
        *(short *)(ret + 0x90) = *(short *)(p0 + 0x90);
    }
    return ret;
}
