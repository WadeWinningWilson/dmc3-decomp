/* Resets an entry (index from the global's +14 byte): a VU0 vector copy, then w = 1. */
extern char *D_005BE0D8;

/* Draw text 0x3106 / 0x3107 centred, its y depending on the layout flag. */
extern char D_01DFA340[];

unsigned int func_003101B0(char *, int, int);

/* The text helper with the id as a parameter (negative = none). */
void func_0050D9B0(char *p, int id) {
    void func_0030FD40(char *, int, int, int, int, int, int, int);
    int x, y;
    unsigned int w;
    if (id < 0) {
        return;
    }
    w = func_003101B0(D_01DFA340, id, 0);
    x = 472 - (w >> 16);
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, id, x, y, 0x585858, 0, 0xFFFFF2, 1);
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

void func_0050DCF0(char *);

char *func_0050DB70(char *p0, char *p1, int p2) {
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
    *b.pp = func_001B0FD0(a, 0x4A0, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x4A0, t);
        if (r != 0) {
            func_0050DCF0(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x8, *b.pp);
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
        *(char **)(ret + 0x464) = p0;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)
	sqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p1) : "memory");
        *(float *)(ret + 0x5C) = 1.0f;
        *(int *)(ret + 0x468) = p2;
        *(signed char *)(ret + 0x44) = -1;
        *(signed char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p0 + 0x46);
    }
    return ret;
}

extern char D_01DFABA0[];

void func_003303F0(char *, int, int, int, int);

extern char D_006663C0[];

unsigned short func_001AE360(char *, int);

unsigned short func_001AE3B0(char *, int);

typedef struct { int a; signed char b; char pad5[7]; int d; } T50C;

int func_0050C1F0(char *p) {
    int func_0050D510(char *, int);
    extern T50C D_0058C400[];
    T50C t;
    int r;
    unsigned short k;
    r = 0;
    k = func_001AE3B0(D_006663C0, 0) | func_001AE360(D_006663C0, 0);
    if (func_001AE360(D_006663C0, 0) & 0x40) {
        if ((unsigned char)func_0050D510(p, *(int *)(p + 0x39CC)) == 0) {
            func_003303F0(D_01DFABA0, 0, 0x13, 0, 0);
        } else {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            t = D_0058C400[*(int *)(p + 0x39CC)];
            if (t.b == -1) {
                r = 1;
            } else {
                r = 2;
                *(int *)(p + 0x39D4) = t.d;
            }
        }
    } else if (func_001AE360(D_006663C0, 0) & 0x10) {
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        r = 3;
    } else if (k & 0x4000) {
        (*(int *)(p + 0x39CC))++;
        if (*(int *)(p + 0x39CC) < 8) {
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
            *(int *)(p + 0x39C4) = 4;
        } else {
            *(int *)(p + 0x39CC) = 7;
        }
        if (*(int *)(p + 0x39C0) < 4) {
            (*(int *)(p + 0x39C0))++;
        }
    } else if (k & 0x1000) {
        (*(int *)(p + 0x39CC))--;
        if (*(int *)(p + 0x39CC) < 0) {
            *(int *)(p + 0x39CC) = 0;
        } else {
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
            *(int *)(p + 0x39C8) = 4;
        }
        if (0 < *(int *)(p + 0x39C0)) {
            (*(int *)(p + 0x39C0))--;
        }
    }
    return r;
}

char *func_00279290(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

void func_001A3B20(char *, int, int, int);

void func_0050C8B0(char *p, int a1) {
    if (a1 == 0) {
        func_001A1E70(func_00279290(p + 0x640), 0);
        func_001A1E70(func_00279290(p + 0x640), 2);
        if (*(int *)(p + 0x39C4) != 0) {
            func_001A3B20(func_00279290(p + 0x640), 2, 0, 0);
            *(int *)(p + 0x39C4) = *(int *)(p + 0x39C4) - 1;
        } else {
            func_001A3B20(func_00279290(p + 0x640), 2, 0x200, 0);
        }
        func_001A1E70(func_00279290(p + 0x640), 1);
        if (*(int *)(p + 0x39C8) != 0) {
            func_001A3B20(func_00279290(p + 0x640), 1, 0, 0);
            *(int *)(p + 0x39C8) = *(int *)(p + 0x39C8) - 1;
        } else {
            func_001A3B20(func_00279290(p + 0x640), 1, 0x200, 0);
        }
        func_001A2000(func_00279290(p + 0x40), 2);
        func_001A2000(func_00279290(p + 0x40), 1);
    } else {
        func_001A1E70(func_00279290(p + 0x40), 2);
        func_001A3B20(func_00279290(p + 0x40), 2, 0, *(int *)(p + 0x39CC) << 9);
        func_001A2000(func_00279290(p + 0x640), 0);
        func_001A2000(func_00279290(p + 0x640), 1);
        func_001A2000(func_00279290(p + 0x640), 2);
    }
}

extern unsigned int D_01CB0520[];

typedef struct { float a; float b; float c; } ret12;

static inline int bit_on(unsigned int *a, int k) {
    unsigned int *w = &a[k / 32];
    return (*w & (1 << (k & 31))) != 0;
}

unsigned char func_0050D720(int a, int b, int c) {
    ret12 func_0050D630(int, int, int);
    unsigned char r = 0;
    ret12 s = func_0050D630(a, b, c);
    signed char k = *(signed char *)&s;
    if (k != -1 && bit_on(D_01CB0520, k) == 1) {
        r = 1;
    }
    return r;
}

void func_001A2D70(char *, int, int);

void func_0050CD30(char *p, int b) {
    extern char D_0058C400[];
    unsigned char func_0050D510(char *, int);
    int c;
    int i;
    int k;
    char *q;
    if (b == 0) {

        for (i = 0; i < 5; i++) {
            if (*(int *)(p + 0x39C0) == i) {
                c = 0x80808080;
            } else {
                c = 0x80404040;
            }
            k = (int)((char *)(*(int *)(p + 0x39CC) - *(int *)(p + 0x39C0)) + i);
            if (func_0050D510(p, k) == 1) {
                func_001A1E70(func_00279290(p + i * 0x600 + 0x1240), 0);
                func_001A2000(func_00279290(p + i * 0x600 + 0x1240), 1);
                func_001A3B20(func_00279290(p + i * 0x600 + 0x1240), 0, 0, *(signed char *)(D_0058C400 + k * 16 + 6) << 9);
                func_001A2D70(func_00279290(p + i * 0x600 + 0x1240), 0, c);
            } else {
                func_001A2000(func_00279290(p + i * 0x600 + 0x1240), 0);
                func_001A1E70(func_00279290(p + i * 0x600 + 0x1240), 1);
                func_001A2D70(func_00279290(p + i * 0x600 + 0x1240), 1, c);
            }

        }
    } else {
        for (i = 0; i < 5; i++) {
            func_001A2000(func_00279290(p + i * 0x600 + 0x1240), 0);
            func_001A2000(func_00279290(p + i * 0x600 + 0x1240), 1);

        }
    }
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005BB560[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

void func_0027BBF0();

void func_00304E70();

char * func_0050B5D0(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005BB560;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 3, 135);
    func_00100450(p + 4672, (void *)func_002790E0, (void *)func_002791E0, 1536, 5);
    func_002790E0(p + 12352);
    *(char *)(p + 13888) = 0;
    func_00100450(p + 14016, (void *)func_00304E70, (void *)func_0027BBF0, 128, 5);
    *(char *)(p + 14656) = 0;
    *(char *)(p + 14832) = 2;
    *(int *)(p + 14784) = 0;
    *(int *)(p + 14796) = 0;
    *(int *)(p + 14800) = 0;
    *(int *)(p + 14792) = 0;
    *(int *)(p + 14788) = 0;
    *(int *)(p + 60) = 0;
    *(char *)(p + 14814) = 0;
    *(int *)(p + 14820) = -1;
    *(short *)(p + 14816) = 128;
    *(char *)(p + 14824) = 0;
    *(char *)(p + 14825) = 0;
    *(char *)(p + 14826) = 0;
    *(int *)(p + 14828) = 1056964608;
    *(int *)(p + 14808) = 12550;
    *(char *)(p + 14812) = 1;
    *(char *)(p + 14813) = 0;
    return p;
}

int func_0050C1C0(p0) char *p0; {
    int v0;
    if ((*(unsigned char *)(p0 + 4) < 5)) {
        return 0;
    } else {
        v0 = *(signed char *)(p0 + 14832);
        return v0;
    }
}

extern char D_0058C408[];

extern char D_01DFA340[];

int func_0050D7E0(p0, p1) int p0; int p1; {
    int func_0030FD40();
    int func_0050D510();
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p1;
    tmp0 = func_0050D510();
    if ((tmp0 & 255) == 0) {
        v1 = 20001;
    } else {
        v1 = *(int *)((D_0058C408 + (v0 << 4)) + 0);
    }
    tmp1 = func_0030FD40(D_01DFA340, v1, 80, 160, 0x585858, 0, 0xfffff2, 1);
    return tmp1;
}

void func_0050C030(void) {}

typedef struct { signed char c; int a; int b; } R50D;

unsigned short func_001AE310(char *, int);

int func_0050C460(char *p) {
    R50D func_0050D630(char *, int, int);
    int r = 0;
    unsigned short m;
    if (!(func_001AE310(D_006663C0, 0) & 0xC)) {
        if (!(*(int *)(p + 0x39D0) == *(int *)(p + 0x39E4) && *(unsigned char *)(p + 0x39E8) != 0)
            && *(unsigned char *)(p + 0x39E9) == 0) {
            *(unsigned char *)(p + 0x39E9) = 1;
        }
    } else {
        *(unsigned char *)(p + 0x39E9) = 0;
    }
    m = func_001AE3B0(D_006663C0, 0) | func_001AE360(D_006663C0, 0);
    if (func_001AE360(D_006663C0, 0) & 0x40) {
        r = 1;
    } else if (func_001AE360(D_006663C0, 0) & 0x10) {
        r = 2;
    } else if (m & 8) {
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        (*(int *)(p + 0x39D0))++;
        if (*(int *)(p + 0x39D0) < 30) {
            R50D t;
            R50D u;
            u = func_0050D630(p, *(int *)(p + 0x39CC), *(int *)(p + 0x39D0));
            t.c = u.c;
            t.a = u.a;
            t.b = u.b;
            if (*(signed char *)&t == -1) (*(int *)(p + 0x39D0))--;
        } else {
            *(int *)(p + 0x39D0) = 29;
        }
    } else if (m & 4) {
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        (*(int *)(p + 0x39D0))--;
        if (*(int *)(p + 0x39D0) < 0) *(int *)(p + 0x39D0) = 0;
    }
    return r;
}
