void func_00100580(char *);

extern char D_005AB850[];

extern char D_005A7910[];

void func_0048D900(char *, int);

char *func_002FE760(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AB850;
        func_0048D900(p + 44, -1);
        if (p != 0) {
            *(char **)p = D_005A7910;
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern int D_01CAFF30[];

extern unsigned char D_00666712[];

extern int D_00540330[];

extern char D_00666750[];

extern char D_01DFA310[];

extern char D_00645A30[];

extern int D_01CAFF34[];

void func_0048D950(char *, int, int, int, int);

char *func_001AF3F0(char *, char *, int, int);

void func_0030E580(char *, char *);

void func_0048D990(char *);

int func_0048DBC0(char *);

int func_002FE570(char *);

void func_001AF080(char *, int);

void func_00195520(char *, int);

static inline int ok2FE(char *o) { unsigned char r = 1; if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0; return r; }

static inline char *inner2FE(char *q, int i) { if (*(unsigned int *)(q + 4) < i + 2) return 0; if (*(int *)(q + 0xC + i * 4) == 0) return 0; return q + *(int *)(q + 0xC + i * 4); }

static inline char *chunk2FE(char *h, int i) { if (**(unsigned short **)(h + 8) == 0) h = inner2FE(*(char **)(h + 0xC), i); else h = *(char **)(h + 0xC); return h; }

int func_002FE290(char *p) {
    int r;
    r = 0;
    switch (*(unsigned int *)(p + 0xC)) {
    case 0:
        func_0048D950(p + 0x2C, *(signed char *)(p + 0x78), 3, *(int *)(p + 0x1C), *(int *)(p + 0x20) != 0);
        if (*(int *)(p + 0x28) == 0) *(char **)(p + 0x28) = func_001AF3F0(D_00666750, (char *)&D_00540330[D_00666712[0]], 0, 0);
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 1:
        if ((unsigned char)ok2FE(*(char **)(p + 0x28)) != 1) break;
        func_0030E580(D_01DFA310, chunk2FE(*(char **)(p + 0x28), 1));
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
        break;
    case 2:
        func_0048D990(p + 0x2C);
        *(unsigned char *)(p + 0x79) = func_0048DBC0(p + 0x2C);
        switch (*(unsigned char *)(p + 0x79)) {
        case 1: case 2:
            *(int *)(p + 0xC) = 4;
            break;
        case 0:
            if (*(unsigned char *)(p + 0x59) == 1) {
                *(int *)(p + 0x24) = *(int *)(p + 0x70);
                *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
                *(int *)(p + 0x10) = 0;
            }
            break;
        }
        break;
    case 3:
        if ((unsigned char)func_002FE570(p) == 1) {
            *(unsigned char *)(p + 0x59) = 0;
            *(int *)(p + 0xC) = 2;
            *(int *)(p + 0x10) = 0;
        }
        break;
    case 4:
        if (*(int *)(p + 0x28) != 0) {
            func_001AF080(D_00666750, *(int *)(p + 0x28));
            *(int *)(p + 0x28) = 0;
        }
        *(int *)(p + 0xC) = *(int *)(p + 0xC) + 1;
    case 5:
        switch (*(unsigned char *)(p + 0x79)) {
        case 0:
            r = 0;
            break;
        case 1:
            r = *(int *)(p + 0x18);
            break;
        case 2:
            r = *(int *)(p + 0x1C);
            break;
        }
        switch (r) {
        case 1:
            D_01CAFF34[0] = D_01CAFF30[0];
            break;
        case -1:
            r = 0;
            break;
        }
        break;
    }
    func_00195520(D_00645A30, 0x2C);
    return r;
}

void func_0030E540();

void func_002FE280(void) {
    func_0030E540(D_01DFA310);
}
