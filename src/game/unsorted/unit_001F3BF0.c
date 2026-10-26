void func_001F41C0(char *p, unsigned int v) {
    *(unsigned int *)(p + 0x88) = v;
    *(unsigned int *)(p + 0x90) = (*(unsigned int *)(p + 0x90) & 0xFFFFFF) | (v & 0xFF000000);
}

void func_001F4170(char *p, unsigned int v) {
    *(unsigned int *)(p + 0x64) = (v << 3) / 10;
    *(unsigned int *)(p + 0x68) = v;
}

int func_001F4EF0(char *o, unsigned char **pp) {
    unsigned int c;
    unsigned int c1;
    unsigned int c2;
    c = **pp;
    *pp = *pp + 1;
    if (0x7F < c) {
        if (c >= 0xC0 && c <= 0xDF) {
            c1 = **pp;
            if (c1 == 0) return -1;
            *pp = *pp + 1;
            if (c1 < 0x80 || c1 > 0xBF) return -1;
            return (c & 0x1F) << 6 | (c1 & 0x3F);
        }
        if (c >= 0xE0 && c <= 0xEF) {
            c2 = **pp;
            if (c2 == 0) return -1;
            *pp = *pp + 1;
            if (c2 < 0x80 || c2 > 0xBF) return -1;
            c1 = **pp;
            if (c1 == 0) return -1;
            *pp = *pp + 1;
            if (c1 < 0x80 || c1 > 0xBF) return -1;
            return (c & 0xF) << 12 | (c2 & 0x3F) << 6 | (c1 & 0x3F);
        }
        return -1;
    }
    return c;
}

int func_001F5AC0(char *, int, char *, char *, int, int, int, int, int, int);

int func_001F56A0(char *p, int r) {
    unsigned int i;
    for (i = 0; i < *(unsigned int *)(p + 0x18); i++) {
        r = func_001F5AC0(p, r, *(char **)(p + 0x28) + i * 64, *(char **)(p + 0x50) + i, 1, 0, 0, 0, 8, 2);
    }
    return r;
}

int func_001F49C0(char *p, unsigned char c) {
    if (c < 0x60) return c + 0x851F;
    if (c < 0x80) return c + 0x8520;
    if (c == 0xA5) return 0x85A3;
    return c + 0x84FE;
}

int func_001F4AB0(int unused, unsigned int c) {
    unsigned int hi = (c >> 8) & 0xFF;
    unsigned int lo = c & 0xFF;
    if (0x81L <= hi && hi < 0xA0L) {
        hi -= 0x81;
    } else if (0xE0L <= hi && hi < 0xF0L) {
        hi = hi - 0xC1L;
    }
    hi <<= 1;
    if (0x40L <= lo && lo < 0x7FL) {
        lo -= 0x40;
    } else if (0x80L <= lo && lo < 0x9FL) {
        lo = lo - 0x41L;
    } else if (0x9FL <= lo && lo < 0xFDL) {
        lo -= 0x9F;
        hi++;
    }
    return ((hi + 1L) << 8) + lo + 0x2021L;
}

extern float *D_005417E0[];

extern float *D_005417E4[];

int func_001F45F0(char *p, unsigned int x, unsigned int y) {
    int m = *(unsigned char *)(p + 0x8D);
    if (m == 0) {
        if (*(unsigned char *)(p + 0x6C) == 0) return *(int *)(p + 0x64);
        return *(int *)(p + 0x70);
    }
    if (x >= 32) x -= 32;
    if (y >= 32) y -= 32;
    if (*(unsigned char *)(p + 0x6C) == 0) {
        return (float)*(unsigned int *)(p + 0x64) - (float)*(unsigned int *)(p + 0x64) * D_005417E4[m * 2][x] - (float)*(unsigned int *)(p + 0x64) * D_005417E0[m * 2][y];
    }
    return (float)*(unsigned int *)(p + 0x70) - (float)*(unsigned int *)(p + 0x70) * D_005417E4[m * 2][x] - (float)*(unsigned int *)(p + 0x70) * D_005417E0[m * 2][y];
}

int func_001F5040(char *p, unsigned int c) {
    unsigned char *t = *(unsigned char **)(p + 0x1C);
    unsigned char h = t[(c >> 8) & 0xFF];
    unsigned short v;
    if (h == 0) goto next;
    v = ((unsigned short *)((unsigned char *)(h * 512) + (int)t - 0x100))[c & 0xFF];
    if (v == 0) goto next;
    return v - 1;
next:
    if (*(int *)(p + 0x94) != 0) goto rec;
    return 0;
rec:
    return func_001F5040(p, 0x3F);
}

int func_001F4230();

int func_001F4400();

int func_001F41F0(p0) char *p0; {
    int v0;
    int tmp0;
    if (*(unsigned char *)(p0 + 5) == 2) {
        tmp0 = func_001F4400();
        return tmp0;
    } else {
        v0 = func_001F4230();
        return v0;
    }
}

extern char D_0054175F[];

extern char D_0054176A[];

int func_001F48F0(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    int v2;
    int tmp0;
    int tmp1;
    v0 = (p1 & 255);
    if ((v0 < 33)) {
        return 33088;
    } else {
        v2 = (v0 + 32767);
        if ((v0 < 127)) {
            return (v2 + 28031);
        } else {
            if ((v0 < 161)) {
                return 33088;
            } else {
                if ((v0 < 166)) {
                    return ((*(unsigned char *)((D_0054175F + v0) + 0) + 32767) + 28161);
                } else {
                    tmp0 = 176;
                    if (v0 == tmp0) {
                        return 61114;
                    } else {
                        tmp1 = 222;
                        if (v0 == tmp1) {
                            return 61098;
                        } else {
                            if (v0 == 223) {
                                return 0xeea9;
                            } else {
                                v1 = ((*(unsigned char *)((D_0054176A + v0) + 0) + 32767) + 28417);
                                return v1;
                            }
                        }
                    }
                }
            }
        }
    }
}

void func_001F41A0(char *p) { *(char *)(p + 108) = 0; }

void func_001F4160(char *p0, int p1, int p2) {
    *(int *)(p0 + 100) = p1;
    *(int *)(p0 + 104) = p2;
}

void func_001F41B0(char *p0, int p1, int p2) {
    *(int *)(p0 + 120) = p1;
    *(int *)(p0 + 124) = p2;
}

int func_001F50C0(char *p0, int p1) {
    return ((unsigned int)p1 < (unsigned int)*(int *)(p0 + 152));
}
