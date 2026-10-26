char *func_002109C0(char *p, int i) {
    char *e = *(char **)(p + 36) + (i << 4);
    char *v;
    if (*(int *)e != 0) {
        v = *(char **)(e + 4);
        switch (*(unsigned char *)v) {
        case 0:
            break;
        case 1:
        case 2:
        case 4:
        case 3:
            return v;
        default:
            return 0;
        }
    }
    return 0;
}

int func_002101A0(char *, float);

typedef struct { short n; char x[0x16]; } T18;

int func_00210850(float f, char *o, int k, char **out) {
    extern T18 D_00541CE0[];
    int i;
    int c = 0;
    char *e;
    char *s;
    *out = 0;
    for (i = 0; i < D_00541CE0[*(unsigned char *)(o + 6)].n; i++) {
        e = *(char **)(o + 0x24) + i * 16;
        if (*(int *)e != 0) {
            s = *(char **)(e + 4);
            switch (*(unsigned char *)s) {
            case 0:
                break;
            case 1:
            case 2:
            case 4:
            case 3:
                if ((unsigned char)func_002101A0(s, f) == 1) {
                    if (k == c) {
                        *out = s;
                    }
                    c++;
                }
                break;
            default:
                return 0;
            }
        }
    }
    return c;
}

void func_0020FF40(float d, char *p) {
    void func_00210090(float);
    char *t;
    if (*(unsigned char *)(p + 0x90) == 0) return;
    *(float *)(p + 0x94) = *(float *)(p + 0x94) + d;
    if (!(d <= 0.0f)) {
        t = *(char **)(p + 0x98);
        if (*(int *)(t + 0xC) != 0) {
            if (!(*(float *)(p + 0x94) <= *(float *)(t + 0x1C)) || !(*(float *)(p + 0x94) <= *(float *)(t + 0x14))) {
                *(float *)(p + 0x94) = *(float *)(t + 0x18);
                *(unsigned char *)(p + 0x90) = 4;
            } else {
                *(unsigned char *)(p + 0x90) = 2;
            }
        } else if (!(*(float *)(p + 0x94) <= *(float *)(t + 0x14))) {
            *(float *)(p + 0x94) = *(float *)(t + 0x14);
            *(unsigned char *)(p + 0x90) = 4;
        }
    } else {
        t = *(char **)(p + 0x98);
        if (*(int *)(t + 0xC) != 0) {
            if (*(float *)(p + 0x94) < *(float *)(t + 0x18) || *(float *)(p + 0x94) < *(float *)(t + 0x10)) {
                *(float *)(p + 0x94) = *(float *)(t + 0x1C);
                *(unsigned char *)(p + 0x90) = 3;
            }
        } else if (*(float *)(p + 0x94) < *(float *)(t + 0x10)) {
            *(float *)(p + 0x94) = *(float *)(t + 0x10);
            *(unsigned char *)(p + 0x90) = 3;
        } else {
            *(unsigned char *)(p + 0x90) = 2;
        }
    }
    func_00210090(*(float *)(p + 0x94));
}

void func_001F9EC0(char *);

void func_001F9EE0(char *, int, char *);

void func_0020FBE0(char *p, char *d) {
    void func_00210090(char *, float);
    int i;
    char *q;
    int n;
    i = 0;
    *(char **)(p + 0x98) = d;
    q = p;
    *(float *)(p + 0xA0) = *(float *)(*(char **)(p + 0x98) + 0x20);
    *(float *)(p + 0xB4) = *(float *)(*(char **)(p + 0x98) + 0x24);
    *(float *)(p + 0xC8) = *(float *)(*(char **)(p + 0x98) + 0x28);
    *(float *)(p + 0xDC) = *(float *)(*(char **)(p + 0x98) + 0x2C);
    *(float *)(p + 0xF0) = *(float *)(*(char **)(p + 0x98) + 0x30);
    *(float *)(p + 0x104) = *(float *)(*(char **)(p + 0x98) + 0x34);
    *(float *)(p + 0x118) = *(float *)(*(char **)(p + 0x98) + 0x38);
    *(float *)(p + 0x12C) = *(float *)(*(char **)(p + 0x98) + 0x3C);
    *(float *)(p + 0x140) = *(float *)(*(char **)(p + 0x98) + 0x40);
    *(float *)(p + 0x154) = *(float *)(*(char **)(p + 0x98) + 0x44);
    *(float *)(p + 0x168) = *(float *)(*(char **)(p + 0x98) + 0x48);
    *(float *)(p + 0x17C) = *(float *)(*(char **)(p + 0x98) + 0x4C);
    *(float *)(p + 0x190) = *(float *)(*(char **)(p + 0x98) + 0x50);
    *(float *)(p + 0x1A4) = *(float *)(*(char **)(p + 0x98) + 0x54);
    for (; i < 14; i++, q += 0x14) func_001F9EC0(q + 0x9C);
    n = 0;
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x1) func_001F9EE0(p + 0x9C, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x2) func_001F9EE0(p + 0xB0, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x4) func_001F9EE0(p + 0xC4, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x8) func_001F9EE0(p + 0xD8, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x10) func_001F9EE0(p + 0xEC, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x20) func_001F9EE0(p + 0x100, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x40) func_001F9EE0(p + 0x114, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x80) func_001F9EE0(p + 0x128, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x100) func_001F9EE0(p + 0x13C, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x200) func_001F9EE0(p + 0x150, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x400) func_001F9EE0(p + 0x164, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x800) func_001F9EE0(p + 0x178, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x1000) func_001F9EE0(p + 0x18C, n++, d);
    if (*(int *)(*(char **)(p + 0x98) + 8) & 0x2000) func_001F9EE0(p + 0x1A0, n++, d);
    *(float *)(p + 0x94) = *(float *)(*(char **)(p + 0x98) + 0x10);
    *(unsigned char *)(p + 0x90) = 2;
    func_00210090(p, *(float *)(p + 0x94));
}

extern char D_005A7800[];

void func_00100450();

void func_001F9E40();

void func_001F9E70();

void func_0024BE00();

int func_0020FAA0(p0) int p0; {
    void func_0020FB00();
    func_0024BE00();
    *(char **)((char *)p0 + 0) = D_005A7800;
    func_00100450((p0 + 156), (char *)func_001F9E40, (char *)func_001F9E70, 20, 14);
    func_0020FB00(p0);
    return p0;
}

extern char D_01DF8830[];

extern char D_01DF8850[];

int func_0013D070();

int func_001B0FD0();

int func_00210270() {
    int v0;
    int v1;
    int tmp0;
    v0 = func_001B0FD0(D_01DF8830, 0x90000, 1);
    if (v0 == 0) {
        v1 = 0;
    } else {
        tmp0 = func_0013D070(D_01DF8850, v0, 16, 0x90000, 7);
        v1 = ((tmp0 & 255) != 0);
    }
    return v1;
}

int func_00210740(p0) char *p0; {
    extern char D_00541CE0[];
    int v0;
    int v1;
    int v2;
    char *v3;
    v0 = 0;
    v1 = *(short *)((D_00541CE0 + (*(unsigned char *)(p0 + 6) * 24)) + 0);
    v2 = 0;
    if ((0 < v1)) {
        v3 = *(char **)(p0 + 36);
        do {
            if (*(int *)(v3 + 0) != 0) {
                v0 = (v0 + 1);
            }
            v2 = (v2 + 1);
            v3 = (v3 + 16);
        } while ((v2 < v1));
    }
    return v0;
}

int func_00210740();

int func_002107A0(p0) char *p0; {
    extern char D_00541CE0[];
    char *v0;
    int tmp0;
    v0 = p0;
    if (*(unsigned char *)(*(char **)(p0 + 0) + 0) == 0) {
        tmp0 = func_00210740();
        *(int *)(v0 + 12) = tmp0;
    } else {
        *(int *)(v0 + 12) = *(short *)((D_00541CE0 + (*(unsigned char *)(v0 + 6) * 24)) + 0);
    }
    return *(int *)(v0 + 12);
}

void func_0020FBD0(void) {
    extern void func_0020FB00(); func_0020FB00(); }

void func_00210190(void) {}

void func_00210260(void) {}

void func_00210220(char *p0) {
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(char *)(p0 + 0) = 1;
}

char *func_00210240(char *p0) {
    return *(char **)(*(char **)(p0 + 20) + 0);
}

extern char D_005990C8[];

char *func_00210250(void) {
    return D_005990C8;
}

void func_0013D5D0();

void func_002102E0(void) {
    func_0013D5D0(D_01DF8830);
}
