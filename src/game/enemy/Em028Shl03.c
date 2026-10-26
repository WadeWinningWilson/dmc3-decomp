extern char D_00645A30[];

void func_00105300(float *, char *);

void func_001AAD30(char *);

char *func_001B0FD0(char *, int, int);

char *func_001B1610(int, char *);

void func_00407070(char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

void func_0013D240(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

char *func_00406F20(char *p, char *s) {
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
    **q = func_001B0FD0(a, 0x420, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x420, t);
        if (r != 0) {
            func_00407070(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
        *(char **)(ret + 0x410) = p;
        func_00105300((float *)(ret + 0x3D0), s);
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

void func_00206730(char *);

void func_001AD140(char *);

void func_0028C740(char *);

void func_00407380(char *p) {
    unsigned char func_002077F0(char *);
    func_00206730(p + 0x414);
    if (*(char **)(p + 0x414) != 0 && func_002077F0(*(char **)(p + 0x414)) == 0) {
        func_001AD140(*(char **)(p + 0x414));
        *(char **)(p + 0x414) = 0;
    }
    func_0028C740(p + 0x150);
}

extern char D_00568D20[];

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_004073E0(char *p) {
    void func_0028C3A0(char *, int, int, char *);
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 0x150, 3);
    func_0028C910(p + 0x150);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    *(unsigned char *)(p + 0x380) = 2;
    *(int *)(p + 0x390) = 0;
    *(int *)(p + 0x394) = 0;
    *(int *)(p + 0x398) = 0;
    *(float *)(p + 0x39C) = 1.0f;
    *(float *)(p + 0x3A0) = 300.0f;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x3D0);
    if (*(char **)(p + 0x1CC) != 0) {
        *(*(char **)(p + 0x1CC) + 2) = 1;
    }
}

void func_0028C790(char *, int);

void func_001AD100(char *);

void func_003BA960(char *);

void func_0028C5C0(char *, int, float);

int func_003AD2F0(char *);

void func_004071C0(char *p) {
    char *func_0028C3A0(char *, int, int, char *);
    int func_002077F0(char *);
    char *g;
    char *d;
    char *s;
    func_001AD100(p);
    func_00206730(p + 0x414);
    func_003BA960(p + 0x410);
    if (*(char **)(p + 0x414) != 0) {
        if ((unsigned char)func_002077F0(*(char **)(p + 0x414)) == 1) {
            *(int *)(p + 0x414) = 0;
            func_001AD140(p);
            return;
        }
    } else {
        func_001AD140(p);
        return;
    }
    g = *(char **)(p + 0x410);
    if (g == 0) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(g + 0x4BE4) != 0x1E) {
        func_001AD140(p);
        return;
    }
    if ((unsigned char)func_003AD2F0(g) == 1) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x418) != 1) {
        func_0028C5C0(p + 0x150, 0, 1.0f);
    } else {
        *(float *)(p + 0x41C) = *(float *)(p + 0x41C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x41C) < 0.0f) {
            *(unsigned char *)(p + 0x418) = 0;
            func_0028C790(p + 0x150, 0);
            func_0028C910(p + 0x150);
            func_0028C3A0(p + 0x150, 0, -1, p + 0x3D0);
        }
    }
    d = p + 0x50;
    s = p + 0x3D0;
    __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory");
    *(float *)(p + 0x5C) = 1.0f;
}

void func_00407340(p0, p1, p2) char *p0; int p1; int p2; {
    int v0;
    if (p1 != 0) {
        v0 = 1;
        if (p2 != 0) {
            *(char *)(p0 + 1048) = v0;
            *(int *)(p0 + 1052) = 0x41f00000;
        }
    }
}

extern void func_00407150();

void func_00407540(char *p) { func_00407150(p + -64); }

extern void func_004074B0();

void func_00407560(char *p) { func_004074B0(p + -64); }

void func_00407570(char *p) { func_004074B0(p + -160); }

void func_00407370(void) {}

void func_00407490(void) {}

void func_004074A0(void) {}
