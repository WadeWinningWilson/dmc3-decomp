typedef struct { int a; short k; short pad; int v; } K12L;

int func_00287D90(K12L *t, short k) {
    int i;
    char *e;
    for (i = 0, e = (char *)t; i < 64; i++, e += 12) {
        if (*(short *)(e + 4) == k) {
            return t[i].v;
        }
    }
    return 0;
}

extern char D_00666750[];

void func_00286F20(char *p, int a);

void func_00247550(char *, char *);

void func_00247510(char *, char *);

unsigned char func_002869A0(char *);

int func_001AEB60(char *);

void func_00286FD0(char *, int);

void func_00286810(char *p) {
    char *e;
    char *n;
    e = *(char **)(p + 0x388);
    while (e != 0) {
        n = *(char **)(e + 8);
        if ((*(unsigned char **)(e + 0xC))[1] == 3) {
            func_00247550(p + 0x384, e);
            func_00247510(p + 0x390, e);
        }
        e = n;
    }
    if (*(unsigned char *)(p + 0x39C) == 0) return;
    switch (*(unsigned char *)(p + 0x39C)) {
    case 1:
        if (func_002869A0(p) == 1) {
            *(unsigned char *)(p + 0x39C) = 0;
        }
        break;
    case 2:
        if (*(int *)(p + 0x388) == 0) {
            *(unsigned char *)(p + 0x39C) = 0;
        }
        break;
    case 3:
        if (*(int *)(p + 0x388) == 0) {
            *(unsigned char *)(p + 0x39C) = 0;
        }
        break;
    case 4:
        if (func_001AEB60(D_00666750) != 0) {
            e = *(char **)(p + 0x388);
            while (e != 0) {
                n = *(char **)(e + 8);
                *(int *)(e + 0xC) = 0;
                *(int *)(e + 0x18) = 0;
                func_00247550(p + 0x384, e);
                e = n;
            }
            *(unsigned char *)(p + 0x39C) = 0;
            switch (*(unsigned char *)(p + 0x3AC)) {
            case 1:
                func_00286F20(p, *(int *)(p + 0x3B0));
                break;
            case 2:
                func_00286FD0(p, *(int *)(p + 0x3B0));
                break;
            }
        }
        break;
    }
}

extern int *D_00543A20[];

extern int D_0054E4B0[];

extern int D_0054E750[];

extern int D_00540180[];

extern int D_00540200[];

extern signed char D_00666713[];

char *func_00287480(char *);

int func_001AF3F0(char *, int, int, int);

char *func_00286B90(char *p, unsigned char type, int id) {
    char *func_002871E0(char *, unsigned char, int);
    char *e;
    signed char k;
    e = func_002871E0(p, type, id);
    if (e == 0) {
    e = func_00287480(p);
    switch (type) {
    case 0:
        *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_00543A20[id / 100][id % 100], 0, 0);
        break;
    case 1:
        *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_00543A20[id / 100][id % 100] + 4, 0, 0);
        break;
    case 2:
        *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_00543A20[id / 100][id % 100] + 8, 0, 0);
        break;
    case 3:
        if (id < 200) {
            *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_0054E4B0[id], 0, 0);
        } else {
            *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_0054E750[id], 0, 0);
        }
        break;
    case 4:
        k = D_00666713[0];
        if (k == -1) k = 0;
        if (id < 200) {
            *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_0054E4B0[id] + k * 4 + 8, 0, 0);
        } else {
            *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_0054E750[id] + k * 4 + 8, 0, 0);
        }
        break;
    case 5:
        *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_00540180[id], 0, 0);
        break;
    case 6:
        *(int *)(e + 0xC) = func_001AF3F0(D_00666750, D_00540200[id], 0, 0);
        break;
    }
    if (*(int *)(e + 0xC) == 0) {
        *(unsigned char *)(p + 0x3A4) = 1;
        return 0;
    }
    *(unsigned char *)(e + 0x11) = type;
    *(int *)(e + 0x14) = id;
    *(unsigned char *)(e + 0x10) = 1;
    func_00247510(p + 0x384, e);
    } else {
        *(unsigned char *)(e + 0x10) = 1;
    }
    return e;
}

int func_002872D0();

void func_002872E0(p0) int p0; {
    int func_002871E0();
    int v0;
    int v1;
    int v2;
    v2 = func_002871E0();
    v0 = v2;
    v1 = p0;
    if (v0 != 0) {
        v2 = func_002872D0(v1, v0);
    }
}

void func_002873A0(p0) char *p0; {
    int v0;
    v0 = 0;
    do {
        if (*(int *)(p0 + 16) != 0) {
            if (*(unsigned char *)(p0 + 20) != 0) {
                *(char *)(p0 + 20) = 0;
            }
        }
        v0 = (v0 + 1);
        p0 = (p0 + 28);
    } while ((v0 < 32));
}

int func_002874D0();

int func_00287C90(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    char *v3;
    v3 = *(char **)(p0 + 916);
    v0 = (int)p0;
    if (v3 != 0) {
        do {
            v1 = *(int *)(v3 + 8);
            if (*(unsigned char *)(v3 + 17) == 6) {
                v2 = func_002874D0(v0, v3);
            }
            v3 = (char *)v1;
        } while (v1 != 0);
    }
    return v2;
}
