extern char D_005BE0C8[8];

extern char D_005BE118[8];

int func_0024A4E0(char *);

int func_001BE300(char *, char *, char *);

int func_001BE380(char *, char *, char *);

int func_001BE4C0(char *, char *, char *);

int func_001BE570(char *, char *, char *, int);

int func_001BE6F0(char *, char *, char *, int);

int func_001BE780(char *, char *, char *, int, int);

int func_001BE9F0(char *, char *, char *, int);

int func_001BEAA0(char *, char *, char *);

int func_001BEB70(char *, char *, char *);

int func_001BEC20(char *, char *, char *, int);

int func_001BF640(char *, char *, char *);

int func_001BF800(char *, char *, char *);

int func_001BF9F0(char *, char *, char *);

int func_001BFB50(char *, char *, char *);

int func_001BFD70(char *, char *, char *);

int func_001BFE50(char *, char *, char *);

int func_001C0040(char *, char *, char *, int);

int func_001C0140(char *, char *, char *, int);

int func_001C05A0(char *, char *, char *, int, int);

int func_001C10C0(char *, char *, char *, int);

unsigned char func_00229C60(char *o, char *a, char *b, int c) {
    unsigned char r;
    r = 0;
    switch (*(unsigned char *)(a + 0x110)) {
    case 0:
        switch (*(unsigned char *)(b + 0x110)) {
        case 0:
        case 1:
        case 5:
        case 6:
            break;
        case 2:
            r = func_001BE300(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        case 3:
            r = func_001BE380(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        case 4:
            r = func_001BE4C0(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        }
        break;
    case 1:
        switch (*(unsigned char *)(b + 0x110)) {
        case 0:
            break;
        case 1:
            if (func_0024A4E0(D_005BE118)) r = func_001BE570(D_005BE0C8, b + 0x120, a + 0x120, c);
            break;
        case 2:
            if (func_0024A4E0(D_005BE118)) r = func_001BE6F0(D_005BE0C8, a + 0x120, b + 0x120, c);
            break;
        case 3:
            if (func_0024A4E0(D_005BE118)) r = func_001BE780(D_005BE0C8, a + 0x120, b + 0x120, c, 0);
            break;
        case 4:
            if (func_0024A4E0(D_005BE118)) r = func_001BE9F0(D_005BE0C8, a + 0x120, b + 0x120, c);
            break;
        case 5:
            r = func_001BF9F0(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        case 6:
            r = func_001BEAA0(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        }
        break;
    case 2:
        switch (*(unsigned char *)(b + 0x110)) {
        case 0:
            r = func_001BE300(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        case 1:
            if (func_0024A4E0(D_005BE118)) r = func_001BE6F0(D_005BE0C8, b + 0x120, a + 0x120, c);
            break;
        case 2:
            r = func_001BEB70(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        case 3:
            if (func_0024A4E0(D_005BE118)) r = func_001BEC20(D_005BE0C8, a + 0x120, b + 0x120, c);
            break;
        case 4:
            if (func_0024A4E0(D_005BE118)) r = func_001C0040(D_005BE0C8, a + 0x120, b + 0x120, c);
            break;
        case 5:
            r = func_001BF640(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        case 6:
            r = func_001BF800(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        }
        break;
    case 3:
        switch (*(unsigned char *)(b + 0x110)) {
        case 6:
            break;
        case 0:
            r = func_001BE380(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        case 1:
            if (func_0024A4E0(D_005BE118)) r = func_001BE780(D_005BE0C8, b + 0x120, a + 0x120, c, 0);
            break;
        case 2:
            if (func_0024A4E0(D_005BE118)) r = func_001BEC20(D_005BE0C8, b + 0x120, a + 0x120, c);
            break;
        case 3:
            if (func_0024A4E0(D_005BE118)) r = func_001C0140(D_005BE0C8, a + 0x120, b + 0x120, c);
            break;
        case 4:
            if (func_0024A4E0(D_005BE118)) r = func_001C05A0(D_005BE0C8, a + 0x120, b + 0x120, c, 0);
            break;
        case 5:
            r = func_001BFB50(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        }
        break;
    case 4:
        switch (*(unsigned char *)(b + 0x110)) {
        case 6:
            break;
        case 0:
            r = func_001BE4C0(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        case 1:
            if (func_0024A4E0(D_005BE118)) r = func_001BE9F0(D_005BE0C8, b + 0x120, a + 0x120, c);
            break;
        case 2:
            if (func_0024A4E0(D_005BE118)) r = func_001C0040(D_005BE0C8, b + 0x120, a + 0x120, c);
            break;
        case 3:
            if (func_0024A4E0(D_005BE118)) r = func_001C05A0(D_005BE0C8, b + 0x120, a + 0x120, c, 0);
            break;
        case 4:
            if (func_0024A4E0(D_005BE118)) r = func_001C10C0(D_005BE0C8, a + 0x120, b + 0x120, c);
            break;
        case 5:
            r = func_001BFE50(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        }
        break;
    case 5:
        switch (*(unsigned char *)(b + 0x110)) {
        case 0:
        case 6:
            break;
        case 1:
            r = func_001BF9F0(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        case 2:
            r = func_001BF640(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        case 3:
            r = func_001BFB50(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        case 4:
            r = func_001BFE50(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        case 5:
            r = func_001BFD70(D_005BE0C8, a + 0x120, b + 0x120);
            break;
        }
        break;
    case 6:
        switch (*(unsigned char *)(b + 0x110)) {
        case 0:
        case 3:
        case 4:
        case 5:
        case 6:
            break;
        case 1:
            r = func_001BEAA0(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        case 2:
            r = func_001BF800(D_005BE0C8, b + 0x120, a + 0x120);
            break;
        }
        break;
    }
    return r;
}

void func_002293F0(char *, char *, int);

void func_00228AC0(char *p, unsigned char k) {
    void func_00105300(float *, char *);
    float b[16] __attribute__((aligned(16)));
    float a[16] __attribute__((aligned(16)));
    char *e;
    for (e = *(char **)(p + k * 4); e != 0; e = *(char **)(e + 0x304)) {
        if (*(unsigned char *)e != 2 || *(unsigned char *)(e + 4) == 0) continue;
        func_00105300(b, e + 0x20);
        func_00105300(a, e + 0x60);
        if (b[0] == a[0] && b[1] == a[1] && b[2] == a[2] && b[4] == a[4] && b[5] == a[5] && b[6] == a[6]
            && b[8] == a[8] && b[9] == a[9] && b[10] == a[10] && b[12] == a[12] && b[13] == a[13] && b[14] == a[14]) continue;
        if (*(int *)(e + 0xC) & 0x1000) func_002293F0(p, e, *(int *)(p + 8));
        if (*(int *)(e + 0xC) & 0x4000) func_002293F0(p, e, *(int *)(p + 0x20));
        if (*(int *)(e + 0xC) & 0x10000) func_002293F0(p, e, *(int *)(p + 0x38));
    }
}

unsigned short func_0022A720(char *p) {
    return (*(unsigned short *)(p + 0x13298))++;
}

typedef struct { char pad[0x50]; char f; char rest[784 - 0x51]; } E784;

char *func_00228790(E784 *t) {
    int i;
    char *e;
    for (i = 0, e = (char *)t; i < 100; i++, e += 784) {
        if (*(unsigned char *)(e + 0x50) == 0) {
            t[i].f = 1;
            return &t[i].f;
        }
    }
    return 0;
}

void func_002289C0(char *);

void func_002289F0(char *);

void func_002290E0(char *);

void func_00228970(char *p) {
    *(unsigned char *)(p + 0x1329A) = 1;
    func_002289C0(p);
    func_002289F0(p);
    func_002290E0(p);
    *(unsigned char *)(p + 0x1329A) = 0;
}

void func_0022B000(char *p) {
    void func_00104B80(char *, char *, char *);
    func_00104B80(p + 0xD0, p + 0x20, *(char **)(p + 0x104) + 0x10);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0xD0) : "memory");
    if (!*(signed char *)(p + 1)) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(p + 0xD0) : "memory");
    }
    *(unsigned char *)(p + 0x110) = 6;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x120), "r"(p + 0xD0) : "memory");
    *(float *)(p + 0x10) = *(float *)(p + 0x134) = *(float *)(*(char **)(p + 0x104) + 0x24) * *(float *)(p + 0x14);
    *(float *)(p + 0x130) = *(float *)(*(char **)(p + 0x104) + 0x20);
}

void func_0022A890(char *);

void func_002287F0(char *tbl, char *e, unsigned char slot, unsigned char mask) {
    int m;
    char **pp;
    char **pq;
    char **pr;
    if (*(unsigned char *)e == 1) {
        m = **(unsigned char **)(e + 0x100) & mask;
        if (m & 1) {
            pp = (char **)(tbl + slot * 12);
            if (*pp == 0) {
                *(int *)(e + 0x2FC) = 0;
            } else {
                *(char **)(e + 0x2FC) = *pp;
            }
            *pp = e;
            *(unsigned char *)(e + 3) = 1;
        }
        if (m & 2) {
            pq = (char **)(tbl + (slot * 3 + 1) * 4);
            if (*pq == 0) {
                *(int *)(e + 0x300) = 0;
            } else {
                *(char **)(e + 0x300) = *pq;
            }
            *pq = e;
            *(unsigned char *)(e + 3) = 0;
        }
        if (m & 4) {
            pr = (char **)(tbl + (slot * 3 + 2) * 4);
            if (*pr == 0) {
                *(int *)(e + 0x304) = 0;
            } else {
                *(char **)(e + 0x304) = *pr;
            }
            *pr = e;
            *(unsigned char *)(e + 3) = 0;
        }
        func_0022A890(e);
        *(unsigned char *)e = 2;
    }
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_00104C00(char *, char *, char *);

void func_0022B110(char *p) {
    void func_00104B80(char *, char *, char *);
    float m[16];
    func_00104C00((char *)m, *(char **)(p + 0xC0) + 0x1A0, p + 0x20);
    func_00104B80(p + 0xD0, (char *)m, *(char **)(p + 0x104) + 0x10);
    QCOPY(p + 0x120, p + 0xD0);
}

void func_00132580(float *, char *, float);

#define VADD(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

void func_0022B330(char *p) {
    void func_00104B80(char *, char *, char *);
    float m[16];
    func_00104C00((char *)m, *(char **)(p + 0xC0) + 0x1A0, p + 0x20);
    if (**(unsigned char **)(p + 0x104) == 4) {
        func_00104B80(p + 0x120, (char *)m, *(char **)(p + 0x104) + 0x10);
        func_00104B80(p + 0x130, (char *)m, *(char **)(p + 0x104) + 0x20);
        VADD(p + 0xD0, p + 0x120, p + 0x130);
        func_00132580((float *)(p + 0xD0), p + 0xD0, 0.5f);
    } else {
        func_00104B80(p + 0xD0, (char *)m, *(char **)(p + 0x104) + 0x10);
        QCOPY(p + 0x130, p + 0xD0);
    }
}

float func_00132470(char *, char *);

void func_0022A9D0(char *p) {
    void func_00104B80(char *, char *, char *);
    float v[4];
    func_00104B80(p + 0x120, p + 0x20, *(char **)(p + 0x104) + 0x10);
    func_00104B80(p + 0x130, p + 0x20, *(char **)(p + 0x104) + 0x20);
    *(unsigned char *)(p + 0x110) = 1;
    VADD(v, p + 0x120, p + 0x130);
    *(float *)(p + 0xD0) = v[0] / 2.0f;
    *(float *)(p + 0xD4) = v[1] / 2.0f;
    *(float *)(p + 0xD8) = v[2] / 2.0f;
    *(float *)(p + 0xDC) = 1.0f;
    *(float *)(p + 0x10) = func_00132470(p + 0x120, p + 0x130);
}

int func_00229520(char *u, char *a, char *b, unsigned char k1, unsigned char k2) {
    int m;
    if (!(k1 == 14 || k2 == 14)) return 1;
    if (k1 == 14 && k2 == 14) return 1;
    if (k2 == 14) {
        switch (k1) {
        case 2:
            m = 0x40;
            break;
        case 5:
            m = 2;
            break;
        case 8:
            m = 0x10;
            break;
        case 11:
            m = 0x20;
            break;
        default:
            m = 0;
            break;
        }
        return !(m & (unsigned short)(*(unsigned char *)(b + 0xC7) << 8 | *(unsigned char *)(b + 0xC6)));
    }
    if (k1 == 14) {
        switch (k2) {
        case 2:
            m = 0x40;
            break;
        case 5:
            m = 2;
            break;
        case 8:
            m = 0x10;
            break;
        case 11:
            m = 0x20;
            break;
        default:
            m = 0;
            break;
        }
        return !(m & (unsigned short)(*(unsigned char *)(a + 0xC7) << 8 | *(unsigned char *)(a + 0xC6)));
    }
    return 1;
}

void func_0022AAA0(char *p) {
    void func_00105300(char *, char *);
    void func_00104B80(char *, char *, char *);
    func_00104B80(p + 0xD0, p + 0x20, *(char **)(p + 0x104) + 0x10);
    QCOPY(p + 0xF0, p + 0xD0);
    if (!*(signed char *)(p + 1)) {
        *(signed char *)(p + 0x110) = **(signed char **)(p + 0x104);
        QCOPY(p + 0xE0, p + 0xD0);
        func_00105300(p + 0x60, p + 0x20);
    }
    if (*(unsigned char *)(p + 3) != 0 && !(func_00132470(p + 0xD0, p + 0xE0) <= 2.0f * *(float *)(*(char **)(p + 0x104) + 0x20))) {
        if (*(unsigned char *)(p + 0x110) == 4) {
            QCOPY(p + 0x120, p + 0x130);
        } else {
            QCOPY(p + 0x120, p + 0xE0);
        }
        QCOPY(p + 0x130, p + 0xD0);
        *(float *)(p + 0x10) = *(float *)(p + 0x140) + func_00132470(p + 0x120, p + 0x130);
        *(unsigned char *)(p + 0x110) = 4;
        *(float *)(p + 0x140) = *(float *)(*(char **)(p + 0x104) + 0x20) * *(float *)(p + 0x14);
    } else {
        *(unsigned char *)(p + 0x110) = 2;
        QCOPY(p + 0x120, p + 0xD0);
        *(float *)(p + 0x10) = *(float *)(p + 0x130) = *(float *)(*(char **)(p + 0x104) + 0x20) * *(float *)(p + 0x14);
    }
}

extern char D_01CAFF0C[];

int func_001FFF40(char *, char *, int);

unsigned char func_00200150(char *, char *, char *);

unsigned char func_001FFAC0(char *, char *, int);

unsigned char func_001FF7B0(char *, char *, int);

void func_0022B3F0(char *, float *, int);

void func_0028C940(char *);

void func_00229190(char *p, unsigned char k, char *b, int m) {
    float tmp[4] __attribute__((aligned(16)));
    switch (k) {
    case 2: m = 0x40; break;
    case 5: m = 2; break;
    case 8: m = 0x10; break;
    case 11: m = 0x20; break;
    default: m = 0; break;
    }
    if (*(unsigned char *)b != 2) return;
    switch (*(unsigned char *)(b + 0x110)) {
    case 2:
        if (*(unsigned char *)(b + 5) == 0) {
            if (func_001FFF40(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, b + 0x120, m))
                *(unsigned int *)(b + 8) |= 0x20000;
        } else {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(tmp), "r"(b + 0x120) : "memory");
            if (func_00200150(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, b + 0x120, b + 0xE0) == 1) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(b + 0x120), "r"(tmp) : "memory");
                func_0022B3F0(b, tmp, 0);
                func_0022B3F0(b, tmp, 1);
                func_0028C940(*(char **)(b + 0xC0));
                *(unsigned int *)(b + 8) |= 0x20000;
            }
        }
        break;
    case 1:
        if (*(unsigned char *)(b + 5) == 0) {
            if (func_001FFAC0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, b + 0x120, m) == 1)
                *(unsigned int *)(b + 8) |= 0x20000;
        } else {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(tmp), "r"(b + 0x120) : "memory");
            if (func_001FF7B0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, b + 0x120, m) == 1) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(tmp), "r"(b + 0x120), "r"(tmp) : "memory");
                func_0022B3F0(b, tmp, 0);
                func_0022B3F0(b, tmp, 1);
                func_0028C940(*(char **)(b + 0xC0));
                *(unsigned int *)(b + 8) |= 0x20000;
            }
        }
        break;
    case 0: case 3: case 4: case 5: case 6:
        break;
    }
}

float func_001324E0(char *);

void func_00105760(char *, char *, float);

void func_00105668(char *, char *, float);

void func_00105578(char *, char *, float);

extern char D_00540790[];

extern char D_00540810[];

void func_0022AC00(char *p) {
    void func_00105300(char *, char *);
    void func_00104B80(char *, char *, char *);
    void func_00131650(char *, char *);
    void func_00132600(char *, char *, char *);
    float m[16] __attribute__((aligned(16)));
    float v40[4] __attribute__((aligned(16)));
    float v30[4] __attribute__((aligned(16)));
    int i;
    v40[0] = *(float *)(*(char **)(p + 0x104) + 0x10);
    v40[1] = *(float *)(*(char **)(p + 0x104) + 0x14);
    v40[2] = *(float *)(*(char **)(p + 0x104) + 0x18);
    v40[3] = 1.0f;
    func_00104B80(p + 0xD0, p + 0x20, (char *)v40);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xF0), "r"(p + 0xD0) : "memory");
    if (!*(signed char *)(p + 1)) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0xE0), "r"(p + 0xD0) : "memory");
        func_00105300(p + 0x60, p + 0x20);
        v30[0] = *(float *)(*(char **)(p + 0x104) + 0x28);
        v30[1] = *(float *)(*(char **)(p + 0x104) + 0x2C);
        v30[2] = *(float *)(*(char **)(p + 0x104) + 0x30);
        v30[3] = 1.0f;
        *(float *)(p + 0x10) = func_001324E0((char *)v30);
    }
    *(unsigned char *)(p + 0x110) = 3;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    m[0] = *(float *)(*(char **)(p + 0x104) + 0x28);
    m[5] = *(float *)(*(char **)(p + 0x104) + 0x2C);
    m[10] = *(float *)(*(char **)(p + 0x104) + 0x30);
    func_00105668((char *)m, (char *)m, 6.283185f * (*(float *)(*(char **)(p + 0x104) + 0x1C) / 360.0f));
    func_00105760((char *)m, (char *)m, 6.283185f * (*(float *)(*(char **)(p + 0x104) + 0x20) / 360.0f));
    func_00105578((char *)m, (char *)m, 6.283185f * (*(float *)(*(char **)(p + 0x104) + 0x24) / 360.0f));
    m[12] = *(float *)(*(char **)(p + 0x104) + 0x10);
    m[13] = *(float *)(*(char **)(p + 0x104) + 0x14);
    m[14] = *(float *)(*(char **)(p + 0x104) + 0x18);
    func_00104C00((char *)m, p + 0x20, (char *)m);
    for (i = 0; i < 8; i++) func_00104B80(p + i * 16 + 0x120, (char *)m, D_00540790 + i * 16);
    for (i = 0; i < 6; i++) {
        func_00132600(p + i * 16 + 0x1A0, (char *)m, D_00540810 + i * 16);
        func_00131650(p + i * 16 + 0x1A0, p + i * 16 + 0x1A0);
    }
}

void func_0022B110(char *p);

void func_0022B330(char *p);

void func_0022B170(char *);

void func_0022B0A0(char *p) {
    switch (*(unsigned char *)(p + 0x110)) {
    case 0: case 1:
        break;
    case 2:
        func_0022B110(p);
        break;
    case 3:
        func_0022B170(p);
        break;
    case 4:
        func_0022B330(p);
        break;
    case 5: case 6:
        break;
    }
}

void func_0022A7E0();

void func_0022A870();

void func_0022A7B0(int p0) {
    func_0022A7E0();
    func_0022A870(p0);
}

void func_0022A990(char *p0) {
    void func_00104B80();
    int t0;
    int t1;
    t0 = (*(int *)(p0 + 260) + 16);
    t1 = *(int *)(p0 + 260);
    func_00104B80((p0 + 288), (p0 + 32), (*(int *)(p0 + 260) + 16));
    *(char *)(p0 + 272) = 0;
}

void func_0022AF70(char *p0) {
    void func_00104B80();
    void func_00131650();
    void func_00132600();
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t0 = (*(int *)(p0 + 260) + 16);
    t1 = *(int *)(p0 + 260);
    func_00104B80((p0 + 288), (p0 + 32), (*(int *)(p0 + 260) + 16));
    t2 = (*(int *)(p0 + 260) + 32);
    t3 = *(int *)(p0 + 260);
    func_00104B80((p0 + 304), (p0 + 32), (*(int *)(p0 + 260) + 32));
    t4 = (*(int *)(p0 + 260) + 48);
    t5 = *(int *)(p0 + 260);
    func_00104B80((p0 + 320), (p0 + 32), (*(int *)(p0 + 260) + 48));
    t6 = (*(int *)(p0 + 260) + 64);
    t7 = *(int *)(p0 + 260);
    func_00132600((p0 + 336), (p0 + 32), (*(int *)(p0 + 260) + 64));
    func_00131650((p0 + 336), (p0 + 336));
    *(char *)(p0 + 272) = 5;
}

void func_001003E0();

void func_00100580();

int func_0022A750();

int func_002286C0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_001003E0((v0 + 80), (char *)func_0022A750, 784, 100);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}

void func_00228730(p0) int p0; {
    *(short *)((char *)p0 + 78488) = 0;
}

int func_00228740(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = 0;
    *(int *)((p0 + ((p1 & 255) << 2)) + 0) = 0;
    v1 = 1;
    v2 = 2;
    do {
        if (*(unsigned char *)(p0 + 80) == v2) {
            *(char *)(p0 + 80) = v1;
        }
        v0 = (v0 + 1);
        p0 = (p0 + 784);
    } while ((v0 < 100));
}

int func_00228740();

int func_00228920(p0) int p0; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = 0;
    do {
        v2 = func_00228740(v0, (v1 & 255));
        v1 = (v1 + 1);
    } while ((v1 < 18));
    return v2;
}

void func_0022B5A0(p0) char *p0; {
    *(int *)(p0 + 20) = 0;
    *(int *)(p0 + 24) = 0;
    *(int *)(p0 + 28) = 0;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 48) = 0;
    *(int *)(p0 + 36) = 0;
    *(int *)(p0 + 56) = 0x3e99999a;
    *(int *)(p0 + 60) = 0x3e99999a;
    *(int *)(p0 + 64) = 0x42480000;
    *(int *)(p0 + 68) = 0x3d4ccccd;
    *(int *)(p0 + 128) = 0;
    *(int *)(p0 + 132) = 0xbe4ccccd;
    *(int *)(p0 + 136) = 0;
    *(int *)(p0 + 96) = 0;
    *(int *)(p0 + 100) = 0;
    *(int *)(p0 + 104) = 0;
    *(int *)(p0 + 112) = 0;
    *(int *)(p0 + 116) = 0;
    *(int *)(p0 + 120) = 0;
    *(int *)(p0 + 84) = 0x3f7d70a4;
    *(int *)(p0 + 80) = 0xc97423f0;
    *(int *)(p0 + 40) = 0;
    *(int *)(p0 + 88) = 0;
    *(int *)(p0 + 52) = 0;
    *(int *)(p0 + 176) = 0x3f800000;
    *(int *)(p0 + 180) = 1;
}

void *func_0022A740(void *p) { return p; }
