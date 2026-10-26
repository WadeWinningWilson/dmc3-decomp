extern char D_005A6F50[];

extern char D_005B67E0[];

void func_001003E0();

void func_00100580();

void func_0013D240();

char *func_00478260(char *p, short flag) {
    void func_002791E0();
    if (p != 0) {
        *(char **)p = D_005B67E0;
        func_002791E0((p + 0x9080), -1);
        func_002791E0((p + 0x8a80), -1);
        func_001003E0((p + 4736), (void *)func_002791E0, 1536, 20);
        func_002791E0((p + 3200), -1);
        func_002791E0((p + 1664), -1);
        func_001003E0((p + 128), (void *)func_002791E0, 1536, 1);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240((p + 36), -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_01C61820[];

extern char D_01DFA340[];

extern char *D_005819B0[];

typedef struct { int x0; int y0; int c0; int o0; int x1; int y1; int c1; int o1; } R47A;

typedef struct { int a0; int a4; R47A *r; int c; int a10; int a14; unsigned int *col; int a1C[5]; unsigned char b30; char p31; short h32; short h34; char p36[7]; unsigned char b3D; char p3E[0x1A]; } B47A;

void func_001B96E0(char *, B47A *);

void func_0047A2F0(char *p) {
    void func_0030FD40(char *, char *, int, int, int, int, int, int);
    unsigned int col[2];
    B47A b;
    R47A r;
    int i;
    int y;
    signed char c;
    char *t;
    for (i = 0, y = 0x18; i < 16; i++, y += 12) {
        c = *(signed char *)(p + i + 0x9850);
        if (c != -1) {
            t = D_005819B0[c];
            if (*(unsigned char *)(p + 0x978A) & 4) {
                func_0030FD40(D_01DFA340, t, 0x100, y, i == *(short *)(p + 0x978E) ? 0xC0C0C0 : 0x303030, 0, 0xFFFFF2, 0);
            } else if (*(unsigned char *)(p + 0x97AD) == 1 && i == *(short *)(p + 0x978E)) {
                func_0030FD40(D_01DFA340, t, 0x20, 0x20, 0x40C0C0, 0, 0xFFFFF2, 1);
            }
        }
    }
    if (!(*(unsigned char *)(p + 0x978A) & 4) && *(unsigned char *)(p + 0x97AD) == 1) {
        r.x0 = 0x20;
        r.y0 = 0x2C;
        r.c0 = 0xFFFFFF;
        r.o0 = 1;
        r.x1 = 0xC0;
        r.y1 = 0x2C;
        r.c1 = 0xFFFFFF;
        r.o1 = 1;
        col[1] = 0x80008080;
        col[0] = 0x80008080;
        b.r = &r;
        b.col = col;
        b.h34 = 1;
        b.b30 = 4;
        b.b3D = 1;
        b.c = 0;
        b.h32 = 0;
        func_001B96E0(D_01C61820, &b);
    }
}

extern char D_01DFABA0[];

void func_003303F0(char *, int, int, int, int);

extern char D_006663C0[];

int func_001AE1E0(char *, int);

int func_001AE1A0(char *, int);

int func_001AE3B0(char *, int);

int func_001AE360(char *, int);

signed char func_00483BF0(char *, signed char);

void func_004791E0(char *p) {
    unsigned short k;
    unsigned short old;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 0x978A) |= 4;
        (*(unsigned char *)(p + 5))++;
        break;
    case 1:
        if (!((unsigned short)func_001AE1A0(D_006663C0, 0) & 0x5000) && *(signed char *)(p + 0x9799) != *(signed char *)(p + 0x979E) && *(unsigned char *)(p + 0x97A0) == 0) *(unsigned char *)(p + 0x97A0) = 1;
        k = (unsigned short)func_001AE3B0(D_006663C0, 0) | (unsigned short)func_001AE360(D_006663C0, 0);
        old = *(unsigned short *)(p + 0x978E);
        if ((unsigned short)func_001AE1E0(D_006663C0, 0) & 0x40) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            (*(unsigned char *)(p + 5))++;
        } else if ((unsigned short)func_001AE1E0(D_006663C0, 0) & 0x10) {
            func_003303F0(D_01DFABA0, 0, 3, 0, 0);
            *(unsigned char *)(p + 0x9788) = 2;
            *(unsigned char *)(p + 4) = 6;
            *(unsigned char *)(p + 5) = 0;
        } else if (k & 0x4000) {
            do {
                (*(short *)(p + 0x978E))++;
                if (!(*(short *)(p + 0x978E) < 16)) *(short *)(p + 0x978E) = 0;
            } while (*(signed char *)(p + *(short *)(p + 0x978E) + 0x9850) == -1);
        } else if (k & 0x1000) {
            do {
                (*(short *)(p + 0x978E))--;
                if (*(short *)(p + 0x978E) < 0) *(short *)(p + 0x978E) = 15;
            } while (*(signed char *)(p + *(short *)(p + 0x978E) + 0x9850) == -1);
        } else if (*(int *)(*(char **)(p + 0x9780) + 0x104) != 3) {
            if ((unsigned short)func_001AE1E0(D_006663C0, 0) & 1) {
                func_003303F0(D_01DFABA0, 0, 3, 0, 0);
                *(unsigned char *)(p + 0x9788) = 3;
                *(unsigned char *)(p + 4) = 6;
                *(unsigned char *)(p + 5) = 0;
            } else if ((unsigned short)func_001AE1E0(D_006663C0, 0) & 2) {
                func_003303F0(D_01DFABA0, 0, 3, 0, 0);
                *(unsigned char *)(p + 0x9788) = 4;
                *(unsigned char *)(p + 4) = 6;
                *(unsigned char *)(p + 5) = 0;
            }
        }
        if (old != *(short *)(p + 0x978E)) {
            *(signed char *)(p + 0x9798) = *(signed char *)((char *)*(short *)(p + 0x978E) + (int)p + 0x9850);
            *(signed char *)(p + 0x9799) = func_00483BF0(*(char **)(p + 0x9784), *(signed char *)(p + 0x9798));
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        }
        break;
    case 2:
        if (*(signed char *)(p + 0x9799) != *(signed char *)(p + 0x979E)) {
            if (*(unsigned char *)(p + 0x97A0) == 1) break;
            if (*(unsigned char *)(p + 0x97A0) == 0) *(unsigned char *)(p + 0x97A0) = 1;
        }
        *(unsigned char *)(p + 0x978A) &= ~4;
        *(unsigned char *)(p + 0x978A) |= 2;
        *(unsigned char *)(p + 4) = 4;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 3:
        if (*(signed char *)(p + 0x979D) == 0 && *(unsigned char *)(p + 0x97A0) == 0) {
            *(unsigned char *)(p + 0x9788) = 2;
            *(unsigned char *)(p + 4) = 6;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    }
}

extern char D_005AADD0[];

extern char D_005B6810[];

extern char D_005B6834[];

extern char D_005B68B4[];

extern char D_005B6948[];

void func_0024F750(char *);

void func_0027A570(char *);

char *func_0047C870(char *p) {
    int i;
    char *e;
    func_0024F750(p);
    *(char **)(p + 0xD0) = D_005AADD0;
    *(int *)(p + 0xD8) = -1;
    *(char **)p = D_005B6810;
    *(char **)(p + 0x40) = D_005B6834;
    *(char **)(p + 0xA0) = D_005B68B4;
    *(char **)(p + 0xD0) = D_005B6948;
    func_0027A570(p + 0xA40);
    *(unsigned char *)(p + 0xDC) = 1;
    *(unsigned char *)(p + 0xDD) = 0;
    *(short *)(p + 0xDE) = -1;
    for (i = 0; i < 15; i++) {
        e = p + i * 160 + 0xE0;
        *(unsigned char *)e = 0;
        __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e + 0x10) : "memory");
        *(float *)(e + 0x50) = 0.0f;
        *(float *)(e + 0x54) = 0.0f;
        *(float *)(e + 0x58) = 0.0f;
        *(float *)(e + 0x5C) = 1.0f;
        *(float *)(e + 0x60) = 0.0f;
        *(float *)(e + 0x64) = 0.0f;
        *(float *)(e + 0x68) = 0.0f;
        *(float *)(e + 0x6C) = 1.0f;
        *(float *)(e + 0x70) = 0.0f;
        *(float *)(e + 0x74) = 0.0f;
        *(float *)(e + 0x78) = 0.0f;
        *(float *)(e + 0x7C) = 1.0f;
        *(float *)(e + 0x80) = 0.0f;
        *(float *)(e + 0x84) = 0.0f;
        *(float *)(e + 0x88) = 0.0f;
        *(float *)(e + 0x8C) = 1.0f;
        *(float *)(e + 0x90) = 0.0f;
    }
    return p;
}

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, int *);

int func_0022CD60(char *);

extern int D_005BDC98;

extern int D_005BDCA0;

int func_0047C670(char *, int, short *);

int func_0047C5A0(char *p, int a, char *st) {
    short id[2];
    char buf[0x20] __attribute__((aligned(16)));
    id[0] = -1;
    if ((func_0022CBA0(st) != 0) ^ 1) {
        do {
            func_0022CBB0(st, buf);
            if (func_0012B1A0(buf, &D_005BDC98) == 0) {
                return func_0047C670(p, a, id);
            }
            if (func_0012B1A0(buf, &D_005BDCA0) == 0) {
                id[0] = func_0022CD60(st);
            }
        } while ((func_0022CBA0(st) != 0) ^ 1);
    }
    return 0;
}

extern char *D_005BE0D8;

unsigned int func_003101B0(char *, int, int);

void func_0047C4F0(char *p) {
    void func_0030FD40(char *, int, int, int, int, int, int, int);
    int k;
    int id;
    int x;
    int y;
    unsigned int w;
    k = *(unsigned char *)(p + 4);
    if (k >= 3) {
        id = k == 4 ? 0x310C : 0x3106;
        w = func_003101B0(D_01DFA340, id, 16);
        x = 0x1D8 - (w >> 16);
        y = *(signed char *)(D_005BE0D8 + 3) != 0 ? 0xDE - *(short *)(D_005BE0D8 + 0x2E) : 0x1BD - *(short *)(D_005BE0D8 + 0x2E);
        func_0030FD40(D_01DFA340, id, x, y, 0x585858, 16, 0xFFFFF2, 1);
    }
}

void func_00100450(char *, void *, void *, int, int);

void func_0013D6A0(char *);

char *func_002790E0(char *);

char *func_00477EA0(char *p) {
    char *func_002791E0(char *, short);
    int i;
    char *q;
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
    *(char **)p = D_005B67E0;
    func_00100450(p + 0x80, (void *)func_002790E0, (void *)func_002791E0, 0x600, 1);
    func_002790E0(p + 0x680);
    func_002790E0(p + 0xC80);
    func_00100450(p + 0x1280, (void *)func_002790E0, (void *)func_002791E0, 0x600, 0x14);
    func_002790E0(p + 0x8A80);
    func_002790E0(p + 0x9080);
    *(unsigned char *)(p + 0x9680) = 0;
    *(unsigned char *)(p + 0x9700) = 0;
    *(int *)(p + 0x38) = 0;
    *(int *)(p + 0x3C) = 0;
    *(int *)(p + 0x40) = 0;
    *(int *)(p + 0x44) = 0;
    *(unsigned char *)(p + 0x9788) = 2;
    *(unsigned char *)(p + 0x9789) = 0;
    *(short *)(p + 0x978E) = 0;
    *(short *)(p + 0x9790) = 0;
    *(unsigned char *)(p + 0x978A) = 0;
    *(unsigned char *)(p + 0x9794) = 0;
    *(signed char *)(p + 0x979E) = -1;
    *(signed char *)(p + 0x9799) = -1;
    *(unsigned char *)(p + 0x979D) = 0;
    *(unsigned char *)(p + 0x979F) = 0;
    *(unsigned char *)(p + 0x97A0) = 0;
    *(unsigned char *)(p + 0x97A1) = 0;
    *(unsigned char *)(p + 0x97A2) = 0;
    *(short *)(p + 0x97A4) = -1;
    *(unsigned char *)(p + 0x97A3) = 0;
    *(unsigned char *)(p + 0x97A6) = 0;
    *(unsigned char *)(p + 0x97A7) = 0;
    *(unsigned char *)(p + 0x97A8) = 0;
    *(unsigned char *)(p + 0x97A9) = 0;
    *(unsigned char *)(p + 0x97AA) = 0;
    *(unsigned char *)(p + 0x97AB) = 0;
    *(unsigned char *)(p + 0x97AC) = 0;
    *(unsigned char *)(p + 0x97AD) = 0;
    *(int *)(p + 0x9840) = 0;
    *(int *)(p + 0x9844) = 0;
    *(float *)(p + 0x984C) = 0.3f;
    *(int *)(p + 0x9848) = 0;
    for (i = 0, q = p; i < 20; i++, q += 6) {
        *(unsigned char *)(q + 0x97B0) = 0;
        *(unsigned char *)(q + 0x97B1) = i;
        *(unsigned char *)(q + 0x97AE) = 0;
        *(unsigned char *)(q + 0x97AF) = 0;
    }
    *(unsigned char *)(p + 0x9828) = 0;
    *(unsigned char *)(p + 0x9829) = 0;
    *(unsigned char *)(p + 0x9826) = 0;
    *(unsigned char *)(p + 0x9827) = 0;
    return p;
}

int func_00478AC0(p0) char *p0; {
    int v0;
    int v1;
    v0 = 0x10000;
    if (*(unsigned char *)(p0 + 4) == 2) {
        v1 = 1;
        *(char *)((p0 + v0) + -26743) = v1;
    } else {
        v1 = 0;
    }
    return v1;
}

int func_00478AF0(p0) char *p0; {
    int v0;
    int v1;
    v0 = 0x10000;
    if (*(unsigned char *)(p0 + 4) != 7) {
        v1 = 0;
    } else {
        v1 = *(signed char *)((p0 + v0) + -26744);
    }
    return v1;
}

void func_004787E0(void) {}
