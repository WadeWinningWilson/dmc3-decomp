extern char D_0066671A[];

extern char D_00666710[];

unsigned short func_001AE770(char *, int);

void func_0021C7A0(char *, int);

int func_00244DF0(char *, int);

int func_0023F190(char *p) {
    if (*(unsigned char *)(p + 0x28AA) == 2) {
        return 0;
    }
    if (*(unsigned char *)(p + 0x290D) == 1) {
        return 0;
    }
    if ((*(int *)(p + 0x2898) & 1) &&
        ((unsigned char)func_00244DF0(p, 0x8000000F) == 1 || (unsigned char)func_00244DF0(p, 0x80000009) == 1 ||
         *(unsigned char *)(p + 0x2848) == 1) &&
        (*(unsigned short *)(p + 0x49C4) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x100)])) {
        func_0021C7A0(p, 0x12);
        return 1;
    }
    return 0;
}

extern char D_01CAFF0C[];

unsigned char func_00245810(char *p, float *v, float *out, float dy) {
    unsigned char func_002018A0(char *, float *, float *, float *, char *, int);
    float a[4] __attribute__((aligned(16)));
    float h[4] __attribute__((aligned(16)));
    a[0] = v[0];
    a[1] = v[1] + dy;
    a[2] = v[2];
    a[3] = 1.0f;
    if (func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, a, h, p + 0x2960, 0) == 1) {
        *out = h[1];
        return 1;
    }
    return 0;
}

int func_0021CBA0(char *);

int func_002443D0(char *, int, int, int);

int func_00241650(char *, unsigned char *);

int func_00244C60(char *, unsigned char *, unsigned char *);

int func_002417B0(char *, unsigned char *, int);

unsigned char func_00241230(char *p) {
    int func_00244E60(char *p, unsigned int id);
    unsigned char *e;
    unsigned char *c;
    int k;
    unsigned char sel;
    e = *(unsigned char **)(p + 0x2838);
    c = e;
    if (*(unsigned char *)(p + 0x28AA) == 2) return 0;
    if (*(unsigned char *)(p + 0x28AC) == 1) return 0;
    if (func_0021CBA0(p) & 0x400) goto found;
    if ((unsigned char)func_00244E60(p, 0x8000000F)) goto found;
    if ((unsigned char)func_00244E60(p, 0x80000000)) goto found;
    if ((unsigned char)func_00244E60(p, 0x80000001)) goto found;
    if ((unsigned char)func_00244E60(p, 0x80000002)) goto found;
    if ((unsigned char)func_00244E60(p, 0x80000003)) goto found;
    if ((unsigned char)func_00244E60(p, 0x80000004)) goto found;
    if ((unsigned char)func_00244E60(p, 0x80000007)) goto found;
    if ((unsigned char)func_00244E60(p, 0x8000000A)) goto found;
    if ((unsigned char)func_00244E60(p, 0x80000008)) goto found;
    goto none;
found:
    while (e[0] != 5) {
        if (c[2] == *(unsigned char *)(p + 0x2998)) break;
        c += 0x28;
    }
    if (*(unsigned char *)(p + 0x290D) == 1) return 0;
    for (; e[0] != 5; e += 0x28) {
        sel = 0;
        if (e[3] == 10) continue;
        {
            int w = *(int *)(p + ((unsigned int)e[2] >> 5) * 4 + 0x29D8);
            if (!(w & (1 << (e[2] % 32)))) continue;
        }
        if ((unsigned char)func_002443D0(p, 2, (signed char)e[0xB], e[0xC]) != 1) continue;
        if ((signed char)e[1] != -1) {
            if (*(unsigned char *)(p + 0x28A7) == 0) continue;
            if ((signed char)e[1] != *(signed char *)(p + 0x28A8)) continue;
        }
        if ((unsigned char)func_00241650(p, e) != 1) continue;
        if (*(int *)(p + 0x2898) & 0x10000) {
            if (c[2] == e[2]) continue;
            k = *(int *)(e + 4);
            if (!(k & 0x200)) continue;
            if (c[0] == 2 || c[0] != e[0] || (c[0] == e[0] && c[3] < e[3] && c[0xB] == e[0xB])
                || ((k & 0x100) && c[0xB] != e[0xB]) || ((k & 0x100) && c[3] == 9)) {
                if ((unsigned char)func_00244C60(p, e, &sel) != 1) continue;
                if ((unsigned char)func_002417B0(p, e, sel) != 1) continue;
                return 1;
            }
        } else {
            if (!(*(int *)(e + 4) & 0x100)) continue;
            if (!(func_0021CBA0(p) & 0x400)) {
                if (func_0021CBA0(p) & 0x400) continue;
                if ((unsigned char)func_00244C60(p, e, &sel) != 1) continue;
            }
            if ((unsigned char)func_002417B0(p, e, sel) != 1) continue;
            return 1;
        }
    }
none:
    return 0;
}

float func_0011D798(float);

int func_002450D0(char *, int, float);

void func_0021C520(char *, int, int);

void func_0023D0C0(char *p) {
    int func_0023E1F0(char *);
    int func_0023E500(char *);
    char *g;
    float f;
    if (func_0023E1F0(p) != 0) {
        return;
    }
    if (func_0023E500(p) != 0) {
        return;
    }
    if (*(unsigned char *)(p + 0x290A) != 0) {
        return;
    }
    if (*(unsigned char *)(p + 0x284C) == 0) {
        return;
    }
    if (*(unsigned char *)(p + 0x2866) == 1) {
        if (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)]) {
            g = *(char **)(p + 0x283C);
            *(float *)(p + 0x2870) += *(float *)(p + 0x10);
            if (!(*(float *)(p + 0x2870) <= *(float *)(g + 0x124))) {
                if ((unsigned char)func_002450D0(p, 1, -func_0011D798(6.283185f * (*(float *)(g + 0xF0) / 360.0f))) == 1) {
                    func_0021C520(p, 2, 1);
                }
            }
        } else {
            *(int *)(p + 0x2870) = 0;
        }
    } else {
        *(int *)(p + 0x2870) = 0;
    }
}

int func_002DAD40(char *);

int func_0023F760(char *);

short func_002DACC0(char *);

int func_002F0740(char *, int, int);

char *func_0023F670(char *, char *, short);

char *func_002F0A50(char *, char *);

short func_002DAA60(char *, char *);

void func_002F1830(char *, char *);

static inline int lock_btn(char *p) {
    return *(unsigned short *)(p + 0x49C0) & *(unsigned short *)(D_0066671A + func_001AE770(D_00666710, 8) * 2);
}

void func_0023F3E0(char *p) {
    char *t = 0;
    unsigned char v;
    int x;
    if (*(unsigned char *)(p + 0x3B9C) == 1) {
        return;
    }
    if (*(unsigned char *)(p + 0x28A6) == 0) {
        v = func_002F0740(p + 0x2B58, 0, *(unsigned char *)(p + 0xD4));
        *(unsigned char *)(p + 0x3B9C) = 1;
        if (*(unsigned char *)(p + 0x28AA) != 2) {
            if (lock_btn(p)) {
                func_0023F760(p);
                *(unsigned char *)(p + 0x28A6) = 1;
                *(float *)(p + 0x3C60) = 0.0f;
                if (v == 1) {
                    if (*(unsigned int *)(p + 0x2898) & 0x10000) {
                        t = func_0023F670(p, p + 0x3C40, *(short *)(p + 0x90));
                    } else if ((unsigned char)func_002DAD40(p) == 2) {
                        t = func_002F0A50(p + 0x2B58, p + 0x3C40);
                    } else {
                        t = func_0023F670(p, p + 0x3C40, func_002DACC0(p));
                    }
                }
            } else if (v == 1) {
                if ((unsigned char)func_002DAD40(p) == 2) {
                    t = func_002F0A50(p + 0x2B58, p + 0x3C40);
                } else {
                    t = func_0023F670(p, p + 0x3C40, func_002DACC0(p));
                }
            }
        }
    } else {
        v = func_002F0740(p + 0x2B58, 1, *(unsigned char *)(p + 0xD4));
        *(unsigned char *)(p + 0x3B9C) = 1;
        func_0023F760(p);
        if (!lock_btn(p) && *(float *)(p + 0x3C60) <= 0.0f) {
            *(unsigned char *)(p + 0x28A6) = 0;
        }
        if (v == 1) {
            t = func_002F0A50(p + 0x2B58, p + 0x3C40);
        }
    }
    if (t == 0) {
        *(short *)(p + 0x3BA2) = *(short *)(p + 0x90);
        *(unsigned char *)(p + 0x3B9D) = 0;
        *(char **)(p + 0x3C68) = 0;
        *(int *)(p + 0x3C64) = 0;
    } else {
        *(short *)(p + 0x3BA2) = func_002DAA60(p, p + 0x3C40);
        *(unsigned char *)(p + 0x3B9D) = 1;
        *(char **)(p + 0x3C68) = t;
        func_002F1830(p + 0x2B58, t);
        x = *(int *)(t + 8);
        if (x != 0) {
            x += 0x40;
        }
        *(int *)(p + 0x3C64) = x;
    }
}

float func_00131BA0(int);

float func_00131C20(int);

float func_00132D80(float *, float *);

int func_00245EF0(float s, char *u, float *pos, int ang, float *out, char *o, unsigned short m) {
    int func_002018A0(char *, char *, char *, char *, char *, int);
    float v[4] __attribute__((aligned(16)));
    float h[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float w[4] __attribute__((aligned(16)));
    v[0] = pos[0] + s * func_00131BA0(ang);
    v[1] = pos[1];
    v[2] = pos[2] + s * func_00131C20(ang);
    v[3] = 1.0f;
    if ((unsigned char)func_002018A0(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, (char *)pos, (char *)v, (char *)h, o, m) == 1) {
        d[0] = func_00131BA0(ang);
        d[1] = 0.0f;
        d[2] = func_00131C20(ang);
        d[3] = 1.0f;
        w[0] = *(float *)(o + 0x28);
        w[1] = *(float *)(o + 0x2C);
        w[2] = *(float *)(o + 0x30);
        w[3] = 1.0f;
        *out = func_00132D80(d, w);
        return 1;
    }
    return 0;
}

int func_0023F290();

int func_0023CE00(p0) int p0; {
    int func_0023E1F0();
    int func_0023E500();
    void func_00244E60();
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = p0;
    func_00244E60(p0, 0x80000005);
    v1 = func_0023E500(v0);
    v2 = v0;
    if (v1 == 0) {
        v1 = func_0023E1F0(v2);
        v3 = v0;
        if (v1 == 0) {
            v1 = func_0023F290(v3);
        }
    }
    return v1;
}

int func_0023D8E0(p0) char *p0; {
    int func_0023E1F0();
    int func_0023E500();
    void func_00244E60();
    int v0;
    int v1;
    int v2;
    int v3;
    v0 = (int)p0;
    if (*(unsigned char *)(p0 + 10412) != 1) {
        func_00244E60(p0, 0x80000005);
        v3 = func_0023E1F0(v0);
        v1 = v0;
        if (v3 == 0) {
            v3 = func_0023E500(v1);
            v2 = v0;
            if (v3 == 0) {
                v3 = func_0023F290(v2);
            }
        }
    }
    return v3;
}
