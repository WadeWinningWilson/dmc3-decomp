/* Hand-matched functions (fifth file: its callee declarations differ from the others). */

extern char D_00666750[];
extern char D_00547340[];
void func_001AD100(void);
void func_0028B610(char *);
int func_001AED80(char *, int, unsigned short, int);
void func_00208050(int, int);
int func_002242C0(int);
int func_002FF740(int, char *);
void func_0028D3D0(char *);
void func_0028D560(char *);
int func_0028B690(char *, unsigned char);
void func_0028BF50(char *);

void func_0028D2A0(unsigned char *p) {
    func_001AD100();
    switch (p[4]) {
    case 0:
        func_0028B610((char *)p);
        func_00208050(func_001AED80(D_00666750, 2, *(signed char *)(p + 0x46) * 15, 2), 1);
        if ((unsigned char)func_002242C0(*(int *)(p + 0xE0)) == 0) {
            *(int *)(p + 0x8D4) = func_002FF740(0, (char *)p + 0x130);
        } else {
            *(int *)(p + 0x8D4) = 0;
        }
        *(char **)(p + 0xE4) = D_00547340;
        p[0xDC] = 0;
        p[4]++;
        p[5] = 0;
    case 1:
        switch (p[5]) {
        case 0:
            func_0028D3D0((char *)p);
            break;
        case 1:
            func_0028D560((char *)p);
            break;
        }
        if ((unsigned char)func_0028B690((char *)p, p[0xD8])) {
            func_0028BF50((char *)p);
        }
        break;
    }
}

extern char D_01CAFF0C[];
unsigned int func_002EFB20(int);
char *func_002EFB30(int, unsigned int);
float func_00132470(float *, char *);

int func_00486220(char *p, float *out) {
    float pos[4] __attribute__((aligned(16)));
    float best[4] __attribute__((aligned(16)));
    unsigned int n = func_002EFB20(*(int *)D_01CAFF0C);
    float d;
    float min;
    unsigned int i;
    char *o;
    d = min = 0.0f;
    for (i = 0; i < n; i++) {
        o = func_002EFB30(*(int *)D_01CAFF0C, i);
        if (o != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(pos), "r"(*(char **)(o + 0x10) + 0x30) : "memory");
            d = func_00132470(pos, p + 0x50);
        }
        if (i == 0) {
            min = d;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(best), "r"(pos) : "memory");
        } else if (d < min) {
            min = d;
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(best), "r"(pos) : "memory");
        }
    }
    if (min > 0.0f) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(out), "r"(best) : "memory");
        return 1;
    }
    return 0;
}

extern char *D_005BE0D8;
extern char D_01DFA340[];
extern int D_01DFA344[];
extern int D_01DFA348[];
unsigned int func_0030FD40(char *, int, int, int, int, int, int, int);
float func_002DBD40(int, int);

void func_004B3420(char *p, int left) {
    int x, y;
    unsigned char k;
    if (D_005BE0D8[3]) {
        y = 222 - *(short *)(D_005BE0D8 + 0x2E);
    } else {
        y = 445 - *(short *)(D_005BE0D8 + 0x2E);
    }
    func_0030FD40(D_01DFA340, 0x3108, 0xAF, y, 0x585858, 0, 0xFFFFF2, 1);
    k = (*(unsigned char **)(p + 0x3DE0))[0x5E];
    if (k != 4 && k != 5) {
        D_01DFA344[0] = *(float *)(*(char **)(p + 0x3DE0) + 0x80);
        D_01DFA348[0] = func_002DBD40(*(signed char *)(*(char **)(p + 0x3DE0) + 0x5E), *(signed char *)(*(char **)(p + 0x3DE0) + 0x5F));
        if (left) {
            x = 0xB0;
            y = 0xB2;
        } else {
            x = 0x190;
            y = 0xB2;
        }
        x += func_0030FD40(D_01DFA340, 0x30FC, x, y, 0x585858, 16, 0xFFFFF2, 1) >> 16;
        x += func_0030FD40(D_01DFA340, 0x30FE, x, y, 0x585858, 16, 0xFFFFF2, 1) >> 16;
        func_0030FD40(D_01DFA340, 0x30FD, x, y, 0x585858, 16, 0xFFFFF2, 1);
    }
}

int func_0024D6B0(unsigned char *p, unsigned char *n) {
    *n = 0;
    switch (p[0x49F8]) {
    case 0:
        if (p[0x49F9] != p[0x49FA]) {
            *n += 1;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x10) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x40) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x80) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x20) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x4) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x8) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x1) {
            *n += 2;
        }
        if (*(unsigned short *)(p + 0x49C4) & 0x2) {
            *n += 2;
        }
        *(unsigned short *)(p + 0x49FC) += *n;
        if (*(unsigned short *)(p + 0x49FC) > *(unsigned short *)(p + 0x49FE)) {
            p[0x49F8]++;
            return 1;
        }
        break;
    case 1:
        return 1;
    }
    return 0;
}
