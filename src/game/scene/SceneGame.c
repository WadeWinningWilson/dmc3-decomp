extern signed char D_005BE0F4;

extern unsigned char D_005BE0F8;

extern int D_005BC660;

extern char D_005BBA14[4];

extern unsigned char D_00666712[];

extern int D_01CAFF30[];

extern int D_00540380[];

extern char D_01CAF570[];

extern char D_00654430[];

extern char D_00666750[];

int func_0022D540(char *);

void func_002539C0(char *, char *);

void func_001AFC00(char *);

int func_004288A0(int, int);

void func_001AFCA0(char *, int, char *);

void func_00370060(char *, unsigned char);

void func_001AF480(char *);

void func_00203140(int, char *);

void func_002037C0(int, char *);

void func_001AFD60(char *, int, unsigned char);

void func_003712B0(char *, int);

int func_00198370(char *);

int func_001AFE20(char *);

void func_001AFF10(char *, char *);

int func_001AFFE0(char *);

int func_001AF3F0(char *, int *, int, int);

void func_00209C00(char *, int);

void func_0020E8C0(char *);

void func_0020A230(char *);

int func_0022C8C0(char *);

void func_0022CAD0(char *);

void func_00286810(char *);

void func_00324020(char *);

static inline int ok22D(unsigned char *o) { unsigned char r = 1; if (o[1] != 0 && o[1] != 3) r = 0; return r; }

short func_0022D000(char *p) {
    char *h;
    char *a;
    int x;
    int y;
    switch (*(unsigned char *)(p + 0xC)) {
    case 0:
        switch ((unsigned char)func_0022D540(p)) {
        case 1:
            if (D_005BE0F4 == 1) *(unsigned char *)(p + 0xC) = 2;
            else *(unsigned char *)(p + 0xC) = 1;
            D_005BE0F4 = 0;
            func_002539C0(p + 0x12C, p + 0xCC);
            break;
        case 2:
            D_005BC660 = 1;
            return 2;
        }
        break;
    case 1:
        func_001AFC00(D_00666750);
        func_001AFCA0(D_00666750, 3, (char *)func_004288A0(100, 8));
        func_001AFCA0(D_00666750, 4, (char *)func_004288A0(0x383, 8));
        func_001AFCA0(D_00666750, 5, (char *)func_004288A0(0x1A4, 8));
        func_001AFCA0(D_00666750, 0, D_005BBA14);
        func_001AFCA0(D_00666750, 2, (char *)func_004288A0(0x398, 8));
        func_00370060(p + 0x30, D_00666712[0]);
        func_001AF480(D_00666750);
        (*(unsigned char *)(p + 0xC))++;
    case 2:
        func_00203140(0, p + 0x12C);
        func_002037C0(0, p + 0x12C);
        func_001AFD60(p + 0xD3C, 0, *(unsigned char *)(p + 0x13C));
        func_003712B0(D_01CAF570, 1);
        (*(unsigned char *)(p + 0xC))++;
        break;
    case 3:
        if (!(unsigned char)func_00198370(D_00654430)) (*(unsigned char *)(p + 0xC))++;
        break;
    case 4:
        if ((unsigned char)func_001AFE20(p + 0xD3C) == 1) {
            func_001AFF10(p + 0xD3C, p + 0x12C);
            *(unsigned char *)(p + 0xC8) = 0;
            (*(unsigned char *)(p + 0xC))++;
        }
        break;
    case 5:
        if (!(unsigned char)func_001AFFE0(p + 0xD3C)) break;
        (*(unsigned char *)(p + 0xC))++;
        *(int *)(p + 0xD38) = func_001AF3F0(D_00666750, &D_00540380[D_01CAFF30[0]], 0, 0);
    case 6:
        if (!(unsigned char)ok22D(*(unsigned char **)(p + 0xD38))) break;
        *(int *)(p + 0x180) = *(int *)(*(char **)(p + 0xD38) + 0xC);
        a = *(char **)(p + 0x180);
        *(char **)(p + 0x184) = a + *(int *)(a + *(int *)(a + 8));
        *(int *)(p + 0x18C) = *(int *)(p + 0x184);
        *(short *)(p + 0x278) = -1;
        *(short *)(p + 0x276) = -1;
        *(unsigned char *)(p + 0x209) = 0;
        *(unsigned char *)(p + 0x208) = 0;
        func_00209C00(p + 0x180, 0);
        x = *(int *)(p + 0x180);
        y = *(int *)(p + 0x188);
        *(int *)(p + 0xC0C) = y;
        *(int *)(p + 0xC10) = x;
        (*(unsigned char *)(p + 0xC))++;
        break;
    case 7:
        if (D_005BE0F8 == 1) func_0020E8C0(p + 0x180);
        else func_0020A230(p + 0x180);
        switch (*(unsigned char *)(p + 0x270)) {
        case 0:
            *(int *)(p + 0x2C) = 5;
            break;
        case 1:
            *(int *)(p + 0x2C) = 6;
            break;
        case 2:
            *(int *)(p + 0x2C) = 7;
            break;
        case 3:
            *(int *)(p + 0x2C) = 8;
            break;
        }
        (*(unsigned char *)(p + 0xC))++;
        D_005BE0F8 = 0;
        break;
    case 8:
        if (*(unsigned char *)(p + 8) != 0) *(int *)(p + 0x2C) = -2;
        switch (func_0022C8C0(p + 0x10)) {
        case 1:
            func_0022CAD0(p + 0x10);
            *(unsigned char *)(p + 0xC) = 100;
            *(short *)(p + 0xE) = 4;
            return *(short *)(p + 0xE);
        case 2:
            func_0022CAD0(p + 0x10);
            *(unsigned char *)(p + 0xC) = 100;
            *(short *)(p + 0xE) = 1;
            D_005BE0F4 = 1;
            return *(short *)(p + 0xE);
        case 3:
            func_0022CAD0(p + 0x10);
            *(unsigned char *)(p + 0xC) = 100;
            *(short *)(p + 0xE) = 2;
            return *(short *)(p + 0xE);
        case 4:
            func_0022CAD0(p + 0x10);
            *(unsigned char *)(p + 0xC) = 100;
            *(short *)(p + 0xE) = 5;
            return *(short *)(p + 0xE);
        case 5:
            func_0022CAD0(p + 0x10);
            *(unsigned char *)(p + 0xC) = 100;
            *(short *)(p + 0xE) = 6;
            D_005BE0F4 = 1;
            D_005BE0F8 = 1;
            return *(short *)(p + 0xE);
        case -1:
            func_0022CAD0(p + 0x10);
            *(unsigned char *)(p + 0xC) = 100;
            *(short *)(p + 0xE) = -1;
            return *(short *)(p + 0xE);
        case 0:
            break;
        }
        break;
    case 100:
        return *(short *)(p + 0xE);
    }
    func_00286810(p + 0x830);
    func_00324020(p + 0xC14);
    return 0;
}

int func_0012B1A0(char *, char *);

void func_0022CB30(char *);

void func_0022CB50(char *, char *);

int func_0022CBA0(char *);

int func_0022CDC0(char **a, char *name) {
    void func_0022CBB0(char *, char *);
    char st[0x10] __attribute__((aligned(16)));
    char buf[0x100] __attribute__((aligned(16)));
    int i;
    func_0022CB30(st);
    func_0022CB50(st, *a);
    i = 0;
    if ((func_0022CBA0(st) != 0) ^ 1) {
        do {
            func_0022CBB0(st, buf);
            if (func_0012B1A0(buf, name) == 0) return i;
            i++;
        } while ((func_0022CBA0(st) != 0) ^ 1);
    }
    return -1;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A7910[];

extern char D_005A7940[];

extern char D_005A7970[];

extern char D_005A7980[];

extern char D_005A7990[];

extern char D_005A79A0[];

extern char D_005A7AC0[];

void func_001003E0();

void func_0013D240();

void func_0022C850();

void func_0022D750();

void func_003230B0();

void func_00414B40();

void func_004835D0();

char *func_0022D600(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005A7940;
        if (p + 3388 != 0) {
            func_0013D240(p + 3404, -1);
        }
        func_004835D0(p + 3164, -1);
        func_00414B40(p + 3140, -1);
        func_003230B0(p + 3092, -1);
        if (p + 2096 != 0) {
            *(char * *)(p + 2096) = D_005A79A0;
            if (p + 3008 != 0) {
                *(char * *)(p + 3008) = D_005A7990;
            }
            if (p + 2996 != 0) {
                *(char * *)(p + 2996) = D_005A7990;
            }
            func_001003E0(p + 2100, (void *)func_0022D750, 28, 32);
        }
        if (p + 384 != 0) {
            *(char * *)(p + 404) = D_005A7980;
        }
        if (p + 48 != 0) {
            *(char * *)(p + 48) = D_005A7970;
        }
        if (p + 16 != 0) {
            *(char * *)(p + 16) = D_005A7AC0;
            func_0022C850(p + 16, 0);
        }
        if (p != 0) {
            *(char * *)(p) = D_005A7910;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00124F40();

int func_0022CD60(p0) int p0; {
    void func_0022CBB0();
    char stk[0x100] __attribute__((aligned(16)));
    int tmp0;
    func_0022CBB0(p0, ((stk + -16) + 16));
    tmp0 = func_00124F40(((stk + -16) + 16));
    return tmp0;
}

extern char D_01CAFF10[];

int func_001AEC80();

int func_001AED10();

int func_001AF080();

int func_001AF4D0();

void func_003259B0();

void func_00370200();

int func_0022CF30(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = (char *)p0;
    func_003259B0((v0 + 3092));
    if (D_005BE0F4 == 1) {
        func_001AEC80(D_00666750, 0);
        func_001AEC80(D_00666750, 1);
        func_001AEC80(D_00666750, 2);
        func_001AEC80(D_00666750, 3);
        v2 = func_001AEC80(D_00666750, 5);
    } else {
        func_00370200((v0 + 48));
        func_001AED10(D_00666750);
        v2 = func_001AF4D0(D_00666750);
    }
    v3 = *(int *)(v0 + 3384);
    if (v3 != 0) {
        v2 = func_001AF080(D_00666750, v3);
        *(int *)(v0 + 3384) = 0;
    }
    *(int *)D_01CAFF10 = 0;
    return v2;
}

extern void func_0022CA80();

void func_0022D5F0(char *p) { func_0022CA80(p + 16); }

int func_0022CB90(char *p0, int p1) {
    *(int *)(p0 + 4) = p1;
    *(char *)(p0 + 8) = 0;
    return *(int *)(p0 + 4);
}

int func_00120610();

int func_00124F10();

int func_0022CD90(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    void func_0022CBB0();
    char stk[0x100] __attribute__((aligned(16)));
    int tmp0;
    int tmp1;
    func_0022CBB0(p0, ((stk + -16) + 16));
    tmp0 = func_00124F10(((stk + -16) + 16));
    tmp1 = func_00120610(tmp0);
    return tmp1;
}
