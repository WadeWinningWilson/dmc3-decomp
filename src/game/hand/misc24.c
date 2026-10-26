/* Hand-matched functions whose callee prototypes conflict with misc3-23. */

extern char *D_01CAFF0C[];
int func_002E8890(signed char);
void func_004F9970(int, short, unsigned char);

static inline int bit20F(char *p, short k) {
    int w = *(int *)((char *)(k / 32 * 4) + (int)p + 0x680);
    return (w & (1 << (k & 0x1F))) != 0;
}

void func_0020F700(char *p, int k, int c) {
    if (func_002E8890((signed char)k)) {
        func_004F9970(*(int *)(D_01CAFF0C[0] + 0x28), (short)k, (unsigned char)c);
        return;
    }
    if (bit20F(p, (short)k) == 0) {
        func_004F9970(*(int *)(D_01CAFF0C[0] + 0x28), (short)k, (unsigned char)c);
    }
}

extern int D_005BE190;
extern int D_005BE194;
extern signed char D_005BE11C;
extern unsigned char D_005BE120;
extern unsigned char D_005BE124;
extern char *D_01CAFF0C[];
void func_002F2FB0(int);
char *func_002F3080(int);

void func_0034B270(signed char k, int a, int b) {
    char *e;
    int *q;
    D_005BE190 = a;
    D_005BE194 = b;
    D_005BE11C = k;
    D_005BE120 = 0;
    D_005BE124 = 0;
    switch (k) {
    case 0: break;
    case 1: break;
    case 2: break;
    case 3: break;
    case 4: break;
    case 5:
        func_002F2FB0(*(int *)(D_01CAFF0C[0] + 0x20));
        q = &D_005BE190;
        while (1) {
            e = func_002F3080(*(int *)(D_01CAFF0C[0] + 0x20));
            if ((e != 0) ^ 1) break;
            if (*(signed char *)(e + 0x46) == 0x2C) *q++ = (int)e;
        }
        break;
    case 6: break;
    case 7: break;
    case 8: break;
    case 9: break;
    case 10: break;
    case 11: break;
    case 12: break;
    case 13: break;
    }
}

extern char D_005BBBE0;
extern char D_005BBB38;
void func_0022CB30(char *);
void func_0022CB50(char *, char *);
int func_0022CBA0(char *);
void func_0022CBB0(char *, char *);
int func_0012B1A0(char *, char *);
void func_0022CD60(char *);

int func_00216B10(char *u, char *s) {
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

typedef struct {
    unsigned char on;
    signed char wrap;
    char pad[2];
    int head;
    int cur;
    int size;
    char *data;
} Ring198;

void func_00198380(char *p) {
    Ring198 *r = (Ring198 *)(p + 0xC);
    if (r->cur == r->head) return;
    do {
        r->cur = r->cur - 1;
        if (r->cur < 0) r->cur = r->size - 1;
        if (r->cur == r->head && r->wrap == 1) {
            r->cur = (r->cur = r->cur + 1) % r->size;
            break;
        }
        r->data[r->cur * 132] = 0;
    } while (r->cur != r->head);
    if (r->cur == r->head) r->on = 0;
}

extern char *D_005BE0D8;

typedef struct {
    short xf : 4;
    short x : 12;
    short yf : 4;
    short y : 12;
    int z;
    unsigned int f;
    unsigned char c[4];
} V13A;

typedef struct { unsigned long long a, b; } Q13A;

static inline Q13A *hdr13A(Q13A *pk, char *p) {
    pk[0].a = 1 | (0x14000000ULL << 32);
    pk[0].b = 0;
    pk[1].a = (unsigned int)(*(int *)(p + 0x24) | 4);
    pk[1].b = 0;
    return pk + 2;
}

Q13A *func_0013A1F0(char *p, Q13A *pk, char *q) {
    V13A *v = *(V13A **)(q + 0xC);
    int n = *(unsigned char *)(q + 0x10);
    pk = hdr13A(pk, p);
    pk->a = (long long)n | 0x2400000000008000ULL;
    pk->b = 0x41;
    pk++;
    for (; n > 0; n--) {
        pk->a = (unsigned long long)v->c[0] | ((unsigned long long)v->c[1] << 8) | ((unsigned long long)v->c[2] << 16) | ((unsigned long long)v->c[3] << 24) | (1ULL << 32);
        pk->b = ((unsigned long long)v->f << 56) | (((unsigned long long)v->z << 32) | ((long long)((*(short *)(D_005BE0D8 + 0x34) + ((V13A *)v)->x) << 4) | ((long long)((*(short *)(D_005BE0D8 + 0x36) + v->y) << 4) << 16)));
        v++;
        pk++;
    }
    return pk;
}
