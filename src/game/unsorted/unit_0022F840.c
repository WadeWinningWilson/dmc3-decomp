void func_0013D5D0(void *);

/* Counted arrays of 16-byte entries (the count is the first entry's head word). */
typedef struct Ent16 {
    int head;
    char sub[12];
} Ent16;

void func_0022F8C0(Ent16 *e) {
    int i;
    for (i = 0; i < e[0].head; i++) {
        func_0013D5D0(e[i].sub);
    }
}

void func_00230000(Ent16 *e) {
    int i;
    for (i = 0; i < e[0].head; i++) {
        func_0013D5D0(e[i].sub);
    }
}

extern char D_005BBDE8[8];

extern char D_005BBDF0[8];

extern char D_005BBE00[8];

extern char D_005BBE08[8];

extern char D_005BBE10[8];

extern char D_005BBE18[8];

extern char D_005BBE20[8];

extern char D_005BBE28[8];

extern char D_005BBE30[8];

extern char D_005BBE38[8];

extern char D_005BBE40[8];

extern char D_005BBE48[8];

extern char D_005BBDF8[8];

extern char D_005BE0D0[8];

int func_0012BA60(char *, char *);

void func_0012ACE8(char *, char *, char *, char *);

int func_001EBB20(char *, char *);

int func_001B0FD0(char *, int, int);

void func_001EBB10(char *, char *, int);

#define ADD22F(k)     func_0012B2E8(p + *(int *)p * 32 + 0x4004, s);     func_0012B2E8(p + *(int *)p * 32 + 0xC004, n);     func_0012ACE8(buf, D_005BBDF8, n, s);     *(unsigned char *)((char *)*(int *)p + (int)p + 0x14404) = k;     func_001EBB10(D_005BE0D0, buf, func_001B0FD0(p + *(int *)p * 16 + 4, func_001EBB20(D_005BE0D0, buf), 0));     (*(int *)p)++;

int func_0022FA40(char *p, char *n, char *s) {
    void func_0012B2E8(char *, char *);
    char buf[128];
    if (*(int *)p < 0x400) {
        if (func_0012BA60(s, D_005BBDE8) || func_0012BA60(s, D_005BBDF0)) {
            ADD22F(0)
        } else         if (func_0012BA60(s, D_005BBE00) || func_0012BA60(s, D_005BBE08)) {
            ADD22F(1)
        } else         if (func_0012BA60(s, D_005BBE10) || func_0012BA60(s, D_005BBE18)) {
            ADD22F(2)
        } else         if (func_0012BA60(s, D_005BBE20) || func_0012BA60(s, D_005BBE28)) {
            ADD22F(3)
        } else         if (func_0012BA60(s, D_005BBE30) || func_0012BA60(s, D_005BBE38)) {
            ADD22F(4)
        } else         if (func_0012BA60(s, D_005BBE40) || func_0012BA60(s, D_005BBE48)) {
            ADD22F(5)
        }
    }
    return *(int *)p - 1;
}

int func_00230450(unsigned char *s) {
    if (s[0] == 'M' && s[1] == 'O' && s[2] == 'D') return 0;
    if (s[0] == 'E' && s[1] == 'F' && s[2] == 'M') return 1;
    if (s[0] == 'S' && s[1] == 'C' && s[2] == 'M') return 2;
    if (s[0] == 'M' && s[1] == 'R' && s[2] == 'P') return 3;
    if (s[0] == 'S' && s[1] == 'H' && s[2] == 'W') return 7;
    return -1;
}

int func_0022F930(char *p, char *a, char *b) {
    int func_0012B1A0(char *, char *);
    int i;
    int r = -1;
    for (i = 0; i < *(int *)p; i++) {
        if (func_0012B1A0(p + i * 32 + 0x4004, b) == 0 && func_0012B1A0(p + i * 32 + 0xC004, a) == 0) {
            r = i;
            break;
        }
    }
    return r;
}

extern char D_005BBDE0;

int func_0022F840(p0) char *p0; {
    int func_0012B2E8();
    int v0;
    int v3;
    int v1;
    int v2;
    int tmp0;
    v0 = (int)p0;
    v3 = 0;
    *(int *)(p0 + 0) = 0;
    v1 = v0;
    do {
        v2 = func_0012B2E8((v1 + 16388), &D_005BBDE0);
        *(char *)((char *)(v0 + v3) + 81924) = 0;
        tmp0 = (v0 + v3);
        v3 = (v3 + 1);
        *(char *)((char *)tmp0 + 82948) = -1;
        v1 = (v1 + 32);
    } while ((v3 < 1024));
    return v2;
}

extern char D_005BBE50;

int func_0022FF90(p0) char *p0; {
    int func_0012B2E8();
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (int)p0;
    v1 = 0;
    *(int *)(p0 + 0) = 0;
    v3 = v0;
    do {
        v2 = func_0012B2E8((v3 + 4100), &D_005BBE50);
        *(char *)((char *)(v0 + v1) + 20484) = 0;
        tmp0 = (v0 + v1);
        v1 = (v1 + 1);
        *(char *)((char *)tmp0 + 20740) = -1;
        v3 = (v3 + 32);
    } while ((v1 < 256));
    return v2;
}

int func_00230070(p0, p1, p2) char *p0; int p1; int p2; {
    int func_0012B1A0();
    char *v0;
    int v5;
    int v4;
    int v6;
    int v3;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    v0 = p0;
    v1 = p1;
    v2 = p2;
    v5 = 0;
    v4 = -1;
    if ((0 < *(int *)(p0 + 0))) {
        v6 = (int)v0;
        do {
            tmp0 = func_0012B1A0((v6 + 4100), v2);
            v3 = (v6 + 12292);
            if (tmp0 == 0) {
                tmp1 = func_0012B1A0(v3, v1);
                if (tmp1 == 0) {
                    v4 = v5;
                    break;
                }
            }
            v5 = (v5 + 1);
            v6 = (v6 + 32);
        } while ((v5 < *(int *)(v0 + 0)));
    }
    return v4;
}

int func_00230070();

int func_00230180();

int func_00230130(p0, p1, p2) int p0; int p1; int p2; {
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p1;
    v1 = p2;
    v2 = func_00230070();
    v3 = p0;
    if (v2 < 0) {
        v2 = func_00230180(v3, v0, v1);
    }
    return v2;
}

int func_00230430(p0, p1) int p0; int p1; {
    return *(int *)((char *)((p1 << 4) + p0) + 8);
}

int func_0022FF80(int p0, int p1) {
    return ((p0 + (p1 << 5)) + 16388);
}

int func_00230440(int p0, int p1) {
    return ((p0 + (p1 << 5)) + 4100);
}

/* element stride 0x10, field +8 */
typedef struct { int unk0, unk4, unk8, unkC; } Entry10;

int func_0022FF70(Entry10 *tbl, int i) { return tbl[i].unk8; }
