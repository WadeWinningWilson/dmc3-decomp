int func_001AD100();

int func_003E1140();

int func_003E1180();

int func_003E10D0(p0) int p0; {
    int v1;
    char *v0;
    int v2;
    v0 = (char *)p0;
    v2 = func_001AD100();
    if (*(unsigned char *)(v0 + 68) != 0) {
        v1 = *(unsigned char *)(v0 + 4);
        switch (v1) {
        case 0:
            func_003E1140(v0);
            *(char *)(v0 + 4) = (*(unsigned char *)(v0 + 4) + 1);
            /* fall through */
        case 1:
            v2 = func_003E1180(v0);
            break;
        }
    }
    return v2;
}

int func_003E1290();

int func_003E1140(p0) int p0; {
    int tmp0;
    tmp0 = func_003E1290(p0, 0);
    *(int *)((char *)p0 + 12) = (*(int *)((char *)p0 + 12) | 64);
    return tmp0;
}

int func_001AD140();

int func_003E12E0();

int func_003E1180(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp0;
    int tmp1;
    int tmp2;
    v0 = *(int *)(p0 + 80);
    v1 = p0;
    switch (v0) {
    case 0:
        v4 = func_003E12E0(p0, 0);
        tmp0 = (v4 & 255);
        v3 = (int)v1;
        if (tmp0 == 1) {
            v4 = func_001AD140(v3);
        }
        break;
    case 1:
        v4 = func_003E12E0(p0, 0);
        tmp1 = (v4 & 255);
        v5 = (int)v1;
        if (tmp1 == 1) {
            v4 = func_003E1290(v5, 0);
        }
        break;
    case 2:
        if (*(unsigned char *)(v1 + 69) == 0) {
            v4 = func_003E12E0(p0, 0);
            v6 = (int)v1;
            if ((v4 & 255) == 1) {
                v4 = func_003E1290(v6, 1);
                *(char *)(v1 + 69) = 1;
            }
        } else {
            v4 = func_003E12E0(p0, 1);
            tmp2 = (v4 & 255);
            v2 = (int)v1;
            if (tmp2 == 1) {
                v4 = func_003E1290(v2, 0);
                *(char *)(v1 + 69) = 0;
            }
        }
        break;
    }
}

int func_003E1290(p0, p1) char *p0; int p1; {
    if ((p1 & 255) == 0) {
        *(short *)(p0 + 70) = *(unsigned char *)(p0 + 100);
        *(short *)(p0 + 72) = *(unsigned char *)(p0 + 101);
        *(short *)(p0 + 74) = *(unsigned char *)(p0 + 102);
    } else {
        *(short *)(p0 + 70) = *(unsigned char *)(p0 + 103);
        *(short *)(p0 + 72) = *(unsigned char *)(p0 + 104);
        *(short *)(p0 + 74) = *(unsigned char *)(p0 + 105);
    }
    *(int *)(p0 + 76) = 0;
}

extern char D_005A6F50[];

extern char D_005AADD0[];

extern char D_005B18D0[];

extern char D_005B18F4[];

void func_00100580();

void func_0013D240();

int func_003E1990(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = (char *)p0;
    v1 = p1;
    if (v0 != 0) {
        *(char **)(v0 + 0) = D_005B18D0;
        *(char **)(v0 + 56) = D_005B18F4;
        if ((v0 + 56) != 0) {
            *(char **)(v0 + 56) = D_005AADD0;
        }
        if (v0 != 0) {
            *(char **)(v0 + 0) = D_005A6F50;
            func_0013D240((v0 + 36), -1);
        }
        v3 = (int)v0;
        if ((short)v1 > 0) {
            func_00100580(v3);
        }
    }
    return (int)v0;
}

extern void func_003E1970();

void func_003E1A30(char *p) { func_003E1970(p + -56); }

extern void func_003E1960();

void func_003E1A40(char *p) { func_003E1960(p + -56); }

void func_003E10C0(void) {}

void func_003E1280(void) {}

void func_003E1980(void) {}
