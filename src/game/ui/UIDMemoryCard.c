/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Text helper with the 0 variant; record sizes rounded to 16; two-slot check; a scene reset. */
void func_004E5F00(void) {
    extern char D_01DFA340[];
    unsigned int func_003101B0(char *, int, int);
    void func_0030FD40(char *, int, int, int, int, int, int, int);
    int x, y;
    unsigned int w = func_003101B0(D_01DFA340, 0x3106, 0);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3106, x, y, 0x585858, 0, 0xFFFFF2, 1);
}

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_004E63D0(char *);

char *func_004E6280(float *v, float *w, int n) {
    void func_0013D240(char *, int);
    void func_001AAD30(char *);
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
    *b.pp = func_001B0FD0(a, 0xB40, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0xB40, t);
        if (r != 0) {
            func_004E63D0(r);
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
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(w) : "memory");
        *(int *)(ret + 0x478) = n;
    }
    return ret;
}

char *func_00279290(char *);

void func_001A2000(char *, int);

void func_001A1E70(char *, int);

unsigned int func_0030FDF0(int *, int, int, int, int, int, int, int);

int func_004E9D10(void);

int func_004E9D90(void);

extern int D_005829F0[];

extern int D_005829F4[];

extern signed char D_00666712[];

extern int D_01DFA344[];

extern int D_01DFA348[];

void func_004E5F90(char *p, int id, int sel) {
    unsigned int func_0030FD40(int *, int, int, int, int, int, int, int);
    int func_003101B0(int *, int, int);
    extern int D_01DFA340[];
    unsigned int r;
    unsigned int s;
    int x;
    int y;
    int c;
    int d;
    if (id < 0) return;
    D_01DFA344[0] = func_004E9D10();
    D_01DFA348[0] = func_004E9D90() + 1;
    s = func_003101B0(D_01DFA340, id, 0);
    x = 0x50;
    y = 0x9A;
    func_001A2000(func_00279290(p + 0x31C0), 1);
    func_001A2000(func_00279290(p + 0x31C0), 4);
    func_001A2000(func_00279290(p + 0x31C0), 5);
    if ((s & 0xFFFF) < 0x29) {
        func_001A1E70(func_00279290(p + 0x31C0), 1);
    } else if ((s & 0xFFFF) < 0x3D) {
        func_001A1E70(func_00279290(p + 0x31C0), 5);
        y = 0x84;
    } else {
        func_001A1E70(func_00279290(p + 0x31C0), 4);
        y = 0x70;
    }
    r = func_0030FD40(D_01DFA340, id, 0x50, y, 0x80585858, 0, 0xFFFFF0, 1);
    switch (id) {
    case 0x4E23:
    case 0x4E24:
    case 0x4E25:
    case 0x4E26:
    case 0x4E27:
    case 0x4E28:
    case 0x4E29:
    case 0x4E2A:
    case 0x4E2B:
    case 0x4E2C:
    case 0x4E48:
    case 0x4E4B:
    case 0x4E51:
    case 0x4E52:
    case 0x4E5E:
        if (sel != 0) {
            c = 0x404040;
            d = 0xFFFFFF;
        } else {
            c = 0xFFFFFF;
            d = 0x404040;
        }
        x += (r >> 16) / 3;
        y += r & 0xFFFF;
        x += (func_0030FDF0(D_01DFA340, D_005829F0[D_00666712[0] * 2], x, y, c, 0, 0xFFFFF0, 1) >> 16) + 0x14;
        func_0030FDF0(D_01DFA340, D_005829F4[D_00666712[0] * 2], x, y, d, 0, 0xFFFFF0, 1);
        break;
    }
}

extern char D_005A6F50[];

void func_0013D6A0(char *);

void func_00100450(char *, void *, void *, int, int);

extern char D_005BA060[];

void func_002790E0();

void func_002791E0();

char *func_004E3860(char *p) {
    void func_001AAD30();
    void func_0013D240();
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005BA060;
    func_00100450(p + 0x3C, (void *)func_001AAD30, (void *)func_0013D240, 16, 20);
    func_00100450(p + 0x1C0, (void *)func_002790E0, (void *)func_002791E0, 0x600, 7);
    func_002790E0(p + 0x2BC0);
    func_002790E0(p + 0x31C0);
    *(unsigned char *)(p + 0x3810) = 0;
    *(int *)(p + 0x180) = 0;
    *(unsigned char *)(p + 0x3891) = 0;
    *(unsigned char *)(p + 0x3892) = 0xFF;
    *(unsigned char *)(p + 0x3890) = 0xFF;
    *(unsigned char *)(p + 0x3894) = 0;
    *(unsigned char *)(p + 0x3895) = 0;
    *(unsigned char *)(p + 0x3896) = 1;
    *(unsigned char *)(p + 0x3897) = 0;
    return p;
}

void func_001A3B20(char *, int, int, int);

void func_001A2D70(char *, int, int);

void func_004E49D0(char *p, int a1) {
    if (a1 == 0) {
        func_001A2D70(func_00279290(p + 0xDC0), 2, 0x80808080);
        *(float *)(*(char **)(p + 0x37EC) + 0x184) = 1.2f;
        *(float *)(*(char **)(p + 0x37EC) + 0x198) = 1.3f;
        func_001A3B20(func_00279290(p + 0x7C0), 2, 0, 0);
        *(float *)(*(char **)(p + 0x37CC) + 0x184) = 1.2f;
        *(float *)(*(char **)(p + 0x37CC) + 0x198) = 1.3f;
        func_001A2D70(func_00279290(p + 0xDC0), 3, 0x80404040);
        *(float *)(*(char **)(p + 0x37F0) + 0x184) = 1.0f;
        *(float *)(*(char **)(p + 0x37F0) + 0x198) = 1.0f;
        func_001A3B20(func_00279290(p + 0x7C0), 3, 0, 0x400);
        *(float *)(*(char **)(p + 0x37D0) + 0x184) = 1.0f;
        *(float *)(*(char **)(p + 0x37D0) + 0x198) = 1.0f;
    } else {
        func_001A2D70(func_00279290(p + 0xDC0), 3, 0x80808080);
        *(float *)(*(char **)(p + 0x37F0) + 0x184) = 1.2f;
        *(float *)(*(char **)(p + 0x37F0) + 0x198) = 1.3f;
        func_001A3B20(func_00279290(p + 0x7C0), 3, 0, 0);
        *(float *)(*(char **)(p + 0x37D0) + 0x184) = 1.2f;
        *(float *)(*(char **)(p + 0x37D0) + 0x198) = 1.3f;
        func_001A2D70(func_00279290(p + 0xDC0), 2, 0x80404040);
        *(float *)(*(char **)(p + 0x37EC) + 0x184) = 1.0f;
        *(float *)(*(char **)(p + 0x37EC) + 0x198) = 1.0f;
        func_001A3B20(func_00279290(p + 0x7C0), 2, 0, 0x400);
        *(float *)(*(char **)(p + 0x37CC) + 0x184) = 1.0f;
        *(float *)(*(char **)(p + 0x37CC) + 0x198) = 1.0f;
    }
}

void func_004E46F0(char *p, int m) {
    int i;
    switch (m) {
    case 0:
        for (i = 0; i < 6; i++) func_001A2000(func_00279290(p + 0x31C0), i);
        for (i = 0; i < 6; i++) func_001A2000(func_00279290(p + 0x7C0), i);
        for (i = 0; i < 11; i++) func_001A2000(func_00279290(p + 0xDC0), i);
        for (i = 0; i < 10; i++) func_001A2000(func_00279290(p + 0x13C0), i);
        for (i = 0; i < 21; i++) func_001A2000(func_00279290(p + 0x19C0), i);
        for (i = 0; i < 9; i++) func_001A2000(func_00279290(p + 0x1FC0), i);
        for (i = 0; i < 2; i++) func_001A2000(func_00279290(p + 0x25C0), i);
        break;
    case 1:
        func_001A1E70(func_00279290(p + 0x31C0), 1);
        func_001A1E70(func_00279290(p + 0x7C0), 2);
        func_001A1E70(func_00279290(p + 0x7C0), 3);
        if (*(signed char *)(p + 0x3899) == 3) func_001A1E70(func_00279290(p + 0xDC0), 0);
        if (*(signed char *)(p + 0x3899) == 4) func_001A1E70(func_00279290(p + 0xDC0), 1);
        func_001A1E70(func_00279290(p + 0xDC0), 2);
        func_001A1E70(func_00279290(p + 0xDC0), 3);
        break;
    case 2:
        func_001A1E70(func_00279290(p + 0x31C0), 1);
        func_001A1E70(func_00279290(p + 0x7C0), 0);
        if (*(signed char *)(p + 0x3899) == 3) func_001A1E70(func_00279290(p + 0xDC0), 0);
        if (*(signed char *)(p + 0x3899) == 4) func_001A1E70(func_00279290(p + 0xDC0), 1);
        for (i = 0; i < 0xA; i++) func_001A1E70(func_00279290(p + 0x13C0), i);
        break;
    }
}

void func_004E4170(void) {}
