extern char D_01C61820[];

void func_001B6470(char *, int *);

void func_001B64C0(char *, int);

void func_001B64D0(char *, short *);

void func_001B6510(char *, int);

void func_001B6520(char *, int);

void func_001B6550(char *, int);

int func_001B6630(char *, char *);

void func_005038F0(char *p) {
    short sz[2];
    int s[7];
    if (*(unsigned char *)(p + 0x55) != 0) {
        int a;
        s[0] = 0;
        s[1] = 0;
        s[2] = 0xFFFFFF;
        a = *(int *)(p + 0x4C) << 24;
        sz[0] = 0x200;
        sz[1] = 0x100;
        func_001B6470(D_01C61820, s);
        func_001B64C0(D_01C61820, a);
        func_001B64D0(D_01C61820, sz);
        func_001B6510(D_01C61820, 3);
        func_001B6520(D_01C61820, 0xF);
        func_001B6550(D_01C61820, 1);
        func_001B6630(D_01C61820, 0);
    }
}

void func_001AD140(char *);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_001B1120(int);

extern char D_00666750[];

int func_001AFB90(char *, int, int, int);

int func_00503AE0(int, int, float);

int func_00503FC0(int);

void func_00503FD0(int);

typedef struct { float a; int b; float c; int d; } E503;

static inline int free503(char *p) {
    int i;
    unsigned char r = 1;
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0x3C) != 0) r = 0;
    }
    return r;
}

extern E503 D_0058BF70[];

static inline int ok503(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

void func_00503470(char *p) {
    E503 v;
    int i;
    int k;
    E503 *e;
    unsigned char r;
    v = D_0058BF70[*(int *)(p + 0x50)];
    *(float *)(p + 0x48) = *(float *)(p + 0x48) + 1.0f;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(int *)(p + 0x50) = 0;
        *(unsigned char *)(p + 4) = 1;
    case 1:
        k = v.b;
        if (k < 0) {
            *(unsigned char *)(p + 4) = 3;
        } else {
            func_001B1120(1);
            *(int *)(p + 0x38) = func_001AFB90(D_00666750, k, 1, 8);
            func_001B1120(0);
            *(unsigned char *)(p + 4) = 2;
        }
    case 2:
        if ((unsigned char)ok503(*(unsigned char **)(p + 0x38)) == 0) break;
        *(unsigned char *)(p + 4) = 3;
    case 3:
        i = *(int *)(p + 0x50) % 3;
        if (v.a < *(float *)(p + 0x48)) {
            if (((int *)(p + 0x3C))[i] == 0) {
                if (v.d != -1) {
                    func_001B1120(1);
                    ((int *)(p + 0x3C))[i] = func_00503AE0(*(int *)(p + 0x38), v.d, v.c);
                    func_001B1120(0);
                }
                *(int *)(p + 0x50) = *(int *)(p + 0x50) + 1;
                e = &D_0058BF70[*(int *)(p + 0x50)];
                v.a = e->a;
                v.b = e->b;
                v.c = e->c;
                v.d = e->d;
                if (v.a < 0.0f) {
                    *(unsigned char *)(p + 4) = 4;
                } else {
                    *(unsigned char *)(p + 4) = 1;
                }
            }
        }
        break;
    case 4:
        if (*(unsigned char *)(p + 0x55) == 1) *(unsigned char *)(p + 4) = 5;
        break;
    case 5:
        if (*(int *)(p + 0x4C) < 0x80) {
            *(int *)(p + 0x4C) = *(int *)(p + 0x4C) + 2;
            break;
        }
        *(int *)(p + 0x4C) = 0x80;
        *(unsigned char *)(p + 4) = (*(unsigned char *)(p + 0x57) == 1) ? 6 : 8;
        break;
    case 6:
        func_001B1120(1);
        *(int *)(p + 0x38) = func_001AFB90(D_00666750, 0x11B8, 0, 8);
        func_001B1120(0);
        *(unsigned char *)(p + 4) = 7;
    case 7:
        if ((unsigned char)ok503(*(unsigned char **)(p + 0x38)) != 1) break;
        i = *(int *)(p + 0x50) % 3;
        func_001B1120(1);
        ((int *)(p + 0x3C))[i] = func_00503AE0(*(int *)(p + 0x38), 1, -1.0f);
        func_001B1120(0);
        *(unsigned char *)(p + 4) = 8;
        break;
    case 8:
        if (*(unsigned char *)(p + 0x56) == 1) *(unsigned char *)(p + 4) = 9;
        break;
    case 9:
        if ((unsigned char)free503(p) == 1) *(unsigned char *)(p + 4) = 10;
        break;
    case 10:
        func_001AD140(p);
        *(unsigned char *)(p + 4) = 11;
    case 11:
        break;
    default:
        goto bad;
    }
    for (i = 0; i < 3; i++) {
        if (*(int *)(p + i * 4 + 0x3C) != 0) {
            if ((unsigned char)func_00503FC0(*(int *)(p + i * 4 + 0x3C)) == 1) {
                func_001AD140((char *)*(int *)(p + i * 4 + 0x3C));
                *(int *)(p + i * 4 + 0x3C) = 0;
            } else if (*(unsigned char *)(p + 0x56) == 1) {
                func_00503FD0(*(int *)(p + i * 4 + 0x3C));
            }
        }
    }
    func_00195E20(D_005BE098, p);
    return;
bad:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 11;
}

extern char D_005A6F50[];

extern char D_005BB0E0[];

void func_0013D6A0();

char * func_00503220(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p) = D_005BB0E0;
    *(int *)(p + 72) = 0;
    *(int *)(p + 80) = 0;
    *(int *)(p + 76) = 0;
    *(int *)(p + 56) = 0;
    *(int *)(p + 60) = 0;
    *(int *)(p + 64) = 0;
    *(int *)(p + 68) = 0;
    *(char *)(p + 85) = 0;
    *(char *)(p + 86) = 0;
    *(char *)(p + 87) = 0;
    return p;
}

void func_005038C0(void) {}

void func_005038E0(void) {}
