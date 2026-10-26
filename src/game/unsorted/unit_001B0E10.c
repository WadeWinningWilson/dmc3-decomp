void func_0013D240(char *, int);

extern char D_00645A30[];

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_001B1450(char *);

void func_00207410(char *, char *, char *, char *);

void func_00207460(char *, char *, char *);

void func_001B1620(char *, char *);

extern char D_01DF7E20[];

char *func_0013D2A0(char *, char *, int);

char *func_001B1270(char *a0, char *a1, char *a2, char *a3, char *a4, char *a5, float f) {
    char *func_001B0FD0(char *, int, int);
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    if (D_01DF7E20 == 0) {
        **q = func_001B0FD0(a, 0x120, 1);
    } else {
        **q = func_0013D2A0(a, D_01DF7E20, 0x120);
    }
    if ((t = **q) != 0) {
        r = func_001B1610(0x120, t);
        if (r != 0) {
            func_001B1450(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0xA, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        func_00207410(ret, a0, a3, a4);
        func_00207460(ret, a1, a5);
        *(float *)(ret + 0x40) = f;
        func_001B1620(ret, a2);
    }
    return ret;
}

extern char D_01C60EE0[];

extern char D_01C60E90[];

extern char D_01C60F20[];

extern char D_01C60F3C[];

extern char D_01C60F58[];

void func_0013D070(char *, int, int, int, int);

int func_001B0EF0(void) {
    int func_0013CEF0(char *, char *);
    int func_0013CFC0(char *, int);
    int r;
    if ((unsigned char)func_0013CEF0(D_01C60EE0, D_01C60E90) == 0) {
        r = 0;
    } else {
        func_0013D070(D_01C60F20, func_0013CFC0(D_01C60EE0, 0x10520E0), 0x800, 0x10520E0, 6);
        func_0013D070(D_01C60F3C, func_0013CFC0(D_01C60EE0, 0x2B0000), 0x200, 0x2B0000, 4);
        func_0013D070(D_01C60F58, func_0013CFC0(D_01C60EE0, 0x1309C0), 0x200, 0x1309C0, 6);
        r = 1;
    }
    return r;
}

void func_001B11B0(int a, int b, int c, int d) {
    void func_001B11C0(int, int, int, int, int, int, float);
    func_001B11C0(a, b, c, d, 0, 0, 0.0f);
}

extern char D_00668E80[];

extern char D_01C60F00[];

int func_001B0E10() {
    extern unsigned char D_005BE0A8;
    int func_001B0FD0();
    int v0;
    int v1;
    if (D_005BE0A8 == 0) {
        v1 = (int)D_00668E80;
    } else {
        v1 = func_001B0FD0(D_01C60F00, 0x40000, 0);
    }
    return v1;
}

void func_001003E0();

void func_001B0CC0();

void func_001B1140() {
    func_001003E0(D_01C60F20, (char *)func_001B0CC0, 28, 3);
}

void func_001B1110(void) {
    extern void func_0013D5D0(); func_0013D5D0(); }

int func_001B11A0(void) { return 1; }

extern char D_005BE0AC;

void func_001B1120(int p0) {
    D_005BE0AC = p0;
}

extern char D_005BE0B0;

void func_001B1130(int p0) {
    D_005BE0B0 = p0;
}

char *func_001B1160(char *p0) {
    *(int *)(p0 + 0) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 16) = 0;
    *(char *)(p0 + 20) = 0;
    *(int *)(p0 + 24) = 0;
    return p0;
}

extern char D_005BE0B4;

int func_001B1190(void) {
    D_005BE0B4 = 0;
    return 1;
}

extern char D_01C60EC0[];

int func_00197C30();

int func_001B0E60(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    extern char D_005BE0A8;
    int func_0013CEF0();
    int v0;
    int tmp0;
    int tmp1;
    tmp0 = func_00197C30(D_01C60E90, D_00668E80, 0x15f8000, 6);
    if ((tmp0 & 255) == 0) {
        v0 = 0;
    } else {
        tmp1 = func_0013CEF0(D_01C60EC0, D_01C60E90);
        if ((tmp1 & 255) == 0) {
            v0 = 0;
        } else {
            v0 = 1;
            D_005BE0A8 = v0;
        }
    }
    return v0;
}

void func_001B0E50(void) {
    void func_0013D5D0();
    func_0013D5D0(D_01C60F00);
}

void func_001B0EE0(int p0) {
    void func_0013CFC0();
    func_0013CFC0(D_01C60EC0, p0);
}
