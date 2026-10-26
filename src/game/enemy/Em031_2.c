int func_003B3F70(char *);

void func_003AFC80(char *p) {
    void func_0024DA80(char *, int, int);
    void func_003B4D80(char *, int, int);
    int func_003B4840(char *);
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 1;
        func_0024DA80(p + 0x1D00, 0, 1);
        func_0024DA80(p + 0x1DD0, 0, 1);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 1;
        break;
    case 1:
        func_003B4D80(p, 0x800, 0);
        if ((unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
        }
        break;
    }
}

int func_0024E800(char *);

void func_003B61B0(char *);

void func_003B6450(char *);

static inline unsigned char both_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) {
        return 1;
    }
    return 0;
}

void func_003B1F10(char *p) {
    void func_0024DA80(char *, int, int);
    int func_003B4840(char *);
    void func_003B4F60(char *);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x21;
        func_0024DA80(p + 0x1D00, 0, 0x21);
        func_0024DA80(p + 0x1DD0, 0, 0x21);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 1;
        *(unsigned char *)(p + 0x21C7) = 0;
        *(unsigned char *)(p + 0x21CC) = 0;
        *(unsigned char *)(p + 0x21C9) = 4;
        func_003B61B0(p);
        func_003B6450(p);
    case 1:
        if (both_done(p) == 1) {
            *(unsigned char *)(p + 0x21C7) = 1;
            if ((unsigned char)func_003B3F70(p) == 1) {
                func_003B4840(p);
            }
        }
    }
    func_003B4F60(p);
}

void func_003B2030(char *p) {
    void func_0024DA80(char *, int, int);
    int func_003B4840(char *);
    void func_003B4F60(char *);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x22;
        func_0024DA80(p + 0x1D00, 0, 0x22);
        func_0024DA80(p + 0x1DD0, 0, 0x22);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(unsigned char *)(p + 0x21C4) = 1;
        *(unsigned char *)(p + 0x21C7) = 0;
        *(unsigned char *)(p + 0x21CC) = 0;
        *(unsigned char *)(p + 0x21C9) = 4;
        func_003B61B0(p);
        func_003B6450(p);
    case 1:
        if (both_done(p) == 1) {
            *(unsigned char *)(p + 0x21C7) = 1;
            if ((unsigned char)func_003B3F70(p) == 1) {
                func_003B4840(p);
            }
        }
    }
    func_003B4F60(p);
}

void func_003B6670(char *);

void func_003B66A0(char *);

void func_003B6740(char *);

void func_003B1DC0(char *p) {
    void func_001AD140(char *);
    void func_0024DA80(char *, int, int);
    void func_003B4F60(char *);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x20;
        func_0024DA80(p + 0x1D00, 0, 0x20);
        func_0024DA80(p + 0x1DD0, 0, 0x20);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        *(unsigned char *)(p + 0x21C4) = 0;
        *(unsigned char *)(p + 0x21C7) = 0;
        *(unsigned char *)(p + 0x21C8) = 0;
        *(unsigned char *)(p + 0x21C5) = 0;
        *(unsigned char *)(p + 0x21C6) = 0;
        func_003B6670(p);
        func_003B66A0(p);
        func_003B6740(p);
    case 1:
        if (both_done(p) == 1 && *(unsigned char *)(p + 0x14D) == 3) {
            func_001AD140(p);
        }
    }
    func_003B4F60(p);
}

void func_003B6090(char *);

float func_003B5650(char *, int, int);

int func_003B5780(char *, int);

short func_003B5700(char *, int);

static inline unsigned char nz2215(char *p) {
    return *(unsigned char *)(p + 0x2215) != 0;
}

void func_003AFAD0(char *p) {
    void func_0024DA80(char *, int, int);
    void func_003B4F60(char *);
    void func_003B4B60(char *, int);
    void func_003B4D80(char *, int, int);
    void func_003B4840(char *);
    *(unsigned char *)(p + 0x21CA) = 0;
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        if (*(short *)(p + 0x21C2) != 0) {
            *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
            *(short *)(p + 0x21C2) = 0;
            func_0024DA80(p + 0x1D00, 0, 0);
            func_0024DA80(p + 0x1DD0, 0, 0);
        }
        func_003B6090(p);
        *(unsigned char *)(p + 0x21C4) = 1;
        *(unsigned char *)(p + 0x21C7) = 1;
        *(unsigned char *)(p + 0x21C8) = 1;
        *(unsigned char *)(p + 0x2219) = 1;
        *(unsigned char *)(p + 0x2218) = 1;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        if (nz2215(p) == 1) {
            *(unsigned char *)(p + 0x2215) = 0;
            if (*(int *)(p + 0x21FC) != 6) {
                *(int *)(p + 0x2200) = 6;
                *(float *)(p + 0x2208) = func_003B5650(p, *(int *)(p + 0x2200), 0);
                *(unsigned char *)(p + 0x220C) = func_003B5780(p, *(int *)(p + 0x2200));
                *(short *)(p + 0x220E) = func_003B5700(p, *(int *)(p + 0x2200));
                *(unsigned char *)(p + 0x2216) = 0;
                if (*(unsigned char *)(p + 0x220C) & 1) {
                    func_003B4B60(p, 0xE);
                } else {
                    func_003B4B60(p, 0xD);
                }
                return;
            }
        }
    case 1:
        func_003B4D80(p, 0x100, 0);
        if ((unsigned char)func_003B3F70(p) == 1) {
            func_003B4840(p);
        }
    }
    func_003B4F60(p);
}

typedef struct { float a[3]; } F3_3B5;

extern F3_3B5 D_00564690;

int func_003B5E50(char *p) {
    F3_3B5 t = D_00564690;
    int i;
    for (i = 0; i < 3; i++) {
        if (!(t.a[i] < *(float *)(p + 0x21DC))) continue;
        return i;
    }
    return 3;
}

void func_003AFA90(int p0) {
    void func_003B4B60();
    void func_003B4D80();
    func_003B4D80(p0, (0 | 65535), 1);
    func_003B4B60(p0, 2);
}

char * func_002790E0();

extern char D_005A6F50[];

extern char D_005AFDD0[];

void func_00100450();

void func_0013D6A0();

void func_002791E0();

char * func_003B7000(p) char *p; {
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
    *(char * *)(p) = D_005AFDD0;
    func_00100450(p + 64, (void *)func_002790E0, (void *)func_002791E0, 1536, 3, 135);
    *(char *)(p + 4672) = 0;
    *(int *)(p + 56) = 0;
    *(char *)(p + 4864) = 0;
    *(char *)(p + 4865) = 0;
    *(char *)(p + 4866) = -1;
    *(short *)(p + 4874) = 0;
    *(short *)(p + 4872) = 0;
    *(short *)(p + 4870) = 0;
    *(short *)(p + 4868) = 0;
    *(short *)(p + 4878) = 0;
    *(short *)(p + 4876) = 0;
    return p;
}

void func_003AFD30(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    void func_0024DA80();
    int func_003B4B60();
    void func_003B4D80();
    int func_003B4F60();
    char *v0;
    int v1;
    int v2;
    int v3;
    *(char *)(p0 + 8650) = 0;
    v0 = p0;
    *(short *)(p0 + 8396) = (*(unsigned short *)(p0 + 8396) | 2);
    v1 = *(unsigned char *)(p0 + 5);
    switch (v1) {
    default:
        return;
    case 0:
        v2 = *(short *)(v0 + 8642);
        if (v2 != 2) {
            *(short *)(v0 + 8640) = v2;
            *(short *)(v0 + 8642) = 2;
            func_0024DA80((v0 + 7424), 0, 2);
            func_0024DA80((v0 + 7632), 0, 2);
        }
        *(char *)(v0 + 5) = (*(unsigned char *)(v0 + 5) + 1);
        *(char *)(v0 + 8644) = 1;
        *(int *)(v0 + 96) = 0;
        *(int *)(v0 + 100) = 0;
        *(int *)(v0 + 104) = 0;
        *(int *)(v0 + 108) = 0;
        *(int *)(v0 + 112) = 0;
        *(int *)(v0 + 116) = 0;
        *(int *)(v0 + 120) = 0;
        *(int *)(v0 + 124) = 0;
        *(int *)(v0 + 8608) = 0;
        *(int *)(v0 + 8612) = 0;
        *(int *)(v0 + 8616) = 0;
        *(int *)(v0 + 8620) = 0;
        *(int *)(v0 + 120) = 0x3f800000;
        *(float *)(v0 + 8616) = (10.0f * *(float *)(v0 + 8416));
        /* fall through */
    case 1:
        func_003B4D80(v0, 2048, 0);
        v3 = func_003B4F60(v0);
        if (!(*(unsigned char *)(v0 + 8590) > *(unsigned char *)(v0 + 8593))) {
            *(int *)(v0 + 120) = 0xbf800000;
            *(int *)(v0 + 8616) = 0;
            v3 = func_003B4B60(v0, 2);
        }
        return;
    }
}

int func_003B5DC0(char *p0, char *p1, float f0, float f1) {
    *(float *)(p1 + 0) -= (f0 * *(float *)(p0 + 16));
    if (*(float *)(p1 + 0) <= f1) {
        *(float *)(p1 + 0) = f1;
        return 1;
    } else {
        return 0;
    }
}

int func_003B5F70(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = *(int *)(p0 + 8492);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
        *(int *)(v0 + 8492) = 0;
    }
    return v2;
}

int func_003B60F0(p0) char *p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    v1 = *(int *)(p0 + 8680);
    if (v1 != 0) {
        v3 = func_001AD140(v1);
        *(int *)(v0 + 8680) = 0;
    }
    v2 = *(int *)(v0 + 8684);
    if (v2 != 0) {
        v3 = func_001AD140(v2);
        *(int *)(v0 + 8684) = 0;
    }
    return v3;
}

int func_003B65A0(p0) char *p0; {
    int func_001AD140();
    int v0;
    int v1;
    v0 = *(int *)(p0 + 8384);
    if (v0 != 0) {
        if (v0 != 0) {
            v1 = func_001AD140(v0);
        }
    }
    return v1;
}

extern void func_003AF240();

void func_003B6DB0(char *p) { func_003AF240(p + -64); }

extern void func_003AF100();

void func_003B6DC0(char *p) { func_003AF100(p + -64); }

extern void func_003B6B70();

void func_003B6E20(char *p) { func_003B6B70(p + -64); }

void func_003B6E30(char *p) { func_003B6B70(p + -160); }

void func_003B6E40(char *p) { func_003B6B70(p + -208); }

void func_003B6E70(char *p) { func_003AF240(p + -304); }

void func_003B6E80(char *p) { func_003AF100(p + -304); }

void func_003B6EC0(char *p) { func_003B6B70(p + -304); }

void func_003B6ED0(char *p) { func_003B6B70(p + -464); }

void func_003AF080(char *p, char v) { *(char *)(p + 8651) = v; }

void func_003AF2C0(void) {}

float func_003AF2B0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 8672) = *(float *)(p1 + 44);
    return t0;
}

float func_003B6B50(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 1356);
    *(float *)(p1 + 0) = *(float *)(p0 + 1356);
    return t0;
}

float func_003B6B60(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 1400);
    *(float *)(p1 + 0) = *(float *)(p0 + 1400);
    return t0;
}

/*
 * The nine PoC functions that match, at their USA (SLUS_209.64) addresses.
 * These are not yet assigned to their original translation units; move each
 * one to its real TU once TU boundaries are known (DMC3_DECOMP_ROADMAP.md).
 * Struct layouts are offset-only placeholders: unkXXX = field at offset XXX.
 */
typedef unsigned char u8;

typedef short s16;

/* JP 0x003B59D0: short index into byte array, returns bool */
typedef struct { u8 pad[0x221A]; u8 unk221A[1]; } Obj3B5A00;

int func_003B5A00(Obj3B5A00 *p, s16 i) { return p->unk221A[i] != 0; }
