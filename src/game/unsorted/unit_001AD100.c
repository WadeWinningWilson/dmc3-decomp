int func_001AE140(char *t, int i) {
    unsigned char k = *(unsigned char *)(t + i * 80 + 0x11);
    if (k == 6 || k == 2) {
        return 1;
    }
    return 0;
}

void func_001AE0D0(char *t, int i, int a, int b, int n) {
    char *v;
    t = t + i * 80;
    *(short *)(t + 80) = 1;
    *(char *)(t + 84) = a;
    v = t + 16;
    *(char *)(t + 85) = b;
    if ((a | b) == 0) {
        *(short *)(v + 66) = 0;
    } else if (n == 0 || n > 180) {
        *(short *)(v + 66) = 180;
    } else {
        *(short *)(v + 66) = n;
    }
}

unsigned short func_001AE200(char *, int);

unsigned short func_001AE2E0(char *, int, int);

unsigned short func_001AE3B0(char *p, int k) {
    unsigned short func_001AE1E0(char *, int);
    unsigned short func_001AE250(char *, int, int);
    return (func_001AE200(p, k) | func_001AE1E0(p, k)) | (func_001AE2E0(p, k, 1) | func_001AE250(p, k, 1));
}

void func_00123028(int, int, char *);

void func_001ADDC0(char *p, int k, int a) {
    char *e = p + k * 80 + 0x10;
    switch (*(short *)(e + 0x40)) {
    case 0:
        {
            int v = *(short *)(e + 0x42);
            if (v == 0) {
                break;
            }
            v = v - 1;
            *(short *)(e + 0x42) = v;
            if ((short)v > 0) {
                break;
            }
        }
        {
            *(unsigned char *)(e + 0x44) = 0;
            *(unsigned char *)(e + 0x45) = 0;
        }
    case 1:
        if (*(unsigned char *)(e + 0) == 0x63 && *(unsigned char *)(e + 1) == 6) {
            func_00123028(k, a, e + 0x44);
            *(short *)(e + 0x40) = 0;
        }
        break;
    }
}

unsigned short func_001AD8B0(char *p, unsigned char *b, int k) {
    unsigned short v = ((b[2] << 8) | b[3]) ^ 0xFFFF;
    if (k != 5) {
        return v;
    }
    {
        unsigned short n = v & 0xF961;
        if (v & 8) {
            n |= 0x10;
        }
        if (v & 4) {
            n |= 0x80;
        }
        if (v & 2) {
            n |= 4;
        }
        if (v & 0x10) {
            n |= 8;
        }
        if (v & 0x80) {
            n |= 2;
        }
        v = n;
    }
    return v;
}

int func_001AD430(char *p);

void func_001AE050(char *p, void *b);

unsigned char *func_001AE180(char *p, int n);

typedef struct { unsigned short now, old, trg, rel; int x8; unsigned short c, e; } PadBtn;

typedef struct { unsigned short now, old, trg, rel; int x8; PadBtn b[2]; } PadSt;

typedef struct { char pad[0x318]; short a[2][4]; } PadT;

void func_001ADE70(char *p) {
    PadSt *ps;
    int i;
    int j;
    PadBtn *b;
    unsigned char *s;
    ps = (PadSt *)(p + 0x2C0);
    s = func_001AE180(p, 0);
    func_001AD430(p);
    for (i = 0; i < 2; i++, ps++, s += 0x50) {
        ps->old = ps->now;
        ps->now = *(unsigned short *)(s + 4);
        ps->trg = ps->now & ~ps->old;
        ps->rel = ps->old & ~ps->now;
        func_001AE050(p, ps);
        for (b = ps->b, j = 0; j < 2; j++, b++) {
            b->old = b->now;
            b->now = *(unsigned short *)(s + 0x20 + j * 8);
            b->trg = b->now & ~b->old;
            b->rel = b->old & ~b->now;
            b->c = *(unsigned short *)(s + 0x38 + j * 2);
            b->e = *(unsigned short *)(s + 0x3C + j * 2);
            func_001AE050(p, b);
        }
        for (j = 0; j < 4; j++)
            ((PadT *)p)->a[i][j] = s[0x10 + j] - 0x80;
        for (j = 0; j < 12; j++)
            (p + i * 12)[0x328 + j] = s[0x14 + j];
    }
}

typedef struct Row {
    unsigned short f0;
    unsigned short pad2;
    unsigned short f4;
    unsigned short pad6;
    unsigned short f8;
    unsigned short padA;
    unsigned short fC;
    unsigned short fE;
} Row;

typedef struct Record {
    Row row[2];
    char pad[12];
} Record;

typedef struct Table {
    char pad[0x2CC];
    Record rec[1];
} Table;

int func_001AE220(Table *t, int i, int j) { return t->rec[i].row[j].f0; }

int func_001AE280(Table *t, int i, int j) { return t->rec[i].row[j].fC; }

int func_001AE2B0(Table *t, int i, int j) { return t->rec[i].row[j].fE; }

int func_001AE220(Table *t, int i, int j);

/* Flags of record i: its +0x2C0 halfword or row 1's first halfword. */
int func_001AE1A0(void *, int);

unsigned short func_001AE310(Table *t, int i) {
    return (unsigned short)func_001AE1A0(t, i) | (unsigned short)func_001AE220(t, i, 1);
}

unsigned short func_001AE360(Table *t, int i) {
    int func_001AE1E0(void *, int);
    return (unsigned short)func_001AE1E0(t, i) | (unsigned short)func_001AE250(t, i, 1);
}

extern char D_01DF5D20[];

float func_001F9C40();

int func_001AD100(p0) int p0; {
    float tmp1;
    tmp1 = func_001F9C40(D_01DF5D20, *(int *)((char *)p0 + 12));
    *(float *)((char *)p0 + 16) = (*(float *)((char *)p0 + 20) * tmp1);
}

int func_00122340();

int func_001AD290();

void func_001AD340();

int func_001AD1E0(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int tmp0;
    v0 = p0;
    v1 = p1;
    if (*(int *)(p0 + 0) == 1) {
        func_001AD340();
    }
    do {
        tmp0 = func_00122340(0);
        v2 = 1;
    } while (tmp0 != v2);
    *(int *)(v0 + 0) = v2;
    *(int *)(v0 + 4) = ((v1 & 1) != 0);
    *(int *)(v0 + 8) = ((v1 & 2) != 0);
    v3 = 0;
    *(int *)(v0 + 12) = ((v1 & 4) != 0);
    do {
        v4 = func_001AD290(v0, v3, 0);
        v3 = (v3 + 1);
    } while ((v3 < 2));
    return v4;
}

int func_001225A0();

void func_00130990();

int func_001AD290(p0, p1, p2) int p0; int p1; int p2; {
    int v1;
    int v3;
    int v0;
    int v5;
    char *v2;
    int v4;
    v1 = p1;
    v2 = (char *)((p0 + (p1 * 80)) + 16);
    v3 = p2;
    func_00130990(v2, 20);
    v0 = ((p0 + (v1 << 8)) + 192);
    do {
        v4 = func_001225A0(v1, v3, v0);
        v5 = 1;
    } while (v4 != v5);
    *(char *)(v2 + 74) = 0;
    *(char *)(v2 + 75) = v5;
    *(unsigned char *)(v2 + 76) = 255;
    *(unsigned char *)(v2 + 77) = 255;
    *(unsigned char *)(v2 + 78) = 255;
    *(unsigned char *)(v2 + 79) = 255;
    return v4;
}

int func_00122520();

void func_001AD3C0();

void func_001AD340(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    if (*(int *)(p0 + 0) != 0) {
        v1 = 0;
        do {
            func_001AD3C0(v0, v1, 0);
            v1 = (v1 + 1);
        } while ((v1 < 2));
        do {
            v2 = func_00122520();
        } while (v2 != 1);
        *(int *)(v0 + 0) = 0;
    }
}

int func_001AE1C0(p0, p1) int p0; int p1; {
    return *(unsigned short *)((char (*)[44])((char *)p0 + 706))[p1];
}
