extern char D_01DFABA0[];

void func_003305E0(char *, int, int, char *, int, int, int);

#define VMOVXYZ30(d, s) __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_0043FD00(char *p, signed char k, int v) {
    void func_0043EEF0(char *, int);
    float a[4];
    switch (k) {
    case 0:
        *(int *)(p + 0x7DC) = *(int *)(p + 0x7DC) + v;
        break;
    case 10:
    case 11:
    case 12:
        *(int *)(p + 0x7E0) = *(int *)(p + 0x7E0) + v;
        break;
    }
    func_0043EEF0(p, 1);
    VMOVXYZ30(a, *(char **)(*(char **)(p + 0x1B0) + 0x104));
    func_003305E0(D_01DFABA0, 8, 0x82, (char *)a, 0x2D, 0, 0);
}

char *func_00279290(char *);

void func_001A1E70(char *, int);

void func_001A2000(char *, int);

void func_0043EB20(char *p, unsigned char k) {
    if (k == 1) {
        if (*(signed char *)(p + 0x7C1) == 0) {
            func_001A2000(func_00279290(p + 0x1C0), 0);
        }
    } else if (*(signed char *)(p + 0x7C1) == 0) {
        func_001A1E70(func_00279290(p + 0x1C0), 0);
    }
}

void func_001A29A0(char *);

void func_0043F070(char *p) {
    void func_0043EEF0(char *, int);
    switch (*(unsigned char *)(p + 0x7CB)) {
    case 0:
    case 1:
    case 2:
        func_0043EEF0(p, 3);
        break;
    case 3:
        *(float *)(p + 0x7EC) = *(float *)(p + 0x7EC) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x7EC) < 0.0f) {
            func_0043EEF0(p, 4);
        }
        break;
    case 4:
        return;
    }
    func_001A29A0(func_00279290(p + 0x1C0));
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

extern float D_00575A00[];

extern float D_00575A04[];

extern float D_00575A08[];

extern float D_00575A0C[];

extern float D_00575A10[];

extern float D_00575A14[];

extern float D_00575A18[];

extern float D_00575A1C[];

extern float D_00575A20[];

extern float D_00575A24[];

extern float D_00575A28[];

extern float D_00575A2C[];

extern float D_00575A30[];

extern float D_00575A34[];

extern float D_00575A38[];

extern float D_00575A3C[];

void func_00440230(char *p) {
    int i;
    char *e;
    func_0028C200(p + 0x9E0, p + 0xC00, p + 0xC10, 4, 0, p, 0);
    func_0028C8E0(p + 0x9E0, 0);
    func_0028C910(p + 0x9E0);
    *(unsigned char *)(p + 0x9E3) = 0xD;
    *(unsigned char *)(p + 0xC00) = 6;
    *(unsigned char *)(p + 0xC01) = 0;
    *(short *)(p + 0xC02) = 0;
    *(unsigned char *)(p + 0xC04) = 6;
    *(unsigned char *)(p + 0xC05) = 0;
    *(short *)(p + 0xC06) = 1;
    if (*(signed char *)(p + 0x7C1) == 0) {
        *(unsigned char *)(p + 0xC10) = 2;
        *(float *)(p + 0xC20) = D_00575A00[0];
        *(float *)(p + 0xC24) = D_00575A04[0];
        *(float *)(p + 0xC28) = D_00575A08[0];
        *(float *)(p + 0xC2C) = 1.0f;
        *(float *)(p + 0xC30) = D_00575A0C[0];
        *(unsigned char *)(p + 0xC60) = 2;
        *(float *)(p + 0xC70) = D_00575A10[0];
        *(float *)(p + 0xC74) = D_00575A14[0];
        *(float *)(p + 0xC78) = D_00575A18[0];
        *(float *)(p + 0xC7C) = 1.0f;
        *(float *)(p + 0xC80) = D_00575A1C[0];
    } else {
        *(unsigned char *)(p + 0xC10) = 2;
        *(float *)(p + 0xC20) = D_00575A20[0];
        *(float *)(p + 0xC24) = D_00575A24[0];
        *(float *)(p + 0xC28) = D_00575A28[0];
        *(float *)(p + 0xC2C) = 1.0f;
        *(float *)(p + 0xC30) = D_00575A2C[0];
        *(unsigned char *)(p + 0xC60) = 2;
        *(float *)(p + 0xC70) = D_00575A30[0];
        *(float *)(p + 0xC74) = D_00575A34[0];
        *(float *)(p + 0xC78) = D_00575A38[0];
        *(float *)(p + 0xC7C) = 1.0f;
        *(float *)(p + 0xC80) = D_00575A3C[0];
    }
    *(int *)(p + 0xAB8) = 0x330C3;
    func_0028C3A0(p + 0x9E0, 0, -1, p + 0x8D0);
    func_0028C3A0(p + 0x9E0, 1, -1, p + 0x950);
    for (i = 0; i < 2; i++, p += 4) {
        e = *(char **)(p + 0xA5C);
        if (e != 0) {
            *(int *)(e + 0xC) = *(int *)(e + 0xC) & 0xFFFCFFFF;
            e[0xC4] = 0;
            e[0xC5] = 0;
            e[0xC6] = 8;
            e[0xC7] = 0x18;
        }
    }
}

void func_00440130(char *);

void func_004400F0(char *);

void func_004401B0(char *);

void func_0043F3C0(char *p) {
    if (*(unsigned char *)(p + 0x7C9)) {
        func_00440130(p);
        *(unsigned char *)(p + 0x7C9) = 0;
        *(unsigned char *)(p + 0x7C8) = 0;
        *(unsigned char *)(p + 0x7CA) = 0;
    } else if (*(unsigned char *)(p + 0x7C8)) {
        switch (*(unsigned char *)(p + 0x7C0)) {
        case 0: case 1: case 5:
            func_004400F0(p);
            *(unsigned char *)(p + 0x7C8) = 0;
            break;
        case 2: case 3: case 4:
            break;
        }
    } else if (*(unsigned char *)(p + 0x7CA)) {
        switch (*(unsigned char *)(p + 0x7C0)) {
        case 0: case 5:
            func_004401B0(p);
            *(unsigned char *)(p + 0x7CA) = 0;
            break;
        case 1: case 2: case 3: case 4:
            break;
        }
    }
}

extern unsigned char D_01CAFF3D[];

extern float D_00575A5C[];

extern float D_00575ABC[];

void func_00440700(char *p, float *a, int b) {
    void func_0043EEF0(char *p, unsigned char k);
    float t;
    if (a && b && *(unsigned char *)(p + 0x7C5)) {
        switch (*(unsigned char *)(p + 0x7C0)) {
        case 2: case 3:
            return;
        case 0: case 1: case 4: case 5:
            if (*(signed char *)(p + 0x7C1) == 0) t = a[1] * (D_00575A5C[0] / 100.0f);
            else t = a[1] * (D_00575ABC[0] / 100.0f);
            func_0043EEF0(p, 0);
            *(float *)(p + 0x7F4) = *(float *)(p + 0x7F4) - t;
            if (*(float *)(p + 0x7F4) <= 0.0f || D_01CAFF3D[0]) {
                *(unsigned char *)(p + 0x7C9) = 1;
                *(float *)(p + 0x7F4) = 1.0f;
            } else {
                *(unsigned char *)(p + 0x7C8) = 1;
            }
            break;
        }
    }
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005AADD0[];

extern char D_005B4510[];

extern char D_005B4534[];

extern char D_005B45B4[];

extern char D_005B4648[];

extern char D_005B4714[];

void func_001003E0();

void func_0013D240();

void func_0024FEA0();

void func_002791E0();

void func_0027BBF0();

void func_0028C1A0();

char *func_00440870(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005B4510;
        *(char * *)(p + 64) = D_005B4534;
        *(char * *)(p + 160) = D_005B45B4;
        *(char * *)(p + 208) = D_005B4648;
        *(char * *)(p + 304) = D_005B4714;
        func_0028C1A0(p + 2528, -1);
        func_001003E0(p + 2064, (void *)func_0027BBF0, 128, 3);
        func_002791E0(p + 448, -1);
        func_001003E0(p + 320, (void *)func_0013D240, 16, 6);
        if (p + 304 != 0) {
            *(char * *)(p + 304) = D_005AADD0;
        }
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

extern char D_005BC348;

extern int D_005BC34C;

extern char D_005BE138;

extern int D_005BE13C;

extern int D_005BE140;

extern char D_01CAFF0C[];

int func_001AD140();

int func_002F2D30();

int func_003AD5C0();

int func_0043E7B0(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    if (*(signed char *)(p0 + 1985) == 1) {
        D_005BE138 = 0;
        D_005BC348 = -1;
        D_005BE13C = 0;
        D_005BC34C = 0x3f800000;
        D_005BE140 = 0;
    }
    v2 = func_003AD5C0((v0 + 2048));
    v1 = *(int *)(v0 + 2048);
    if (v1 != 0) {
        v2 = func_001AD140(v1);
    }
    v3 = *(int *)(*(char **)D_01CAFF0C + 32);
    v4 = (int)v0;
    if (v3 != 0) {
        v2 = func_002F2D30(v3, v4);
    }
    return v2;
}

extern char D_00575A6C[];

extern char D_00575ACC[];

void func_0043EAF0(p0) char *p0; {
    int v0;
    if (*(signed char *)(p0 + 1985) == 0) {
        *(float *)(p0 + 2036) = *(float *)D_00575A6C;
    } else {
        *(float *)(p0 + 2036) = *(float *)D_00575ACC;
    }
}

int func_0043FA30();

int func_00440090(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if ((p1 & 255) == 1) {
        *(char *)(v0 + 1984) = 0;
        v2 = func_0043FA30(p0, 0);
        *(char *)(v0 + 4) = 0;
    } else {
        v1 = 0;
        if (*(unsigned char *)(v0 + 1984) != 0) {
            *(char *)(v0 + 1984) = 0;
            v2 = func_0043FA30(p0, v1);
            *(char *)(v0 + 4) = 0;
        }
    }
    return v2;
}

int func_00440170(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 3;
    v1 = p0;
    if (*(unsigned char *)(p0 + 1984) != v0) {
        *(char *)(v1 + 1984) = v0;
        v2 = func_0043FA30(p0, v0);
        *(char *)(v1 + 4) = 0;
    }
    return v2;
}

int func_004401F0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 5;
    v1 = p0;
    if (*(unsigned char *)(p0 + 1984) != v0) {
        *(char *)(v1 + 1984) = v0;
        v2 = func_0043FA30(p0, 6);
        *(char *)(v1 + 4) = 0;
    }
    return v2;
}

void func_00440820(p0, p1) char *p0; int p1; {
    *(char *)(p0 + 1987) = 1;
    switch (p1) {
    case 0:
        break;
    case 1:
        *(char *)(p0 + 1990) = 1;
        break;
    case 2:
        *(char *)(p0 + 1991) = 1;
        break;
    }
}

extern void func_0043E8C0();

void func_00440970(char *p) { func_0043E8C0(p + -64); }

extern void func_00440430();

void func_00440990(char *p) { func_00440430(p + -64); }

extern void func_00440860();

void func_004409D0(char *p) { func_00440860(p + -304); }
