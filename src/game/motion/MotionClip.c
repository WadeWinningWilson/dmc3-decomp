/* Record i of a 48-byte array at +56, if its flag byte is set (real struct indexing gives
 * MW's index-first address add). */
typedef struct Rec48 {
    int a;
    unsigned char flag;
    char pad[43];
} Rec48;

typedef struct Rec48Table {
    char pad[56];
    Rec48 e[200];
    short n; /* records in use */
} Rec48Table;

Rec48 *func_00215A00(Rec48Table *t, short i) {
    if (t->e[i].flag != 0) {
        return &t->e[i];
    }
    return 0;
}

/* Calls func_00210660 for every flagged record of the 200-entry table (see func_00215A00). */
void func_00210660(Rec48 *);

void func_00213C40(Rec48Table *t) {
    int i;
    for (i = 0; i < 200; i++) {
        if (t->e[i].flag == 1) {
            func_00210660(&t->e[i]);
        }
    }
}

void func_002107A0(Rec48 *);

void func_00213710(Rec48Table *t) {
    int i;
    for (i = 0; i < t->n; i++) {
        if (t->e[i].flag == 1) {
            func_002107A0(&t->e[i]);
        }
    }
}

char *func_001B0FD0(char *, int, int);

extern char D_01DF5B50[];

extern char D_005BBB18[8];

extern char D_00542100[];

extern char D_005BE0D0[8];

void func_001F8580(char *, int);

int func_001F8590(char *, int);

void func_001F85A0(char *, int, int, char *);

void func_0012B2E8(char *, char *);

char *func_0012BA60(char *, char *);

void func_0012ACE8(char *, char *, char *);

int func_001EBB20(char *, char *);

int func_00197C30(char *, char *, int, int);

int func_0013CEF0(char *, char *);

int func_0013CFC0(char *, int);

int func_001EBB10(char *, char *, int);

static inline char *inner213(char *q) {
    if (*(unsigned int *)(q + 4) < 1) return 0;
    if (*(int *)(q + 8) == 0) return 0;
    return q + *(int *)(q + 8);
}

int func_00213CA0(char *p) {
    char b70[64];
    char b30[64];
    int h;
    char *r;
    if (*(unsigned char *)p == 0) {
        *(char **)(p + 0x14) = inner213(*(char **)(*(char **)(p + 0x25C0) + 0xC));
    } else if (*(unsigned char *)p == 2) {
        *(char **)(p + 0x14) = inner213(*(char **)(*(char **)(p + 0x25C0) + 0xC));
    } else {
        func_001F8580(D_01DF5B50, 9);
        if (!(unsigned char)func_001F8590(D_01DF5B50, 9)) return 0;
        func_001F85A0(D_01DF5B50, 9, *(short *)(p + 4), b70);
        func_0012B2E8(p + 0x18, b70);
        *func_0012BA60(p + 0x18, D_005BBB18) = 0;
        func_0012ACE8(b30, D_00542100, b70);
        h = func_001EBB20(D_005BE0D0, b30);
        if (!h) return 0;
        r = func_001B0FD0(p + 0x25C8, 0x10000, 0);
        if (!r) return 0;
        if (!(unsigned char)func_00197C30(p + 0x25D8, r, 0x10000, 5)) return 0;
        if (!(unsigned char)func_0013CEF0(p + 0x25F4, p + 0x25D8)) return 0;
        if (!func_0013CFC0(p + 0x25F4, h + 1)) return 0;
        if (!(unsigned char)func_001EBB10(D_005BE0D0, b30, *(int *)(p + 0x25F8))) return 0;
        *(int *)(p + 0x14) = *(int *)(p + 0x25F8);
    }
    return 1;
}

void func_00212EC0(float d, char *p) {
    void func_00213010(float);
    char *t;
    if (*(unsigned char *)(p + 0x0) == 0) return;
    *(float *)(p + 0xC) = *(float *)(p + 0xC) + d;
    if (!(d <= 0.0f)) {
        t = *(char **)(p + 0x10);
        if (*(int *)(t + 0x8) != 0) {
            if (!(*(float *)(p + 0xC) <= *(float *)(t + 0x18)) || !(*(float *)(p + 0xC) <= *(float *)(t + 0x10))) {
                *(float *)(p + 0xC) = *(float *)(t + 0x14);
                *(unsigned char *)(p + 0x0) = 4;
            } else {
                *(unsigned char *)(p + 0x0) = 2;
            }
        } else if (!(*(float *)(p + 0xC) <= *(float *)(t + 0x10))) {
            *(float *)(p + 0xC) = *(float *)(t + 0x10);
            *(unsigned char *)(p + 0x0) = 4;
        }
    } else {
        t = *(char **)(p + 0x10);
        if (*(int *)(t + 0x8) != 0) {
            if (*(float *)(p + 0xC) < *(float *)(t + 0x14) || *(float *)(p + 0xC) < *(float *)(t + 0xC)) {
                *(float *)(p + 0xC) = *(float *)(t + 0x18);
                *(unsigned char *)(p + 0x0) = 4;
            }
        } else if (*(float *)(p + 0xC) < *(float *)(t + 0xC)) {
            *(float *)(p + 0xC) = *(float *)(t + 0xC);
            *(unsigned char *)(p + 0x0) = 4;
        } else {
            *(unsigned char *)(p + 0x0) = 2;
        }
    }
    func_00213010(*(float *)(p + 0xC));
}

char *func_00215A30(char *p, unsigned char k, short id) {
    int i;
    for (i = 0; i < 200; i++) {
        if (*(unsigned char *)(p + i * 48 + 0x3C) != 0) {
            if (id != -1) {
                if (id == *(short *)(p + i * 48 + 0x40) && k == *(unsigned char *)(p + i * 48 + 0x3E)) return p + i * 48 + 0x38;
            } else if (k == *(unsigned char *)(p + i * 48 + 0x3E)) {
                return p + i * 48 + 0x38;
            }
        }
    }
    return 0;
}

void func_001FA370(char *, int, char *, int, int *);

void func_00212DA0(char *p, char *d) {
    void func_001F9EC0(char *);
    void func_00213010(char *, float);
    int i;
    int n;
    unsigned char *f;
    int cnt;
    int prev;
    int tmp;
    *(char **)(p + 0x10) = d;
    for (i = 0; i < 128; i++) {
        func_001F9EC0(p + i * 0x14 + 0x18);
    }
    n = *(unsigned char *)(d + 0x1C);
    f = (unsigned char *)(d + 0x1D);
    cnt = 0;
    prev = 1;
    for (i = 0; i < n; i++) {
        if (*f++ != 0) {
            func_001FA370(p + cnt * 0x14 + 0x18, cnt, d, prev, &tmp);
            *(int *)(p + cnt * 4 + 0xA18) = i;
            prev = cnt;
            cnt++;
        }
    }
    *(int *)(p + 0x14) = cnt;
    *(float *)(p + 0xC) = *(float *)(*(char **)(p + 0x10) + 0xC);
    *(unsigned char *)p = 2;
    func_00213010(p, *(float *)(p + 0xC));
}

int func_0012B1A0(char *, char *);

static inline unsigned char is2_213(char *p) { return *(unsigned char *)p == 2; }

void func_0022CB30(char *);

void func_0022CB50(char *, char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BBB38[8];

int func_00214AF0(char *, char *, int, short);

int func_00215100(char *, char *, int, short);

extern char D_005BBB20[8];

extern char D_005BBB28[8];

extern char D_005BBB30[8];

extern char D_00542110[];

extern char D_005BBB40[8];

extern char D_005BBB48[8];

extern char D_005BBB50[8];

extern char D_005BBB58[8];

extern char D_005BBB60[8];

extern char D_005BBB68[8];

extern char D_005BBB70[8];

extern char D_005BBB78[8];

extern char D_005BBB80[8];

extern char D_005BBB88[8];

extern char D_005BBB90[8];

extern char D_005BBB98[8];

extern char D_005BBBA0[8];

extern char D_005BBBA8[8];

extern char D_005BBBB0[8];

extern char D_005BBBB8[8];

int func_00213ED0(char *p) {
    char r[16];
    char tok[0x100];
    int st;
    unsigned char c;
    short k;
    func_0022CB30(r);
    func_0022CB50(r, *(char **)(p + 0x14));
    for (c = st = 0; c != 4; c = st) {
        func_0022CBB0(r, tok);
        if (tok[0] == '#') {
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BBB20) == 0) {
                st = 1;
            } else if (func_0012B1A0(tok, D_005BBB28) == 0) {
                st = 2;
            } else if (func_0012B1A0(tok, D_005BBB30) == 0) {
                st = 3;
                if (is2_213(p) == 1)
                    *(float *)(p + 0x10) = (float)func_0022CD60(r);
                else
                    func_0022CD60(r);
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                st = 4;
            } else {
                return 0;
            }
            continue;
        }
        switch (c) {
        case 0:
            return 0;
        case 1:
            if (func_0012B1A0(tok, D_005BBB40) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 2, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB48) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 3, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB50) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 5, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB58) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 4, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB60) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 6, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_00542110) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 0, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB68) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 1, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB70) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 7, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB78) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 7, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB80) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 8, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB88) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 9, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB90) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 10, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB98) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 11, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBBA0) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 12, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBBA8) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 13, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBBB0) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 14, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBBB8) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00214AF0(p, tok, 15, -1) == 0) return 0;
            }
            break;
        case 2:
            if (func_0012B1A0(tok, D_005BBB40) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 2, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB48) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 3, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB50) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 5, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB58) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 4, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB60) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 6, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_00542110) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 0, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB68) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 1, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB70) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 7, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB78) == 0) {
                k = func_0022CD60(r);
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 7, k) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB80) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 8, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB88) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 9, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB90) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 10, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB98) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 11, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBBA0) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 12, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBBA8) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 13, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBBB0) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 14, -1) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBBB8) == 0) {
                func_0022CBB0(r, tok);
                if ((unsigned char)func_00215100(p, tok, 15, -1) == 0) return 0;
            }
            break;
        case 4:
            break;
        default:
            return 0;
        }
    }
    return 1;
}

int func_002283A0();

int func_00214AB0(int p0, char *p1) {
    int t0;
    int t1;
    t0 = *(int *)(p1 + 0);
    t1 = func_002283A0(*(int *)(p1 + 0), p0);
    *(int *)(p1 + 0) = t1;
    return ((unsigned int)0 < (unsigned int)t1);
}

void func_00100450();

void func_001F9E40();

void func_001F9E70();

int func_00212C40();

int func_00212BF0(p0) int p0; {
    func_00100450((p0 + 24), (char *)func_001F9E40, (char *)func_001F9E70, 20, 128);
    func_00212C40(p0);
    return p0;
}

int func_00212C40(p0) int p0; {
    int func_001F9EC0();
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    v1 = 0;
    v3 = v0;
    do {
        *(int *)(v3 + 28) = 0x3f800000;
        v2 = func_001F9EC0((v3 + 24));
        v1 = (v1 + 1);
        v3 = (v3 + 20);
    } while ((v1 < 128));
    *(int *)(v0 + 16) = 0;
    *(int *)(v0 + 20) = 0;
    *(int *)(v0 + 4) = 0;
    *(int *)(v0 + 8) = 0;
    *(char *)(v0 + 0) = 0;
    return v2;
}

void func_001003E0();

void func_00100580();

int func_00212CB0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_001003E0((v0 + 24), (char *)func_001F9E70, 20, 128);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}

int func_00212D20(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_00212C40();
    *(int *)((char *)p0 + 4) = p1;
    *(int *)((char *)p0 + 8) = 0;
    return tmp0;
}

int func_00212D60(p0, p1) int p0; int p1; {
    int tmp0;
    tmp0 = func_00212C40();
    *(int *)((char *)p0 + 4) = 0;
    *(int *)((char *)p0 + 8) = p1;
    return tmp0;
}

extern char D_0054E4B0[];

int func_00213660() {
    char *v0;
    int v1;
    v0 = D_0054E4B0;
    v1 = 0;
    if (*(int *)D_0054E4B0 != 0) {
        do {
            v0 = (v0 + 4);
            v1 = (v1 + 1);
        } while (*(int *)(v0 + 0) != 0);
    }
    return v1;
}

float func_00212BE0(char *p) { return *(float *)(p + 44); }

int func_00215060(void) { return 1; }

int func_00215070(void) { return 1; }

int func_00215080(void) { return 1; }

int func_00215090(void) { return 1; }

int func_002150A0(void) { return 1; }

int func_002150B0(void) { return 1; }

int func_002150C0(void) { return 1; }

int func_002150D0(void) { return 1; }

int func_002150E0(void) { return 1; }

int func_002150F0(void) { return 1; }

int func_00215950(void) { return 1; }

int func_00215960(void) { return 1; }

int func_00215970(void) { return 1; }
