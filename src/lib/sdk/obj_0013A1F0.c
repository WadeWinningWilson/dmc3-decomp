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
