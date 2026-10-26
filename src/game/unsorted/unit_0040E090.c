void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

typedef struct { float f[3]; } SF3;

void func_0040E5E0(char *);

typedef struct { int id; unsigned int n; int off[1]; } CT;

static inline char *ent10(CT *t, int i) { char *r; if (t->n < i + 1) { r = 0; } else if (t->off[i] == 0) { r = 0; } else { r = (char *)t + t->off[i]; } return r; }

char *func_0040E2B0(char *p, char *h, short *sc) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (p == 0) {
        return 0;
    }
    if (h == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x490, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x490, t);
        if (r != 0) {
            func_0040E5E0(r);
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
    *(short *)(o + 0xF0) = sc[0];
    *(short *)(o + 0xF2) = sc[1];
    *(short *)(o + 0xF4) = sc[2];
    *(short *)(o + 0xF6) = sc[3];
    *(short *)(o + 0xF8) = sc[4];
    *(SF3 *)(o + 0xFC) = *(SF3 *)((char *)sc + 0xC);
    *(char **)(ret + 0x2F8) = p;
    *(char **)(ret + 0x2FC) = ent10((CT *)h, sc[0] * 10);
    *(char **)(ret + 0x300) = ent10((CT *)h, sc[1] * 10);
    *(char **)(ret + 0x304) = ent10((CT *)h, sc[2] * 10);
    *(char **)(ret + 0x308) = ent10((CT *)h, sc[3] * 10);
    return ret;
}
