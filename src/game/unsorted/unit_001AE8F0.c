/* Resets every 303-entry record in state 4 and notifies its sub-object. */
typedef struct Ent32 {
    char a;
    unsigned char state;
    char pad[14];
    char sub[16];
} Ent32;

void func_001AEE60(void) {
    extern Ent32 D_00666750[303];
    void func_0013D5D0(void *);
    int i;
    for (i = 0; i < 303; i++) {
        if (D_00666750[i].state == 4) {
            D_00666750[i].state = 0;
            func_0013D5D0(D_00666750[i].sub);
        }
    }
}

void func_001AF7A0(char *p, unsigned char a, unsigned char b) {
    int func_001AEA60(char *, int, unsigned short);
    void func_001AF080(char *, int);
    int r = func_001AEA60(p, 1, a * 34 + b);
    if (r != 0) {
        func_001AF080(p, r);
    }
}

void func_001AF980(char *p, unsigned char a, signed char b) {
    int func_001AEA60(char *, int, unsigned short);
    void func_001AF080(char *, int);
    int r = func_001AEA60(p, 2, a * 15 + b);
    if (r != 0) {
        func_001AF080(p, r);
    }
}

void func_001AFB30(char *p, unsigned char a, signed char b) {
    int func_001AEA60(char *, int, unsigned short);
    void func_001AF080(char *, int);
    int r = func_001AEA60(p, 3, a * 6 + b);
    if (r != 0) {
        func_001AF080(p, r);
    }
}

void func_001AF640(char *p, unsigned char a, unsigned char b) {
    int func_001AEA60(char *, int, unsigned short);
    void func_001AF080(char *, int);
    int h = func_001AEA60(p, 0, (unsigned short)(a + b));
    if (h != 0) {
        func_001AF080(p, h);
    }
}

int func_0013D2A0(char *, char *, int);

int func_001AEBC0(char *p, char *q, int n) {
    char *func_001B0FD0(char *, int, int);
    int r;
    if (*(unsigned char *)(p + 0x270C) == 1 && *(int *)(p + 0x26E4) != 0) {
        r = func_0013D2A0(q + 0x10, p + 0x26E0, n);
    } else {
        r = (int)func_001B0FD0(q + 0x10, n, 0);
    }
    if (r == 0) {
        return 0;
    }
    *(int *)(q + 0xC) = r;
    return 1;
}

extern char D_005BBA18[4];

extern int D_00540278[];

void func_001AFD60(char *p, signed char k, unsigned char m) {
    extern char D_00666750[];
    int func_001AF3F0(char *, void *, int, int);
    *(int *)(p + 0xC) = 0;
    *(int *)(p + 0x24) = 0;
    if (k == 0 && m == 1) {
        *(int *)(p + 0xC) = func_001AF3F0(D_00666750, D_005BBA18, 0, 0);
    } else if (k == 0 && m == 4) {
        *(int *)(p + 0xC) = func_001AF3F0(D_00666750, D_005BBA18, 0, 0);
    } else {
        *(int *)(p + 0xC) = func_001AF3F0(D_00666750, &D_00540278[k], 0, 0);
    }
}

extern unsigned short D_0053FF90[];

extern unsigned short D_0053FF78[];

void func_001AEC80(char *p, unsigned char k) {
    void func_0013D5D0(char *);
    unsigned int i;
    char *e = p + D_0053FF90[k] * 32;
    for (i = 0; i < D_0053FF78[k]; i++) {
        func_0013D5D0(e + 0x10);
        e[1] = 0;
        e += 0x20;
    }
}

void func_001AF0B0(char *, char *);

void func_001AE9B0(char *p) {
    int i;
    char *e;
    for (i = 0; i < 303; i++) {
        e = p + i * 32;
        switch (*(unsigned char *)(e + 1)) {
        case 0:
        case 1:
            break;
        case 2:
            func_001AF0B0(p, e);
            if (*(void (**)(char *))(e + 4) != 0) {
                (*(void (**)(char *))(e + 4))(e);
            }
            *(unsigned char *)(e + 1) = 3;
            break;
        case 3:
        case 4:
            break;
        }
    }
}

int func_001AFCA0(char *p, int k, int b) {
    void func_001AF080(char *, int);
    char *func_001AEAA0(char *, int, int);
    int func_001AEF60(char *, char *, int, int, int);
    int r;
    char *e = func_001AEAA0(p, 6, (unsigned char)k);
    if (*(unsigned char *)(e + 1) == 3) {
        r = 1;
    } else {
        *(short *)(e + 2) = (unsigned char)k;
        if ((unsigned char)func_001AEF60(p, e, b, 0, 0) == 0) {
            func_001AF080(p, (int)e);
            r = 0;
        } else {
            r = 1;
        }
    }
    return r;
}

extern int *D_00540168[];

unsigned char func_001AF800(char *p, unsigned char kind, signed char k, unsigned char mode) {
    char *func_001AEAA0(char *, int, int);
    int func_001AEF60(char *, char *, int, int, int);
    unsigned char r = 1;
    char *e;
    if (k == -1) return 1;
    e = func_001AEAA0(p, 2, (unsigned short)(k + kind * 15));
    if (*(unsigned char *)(e + 1) == 3) return 1;
    *(short *)(e + 2) = k;
    *(unsigned char *)(p + 0x270C) = 1;
    switch (mode) {
    case 1:
        if (k == 0) k = 15;
        if (k == 14) *(unsigned char *)(p + 0x270C) = 0;
        break;
    case 2:
        if (k == 0) k = 16;
        break;
    }
    if ((unsigned char)func_001AEF60(p, e, (int)&D_00540168[kind][k], 0, 0) == 0) r = 0;
    *(unsigned char *)(p + 0x270C) = 0;
    return r;
}

int func_001AEB60(p0) char *p0; {
    int v4;
    int v3;
    int v0;
    unsigned char v2;
    int v1;
    int tmp0;
    v4 = 0;
    v0 = 3;
    do {
        v1 = *(unsigned char *)(p0 + 1);
        v2 = 1;
        if (v1 != 0) {
            if (v1 != v0) {
                v2 = 0;
            }
        }
        tmp0 = (v2 & 255);
        v3 = 0;
        if (tmp0 == 0) {
            return v3;
        }
        v4 = (v4 + 1);
        p0 = (p0 + 32);
    } while (((unsigned int)v4 < (unsigned int)303));
    v3 = 1;
    return v3;
}

int func_001AEC30(p0, p1) int p0; int p1; {
    int func_0013D5D0();
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p1;
    tmp0 = func_0013D5D0((v0 + 16));
    if ((tmp0 & 255) == 0) {
        v1 = 0;
    } else {
        *(char *)(v0 + 1) = 0;
        v1 = 1;
    }
    return v1;
}

int func_001AED10(p0) int p0; {
    int func_0013D5D0();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = 0;
    do {
        v1 = func_0013D5D0((v0 + 16));
        v2 = (v2 + 1);
        *(char *)(v0 + 1) = 0;
        v0 = (v0 + 32);
    } while (((unsigned int)v2 < (unsigned int)303));
    return v1;
}

extern char D_00654430[];

void func_00198320();

void func_001AED60(p0, p1) int p0; char *p1; {
    func_00198320(D_00654430, 0, *(unsigned short *)(*(char **)(p1 + 8) + 2));
}

void func_001980B0();

int func_001AF040(p0, p1, p2) int p0; char *p1; int p2; {
    func_001980B0(D_00654430, 0, *(unsigned short *)(*(char **)(p1 + 8) + 2), *(int *)(p1 + 12), p2);
    return 1;
}

int func_0013D070();

int func_001AF480(p0) int p0; {
    int func_001B0FD0();
    int tmp0;
    int tmp1;
    tmp0 = func_001B0FD0((p0 + 9980), 0x350000, 0);
    tmp1 = func_0013D070((p0 + 9952), tmp0, 2048, 0x350000, 6);
    return tmp1;
}

extern char D_00666712[];

int func_004288A0();

int func_001AFB90(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int func_001AF3F0();
    int v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = p0;
    v1 = p2;
    if ((p3 & 255) == 8) {
        p3 = *(unsigned char *)D_00666712;
    }
    tmp0 = func_004288A0(p1, p3);
    tmp1 = func_001AF3F0(v0, tmp0, v1, 0);
    return tmp1;
}

extern char D_01DFABA0[];

int func_0032FD60();

void func_00330200();

int func_001AFF10(p0, p1) char *p0; char *p1; {
    int func_001B0FD0();
    char *v0;
    int v1;
    int tmp5;
    int tmp10;
    int tmp11;
    *(char *)(p0 + 0) = *(signed char *)(p1 + 0);
    *(char *)(p0 + 1) = *(signed char *)(p1 + 1);
    *(char *)(p0 + 2) = *(signed char *)(p1 + 2);
    *(char *)(p0 + 3) = *(signed char *)(p1 + 3);
    *(char *)(p0 + 4) = *(signed char *)(p1 + 18);
    v0 = p0;
    if (*(signed char *)(p0 + 1) == -1) {
        *(char *)(v0 + 1) = 1;
    }
    tmp5 = -1;
    v1 = 6;
    if (*(signed char *)(v0 + 3) == tmp5) {
        *(char *)(v0 + 3) = v1;
    }
    *(int *)(v0 + 12) = 0;
    *(int *)(v0 + 36) = 0;
    *(int *)(v0 + 40) = 0;
    func_00330200(D_01DFABA0, *(signed char *)(v0 + 0), *(signed char *)(v0 + 1), *(signed char *)(v0 + 2), *(signed char *)(v0 + 3));
    tmp10 = func_0032FD60(D_01DFABA0, 2);
    tmp11 = func_001B0FD0((v0 + 16), tmp10, 0);
    *(char *)(*(char **)(v0 + 20) + 0) = 0;
    *(int *)(v0 + 32) = 0;
    return tmp11;
}

void func_001AEF50(char *p0) {
    *(char *)(p0 + 1) = 2;
}

void func_001B07E0(char *p0, int p1) {
    *(int *)(p0 + 8) = p1;
    *(int *)(p0 + 12) = 0;
    *(int *)(p0 + 36) = 0;
}

int func_001AEE30() {
    char *func_001AEA60();
    char *v0;
    int v1;
    v0 = func_001AEA60();
    if (v0 != 0) {
        v1 = *(int *)(v0 + 12);
    } else {
        v1 = 0;
    }
    return v1;
}

extern char D_005BBA04[];

int func_001AFC00(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7) {
    char *func_001AEAA0();
    int func_001AEF60();
    void func_001AF080();
    int v0;
    int v1;
    int v2;
    int v3;
    char *tmp0;
    int tmp2;
    v0 = p0;
    tmp0 = func_001AEAA0(p0, 4, 0);
    v1 = (int)tmp0;
    if (*(unsigned char *)(tmp0 + 1) == 3) {
        v3 = 1;
    } else {
        tmp2 = func_001AEF60(v0, v1, *(int *)D_005BBA04, 0, 0);
        v2 = v0;
        if ((tmp2 & 255) == 0) {
            func_001AF080(v2, v1);
            v3 = 0;
        } else {
            v3 = 1;
        }
    }
    return v3;
}

void func_001AF4D0(char *p0) {
    void func_0013D5D0();
    *(int *)(p0 + 9952) = 0;
    *(int *)(p0 + 9956) = 0;
    *(int *)(p0 + 9960) = 0;
    *(int *)(p0 + 9964) = 0;
    *(int *)(p0 + 9968) = 0;
    *(char *)(p0 + 9972) = 0;
    *(int *)(p0 + 9976) = 0;
    func_0013D5D0((p0 + 9980));
}
