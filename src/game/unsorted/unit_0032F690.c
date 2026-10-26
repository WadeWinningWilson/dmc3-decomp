int func_00352CA0(void);

long long func_0011EF60(int, int);

void func_0032F910(short *p, char *e) {
    int n;
    if (*(unsigned short *)(e + 0x18) != 0) {
        n = *(unsigned short *)(e + 0x18);
        if (n < 0) {
            n = 0;
        }
        if (n > 0x2000) {
            n = 0x2000;
        }
        *(unsigned short *)p |= 0x8000;
        p[7] += func_0011EF60(func_00352CA0(), n * 2) - n;
    }
    if (*(unsigned short *)(e + 0x1A) != 0) {
        n = *(unsigned short *)(e + 0x1A);
        if (n < 0) {
            n = 0;
        }
        if (n > 0x7F) {
            n = 0x7F;
        }
        p[4] += func_0011EF60(func_00352CA0(), n * 2) - n;
        if (p[4] < 0) {
            p[4] = 0;
        }
        if (p[4] > 0x7F) {
            p[4] = 0x7F;
        }
    }
}

void func_002F95C0();

int func_0032FA30(p0) int p0; {
    char *v0;
    int v1;
    char *v2;
    v0 = (char *)p0;
    func_002F95C0();
    *(int *)(v0 + 144) = 0;
    v1 = 0;
    v2 = v0;
    do {
        *(int *)(v2 + 148) = 0;
        *(int *)(v2 + 212) = 0;
        v1 = (v1 + 8);
        *(int *)(v2 + 152) = 0;
        *(int *)(v2 + 216) = 0;
        *(int *)(v2 + 156) = 0;
        *(int *)(v2 + 220) = 0;
        *(int *)(v2 + 160) = 0;
        *(int *)(v2 + 224) = 0;
        *(int *)(v2 + 164) = 0;
        *(int *)(v2 + 228) = 0;
        *(int *)(v2 + 168) = 0;
        *(int *)(v2 + 232) = 0;
        *(int *)(v2 + 172) = 0;
        *(int *)(v2 + 236) = 0;
        *(int *)(v2 + 176) = 0;
        *(int *)(v2 + 240) = 0;
        v2 = (v2 + 32);
    } while (((unsigned int)v1 < (unsigned int)16));
    *(char *)(v0 + 279) = -1;
    *(char *)(v0 + 278) = -1;
    *(char *)(v0 + 277) = -1;
    *(char *)(v0 + 276) = -1;
    *(char *)(v0 + 280) = 0;
    return (int)v0;
}

typedef struct { unsigned short x, y; } P32F;

extern P32F D_0055B520[][8];

float func_0032F690(int i, float x) {
    P32F *t = D_0055B520[i];
    unsigned int j;
    float y0, r;
    if (x <= t[0].x) return t[0].y;
    if (!(x < t[7].x)) return t[7].y;
    for (j = 0; j < 7; j++) {
        if (t[j].x < x && x < t[j + 1].x) {
            y0 = t[j].y;
            r = (x - t[j].x) / (float)(t[j + 1].x - t[j].x);
            return y0 - r * (y0 - t[j + 1].y);
        }
    }
    return 0.0f;
}
