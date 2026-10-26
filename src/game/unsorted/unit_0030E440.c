int func_0012B1A0(char *, char *);

void func_0012B8A0(char *, char *, int);

char *func_0030E9D0(char *);

int func_0030E980(char *, int);

extern char D_00559A20[];

extern char D_00559A30[];

extern char D_00559A40[];

extern char D_005BC6C8[4];

extern char D_005BC6CC[4];

extern char D_005BC6D0[4];

typedef struct { int r[4]; } RD30E;

void func_0022CB30(RD30E *);

void func_0022CB50(RD30E *, char *);

int func_0022CBA0(RD30E *);

void func_0022CBB0(RD30E *, char *);

void func_0022CB90(RD30E *, char *);

int func_0022CD60(RD30E *);

unsigned char func_0030E580(char *o, char *src) {
    RD30E rd;
    char w[256];
    unsigned char ok;
    char *d;
    unsigned char f;
    char *s;
    char *q;
    int n;
    char *e;
    ok = 0;
    f = 0;
    func_0022CB30(&rd);
    func_0022CB50(&rd, src);
    while (!func_0022CBA0(&rd)) {
        func_0022CBB0(&rd, w);
        if (w[0] == '#') {
        if (w[1] != 0) return 0;
        s = (char *)rd.r[1];
        func_0022CBB0(&rd, w);
            if (func_0012B1A0(w, D_00559A20) == 0) {
                ok = 1;
                func_0012B8A0(s, D_00559A30, 0xE);
            } else if (func_0012B1A0(w, D_00559A40) == 0) {
                f = 1;
                ok = f;
            } else if (func_0012B1A0(w, D_005BC6C8) == 0) {
                if (!(ok & 0xFF)) return 0;
                e = func_0030E9D0(o);
                if (e == 0) return 0;
                n = func_0022CD60(&rd);
                s = (char *)rd.r[1];
                if (n > 0x7FFF) return 0;
                if (func_0030E980(o, n) == 0) {
                    *(short *)e = n;
                    *(char **)(e + 4) = s + 1;
                }
                if (!(f & 0xFF)) {
                    d = s + 1;
                    q = d;
                    while (*q != '#') {
                        while (*q != '"') {
                            if (*q == '#') {
                                *d = 0;
                                d++;
                                do {
                                    *d = ' ';
                                    d++;
                                } while (d < q);
                                func_0022CB90(&rd, q);
                                func_0022CBB0(&rd, w);
                                func_0022CBB0(&rd, w);
                                if (func_0012B1A0(w, D_005BC6CC) != 0) return 0;
                                goto next;
                            }
                            q++;
                        }
                        q++;
                        while (*q != '"') *d++ = *q++;
                        q++;
                    }
                } else {
                    q = s + 1;
                    while (*q != '#') q++;
                    func_0022CB90(&rd, q);
                    func_0022CBB0(&rd, w);
                    func_0022CBB0(&rd, w);
                    if (func_0012B1A0(w, D_005BC6CC) != 0) return 0;
                }
            } else if (func_0012B1A0(w, D_005BC6D0) == 0) {
                break;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    next:;
    }
    if (ok & 0xFF) goto t;
    return 0;
t:
    return 1;
}

char *func_001B0FD0(char *, int, int);

int func_0030E500(char *, int);

int func_0030E450(char *p, int n, int a) {
    int i;
    int off;
    *(char **)p = func_001B0FD0(p + 4, n << 3, 0);
    *(int *)(p + 20) = n;
    i = 0;
    if (0 < *(int *)(p + 20)) {
        off = 0;
        do {
            i++;
            *(short *)(*(char **)p + off) = -1;
            *(int *)(*(char **)p + off + 4) = 0;
            off += 8;
        } while (i < *(int *)(p + 20));
    }
    i = func_0030E500(p, a);
    *(char *)(p + 28) = 0;
    return i;
}

extern char D_006480D0[];

void func_0013D5D0();

void func_00196C40();

void func_0030E540(p) char *p; {
    if (*(char **)(p + 24) != 0) {
        func_00196C40(D_006480D0, *(char **)(p + 24));
    }
    func_0013D5D0(p + 4);
}
