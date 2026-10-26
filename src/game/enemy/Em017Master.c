extern char D_00645A30[];

void func_0028C110(char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

char *func_0042E520(int p0, int p1, int p2) {
    extern char D_005B3CB0[];
    extern char D_005B3CD4[];
    extern char D_005B3D54[];
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x480, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B3CB0;
            *(char **)(t + 0x40) = D_005B3CD4;
            *(char **)(t + 0xA0) = D_005B3D54;
            *(char *)(t + 0x160) = 0;
            func_0028C110(t + 0x1E0);
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x9, **q);
        (**q)[0x18] = 1;
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
        *(int *)(ret + 0xD0) = p0;
        *(int *)(ret + 0x470) = p1;
        *(int *)(ret + 0x474) = p2;
    }
    return ret;
}

int func_001AD100();

int func_0042DAC0();

int func_0042DB90();

int func_0042DA60(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_001AD100();
    v2 = *(unsigned char *)(v0 + 4);
    if (v2 != 1) {
        if (v2 != 0) {
            return v1;
        } else {
            tmp0 = func_0042DAC0(v0);
            return tmp0;
        }
    } else {
        v3 = func_0042DB90(v0);
        return v3;
    }
}

int func_0042DAC0(p0) char *p0; {
    int v0;
    char *v1;
    v0 = 0;
    *(char *)(p0 + 68) = -1;
    v1 = p0;
    *(char *)(p0 + 69) = 3;
    *(char *)(p0 + 70) = 56;
    *(char *)(p0 + 71) = 38;
    *(int *)(p0 + 304) = 0;
    *(int *)(p0 + 320) = 0;
    *(int *)(p0 + 308) = 0;
    *(int *)(p0 + 324) = 0;
    *(int *)(p0 + 312) = 0;
    *(int *)(p0 + 328) = 0;
    *(int *)(p0 + 316) = 0;
    *(int *)(p0 + 332) = 0;
    do {
        *(int *)(v1 + 336) = 0;
        *(int *)(v1 + 340) = 0;
        *(int *)(v1 + 344) = 0;
        v0 = ((v0 + 8) & 255);
        *(int *)(v1 + 348) = 0;
        *(int *)(v1 + 352) = 0;
        *(int *)(v1 + 356) = 0;
        *(int *)(v1 + 360) = 0;
        *(int *)(v1 + 364) = 0;
        v1 = (v1 + 32);
    } while ((v0 < 32));
    *(int *)(p0 + 464) = 0;
    *(int *)(p0 + 468) = 0;
    *(char *)(p0 + 472) = 0;
    *(char *)(p0 + 473) = 0;
    *(char *)(p0 + 474) = 0;
    *(char *)(p0 + 475) = 0;
    *(char *)(p0 + 476) = 0;
    *(char *)(p0 + 477) = 0;
    *(char *)(p0 + 478) = 0;
    *(char *)(p0 + 479) = 0;
    *(char *)(p0 + 480) = 4;
    *(char *)(p0 + 481) = 0;
    *(char *)(p0 + 482) = 0;
    *(char *)(p0 + 483) = 0;
    *(char *)(p0 + 484) = 0;
    *(char *)(p0 + 4) = 1;
}

extern char D_01CAFF0C[];

int func_002F2D30();

int func_0042E420(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(*(char **)D_01CAFF0C + 32);
    if (v1 != 0) {
        v2 = func_002F2D30(v1, v0);
    }
    return v2;
}

extern void func_0042E460();

void func_0042E4F0(char *p) { func_0042E460(p + -64); }

void func_0042E500(char *p) { func_0042E460(p + -160); }

void func_0042E510(char *p) { func_0042E460(p + -208); }
