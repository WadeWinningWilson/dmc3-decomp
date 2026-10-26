/* Hand-matched C++ functions whose prototypes or classes conflict with vcalls-vcalls19. */

typedef struct { unsigned char f; int x; char **pp; } HB;
extern "C" {
void func_0013D6A0(char *);
char *func_001B0FD0(char *, int, int);
void func_0013D640(char *, char *);
void func_001959E0(char *, int, char *);
void func_0013D240(char *, int);
extern char D_00645A30[];
void func_0024FE00(char *);
void func_002F2E30(char *, char *);
extern char D_005B3AA0[], D_005B3AC4[], D_005B3B44[], D_005B3BD8[];
extern char *D_01CAFF0C[];
}

extern "C" char *func_0042D8F0(void) {
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
    **q = func_001B0FD0(a, 0x1F0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0024FE00(t);
            *(char **)t = D_005B3AA0;
            *(char **)(t + 0x40) = D_005B3AC4;
            *(char **)(t + 0xA0) = D_005B3B44;
            *(char **)(t + 0xD0) = D_005B3BD8;
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 6, **q);
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
        *(signed char *)(ret + 0x44) = -1;
        *(unsigned char *)(ret + 0x45) = 3;
        *(unsigned char *)(ret + 0x46) = 0x38;
        *(unsigned char *)(ret + 0x47) = 0x26;
        {
            char *x = *(char **)(D_01CAFF0C[0] + 0x20);
            char *r = ret;
            if (x != 0) func_002F2E30(x, r);
        }
    }
    return ret;
}
