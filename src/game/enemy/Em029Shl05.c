void func_001AD140(char *);

int func_0041D6B0(float *x, float d);

void func_00206730(char *);

void func_001AD100(char *);

void func_0028C5C0(char *, int, float);

int func_0041D600(char *p);

void func_0041D840(char *a, char *b, float s);

void func_0041D820(char *, float, float);

void func_0041D6E0(char *, char *, int, float);

void func_004F6150(char *p) {
    char *b;
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0xB50);
        switch (*(int *)(p + 0xB54)) {
        case 0:
            *(float *)(p + 0xB60) = 60.0f;
            *(int *)(p + 0xB54) = 1;
        case 1:
            func_0041D820(p + 0x68, *(float *)(p + 0x78) * *(float *)(p + 0x10), 10.0f);
            b = p;
            if (b != 0) {
                b += 0x40;
            }
            func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
            *(float *)(p + 0x5C) = 1.0f;
        case 2:
            if ((unsigned char)func_0041D6B0((float *)(p + 0xB60), *(float *)(p + 0x10)) == 1) {
                func_001AD140(p);
                return;
            }
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D840(b, p + 0x1B0, 0.7f);
        func_0028C5C0(p + 0x8D0, 0, 1.0f);
    }
}

void func_0028C740();

void func_0041D670();

void func_004F6290(int p0) {
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

char *func_004F5D20(char *sc, char *pa, char *pb, char *pc, char *pd, char *pe) {
    void func_004F5F10(char *);
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
            func_004F5F10(r);
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

extern void func_004F5F80();

void func_004F6360(char *p) { func_004F5F80(p + -64); }

extern void func_004F62C0();

void func_004F6370(char *p) { func_004F62C0(p + -64); }

void func_004F6380(char *p) { func_004F62C0(p + -160); }

void func_004F6270(void) {}

void func_004F6280(void) {}
