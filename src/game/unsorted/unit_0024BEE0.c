int func_0024D6B0(unsigned char *p, unsigned char *n) {
    *n = 0;
    switch (p[0x49F8]) {
    case 0:
        if (p[0x49F9] != p[0x49FA]) {
            *n += 1;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x10) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x40) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x80) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x20) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x4) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x8) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x1) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x2) {
            *n += 2;
        }
        *(unsigned short *)(p + 0x49FC) += *n;
        if (*(unsigned short *)(p + 0x49FC) > *(unsigned short *)(p + 0x49FE)) {
            p[0x49F8]++;
            return 1;
        }
        break;
    case 1:
        return 1;
    }
    return 0;
}

typedef struct InputTbl {
    char pad[0x5D];
    unsigned char st[1][5];
} InputTbl;

int func_0024E780(InputTbl *p, int a, int b) {
    if (b >= 5) {
        return 0;
    }
    return p->st[a][b];
}

void func_0028C790(char *, int);

void func_0024F130(char *p) {
    signed char ch;
    unsigned short id;
    int i;
    int off;
    *(int *)(p + 20) += 1;
    ch = *(*(signed char **)(p + 20))++;
    id = *(*(unsigned short **)(p + 20))++;
    if (*(int *)(p + 204) != 0 && ch == *(int *)(p + 56)) {
        for (i = 0, off = 0; i < 16; i++, off += 2) {
            if (id == *(unsigned short *)(*(char **)(p + 204) + off + 8)) {
                func_0028C790(*(char **)(p + 204), i);
            }
        }
    }
}

void func_0024F050(char *p) {
    signed char ch;
    signed char mask;
    int i;
    int off;
    *(int *)(p + 20) += 1;
    ch = *(*(signed char **)(p + 20))++;
    mask = *(*(signed char **)(p + 20))++;
    *(int *)(p + 20) += 1;
    if (*(int *)(p + 204) != 0 && ch == *(int *)(p + 56)) {
        for (i = 0, off = 0; i < 16; i++, off += 4) {
            char *o = *(char **)(*(char **)(p + 204) + off + 124);
            if (o != 0 && (mask & **(unsigned char **)(o + 256)) != 0) {
                func_0028C790(*(char **)(p + 204), i);
            }
        }
    }
}

int func_0024CD10(char *, unsigned int, int);

typedef struct { unsigned short a; unsigned short b; int c; int d; } ent12;

extern ent12 D_00546270[];

int func_0024C320(char *, char *, ent12 *, int);

void func_0024C230(char *p) {
    ent12 *q = D_00546270;
    unsigned int i;
    *(int *)(p + 0x49F0) = 0;
    *(int *)(p + 0x49F4) = 0;
    for (i = 0; i < 52; i++) {
        ent12 *e = q;
        int d = q->d;
        q++;
        if (e->a != 0 && (unsigned char)func_0024CD10(p, i, e->b) == 1 && (unsigned char)func_0024C320(p, p + i * 12 + 0x3E9C, e, d) == 1) {
            *(unsigned int *)(p + (i >> 5) * 4 + 0x49F0) |= 1 << (i & 31);
        }
    }
}

int func_0024D260(char *p) {
    unsigned char func_002DAD40(char *);
    short d;
    if (func_002DAD40(p) != 2) {
        d = *(short *)(p + 0x49EC) - (*(unsigned short *)(p + 0x49E8) + 0x6000);
        if (0 <= d && d <= 0x4000) return 0;
        d = *(short *)(p + 0x49EC) - (*(unsigned short *)(p + 0x49E8) - 0x2000);
        if (0 <= d && d <= 0x4000) return 2;
    }
    return 4;
}

void func_0024F220(char *p) {
    unsigned char *c;
    int v;
    *(int *)(p + 0x14) += 1;
    *(int *)(p + 0x14) += 1;
    c = *(unsigned char **)(p + 0x14);
    v = c[0] | (c[1] << 8) | (c[2] << 16) | (c[3] << 24);
    *(unsigned char **)(p + 0x14) = c + 1;
    *(int *)(p + 0x14) += 1;
    *(int *)(p + 0x14) += 1;
    *(int *)(p + 0x14) += 1;
    if (*(char **)(p + 0xCC) != 0) {
        *(int *)(*(char **)(p + 0xCC) + 0xD8) = v;
    }
}

void func_0024E4C0(char *);

void func_0024E480(char *);

void func_0024D9F0(char *p, char *b, int a, short s, int c0, int c1, int c2, int c3, int c4) {
    char *q;
    *(char **)p = b;
    q = *(char **)p;
    *(char **)(p + 4) = b + *(unsigned short *)q;
    *(char **)(p + 8) = b + *(unsigned short *)(q + 2);
    *(char **)(p + 0xC) = b + *(unsigned short *)(q + 4);
    *(int *)(p + 0x38) = a;
    *(short *)(p + 0x3C) = s;
    *(int *)(p + 0x40) = c0;
    *(int *)(p + 0x44) = c1;
    *(int *)(p + 0x6C) = c2;
    *(int *)(p + 0x48) = c3;
    *(int *)(p + 0xCC) = c4;
    *(unsigned char *)(p + 0x84) = 0;
    *(unsigned char *)(p + 0x84) = 0;
    func_0024E4C0(p);
    func_0024E480(p);
    *(unsigned char *)(p + 0x81) = 0;
    *(int *)(p + 0x98) = 0;
    *(unsigned char *)(p + 0x82) = 1;
}

#define ANG24C(x) ((short)(unsigned short)(short)(int)(65536.0f * (x) / 360.0f + 0.5f))

unsigned char func_0024D030(char *p, short k) {
    int func_002DAD40(char *);
    float a;
    float b;
    short d;
    short lo;
    if ((unsigned char)func_002DAD40(p) != 2) {
        d = k - *(short *)(p + 0x28E4) - (*(unsigned short *)(p + 0x49E8) + 0x8000);
        a = *(float *)(*(char **)(p + 0x283C) + 0xBC);
        lo = ANG24C(-a);
        if (!(lo > d) && !(d > ANG24C(a))) return 0;
        b = 180.0f - a;
        if (!(ANG24C(-b) > d) && !(d > lo)) return 1;
        if (!(ANG24C(b) < d) && !(d < ANG24C(a))) return 3;
        return 2;
    }
    return 4;
}

extern char D_01CAFF0C[];

extern int D_005BE09C;

extern char D_006663C0[];

int func_002242C0(char *);

unsigned short func_001AE1A0(char *, int);

unsigned short func_001AE1C0(char *, int);

unsigned short func_001AE280(char *, int, int);

unsigned short func_001AE2B0(char *, int, int);

short func_0024BEE0(char *);

static inline unsigned char eq1(unsigned char v) {
    return v == 1;
}

static inline void pad_read(char *p, int port) {
    *(unsigned short *)(p + 0x49C0) = func_001AE1A0(D_006663C0, port);
    *(unsigned short *)(p + 0x49C2) = func_001AE1C0(D_006663C0, port);
    *(unsigned short *)(p + 0x49C4) = *(unsigned short *)(p + 0x49C0) & ~*(unsigned short *)(p + 0x49C2);
    *(unsigned short *)(p + 0x49C6) = *(unsigned short *)(p + 0x49C2) & ~*(unsigned short *)(p + 0x49C0);
    *(unsigned short *)(p + 0x49D8) = func_001AE280(D_006663C0, port, 0);
    *(unsigned short *)(p + 0x49E8) = func_001AE280(D_006663C0, port, 1);
    *(unsigned short *)(p + 0x49DA) = func_001AE2B0(D_006663C0, port, 0);
    *(unsigned short *)(p + 0x49EA) = func_001AE2B0(D_006663C0, port, 1);
}

void func_0024D300(char *p) {
    int func_002DAD40(char *);
    short d;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 8) == 1 || eq1(*(unsigned char *)(p + 0x28AC)) == 1) {
        *(unsigned short *)(p + 0x49C6) = 0;
        *(unsigned short *)(p + 0x49C4) = 0;
        *(unsigned short *)(p + 0x49C2) = 0;
        *(unsigned short *)(p + 0x49C0) = 0;
        *(unsigned short *)(p + 0x49E8) = 0;
        *(unsigned short *)(p + 0x49D8) = 0;
        *(unsigned short *)(p + 0x49EA) = 0;
        *(unsigned short *)(p + 0x49DA) = 0;
        return;
    }
    if (*(unsigned char *)(p + 0xD4) == 0) {
        pad_read(p, 0);
    } else if (*(unsigned char *)(p + 0x3D48) == 1 && *(unsigned char *)(p + 0x3C79) == 1 && (unsigned char)func_002242C0(p) == 1) {
        pad_read(p, 1);
    }
    if (*(float *)(p + 0x28E8) == 0.0f) {
        *(short *)(p + 0x28E4) = func_0024BEE0(*(char **)((char *)D_005BE09C + 0x23C));
    } else {
        if ((unsigned char)func_002DAD40(p) == 2 || (d = *(short *)(p + 0x28E6) - (*(unsigned short *)(p + 0x49E8) + 0x8000)) > 0xAAB || !(d > -0xAAC)) {
            *(float *)(p + 0x28E8) = 0.0f;
            *(short *)(p + 0x28E4) = func_0024BEE0(*(char **)((char *)D_005BE09C + 0x23C));
        }
    }
    if (*(unsigned char *)(p + 0x3D48) == 1 || *(unsigned char *)(p + 0x3C79) == 0 || (unsigned char)func_002242C0(p) == 0) {
        *(short *)(p + 0x49EC) = *(short *)(p + 0x90) - *(short *)(p + 0x28E4);
    }
    *(signed char *)(p + 0x49FA) = *(signed char *)(p + 0x49F9);
    if ((unsigned char)func_002DAD40(p) == 2) {
        *(signed char *)(p + 0x49F9) = 4;
    } else {
        *(signed char *)(p + 0x49F9) = ((*(unsigned short *)(p + 0x49E8) + 0x8000 + 0x2000) >> 14) & 3;
    }
}

void func_00131990(char *, char *, char *, char *, float);

void func_0024BF20(char *p) {
    func_00131990(p + 0x30, p + 0x70, p + 0x80, p + 0x10, *(float *)(p + 0x24));
}

void func_001282D0(char *, char *, int);

void func_0024E2D0(char *p, int i) {
    char *c = *(char **)(p + 0x14);
    *(char **)(p + 0x14) = c + 6;
    func_001282D0(p + i * 5 + 0x5D, c + 1, 5);
}

short func_00131D10(float, float);

#define VSUB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

short func_0024BEE0(char *p) {
    float d[4];
    VSUB(d, p + 0x80, p + 0x70);
    return func_00131D10(d[0], d[2]);
}

void func_0024CC30(char *, unsigned char);

void func_0024CC60(char *p, int k) {
    int n;
    unsigned int i;
    unsigned int e;
    switch (k) {
    case 0x80:
        n = 0x1C;
        break;
    case 0x20:
        n = 0x28;
        break;
    case 0x10:
        n = 0x10;
        break;
    }
    i = (unsigned char)n;
    e = i + 11;
    for (; i < e; i++) {
        func_0024CC30(p, i);
    }
}

typedef struct {
    unsigned char a, b, c, d, e;
    float f;
} E357;

typedef struct {
    char pad[0x3E9C];
    E357 arr[52];
    char pad2[0x8B4];
    short s0[4];
    char pad3[0x10];
    short d8;
    short da;
    char pad4[0xC];
    short e8;
    short ea;
    char pad5[4];
    int f0;
    int f4;
} P357;

void func_0024C0B0(char *c) {
    P357 *p = (P357 *)c;
    unsigned int i;
    p->s0[3] = 0;
    p->s0[2] = 0;
    p->s0[1] = 0;
    p->s0[0] = 0;
    p->e8 = 0;
    p->d8 = 0;
    p->ea = 0;
    p->da = 0;
    p->f0 = 0;
    p->f4 = 0;
    for (i = 0; i < 52; i++) {
        p->arr[i].a = 0;
        p->arr[i].b = 0;
        p->arr[i].c = 0;
        p->arr[i].d = 0;
        p->arr[i].e = 0;
        p->arr[i].f = 0.0f;
    }
}

void func_0024E860(char *p) {
    int n;
    char *e;
    char *a;
    *(char **)(p + 0x24) = *(char **)(p + 0x20);
    a = *(char **)(p + 0x24);
    *(char **)(p + 0x24) = a + 2;
    *(char **)(p + 0x94) = a;
    *(int *)(p + 0x90) = 0;
    if (**(unsigned char **)(p + 0x94) > 0) {
        *(char **)(p + 0x98) = *(char **)(p + 0x24);
        n = **(unsigned char **)(p + 0x94);
        while (n > 0) {
            e = *(char **)(p + 0x98);
            if (!(*(unsigned short *)(e + 4) < *(short *)(p + 0x4C))) break;
            switch (*(unsigned char *)e) {
            case '0': *(char **)(p + 0x24) += 6; break;
            case '1': *(char **)(p + 0x24) += 6; break;
            case '2': *(char **)(p + 0x24) += 6; break;
            case '3': *(char **)(p + 0x24) += 6; break;
            case '4': *(char **)(p + 0x24) += 8; break;
            case '5': *(char **)(p + 0x24) += 8; break;
            case '6': *(char **)(p + 0x24) += 8; break;
            case '7': *(char **)(p + 0x24) += 8; break;
            case '8': *(char **)(p + 0x24) += 8; break;
            }
            n--;
            *(char **)(p + 0x98) = *(char **)(p + 0x24);
        }
        if (n <= 0) *(char **)(p + 0x98) = 0;
    } else {
        *(char **)(p + 0x98) = 0;
    }
}

unsigned char func_0024CE10(char *p) {
    int func_002DAD40(char *);
    float a;
    float b;
    short d;
    short lo;
    if ((unsigned char)func_002DAD40(p) != 2) {
        d = *(short *)(p + 0x49EC) - (*(unsigned short *)(p + 0x49E8) + 0x8000);
        a = *(float *)(*(char **)(p + 0x283C) + 0xBC);
        lo = ANG24C(-a);
        if (!(lo > d) && !(d > ANG24C(a))) return 0;
        b = 180.0f - a;
        if (!(ANG24C(-b) > d) && !(d > lo)) return 1;
        if (!(ANG24C(b) < d) && !(d < ANG24C(a))) return 3;
        return 2;
    }
    return 4;
}

void func_00128488();

char *func_0024D930(char *p0) {
    *(char *)(p0 + 140) = 1;
    *(int *)(p0 + 152) = 0;
    *(char *)(p0 + 132) = 0;
    *(char *)(p0 + 132) = 0;
    *(int *)(p0 + 160) = 0;
    *(int *)(p0 + 164) = 0;
    *(int *)(p0 + 168) = 0;
    *(int *)(p0 + 172) = 0x3f800000;
    *(int *)(p0 + 176) = 0;
    *(int *)(p0 + 180) = 0;
    *(int *)(p0 + 184) = 0;
    *(int *)(p0 + 188) = 0x3f800000;
    func_00128488((p0 + 196), 0, 5);
    *(int *)(p0 + 192) = 0;
    return p0;
}

int func_0024BF40(p0, p1) int p0; int p1; {
    int v0;
    char *v2;
    int v3;
    char *v4;
    int v1;
    v0 = 0;
    v1 = (signed char)p1;
    v4 = (char *)p0;
    do {
        v2 = *(char **)(v4 + 12);
        if (v2 != 0) {
            if (*(signed char *)(v2 + 70) == v1) {
                v3 = *(int *)((char *)((v0 << 2) + p0) + 12);
                return v3;
            }
        }
        v0 = (v0 + 1);
        v4 = (v4 + 4);
    } while (((unsigned int)v0 < (unsigned int)2));
    v3 = 0;
    return v3;
}

float func_0024CBB0(p0, p1) int p0; int p1; {
    return *(float *)((char (*)[12])((char *)p0 + 16036))[(p1 & 255)];
}

int func_0024CBD0(p0, p1) int p0; int p1; {
    return ((*(unsigned char *)((char (*)[12])((char *)p0 + 16033))[(p1 & 255)] & 1) != 0);
}

void func_0024CC00(p0, p1) int p0; int p1; {
    p1 = (p1 & 255);
    *(int *)((char (*)[12])((char *)p0 + 16036))[p1] = 0;
    *(char *)((char (*)[12])((char *)p0 + 16033))[p1] = (*(unsigned char *)((char *)(p0 + (p1 * 12)) + 16033) & 254);
}

extern char D_00666710[];

extern char D_0066671A[];

int func_001AE770();

int func_0024D640(p0) int p0; {
    int tmp0;
    tmp0 = func_001AE770(D_00666710, 8);
    return ((*(unsigned short *)((char (*)[2])((char *)D_0066671A + 0))[(tmp0 & 65535)] & *(unsigned short *)((char *)p0 + 18880)) != 0);
}

int func_0024D850(p0) char *p0; {
    int v0;
    v0 = 0;
    if (*(unsigned char *)(p0 + 18937) != *(unsigned char *)(p0 + 18938)) {
        v0 = (v0 + 1);
        v0 = (v0 & 255);
    }
    p0 = (char *)*(unsigned short *)(p0 + 18884);
    if (((int)p0 & 16) != 0) {
        v0 = (v0 + 2);
        v0 = (v0 & 255);
    }
    if (((int)p0 & 64) != 0) {
        v0 = (v0 + 2);
        v0 = (v0 & 255);
    }
    if (((int)p0 & 128) != 0) {
        v0 = (v0 + 2);
        v0 = (v0 & 255);
    }
    if (((int)p0 & 32) != 0) {
        v0 = (v0 + 2);
        v0 = (v0 & 255);
    }
    if (((int)p0 & 4) != 0) {
        v0 = (v0 + 2);
        v0 = (v0 & 255);
    }
    if (((int)p0 & 8) != 0) {
        v0 = (v0 + 2);
        v0 = (v0 & 255);
    }
    if (((int)p0 & 1) != 0) {
        v0 = (v0 + 2);
        v0 = (v0 & 255);
    }
    if (((int)p0 & 2) != 0) {
        v0 = (v0 + 2);
        v0 = (v0 & 255);
    }
    return v0;
}

void func_0024E300(p0) char *p0; {
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) + 2);
    func_00128488((p0 + 93), 0, 10);
}

int func_0028C8E0();

int func_0028C910();

int func_0024E320(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    char *tmp1;
    v0 = p0;
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) + 1);
    tmp1 = *(char **)(p0 + 20);
    *(char **)(p0 + 20) = (*(char **)(p0 + 20) + 1);
    v1 = *(int *)(p0 + 204);
    v2 = *(unsigned char *)(tmp1 + 0);
    if (v1 != 0) {
        func_0028C8E0(v1, (v2 & 255));
        v3 = func_0028C910(*(int *)(v0 + 204));
    }
    return v3;
}

int func_0024E380(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    char *tmp1;
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) + 1);
    tmp1 = *(char **)(p0 + 20);
    *(char **)(p0 + 20) = (*(char **)(p0 + 20) + 1);
    v0 = *(int *)(p0 + 204);
    v1 = *(unsigned char *)(tmp1 + 0);
    if (v0 != 0) {
        v2 = func_0028C8E0(v0, (v1 & 255));
    }
    return v2;
}

int func_0024E3D0(p0) char *p0; {
    int v0;
    int v1;
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) + 1);
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) + 1);
    v0 = *(int *)(p0 + 204);
    if (v0 != 0) {
        v1 = func_0028C910(v0);
    }
    return v1;
}

void func_0024E440(p0) char *p0; {
    *(int *)(p0 + 20) = ((*(int *)(p0 + 16) + *(unsigned short *)((char (*)[2])((char *)*(int *)(p0 + 16) + 0))[*(int *)(p0 + 48)]) + *(unsigned short *)((char (*)[2])((char *)(*(int *)(p0 + 16) + *(unsigned short *)((char (*)[2])((char *)*(int *)(p0 + 16) + 0))[*(int *)(p0 + 48)]) + 0))[*(int *)(p0 + 52)]);
}

void func_0024E7B0(p0, p1, p2) int p0; int p1; int p2; {
    char *v0;
    v0 = (char *)(p1 << 2);
    if ((p2 < 5)) {
        v0 = (v0 + p1);
        v0 = (v0 + p0);
        v0 = (char *)(p2 + (int)v0);
        *(char *)(v0 + 93) = 0;
    }
}

int func_0024E850(p0, p1) int p0; int p1; {
    return *(unsigned char *)((char *)((p1 & 255) + p0) + 196);
}

char *func_0028C290();

void func_0024EED0(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    char *v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v8;
    char *v6;
    int v7;
    int v5;
    int v9;
    char *tmp1;
    v0 = p0;
    v1 = p1;
    v2 = *(char **)(p0 + 20);
    if (*(unsigned char *)(v2 + 1) != *(int *)(p0 + 56)) {
        *(char **)(v0 + 20) = (v2 + ((v1 << 1) + 4));
    } else {
        *(char **)(v0 + 20) = (v2 + 1);
        *(int *)(v0 + 20) = (*(int *)(v0 + 20) + 1);
        tmp1 = *(char **)(v0 + 20);
        *(char **)(v0 + 20) = (*(char **)(v0 + 20) + 2);
        v3 = *(short *)(tmp1 + 0);
        if (*(int *)(v0 + 204) == 0) {
            *(int *)(v0 + 20) = (*(int *)(v0 + 20) + (v1 << 1));
        } else {
            v4 = 0;
            while ((v4 < v1)) {
                v5 = *(unsigned char *)(*(char **)(v0 + 20) + 0);
                *(char **)(v0 + 20) = (*(char **)(v0 + 20) + 2);
                v6 = func_0028C290(*(int *)(v0 + 204), v5, (short)v3, *(int *)(v0 + 108));
                if (v6 != 0) {
                    if ((*(unsigned char *)(*(char **)(v6 + 256) + 0) & 4) != 0) {
                        v7 = *(int *)(*(char **)(v0 + 204) + 232);
                        v8 = 0;
                        while ((v8 < v7)) {
                            v9 = *(int *)(v0 + 204);
                            if (v5 == *(unsigned short *)((char *)((v8 << 1) + v9) + 236)) {
                                __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(((v9 + (v8 << 4)) + 256)), "r"((v6 + 224)) : "memory");
                                *(char *)(v6 + 1) = 1;
                                break;
                            } else {
                                v8 = (v8 + 1);
                            }
                        }
                    }
                }
                v4 = (v4 + 1);
            }
        }
    }
}

void func_0024F2B0(p0) char *p0; {
    char *v0;
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) + 1);
    *(int *)(p0 + 20) = (*(int *)(p0 + 20) + 1);
    v0 = *(char **)(p0 + 204);
    if (v0 != 0) {
        *(int *)(v0 + 216) = 0;
    }
}

signed char func_0024E520(char *p) { return *(signed char *)(p + 134); }

short func_0024E7F0(char *p) { return *(short *)(p + 104); }

unsigned char func_0024E800(char *p) { return *(unsigned char *)(p + 130); }

unsigned char func_0024E810(char *p) { return *(unsigned char *)(p + 128); }

void func_0024E820(char *p, char v) { *(char *)(p + 140) = v; }

void func_0024D620(char *p0) {
    unsigned short t0;
    *(int *)(p0 + 10472) = 0x3f800000;
    t0 = ((*(unsigned short *)(p0 + 18920) + 32767) + 1);
    *(short *)(p0 + 10470) = ((*(unsigned short *)(p0 + 18920) + 32767) + 1);
}

void func_0024D6A0(char *p0, int p1, int p2) {
    *(short *)(p0 + 18942) = p2;
    *(short *)(p0 + 18940) = 0;
    *(char *)(p0 + 18936) = 0;
}

void func_0024E420(char *p0) {
    char *t0;
    char *t1;
    short t2;
    unsigned char t3;
    t0 = *(char **)(p0 + 20);
    t1 = (*(char **)(p0 + 20) + 6);
    *(char **)(p0 + 20) = (*(char **)(p0 + 20) + 6);
    t2 = *(short *)(t0 + 2);
    *(short *)(p0 + 122) = *(short *)(t0 + 2);
    t3 = *(unsigned char *)(t0 + 4);
    *(char *)(p0 + 124) = *(unsigned char *)(t0 + 4);
}

void func_0024E830(char *p0, char *p1, char *p2, int p3) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p1), "r"((p0 + 160)) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(p2), "r"((p0 + 176)) : "memory");
    *(int *)(p0 + 192) = p3;
}

void func_0024E7E0(int p0) {
    func_00128488((p0 + 93), 0, 10);
}

/*
 * The nine PoC functions that match, at their USA (SLUS_209.64) addresses.
 * These are not yet assigned to their original translation units; move each
 * one to its real TU once TU boundaries are known (DMC3_DECOMP_ROADMAP.md).
 * Struct layouts are offset-only placeholders: unkXXX = field at offset XXX.
 */
typedef unsigned char u8;

typedef short s16;

/* relative-offset pointer walk */
typedef struct { u8 pad[0x14]; char *unk14; } Obj24E2B0;

void func_0024E2B0(Obj24E2B0 *p) {
    char *q = p->unk14;
    s16 off = *(s16 *)(q + 2);
    p->unk14 = q + 2 - off;
}
