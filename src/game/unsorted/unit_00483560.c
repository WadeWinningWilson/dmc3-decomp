short func_004838E0(void);

signed char func_00483960(char *, int);

void func_00483620(char *p, int t, int id, float f) {
    short func_004844D0(char *, int, int);
    if (id == 0 || t > 699) {
        *(char *)(p + 211) = 0;
    } else {
        *(char *)(p + 211) = 1;
        *(int *)(p + 212) = id;
        *(int *)(p + 216) = (int)f;
        *(short *)(p + 208) = func_004838E0();
        *(char *)(p + 210) = func_00483960(p, *(short *)(p + 208));
        *(short *)(p + 208) = func_004844D0(p, *(signed char *)(p + 210), *(short *)(p + 208));
    }
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

void func_00484AC0(char *);

char *func_00484960(float *v, float *w, int n, unsigned char c) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_001AAD30(a);
    *b.pp = func_001B0FD0(a, 0xB00, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0xB00, t);
        if (r != 0) {
            func_00484AC0(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        func_001B1430(*b.pp, 1);
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
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(v) : "memory");
        *(int *)(ret + 0x470) = n;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(w) : "memory");
        *(unsigned char *)(ret + 0xAF5) = c;
    }
    return ret;
}

int func_00483740(char *, int);

typedef struct { signed char a; signed char b; } S2c;

extern S2c D_00582F00[][16];

S2c func_00483AB0(char *p, int k) {
    S2c r;
    int t = 1;
    int x = *(int *)(p + 0xD4);
    if (x == 1) {
        t = 0;
    } else if (x == 2) {
        t = 1;
    } else if (x <= 13) {
        t = 2;
    } else if (x >= 14) {
        t = 3;
    } else {
        r.a = -1;
        return r;
    }
    r.a = D_00582F00[t][k].a;
    r.b = D_00582F00[t][k].b;
    if (r.a == -1) return r;
    if ((unsigned char)func_00483740(p, r.a) == 0) r.a = -1;
    return r;
}

extern short D_00582AF0[][20];

unsigned char func_004836A0(char *, signed char, int);

int func_00483C10(char *p, signed char c, int idx) {
    extern short D_00586140[];
    int func_004844D0(char *, signed char, short);
    int r;
    short v = D_00582AF0[c][idx];
    if (v == -1) return -1;
    r = func_004844D0(p, c, v);
    if (func_004836A0(p, c, r) == 0) return -1;
    if (D_00586140[(short)r] == -1) r = -1;
    return r;
}

void func_00483870(char *p, int k, int b) {
    if (k == 8 && b > 31) {
        *(unsigned int *)(p + 0xC0) |= 1 << (b - 32);
    } else if (k < 26 && b < 32) {
        *(unsigned int *)((char *)(k * 4) + (int)p + 0x68) |= 1 << b;
    }
}

int func_004837F0(char *p, signed char k, int b) {
    int r;
    unsigned int *w;
    unsigned int m;
    if (k == 8 && b > 31) {
        r = (*(unsigned int *)(p + 0xC0) & (1 << (b - 32))) != 0;
    } else if (k < 26 && b < 32) {
        w = (unsigned int *)((char *)(k * 4) + (int)p + 0x68);
        m = 1 << b;
        r = (*w & m) != 0;
    } else {
        r = 0;
    }
    return r;
}

int func_00483560(p0) char *p0; {
    int v0;
    char *v1;
    v0 = 0;
    v1 = p0;
    do {
        *(int *)(v1 + 0) = 0;
        *(int *)(v1 + 104) = 0;
        v0 = (v0 + 8);
        *(int *)(v1 + 4) = 0;
        *(int *)(v1 + 108) = 0;
        *(int *)(v1 + 8) = 0;
        *(int *)(v1 + 112) = 0;
        *(int *)(v1 + 12) = 0;
        *(int *)(v1 + 116) = 0;
        *(int *)(v1 + 16) = 0;
        *(int *)(v1 + 120) = 0;
        *(int *)(v1 + 20) = 0;
        *(int *)(v1 + 124) = 0;
        *(int *)(v1 + 24) = 0;
        *(int *)(v1 + 128) = 0;
        *(int *)(v1 + 28) = 0;
        *(int *)(v1 + 132) = 0;
        v1 = (v1 + 32);
    } while ((v0 < 16));
    *(char *)(p0 + 211) = 0;
    return (int)p0;
}

int func_00483940(p0, p1) int p0; int p1; {
    extern char D_00586140[];
    return *(short *)((D_00586140 + ((short)p1 << 1)) + 0);
}

extern char D_00583EA0[];

int func_00483BF0(p0, p1) int p0; int p1; {
    return *(signed char *)((D_00583EA0 + (signed char)p1) + 0);
}
