float func_00132470(float *, float *);

char *func_002D6540(char *p) {
    char *best;
    int i;
    float d;
    char *e;
    float v;
    best = 0;
    d = 1000000.0f;
    for (i = 0, e = p; i < 6; i++, e += 4) {
        if (*(char **)(e + 14620) != 0) {
            v = func_00132470((float *)(p + 80), (float *)(*(char **)(e + 14620) + 80));
            if (v < d) {
                best = *(char **)(e + 14620);
                d = v;
            }
        }
    }
    return best;
}

void func_0024DA80(char *, int, int);

extern int D_01CAFF38[];

static inline unsigned char okD9(void) { unsigned char r = 1; if (D_01CAFF38[0] != 0xD9 && D_01CAFF38[0] != 0x1A0) r = 0; return r; }

void func_002D26A0(char *, int, int);

void func_002D2270(char *p, int k) {
    unsigned char f;
    if ((unsigned char)okD9() == 0 && (unsigned char)k == 0x17) k = 2;
    *(signed char *)(p + 0x37DC) = *(signed char *)(p + 0x37DA);
    *(unsigned char *)(p + 0x37DA) = k;
    *(unsigned char *)(p + 5) = 0;
    f = 0;
    switch (*(unsigned char *)(p + 0x37DA)) {
    case 0:
        func_002D26A0(p, 0, 0);
        break;
    case 1:
        if (*(unsigned char *)(p + 0x37DC) != 0xB) func_002D26A0(p, 0, 1);
        break;
    case 2:
        func_002D26A0(p, 0, 7);
        f = 1;
        break;
    case 3:
        func_002D26A0(p, 0, 8);
        break;
    case 4:
        func_002D26A0(p, 0, 9);
        break;
    case 5:
        func_002D26A0(p, 1, 0);
        break;
    case 6:
        func_002D26A0(p, 1, 1);
        break;
    case 7:
        func_002D26A0(p, 1, 2);
        func_0024DA80(p + 0x31E0, 0, 2);
        *(unsigned char *)(p + 0x3900) = 1;
        break;
    case 8:
        func_002D26A0(p, 1, 3);
        break;
    case 9:
        func_002D26A0(p, 1, 6);
        break;
    case 10:
        func_002D26A0(p, 1, 9);
        break;
    case 11:
        if (*(unsigned char *)(p + 0x37DC) != 1) func_002D26A0(p, 0, 1);
        f = 1;
        break;
    case 12:
        func_002D26A0(p, 3, 0);
        f = 1;
        break;
    case 13:
        func_002D26A0(p, 3, 1);
        break;
    case 14:
        func_002D26A0(p, 3, 2);
        break;
    case 15:
        func_002D26A0(p, 3, 3);
        f = 1;
        func_0024DA80(p + 0x31E0, 0, 1);
        *(unsigned char *)(p + 0x3900) = 1;
        break;
    case 16:
        func_002D26A0(p, 3, 4);
        f = 1;
        break;
    case 17:
        func_002D26A0(p, 3, 5);
        f = 1;
        break;
    case 18:
        func_002D26A0(p, 3, 6);
        f = 1;
        break;
    case 19:
        func_002D26A0(p, 3, 7);
        f = 1;
        break;
    case 20:
        func_002D26A0(p, 3, 8);
        break;
    case 21:
        func_002D26A0(p, 3, 9);
        f = 1;
        break;
    case 22:
        func_002D26A0(p, 1, 0);
        break;
    case 23:
        func_002D26A0(p, 0, 7);
        f = 1;
        break;
    case 24:
        func_002D26A0(p, 3, 11);
        f = 1;
        break;
    case 25:
        func_002D26A0(p, 3, 12);
        break;
    case 26:
        func_002D26A0(p, 3, 13);
        break;
    case 27:
        func_002D26A0(p, 3, 14);
        f = 1;
        break;
    }
    if (f == 1) {
        if (*(unsigned char *)(p + 0x37DD) != (unsigned char)k) *(unsigned char *)(p + 0x3908) = 0;
        else *(unsigned char *)(p + 0x3908) = *(unsigned char *)(p + 0x3908) + 1;
        *(unsigned char *)(p + 0x37DD) = k;
    }
}

int func_00207480();

int func_002D6D30(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = p0;
    if (*(unsigned char *)(p0 + 14544) > 0) {
        v1 = 2;
        if (*(int *)(v0 + 14608) == 0) {
            v2 = func_00207480(v1, 329, 0, 16);
            *(int *)(v0 + 14608) = v2;
            v3 = *(char **)(v0 + 14608);
            if (v3 != 0) {
                *(int *)(v3 + 144) = *(int *)(*(char **)(v0 + 1672) + 260);
                *(char *)(v3 + 154) = 3;
                *(char *)(*(char **)(v0 + 14608) + 58) = 1;
            }
        }
    }
    return v2;
}

extern char D_01CAFF0C[];

int func_0034B940();

int func_002D6DB0(p0) int p0; {
    int tmp2;
    tmp2 = func_0034B940((*(int *)(*(char **)D_01CAFF0C + 12) + 80), (p0 + 80));
    return (short)((short)tmp2 - *(short *)((char *)p0 + 14588));
}

extern void func_002D7480();

void func_002D84F0(char *p) { func_002D7480(p + -64); }

extern void func_002D7520();

void func_002D8500(char *p) { func_002D7520(p + -64); }

extern void func_002D7380();

void func_002D8530(char *p) { func_002D7380(p + -64); }

extern void func_002D81D0();

void func_002D8550(char *p) { func_002D81D0(p + -64); }

void func_002D8560(char *p) { func_002D81D0(p + -160); }

void func_002D8570(char *p) { func_002D81D0(p + -208); }

void func_002D85C0(char *p) { func_002D7380(p + -304); }

void func_002D85D0(char *p) { func_002D81D0(p + -304); }

void func_002D85E0(char *p) { func_002D81D0(p + -464); }

float func_002D7470(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 14288) = *(float *)(p1 + 44);
    return t0;
}

float func_002D81B0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 14256);
    *(float *)(p1 + 0) = *(float *)(p0 + 14256);
    return t0;
}

float func_002D81C0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 13732);
    *(float *)(p1 + 0) = *(float *)(p0 + 13732);
    return t0;
}

extern char D_00565050[];

int func_002D65E0(p0) char *p0; {
    int v0;
    int v1;
    int v2;
    v0 = 0;
    v1 = 0;
    v2 = *(int *)((D_00565050 + (*(int *)(p0 + 14584) << 2)) + 0);
    do {
        if (!(v1 < v2)) break;
        if (*(int *)(p0 + 14620) == 0) {
            v0 = (v0 + 1);
        }
        v1 = (v1 + 1);
        p0 = (p0 + 4);
    } while ((v1 < 6));
    return v0;
}

void func_002D6C60();

void func_002D6C50(char *p0) {
    func_002D6C60(p0, *(short *)(p0 + 14588));
}
