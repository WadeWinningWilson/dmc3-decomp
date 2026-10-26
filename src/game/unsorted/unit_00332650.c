void func_00332F20(char *tbl, int id, unsigned char flag, unsigned char force, float val) {
    int i;
    int empty = -1;
    int found = 0;
    int fi = -1;
    int bi;
    float best = 1000.0f;
    char *e;
    for (i = 0, e = tbl; i < 20; i++, e += 12) {
        if (empty == -1 && *(unsigned char *)(e + 0xC) == 0) {
            empty = i;
        }
        if (!(best <= *(float *)(e + 0x14))) {
            best = *(float *)(e + 0x14);
            bi = i;
        }
        if (*(int *)(e + 0x10) == id) {
            found = 1;
            fi = i;
        }
    }
    if (found == 1 && force == 0 && fi != -1) {
        *(unsigned char *)((char *)(fi * 12) + (int)tbl + 0xC) = flag;
        *(int *)((char *)(fi * 12) + (int)tbl + 0x10) = id;
        *(float *)((char *)(fi * 12) + (int)tbl + 0x14) = val;
    } else if (found == 0) {
        if (empty != -1) {
            *(unsigned char *)((char *)(empty * 12) + (int)tbl + 0xC) = flag;
            *(int *)((char *)(empty * 12) + (int)tbl + 0x10) = id;
            *(float *)((char *)(empty * 12) + (int)tbl + 0x14) = val;
        } else {
            *(unsigned char *)((char *)(bi * 12) + (int)tbl + 0xC) = flag;
            *(int *)((char *)(bi * 12) + (int)tbl + 0x10) = id;
            *(float *)((char *)(bi * 12) + (int)tbl + 0x14) = val;
        }
    }
}

extern int D_01CAFF30[];

extern unsigned char D_01CAFF3C[];

typedef struct { char pad[0x2C]; int t[4]; char rest[0x84 - 0x3C]; } Ent84;

typedef struct { int hdr; Ent84 e[5]; } Row298;

extern Row298 D_0054A0E0[];

int func_00332DD0(char *p) {
    float f = *(float *)(p + 0xFC);
    Ent84 *e = &D_0054A0E0[D_01CAFF30[0]].e[D_01CAFF3C[0]];
    if (!(f < (float)(e->t[0] / 100))) return 4;
    if (!(f < (float)(e->t[1] / 100))) return 3;
    if (!(f < (float)(e->t[2] / 100))) return 2;
    if (f < (float)(e->t[3] / 100)) goto zero;
    return 1;
zero:
    return 0;
}

extern char D_01DF5D20[];

float func_001F9C40(char *, int);

void func_00333030(char *p) {
    int i;
    char *e;
    for (i = 0; i < 20; i++) {
        e = p + i * 12;
        if (*(unsigned char *)(e + 0xC) == 2) {
            *(float *)(e + 0x14) = *(float *)(e + 0x14) - func_001F9C40(D_01DF5D20, 0x87);
            if (*(float *)(e + 0x14) <= 0.0f) {
                *(unsigned char *)(e + 0xC) = 0;
                *(float *)(e + 0x14) = 0.0f;
                *(int *)(e + 0x10) = -1;
            }
        }
    }
}

void func_00332CF0(char *p, float a, float b) {
    unsigned int n;
    switch (*(unsigned char *)p) {
    case 0: n = 10; break;
    case 1: n = 20; break;
    case 2: n = 30; break;
    case 3: n = 40; break;
    case 4: n = 50; break;
    case 5: n = 60; break;
    case 6: n = 70; break;
    case 7: n = 80; break;
    }
    *(float *)(p + 0x100) = *(float *)(p + 0x100) + b * ((float)n * a);
    *(float *)(p + 0x104) = *(float *)(p + 0x104) + a;
    if (*(float *)(p + 0x104) != 0.0f) *(float *)(p + 0xFC) = *(float *)(p + 0x100) / *(float *)(p + 0x104);
}

extern char D_01CAFF0C[];

void func_00333030(char *p);

extern float D_00545C70[];

void func_003326E0(char *p, int a) {
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 0xA)) return;
    if (a == 0) {
        switch (*(unsigned char *)p) {
        case 0:
            if (!(*(float *)(p + 4) <= 300.0f))
                *(float *)(p + 4) = *(float *)(p + 4) - D_00545C70[*(unsigned char *)p] * func_001F9C40(D_01DF5D20, 0x87);
            break;
        default:
            if (!(*(float *)(p + 4) < 0.0f))
                *(float *)(p + 4) = *(float *)(p + 4) - D_00545C70[*(unsigned char *)p] * func_001F9C40(D_01DF5D20, 0x87);
            break;
        }
        if (*(float *)(p + 4) < 0.0f) {
            switch (*(unsigned char *)p) {
            case 0: break;
            case 1: *(unsigned char *)p = 0; break;
            case 2: *(unsigned char *)p = 1; break;
            case 3: *(unsigned char *)p = 2; break;
            case 4: *(unsigned char *)p = 3; break;
            case 5: *(unsigned char *)p = 4; break;
            case 6: *(unsigned char *)p = 5; break;
            case 7: *(unsigned char *)p = 6; break;
            }
            *(float *)(p + 4) = 300.0f;
        }
    }
    func_00333030(p);
}

void func_00333110();

void func_003326C0(p0) char *p0; {
    *(char *)(p0 + 0) = 0;
    *(int *)(p0 + 4) = 0x43960000;
    *(int *)(p0 + 8) = 0x3f800000;
    func_00333110();
}

void func_00332C70(p0) char *p0; {
    int v0;
    int v1;
    if (*(unsigned char *)(*(char **)D_01CAFF0C + 10) == 0) {
        v0 = *(unsigned char *)(p0 + 0);
        switch (v0) {
        case 0:
        case 1:
        case 2:
            *(char *)(p0 + 0) = 0;
            break;
        case 3:
            *(char *)(p0 + 0) = 1;
            break;
        case 4:
            *(char *)(p0 + 0) = 2;
            break;
        case 5:
        case 6:
        case 7:
            *(char *)(p0 + 0) = 3;
            break;
        }
        *(int *)(p0 + 4) = 0x43960000;
    }
}

int func_003330C0(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    v0 = 0;
    v1 = 2;
    do {
        if (*(unsigned char *)(p0 + 12) == v1) {
            tmp0 = *(int *)(p0 + 16);
            v2 = 0;
            if (tmp0 == p1) {
                return v2;
            }
        }
        v0 = (v0 + 1);
        p0 = (p0 + 12);
    } while ((v0 < 20));
    v2 = 1;
    return v2;
}

void func_00333110(p0) char *p0; {
    int v0;
    int v1;
    v0 = 0;
    v1 = -1;
    do {
        *(char *)(p0 + 12) = 0;
        *(int *)(p0 + 16) = v1;
        v0 = (v0 + 5);
        *(int *)(p0 + 20) = 0;
        *(char *)(p0 + 24) = 0;
        *(int *)(p0 + 28) = v1;
        *(int *)(p0 + 32) = 0;
        *(char *)(p0 + 36) = 0;
        *(int *)(p0 + 40) = v1;
        *(int *)(p0 + 44) = 0;
        *(char *)(p0 + 48) = 0;
        *(int *)(p0 + 52) = v1;
        *(int *)(p0 + 56) = 0;
        *(char *)(p0 + 60) = 0;
        *(int *)(p0 + 64) = v1;
        *(int *)(p0 + 68) = 0;
        p0 = (p0 + 60);
    } while ((v0 < 20));
}

void func_00333170(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = 0;
    v1 = 2;
    v2 = 1;
    do {
        if (*(unsigned char *)(p0 + 12) == v2) {
            *(char *)(p0 + 12) = v1;
        }
        v0 = (v0 + 1);
        p0 = (p0 + 12);
    } while ((v0 < 20));
}

void func_003331B0(char *p0, float f0, float f1) {
    *(float *)(p0 + 256) = f0;
    *(float *)(p0 + 260) = f1;
    if (0.0f != f1) {
        *(float *)(p0 + 252) = (*(float *)(p0 + 256) / f1);
    }
}

void func_003331E0(void) {}

char *func_00332650(char *p0) {
    *(int *)(p0 + 256) = 0;
    *(int *)(p0 + 260) = 0;
    *(int *)(p0 + 252) = 0;
    return p0;
}
