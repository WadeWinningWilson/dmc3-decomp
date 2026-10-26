void func_0020F700(char *, short, int);

static inline void setb2(char *p, short s) {
    int b = 1 << (s & 0x1F);
    char *w = (char *)((s / 32) * 4) + (int)p;
    *(unsigned int *)(w + 0x680) |= b;
    *(unsigned int *)(w + 0x688) |= b;
}

void func_0020F5D0(char *p, int c0, int k) {
    short c;
    int t;
    short s;
    if (k != -1) {
        t = k >> 16;
        s = k & 0xFFFF;
        switch (t) {
        case 0:
            ((unsigned int *)(p + 0x108))[s / 32] |= 1 << (s & 0x1F);
            break;
        case 1:
            ((unsigned int *)(p + 0x618))[s / 32] |= 1 << (s & 0x1F);
            break;
        case 2:
            break;
        }
    }
    c = (signed char)c0;
    func_0020F700(p, c, 1);
    setb2(p, c);
}

extern char D_01CAFF0C[];

extern int D_005BE0C8;

int func_002DA950(char *);

void func_002DA9F0(char *);

int func_001C1250(char *, char *, char *);

void func_0020E8D0(char *, int, int, int);

void func_0020E8E0(char *, int, signed char, signed char, signed char);

void func_00483870(char *, signed char, signed char);

void func_0020E820(char *, int);

static inline unsigned char flg209(short s) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    if (s < 32) {
        unsigned int *w = (unsigned int *)(g + s / 32 * 4 + 0x18);
        return (*w & (1 << (s & 31))) != 0;
    } else {
        unsigned int *w = (unsigned int *)(g + (s - 32) / 32 * 4 + 0x44);
        return (*w & (1 << ((s - 32) & 31))) != 0;
    }
}

void func_002090E0(char *p) {
    void func_0020E7E0(char *, int, int);
    int i;
    char *e;
    char *q;
    int x;
    for (i = 0; i < *(short *)p; i++) {
        q = p + i * 0xD0;
        e = q + 0x10;
        if (*(unsigned char *)(q + 0x11) == 0) continue;
        if (*(unsigned char *)(e + 0xC9) == 1) continue;
        if (*(int *)(e + 0xCC) != -1 && flg209(*(int *)(e + 0xCC)) == 1) continue;
        if (*(unsigned char *)(p + 0x9E0) == 0) {
            if ((*(unsigned char *)(e + 6) == 0 && func_002DA950(*(char **)(*(char **)D_01CAFF0C + 0xC)) != 0) || *(unsigned char *)(e + 6) == 1) {
            if (func_001C1250((char *)&D_005BE0C8, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, e + 0x10) != 0) {
                if (*(unsigned char *)(e + 6) == 0) func_002DA9F0(*(char **)(*(char **)D_01CAFF0C + 0xC));
                if (*(unsigned char *)(e + 0xB0) == 0) {
                    func_0020E8D0(*(char **)(p + 0x9E4), 0, *(short *)(e + 0xB2), *(unsigned char *)(e + 0xB4));
                } else {
                    func_0020E8D0(*(char **)(p + 0x9E4), 1, *(short *)(e + 0xB2), 0);
                }
                func_0020E8E0(*(char **)(p + 0x9E4), *(signed char *)(e + 0), *(signed char *)(e + 2), *(signed char *)(e + 3), *(signed char *)(e + 7));
                x = *(signed char *)(e + 2);
                if (x != 0 || x != 0) {
                    func_00483870(*(char **)(*(char **)(*(char **)D_01CAFF0C + 4) + 0x14), x, *(signed char *)(e + 3));
                }
                x = *(signed char *)(e + 4);
                if (x != 0 || x != 0) {
                    func_00483870(*(char **)(*(char **)(*(char **)D_01CAFF0C + 4) + 0x14), x, *(signed char *)(e + 5));
                }
            }
            }
        }
    chk:
        if (func_001C1250((char *)&D_005BE0C8, *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, e + 0x60) != 0) {
            if (*(unsigned char *)(e + 0xC1) == 0) {
                if (*(unsigned char *)(e + 0xB0) == 0) {
                    func_0020E7E0(*(char **)(p + 0x9E4), *(short *)(e + 0xB2), *(unsigned char *)(e + 0xB4));
                } else {
                    func_0020E820(*(char **)(p + 0x9E4), *(short *)(e + 0xB2));
                }
            }
            *(unsigned char *)(e + 0xC1) = 1;
        } else {
            *(unsigned char *)(e + 0xC1) = 0;
        }
    }
}

int func_0020CFA0(char *p) {
    char *o = *(char **)(p + 4);
    switch (*(unsigned char *)o) {
    case 0x54:
        return (unsigned char)(*(float *)(p + 8) < (float)*(int *)(o + 4));
    }
    return -1;
}

extern int D_01CAFF30[];

void func_00323140(int, int, int, int, int);

int func_0020F210(char *);

void func_0020F250(char *p) {
    int k = D_01CAFF30[0];
    if (k == 20 && *(unsigned char *)(p + 0xF0) == 0 && *(short *)(p + 0xF2) == 0x19B) {
        func_00323140(*(int *)(p + 0x6A4), 0x38, 0x38, 7, 1);
    } else if (k == 2 && *(unsigned char *)(p + 0xF0) == 0 && *(short *)(p + 0xF2) == 1) {
        func_00323140(*(int *)(p + 0x6A4), 3, 0x2C, 7, 1);
    } else if (k == 5 && *(unsigned char *)(p + 0xF0) == 0 && *(short *)(p + 0xF2) == 0x6F &&
               (unsigned char)func_0020F210(p) == 1) {
        func_00323140(*(int *)(p + 0x6A4), 3, 0x21, 7, 1);
    }
}

extern unsigned char D_01CAFF3E[];

extern unsigned char D_01CAFF3F[];

void func_004F9970(int, int, int);

static inline unsigned char tst_20F(unsigned int *p, int m) {
    unsigned char r = (*p & m) != 0; return r;
}

static inline void setf_20F(int id) {
    char *g = *(char **)D_01CAFF0C;
    int k = (signed char)id;
    int m = 1 << (k & 31);
    int w = k / 32 * 4;
    if (tst_20F((unsigned int *)((char *)w + (int)*(char **)(g + 4) + 0x6C), m) == 0) {
        func_004F9970(*(int *)(g + 0x28), id, 3);
        *(unsigned int *)((char *)w + (int)*(char **)(*(char **)D_01CAFF0C + 4) + 0x6C) |= m;
    }
}

void func_0020F7D0(int z, int id) {
    switch (id) {
    case 0x15:
        if (D_01CAFF3E[0] == 1 && D_01CAFF3F[0] == 1) setf_20F(id);
        break;
    case 0x17:
        setf_20F(id);
        break;
    default:
        if (D_01CAFF3F[0] == 1) setf_20F(id);
        break;
    }
}

extern int D_01CAFF38[];

static inline int bit_20F(unsigned int *a, int k) {
    unsigned int *w = &a[k / 32];
    return (*w & (1 << (k & 31))) != 0;
}

short func_0020F9B0(char *p) {
    short k = *(short *)(p + 0x610);
    short r = k;
    if (bit_20F((unsigned int *)(p + 0x108), k)) r = -1;
    if ((unsigned int)(D_01CAFF38[0] - 0x25C) <= 1 || D_01CAFF38[0] == 0x90 || D_01CAFF38[0] == 0xD9) r = k;
    (*(short *)(p + 0x610))++;
    (*(short *)(p + 0x612))++;
    return r;
}

void func_00313930(int, int, signed char);

static inline int flg_208(short s) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    if (s < 32) {
        unsigned int *w = (unsigned int *)((char *)(s / 32 * 4) + (int)g + 0x18);
        return (*w & (1 << (s & 31))) != 0;
    } else {
        int t = s - 32;
        unsigned int *w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
        return (*w & (1 << (t & 31))) != 0;
    }
}

void func_00208510(short *p, int idx, int a, int k, int c) {
    char *e;
    char *q;
    if (idx < p[0]) {
        e = (char *)p + idx * 0xD0;
        q = e + 0x10;
        *(int *)(e + 0xD4) = a;
        *(int *)(e + 0xDC) = k;
        *(signed char *)(e + 0xD8) = c;
        if (k != -1 && flg_208(k)) {
            q[0xC9] = 1;
            func_00313930(a, 0, (signed char)c);
        }
    }
}

void func_00128488(char *, int, int);

int func_0012B1A0(char *, char *);

void func_0022CB30(char *);

void func_0022CB50(char *, char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

void func_00209A30(char *, char *);

extern void (*D_005BBAA0[2])(char *, char *);

extern char D_005BBAA8[8];

extern char D_005BBAB0[8];

extern char D_005BBAB8[8];

extern char D_005BBAC0[8];

extern char D_005BBAC8[8];

extern char D_005BBAD0[8];

extern char D_005BBAD8[4];

extern char D_005BBADC[4];

extern char D_005BBAE0[8];

extern char D_005BBAE8[8];

extern char D_005BBAF0[8];

extern char D_005BBAF8[8];

extern char D_00541C48[];

extern char D_00541C58[];

extern char D_00541C68[];

extern char D_00541C78[];

void func_002093D0(char *p, char *src) {
    char r[16];
    char tok[64];
    int st;
    char *e;
    int k;
    func_0022CB30(r);
    *(short *)p = 0;
    st = 0;
    e = 0;
    func_00128488(p + 0x10, 0, 0x9C0);
    func_0022CB50(r, src);
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, tok);
        switch (st) {
        case 0:
            if (func_0012B1A0(tok, D_005BBAA8) == 0) st = 1;
            break;
        case 1:
            if (func_0012B1A0(tok, D_005BBAB0) == 0) {
                k = func_0022CD60(r);
                e = p + k * 0xD0 + 0x10;
                e[0] = k;
                e[1] = 1;
                e[7] = 1;
                *(int *)(e + 0xC4) = 0;
                *(int *)(e + 0xCC) = -1;
                st = 2;
                (*(short *)p)++;
            } else if (func_0012B1A0(tok, D_005BBAB8) == 0) {
                return;
            }
            break;
        case 2:
            if (func_0012B1A0(tok, D_005BBAA8) == 0) {
                st = 1;
            } else if (func_0012B1A0(tok, D_005BBAC0) == 0) {
                D_005BBAA0[func_0022CD60(r)](e + 0x10, r);
            } else if (func_0012B1A0(tok, D_005BBAC8) == 0) {
                k = func_0022CD60(r);
                if (k == -1) {
                    func_0022CD60(r);
                    func_00209A30(e + 0x60, e + 0x10);
                } else {
                    D_005BBAA0[k](e + 0x60, r);
                }
            } else if (func_0012B1A0(tok, D_00541C48) == 0) {
                *(short *)(e + 0xB2) = func_0022CD60(r);
            } else if (func_0012B1A0(tok, D_00541C58) == 0) {
                e[0xB4] = func_0022CD60(r);
            } else if (func_0012B1A0(tok, D_005BBAD0) == 0) {
                func_0022CBB0(r, tok);
                if (func_0012B1A0(tok, D_005BBAD8) == 0) {
                    k = func_0022CD60(r);
                    if (D_01CAFF30[0] < k) e[1] = 0;
                } else if (func_0012B1A0(tok, D_005BBADC) == 0) {
                    if (func_0022CD60(r) < D_01CAFF30[0]) e[1] = 0;
                }
            } else if (func_0012B1A0(tok, D_005BBAE0) == 0) {
                func_0022CBB0(r, tok);
                if (func_0012B1A0(tok, D_005BBAE8) == 0) e[6] = 0;
                else if (func_0012B1A0(tok, D_005BBAF0) == 0) e[6] = 1;
            } else if (func_0012B1A0(tok, D_00541C68) == 0) {
                e[7] = func_0022CD60(r);
            } else if (func_0012B1A0(tok, D_00541C78) == 0) {
                e[2] = func_0022CD60(r);
                e[3] = func_0022CD60(r);
            } else if (func_0012B1A0(tok, D_005BBAF8) == 0) {
                e[4] = func_0022CD60(r);
                e[5] = func_0022CD60(r);
            }
            break;
        }
    }
}

void func_0020A270();

void func_0020A320();

void func_0020A230(char *p0) {
    int t0;
    t0 = *(int *)(p0 + 4);
    *(int *)(p0 + 12) = *(int *)(p0 + 4);
    func_0020A270();
    func_0020A320(p0);
}

int func_0020AB70();

int func_0020A5C0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v0 = *(int *)(p0 + 124);
    v1 = p0;
    if (v0 != 0) {
        *(int *)(v1 + 12) = v0;
        v2 = *(int *)(*(char **)(v1 + 12) + 0);
        v7 = (v2 & 255);
        v3 = 13;
        if (*(int *)(v1 + 128) != v7) {
            do {
                if (v7 == v3) {
                    *(int *)(v1 + 12) = (*(int *)(v1 + 12) + ((((v2 >> 8) & 255) + 1) << 2));
                    *(char *)(v1 + 137) = 0;
                    v6 = func_0020AB70(v1, v3, v2);
                    v4 = 14;
                    v5 = *(int *)(*(char **)(v1 + 12) + 0);
                    if ((v5 & 255) != v4) {
                        do {
                            *(int *)(v1 + 12) = (*(int *)(v1 + 12) + ((((v5 >> 8) & 255) + 1) << 2));
                            *(char *)(v1 + 137) = 0;
                            v5 = *(int *)(*(char **)(v1 + 12) + 0);
                        } while ((v5 & 255) != v4);
                    }
                    *(int *)(v1 + 12) = (*(int *)(v1 + 12) + ((((v5 >> 8) & 255) + 1) << 2));
                    *(char *)(v1 + 137) = 0;
                    *(int *)(v1 + 124) = *(int *)(v1 + 12);
                    break;
                }
                *(int *)(v1 + 12) = (*(int *)(v1 + 12) + ((((v2 >> 8) & 255) + 1) << 2));
                *(char *)(v1 + 137) = 0;
                v2 = *(int *)(*(char **)(v1 + 12) + 0);
                v7 = (v2 & 255);
            } while (*(int *)(v1 + 128) != v7);
        }
    }
    return v6;
}

void func_002028C0();

void func_0020EE50(p0, p1) int p0; char *p1; {
    func_002028C0(*(int *)(*(char **)D_01CAFF0C + 20), *(int *)(*(char **)(p1 + 0) + 4));
}

int func_00202880();

void func_0020EE70(p0, p1) int p0; char *p1; {
    func_00202880(*(int *)(*(char **)D_01CAFF0C + 20), *(int *)(*(char **)(p1 + 0) + 4));
}

void func_002F2260();

void func_0020EEA0(p0, p1) char *p0; char *p1; {
    func_002F2260(*(int *)(p0 + 1696), (*(int *)(*(char **)(p1 + 0) + 4) != 0));
}

int func_00208830();

int func_0023A470();

int func_0020EED0(p0, p1) char *p0; int p1; {
    int tmp1;
    int tmp4;
    tmp1 = func_0023A470(*(int *)(p0 + 1692));
    tmp4 = func_00208830(tmp1, *(int *)(*(char **)((char *)p1 + 0) + 4));
    return tmp4;
}

int func_00208870();

int func_0020EF10(p0, p1) char *p0; int p1; {
    int tmp1;
    int tmp4;
    tmp1 = func_0023A470(*(int *)(p0 + 1692));
    tmp4 = func_00208870(tmp1, *(int *)(*(char **)((char *)p1 + 0) + 4));
    return tmp4;
}

int func_002088A0();

int func_0020EF50(p0, p1) char *p0; char *p1; {
    char *tmp1;
    int tmp2;
    int tmp7;
    tmp1 = *(char **)(p1 + 0);
    tmp2 = func_0023A470(*(int *)(p0 + 1692));
    tmp7 = func_002088A0(tmp2, *(int *)(tmp1 + 4), *(int *)(tmp1 + 8), *(int *)(tmp1 + 12), *(int *)(tmp1 + 16));
    return tmp7;
}

extern char D_005BD070;

void func_0020F0A0(p0, p1) int p0; char *p1; {
    char *v0;
    v0 = *(char **)(p1 + 0);
    if (*(int *)(v0 + 8) == 0) {
        D_005BD070 = *(int *)(v0 + 4);
    } else {
        D_005BD070 = -1;
    }
}

void func_0020F0D0(p0, p1) char *p0; char *p1; {
    int v0;
    int tmp0;
    tmp0 = *(int *)(*(char **)(p1 + 0) + 4);
    v0 = 1;
    if (tmp0 != 0) {
        *(char *)(p0 + 158) = v0;
    } else {
        *(char *)(p0 + 158) = 0;
    }
}

void func_0020E650(char *p0) {
    *(int *)(p0 + 180) = 0;
    *(int *)(p0 + 184) = 0;
    *(int *)(p0 + 188) = 0;
    *(int *)(p0 + 192) = 0;
    *(int *)(p0 + 196) = 0;
}

void func_0020E570(char *p0) {
    void func_0020E7E0();
    func_0020E7E0(p0, *(short *)(p0 + 246), *(short *)(p0 + 248));
}

void func_002F2130();

void func_0020EA10(char *p0) {
    func_002F2130(*(char **)(p0 + 1696));
}

void func_002F21E0();

void func_0020EE90(char *p0) {
    func_002F21E0(*(char **)(p0 + 1696));
}

void func_002F22F0();

void func_0020EEC0(char *p0) {
    func_002F22F0(*(char **)(p0 + 1696));
}
