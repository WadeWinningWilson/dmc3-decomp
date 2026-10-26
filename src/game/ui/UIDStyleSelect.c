extern char D_005A6F50[];

extern char D_005AD390[];

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_002791E0();

void func_0027BBF0();

char *func_0034E550(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AD390;
        *(int *)(p + 56) = 0;
        *(int *)(p + 30036) = 0;
        func_002791E0((p + 32000), -1);
        func_001003E0((p + 31616), (void *)func_0027BBF0, 128, 1);
        func_001003E0((p + 30080), (void *)func_002791E0, 1536, 1);
        func_001003E0((p + 27712), (void *)func_0027BBF0, 128, 18);
        func_001003E0((p + 64), (void *)func_002791E0, 1536, 18);
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

extern char D_01DFA340[];

unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);

extern int D_01DFA344[];

extern int D_01DFA348[];

static inline int ndig(int v) {
    int n;
    if (v > 99999) {
        v = 99999;
    }
    if (v >= 10) {
        if (v >= 100) {
            if (v >= 1000) {
                if (v >= 10000) {
                    n = 5;
                } else {
                    n = 4;
                }
            } else {
                n = 3;
            }
        } else {
            n = 2;
        }
    } else {
        n = 1;
    }
    return n;
}

void func_00351DA0(char *p, int a, int b, int x, int y) {
    D_01DFA344[0] = a;
    D_01DFA348[0] = b;
    func_0030FD40(D_01DFA340, 0x30FC, x + (5 - ndig(a)) * 8, y, 0x585858, 0x10, 0xFFFFF2, 1);
    func_0030FD40(D_01DFA340, 0x30FD, x + (5 - ndig(b)) * 8 + 0x32, y, 0x585858, 0x10, 0xFFFFF2, 1);
    func_0030FD40(D_01DFA340, 0x30FE, x + 0x29, y, 0x585858, 0x10, 0xFFFFF2, 1);
}

char *func_00279290(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

void func_001A1E10(char *);

float func_002DBD40(int, int);

void func_00351F70(char *p, unsigned int k) {
    int j;
    int i;
    int t;
    int n;
    float f;
    float g;
    char *q;
    switch (k) {
    case 0: j = 2; break;
    case 1: j = 0; break;
    case 2: j = 1; break;
    case 3: j = 3; break;
    case 4: j = 4; break;
    case 5: j = 5; break;
    }
    switch (k) {
    case 0:
    case 1:
    case 2:
    case 3:
        t = ((unsigned char *)(*(char **)(p + 0x7CC4) + 0xC1))[(unsigned char)j];
        f = ((float *)(*(char **)(p + 0x7CC4) + 0xC8))[(unsigned char)j];
        g = func_002DBD40(j, t);
        if (f <= 0.0f) {
            n = 0;
        } else {
            n = (int)(10.0f * (0.09f + f / g));
            if (n > 10) n = 10;
        }
        for (i = 0; i < n; i++) {
            func_001A1E70(func_00279290(p + (k + 11) * 0x600 + 0x40), i);
        }
        for (; i < 10; i++) {
            func_001A2000(func_00279290(p + (k + 11) * 0x600 + 0x40), i);
        }
        q = p + (k + 11) * 0x600 + 0x40;
        func_001A1E70(func_00279290(q), 10);
        switch (t) {
        case 0:
            func_001A1E70(func_00279290(q), 11);
            break;
        case 1:
            func_001A1E70(func_00279290(q), 11);
            func_001A1E70(func_00279290(q), 12);
            break;
        case 2:
            func_001A1E70(func_00279290(q), 11);
            func_001A1E70(func_00279290(q), 12);
            func_001A1E70(func_00279290(q), 13);
            break;
        }
        break;
    case 4:
    case 5:
        func_001A1E10(func_00279290(p + (k + 11) * 0x600 + 0x40));
        break;
    }
}

char * func_002790E0();

void func_00100450();

void func_0013D6A0();

void func_00304E70();

char * func_0034E430(p) char *p; {
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
    *(char * *)(p) = D_005AD390;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 18, 135);
    func_00100450(p + 27712, (void *)func_00304E70, (void *)func_0027BBF0, 128, 18);
    func_00100450(p + 30080, (void *)func_002790E0, (void *)func_002791E0, 1536, 1);
    func_00100450(p + 31616, (void *)func_00304E70, (void *)func_0027BBF0, 128, 1);
    func_002790E0(p + 32000);
    *(char *)(p + 33536) = 0;
    *(int *)(p + 31744) = 0;
    return p;
}

int func_0034F1C0(p0) char *p0; {
    return (*(unsigned char *)(p0 + 4) == 2);
}

int func_0034F1D0(p0) int p0; {
    return *(signed char *)((char *)p0 + 33667);
}

extern char * D_005BE0D8;

extern char D_01DFA310[];

int func_0030E980();

int func_0030FDF0();

void func_00352270() {
    int v0;
    char *v1;
    int v2;
    int v3;
    v3 = func_0030E980(D_01DFA310);
    v0 = v3;
    if (v0 != 0) {
        v1 = D_005BE0D8;
        if (*(signed char *)(v1 + 3) != 0) {
            v2 = (222 - *(short *)(v1 + 46));
        } else {
            v2 = (445 - *(short *)(v1 + 46));
        }
        v3 = func_0030FDF0(D_01DFA340, v0, 50, v2, 0x585858, 16, 0xfffff2, 1);
    }
}

extern char D_0059E380[];

extern char D_0059E404[];

extern char D_0059E410[];

extern char D_0059E414[];

int func_00352320(p0, p1) char *p0; int p1; {
    int v0;
    v0 = 0;
    switch (p1) {
    case 0:
        v0 = *(int *)((D_0059E380 + (*(signed char *)((char *)(p1 + (int)p0) + 31861) << 2)) + 0);
        break;
    case 1:
        v0 = *(int *)((D_0059E380 + ((*(signed char *)((char *)(*(unsigned char *)(p0 + 31857) + (int)p0) + 31867) + ((*(unsigned char *)(p0 + 31857) * 3) + 3)) << 2)) + 0);
        break;
    case 2:
        v0 = *(int *)((D_0059E380 + ((*(signed char *)((char *)(*(unsigned char *)(p0 + 31858) + (int)p0) + 31872) + ((*(unsigned char *)(p0 + 31858) * 3) + 18)) << 2)) + 0);
        break;
    case 3:
        v0 = *(int *)((D_0059E404 + (*(signed char *)((char *)(p1 + (int)p0) + 31861) << 2)) + 0);
        break;
    case 4:
        v0 = *(int *)D_0059E410;
        break;
    case 5:
        v0 = *(int *)D_0059E414;
        break;
    }
    return v0;
}

void func_0034F1E0(void) {}

void func_00352420(char *p, int v) { *(int *)(p + 30032) = v; }

void func_00352300(char *p0, int p1) {
    *(int *)(p0 + 30024) = 0;
    *(int *)(p0 + 30020) = 0;
    *(int *)(p0 + 30016) = 0;
    *(int *)(p0 + 31744) = 0;
    *(int *)(p0 + 30036) = 0;
    *(int *)(p0 + 30028) = p1;
    *(int *)(p0 + 30032) = p1;
}
