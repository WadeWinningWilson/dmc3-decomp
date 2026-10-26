extern int D_005408B0[];

float func_00131B50(float);

typedef struct { float v[4]; } __attribute__((aligned(16))) V1C0A;

static inline V1C0A *nrm1C0(V1C0A *b, int i) { return (V1C0A *)((char *)&b[i] + 0x80); }

int func_001C0A30(char *u, V1C0A *box, V1C0A *seg, V1C0A *pt, int *flags, V1C0A *out, int other) {
    void func_00132580(V1C0A *, V1C0A *, float);
    float func_00132630(V1C0A *, V1C0A *);
    V1C0A d;
    V1C0A mid;
    int i;
    int best;
    float bestd;
    float dd;
    if (flags[0] == -1 && flags[1] == -1) {
        best = 0;
        bestd = 8000.0f;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(&mid), "r"(&seg[1]), "r"(&seg[0]) : "memory");
        func_00132580(&mid, &mid, 0.5f);
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(&mid), "r"(&seg[0]), "r"(&mid) : "memory");
        for (i = 0; i < 6; i++) {
            __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%0)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%1)" : : "r"(&box[D_005408B0[i]]), "r"(&d), "r"(&mid) : "memory");
            dd = func_00132630(&d, nrm1C0(box, i));
            if (func_00131B50(dd) < func_00131B50(bestd)) {
                bestd = dd;
                best = i;
            }
        }
        if (out != 0) {
            func_00132580(&d, (V1C0A *)((char *)&box[best] + 0x80), bestd);
            __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(&mid), "r"(&d) : "memory");
        }
        return 1;
    }
    if (flags[0] != -1 && flags[1] == -1) {
        if (out != 0) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(out), "r"(&pt[1]) : "memory");
        if (other != 0) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(seg), "r"(&pt[1]) : "memory");
    } else {
        if (out != 0) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(out), "r"(pt) : "memory");
        if (other != 0) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&seg[1]), "r"(pt) : "memory");
    }
    return 1;
}

int func_001BE300(int p0, float *a, float *b, float *out) {
    float func_00132470(float *, float *);
    if (func_00132470(a, b) - b[4] < 0.0f) {
        if (out != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(a), "r"(out) : "memory");
        }
        return 1;
    }
    return 0;
}

int func_001C35D0(char *, char *, int, float *);

#define VADD(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

int func_001C3B40(int a, char *r, int c, int *count, char *out) {
    float v[4];
    float t[2];
    int n;
    int i;
    *count = func_001C35D0(r, r + 0x10, c, t);
    n = 0;
    for (i = 0; i < *count; i++) {
        if (0.0f <= t[i] && t[i] <= 1.0f) {
            v[0] = *(float *)(r + 0x10) * t[i];
            v[1] = *(float *)(r + 0x14) * t[i];
            v[2] = *(float *)(r + 0x18) * t[i];
            v[3] = 0.0f;
            VADD(out + n * 16, r, v);
            n++;
        }
    }
    *count = n;
    return *count > 0;
}

extern signed char D_00540870[][4];

extern signed char D_00540871[][4];

extern signed char D_00540872[][4];

extern signed char D_00540873[][4];

#define QC1BF(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

typedef struct { float v[4]; } __attribute__((aligned(16))) V1BF;

int func_001C1180(char *, V1BF *, V1BF *);

int func_001BFB50(char *a, V1BF *box, V1BF *tri, V1BF *out) {
    extern unsigned char D_005BBA28[4];
    int func_001BFA00(char *, V1BF *, V1BF *, V1BF *, int, V1BF *);
    V1BF e[2];
    V1BF q[4];
    int i;
    int j;
    for (i = 0; i < 3; i++) {
        if (func_001C1180(a, &tri[i], box)) {
            if (out != 0) QC1BF(out, &tri[i]);
            return 1;
        }
    }
    for (i = 0; i < 3; i++) {
        QC1BF(&e[0], &tri[i]);
        QC1BF(&e[1], &tri[D_005BBA28[i]]);
        for (j = 0; j < 6; j++) {
            QC1BF(&q[0], &box[D_00540870[j][0]]);
            QC1BF(&q[1], &box[D_00540871[j][0]]);
            QC1BF(&q[2], &box[D_00540872[j][0]]);
            QC1BF(&q[3], &box[D_00540873[j][0]]);
            if (func_001BFA00(a, e, q, (V1BF *)((char *)&box[j] + 0x80), 4, out)) return 1;
        }
    }
    return 0;
}

typedef struct { float v[4]; } __attribute__((aligned(16))) V1C0;

int func_001BFE50(char *a, V1C0 *tri, V1C0 *cap, V1C0 *out) {
    extern unsigned char D_005BBA28[4];
    float func_001C2B60(char *, V1C0 *, V1C0 *, V1C0 *, V1C0 *);
    void func_00132540(V1C0 *, V1C0 *, float);
    V1C0 c2;
    V1C0 c1;
    V1C0 bc[2];
    V1C0 dd;
    V1C0 e[2];
    V1C0 seg[2];
    float best;
    float d;
    int i;
    best = -1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&seg[0]), "r"(&cap[0]) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&seg[1]), "r"(&cap[1]) : "memory");
    for (i = 0; i < 3; i++) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&e[0]), "r"(&tri[i]) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&e[1]), "r"(&tri[D_005BBA28[i]]) : "memory");
        d = func_001C2B60(a, seg, e, &c1, &c2);
        if (d < cap[2].v[0]) {
            if (best == -1.0f || d < best) {
                best = d;
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&bc[0]), "r"(&c1) : "memory");
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(&bc[1]), "r"(&c2) : "memory");
            }
        }
    }
    if (best != -1.0f) {
        if (out != 0) {
            if (best < 0.001f) {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(out), "r"(&bc[0]) : "memory");
            } else {
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(&dd), "r"(&bc[1]), "r"(&bc[0]) : "memory");
                func_00132540(&dd, &dd, cap[2].v[0]);
                __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(out), "r"(&bc[0]), "r"(&dd) : "memory");
            }
        }
        return 1;
    }
    return 0;
}

void func_00131650(char *, char *);

#define VSUB(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

int func_001C1510(char *u, char *out, char *o, char *a, char *b) {
    float func_00132630(float *, char *);
    void func_00132580(float *, char *, float);
    float d1[4];
    float d2[4];
    VSUB(d1, a, o);
    func_00131650((char *)d1, (char *)d1);
    VSUB(d2, b, o);
    func_00132580(d2, (char *)d1, func_00132630(d2, (char *)d1));
    VADD(out, d2, o);
    return 1;
}

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

int func_001BE6F0(char *, float *, float *, float *);

#define VADDIP(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

typedef struct { float x; float y; float z; float w; } cf4;

typedef struct { cf4 c; float r; } sph5;

int func_001C0040(char *a, float *b, char *c, float *out) {
    void func_00132540(float *, float *, float);
    float s[8];
    sph5 t;
    float tmp[4];
    QCOPY(s, c);
    QCOPY(s + 4, c + 0x10);
    t.c = ((sph5 *)b)->c;
    t.r = b[4];
    t.r = t.r + *(float *)(c + 0x20);
    if ((unsigned char)func_001BE6F0(a, s, (float *)&t, out) == 0) {
        return 0;
    }
    VSUB(tmp, b, out);
    func_00132540(tmp, tmp, *(float *)(c + 0x20));
    VADDIP(out, tmp);
    return 1;
}

int func_001C15B0(char *, float *, char *, char *, char *);

#define VSUB3(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(a), "r"(b) : "memory")

int func_001BF640(char *o, char *pt, char *tri, char *out) {
    float func_00132630(float *, char *);
    void func_00132580(float *, char *, float);
    float func_00132470(char *, char *);
    extern unsigned char D_005BBA28[3];
    int func_001C12D0(char *, float *, char *, char *, int);
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float d;
    int i;
    VSUB3(v, pt, tri);
    d = func_00132630(v, tri + 0x30);
    if (func_00131B50(d) <= *(float *)(pt + 0x10)) {
        func_00132580(w, tri + 0x30, d);
        VSUB3(w, pt, w);
        if (func_001C12D0(o, w, tri, tri + 0x30, 3)) {
            if (out) QCOPY(out, w);
            return 1;
        }
    }
    i = 0;
    while (i < 3) {
        if (func_00132470(pt, tri + i * 16) <= *(float *)(pt + 0x10)) {
            if (out) QCOPY(out, tri + i * 16);
            return 1;
        }
        if ((unsigned char)func_001C15B0(o, w, tri + i * 16, tri + D_005BBA28[i] * 16, pt) == 1) {
            if (func_00132470((char *)w, pt) <= *(float *)(pt + 0x10)) {
                if (out) QCOPY(out, w);
                return 1;
            }
        }
        i++;
    }
    return 0;
}

extern char D_01DFABA0[];

extern char D_005408E0[];

extern char D_00662370[];

extern char D_01100000[];

extern char D_01100004[];

extern char D_01100018[];

extern char D_0110001C[];

void func_0010DF60();

int func_0010E080();

int func_0010E0A0();

int func_00111BE8();

void func_00111E70();

int func_00111FF0();

void func_00112228();

int func_00114A28();

void func_00114B90();

int func_0013CB00();

void func_001AAB00();

void func_001C3ED0();

int func_001C3F30();

void func_002F9620();

int func_001C3C50(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    int v0;
    int v1;
    char *v2;
    int v3;
    int v4;
    int v5;
    int v7;
    int v6;
    int v8;
    int tmp0;
    int tmp1;
    int tmp2;
    int tmp3;
    int tmp4;
    int tmp5;
    int tmp17;
    v0 = p0;
    while ((v1 = func_00111BE8(D_005408E0, 1)) < 0) {
    }
    tmp1 = func_00111FF0(v1, 0, 2);
    func_00111FF0(v1, 0, 0);
    func_00112228(v1, 0x1000000, tmp1);
    func_00111E70(v1);
    tmp2 = func_0013CB00(0x1000000, 0x1100000);
    v3 = tmp2;
    while ((v4 = func_00114A28(v3)) == 0) {
    }
    *(int *)((stk + -64) + 64) = 0x1100000;
    *(int *)((stk + -64) + 72) = v3;
    *(int *)((stk + -64) + 68) = v4;
    *(int *)((stk + -64) + 76) = 0;
    func_0010DF60(0);
    tmp4 = func_0010E0A0(((stk + -64) + 64), 1);
    v5 = tmp4;
    do {
        tmp5 = func_0010E080(v5);
    } while (tmp5 >= 0);
    v6 = *(int *)D_01100000;
    v2 = D_01100004;
    v7 = 0;
    if ((0 < v6)) {
        v8 = (v6 + -8);
        if (v6 > 8) {
            do {
                v7 = (v7 + 8);
                *(int *)(v2 + 0) = (*(int *)(v2 + 0) + v4);
                *(int *)(v2 + 4) = (*(int *)(v2 + 4) + v4);
                *(int *)(v2 + 8) = (*(int *)(v2 + 8) + v4);
                *(int *)(v2 + 12) = (*(int *)(v2 + 12) + v4);
                *(int *)(v2 + 16) = (*(int *)(v2 + 16) + v4);
                *(int *)(v2 + 20) = (*(int *)(v2 + 20) + v4);
                *(int *)(v2 + 24) = (*(int *)(v2 + 24) + v4);
                *(int *)(v2 + 28) = (*(int *)(v2 + 28) + v4);
                v2 = (v2 + 32);
            } while ((v7 < v8));
        }
        if ((v7 < v6)) {
            do {
                v7 = (v7 + 1);
                *(int *)(v2 + 0) = (*(int *)(v2 + 0) + v4);
                v2 = (v2 + 4);
            } while ((v7 < v6));
        }
    }
    func_001C3ED0(v0, 0x1100000, 0, 0, 0);
    func_001C3ED0(v0, 0x1100000, 1, 0, 0);
    func_001C3ED0(v0, 0x1100000, 2, 0, 0);
    func_001C3ED0(v0, 0x1100000, 3, 0, 0);
    func_001C3ED0(v0, 0x1100000, 4, 0, 0);
    func_002F9620(D_01DFABA0, *(int *)D_01100018);
    func_001AAB00(D_00662370, *(int *)D_0110001C);
    func_00114B90(v4);
    tmp17 = func_001C3F30(v0);
    return tmp17;
}

float func_001C1A90(char *, char *, char *, float *);

void func_00131680(float *, float *, float *, float);

int func_001C1850(char *pl, float *out, char *n, char *d, float *a, float *b) {
    int f = 0;
    float da;
    float db;
    da = func_001C1A90(pl, n, d, a);
    db = func_001C1A90(pl, n, d, b);
    if (func_00131B50(da) < 0.001f) da = 0.0f;
    else if (!(da <= 0.0f)) f |= 1;
    else f |= 2;
    if (func_00131B50(db) < 0.001f) db = 0.0f;
    else if (!(db <= 0.0f)) f |= 0x10;
    else f |= 0x20;
    switch (f) {
    case 1:
    case 2:
        out[0] = b[0];
        out[1] = b[1];
        out[2] = b[2];
        break;
    case 0x10:
    case 0x20:
        out[0] = a[0];
        out[1] = a[1];
        out[2] = a[2];
        break;
    case 0x12:
    case 0x21:
        da = func_00131B50(da);
        db = func_00131B50(db);
        func_00131680(out, a, b, db / (da + db));
        break;
    case 0:
    case 0x11:
    case 0x22:
        break;
    }
    return f;
}

float func_001C2B90(char *, char *, float *, int, int);

unsigned char func_001BF4F0(char *u, char *o, float *t) {
    float e2[4] __attribute__((aligned(16)));
    float e1[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    unsigned char r;
    a[0] = t[0];
    a[1] = t[1];
    a[2] = t[2];
    VSUB(e1, t + 4, t);
    VSUB(e2, t + 8, t);
    if (func_001C2B90(u, o, a, 0, 0) < *(float *)(o + 0x10) * *(float *)(o + 0x10)) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

float func_001C31D0(char *, char *, float *, int, int);

unsigned char func_001BF590(char *u, char *o, float *t, float *out) {
    float q[4] __attribute__((aligned(16)));
    float e2[4] __attribute__((aligned(16)));
    float e1[4] __attribute__((aligned(16)));
    float a[4] __attribute__((aligned(16)));
    unsigned char r;
    float d;
    float rr;
    a[0] = t[0];
    a[1] = t[1];
    a[2] = t[2];
    VSUB(e1, t + 4, t);
    VSUB(e2, t + 8, t);
    d = func_001C31D0(u, o, a, 0, 0);
    rr = *(float *)(o + 0x10);
    *out = rr - d;
    if (d < rr) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

int func_001C13B0(char *, int, int, int *);

int func_001C0DC0(char *a, char *pts, char *seg, int x, int y, float *out) {
    float func_001C2B60(char *, float *, float *, float *, float *);
    int idx[2] __attribute__((aligned(8)));
    float q[2][4] __attribute__((aligned(16)));
    float s[2][4] __attribute__((aligned(16)));
    float o2[4] __attribute__((aligned(16)));
    float o1[4] __attribute__((aligned(16)));
    if (func_001C13B0(a, 2, y, idx) == 0) return 0;
    QCOPY(s[0], pts + idx[0] * 16);
    QCOPY(s[1], pts + idx[1] * 16);
    QCOPY(q[0], seg);
    QCOPY(q[1], seg + 0x10);
    if (!(func_001C2B60(a, s[0], q[0], o1, o2) <= *(float *)(seg + 0x20))) return 0;
    if (out != 0) QCOPY(out, o1);
    return 1;
}

typedef struct { float v[4]; } V4C2;

typedef struct { V4C2 p; float d[3]; } RayC2;

static inline void mkray_1C2(RayC2 *r, float *a) {
    r->d[0] = a[4] - a[0];
    r->d[1] = a[5] - a[1];
    r->d[2] = a[6] - a[2];
}

static inline void at_1C2(float *o, RayC2 *r, float *t) {
    o[0] = r->p.v[0] + r->d[0] * *t;
    o[1] = r->p.v[1] + r->d[1] * *t;
    o[2] = r->p.v[2] + r->d[2] * *t;
}

float func_001C2010(char *, RayC2 *, RayC2 *, float *, float *);

float func_001C2980(char *o, float *a, float *b, float *o1, float *o2) {
    RayC2 r1;
    RayC2 r2;
    float t1;
    float t2;
    float r;
    r1.p = *(V4C2 *)a;
    r2.p = *(V4C2 *)b;
    mkray_1C2(&r1, a);
    mkray_1C2(&r2, b);
    r = func_001C2010(o, &r1, &r2, &t1, &t2);
    if (o1) at_1C2(o1, &r1, &t1);
    if (o2) at_1C2(o2, &r2, &t2);
    return r;
}

int func_001C0C30(char *unused, char *a, char *b, char *v, int *idx, float *out) {
    float func_00132630(float *, char *);
    void func_00132580(float *, char *, float);
    float tmp[4];
    float d;
    float e;
    int k;
    VSUB(tmp, v, a + D_005408B0[*idx] * 16);
    d = func_00131B50(func_00132630(tmp, a + *idx * 16 + 0x80));
    VSUB(tmp, v + 0x10, a + D_005408B0[*idx] * 16);
    e = func_00131B50(func_00132630(tmp, a + *idx * 16 + 0x80));
    k = 0;
    if (!(d <= e)) {
        d = e;
        k = 1;
    }
    if (!(d <= *(float *)(b + 0x20))) {
        return 0;
    }
    if (out != 0) {
        func_00132580(tmp, a + *idx * 16 + 0x80, d);
        VSUB(out, v + k * 16, tmp);
    }
    return 1;
}

int func_001C0EC0(char *ctx, char *pts, char *seg, int unused, int key, float *out) {
    float func_00132470(char *, char *);
    float func_00132630(float *, char *);
    void func_00132580(float *, char *, float);
    int idx[2];
    float w[4];
    float v[4];
    float u[4];
    if (func_001C13B0(ctx, 3, key, idx) == 0) {
        return 0;
    }
    VSUB(v, pts + idx[0] * 16, seg);
    VSUB(u, seg + 0x10, seg);
    func_00131650((char *)u, (char *)u);
    func_00132580(w, (char *)u, func_00132630(v, (char *)u));
    VADD(w, w, seg);
    VSUB(v, w, seg);
    VSUB(u, seg + 0x10, seg);
    func_00131650((char *)u, (char *)u);
    if (func_00132630(v, (char *)u) < 0.0f) {
        QCOPY(w, seg);
    }
    VSUB(v, w, seg + 0x10);
    VSUB(u, seg, seg + 0x10);
    func_00131650((char *)u, (char *)u);
    if (func_00132630(v, (char *)u) < 0.0f) {
        QCOPY(w, seg + 0x10);
    }
    if (!(func_00132470(pts + idx[0] * 16, (char *)w) <= *(float *)(seg + 0x20))) {
        return 0;
    }
    if (out != 0) {
        QCOPY(out, pts + idx[0] * 16);
    }
    return 1;
}

void func_001C1B40(char *ctx, float *pts, int n, float *out) {
    int i;
    out[2] = 0.0f;
    out[1] = 0.0f;
    out[0] = 0.0f;
    for (i = 0; i < n; i++) {
        out[0] += pts[i * 4 + 0];
        out[1] += pts[i * 4 + 1];
        out[2] += pts[i * 4 + 2];
    }
    out[0] /= (float)n;
    out[1] /= (float)n;
    out[2] /= (float)n;
}

static inline float fsqrt(float x) {
    float r;
    __asm__("sqrt.s %0, %1" : "=f"(r) : "f"(x));
    return r;
}

float func_001C34A0(float x) {
    return 1.0f / fsqrt(x);
}

int func_001BFD70(char *p, char *b, char *a, int c) {
    extern unsigned char D_005BBA28[4];
    int func_001BFA00(char *, float *, char *, char *, int, int);
    float v2[4];
    float v1[4];
    int i;
    for (i = 0; i < 3; i++) {
        QCOPY(v1, a + i * 16);
        QCOPY(v2, a + D_005BBA28[i] * 16);
        if (func_001BFA00(p, v1, b, b + 0x30, 3, c) != 0) {
            return 1;
        }
    }
    return 0;
}

#define VMUL3(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tlqc2 $vf5, 0x0(%2)\n\tvmul.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

#define VMUL3R(d, x, y) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvmul.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(x), "r"(y) : "memory")

float func_001C16F0(int u, float *out, float *a, float *b, float *c) {
    void func_00132580(float *, char *, float);
    float w[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float l;
    float t;
    VSUB(v, b, a);
    VMUL3R(w, v, v);
    l = w[0] + w[1] + w[2];
    if (l <= 0.01f) {
        QCOPY(out, a);
        return 0.0f;
    }
    VSUB(w, c, a);
    VMUL3(w, v, w);
    t = w[0] + w[1] + w[2];
    t /= l;
    if (t < 0.0f) {
        QCOPY(out, a);
        return t;
    }
    if (t > 1.0f) {
        QCOPY(out, b);
        return t;
    }
    func_00132580(out, (char *)v, t);
    VADDIP(out, a);
    return t;
}

int func_001BE380(char *u, float *a, float *p, float *out) {
    float func_00132630(float *, char *);
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    signed char i;
    int ok = 0;
    for (i = 0; i < 6; i++) {
        ok = 0;
        if (i < 3) {
            v[0] = p[0];
            v[1] = p[1];
            v[2] = p[2];
        } else {
            v[0] = p[0x18];
            v[1] = p[0x19];
            v[2] = p[0x1A];
        }
        VSUB(d, v, a);
        if (!(func_00132630(d, (char *)p + i * 16 + 0x80) < 0.0f)) {
            ok = 1;
        }
        if (ok == 0) break;
    }
    if (ok != 0) {
        if (out != 0) {
            QCOPY(out, a);
        }
        return 1;
    }
    return 0;
}

float func_001C1B00(char *u, float *x, float *y, float a) {
    float t[4] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vmul.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(t), "r"(y), "r"(x) : "memory");
    return a + (t[2] + (t[0] + t[1]));
}

int func_001C1D80(char *p, char *b) {
    float func_00132630(float *, char *);
    float r[4];
    float s[4];
    float t[4];
    float h[4] __attribute__((aligned(16)));
    float c[4] __attribute__((aligned(16)));
    float d[4] __attribute__((aligned(16)));
    float x[4] __attribute__((aligned(16)));
    h[0] = 0.5f * *(float *)(p + 0x10);
    h[1] = 0.5f * *(float *)(p + 0x14);
    h[2] = 0.5f * *(float *)(p + 0x18);
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vadd.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(c), "r"(p), "r"(h) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)
	lqc2 $vf5, 0x0(%2)
	vsub.xyzw $vf6, $vf4, $vf5
	sqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(c), "r"(b) : "memory");
    r[0] = func_00131B50(func_00132630(h, b + 0x10));
    s[0] = func_00131B50(func_00132630(d, b + 0x10));
    if (!(s[0] <= *(float *)(b + 0x40) + r[0])) return 0;
    r[1] = func_00131B50(func_00132630(h, b + 0x20));
    s[1] = func_00131B50(func_00132630(d, b + 0x20));
    if (!(s[1] <= *(float *)(b + 0x44) + r[1])) return 0;
    r[2] = func_00131B50(func_00132630(h, b + 0x30));
    s[2] = func_00131B50(func_00132630(d, b + 0x30));
    if (!(s[2] <= *(float *)(b + 0x48) + r[2])) return 0;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)
	lqc2 $vf5, 0x0(%1)
	lqc2 $vf6, 0x0(%0)
	vopmula.xyz $ACC, $vf4, $vf5
	vopmsub.xyz $vf6, $vf5, $vf4
	sqc2 $vf6, 0x0(%2)" : : "r"(h), "r"(d), "r"(x) : "memory");
    t[0] = func_00131B50(func_00132630(x, b + 0x10));
    if (!(t[0] <= *(float *)(b + 0x44) * r[2] + *(float *)(b + 0x48) * r[1])) return 0;
    t[1] = func_00131B50(func_00132630(x, b + 0x20));
    if (!(t[1] <= *(float *)(b + 0x40) * r[2] + *(float *)(b + 0x48) * r[0])) return 0;
    t[2] = func_00131B50(func_00132630(x, b + 0x30));
    if (!(t[2] <= *(float *)(b + 0x40) * r[1] + *(float *)(b + 0x44) * r[0])) return 0;
    return 1;
}

int func_001BE9F0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    void func_00132540(char *, char *, float);
    float func_001C2B60();
    char stk[0x30] __attribute__((aligned(16)));
    char *v0;
    char *v1;
    char *v2;
    float tmp0;
    v0 = (char *)p2;
    v1 = (char *)p3;
    tmp0 = func_001C2B60(p0, p1, p2, ((stk + -48) + 64), ((stk + -48) + 80));
    if (tmp0 > *(float *)(v0 + 32)) {
        return 0;
    } else {
        v2 = ((stk + -48) + 48);
        if (v1 != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%2)" : : "r"(((stk + -48) + 64)), "r"(((stk + -48) + 80)), "r"(v2) : "memory");
            func_00132540(((stk + -48) + 48), ((stk + -48) + 48), *(float *)(v0 + 32));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%2)" : : "r"(((stk + -48) + 48)), "r"(((stk + -48) + 80)), "r"(v1) : "memory");
        }
        return 1;
    }
}

int func_001BEB70(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    float func_00132470();
    void func_00132540(char *, char *, float);
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    char *v1;
    char *v2;
    char *v3;
    float tmp0;
    v0 = (char *)p1;
    v1 = (char *)p2;
    v2 = (char *)p3;
    tmp0 = func_00132470(v0, v1);
    if (tmp0 > (*(float *)(v0 + 16) + *(float *)(v1 + 16))) {
        return 0;
    } else {
        v3 = ((stk + -64) + 64);
        if (v2 != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%2)" : : "r"(v0), "r"(v1), "r"(v3) : "memory");
            func_00132540(((stk + -64) + 64), ((stk + -64) + 64), *(float *)(v1 + 16));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%2)" : : "r"(((stk + -64) + 64)), "r"(v1), "r"(v2) : "memory");
        }
        return 1;
    }
}

void func_001BF9F0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    void func_001BFA00();
    func_001BFA00(p0, p1, p2, (p2 + 48), 3, p3);
}

int func_001C10C0(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    void func_00132540(char *, char *, float);
    float func_001C2B60();
    char stk[0x30] __attribute__((aligned(16)));
    char *v0;
    char *v1;
    char *v2;
    float tmp0;
    v0 = (char *)p2;
    v1 = (char *)p3;
    tmp0 = func_001C2B60(p0, p1, p2, ((stk + -64) + 80), ((stk + -64) + 96));
    if (tmp0 > (*(float *)((char *)p1 + 32) + *(float *)(v0 + 32))) {
        return 0;
    } else {
        v2 = ((stk + -64) + 64);
        if (v1 != 0) {
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%2)" : : "r"(((stk + -64) + 80)), "r"(((stk + -64) + 96)), "r"(v2) : "memory");
            func_00132540(((stk + -64) + 64), ((stk + -64) + 64), *(float *)(v0 + 32));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%2)" : : "r"(((stk + -64) + 64)), "r"(((stk + -64) + 96)), "r"(v1) : "memory");
        }
        return 1;
    }
}

/* Generated functions recovered from git history (version c0c66ff of src/game/auto/flow.c): a later
 * tools/gen_flow.py run dropped them because its 'already defined' test also matched calls in
 * `if (...) {` lines. Verified byte-for-byte with these declarations. */
typedef struct { int w[4]; } __attribute__((aligned(16))) Q;

extern char D_005408D0[];

int func_001C1250(int p0, char *p1, char *p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int func_001C12D0();
    char stk[0x10] __attribute__((aligned(16)));
    char *v0;
    float v1;
    float v2;
    int v3;
    int tmp1;
    v0 = ((stk + -16) + 16);
    *(Q *)(v0 + 0) = *(Q *)(D_005408D0 + 0);
    v1 = *(float *)(p2 + 4);
    v2 = *(float *)(p1 + 4);
    if (v2 < v1) {
        return 0;
    } else {
        if (v2 > (v1 + *(float *)(p2 + 64))) {
            return 0;
        } else {
            tmp1 = func_001C12D0(p0, p1, p2, v0, 4);
            v3 = (tmp1 != 0);
            return v3;
        }
    }
}
