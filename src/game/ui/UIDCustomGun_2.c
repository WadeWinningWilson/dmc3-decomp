void func_001AD140(char *);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_0047E350(char *p);

void func_0047DE50(char *p);

void func_0047F820(char *p);

int func_0013BF20(char *);

int func_0047E8B0(char *);

void func_0047E050(char *);

void func_0047DF90(char *);

int func_0047F480(char *);

void func_0047EE40(char *);

void func_0047F8C0(char *);

static inline char *inner47D(char *q) {
    if (*(unsigned int *)(q + 4) < 16) return 0;
    if (*(int *)(q + 0x44) == 0) return 0;
    return q + *(int *)(q + 0x44);
}

static inline char *chunk47D(char *h) {
    if (**(unsigned short **)(h + 8) == 0) return inner47D(*(char **)(h + 0xC));
    return *(char **)(h + 0xC);
}

static inline int ok47D(char *o) {
    unsigned char r = 1;
    if (*(unsigned char *)(o + 1) != 0 && *(unsigned char *)(o + 1) != 3) r = 0;
    return r;
}

void func_0047DAD0(char *p) {
    char *x;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0047DE50(p);
        if (!(unsigned char)func_0047E8B0(p)) goto fail;
        x = chunk47D(*(char **)(p + 0x38));
        if (x) *(int *)(p + 0x40) = func_0013BF20(x);
        *(unsigned char *)(p + 0x311A) = 1;
        *(unsigned char *)(p + 0x3117) = *(signed char *)(p + 0x310D) + *(unsigned char *)(p + 0x3105);
        *(unsigned char *)(p + 4) = 1;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 1:
        if (*(unsigned char *)(p + 0x3119) == 1 && *(unsigned char *)(p + 0x311A) == 0) {
            *(unsigned char *)(p + 4) = 2;
            *(unsigned char *)(p + 5) = 0;
        }
        break;
    case 2:
        func_0047E050(p);
        break;
    case 3:
        func_0047E350(p);
        break;
    case 4:
        *(unsigned char *)(p + 0x311A) = 0;
        *(unsigned char *)(p + 4) = 5;
    case 5:
        if (*(char **)(p + 0x3C) && !(unsigned char)ok47D(*(char **)(p + 0x3C))) break;
        func_0047DF90(p);
        *(unsigned char *)(p + 4) = 6;
        *(unsigned char *)(p + 5) = 0;
        break;
    case 6:
        break;
    }
    if ((unsigned char)func_0047F480(p)) {
        func_0047EE40(p);
        func_0047F820(p);
        func_0047F8C0(p);
        func_00195E20(D_005BE098, p);
        return;
    }
fail:
    func_001AD140(p);
    *(unsigned char *)(p + 4) = 6;
    *(unsigned char *)(p + 5) = 0;
}
