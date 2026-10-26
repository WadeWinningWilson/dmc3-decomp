void func_00100580(char *);

void func_002791E0(char *, int);

extern char D_005B08A0[];

extern char D_005B08C4[];

extern char D_005B0944[];

extern char D_005A8DD0[];

extern char D_005A8DF4[];

extern char D_005A8E74[];

void func_0031DD00(char *, int);

void func_0024F810(char *, int);

char *func_003CAC50(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B08A0;
        *(char **)(p + 64) = D_005B08C4;
        *(char **)(p + 160) = D_005B0944;
        func_0031DD00(p + 1792, -1);
        func_002791E0(p + 256, -1);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00104C00();

int func_002D9F00();

void func_003CAB50(char *p0) {
    char *t0;
    unsigned char t1;
    int t2;
    t0 = *(char **)(p0 + 224);
    t1 = *(unsigned char *)(p0 + 212);
    t2 = func_002D9F00(*(char **)(p0 + 224), *(unsigned char *)(p0 + 212));
    func_00104C00((p0 + 1936), t2, (p0 + 2000));
}

void func_0024F750();

void func_002790E0();

void func_0031DCB0();

int func_003CA920(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 0) = D_005A8DD0;
    *(char **)((char *)p0 + 64) = D_005A8DF4;
    *(char **)((char *)p0 + 160) = D_005A8E74;
    *(char *)((char *)p0 + 68) = -1;
    *(char *)((char *)p0 + 69) = 1;
    *(int *)((char *)p0 + 232) = 0;
    *(int *)((char *)p0 + 236) = 0;
    *(int *)((char *)p0 + 240) = 0;
    *(int *)((char *)p0 + 244) = 0;
    *(char *)((char *)p0 + 221) = 0;
    *(char *)((char *)p0 + 209) = 0;
    *(char **)((char *)p0 + 0) = D_005B08A0;
    *(char **)((char *)p0 + 64) = D_005B08C4;
    *(char **)((char *)p0 + 160) = D_005B0944;
    func_002790E0((p0 + 256), D_005B08A0);
    func_0031DCB0((p0 + 1792));
    return p0;
}

int func_003CAB30(void) { return 1; }

void func_003CAB40(void) {}

char *func_003CAC40(char *p) { return p + 1936; }
