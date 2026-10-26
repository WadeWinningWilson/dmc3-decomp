void func_002FC2B0(char *p) {
    if (*(unsigned char *)(p + 0x82A) == 0) {
        *(unsigned char *)(p + 4) += 1;
        return;
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
    case 1:
        *(unsigned char *)(p + 5) += 1;
        break;
    case 2:
        *(unsigned char *)(p + 4) += 1;
        break;
    }
}

char *func_00207480(int, int, char *, int);

void func_002FD5F0(char *p) {
    char *e = func_00207480(3, 0x82, 0, 0x20);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x560;
        e[0x9A] = 0;
    }
    e = func_00207480(3, 0x1C, 0, 0x20);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x560;
        e[0x9A] = 0;
    }
}

void func_00105230(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_002FD660(char *p) {
    float m[16];
    float v[4];
    char *o;
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = -6.0f;
    v[3] = 1.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    o = func_00207480(1, 0xE8, (char *)m, 0x20);
    if (o != 0) {
        *(char **)(o + 0x90) = p + 0x560;
        *(unsigned char *)(o + 0x9A) = 0;
    }
}

void func_002FD6E0(char *p) {
    void func_001AD140(char *);
    float m[16];
    float v[4];
    char *e;
    char *q;
    v[2] = -6.0f;
    v[0] = 0.0f;
    v[3] = 1.0f;
    v[1] = 0.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    e = func_00207480(1, 0xF4, (char *)m, 0x40);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x560;
        *(unsigned char *)(e + 0x9A) = 0;
    }
    if (*(char **)(p + 0x878) != 0) {
        func_001AD140(*(char **)(p + 0x878));
        *(int *)(p + 0x878) = 0;
    }
    if (*(char **)(p + 0x87C) != 0) {
        func_001AD140(*(char **)(p + 0x87C));
        *(int *)(p + 0x87C) = 0;
    }
    *(char **)(p + 0x878) = func_00207480(1, 0x10B, 0, 0x40);
    q = *(char **)(p + 0x878);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x560;
        *(unsigned char *)(q + 0x9A) = 0;
    }
}

void func_002FD7C0(char *p) {
    float m[16];
    float v[4];
    char *e;
    char *q;
    v[2] = -8.0f;
    v[0] = 0.0f;
    v[3] = 1.0f;
    v[1] = 0.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    *(char **)(p + 0x878) = func_00207480(1, 0xE7, (char *)m, 0x40);
    e = *(char **)(p + 0x878);
    if (e != 0) {
        *(char **)(e + 0x90) = p + 0x560;
        *(unsigned char *)(e + 0x9A) = 0;
    }
    v[2] = 6.0f;
    v[3] = 1.0f;
    v[0] = 0.0f;
    v[1] = 0.0f;
    UNIT(m);
    func_00105230((char *)m, (char *)m, v);
    *(char **)(p + 0x87C) = func_00207480(1, 0x117, (char *)m, 0x40);
    q = *(char **)(p + 0x87C);
    if (q != 0) {
        *(char **)(q + 0x90) = p + 0x560;
        *(unsigned char *)(q + 0x9A) = 0;
    }
}

void func_002FD8D0(char *);

void func_002FD9B0(char *, int, int);

void func_002FCF10(char *p) {
    int i;
    int k;
    int n;
    unsigned char on;
    *(float *)(p + 0x850) = *(float *)(p + 0x850) + 60.0f * (*(float *)(p + 0x844) / 300.0f) * *(float *)(p + 0x10);
    *(float *)(p + 0x854) = *(float *)(p + 0x854) + 20.0f * (*(float *)(p + 0x848) / 200.0f) * *(float *)(p + 0x10);
    if (!(*(float *)(p + 0x850) <= 180.0f)) *(float *)(p + 0x850) = *(float *)(p + 0x850) - 180.0f;
    if (!(*(float *)(p + 0x854) <= 180.0f)) *(float *)(p + 0x854) = *(float *)(p + 0x854) - 180.0f;
    func_002FD8D0(p);
    for (i = 0, k = 0; i < 8; k += 70, i++) {
        on = 0;
        if (!(*(float *)(p + 0x84C) <= (float)k)) {
            n = (int)(*(float *)(p + 0x84C) / 70.0f);
            if (i < n) {
                on = 1;
                *(float *)(p + i * 4 + 0x858) = 23.0f;
            } else if (n == i) {
                *(float *)(p + i * 4 + 0x858) = 23.0f * (float)((int)*(float *)(p + 0x84C) % 70 / 70);
            } else {
                *(float *)(p + i * 4 + 0x858) = 0.0f;
            }
        } else {
            *(float *)(p + i * 4 + 0x858) = 0.0f;
        }
        if (on == 1) {
            func_002FD9B0(p, 1, i);
        } else {
            func_002FD9B0(p, 0, i);
        }
    }
}

extern char D_01CAFF0C[];

void func_002FCF10(char *p);

int func_002FD110(char *);

void func_002FDD40(char *);

static inline void flag_clear(int k) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    if (k < 32) {
        ((int *)(g + 0x18))[k / 32] &= ~(1 << (k & 31));
    } else {
        k -= 32;
        ((int *)(g + 0x44))[k / 32] &= ~(1 << (k & 31));
    }
}

static inline int ft2FC(int k) {
    char *g = *(char **)(*(char **)D_01CAFF0C + 0x18);
    unsigned int *w;
    unsigned int m;
    if (k < 32) {
        w = (unsigned int *)((char *)(k / 32 * 4) + (int)g + 0x18);
        m = 1 << (k & 31);
        return (*w & m) != 0;
    } else {
        int t = k - 32;
        w = (unsigned int *)((char *)(t / 32 * 4) + (int)g + 0x44);
        m = 1 << (t & 31);
        return (*w & m) != 0;
    }
}

void func_002FC700(char *p) {
    void func_002FDDD0(char *, int);
    unsigned char r;
    int k = *(short *)(p + 0xDC);
    if (k != -1 && !(unsigned char)ft2FC(k)) {
        *(unsigned char *)(p + 0x822) = 1;
    }
    if (!(*(float *)(p + 0x838) <= 0.0f)) {
        *(float *)(p + 0x83C) = *(float *)(p + 0x83C) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x83C) < 0.0f) {
            *(unsigned char *)(p + 0x822) = 1;
        }
    }
    if (*(unsigned char *)(p + 0x822) != 0) {
        r = func_002FD110(p);
        if (r != 0) return;
        *(unsigned char *)(p + 0x822) = 0;
        if (*(short *)(p + 0xDC) != -1) {
            flag_clear(*(short *)(p + 0xDC));
        }
        *(unsigned char *)(p + 0x821) = 0;
        return;
    }
    if (*(unsigned char *)(p + 0x824) == 0) {
        switch (*(unsigned char *)(p + 0x828)) {
        case 0:
            if (*(unsigned char *)(p + 0x825) == 0) {
                func_002FDDD0(p, 2);
                *(unsigned char *)(p + 0x826) = 1;
                *(unsigned char *)(p + 0x828) = *(unsigned char *)(p + 0x828) + 1;
                func_002FDD40(p);
            }
            break;
        case 1:
            if (*(unsigned char *)(p + 0x826) == 0) {
                func_002FDDD0(p, 1);
                *(unsigned char *)(p + 0x825) = 1;
                *(unsigned char *)(p + 0x828) = 0;
                func_002FDD40(p);
            }
            break;
        }
    }
    func_002FCF10(p);
}

void func_002FC670(char *p0) {
    void func_002FDDD0();
    *(char *)(p0 + 2081) = 1;
    *(int *)(p0 + 2116) = 0x43960000;
    *(int *)(p0 + 2120) = 0x43480000;
    *(int *)(p0 + 2124) = 0x440c0000;
    *(int *)(p0 + 2128) = 0x42700000;
    *(int *)(p0 + 2132) = 0x41a00000;
    *(int *)(p0 + 2136) = 0x41b80000;
    *(int *)(p0 + 2140) = 0x41b80000;
    *(int *)(p0 + 2144) = 0x41b80000;
    *(int *)(p0 + 2148) = 0x41b80000;
    *(int *)(p0 + 2152) = 0x41b80000;
    *(int *)(p0 + 2156) = 0x41b80000;
    *(int *)(p0 + 2160) = 0x41b80000;
    *(int *)(p0 + 2164) = 0x41b80000;
    func_002FDDD0(p0, 1);
    *(char *)(p0 + 2085) = 1;
    *(char *)(p0 + 2086) = 0;
    *(char *)(p0 + 2088) = 0;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005AADD0[];

extern char D_005AB6D0[];

extern char D_005AB6F4[];

extern char D_005AB774[];

extern char D_005AB808[];

void func_0024F810();

void func_0027A660();

void func_0028C1A0();

char *func_002FE010(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005AB6D0;
        *(char * *)(p + 64) = D_005AB6F4;
        *(char * *)(p + 160) = D_005AB774;
        *(char * *)(p + 208) = D_005AB808;
        if (p + 2256 != 0) {
            if (p + 2480 != 0) {
                *(char * *)(p + 2480) = D_005A7780;
                if (p + 2480 != 0) {
                    *(char * *)(p + 2480) = D_005A7790;
                }
            }
        }
        func_0028C1A0(p + 1440, -1);
        func_0027A660(p + 224, -1);
        if (p + 208 != 0) {
            *(char * *)(p + 208) = D_005AADD0;
        }
        func_0024F810(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_00206730();

int func_002FC180(p0) int p0; {
    int func_001AD140();
    char *v0;
    int v1;
    int v2;
    char *v3;
    int v4;
    int v5;
    int v6;
    v0 = (char *)p0;
    v2 = 0;
    v3 = v0;
    do {
        func_00206730((v3 + 2168));
        v1 = *(int *)(v3 + 2168);
        if (v1 != 0) {
            func_001AD140(v1);
            *(int *)(v3 + 2168) = 0;
        }
        v2 = (v2 + 1);
        v3 = (v3 + 4);
    } while ((v2 < 3));
    v6 = 0;
    do {
        v4 = func_00206730((v0 + 2180));
        v5 = *(int *)(v0 + 2180);
        if (v5 != 0) {
            v4 = func_001AD140(v5);
            *(int *)(v0 + 2180) = 0;
        }
        v6 = (v6 + 1);
        v0 = (v0 + 4);
    } while ((v6 < 16));
    return v4;
}

int func_002077F0();

int func_002FC570(p0) int p0; {
    int v0;
    int v1;
    char *v10;
    int v2;
    int v3;
    char *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    v0 = 0;
    v4 = (char *)p0;
    v1 = (int)v4;
    do {
        func_00206730((v1 + 2168));
        v0 = (v0 + 1);
        v1 = (v1 + 4);
    } while ((v0 < 3));
    v6 = 0;
    v5 = (int)v4;
    do {
        v8 = func_00206730((v5 + 2180));
        v6 = (v6 + 1);
        v5 = (v5 + 4);
    } while ((v6 < 16));
    v9 = 0;
    v10 = v4;
    do {
        v7 = *(int *)(v10 + 2168);
        if (v7 != 0) {
            v8 = func_002077F0(v7);
            if ((v8 & 255) == 1) {
                *(int *)(v10 + 2168) = 0;
            }
        }
        v9 = (v9 + 1);
        v10 = (v10 + 4);
    } while ((v9 < 3));
    v3 = 0;
    do {
        v2 = *(int *)(v4 + 2180);
        if (v2 != 0) {
            v8 = func_002077F0(v2);
            if ((v8 & 255) == 1) {
                *(int *)(v4 + 2180) = 0;
            }
        }
        v3 = (v3 + 1);
        v4 = (v4 + 4);
    } while ((v3 < 16));
    return v8;
}

extern void func_002FC320();

void func_002FE100(char *p) { func_002FC320(p + -64); }

extern void func_002FD140();

void func_002FE110(char *p) { func_002FD140(p + -64); }

extern void func_002FC120();

void func_002FE140(char *p) { func_002FC120(p + -208); }

extern void func_002FE000();

void func_002FE150(char *p) { func_002FE000(p + -208); }

extern void func_002FDFF0();

void func_002FE160(char *p) { func_002FDFF0(p + -208); }

void func_002FC130(void) {}
