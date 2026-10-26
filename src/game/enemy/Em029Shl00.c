char *func_00279290(char *);

void func_00206730(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

int func_0041D600(char *p);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_001A5C30(char *);

void func_001A5D00(char *);

void func_003D29C0(char *);

void func_0041D840(char *a, char *b, float s);

void func_003D2560(char *p) {
    char *b;
    if ((unsigned char)func_0041D600(p) != 0) {
        if (*(unsigned char *)(*(char **)(p + 0xD0) + 0x976) == 0) {
            func_001A5C30(func_00279290(p + 0x240));
        } else {
            func_001A5D00(func_00279290(p + 0x240));
        }
        func_001AD100(p);
        func_00206730(p + 0xB50);
        switch (*(int *)(p + 0xB58)) {
        case 0:
            func_003D29C0(p);
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x1B0, 1.0f);
        func_0028C5C0(p + 0x8D0, 0, 1.0f);
        func_00195E20(D_005BE098, p);
    }
}

void func_0028C740();

void func_0041D670();

void func_003D2D30(int p0) {
    func_0028C740((p0 + 2256));
    func_0041D670((p0 + 2896));
}

void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

typedef struct { float f[4]; } SF4;

char *func_003D2E30(char *sc, char *pa, char *pb, char *pc, char *pd, char *pe) {
    void func_003D3020(char *);
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
    **q = func_001B0FD0(a, 0xB80, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0xB80, t);
        if (r != 0) {
            func_003D3020(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
    if (o != 0) {
        *(signed char *)(o + 0x150) = *(signed char *)sc;
        *(SF4 *)(o + 0x160) = *(SF4 *)(sc + 0x10);
        *(short *)(o + 0x170) = *(short *)(sc + 0x20);
        *(unsigned short *)(o + 0x172) = *(unsigned short *)(sc + 0x22);
        *(unsigned short *)(o + 0x174) = *(unsigned short *)(sc + 0x24);
        *(SF4 *)(o + 0x178) = *(SF4 *)(sc + 0x28);
        *(char **)(ret + 0x190) = pa;
        *(char **)(ret + 0xD0) = pb;
        *(char **)(ret + 0x194) = pc;
        *(char **)(ret + 0xB58) = pd;
        *(char **)(ret + 0xB5C) = pe;
    }
    return ret;
}

extern void func_003D21F0();

void func_003D2E00(char *p) { func_003D21F0(p + -64); }

extern void func_003D2D60();

void func_003D2E10(char *p) { func_003D2D60(p + -64); }

void func_003D2E20(char *p) { func_003D2D60(p + -160); }
