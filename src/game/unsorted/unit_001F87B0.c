float func_001F9C40(float *t, unsigned int m) {
    float r = 1.0f;
    int i;
    for (i = 0; i < 8; i++) {
        switch (m & (1 << i)) {
        case 0:
            break;
        case 1:
            r = r * t[0];
            break;
        case 2:
            r = r * t[1];
            break;
        case 4:
            r = r * t[2];
            break;
        case 8:
            r = r * t[3];
            break;
        case 16:
            r = r * t[4];
            break;
        case 32:
            r = r * t[5];
            break;
        case 64:
            r = r * t[6];
            break;
        case 128:
            r = r * t[7];
            break;
        }
    }
    return r;
}

void func_001F9D80(char *p) {
    int i;
    char *a;
    char *b;
    if (*(signed char *)(p + 0x100) == 0) {
        for (i = 3, a = p + 0x18, b = p + 0xC; i <= 6; i++, a += 8, b += 4) {
            if (*(unsigned char *)(a + 0x84) == 1) {
                *(float *)b = *(float *)(a + 0x80);
                *(char *)(a + 0x84) = 0;
            } else {
                *(float *)b = 1.0f;
            }
        }
    }
}

void func_0013D5D0(char *);

int func_001F8D70(char *p) {
    func_0013D5D0(p + 0xC);
    *(int *)(p + 0x1C) = 0;
    *(int *)(p + 0x20) = 0;
    return 1;
}

char *func_001B0FD0(char *, int, int);

int func_001F95F0(char *);

int func_001F8CD0(char *p, char *h) {
    char *q;
    *(char **)p = h;
    if (*(int *)(p + 0x1C) != 0) {
        func_0013D5D0(p + 0xC);
    }
    q = *(char **)p;
    *(int *)(p + 0x20) = *(int *)(q + 0x34) * (*(int *)(q + 0x2C) * *(int *)(q + 0x30)) * 4;
    if ((*(char **)(p + 0x1C) = func_001B0FD0(p + 0xC, *(int *)(p + 0x20), 1)) == 0) {
        return 0;
    }
    q = *(char **)p;
    *(char **)(p + 4) = (char *)(*(int *)(q + 0x3C) + (int)q) + 8;
    *(int *)(p + 8) = func_001F95F0(p);
    return 1;
}

typedef struct { int pad[2]; float o[3]; int pad2[3]; unsigned int s[3]; } G1F98;

int func_001F9770(G1F98 **, int, unsigned int *);

int func_001F9890(G1F98 **g, int a, float *out) {
    unsigned int c[3];
    if (func_001F9770(g, a, c) == -1) return -1;
    out[0] = 0.5f * (float)(*g)->s[0] + ((*g)->o[0] + (float)(c[0] * (*g)->s[0]));
    out[1] = 0.5f * (float)(*g)->s[1] + ((*g)->o[1] + (float)(c[1] * (*g)->s[1]));
    out[2] = 0.5f * (float)(*g)->s[2] + ((*g)->o[2] + (float)(c[2] * (*g)->s[2]));
    return 0;
}

void func_0013D6A0();

char * func_001F8C30(p) char *p; {
    func_0013D6A0(p + 12);
    *(int *)(p) = 0;
    *(int *)(p + 4) = 0;
    *(int *)(p + 8) = 0;
    *(int *)(p + 28) = 0;
    *(int *)(p + 32) = 0;
    return p;
}

void func_00100580();

void func_0013D240();

int func_001F8C70(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = p0;
    v1 = p1;
    if (v0 != 0) {
        func_0013D240((v0 + 12), -1);
        v2 = v0;
        if ((short)v1 > 0) {
            func_00100580(v2);
        }
    }
    return v0;
}

int func_001F9620(p0) char *p0; {
    return (*(int *)(*(char **)(p0 + 0) + 52) * (*(int *)(*(char **)(p0 + 0) + 44) * *(int *)(*(char **)(p0 + 0) + 48)));
}

int func_001F9B60(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = 0;
    v1 = p0;
    v2 = 0x3f800000;
    do {
        *(int *)(p0 + 0) = v2;
        *(int *)(v1 + 128) = v2;
        v0 = (v0 + 8);
        *(char *)(v1 + 132) = 0;
        *(int *)(p0 + 4) = v2;
        *(int *)(v1 + 136) = v2;
        *(char *)(v1 + 140) = 0;
        *(int *)(p0 + 8) = v2;
        *(int *)(v1 + 144) = v2;
        *(char *)(v1 + 148) = 0;
        *(int *)(p0 + 12) = v2;
        *(int *)(v1 + 152) = v2;
        *(char *)(v1 + 156) = 0;
        *(int *)(p0 + 16) = v2;
        *(int *)(v1 + 160) = v2;
        *(char *)(v1 + 164) = 0;
        *(int *)(p0 + 20) = v2;
        *(int *)(v1 + 168) = v2;
        *(char *)(v1 + 172) = 0;
        *(int *)(p0 + 24) = v2;
        *(int *)(v1 + 176) = v2;
        *(char *)(v1 + 180) = 0;
        *(int *)(p0 + 28) = v2;
        *(int *)(v1 + 184) = v2;
        p0 = (p0 + 32);
        *(char *)(v1 + 188) = 0;
        v1 = (v1 + 64);
    } while ((v0 < 16));
}

extern char D_01CAF516[];

int func_001F9B60();

int func_001F9BF0(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = (char *)p0;
    v1 = func_001F9B60();
    tmp0 = 50;
    v2 = 0x3f990000;
    if (*(signed char *)D_01CAF516 == tmp0) {
        *(int *)(v0 + 0) = (v2 | 39322);
    } else {
        *(int *)(v0 + 0) = 0x3f800000;
    }
    return v1;
}

int func_001F95B0(char *p) { return *(int *)(p + 28); }

int func_001F9610(char *p0, int p1) {
    return (*(int *)(p0 + 8) + p1);
}

/*
 * The nine PoC functions that match, at their USA (SLUS_209.64) addresses.
 * These are not yet assigned to their original translation units; move each
 * one to its real TU once TU boundaries are known (DMC3_DECOMP_ROADMAP.md).
 * Struct layouts are offset-only placeholders: unkXXX = field at offset XXX.
 */
typedef unsigned char u8;

/* four floats set to 1.0f (likely a scale/colour vector) */
typedef struct { u8 pad[0xC]; float unkC, unk10, unk14, unk18; } Obj1F9D60;

void func_001F9D60(Obj1F9D60 *p) {
    p->unkC = 1.0f;
    p->unk10 = 1.0f;
    p->unk14 = 1.0f;
    p->unk18 = 1.0f;
}
