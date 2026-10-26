extern char D_005A6F50[];

extern char D_005B4750[];

void func_001003E0();

void func_00100580();

char *func_00440EC0(char *p, short flag) {
    void func_0013D240();
    void func_002791E0();
    void func_0027BBF0();
    if (p != 0) {
        *(char **)p = D_005B4750;
        func_001003E0((p + 0xa2a0), (void *)func_0027BBF0, 128, 12);
        func_001003E0((p + 0x9fa0), (void *)func_0027BBF0, 128, 6);
        func_001003E0((p + 0x9e20), (void *)func_0027BBF0, 128, 3);
        func_002791E0((p + 0x9700), -1);
        func_001003E0((p + 20224), (void *)func_002791E0, 1536, 12);
        func_001003E0((p + 11008), (void *)func_002791E0, 1536, 6);
        func_001003E0((p + 6400), (void *)func_002791E0, 1536, 3);
        func_002791E0((p + 4864), -1);
        func_001003E0((p + 256), (void *)func_002791E0, 1536, 3);
        func_001003E0((p + 60), (void *)func_0013D240, 16, 8);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240((p + 36), -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00100450(char *, void *, void *, int, int);

void func_0013D6A0(char *);

char *func_002790E0(char *);

void func_001AAD30(void);

void func_00304E70(void);

char *func_00440A00(char *p) {
    char *func_002791E0(char *, short);
    void func_0013D240(char *, int);
    void func_0027BBF0(void);
    int i;
    int j;
    *(char **)p = D_005A6F50;
    func_0013D6A0(p + 0x24);
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x1C) = 0;
    *(unsigned char *)(p + 7) = 0;
    *(unsigned char *)(p + 6) = 0;
    *(unsigned char *)(p + 5) = 0;
    *(unsigned char *)(p + 4) = 0;
    *(unsigned char *)(p + 0x18) = 0;
    *(int *)(p + 8) = 0;
    *(signed char *)(p + 0x34) = -1;
    *(unsigned char *)(p + 0x35) = 0;
    *(unsigned char *)(p + 0x36) = 0;
    *(int *)(p + 0xC) = 0x87;
    *(float *)(p + 0x10) = 1.0f;
    *(float *)(p + 0x14) = 1.0f;
    *(char **)p = D_005B4750;
    func_00100450(p + 0x3C, (void *)func_001AAD30, (void *)func_0013D240, 0x10, 8);
    func_00100450(p + 0x100, (void *)func_002790E0, (void *)func_002791E0, 0x600, 3);
    func_002790E0(p + 0x1300);
    func_00100450(p + 0x1900, (void *)func_002790E0, (void *)func_002791E0, 0x600, 3);
    func_00100450(p + 0x2B00, (void *)func_002790E0, (void *)func_002791E0, 0x600, 6);
    func_00100450(p + 0x4F00, (void *)func_002790E0, (void *)func_002791E0, 0x600, 0xC);
    func_002790E0(p + 0x9700);
    *(unsigned char *)(p + 0x9D20) = 0;
    *(unsigned char *)(p + 0x9DA0) = 0;
    func_00100450(p + 0x9E20, (void *)func_00304E70, (void *)func_0027BBF0, 0x80, 3);
    func_00100450(p + 0x9FA0, (void *)func_00304E70, (void *)func_0027BBF0, 0x80, 6);
    func_00100450(p + 0xA2A0, (void *)func_00304E70, (void *)func_0027BBF0, 0x80, 0xC);
    *(unsigned char *)(p + 0xA934) = 2;
    *(unsigned char *)(p + 0xA936) = 0;
    *(unsigned char *)(p + 0xA937) = 0;
    *(unsigned char *)(p + 0xA939) = 0;
    *(unsigned char *)(p + 0xA938) = 0;
    *(unsigned char *)(p + 0xA93A) = 0;
    *(unsigned char *)(p + 0xA93B) = 0;
    *(int *)(p + 0xBC) = 0;
    *(int *)(p + 0xC0) = 0;
    *(int *)(p + 0xDC) = 0;
    *(unsigned char *)(p + 0xA948) = 0;
    *(unsigned char *)(p + 0xA949) = 0;
    *(unsigned char *)(p + 0xA94A) = 0;
    *(unsigned char *)(p + 0xA94B) = 0;
    *(unsigned char *)(p + 0xA94C) = 0;
    *(int *)(p + 0xA950) = -1;
    *(int *)(p + 0xC4) = 0;
    *(int *)(p + 0xD0) = 0;
    *(short *)(p + 0xA93C) = -1;
    *(short *)(p + 0xA942) = -1;
    *(int *)(p + 0xC8) = 0;
    *(int *)(p + 0xD4) = 0;
    *(short *)(p + 0xA93E) = -1;
    *(short *)(p + 0xA944) = -1;
    *(int *)(p + 0xCC) = 0;
    *(int *)(p + 0xD8) = 0;
    *(short *)(p + 0xA940) = -1;
    *(short *)(p + 0xA946) = -1;
    *(unsigned char *)(p + 0xA8A4) = 0;
    *(unsigned char *)(p + 0xA8A5) = 0;
    *(unsigned char *)(p + 0xA8AB) = 0;
    *(unsigned char *)(p + 0xA8AC) = 0;
    *(unsigned char *)(p + 0xA8AD) = 1;
    *(unsigned char *)(p + 0xA8B3) = 0;
    *(unsigned char *)(p + 0xA8B4) = 0;
    *(unsigned char *)(p + 0xA8B5) = 2;
    *(unsigned char *)(p + 0xA8BB) = 0;
    *(unsigned char *)(p + 0xA8BC) = 0;
    *(unsigned char *)(p + 0xA8BD) = 3;
    *(unsigned char *)(p + 0xA8C3) = 0;
    *(unsigned char *)(p + 0xA8C4) = 0;
    *(unsigned char *)(p + 0xA8C5) = 4;
    *(unsigned char *)(p + 0xA8CB) = 0;
    *(unsigned char *)(p + 0xA8CC) = 0;
    *(unsigned char *)(p + 0xA8CD) = 5;
    *(unsigned char *)(p + 0xA8D3) = 0;
    for (j = 0; j < 12; j++) {
        *(unsigned char *)(p + j * 8 + 0xA8D4) = 0;
        *(unsigned char *)(p + j * 8 + 0xA8D5) = j;
        *(unsigned char *)(p + j * 8 + 0xA8DB) = 0;
    }
    return p;
}

extern char *D_005BE0D8;

extern char D_01DFA340[];

extern int D_01DFA344[];

extern int D_01DFA348[];

unsigned int func_003101B0(char *, int, int);

extern int D_00575CC8[];

extern int D_005BD9A0[2];

extern int D_00576400[];

extern int D_00576880[];

extern int D_00576940[];

extern int D_005772C0[];

void func_004482C0(char *p) {
    unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
    int id;
    int x;
    int y;
    unsigned int v;
    if (*(unsigned char *)(p + 4) == 9) {
        id = 0x3108;
        x = 0x196;
    } else {
        id = 0x3106;
        x = 0x140;
    }
    if (*(signed char *)(D_005BE0D8 + 3) != 0) y = 0xDE - *(short *)(D_005BE0D8 + 0x2E);
    else y = 0x1BD - *(short *)(D_005BE0D8 + 0x2E);
    func_0030FD40(D_01DFA340, id, x, y + 2, 0x585858, 0x10, 0xFFFFF2, 1);
    if (*(signed char *)(p + 0xA936) != 0) func_0030FD40(D_01DFA340, 0x3101, 0x18, 0x20, 0x585858, 0, 0xFFFFF2, 1);
    if (*(signed char *)(p + 0xA936) + 1 < *(int *)((char *)(*(signed char *)(p + 0xA935) * 4) + (int)p + 0xA954)) func_0030FD40(D_01DFA340, 0x3102, 0x1C0, 0x20, 0x585858, 0, 0xFFFFF2, 1);
    switch (*(signed char *)(p + 0xA935)) {
    case 0:
        v = D_00575CC8[*(signed char *)(p + 0xA936)];
        break;
    case 1:
        v = D_005BD9A0[*(signed char *)(p + 0xA936)];
        break;
    case 2:
        v = D_00576400[*(signed char *)(p + 0xA936)];
        break;
    case 3:
        v = D_00576880[*(signed char *)(p + 0xA936)];
        break;
    case 4:
        v = D_00576940[*(signed char *)(p + 0xA936)];
        break;
    case 5:
        v = D_005772C0[*(signed char *)(p + 0xA936)];
        break;
    }
    x = 0xA0;
    D_01DFA344[0] = *(signed char *)(p + 0xA937) + 1;
    D_01DFA348[0] = v;
    v = func_003101B0(D_01DFA340, 0x30FC, 0x10) >> 16;
    x += 0x10 - v;
    func_0030FD40(D_01DFA340, 0x30FC, x, 0x38, 0x585858, 0x10, 0xFFFFF2, 1);
    x += v;
    x += func_0030FD40(D_01DFA340, 0x30FE, x, 0x38, 0x585858, 0x10, 0xFFFFF2, 1) >> 16;
    func_0030FD40(D_01DFA340, 0x30FD, x, 0x38, 0x585858, 0x10, 0xFFFFF2, 1);
}

extern short D_00575C20[];

extern short D_00575C90[];

static inline int rdy445(char *e) {
    unsigned char r = 1;
    if (*(unsigned char *)(e + 1) != 0 && *(unsigned char *)(e + 1) != 3) r = 0;
    return r;
}

unsigned char func_00445D80(char *p, unsigned char fl) {
    void func_00444E60(signed char *, char *, signed char, signed char, signed char);
    signed char c[16];
    int i;
    short t;
    char *e;
    signed char x;
    unsigned char ok;
    int m;
    signed char z;
    ok = 1;
    func_00444E60(c, p, *(signed char *)(p + 0xA935), *(signed char *)(p + 0xA936), *(signed char *)(p + 0xA937));
    x = c[0];
    z = c[2];
    if (fl == 0) {
        for (i = x - 1; i < x + 2; i++) {
            t = D_00575C20[i];
            m = i % 3;
            if (t < 0) {
                e = *(char **)(p + m * 4 + 0xC4);
                if (e != 0 && !rdy445(e)) ok = 0;
            } else if (t != *(short *)(p + m * 2 + 0xA93C)) {
                e = *(char **)(p + m * 4 + 0xC4);
                if (e != 0 && !rdy445(e)) ok = 0;
            }
        }
        for (i = z - 1; i < z + 2; i++) {
            t = D_00575C90[i];
            m = i % 3;
            if (t < 0) {
                e = *(char **)(p + m * 4 + 0xD0);
                if (e != 0 && !rdy445(e)) ok = 0;
            } else if (t != *(short *)(p + m * 2 + 0xA942)) {
                e = *(char **)(p + m * 4 + 0xD0);
                if (e != 0 && !rdy445(e)) ok = 0;
            }
        }
    } else {
        for (i = 0; i < 3; i++, p += 4) {
            if ((fl & 1) && *(char **)(p + 0xC4) != 0 && !rdy445(*(char **)(p + 0xC4))) ok = 0;
            if ((fl & 2) && *(char **)(p + 0xD0) != 0 && !rdy445(*(char **)(p + 0xD0))) ok = 0;
        }
    }
    return ok;
}

int func_004448D0(char *, signed char, signed char);

int func_00444870(char *p, signed char a, signed char b) {
    if (((int *)(p + 0xA954))[a] <= b) return 1;
    return func_004448D0(p, a, b);
}

int func_00442AB0(p0) char *p0; {
    int v0;
    int v1;
    v0 = 0x10000;
    if (*(unsigned char *)(p0 + 4) != 11) {
        v1 = 0;
    } else {
        v1 = *(signed char *)((p0 + v0) + -22220);
    }
    return v1;
}

int func_00442AE0(p0) int p0; {
    return *(signed char *)((char *)p0 + 43318);
}

int func_00442AF0(p0) int p0; {
    return *(signed char *)((char *)p0 + 43319);
}

int func_00442B00(p0) int p0; {
    return (*(unsigned char *)((char *)p0 + 43322) | ((*(unsigned char *)((char *)p0 + 43320) << 24) | (*(unsigned char *)((char *)p0 + 43321) << 16)));
}

void func_00445500();

void func_00442B40(p0, p1) int p0; int p1; {
    func_00445500(p0, p1, *(signed char *)((char *)p1 + 43317), *(signed char *)((char *)p1 + 43318), *(signed char *)((char *)p1 + 43319));
}

int func_00445C80(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    void func_00444E60();
    char stk[0x10] __attribute__((aligned(16)));
    func_00444E60(((stk + -16) + 16), p0, p1, p2, p3);
    return *(signed char *)((stk + -16) + 16);
}

int func_00445CC0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    char stk[0x10] __attribute__((aligned(16)));
    func_00445500(((stk + -16) + 16), p0, p1, p2, p3);
    return *(signed char *)((stk + -16) + 16);
}

int func_00445D00(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    char stk[0x10] __attribute__((aligned(16)));
    func_00445500(((stk + -16) + 16), p0, p1, p2, p3);
    return *(int *)((stk + -16) + 20);
}

int func_00445D40(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    char stk[0x10] __attribute__((aligned(16)));
    func_00445500(((stk + -16) + 16), p0, p1, p2, p3);
    return *(int *)((stk + -16) + 24);
}

extern char D_00666750[];

int func_001AF080();

int func_004460A0(p0) int p0; {
    int v0;
    char *v1;
    int v10;
    char *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    v0 = 0;
    v1 = (char *)p0;
    v2 = v1;
    v5 = (int)v1;
    do {
        v3 = *(int *)(v2 + 196);
        if (v3 != 0) {
            v9 = func_001AF080(D_00666750, v3);
            *(int *)(v2 + 196) = 0;
            *(short *)((char *)v5 + 43324) = -1;
        }
        v0 = (v0 + 1);
        v2 = (v2 + 4);
        v5 = (v5 + 2);
    } while ((v0 < 3));
    v6 = 0;
    v10 = (int)v1;
    do {
        v7 = *(int *)(v1 + 208);
        if (v7 != 0) {
            v9 = func_001AF080(D_00666750, v7);
            *(int *)(v1 + 208) = 0;
            *(short *)((char *)v10 + 43330) = -1;
        }
        v6 = (v6 + 1);
        v1 = (v1 + 4);
        v10 = (v10 + 2);
    } while ((v6 < 3));
    return v9;
}

int func_00448250(p0, p1) char *p0; int p1; {
    int func_0030FD40();
    int v0;
    int v1;
    int v2;
    if (p1 >= 0) {
        v1 = 38;
        if (*(unsigned char *)(p0 + 4) == 9) {
            v0 = 82;
        } else {
            v1 = 44;
            v0 = 160;
        }
        v2 = func_0030FD40(D_01DFA340, p1, v1, v0, 0x585858, 16, 0xfffff2, 0);
    }
    return v2;
}

void func_004426A0(void) {}
