extern char D_01CAF520[];

extern int D_01CAF560[];

extern unsigned char D_005D0E53[];

extern unsigned char D_005D0E51[];

extern int D_005D0E54[];

int func_002E76D0(char *, float *);

#define QCOPYW1(d, s) __asm__ volatile("lqc2 $vf10, 0x0(%1)\n\tvmove.w $vf10, $vf0\n\tsqc2 $vf10, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

void func_001B6580(char *p, char *q) {
    float v[4];
    q = q ? q : p;
    if (*(char **)(q + 0x38) != 0) {
        int r;
        QCOPYW1(v, *(char **)(q + 0x38));
        r = func_002E76D0(D_01CAF520, v);
        if (r != 0xFF) {
            D_005D0E53[0] = r;
            D_005D0E51[0] = 1;
            D_005D0E54[0] = D_01CAF560[0];
        } else {
            D_005D0E51[0] = 0;
        }
    } else {
        D_005D0E51[0] = 0;
    }
}

extern char * D_005BE0D8;

int func_001B63F0(p0) char *p0; {
    char *v0;
    if (*(int *)(p0 + 80) == -1) {
        v0 = D_005BE0D8;
        if (v0 != 0) {
            *(int *)(p0 + 80) = ((*(signed char *)(v0 + 5) + 2) << 3);
        }
    }
    return *(int *)(p0 + 80);
}

void func_001B6470(char *p, int v) { *(int *)(p + 8) = v; }

void func_001B6480(char *p, int v) { *(int *)(p + 12) = v; }

void func_001B64C0(char *p, int v) { *(int *)(p + 28) = v; }

void func_001B64D0(char *p, int v) { *(int *)(p + 32) = v; }

void func_001B64E0(char *p, int v) { *(int *)(p + 36) = v; }

void func_001B6500(char *p, int v) { *(int *)(p + 44) = v; }

void func_001B6510(char *p, char v) { *(char *)(p + 48) = v; }

void func_001B6520(char *p, short v) { *(short *)(p + 50) = v; }

void func_001B6550(char *p, char v) { *(char *)(p + 61) = v; }

void func_001B6430(char *p0) {
    *(int *)(p0 + 80) = -1;
}
