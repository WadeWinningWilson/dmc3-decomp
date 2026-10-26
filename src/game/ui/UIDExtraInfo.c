extern char D_01CAFF30[];

extern signed char D_01CAFF3C[];

extern unsigned char D_01CAFF3D[];

extern char *D_01CAFF10[];

int func_002A67F0(int, int);

void func_0050A5E0(char *x, unsigned char k, char *a, char *b, char *c) {
    int i;
    char *q;
    int v;
    *a = 1;
    *b = 1;
    *c = 1;
    for (i = 1, q = D_01CAFF30 + k * 21 + 1; i < 21; i++, q++) {
        if ((unsigned char)func_002A67F0(D_01CAFF3C[0], D_01CAFF3D[0]) == k) {
            if (D_01CAFF10[0] == 0) v = -1;
            else v = *(signed char *)(D_01CAFF10[0] + i + 0x71);
        } else {
            v = *(signed char *)(q + 0x560);
        }
        switch (v) {
        case -1:
            *a = 0;
            *b = 0;
            *c = 0;
            break;
        case 0: case 1: case 2: case 3:
            *b = 0;
            *c = 0;
            break;
        case 4:
            *c = 0;
            break;
        case 5:
            break;
        }
    }
}

extern signed char D_0058C2B0[];

extern char D_01CB0510[];

void func_0050A580(char *, int);

static inline int tst50A(char *base, int k) {
    int w = *(int *)(base + k / 32 * 4 + 0x10);
    return (w & (1 << (k & 0x1F))) != 0;
}

void func_0050A210(char *p) {
    int j;
    int i;
    signed char *q;
    signed char s;
    signed char t[3];
    signed char *pc;
    signed char *pb;
    pc = &t[2];
    pb = &t[1];
    for (i = 0; i < 11; i++) {
        if (!(*(int *)(p + 0x18) & (1 << i))) continue;
        j = 0;
        q = D_0058C2B0;
        s = i;
        for (; j < 0x58; j++, q += 3) {
            t[0] = q[0];
            *pb = q[1];
            *pc = q[2];
            if (tst50A(D_01CB0510, *pc) == 1) continue;
            if (t[0] != s && *pb != s) continue;
            switch (j) {
            case 0: func_0050A580(p, 0x4E20); break;
            case 1: func_0050A580(p, 0x4E21); break;
            case 2: func_0050A580(p, 0x4E22); break;
            case 3: func_0050A580(p, 0x4E23); break;
            case 4: break;
            case 5: func_0050A580(p, 0x4E24); break;
            default:
                if (j < 12) func_0050A580(p, 0x4E25);
                else if (j < 16) func_0050A580(p, 0x4E26);
                else func_0050A580(p, 0x4E27);
                break;
            }
        }
    }
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

char *func_0050A8C0(int p0) {
    void func_0050A720(char *);
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
    **q = func_001B0FD0(a, 0xD40, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_0050A720(t);
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
        *(int *)(ret + 0x38) = p0;
    }
    return ret;
}

int func_00509F90(p0) char *p0; {
    return (*(int *)(p0 + 4) == 17);
}

void func_0050A560(p0, p1) char *p0; int p1; {
    *(int *)((char *)((*(signed char *)(p0 + 104) << 2) + (int)p0) + 28) = p1;
    *(char *)(p0 + 104) = (*(signed char *)(p0 + 104) + 1);
}

void func_0050AF70(void) {}
