#include "game/mt_rand.h"
/* Appends an entry to a 10-slot list (ids in front, 12-byte entries after). */
typedef struct Src21B { int a; float f; char rest[1]; } Src21B;

typedef struct Ent21B { int a; float f; char *rest; } Ent21B;

typedef struct List21B { short id[10]; Ent21B e[10]; unsigned int n; } List21B;

int func_0021B0B0(List21B *, int);

Ent21B *func_0021B100(List21B *p, Src21B *s, int id) {
    int r;
    if (p->n >= 10) {
        return 0;
    }
    r = func_0021B0B0(p, id);
    if (r) {
        return (Ent21B *)r;
    }
    p->id[p->n] = id;
    {
        Ent21B *e = &p->e[p->n];
        float f = s->f;
        e->a = s->a - 1;
        e->f = f;
        e->rest = s->rest;
    }
    p->n++;
    return &p->e[p->n - 1];
}

extern char D_005BBBE0;

void func_0022CB30(char *);

void func_0022CB50(char *, char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, char *);

int func_00216B10(char *u, char *s) {
    extern char D_005BBB38;
    void func_0022CD60(char *);
    char it[16];
    char tok[256];
    func_0022CB30(it);
    func_0022CB50(it, s);
    while ((func_0022CBA0(it) != 0) ^ 1) {
        func_0022CBB0(it, tok);
        if (tok[0] == '#') {
            func_0022CBB0(it, tok);
            if (func_0012B1A0(tok, &D_005BBBE0) == 0) {
                func_0022CD60(it);
            } else {
                if (func_0012B1A0(tok, &D_005BBB38) != 0) goto no;
                return 1;
            no:
                return 0;
            }
        }
    }
    return 1;
}

float func_0022CD90(char *);

char *func_0012BA60(char *, char *);

int func_0022CDC0(char *, char *);

void func_0012ACE8(char *, char *, ...);

int func_0022F930(char *, char *, char *);

int func_0022FF70(char *, int);

int func_0022FF80(char *, int);

extern char D_005BBC40[8];

extern char D_005BBBC8[8];

extern char D_005BBBD0[4];

extern char D_005BBB50[8];

extern char D_005BBCF0[8];

extern char D_005BBC50[8];

extern char D_00542358[];

extern char D_00542398[];

extern char D_005423A8[];

extern char D_005423B8[];

extern char D_00542C00[];

extern char D_00542BF0[];

extern char D_00542BE0[];

extern char D_00542BD0[];

extern char D_00542BC0[];

extern char D_00542BB0[];

extern char D_00542BA0[];

extern char D_00542B90[];

extern char D_00542B80[];

extern char D_00542B70[];

extern char D_00542B60[];

extern char D_00542B50[];

extern char D_00542B40[];

extern char D_00542B30[];

extern char D_00542B20[];

static inline char *ent21B(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(t + i * 4 + 8) == 0) { r = 0; } else { r = t + *(int *)(t + i * 4 + 8); } return r; }

static inline int nt21B(char *x) { return !x; }

int func_0021A790(char *p, char *src, char *ctx, char **aux) {
    int func_0022CD60(char *);
    char *func_00210A40(char *);
    extern char D_005BBB38[8];
    char r1[16];
    char r2[16];
    char tok[0x100];
    char path[0x100];
    char *o;
    int idx;
    char *db;
    float v;
    func_0022CB30(r1);
    func_0022CB30(r2);
    func_0022CB50(r1, src);
    if (aux != 0) func_0022CB50(r2, *aux);
    while (!func_0022CBA0(r1)) {
        func_0022CBB0(r1, tok);
        if (func_0012BA60(tok, D_005BBC40) == 0) continue;
        func_0022CBB0(r1, tok);
        if (func_0012BA60(tok, D_005BBBC8) != 0) {
            if ((o = func_00210A40(ctx)) == 0) return 0;
            *(int *)(o + 0x20) = 0;
            *(int *)(o + 0x54) = 0;
            *(float *)(o + 0x50) = 1000000.0f;
            *(unsigned char *)(o + 0x5D) = 0;
            *(unsigned char *)(o + 0x5E) = 0;
            *(unsigned char *)(o + 0x5F) = 0;
            *(unsigned char *)(o + 0x60) = 0x60;
            *(unsigned char *)(o + 0x61) = 2;
            *(float *)(o + 0x64) = 2.1f;
            *(unsigned char *)(o + 0x5A) = 0;
            *(unsigned char *)(o + 0x5B) = 0;
            *(signed char *)(o + 0x68) = -1;
            *(unsigned char *)(o + 0x79) = 0;
            *(unsigned char *)(o + 0x69) = *(unsigned char *)(o + 0x6A) = *(unsigned char *)(o + 0x6B) = *(unsigned char *)(o + 0x6C) = 0;
            *(unsigned char *)(o + 0x6D) = *(unsigned char *)(o + 0x6E) = *(unsigned char *)(o + 0x6F) = *(unsigned char *)(o + 0x70) = 0;
            *(unsigned char *)(o + 0x71) = *(unsigned char *)(o + 0x72) = *(unsigned char *)(o + 0x73) = *(unsigned char *)(o + 0x74) = 0;
            *(unsigned char *)(o + 0x75) = *(unsigned char *)(o + 0x76) = *(unsigned char *)(o + 0x77) = *(unsigned char *)(o + 0x78) = 0;
            *(float *)(o + 0x7C) = 120.0f;
            *(unsigned char *)(o + 0x80) = 0;
            *(unsigned char *)(o + 0x81) = 0x40;
            *(unsigned char *)(o + 0x82) = 0x40;
            *(unsigned char *)(o + 0x83) = 1;
            *(float *)(o + 0x84) = 120.0f;
            *(short *)(o + 0x58) = *(short *)(ctx + 8);
            db = p + 0x850C;
            for (;;) {
                func_0022CBB0(r1, tok);
                if (nt21B(func_0012BA60(tok, D_005BBC40)) == 0) {
                    func_0022CBB0(r1, tok);
                    if (func_0012BA60(tok, D_005BBB38) != 0) break;
                }
                if (func_0012B1A0(tok, D_00542358) == 0) {
                    v = (float)(int)func_0022CD90(r1);
                    *(float *)(o + 4) = (v > 0.0f) ? v : 0.0f;
                }
                if (func_0012B1A0(tok, D_00542398) == 0) *(float *)(o + 8) = func_0022CD90(r1);
                if (func_0012B1A0(tok, D_005423A8) == 0) *(float *)(o + 0xC) = func_0022CD90(r1);
                if (func_0012B1A0(tok, D_005423B8) == 0) *(float *)(o + 0x10) = func_0022CD90(r1);
                if (func_0012B1A0(tok, D_00542B20) == 0) *(unsigned char *)(o + 0x5B) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_00542B30) == 0) *(signed char *)(o + 0x68) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_00542B40) == 0) {
                    *(unsigned char *)(o + 0x69) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x6A) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x6B) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x6C) = func_0022CD60(r1);
                }
                if (func_0012B1A0(tok, D_00542B50) == 0) {
                    *(unsigned char *)(o + 0x6D) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x6E) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x6F) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x70) = func_0022CD60(r1);
                }
                if (func_0012B1A0(tok, D_00542B60) == 0) {
                    *(unsigned char *)(o + 0x71) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x72) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x73) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x74) = func_0022CD60(r1);
                }
                if (func_0012B1A0(tok, D_00542B70) == 0) {
                    *(unsigned char *)(o + 0x75) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x76) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x77) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x78) = func_0022CD60(r1);
                }
                if (func_0012B1A0(tok, D_00542B80) == 0) *(unsigned char *)(o + 0x80) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_00542B90) == 0) *(unsigned char *)(o + 0x81) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_00542BA0) == 0) *(unsigned char *)(o + 0x82) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_00542BB0) == 0) *(unsigned char *)(o + 0x83) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_005BBBD0) == 0) {
                    *(float *)(o + 0x7C) = *(float *)(o + 0x50) = func_0022CD90(r1);
                    *(float *)(o + 0x84) = *(float *)(o + 0x50);
                }
                if (func_0012B1A0(tok, D_005BBB50) == 0) {
                    func_0022CBB0(r1, tok);
                    if (*(unsigned char *)p == 1) {
                        func_0012ACE8(path, D_005BBC50, p + 0x18);
                        idx = func_0022F930(db, path, tok);
                        if (idx < 0) return 0;
                        *(int *)(o + 0x20) = func_0022FF70(db, idx);
                        *(int *)(o + 0x54) = func_0022FF80(db, idx);
                    } else if (*(unsigned char *)p != 2) {
                        *(char **)(o + 0x20) = ent21B(aux[1], func_0022CDC0(r2, tok));
                        *(int *)(o + 0x54) = 0;
                    }
                }
                if (func_0012B1A0(tok, D_00542BC0) == 0) {
                    func_0022CBB0(r1, tok);
                    switch (tok[0]) {
                    case 0x41:
                        *(unsigned char *)(o + 0x5D) = 0;
                        break;
                    case 0x48:
                        *(unsigned char *)(o + 0x5D) = 1;
                        break;
                    case 0x44:
                        *(unsigned char *)(o + 0x5D) = 2;
                        break;
                    }
                }
                if (func_0012B1A0(tok, D_005BBCF0) == 0) {
                    switch (func_0022CD60(r1)) {
                    case 0:
                        *(unsigned char *)(o + 0x5E) = 2;
                        break;
                    case 1:
                        *(unsigned char *)(o + 0x5E) = 1;
                        break;
                    case 2:
                        *(unsigned char *)(o + 0x5E) = 0;
                        break;
                    case 3:
                        *(unsigned char *)(o + 0x5E) = 3;
                        break;
                    }
                }
                if (func_0012B1A0(tok, D_00542BD0) == 0) *(unsigned char *)(o + 0x5F) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_00542BE0) == 0) *(unsigned char *)(o + 0x60) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_00542BF0) == 0) *(unsigned char *)(o + 0x61) = func_0022CD60(r1);
                if (func_0012B1A0(tok, D_00542C00) == 0) *(float *)(o + 0x64) = func_0022CD90(r1);
            }
        } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
            break;
        }
    }
    return 1;
}

extern char D_005BBD58[8];

extern char D_005BBD60[8];

extern char D_005BBD68[8];

extern char D_005BBD70[8];

extern char D_005BBB68[8];

extern char D_00542B10[];

static inline char *ent21A(char *t, int i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(t + i * 4 + 8) == 0) { r = 0; } else { r = t + *(int *)(t + i * 4 + 8); } return r; }

static inline int nt21A(char *x) { return !x; }

int func_0021A110(char *p, char *src, int ctx, char **aux) {
    int func_0022CD60(char *);
    char *func_00210A40(int);
    extern char D_005BBB38[8];
    char r1[16];
    char r2[16];
    char tok[0x100];
    char path[0x100];
    char *o;
    int idx;
    char *db;
    float v;
    func_0022CB30(r1);
    func_0022CB30(r2);
    func_0022CB50(r1, src);
    if (aux != 0) func_0022CB50(r2, *aux);
    while (!func_0022CBA0(r1)) {
        func_0022CBB0(r1, tok);
        if (func_0012BA60(tok, D_005BBC40) == 0) continue;
        func_0022CBB0(r1, tok);
        if (func_0012BA60(tok, D_005BBBC8) != 0) {
            if ((o = func_00210A40(ctx)) == 0) return 0;
            *(unsigned char *)(o + 0x1FB) = 0;
            db = p + 0x850C;
            for (;;) {
                func_0022CBB0(r1, tok);
                if (nt21A(func_0012BA60(tok, D_005BBC40)) == 0) {
                    func_0022CBB0(r1, tok);
                    if (func_0012BA60(tok, D_005BBB38) != 0) break;
                }
                if (func_0012BA60(tok, D_00542358) != 0) {
                    v = (float)(int)func_0022CD90(r1);
                    *(float *)(o + 4) = (v > 0.0f) ? v : 0.0f;
                }
                if (func_0012BA60(tok, D_00542398) != 0) *(float *)(o + 8) = func_0022CD90(r1);
                if (func_0012BA60(tok, D_005423A8) != 0) *(float *)(o + 0xC) = func_0022CD90(r1);
                if (func_0012BA60(tok, D_005423B8) != 0) *(float *)(o + 0x10) = func_0022CD90(r1);
                if (func_0012BA60(tok, D_005BBBD0) != 0) *(float *)(o + 0x24) = func_0022CD90(r1);
                if (func_0012B1A0(tok, D_005BBD58) == 0) {
                    *(unsigned char *)(o + 0x1FB) = 1;
                    *(unsigned short *)(o + 0x1F0) = (unsigned int)func_0022CD90(r1);
                }
                if (func_0012B1A0(tok, D_005BBD60) == 0) {
                    *(unsigned char *)(o + 0x1FB) = 1;
                    *(unsigned short *)(o + 0x1F2) = (unsigned int)func_0022CD90(r1);
                }
                if (func_0012B1A0(tok, D_005BBD68) == 0) {
                    *(unsigned char *)(o + 0x1FB) = 1;
                    *(unsigned short *)(o + 0x1F4) = (unsigned int)func_0022CD90(r1);
                }
                if (func_0012B1A0(tok, D_005BBD70) == 0) {
                    *(unsigned char *)(o + 0x1FB) = 1;
                    *(unsigned short *)(o + 0x1F6) = (unsigned int)func_0022CD90(r1);
                }
                if (func_0012B1A0(tok, D_00542B10) == 0) {
                    *(unsigned char *)(o + 0x1FB) = 1;
                    *(unsigned char *)(o + 0x1F8) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x1F9) = func_0022CD60(r1);
                    *(unsigned char *)(o + 0x1FA) = func_0022CD60(r1);
                }
                if (func_0012BA60(tok, D_005BBB68) == 0) continue;
                func_0022CBB0(r1, tok);
                if (*(unsigned char *)p == 1) {
                    func_0012ACE8(path, D_005BBC50, p + 0x18);
                    idx = func_0022F930(db, path, tok);
                    if (idx < 0) return 0;
                    *(int *)(o + 0x20) = func_0022FF70(db, idx);
                    *(int *)(o + 0x28) = func_0022FF80(db, idx);
                } else if (*(unsigned char *)p != 2) {
                    *(char **)(o + 0x20) = ent21A(aux[1], func_0022CDC0(r2, tok));
                    *(int *)(o + 0x28) = 0;
                }
            }
        } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
            break;
        }
    }
    return 1;
}

char *func_002283A0(char *, char *);

int func_00214AB0(char *, char **, char *);

float func_00124F28(char *);

void func_00288190(char *, char *);

int func_002883B0(char *, char **);

extern char D_005BBBC0[4];

extern char D_005BBBE4[4];

extern char D_005BBC38[8];

extern char D_00542330[];

extern char D_00542370[];

extern char D_005427D0[];

extern char D_00542800[];

static inline int nd217(unsigned char d) { return !d; }

int func_00217CD0(char *unused, char *s0, int id) {
    char *func_00210A40(int);
    extern char D_005BBB38[8];
    char *s = s0;
    char tok[0x40];
    unsigned char done;
    char *o;
    float v;
    done = 0;
    do {
        if ((s = func_002283A0(s, tok)) == 0) return 0;
        if (tok[0] == 0x3B) {
            s = func_0012BA60(s, D_005BBBC0);
            if (s == 0) return 0;
            s++;
            if (*s == 0) return 0;
        } else if (tok[0] == 0x23) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542330) == 0) return 0;
            if (func_0012B1A0(tok, D_005BBBC8) == 0) {
                if (!(o = func_00210A40(id))) return 0;
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                done = 1;
            } else {
                return 0;
            }
        } else if (func_0012B1A0(tok, D_00542358) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542370) == 0) return 0;
            v = (float)(int)func_00124F28(tok);
            *(float *)(o + 4) = v > 0.0f ? v : 0.0f;
        } else if (func_0012B1A0(tok, D_00542398) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542370) == 0) return 0;
            *(float *)(o + 8) = func_00124F28(tok);
        } else if (func_0012B1A0(tok, D_005423A8) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542370) == 0) return 0;
            *(float *)(o + 0xC) = func_00124F28(tok);
        } else if (func_0012B1A0(tok, D_005423B8) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542370) == 0) return 0;
            *(float *)(o + 0x10) = func_00124F28(tok);
        } else if (func_0012B1A0(tok, D_005BBBE4) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_005427D0) == 0) return 0;
            func_00288190(o, tok);
        } else if (func_0012B1A0(tok, D_005BBBD0) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542800) == 0) return 0;
            *(float *)(o + 0x24) = func_00124F28(tok);
        } else if (func_0012B1A0(tok, D_005BBC38) == 0) {
            if ((unsigned char)func_002883B0(o, &s) == 0) return 0;
        }
    } while (nd217(done));
    return 1;
}

extern char D_005423C8[];

extern char D_005423E0[];

extern char D_00542410[];

extern char D_00542430[];

extern char D_00542440[];

extern char D_00542470[];

extern char D_00542480[];

static inline int nd215(unsigned char d) { return !d; }

int func_00215FE0(char *unused, char *s0, int id) {
    char *func_00210A40(int);
    extern char D_005BBB38[8];
    char *s = s0;
    char tok[0x40];
    unsigned char done;
    char *o;
    float v;
    done = 0;
    do {
        if ((s = func_002283A0(s, tok)) == 0) return 0;
        if (tok[0] == 0x3B) {
            s = func_0012BA60(s, D_005BBBC0);
            if (s == 0) return 0;
            s++;
            if (*s == 0) return 0;
        } else if (tok[0] == 0x23) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542330) == 0) return 0;
            if (func_0012B1A0(tok, D_005BBBC8) == 0) {
                if (!(o = func_00210A40(id))) return 0;
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                done = 1;
            } else {
                return 0;
            }
        } else if (func_0012B1A0(tok, D_00542358) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542370) == 0) return 0;
            v = (float)(int)func_00124F28(tok);
            *(float *)(o + 4) = v > 0.0f ? v : 0.0f;
        } else if (func_0012B1A0(tok, D_00542398) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542370) == 0) return 0;
            *(float *)(o + 8) = func_00124F28(tok);
        } else if (func_0012B1A0(tok, D_005423A8) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542370) == 0) return 0;
            *(float *)(o + 0xC) = func_00124F28(tok);
        } else if (func_0012B1A0(tok, D_005423B8) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542370) == 0) return 0;
            *(float *)(o + 0x10) = func_00124F28(tok);
        } else if (func_0012B1A0(tok, D_005423C8) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_005423E0) == 0) return 0;
            switch (tok[0]) {
            case 0x44:
                *(signed char *)(o + 0x20) = 0;
                break;
            case 0x4C:
                *(signed char *)(o + 0x20) = 1;
                break;
            }
        } else if (func_0012B1A0(tok, D_005BBBD0) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542410) == 0) return 0;
            *(float *)(o + 0x24) = func_00124F28(tok);
        } else if (func_0012B1A0(tok, D_00542430) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542440) == 0) return 0;
            v = func_00124F28(tok);
            if (v <= 0.0f) return 0;
            *(float *)(o + 0x2C) = v;
        } else if (func_0012B1A0(tok, D_00542470) == 0) {
            if ((unsigned char)func_00214AB0(tok, &s, D_00542480) == 0) return 0;
            v = func_00124F28(tok);
            if (v <= 0.0f) return 0;
            *(float *)(o + 0x30) = v;
        }
    } while (nd215(done));
    return 1;
}

void func_00211570(char *);

void func_00211670(char *);

void func_00215B10(char *p) {
    int i;
    char *e;
    for (i = 0; i < 200; i++) {
        e = p + i * 0x30;
        if (*(unsigned char *)(e + 0x3C) == 1) {
            func_00211570(e + 0x38);
            func_00211670(e + 0x38);
        }
    }
}

extern char D_005BBBD8[8];

int func_00216BF0(char *p, char *src, char *ctx) {
    int func_0022CD60(char *);
    extern char D_005BBB38[8];
    char *func_00210A40(char *);
    char r[16];
    char tok[0x100];
    unsigned char done;
    char *o;
    float x;
    func_0022CB30(r);
    func_0022CB50(r, src);
    done = 0;
    do {
        func_0022CBB0(r, tok);
        if (tok[0] == '#') {
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BBBC8) == 0) {
                if ((o = func_00210A40(ctx)) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                done = 1;
            } else {
                return 0;
            }
        } else if (func_0012B1A0(tok, D_00542358) == 0) {
            x = (float)(int)func_0022CD90(r);
            *(float *)(o + 4) = (x > 0.0f) ? x : 0.0f;
        } else if (func_0012B1A0(tok, D_00542398) == 0) {
            *(float *)(o + 8) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423A8) == 0) {
            *(float *)(o + 0xC) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423B8) == 0) {
            *(float *)(o + 0x10) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005BBBD8) == 0) {
            *(int *)(o + 0x20) = func_0022CD60(r);
        }
    } while (!done);
    return 1;
}

extern char D_005BBBE8[4];

extern char D_005BBBEC[4];

extern char D_005BBBF0[8];

extern char D_005BBBF8[8];

extern char D_005BBC00[8];

extern char D_00542510[];

extern char D_00542520[];

extern char D_00542530[];

int func_00217070(char *unused, char *src, char *ctx) {
    int func_0022CD60(char *);
    extern char D_005BBB38[8];
    char *func_00210A40(char *);
    char r[16];
    float a[4];
    float b[4];
    float c[4];
    char tok[0x100];
    unsigned char done;
    char *o;
    float x;
    int i;
    func_0022CB30(r);
    func_0022CB50(r, src);
    done = 0;
    do {
        func_0022CBB0(r, tok);
        if (tok[0] == '#') {
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BBBC8) == 0) {
                if ((o = func_00210A40(ctx)) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                done = 1;
            } else {
                return 0;
            }
        } else if (func_0012B1A0(tok, D_00542358) == 0) {
            x = (float)(int)func_0022CD90(r);
            *(float *)(o + 4) = (x > 0.0f) ? x : 0.0f;
        } else if (func_0012B1A0(tok, D_00542398) == 0) {
            *(float *)(o + 8) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423A8) == 0) {
            *(float *)(o + 0xC) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423B8) == 0) {
            *(float *)(o + 0x10) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005BBBE4) == 0) {
            func_0022CBB0(r, tok);
            switch (tok[0]) {
            case 0x45:
                *(unsigned char *)(o + 0x20) = 1;
                break;
            case 0x50:
                *(unsigned char *)(o + 0x20) = 0;
                break;
            case 0x56:
                *(unsigned char *)(o + 0x20) = 3;
                break;
            case 0x47:
                *(unsigned char *)(o + 0x20) = 2;
                break;
            }
        } else if (func_0012B1A0(tok, D_005BBBD8) == 0) {
            *(short *)(o + 0x52) = func_0022CD60(r);
        } else if (func_0012B1A0(tok, D_005BBBE8) == 0) {
            for (i = 0; i < 3; i++) a[i] = func_0022CD90(r);
            *(float *)(o + 0x28) = a[0];
            *(float *)(o + 0x2C) = a[1];
            *(float *)(o + 0x30) = a[2];
        } else if (func_0012B1A0(tok, D_005BBBEC) == 0) {
            for (i = 0; i < 3; i++) b[i] = func_0022CD90(r);
            *(float *)(o + 0x34) = b[0];
            *(float *)(o + 0x38) = b[1];
            *(float *)(o + 0x3C) = b[2];
        } else if (func_0012B1A0(tok, D_005BBBF0) == 0) {
            for (i = 0; i < 3; i++) c[i] = func_0022CD90(r);
            *(float *)(o + 0x40) = c[0];
            *(float *)(o + 0x44) = c[1];
            *(float *)(o + 0x48) = c[2];
        } else if (func_0012B1A0(tok, D_00542510) == 0) {
            *(float *)(o + 0x4C) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005BBBF8) == 0) {
            *(unsigned char *)(o + 0x50) = func_0022CD60(r) != 0;
        } else if (func_0012B1A0(tok, D_005BBC00) == 0) {
            *(signed char *)(o + 0x21) = (short)func_0022CD60(r);
        } else if (func_0012B1A0(tok, D_00542520) == 0) {
            *(short *)(o + 0x22) = func_0022CD60(r);
        } else if (func_0012B1A0(tok, D_00542530) == 0) {
            *(short *)(o + 0x24) = func_0022CD60(r);
        }
    } while (!done);
    return 1;
}

int func_00216940(char *p, char *src, char *ctx) {
    int func_0022CD60(char *);
    extern char D_005BBB38[8];
    char *func_00210A40(char *);
    char r[16];
    char tok[0x100];
    unsigned char done;
    char *o;
    float x;
    func_0022CB30(r);
    func_0022CB50(r, src);
    done = 0;
    do {
        func_0022CBB0(r, tok);
        if (tok[0] == '#') {
            func_0022CBB0(r, tok);
            if (func_0012B1A0(tok, D_005BBBC8) == 0) {
                if ((o = func_00210A40(ctx)) == 0) return 0;
            } else if (func_0012B1A0(tok, D_005BBB38) == 0) {
                done = 1;
            } else {
                return 0;
            }
        } else if (func_0012B1A0(tok, D_00542358) == 0) {
            x = (float)(int)func_0022CD90(r);
            *(float *)(o + 4) = (x > 0.0f) ? x : 0.0f;
        } else if (func_0012B1A0(tok, D_00542398) == 0) {
            *(float *)(o + 8) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423A8) == 0) {
            *(float *)(o + 0xC) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005423B8) == 0) {
            *(float *)(o + 0x10) = func_0022CD90(r);
        } else if (func_0012B1A0(tok, D_005BBBD8) == 0) {
            *(int *)(o + 0x20) = func_0022CD60(r);
        }
    } while (!done);
    return 1;
}

extern char D_0054EAE0[];

extern char D_005D0E78[];

extern char D_01DF5D28[];

int func_0013DC30();

void func_002078F0();

int func_00211840();

int func_00213660();

int func_00215A30();

void func_00215B70(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p0;
    if (*(unsigned char *)(p0 + 1) != 1) {
        *(char *)(v0 + 1) = 1;
        *(char *)(v0 + 3) = 2;
        *(int *)D_01DF5D28 = 0x3f800000;
        func_002078F0(D_01DF7E50, 4357);
        *(int *)(v0 + 9660) = 0;
        v2 = func_00215A30(v0, 14, -1);
        v1 = v2;
        if (v1 != 0) {
            v2 = func_00211840(v1);
            *(int *)(v0 + 9660) = v2;
            if (*(int *)(v0 + 9660) != 0) {
                *(char *)(v0 + 3) = 0;
                *(int *)D_01DF5D28 = 0;
                tmp0 = *(int *)(*(char **)(v0 + 9660) + 32);
                v2 = func_00213660(v0);
                if ((tmp0 < v2)) {
                    v2 = func_0013DC30(D_005D0E78, *(int *)((D_0054EAE0 + (*(int *)(*(char **)(v0 + 9660) + 32) << 2)) + 0), 2);
                }
            } else {
                *(char *)(v0 + 3) = 2;
            }
        }
        *(char *)(v0 + 13060) = 1;
    }
}

extern char D_005D0E70[];

int func_0013DA10();

int func_00215C80(p0) char *p0; {
    int v0;
    int v1;
    v0 = 3;
    if (*(unsigned char *)(p0 + 1) != v0) {
        *(char *)(p0 + 1) = v0;
        *(int *)D_01DF5D28 = 0;
        v1 = func_0013DA10(D_005D0E70, 1);
    }
    return v1;
}

int func_0021B060(p0) char *p0; {
    int v0;
    int v1;
    char *v2;
    v1 = 0;
    v2 = p0;
    v0 = -1;
    do {
        *(short *)(v2 + 0) = v0;
        *(short *)(v2 + 2) = v0;
        v1 = (v1 + 5);
        *(short *)(v2 + 4) = v0;
        *(short *)(v2 + 6) = v0;
        *(short *)(v2 + 8) = v0;
        v2 = (v2 + 10);
    } while ((v1 < 10));
    *(int *)(p0 + 140) = 0;
    return 1;
}

int func_0021B0A0(void) { return 1; }
