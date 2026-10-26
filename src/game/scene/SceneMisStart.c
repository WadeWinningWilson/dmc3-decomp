extern char D_00645A30[];

extern char D_01CAF570[];

extern char D_005D0E78[];

extern char D_00666750[];

extern char D_01DFA310[];

extern char D_00540330[];

extern int D_01CAFF30[];

extern unsigned char D_01CAFF3F[];

extern unsigned char D_00666712[];

extern int D_01CB12BC[];

int func_002871D0(int);

void func_00323140(int, int, int, int, int);

void func_00323100(int);

void func_003712B0(char *, int);

void func_0013DC30(char *, int, int);

int func_001AFB90(char *, int, int, int);

char *func_001AF3F0(char *, char *, int, int);

void func_0030E440(char *, int);

void func_0030E580(char *, char *);

void func_002DD470(void);

void func_002DD840(void);

void func_002DD890(void);

void func_0030E540(char *);

void func_00195520(char *, int);

static inline char *ent2DC(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }

static inline char *gch2DC(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent2DC(t, k); } else { r = *(char **)(h + 0xC); } return r; }

static inline int fl2DC(char *q) { return (*(unsigned int *)(q + 0x6C) & 0x40000) != 0; }

int func_002DCF60(char *p) {
    void func_001AF080(char *, char *);
    unsigned char ok;
    switch (*(int *)(p + 0x10)) {
    case 0:
        if (func_002871D0(*(int *)(*(char **)(p + 0xC) + 8)) != 0) {
            (*(int *)(p + 0x10))++;
            *(int *)(p + 0x64) = 6;
            func_00323140(*(int *)(*(char **)(p + 0xC) + 0xC), 0, 0x20, 4, 4);
        }
        break;
    case 1:
        if (--*(int *)(p + 0x64) < 0) {
            (*(int *)(p + 0x10))++;
            func_00323100(*(int *)(*(char **)(p + 0xC) + 0xC));
        }
        break;
    case 2:
        func_003712B0(D_01CAF570, 0);
        if (D_01CAFF30[0] < 0xE) {
            func_0013DC30(D_005D0E78, 0x33, 0);
        } else {
            func_0013DC30(D_005D0E78, 0x34, 0);
        }
        (*(int *)(p + 0x10))++;
        *(int *)(p + 0x14) = 0;
        *(int *)(p + 0x18) = 0;
        if (*(signed char *)(p + 0x1C) == -1) {
            *(int *)(p + 0x4C) = func_001AFB90(D_00666750, D_01CAFF30[0] + 0xC8, 0, 8);
            *(int *)(p + 0x50) = func_001AFB90(D_00666750, 0xE6, 0, 8);
            *(int *)(p + 0x54) = func_001AFB90(D_00666750, 0xE7, 0, 8);
        } else {
            *(int *)(p + 0x4C) = func_001AFB90(D_00666750, *(signed char *)(p + 0x1C) + 0x1B66, 0, 8);
            *(int *)(p + 0x50) = func_001AFB90(D_00666750, 0x1B73, 0, 8);
            *(int *)(p + 0x54) = func_001AFB90(D_00666750, 0xE7, 0, 8);
        }
        *(char **)(p + 0x5C) = func_001AF3F0(D_00666750, D_00540330 + D_00666712[0] * 4, 0, 0);
        break;
    case 3:
        ok = 1;
        if (*(unsigned char *)(*(char **)(p + 0x5C) + 1) != 0 && *(unsigned char *)(*(char **)(p + 0x5C) + 1) != 3) ok = 0;
        if (ok == 1) {
            func_0030E440(D_01DFA310, D_01CB12BC[0]);
            func_0030E580(D_01DFA310, gch2DC(*(char **)(p + 0x5C), 0));
            func_0030E580(D_01DFA310, gch2DC(*(char **)(p + 0x5C), 1));
            func_0030E580(D_01DFA310, gch2DC(*(char **)(p + 0x5C), 2));
            if (D_01CAFF30[0] == 1 && D_01CAFF3F[0] == 1 && fl2DC(*(char **)(p + 0xC)) == 0) {
                (*(int *)(p + 0x10))++;
                *(int *)(p + 0x14) = 2;
            } else {
                (*(int *)(p + 0x10))++;
                *(int *)(p + 0x14) = 0;
            }
        }
        break;
    case 4:
        switch (*(int *)(p + 0x14)) {
        case 0:
            func_002DD470();
            break;
        case 1:
            func_002DD840();
            break;
        case 2:
            func_002DD890();
            break;
        }
        break;
    case 5:
        func_0030E540(D_01DFA310);
        func_001AF080(D_00666750, *(char **)(p + 0x5C));
        switch (*(unsigned char *)(*(char **)(*(char **)(p + 0xC) + 4) + 0xF0)) {
        case 0:
            return 1;
        case 1:
            return 2;
        case 2:
            return 3;
        case 3:
            return 4;
        }
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    return 0;
}

void func_00100580(char *);

extern char D_005A7910[];

char *func_004027D0(char *p, short flag);

extern char D_005AAA50[];

char *func_002DDBA0(char *p, short flag) {
    void func_0013D240(char *, int);
    if (p != 0) {
        *(char **)p = D_005AAA50;
        func_004027D0(p + 104, -1);
        if (p + 32 != 0) {
            func_0013D240(p + 48, -1);
        }
        if (p != 0) {
            *(char **)p = D_005A7910;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_001AD140(char *);

extern char D_006663C0[];

unsigned short func_001AE1E0(char *, int);

extern int D_00569E90[];

int func_003F3F30(int, signed char);

int func_003F44F0(int);

void func_003F44E0(int);

int func_003F44D0(int);

static inline int ok2DD(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

static inline void setbit2DD(int *a, int k) {
    a[k / 32] |= 1 << (k & 0x1F);
}

unsigned char func_002DD950(char *p, signed char k) {
    void func_001AF080(char *, int);
    unsigned char r = 0;
    char *o;
    switch (*(unsigned int *)(p + 0x1F8)) {
    case 0:
        *(int *)(p + 0x58) = func_001AFB90(D_00666750, D_00569E90[k], 0, 8);
        if (*(int *)(p + 0x58) == 0) *(int *)(p + 0x1F8) = 7;
        else (*(int *)(p + 0x1F8))++;
    case 1:
        o = *(char **)(p + 0x58);
        if ((unsigned char)ok2DD(o) == 1) {
            *(int *)(p + 0x1F4) = func_003F3F30((int)o, k);
            if (*(int *)(p + 0x1F4) == 0) *(int *)(p + 0x1F8) = 7;
            else (*(int *)(p + 0x1F8))++;
        }
        break;
    case 2:
        if ((unsigned char)func_003F44F0(*(int *)(p + 0x1F4)) == 1) (*(int *)(p + 0x1F8))++;
        break;
    case 3:
        if (func_001AE1E0(D_006663C0, 0) & 0x50) {
            setbit2DD((int *)(*(char **)(p + 0xC) + 0x6C), k);
            func_003F44E0(*(int *)(p + 0x1F4));
            (*(int *)(p + 0x1F8))++;
        }
        break;
    case 4:
        if ((unsigned char)func_003F44D0(*(int *)(p + 0x1F4)) == 1) {
            if (*(int *)(p + 0x1F4)) {
                func_001AD140(*(char **)(p + 0x1F4));
                *(int *)(p + 0x1F4) = 0;
            }
            (*(int *)(p + 0x1F8))++;
        }
        break;
    case 5: case 6:
        *(int *)(p + 0x1F8) = *(int *)(p + 0x1F8) + 1;
        break;
    case 7:
        func_001AF080(D_00666750, *(int *)(p + 0x58));
        *(int *)(p + 0x58) = 0;
        r = 1;
        (*(int *)(p + 0x1F8))++;
    case 8:
        break;
    }
    return r;
}

extern char D_005D0E70[];

void func_0013DA70();

void func_00287320();

void func_002DCF20(p) char *p; {
    func_0013DA70(D_005D0E70);
    func_00287320(*(char **)(*(char **)(p + 12) + 8));
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AAA70[];

void func_00100450();

void func_0013D6A0();

void func_001AAD30();

char * func_002DDEF0(p) char *p; {
    void func_0013D240();
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
    *(char * *)(p) = D_005AAA70;
    func_00100450(p + 60, (void *)func_001AAD30, (void *)func_0013D240, 16, 3, 135);
    func_002790E0(p + 128);
    *(char *)(p + 108) = 0;
    *(int *)(p + 116) = 0;
    *(int *)(p + 112) = 0;
    *(int *)(p + 120) = -1;
    *(int *)(p + 124) = 0;
    *(char *)(p + 1744) = 0;
    return p;
}

extern char D_01CAFF10[];

void func_002DCF00(char *p0) {
    char *t0;
    short t1;
    t0 = *(char **)D_01CAFF10;
    *(char **)(p0 + 12) = *(char **)D_01CAFF10;
    t1 = *(short *)(*(char **)(*(char **)(p0 + 12) + 4) + 242);
    *(char *)(p0 + 28) = *(short *)(*(char **)(*(char **)(p0 + 12) + 4) + 242);
}
