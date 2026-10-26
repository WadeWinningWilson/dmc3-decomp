void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_003E1000(char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

typedef struct { unsigned char b[3]; } S3;

char *func_003E0E70(char *s) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x6C, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x6C, t);
        if (r != 0) {
            func_003E1000(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 3, **q);
        func_001B1430(**q, 1);
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
    o = ret;
    if (o == 0) {
        return 0;
    }
    *(int *)(o + 0x50) = *(int *)(s + 0x0);
    *(int *)(o + 0x54) = *(int *)(s + 0x4);
    *(int *)(o + 0x58) = *(int *)(s + 0x8);
    *(int *)(o + 0x5C) = *(int *)(s + 0xC);
    *(int *)(o + 0x60) = *(int *)(s + 0x10);
    *(S3 *)(o + 0x64) = *(S3 *)(s + 0x14);
    *(S3 *)(o + 0x67) = *(S3 *)(s + 0x17);
    *(unsigned char *)(o + 0x6A) = *(unsigned char *)(s + 0x1A);
    return ret;
}
