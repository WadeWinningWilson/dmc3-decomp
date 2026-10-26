extern short *D_00540ED0[];

extern short *D_00540E90[];

void func_001347E0(int, int, short);

int func_00134910(int, int);

int func_001EDAB0(int i, int alt) {
    extern char *D_005BE0D8;
    short *s;
    D_005BE0D8[0] = 0;
    D_005BE0D8[1] = 1;
    if (alt) {
        D_005BE0D8[2] = 3;
        s = D_00540ED0[i];
    } else {
        D_005BE0D8[2] = 2;
        s = D_00540E90[i];
    }
    D_005BE0D8[3] = s[0];
    D_005BE0D8[4] = s[1];
    D_005BE0D8[5] = s[2];
    D_005BE0D8[8] = s[3];
    *(short *)(D_005BE0D8 + 0x20) = s[4];
    *(short *)(D_005BE0D8 + 0x22) = s[5];
    *(short *)(D_005BE0D8 + 0x24) = s[6];
    D_005BE0D8[6] = s[7];
    D_005BE0D8[7] = 0;
    D_005BE0D8[9] = 1;
    ((unsigned char *)D_005BE0D8)[10] = 0x80;
    func_001347E0(0, 0, (*(short *)(D_005BE0D8 + 0x22) - *(short *)(D_005BE0D8 + 0x24)) / 2);
    return func_00134910(0, 0);
}

typedef struct { short k; short pad; int v; } KEnt128;

typedef struct { short n; short pad; KEnt128 e[128]; } KTab128;

int func_001EDD20(KTab128 *t, short k) {
    int i;
    for (i = 0; i < 128; i++) {
        if (t->e[i].k == k) {
            return t->e[i].v;
        }
    }
    return 0;
}

extern int D_005BE0E0;

extern char D_01CB0530[];

void func_00130990(int, int);

char *func_001ED7B0(char *p) {
    extern char *D_005BE0D8;
    D_005BE0D8 = D_01CB0530;
    func_00130990((int)D_005BE0D8, 0x28);
    func_00130990(D_005BE0E0 = 0x700000A0, 0x18);
    return p;
}

void func_0013CDE0(void);

void func_001ED970(void) {
    extern char *D_005BE0D8;
    int *q;
    char *g;
    do {
        while (*(signed char *)((g = D_005BE0D8) + 0x14) != 0) func_0013CDE0();
        q = (int *)(g + 0x58);
    } while (*q < *(signed char *)g + 1);
    *q = 0;
}

void func_003725B0();

char *func_001ED700(char *p0) {
    *(char *)(p0 + 0) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 72) = 0;
    *(int *)(p0 + 136) = 0;
    func_003725B0();
    return p0;
}

void func_002E74D0();

char *func_001ED740(char *p0) {
    *(char *)(p0 + 0) = 0;
    func_002E74D0();
    return p0;
}

extern char D_005D0E70[];

extern char D_00662370[];

extern char D_01DFABA0[];

void func_0013D8B0();

void func_001AA840();

void func_0032FB30();

void func_004E9B90();

void func_001ED8E0(void) {
    func_004E9B90();
    func_0032FB30(D_01DFABA0);
    func_001AA840(D_00662370);
    func_0013D8B0(D_005D0E70);
}

int func_001ED680(p0) char *p0; {
    *(char *)(p0 + 0) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 12) = -1;
    *(int *)(p0 + 16) = -1;
    *(short *)(p0 + 20) = 0;
    *(short *)(p0 + 22) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 64) = 0;
    *(char *)(p0 + 32) = 0;
    *(int *)(p0 + 28) = 0;
    *(char *)(p0 + 33) = 1;
    *(int *)(p0 + 36) = 0x585858;
    *(int *)(p0 + 40) = 0x585858;
    *(int *)(p0 + 48) = 0;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 68) = 0x3f800000;
    *(int *)(p0 + 76) = 0;
    *(char *)(p0 + 52) = 22;
    *(int *)(p0 + 80) = 0x43000000;
    *(int *)(p0 + 84) = 0x43000000;
    return (int)p0;
}

extern char D_00540EE0[];

extern char D_005BE0CC;

extern char D_006663C0[];

void func_001101F8();

void func_00111BB0();

void func_001149A0();

void func_00115080();

int func_00115DD0();

int func_00115E20();

void func_00121580();

void func_00122060();

void func_001309B0();

int func_00131640();

void func_001A9200();

int func_001AD1E0();

void func_001C3C40();

void func_001EDBF0();

int func_001ED800() {
    int tmp0;
    int tmp1;
    int tmp2;
    func_001101F8(0);
    func_00121580(0);
    func_00111BB0();
    do {
        tmp0 = func_00115E20(D_00540EE0);
    } while (((tmp0 != 0) ^ 1));
    do {
        tmp1 = func_00115DD0();
    } while (((tmp1 != 0) ^ 1));
    func_001101F8(0);
    func_001149A0();
    func_00115080();
    func_00111BB0();
    func_00121580(0);
    func_00122060(2);
    func_001C3C40(&D_005BE0CC);
    func_001AD1E0(D_006663C0, 3);
    func_001309B0();
    func_001EDBF0(1, 0);
    func_001A9200();
    tmp2 = func_00131640();
    return tmp2;
}

extern char D_006661E0[];

void func_0013D950();

void func_001AA9C0();

void func_001AACD0();

int func_0032FC90();

void func_004E9C80();

int func_001ED920() {
    int tmp0;
    func_004E9C80();
    func_001AA9C0(D_00662370);
    func_0013D950(D_005D0E70);
    func_001AACD0(D_006661E0);
    tmp0 = func_0032FC90(D_01DFABA0);
    return tmp0;
}

extern char D_005BE0D4;

extern char D_006480D0[];

void func_00138110();

int func_00138170();

void func_001386E0();

void func_00197320();

void func_001AE490();

int func_001EDA40();

int func_001ED9C0() {
    extern char * D_005BE0D8;
    int v0;
    int v1;
    int tmp4;
    *(int *)(D_005BE0D8 + 140) = 0;
    *(int *)(D_005BE0D8 + 136) = 0;
    *(int *)(D_005BE0D8 + 132) = 0;
    *(int *)(D_005BE0D8 + 128) = 0;
    func_001AE490();
    func_00138110();
    func_00197320(D_006480D0);
    func_001386E0();
    v1 = func_001EDA40(&D_005BE0D4);
    tmp4 = *(signed char *)(D_005BE0D8 + 6);
    v0 = 0;
    if (tmp4 == 2) {
        v1 = func_00138170(v0);
    }
    return v1;
}

int func_00138130();

int func_00138160();

int func_001EDA50() {
    extern char * D_005BE0D8;
    int v0;
    char *v1;
    int v2;
    int tmp0;
    tmp0 = *(signed char *)(D_005BE0D8 + 6);
    v0 = 28;
    if (tmp0 == 2) {
        v2 = func_00138160(v0);
    }
    v1 = D_005BE0D8;
    if (*(signed char *)(v1 + 3) == 0) {
        if (*(signed char *)(v1 + 6) == 0) {
            v2 = func_00138130(28);
        }
    }
    return v2;
}

int func_001EDCA0(p0) char *p0; {
    int v0;
    int v1;
    *(short *)(p0 + 0) = 0;
    v1 = 0;
    v0 = -1;
    do {
        *(short *)(p0 + 4) = v0;
        *(int *)(p0 + 8) = 0;
        v1 = (v1 + 8);
        *(short *)(p0 + 12) = v0;
        *(int *)(p0 + 16) = 0;
        *(short *)(p0 + 20) = v0;
        *(int *)(p0 + 24) = 0;
        *(short *)(p0 + 28) = v0;
        *(int *)(p0 + 32) = 0;
        *(short *)(p0 + 36) = v0;
        *(int *)(p0 + 40) = 0;
        *(short *)(p0 + 44) = v0;
        *(int *)(p0 + 48) = 0;
        *(short *)(p0 + 52) = v0;
        *(int *)(p0 + 56) = 0;
        *(short *)(p0 + 60) = v0;
        *(int *)(p0 + 64) = 0;
        p0 = (p0 + 64);
    } while ((v1 < 128));
    return 1;
}

void func_001EDD10(void) {}

char *func_001ED770(char *p0) {
    *(int *)(p0 + 572) = 0;
    *(int *)(p0 + 560) = 0;
    *(char *)(p0 + 576) = 0;
    return p0;
}

extern char D_005A7358[];

extern char D_005A7AF0[];

char *func_001ED790(char *p0) {
    *(char **)(p0 + 0) = D_005A7358;
    *(char **)(p0 + 0) = D_005A7AF0;
    return p0;
}
