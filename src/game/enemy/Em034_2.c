extern char D_01CAFF0C[];

int func_002D9EB0(char *);

char *func_00437250(char *p) {
    char *s;
    if (*(unsigned char *)(p + 0x485E) == 0) {
        s = *(char **)(*(char **)D_01CAFF0C + 0xC);
        return *(char **)(((char **)(s + 0x1390))[func_002D9EB0(s)] + 0x104) + 0x30;
    }
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(p + 0x4810), "r"(p + 0x150) : "memory");
    *(float *)(p + 0x4814) = *(float *)(p + 0x4814) + 100.0f;
    return p + 0x4810;
}

void func_00105300(char *, char *);

void func_00104B80(char *, char *, char *);

void func_0043A150(char *p, char *v, char *src) {
    float m[16];
    func_00105300((char *)m, src);
    m[12] = 0.0f;
    m[13] = 0.0f;
    m[14] = 0.0f;
    m[15] = 1.0f;
    func_00104B80(v, (char *)m, v);
}

int func_00437920(char *, char *, float *);

int func_00437840(char *, char *, float *);

int func_004377A0(char *a, char *b, unsigned char *out) {
    float x = 1000000.0f;
    float y = 1000000.0f;
    int r = func_00437920(a, b, &x);
    int r2 = func_00437840(a, b, &y);
    if (x < y) {
        *out = 1;
    } else {
        *out = 0;
        r = r2;
    }
    return r;
}

void func_0024DA80(char *, int, int);

void func_0043A750(char *p, int k, int b, int m) {
    switch (m) {
    case -1:
        func_0024DA80(p + 0x40D0, (unsigned char)k, b);
        func_0024DA80(p + 0x41A0, (unsigned char)k, b);
        break;
    case 0:
        func_0024DA80(p + 0x40D0, (unsigned char)k, b);
        break;
    case 1:
        func_0024DA80(p + 0x41A0, (unsigned char)k, b);
        break;
    }
}

extern float D_00577D10[];

extern float D_00577D14[];

extern float D_00577D18[];

extern float D_00577DD0[];

extern float D_00577DD4[];

extern float D_00577DD8[];

void func_004376E0(char *p, float *out, int i, unsigned char k) {
    if (k == 1) {
        out[0] = D_00577D10[i * 3];
        out[1] = D_00577D14[i * 3];
        out[2] = D_00577D18[i * 3];
        out[3] = 1.0f;
    } else {
        out[0] = D_00577DD0[i * 3];
        out[1] = D_00577DD4[i * 3];
        out[2] = D_00577DD8[i * 3];
        out[3] = 1.0f;
    }
}

float func_001324B0(char *, char *);

float func_0011DBE0(float, float);

extern float D_005BD958;

int func_00439700(char *p, int st, int arg) {
    int func_00439970(char *, int, int);
    float r;
    float d;
    int r2;
    switch (st) {
    case 0x31:
    case 0x34:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3F:
    case 0x42:
    case 0x46:
    case 0x49:
    case 0x4D:
    case 0x50:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
        if (*(unsigned char *)(p + 0x485E) == 0) {
            r = 15.0f;
        } else {
            r = D_005BD958;
        }
        d = func_0011DBE0(*(float *)(p + 0x154) - *(float *)(p + 0x54), func_001324B0(p + 0x150, p + 0x50));
        if (!(d <= 6.283185f * (r / 360.0f))) {
            st += 1;
        } else if (d < 6.283185f * (-r / 360.0f)) {
            st += 2;
        }
        r2 = func_00439970(p, st, arg);
    }
    return r2;
}

void func_0043B970();

void func_0043A1A0(int p0) {
    func_0043B970(p0, 1, 0);
    func_0043B970(p0, 2, 0);
    func_0043B970(p0, 0, 0);
    func_0043B970(p0, 3, 0);
    func_0043B970(p0, 4, 0);
}

int func_004361D0(p0) char *p0; {
    int v0;
    if (*(unsigned char *)(p0 + 18519) == 1) {
        v0 = (*(int *)(*(char **)(p0 + 1256) + 260) + 48);
    } else {
        v0 = (*(int *)(*(char **)(p0 + 1272) + 260) + 48);
    }
    return v0;
}

extern void func_0043C0E0();

void func_0043C470(char *p) { func_0043C0E0(p + -64); }

void func_0043C480(char *p) { func_0043C0E0(p + -160); }

void func_0043C490(char *p) { func_0043C0E0(p + -208); }

void func_0043C4E0(char *p) { func_0043C0E0(p + -304); }

void func_0043C570(char *p) { func_0043C0E0(p + -464); }

unsigned char func_004348B0(char *p) { return *(unsigned char *)(p + 18366); }

signed char func_0043B520(char *p) { return *(signed char *)(p + 18360); }

signed char func_0043B960(char *p) { return *(signed char *)(p + 18359); }

int func_0043C0A0(void) { return 0; }

signed char func_0043C0B0(char *p) { return *(signed char *)(p + 18358); }

signed char func_0043C0C0(char *p) { return *(signed char *)(p + 18357); }

signed char func_0043C0D0(char *p) { return *(signed char *)(p + 18356); }

float func_0043B530(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 18344) = *(float *)(p1 + 44);
    return t0;
}

float func_0043C090(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 17956);
    *(float *)(p1 + 0) = *(float *)(p0 + 17956);
    return t0;
}

void func_00439960(int p0, int p1) {
    void func_00439970();
    func_00439970(p0, p1, -1);
}

/*
 * The nine PoC functions that match, at their USA (SLUS_209.64) addresses.
 * These are not yet assigned to their original translation units; move each
 * one to its real TU once TU boundaries are known (DMC3_DECOMP_ROADMAP.md).
 * Struct layouts are offset-only placeholders: unkXXX = field at offset XXX.
 */
typedef unsigned char u8;

/* JP 0x0043C050 */
typedef struct { u8 pad[0x47A0]; float unk47A0; } Obj43C080;

void func_0043C080(Obj43C080 *p, float *out) { *out = p->unk47A0; }
