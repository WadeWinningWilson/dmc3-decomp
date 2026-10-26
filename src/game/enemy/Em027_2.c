void func_001AD140(char *);

void func_001AD100(char *);

int func_0046F7B0(char *p);

void func_0046FCF0(char *);

void func_0046F8E0(char *);

void func_0046FB40(char *);

void func_0046F690(char *p) {
    int i;
    func_001AD100(p);
    for (i = 0; i < 4; i++) {
        if (*(int *)(p + i * 4 + 0x264) != 0) {
            func_0046FCF0(p + i * 4 + 0x264);
        }
    }
    if ((unsigned char)func_0046F7B0(p) == 1) {
        func_0046F8E0(p);
        func_0046FB40(p);
    }
    if (*(short *)(p + 0x276) == 0) {
        func_001AD140(p);
    }
}

extern char *D_0057B030[];

int func_0046F9A0(char *p) {
    char *e;
    char *a;
    int i;
    int j;
    char *b;
    int k;
    char *c;
    int m;
    char *d;
    float fa;
    float fb;
    e = (char *)((int)D_0057B030[*(unsigned char *)(p + 0x254)] + *(short *)(p + 0x27A) * 16);
    *(int *)(p + 0x260) = *(int *)(e + 0);
    *(float *)(p + 0x25C) = *(float *)(e + 4);
    *(unsigned short *)(p + 0x27C) = *(unsigned short *)(e + 8);
    *(unsigned short *)(p + 0x27E) = *(unsigned short *)(e + 0xA);
    *(unsigned short *)(p + 0x280) = *(unsigned short *)(e + 0xC);
    *(unsigned short *)(p + 0x282) = *(unsigned short *)(e + 0xE);
    for (i = 0; i < *(short *)(p + 0x274) - 1; i++) {
        for (j = i + 1; j < *(short *)(p + 0x274); j++) {
            a = *(char **)(p + i * 4 + 0x264);
            b = *(char **)(p + j * 4 + 0x264);
            fa = 0.0f;
            fb = fa;
            if (a != 0) fa = *(float *)(a + 0xBC8);
            if (b != 0) fb = *(float *)(b + 0xBC8);
            if (fa <= 0.0f && !(fb <= 0.0f)) {
                *(char **)(p + i * 4 + 0x264) = b;
                *(char **)(p + j * 4 + 0x264) = a;
            }
        }
    }
    if (*(int *)(p + 0x260) & 1) {
        for (k = 0; k < *(short *)(p + 0x276) - 1; k++) {
            for (m = k + 1; m < *(short *)(p + 0x276); m++) {
                c = *(char **)(p + k * 4 + 0x264);
                d = *(char **)(p + m * 4 + 0x264);
                if (!(*(float *)(d + 0xBC8) <= *(float *)(c + 0xBC8))) {
                    *(char **)(p + k * 4 + 0x264) = d;
                    *(char **)(p + m * 4 + 0x264) = c;
                }
            }
        }
    }
    return 1;
}

extern char D_005B5A80[];

extern char D_005B5AA4[];

extern char D_005B5B24[];

extern char D_005B5BB8[];

extern char D_005B5C84[];

extern char D_005B5D3C[];

int func_0024FE00();

int func_0031E4A0();

int func_00320540();

int func_0046F580(p0) int p0; {
    func_0024FE00();
    func_00320540((p0 + 304));
    func_0031E4A0((p0 + 464));
    *(char **)((char *)p0 + 0) = D_005B5A80;
    *(char **)((char *)p0 + 64) = D_005B5AA4;
    *(char **)((char *)p0 + 160) = D_005B5B24;
    *(char **)((char *)p0 + 208) = D_005B5BB8;
    *(char **)((char *)p0 + 304) = D_005B5C84;
    *(char **)((char *)p0 + 464) = D_005B5D3C;
    return p0;
}

extern void func_0046F660();

void func_0046FD40(char *p) { func_0046F660(p + -64); }

extern void func_0046F770();

void func_0046FD50(char *p) { func_0046F770(p + -64); }

extern void func_0046FC30();

void func_0046FD60(char *p) { func_0046FC30(p + -64); }

void func_0046FD70(char *p) { func_0046FC30(p + -160); }

void func_0046FD80(char *p) { func_0046FC30(p + -208); }

void func_0046FDA0(char *p) { func_0046F770(p + -304); }

void func_0046FDB0(char *p) { func_0046FC30(p + -304); }

void func_0046FDC0(char *p) { func_0046FC30(p + -464); }

void func_0046F7A0(void) {}
