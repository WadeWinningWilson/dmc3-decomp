/* Hand-matched functions (continued from misc.c, which declares some callees differently). */

void func_0048AFC0(char *, int); void func_0041D800(char *, float, float); void func_0041D6E0(char *, char *, int, float); int func_0024E800(char *); void func_0048AF80(char *, int);
void func_00421F50(char *p) {
    char *b;
    *(int *)(p + 0x110) |= 2;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0048AFC0(p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = -20.0f;
        *(float *)(p + 0x6C) = 1.0f;
        p[6] = 1;
    case 1:
        func_0041D800(p + 0x68, 2.0f * *(float *)(p + 0x10), 0.0f);
        b = p;
        if (b) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0024E800(p + 0x1060) == 1) {
            func_0048AF80(p, 4);
        }
        break;
    }
}
int func_0024E780(char *, int, int); void func_0024E7B0(char *, int, int); void func_0029F260(char *, int, int); void func_0029DCE0(char *, int);
void func_0029CC30(char *p) {
    int i;
    if ((unsigned char)func_0024E780(p + 0x8980, 0, 1) == 1) {
        func_0024E7B0(p + 0x8980, 0, 1);
        p[0x997C] = 0;
        p[0x99EC] = 0;
        p[0x9A5C] = 0;
        p[0x9ACC] = 0;
        p[0x9B3C] = 0;
        for (i = 1; i <= 4; i++) {
            func_0029F260(p, i, 0);
            p[0x9C74 + i] = 0;
        }
        func_0029DCE0(p, 0x21);
        p[5] = 0x25;
    }
}

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

/* Turn angle from degrees, two position updates, keeps 20 units above the target. */
extern char D_01CAFF0C[];
void func_0041E270(char *, char *, float, float); void func_0024BF20(char *);
void func_00317740(char *p, int k) {
    char *o;
    float d;
    *(float *)(p + 0x20) = 6.283185f * (*(float *)(p + 0x220) / 360.0f);
    func_0041E270(p + 0x70, p + 0x1A0, *(float *)(p + 0x228), *(float *)(p + 0x22C));
    func_0041E270(p + 0x80, p + 0x190, *(float *)(p + 0x230), *(float *)(p + 0x234));
    if (*(unsigned char *)(p + 0x2B6) == 0) {
        if ((unsigned char)k == 0) {
            o = *(char **)(*(char **)D_01CAFF0C + 0xC);
        } else {
            o = *(char **)(*(char **)D_01CAFF0C + 0x10);
        }
        if (*(float *)(p + 0x74) - *(float *)(o + 0x54) < 20.0f) {
            *(float *)(p + 0x74) = 20.0f + *(float *)(o + 0x54);
        }
    }
    *(float *)(p + 0x7C) = 1.0f;
    *(float *)(p + 0x8C) = 1.0f;
    func_0024BF20(p);
}
