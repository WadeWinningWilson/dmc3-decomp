char *func_001B0FD0(char *, int, int);

extern char D_00645A30[];

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_003852D0(char *);

typedef struct { float f[3]; } SF3;

 typedef struct { short h[3]; } SH3;

char *func_003850B0(char *sc) {
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
    **q = func_001B0FD0(a, 0x1E0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x1E0, t);
        if (r != 0) {
            func_003852D0(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x3, **q);
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
    *(unsigned char *)(o + 0x54) = *(unsigned char *)sc;
    *(signed char *)(o + 0x55) = *(signed char *)(sc + 1);
    *(unsigned char *)(o + 0x56) = *(unsigned char *)(sc + 2);
    *(unsigned char *)(o + 0x57) = *(unsigned char *)(sc + 3);
    *(signed char *)(o + 0x58) = *(signed char *)(sc + 4);
    *(float *)(o + 0x5C) = *(float *)(sc + 8);
    *(SF3 *)(o + 0x60) = *(SF3 *)(sc + 0xC);
    *(float *)(o + 0x6C) = *(float *)(sc + 0x18);
    *(float *)(o + 0x70) = *(float *)(sc + 0x1C);
    *(SH3 *)(o + 0x74) = *(SH3 *)(sc + 0x20);
    *(SF3 *)(o + 0x7C) = *(SF3 *)(sc + 0x28);
    *(float *)(o + 0x88) = *(float *)(sc + 0x34);
    *(float *)(o + 0x8C) = *(float *)(sc + 0x38);
    *(SH3 *)(o + 0x90) = *(SH3 *)(sc + 0x3C);
    *(unsigned char *)(o + 0x96) = *(unsigned char *)(sc + 0x42);
    *(unsigned char *)(o + 0x97) = *(unsigned char *)(sc + 0x43);
    *(float *)(o + 0x98) = *(float *)(sc + 0x44);
    *(float *)(o + 0x9C) = *(float *)(sc + 0x48);
    *(unsigned char *)(o + 0xA0) = *(unsigned char *)(sc + 0x4C);
    *(int *)(o + 0xA4) = *(int *)(sc + 0x50);
    *(int *)(o + 0xA8) = *(int *)(sc + 0x54);
    return ret;
}
