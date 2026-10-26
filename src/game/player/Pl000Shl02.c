#include "stdarg.h"
/* Resets the slot table (16 slots, -1 = free). */
void func_002F9880(char *);

void func_002FA510(void);

void func_002FA7A0(char *);

void func_002FB0B0(void);

extern struct {
    unsigned char on;
    char pad[3];
    int count;
    int slot[16];
} D_01DF8ED0;

int func_002F91E0(char *p) {
    unsigned int i;
    func_002F9880(p);
    func_002FA510();
    func_002FA7A0(p);
    func_002FB0B0();
    D_01DF8ED0.count = 0;
    D_01DF8ED0.on = 1;
    for (i = 0; i < 16; i++) {
        D_01DF8ED0.slot[i] = -1;
    }
    return 0;
}

void func_00100580(char *);

extern char D_005AB590[];

extern char D_005AB5B4[];

extern char D_005AB634[];

void func_0028C1A0(char *, int);

void func_00253000(char *, int);

char *func_002F9100(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AB590;
        *(char **)(p + 64) = D_005AB5B4;
        *(char **)(p + 160) = D_005AB634;
        func_0028C1A0(p + 336, -1);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00131700(char *, char *, float *);

void func_00105230(char *, char *, float *);

void func_001318E0(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_002F8DA0(char *p) {
    float t[4];
    float r[4];
    float s[4];
    switch (*(unsigned char *)(p + 0x459)) {
    case 0:
        t[0] = *(float *)(p + 0x50);
        t[1] = *(float *)(p + 0x54);
        t[2] = *(float *)(p + 0x58);
        t[3] = 1.0f;
        r[0] = 0.0f;
        r[1] = (float)*(short *)(p + 0x3F4) / 65536.0f * 6.283185f;
        r[2] = 0.0f;
        r[3] = 1.0f;
        s[0] = 1.0f;
        s[1] = 1.0f;
        s[2] = 1.0f;
        s[3] = 1.0f;
        break;
    case 1:
        t[0] = *(float *)(p + 0x50);
        t[1] = *(float *)(p + 0x54);
        t[2] = *(float *)(p + 0x58);
        t[3] = 1.0f;
        r[0] = 1.5707963f;
        r[1] = (float)*(short *)(p + 0x3F4) / 65536.0f * 6.283185f;
        r[2] = 0.0f;
        r[3] = 1.0f;
        s[0] = 1.0f;
        s[1] = 1.0f;
        s[2] = 1.0f;
        s[3] = 1.0f;
        break;
    }
    UNIT(p + 0x410);
    func_00131700(p + 0x410, p + 0x410, r);
    func_00105230(p + 0x410, p + 0x410, t);
    func_001318E0(p + 0x410, p + 0x410, s);
}

extern char D_00558760[];

extern char D_005BC618;

extern char D_005BC620;

unsigned char *func_002F99F0(int, int *, int);

int func_002FA790(void);

void func_0010F9C0(char *);

void func_00124ED8(char *, int, char *);

unsigned int func_002F92C0(int mode) {
    int req[2];
    unsigned char *r;
    unsigned int f;
    int k;
    req[0] = 0x20000000;
    r = func_002F99F0(2, req, 8);
    k = func_002FA790();
    f = 0;
    if (k != 0) f |= 1;
    if (r[0xA] != 0) f |= 0x10;
    if (r[9] != 0) f |= 0x100;
    if (r[8] != 0) f |= 0x1000;
    switch (mode) {
    case 0:
        if (f == 0) {
            f = 0;
        } else {
            f |= 0x80000000;
        }
        break;
    case 1:
        if ((f & 0x111) == 0) {
            f = 0;
        } else {
            f |= 0x80000000;
        }
        break;
    default:
        func_0010F9C0(D_00558760);
        func_00124ED8(&D_005BC618, 0xD3, &D_005BC620);
        break;
    }
    return f;
}

void func_00131650(char *, char *);

#define VSUBR(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

void func_002F8A70(char *p) {
    float v[4];
    *(float *)(p + 0x450) = 70.0f;
    VSUBR(p + 0x400, v, p + 0x50);
    func_00131650(p + 0x400, p + 0x400);
    *(float *)(p + 0x3F8) = 1.0f;
}

void func_002FB250(char *, char *, int *);

void func_002F9480(char *a, char *b, int n, ...) {
    int prm[12] = { 0 };
    int i;
    va_list ap;
    int k;
    int v;
    prm[10] = 100;
    va_start(ap, n);
    for (i = 0; i < n; i++) {
        k = va_arg(ap, int);
        v = va_arg(ap, int);
        switch (k) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
            prm[k] += v;
            break;
        case 10:
            prm[k] = prm[k] * v / 100;
            break;
        case 11:
            prm[k] = v;
            break;
        }
    }
    func_002FB250(a, b, prm);
}

int func_001AD100();

int func_002F8860();

int func_002F8C80();

int func_002F8800(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_001AD100();
    v2 = *(unsigned char *)(v0 + 1113);
    if (v2 != 1) {
        if (v2 != 0) {
            return v1;
        } else {
            tmp0 = func_002F8860(v0);
            return tmp0;
        }
    } else {
        v3 = func_002F8C80(v0);
        return v3;
    }
}

int func_00206730();

int func_002077F0();

void func_002F8F10(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    char *v5;
    int v6;
    int v7;
    v0 = p0;
    v2 = 0;
    v3 = v0;
    do {
        v1 = func_00206730((v3 + 984));
        v2 = (v2 + 1);
        v3 = (v3 + 4);
    } while ((v2 < 6));
    v7 = 0;
    v4 = (char *)v0;
    do {
        v5 = (char *)((v0 + v7) + 976);
        if (*(unsigned char *)((char *)(v0 + v7) + 976) == 1) {
            v6 = *(int *)(v4 + 984);
            if (v6 != 0) {
                v1 = func_002077F0(v6);
                if ((v1 & 255) == 1) {
                    *(char *)(v5 + 0) = 0;
                    *(int *)(v4 + 984) = 0;
                }
            } else {
                *(char *)(v5 + 0) = 0;
            }
        }
        v7 = (v7 + 1);
        v4 = (v4 + 4);
    } while ((v7 < 6));
}

int func_001AD140();

void func_002F8FE0(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    char *v4;
    char *v5;
    int v6;
    int v7;
    char *tmp1;
    v0 = p0;
    v2 = 0;
    v3 = v0;
    do {
        v1 = func_00206730((v3 + 984));
        v2 = (v2 + 1);
        v3 = (v3 + 4);
    } while ((v2 < 6));
    v7 = 0;
    v4 = (char *)v0;
    do {
        v5 = (char *)((v0 + v7) + 976);
        if (*(unsigned char *)((char *)(v0 + v7) + 976) == 1) {
            v6 = *(int *)(v4 + 984);
            if (v6 != 0) {
                v1 = func_002077F0(v6);
                if ((v1 & 255) == 0) {
                    v1 = func_001AD140(*(int *)(v4 + 984));
                    tmp1 = *(char **)(v4 + 984);
                    *(int *)(*(char **)(v4 + 984) + 144) = 0;
                    *(char *)(tmp1 + 154) = 0;
                    *(char *)(v5 + 0) = 0;
                    *(int *)(v4 + 984) = 0;
                }
            } else {
                *(char *)(v5 + 0) = 0;
            }
        }
        v7 = (v7 + 1);
        v4 = (v4 + 4);
    } while ((v7 < 6));
}

extern char D_01DF8ED4[];

void func_002FA630();

void func_002FB120();

int func_002F9280() {
    func_002FB120();
    func_002FA630();
    *(int *)D_01DF8ED4 = (*(int *)D_01DF8ED4 + 1);
    return 0;
}

void func_002FABF0();

int func_002F9450(p0, p1, p2) int p0; int p1; int p2; {
    func_002FABF0(p0, p2, p1);
}

extern void func_002F8190();

void func_002F9190(char *p) { func_002F8190(p + -64); }

extern void func_002F90C0();

void func_002F91A0(char *p) { func_002F90C0(p + -64); }

extern void func_002F90E0();

void func_002F91B0(char *p) { func_002F90E0(p + -64); }

extern void func_002F9E10();

void func_002F93E0(void) { func_002F9E10(); }

extern void func_002F9E90();

void func_002F93F0(void) { func_002F9E90(); }

extern void func_002F9EC0();

void func_002F9400(void) { func_002F9EC0(); }

extern void func_002F9ED0();

void func_002F9410(void) { func_002F9ED0(); }

extern void func_002FB140();

void func_002F9420(void) { func_002FB140(); }

extern void func_002FB150();

void func_002F9430(void) { func_002FB150(); }

extern void func_002FB170();

void func_002F9440(void) { func_002FB170(); }

extern void func_002FA4D0();

void func_002F9460(void) { func_002FA4D0(); }

extern void func_003DF770();

void func_002F9470(void) { func_003DF770(); }

void func_002F8D70(void) {}

void func_002F8D80(void) {}

char *func_002F95C0(char *p0) {
    *(int *)(p0 + 0) = 1;
    return p0;
}
