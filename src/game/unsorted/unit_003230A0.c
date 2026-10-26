void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00325B00(char *);

char *func_003259E0(char *p) {
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
    **q = func_001B0FD0(a, 0x1940, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x1940, t);
        if (r != 0) {
            func_00325B00(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x2C, **q);
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
        *(char **)(ret + 0x38) = p;
    }
    return ret;
}

void func_0013E040(char *, int, int);

extern char D_006011E4[];

extern char D_00631568[];

void func_00323EC0(char *p, int a) {
    void func_00323140(char *, int, int, int, int);
    *(int *)(p + 0x20) = *(int *)(p + 8);
    *(int *)(p + 0x28) = *(int *)(p + 0x10);
    *(signed char *)(p + 0x18) = *(signed char *)(p + 0);
    *(signed char *)(p + 0x1A) = *(signed char *)(p + 2);
    *(signed char *)(p + 0x1C) = *(signed char *)(p + 4);
    *(int *)(p + 0x24) = *(int *)(p + 0xC);
    *(int *)(p + 0x2C) = *(int *)(p + 0x14);
    *(signed char *)(p + 0x19) = *(signed char *)(p + 1);
    *(signed char *)(p + 0x1B) = *(signed char *)(p + 3);
    *(signed char *)(p + 0x1D) = *(signed char *)(p + 5);
    func_00323140(p, a, *(unsigned char *)(p + 0x14), 7, 3);
    func_0013E040(D_006011E4, 1, 0);
    func_0013E040(D_00631568, 1, 0);
}

extern char D_005D0E78[];

int func_0013DD00();

int func_00323F60(void) {
    int t0;
    t0 = func_0013DD00(D_005D0E78);
    return ((unsigned int)0 < (unsigned int)t0);
}

extern char D_005D0E70[];

void func_0013DA70();

int func_003259B0(void) {
    func_0013DA70(D_005D0E70);
    return 1;
}

int func_0013D900();

int func_00323100(p0) int p0; {
    int tmp0;
    tmp0 = func_0013D900(D_005D0E70);
    *(int *)((char *)p0 + 20) = -1;
    *(int *)((char *)p0 + 16) = -1;
    *(int *)((char *)p0 + 12) = -1;
    *(int *)((char *)p0 + 8) = -1;
    return tmp0;
}

void func_00323DF0(p0) char *p0; {
    void func_00323140();
    *(int *)(p0 + 32) = *(int *)(p0 + 8);
    *(int *)(p0 + 40) = *(int *)(p0 + 16);
    *(char *)(p0 + 24) = *(signed char *)(p0 + 0);
    *(char *)(p0 + 26) = *(signed char *)(p0 + 2);
    *(char *)(p0 + 28) = *(signed char *)(p0 + 4);
    *(int *)(p0 + 36) = *(int *)(p0 + 12);
    *(int *)(p0 + 44) = *(int *)(p0 + 20);
    *(char *)(p0 + 25) = *(signed char *)(p0 + 1);
    *(char *)(p0 + 27) = *(signed char *)(p0 + 3);
    *(char *)(p0 + 29) = *(signed char *)(p0 + 5);
    func_00323140(p0, 25, *(unsigned char *)(p0 + 20), 11, 3);
}

void func_00323E60(p0, p1) char *p0; int p1; {
    void func_00323140();
    *(int *)(p0 + 32) = *(int *)(p0 + 8);
    *(int *)(p0 + 40) = *(int *)(p0 + 16);
    *(char *)(p0 + 24) = *(signed char *)(p0 + 0);
    *(char *)(p0 + 26) = *(signed char *)(p0 + 2);
    *(char *)(p0 + 28) = *(signed char *)(p0 + 4);
    *(int *)(p0 + 36) = *(int *)(p0 + 12);
    *(int *)(p0 + 44) = *(int *)(p0 + 20);
    *(char *)(p0 + 25) = *(signed char *)(p0 + 1);
    *(char *)(p0 + 27) = *(signed char *)(p0 + 3);
    *(char *)(p0 + 29) = *(signed char *)(p0 + 5);
    func_00323140(p0, p1, *(unsigned char *)(p0 + 20), 7, 3);
}

void func_00323F90(p0) char *p0; {
    void func_00323140();
    func_00323140(p0, *(unsigned char *)(p0 + 40), *(unsigned char *)(p0 + 44), 4, *(signed char *)(p0 + 25));
}

void func_00323FB0(p0) char *p0; {
    void func_00323140();
    *(int *)(p0 + 32) = *(int *)(p0 + 8);
    *(int *)(p0 + 40) = *(int *)(p0 + 16);
    *(char *)(p0 + 24) = *(signed char *)(p0 + 0);
    *(char *)(p0 + 26) = *(signed char *)(p0 + 2);
    *(char *)(p0 + 28) = *(signed char *)(p0 + 4);
    *(int *)(p0 + 36) = *(int *)(p0 + 12);
    *(int *)(p0 + 44) = *(int *)(p0 + 20);
    *(char *)(p0 + 25) = *(signed char *)(p0 + 1);
    *(char *)(p0 + 27) = *(signed char *)(p0 + 3);
    *(char *)(p0 + 29) = *(signed char *)(p0 + 5);
    func_00323140(p0, 30, 32, 7, 1);
}

void *func_003230A0(void *p) { return p; }

extern int D_0055DF00[];

unsigned char func_0013DDC0(char *);

void func_0013DC30(char *, int, int);

void func_0013DD10(char *, int);

void func_003257E0(char *p, int i, float x, float y) {
    char *s;
    ((unsigned char *)(p + 4))[i] = 1;
    s = D_005D0E70 + (unsigned char)i * 0x30384 + 8;
    switch (func_0013DDC0(s)) {
    case 0:
        if (((int *)(p + 8))[i] != ((int *)(p + 0x10))[i]) ((int *)(p + 8))[i] = ((int *)(p + 0x10))[i];
        func_0013DC30(s, D_0055DF00[((int *)(p + 8))[i]], 0);
        func_0013E040(s + 0x30354, (int)x, 1);
        break;
    case 1:
    case 2:
        if (*(int *)(p + i * 4 + 8) != ((int *)(p + 0x10))[i]) {
            ((int *)(p + 8))[i] = ((int *)(p + 0x10))[i];
            func_0013DC30(s, D_0055DF00[((int *)(p + 8))[i]], 0);
            func_0013E040(s + 0x30354, (int)x, 1);
        } else {
            func_0013E040(s + 0x30354, (int)y, 0);
        }
        break;
    }
    func_0013DD10(s, 0);
}
