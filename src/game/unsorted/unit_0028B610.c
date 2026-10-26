/* Updates each of the four attached items. */
typedef struct Obj28B {
    char pad[0xE8];
    int item[4];
} Obj28B;

void func_0028BCE0(Obj28B *, int, int, float);

void func_0028BC60(Obj28B *p, int a, float f) {
    unsigned int i;
    for (i = 0; i < 4; i++) {
        if (p->item[i]) {
            func_0028BCE0(p, a, p->item[i], f);
        }
    }
}

int func_0028BFE0(char *p) {
    void func_002242C0(char *);
    char *o = *(char **)(p + 0xE0);
    if (*(unsigned char *)(o + 0x24F1) == 1) return 1;
    func_002242C0(o);
    return 0;
}

int func_0028B8E0(char *p) {
    int func_002242C0(char *);
    unsigned int i;
    char *q;
    *(unsigned char *)(p + 0xD1) = 0;
    if ((unsigned char)func_002242C0(*(char **)(p + 0xE0)) == 1 && *(unsigned char *)(*(char **)(p + 0xE0) + 0x3C79) == 0) {
        return 0;
    }
    for (i = 0, q = *(char **)(p + 0xE0); i < 5; i++, q++) {
        if (*(signed char *)(q + 0x3D4C) == *(signed char *)(p + 0xD2)) {
            return 1;
        }
    }
    return 0;
}

typedef struct { int w[4]; } __attribute__((aligned(16))) Q16;

void func_00105230(char *, char *, float *);

void func_001318E0(char *, char *, float *);

void func_00131760(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern Q16 D_00549A10;

void func_0028BA90(char *p, char *m1, char *m2, unsigned char k) {
    float t[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    Q16 sc;
    char *e;
    sc = D_00549A10;
    e = (*(char ***)(p + 0xE4))[k];
    *(signed char *)(p + 0xDA) = *(signed char *)(e + 0);
    *(unsigned char *)(p + 0xDB) = *(unsigned char *)(e + 1);
    *(unsigned char *)(p + 0xD6) = *(unsigned char *)(e + 2);
    *(unsigned char *)(p + 0xD4) = *(unsigned char *)(e + 3);
    t[0] = *(float *)(e + 0x10);
    t[1] = *(float *)(e + 0x14);
    t[2] = *(float *)(e + 0x18);
    t[3] = 1.0f;
    r[0] = *(float *)(e + 0x20);
    r[1] = *(float *)(e + 0x24);
    r[2] = *(float *)(e + 0x28);
    r[3] = 1.0f;
    UNIT(m1);
    func_00131760(m1, m1, r);
    func_00105230(m1, m1, t);
    func_001318E0(m1, m1, (float *)sc.w);
    *(unsigned char *)(p + 0xD7) = *(unsigned char *)(e + 0x30);
    *(unsigned char *)(p + 0xD5) = *(unsigned char *)(e + 0x31);
    t[0] = *(float *)(e + 0x40);
    t[1] = *(float *)(e + 0x44);
    t[2] = *(float *)(e + 0x48);
    t[3] = 1.0f;
    r[0] = *(float *)(e + 0x50);
    r[1] = *(float *)(e + 0x54);
    r[2] = *(float *)(e + 0x58);
    r[3] = 1.0f;
    UNIT(m2);
    func_00131760(m2, m2, r);
    func_00105230(m2, m2, t);
    func_001318E0(m2, m2, (float *)sc.w);
}

char *func_00279290(char *);

extern char D_005BE098[4];

void func_00195E20(char *, char *);

void func_001A29A0(char *);

void func_0028BF50(char *p) {
    unsigned int i;
    if (*(unsigned char *)(*(char **)(p + 0xE0) + 0xD6) != 0) {
        for (i = 0; i < 4; i++) {
            if (*(char **)(p + i * 4 + 0xE8) != 0) {
                func_001A29A0(func_00279290(*(char **)(p + i * 4 + 0xE8)));
            }
        }
        *(unsigned char *)(p + 0xD1) = 1;
        func_00195E20(D_005BE098, p);
    }
}

void func_001A5D00(char *);

void func_001A5C30(char *);

void func_0028BE90(char *p, unsigned char k) {
    unsigned int i;
    switch (k) {
    case 1:
    default:
        for (i = 0; i < 4; i++) {
            if (*(char **)(p + i * 4 + 0xE8) != 0) {
                func_001A5C30(func_00279290(*(char **)(p + i * 4 + 0xE8)));
            }
        }
        break;
    case 2:
        for (i = 0; i < 4; i++) {
            if (*(char **)(p + i * 4 + 0xE8) != 0) {
                func_001A5D00(func_00279290(*(char **)(p + i * 4 + 0xE8)));
            }
        }
        break;
    }
}

extern unsigned char D_00545598[];

extern unsigned char D_005455A8[];

int func_0028B620(char *p) {
    char *e = *(char **)(p + 0xE0);
    signed char k = *(signed char *)(p + 0xD2);
    int v = (*(unsigned short *)(e + 0x24C6) >> 8) & 0xFF;
    if (v != D_00545598[k]) goto a;
    return 1;
a:
    if (v != D_005455A8[k]) goto b;
    return 1;
b:
    return *(signed char *)(e + 0x3D49) == k;
}

int func_0028BC30(void) { return 1; }

void func_0028BC40(void) {}

void func_0028BC50(void) {}

int func_0028BF40(void) { return 0; }

void func_0028B610(char *p0) {
    *(char *)(p0 + 208) = 0;
    *(char *)(p0 + 213) = 0;
    *(char *)(p0 + 212) = 0;
}
