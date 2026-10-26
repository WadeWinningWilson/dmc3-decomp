extern char D_00666750[];

void func_001AD140(char *);

extern char D_006663C0[];

extern int D_00569E90[];

int func_001AFB90(char *, int, int, int);

int func_003F3F30(char *, int);

int func_003F44F0(int);

unsigned short func_001AE1E0(char *, int);

void func_003F44E0(int);

int func_003F44D0(int);

void func_001AF080(char *, int);

int func_004FA920(char *, int);

int func_004D8EA0(char *, int);

static inline int ok4FA1(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

void func_004FA180(char *p) {
    char *h;
    int x;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(int *)(p + 0x2C) = func_001AFB90(D_00666750, 0x1B94, 1, 8);
        if (*(int *)(p + 0x2C) == 0) {
            *(int *)(p + 8) = 7;
            break;
        }
        *(int *)(p + 0x30) = func_001AFB90(D_00666750, D_00569E90[*(short *)(p + 0x22)], 1, 8);
        if (*(int *)(p + 0x30) == 0) {
            *(int *)(p + 8) = 7;
            break;
        }
        *(int *)(p + 0x34) = func_001AFB90(D_00666750, 0x334, 1, 8);
        if (*(int *)(p + 0x34) == 0) {
            *(int *)(p + 8) = 7;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
    case 1:
        if ((unsigned char)ok4FA1(*(char **)(p + 0x2C)) != 1) break;
        *(int *)(p + 0x44) = func_004FA920(*(char **)(p + 0x2C), 0);
        if (*(int *)(p + 0x44) == 0) {
            *(int *)(p + 8) = 7;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if (*(signed char *)(*(char **)(p + 0x44) + 0xDB4) == 1) *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 3:
        if ((unsigned char)ok4FA1(*(char **)(p + 0x30)) != 1) break;
        if ((unsigned char)ok4FA1(*(char **)(p + 0x34)) != 1) break;
        *(int *)(p + 0x3C) = func_003F3F30(*(char **)(p + 0x30), *(signed char *)(p + 0x22));
        if (*(int *)(p + 0x3C) == 0) {
            *(int *)(p + 8) = 7;
            break;
        }
        *(int *)(p + 0x48) = func_004D8EA0(*(char **)(p + 0x34), 3);
        if (*(int *)(p + 0x48) == 0) {
            *(int *)(p + 8) = 7;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 4:
        x = *(signed char *)(*(char **)(p + 0x44) + 0xDB4);
        if (x == 2 || x == 3) {
            if ((unsigned char)func_003F44F0(*(int *)(p + 0x3C)) == 1) *(int *)(p + 8) = *(int *)(p + 8) + 1;
        }
        break;
    case 5:
        if ((func_001AE1E0(D_006663C0, 0) & 0x50) == 0) break;
        func_003F44E0(*(int *)(p + 0x3C));
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 6:
        if ((unsigned char)func_003F44D0(*(int *)(p + 0x3C)) == 1) *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 7:
        if (*(char **)(p + 0x44) != 0) {
            func_001AD140(*(char **)(p + 0x44));
            *(char **)(p + 0x44) = 0;
        }
        if (*(char **)(p + 0x3C) != 0) {
            func_001AD140(*(char **)(p + 0x3C));
            *(char **)(p + 0x3C) = 0;
        }
        if (*(char **)(p + 0x48) != 0) {
            func_001AD140(*(char **)(p + 0x48));
            *(char **)(p + 0x48) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 8: case 9:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 10:
        h = *(char **)(p + 0x2C);
        if (h != 0) {
            if (!(unsigned char)ok4FA1(h)) break;
            func_001AF080(D_00666750, (int)h);
            *(int *)(p + 0x2C) = 0;
        }
        h = *(char **)(p + 0x30);
        if (h != 0) {
            if (!(unsigned char)ok4FA1(h)) break;
            func_001AF080(D_00666750, (int)h);
            *(int *)(p + 0x30) = 0;
        }
        h = *(char **)(p + 0x34);
        if (h != 0) {
            if (!(unsigned char)ok4FA1(h)) break;
            func_001AF080(D_00666750, (int)h);
            *(int *)(p + 0x34) = 0;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 7;
        break;
    }
}

void func_0022CBB0(char *, char *);

int func_0022CBA0(char *);

int func_0012B1A0(char *, char *);

int func_0022CD60(char *);

extern char D_005BDFF4[4];

extern char D_005BDFF8[8];

extern char D_005BE000[8];

extern char D_0058BE60[];

typedef struct { signed char b0; signed char b1; unsigned char b2; char pad3[0x1D]; int e0; int e4; int e8; int ec; unsigned char f0; unsigned char f1; } S4FCs;

typedef struct { signed char a0; unsigned char a1; signed char a2; unsigned char a3; char pad4[0xC]; float f10[12]; S4FCs sub; } S4FC;

int func_004FC4C0(char *, int *, S4FC *);

int func_002F6690(S4FC *, char *, char *);

int func_002F69A0(S4FCs *, char *, char *);

int func_004FC2E0(char *p, int *q, char *r) {
    char name[32];
    S4FC s;
    s.a1 = 0;
    s.a3 = 0;
    s.f10[0] = 0.0f;
    s.a0 = -1;
    s.a2 = -1;
    s.f10[1] = 0.0f;
    s.f10[2] = 0.0f;
    s.f10[3] = 1.0f;
    s.f10[4] = 0.0f;
    s.f10[5] = 0.0f;
    s.f10[6] = 0.0f;
    s.f10[7] = 1.0f;
    s.f10[8] = 1.0f;
    s.f10[9] = 1.0f;
    s.f10[10] = 1.0f;
    s.f10[11] = 1.0f;
    s.sub.b0 = -1;
    s.sub.b1 = -1;
    s.sub.b2 = 0;
    s.sub.e8 = 0;
    s.sub.e4 = 0;
    s.sub.e0 = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BDFF4) == 0) {
            return func_004FC4C0(p, q, &s);
        }
        if (func_002F6690(&s, name, r) == 0 && func_002F69A0(&s.sub, name, r) == 0) {
            if (func_0012B1A0(name, D_005BDFF8) == 0) {
                s.sub.ec = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_005BE000) == 0) {
                s.sub.f0 = func_0022CD60(r);
            } else if (func_0012B1A0(name, D_0058BE60) == 0) {
                s.sub.f1 = func_0022CD60(r);
            }
        }
    }
    return 0;
}

void func_00323EC0(char *p, int a);

void func_00323F90(char *);

static inline int ok4FA(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

void func_004FA5B0(char *p) {
    char *h;
    switch (*(unsigned int *)(p + 8)) {
    case 0:
        *(int *)(p + 0x2C) = func_001AFB90(D_00666750, *(short *)(p + 0x22) + 0x1B75, 1, 8);
        if (*(int *)(p + 0x2C) == 0) {
            *(int *)(p + 8) = 3;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        func_00323EC0(*(char **)(*(char **)(p + 0x28) + 0xC), *(short *)(p + 0x22) ? 0x4C : 0x4B);
    case 1:
        if ((unsigned char)ok4FA(*(char **)(p + 0x2C)) != 1) break;
        *(int *)(p + 0x44) = func_004FA920(*(char **)(p + 0x2C), *(short *)(p + 0x22) + 1);
        if (*(int *)(p + 0x44) == 0) {
            *(int *)(p + 8) = 3;
            break;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        break;
    case 2:
        if (*(signed char *)(*(char **)(p + 0x44) + 0xDB4) == 3) *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 3:
        if (*(char **)(p + 0x44) != 0) {
            func_001AD140(*(char **)(p + 0x44));
            *(char **)(p + 0x44) = 0;
        }
        *(int *)(p + 8) = *(int *)(p + 8) + 1;
        func_00323F90(*(char **)(*(char **)(p + 0x28) + 0xC));
        break;
    case 4: case 5:
        *(int *)(p + 8) = *(unsigned int *)(p + 8) + 1;
        break;
    case 6:
        h = *(char **)(p + 0x2C);
        if (h != 0) {
            if (!(unsigned char)ok4FA(h)) break;
            func_001AF080(D_00666750, (int)h);
            *(int *)(p + 0x2C) = 0;
        }
        *(int *)(p + 4) = *(int *)(p + 4) + 1;
        *(int *)(p + 8) = 0;
        break;
    default:
        *(int *)(p + 8) = 3;
        break;
    }
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005BABB0[];

void func_00100450();

void func_0013D240();

void func_0013D6A0();

void func_001AAD30();

void func_002791E0();

char * func_004FA790(p) char *p; {
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
    *(char * *)(p) = D_005BABB0;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 10, 135);
    func_00100450(p + 256, (void *)func_002790E0, (void *)func_002791E0, 1536, 2);
    *(char *)(p + 3376) = 0;
    *(char *)(p + 3508) = -1;
    *(char *)(p + 3530) = 0;
    return p;
}

void func_004FB860(void) {}

unsigned char func_004FB8D0(char *p) { return *(unsigned char *)(p + 3530); }

extern char D_0058BE13[];

void func_004FB870(char *p0, int p1) {
    signed char t0;
    signed char t1;
    signed char t2;
    signed char t3;
    signed char t4;
    signed char t5;
    t0 = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 0);
    *(char *)(p0 + 3524) = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 0);
    t1 = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 5);
    *(char *)(p0 + 3525) = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 5);
    t2 = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 10);
    *(char *)(p0 + 3526) = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 10);
    t3 = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 15);
    *(char *)(p0 + 3527) = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 15);
    t4 = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 20);
    *(char *)(p0 + 3528) = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 20);
    t5 = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 25);
    *(char *)(p0 + 3529) = *(signed char *)((D_0058BE13 + (((p1 << 4) - p1) << 1)) + 25);
    *(char *)(p0 + 3530) = 1;
}
