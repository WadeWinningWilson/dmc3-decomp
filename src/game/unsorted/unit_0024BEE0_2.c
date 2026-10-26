extern char D_0066671A[];

extern char D_00666710[];

unsigned short func_001AE770(char *, int);

int func_0024CD10(char *p, int a, unsigned short k) {
    switch (k) {
    case 0:
        return 1;
    case 1:
        if (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 8)]) {
            return 1;
        }
        break;
    case 2:
        if (*(unsigned char *)(p + 0x2848) == 0x18) {
            break;
        }
        return 1;
    case 3:
        if (((signed char *)(p + 0x3D4C))[*(unsigned char *)(p + 0x3D4B)] != 7) {
            return 0;
        }
        if (*(unsigned char *)(p + 0x3C6C) != 1 && a == 10) {
            return 0;
        }
        return 1;
    }
    return 0;
}

void func_0024E2D0(char *p, int i);

void func_0024E0B0(char *);

void func_0024E2B0(char *);

void func_0024E300(char *);

void func_0024E320(char *);

void func_0024E380(char *);

void func_0024E3D0(char *);

void func_0024EED0(char *, int);

void func_0024F050(char *);

void func_0024F1F0(char *);

void func_0024F220(char *);

void func_0024F2B0(char *);

void func_0024F130(char *);

void func_0024E420(char *);

void func_0024DBA0(char *p) {
    int c;
    *(unsigned char *)(p + 0x82) = 1;
    *(unsigned char *)(p + 0x5C) = **(unsigned char **)(p + 0x14);
    while ((c = *(unsigned char *)(p + 0x5C)) != 0) {
        switch (c) {
        case 1:
            func_0024E0B0(p);
            *(unsigned char *)(p + 0x83) = 1;
            break;
        case 3:
            func_0024E2D0(p, 0);
            break;
        case 4:
            func_0024E2D0(p, 1);
            break;
        case 2:
            func_0024E2B0(p);
            break;
        case 5:
            func_0024E300(p);
            break;
        case 6:
            func_0024E320(p);
            break;
        case 7:
            func_0024E380(p);
            break;
        case 8:
            func_0024E3D0(p);
            break;
        case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23:
        case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31:
            func_0024EED0(p, c - 0xF);
            break;
        case 32:
            func_0024F050(p);
            break;
        case 33:
            func_0024F1F0(p);
            break;
        case 34:
            func_0024F220(p);
            break;
        case 35:
            func_0024F2B0(p);
            break;
        case 36:
            func_0024F130(p);
            break;
        }
        *(unsigned char *)(p + 0x5C) = **(unsigned char **)(p + 0x14);
    }
    *(unsigned char *)(p + 0x82) = 0;
    func_0024E420(p);
}

int func_0024C5B0(char *, char *, char *);

int func_0024C320(char *p, char *s, short *hdr, char *tbl) {
    unsigned short n;
    int cont;
    if (*(signed char *)(s + 2) != 0 && --(*(signed char *)(s + 2)) != 0) return 1;
    n = *(unsigned short *)hdr - 1;
    do {
        if (*(signed char *)(s + 3) != 0 && --(*(signed char *)(s + 3)) == 0) {
            *(unsigned char *)(s + 0) = 0; *(unsigned char *)(s + 1) = 0; *(signed char *)(s + 2) = 0; *(signed char *)(s + 3) = 0; *(unsigned char *)(s + 4) = 0; *(int *)(s + 8) = 0; *(unsigned char *)(s + 5) = 0;
        }
        tbl += *(unsigned char *)(s + 0) * 10;
        cont = 0;
        switch (func_0024C5B0(p, s, tbl)) {
        case 1:
            if (*(unsigned char *)(s + 0) == n) {
                *(unsigned char *)(s + 0) = 0; *(unsigned char *)(s + 1) = 0; *(signed char *)(s + 2) = hdr[2]; *(signed char *)(s + 3) = 0; *(unsigned char *)(s + 4) = 0; *(unsigned char *)(s + 5) = 0;
                return 1;
            }
            cont = 1;
            *(signed char *)(s + 3) = *(unsigned short *)(tbl + 8);
            (*(unsigned char *)(s + 0))++;
            break;
        case 2:
            switch (*(unsigned char *)(s + 1)) {
            case 0:
                break;
            case 1:
                if (*(unsigned char *)(s + 0) == n) return 1;
                if (*(unsigned char *)(s + 0) != n) {
                    cont = 1;
                    *(signed char *)(s + 3) = *(unsigned short *)(tbl + 8);
                    (*(unsigned char *)(s + 0))++;
                }
                break;
            case 2:
                if (*(unsigned char *)(s + 0) == n) {
                    *(unsigned char *)(s + 0) = 0; *(unsigned char *)(s + 1) = 0; *(signed char *)(s + 2) = 0; *(signed char *)(s + 3) = 0; *(unsigned char *)(s + 4) = 0; *(int *)(s + 8) = 0; *(unsigned char *)(s + 5) = 0;
                    return 1;
                }
                if (*(unsigned char *)(s + 0) != n) {
                    cont = 1;
                    *(signed char *)(s + 3) = *(unsigned short *)(tbl + 8);
                    (*(unsigned char *)(s + 0))++;
                }
                break;
            }
            break;
        case 0:
            if (*(unsigned char *)(s + 0) == 0) {
                *(unsigned char *)(s + 0) = 0; *(unsigned char *)(s + 1) = 0; *(signed char *)(s + 2) = 0; *(signed char *)(s + 3) = 0; *(unsigned char *)(s + 4) = 0; *(int *)(s + 8) = 0; *(unsigned char *)(s + 5) = 0;
            }
            break;
        case 3:
            *(unsigned char *)(s + 0) = 0; *(unsigned char *)(s + 1) = 0; *(signed char *)(s + 2) = 0; *(signed char *)(s + 3) = 0; *(unsigned char *)(s + 4) = 0; *(int *)(s + 8) = 0; *(unsigned char *)(s + 5) = 0;
            break;
        }
    } while (cont);
    return 0;
}

void func_0024CC30(p0, p1) int p0; int p1; {
    *(char *)((char (*)[12])((char *)p0 + 16028))[(p1 & 255)] = 0;
    *(char *)((char (*)[12])((char *)p0 + 16029))[(p1 & 255)] = 0;
    *(char *)((char (*)[12])((char *)p0 + 16030))[(p1 & 255)] = 0;
    *(char *)((char (*)[12])((char *)p0 + 16031))[(p1 & 255)] = 0;
    *(char *)((char (*)[12])((char *)p0 + 16032))[(p1 & 255)] = 0;
    *(int *)((char (*)[12])((char *)p0 + 16036))[(p1 & 255)] = 0;
}

void func_0024E480(p0) char *p0; {
    int v2;
    int v1;
    char *v0;
    v0 = *(char **)(p0 + 16);
    v2 = 0;
    if (-1 != *(short *)(v0 + 0)) {
        v1 = 0;
        do {
            v1 = (v1 + 2);
            v2 = (v2 + 1);
        } while (*(short *)((v0 + v1) + 0) != -1);
    }
    *(int *)(p0 + 84) = v2;
}

void func_0024E4C0(p0) char *p0; {
    int v0;
    v0 = *(unsigned short *)(p0 + 60);
    switch (v0) {
    default:
        return;
    case 0:
        *(char **)(p0 + 16) = (*(char **)(p0 + 4) + *(unsigned short *)(*(char **)(p0 + 4) + 0));
        *(char **)(p0 + 24) = (*(char **)(p0 + 8) + *(unsigned short *)(*(char **)(p0 + 8) + 0));
        return;
    case 1:
        *(int *)(p0 + 16) = *(int *)(p0 + 4);
        *(int *)(p0 + 24) = *(int *)(p0 + 8);
        return;
    }
}
