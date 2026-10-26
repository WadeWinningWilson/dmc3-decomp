typedef struct { signed char k; signed char t; signed char v; } KVB;

int func_00406C60(int p0, signed char k) {
    extern KVB D_0056AEE0[];
    int i;
    KVB *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AEE0[0].t != 0x3B) {
        e = D_0056AEE0;
        do {
            if (k == e->k) {
                return D_0056AEE0[i].v;
            }
            e++;
            i++;
        } while (e->t != 0x3B);
    }
    return -1;
}

typedef struct { signed char v; signed char k; } KV2;

extern KV2 D_0056AF30[];

int func_00406EA0(int p0, signed char k) {
    int i;
    KV2 *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AF30[0].v != 0x3B) {
        e = D_0056AF30;
        do {
            if (k == e->k) {
                return D_0056AF30[i].v;
            }
            e++;
            i++;
        } while (e->v != 0x3B);
    }
    return -1;
}

typedef struct { signed char a; signed char b; signed char c; } KV3;

int func_00406CF0(int p0, signed char k) {
    extern KV3 D_0056AEE0[];
    int i;
    KV3 *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AEE0[0].a != 0xF) {
        e = D_0056AEE0;
        do {
            if (k == e->c) {
                return D_0056AEE0[i].a;
            }
            e++;
            i++;
        } while (e->a != 0xF);
    }
    return -1;
}

int func_00406D80(int p0, signed char k) {
    extern KV3 D_0056AEE0[];
    int i;
    KV3 *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AEE0[0].b != 0x3B) {
        e = D_0056AEE0;
        do {
            if (k == e->c) {
                return D_0056AEE0[i].b;
            }
            e++;
            i++;
        } while (e->b != 0x3B);
    }
    return -1;
}

int func_00406E10(signed char k) {
    extern KV3 D_0056AEE0[];
    int i;
    KV3 *e;
    if (k == -1) {
        return -1;
    }
    i = 0;
    if (D_0056AEE0[0].b != 0x3B) {
        e = D_0056AEE0;
        do {
            if (k == e->a) {
                return D_0056AEE0[i].b;
            }
            e++;
            i++;
        } while (e->b != 0x3B);
    }
    return -1;
}

void func_00253BC0(char *, char *);

extern char *D_01CAFF10[];

typedef struct { signed char c[5]; } C5_406;

typedef struct { signed char c[15]; } C15_406;

typedef struct { signed char c[6]; } C6_406;

typedef struct { float f[4]; } F4_406;

typedef struct { float f[2]; } F2_406;

static inline void st406(char *d, signed char i, int v) { if (i == 0) *(int *)(d + 0x1C) = v; else *(unsigned char *)(d + i + 0x20) = v; }

void func_00406740(char *p) {
    char *d;
    int i;
    d = D_01CAFF10[0];
    func_00253BC0(p + 0xA0, p + 0x4C);
    *(C5_406 *)(d + 0xFC) = *(C5_406 *)(p + 0x4C);
    *(C5_406 *)(d + 0x101) = *(C5_406 *)(p + 0x51);
    *(signed char *)(d + 0x106) = *(signed char *)(p + 0x56);
    *(signed char *)(d + 0x107) = *(signed char *)(p + 0x57);
    *(signed char *)(d + 0x108) = *(signed char *)(p + 0x58);
    *(signed char *)(d + 0x109) = *(signed char *)(p + 0x59);
    *(unsigned char *)(d + 0x10A) = *(unsigned char *)(p + 0x5A);
    *(signed char *)(d + 0x10B) = *(signed char *)(p + 0x5B);
    *(unsigned char *)(d + 0x10C) = *(unsigned char *)(p + 0x5C);
    *(unsigned char *)(d + 0x10D) = *(unsigned char *)(p + 0x5D);
    *(signed char *)(d + 0x10E) = *(signed char *)(p + 0x5E);
    *(signed char *)(d + 0x10F) = *(signed char *)(p + 0x5F);
    *(F4_406 *)(d + 0x110) = *(F4_406 *)(p + 0x60);
    *(F4_406 *)(d + 0x120) = *(F4_406 *)(p + 0x70);
    *(float *)(d + 0x130) = *(float *)(p + 0x80);
    *(float *)(d + 0x134) = *(float *)(p + 0x84);
    *(float *)(d + 0x138) = *(float *)(p + 0x88);
    *(float *)(d + 0x13C) = *(float *)(p + 0x8C);
    *(float *)(d + 0x140) = *(float *)(p + 0x90);
    *(float *)(d + 0x144) = *(float *)(p + 0x94);
    *(float *)(d + 0x148) = *(float *)(p + 0x98);
    *(float *)(d + 0x14C) = *(float *)(p + 0x9C);
    *(C5_406 *)(d + 0x9C) = *(C5_406 *)(p + 0xA0);
    *(C15_406 *)(d + 0xA1) = *(C15_406 *)(p + 0xA5);
    *(signed char *)(d + 0xB0) = *(signed char *)(p + 0xB4);
    *(signed char *)(d + 0xB1) = *(signed char *)(p + 0xB5);
    *(unsigned char *)(d + 0xB2) = *(unsigned char *)(p + 0xB6);
    *(unsigned char *)(d + 0xB3) = *(unsigned char *)(p + 0xB7);
    *(float *)(d + 0xB4) = *(float *)(p + 0xB8);
    *(float *)(d + 0xB8) = *(float *)(p + 0xBC);
    *(signed char *)(d + 0xBC) = *(signed char *)(p + 0xC0);
    *(C6_406 *)(d + 0xBD) = *(C6_406 *)(p + 0xC1);
    *(F4_406 *)(d + 0xC4) = *(F4_406 *)(p + 0xC8);
    *(F2_406 *)(d + 0xD4) = *(F2_406 *)(p + 0xD8);
    *(F4_406 *)(d + 0xDC) = *(F4_406 *)(p + 0xE0);
    *(F4_406 *)(d + 0xEC) = *(F4_406 *)(p + 0xF0);
    *(int *)(d + 0x1C) = *(int *)(p + 4);
    for (i = 1; i < 59; i++) {
        st406(d, (signed char)i, *(unsigned char *)(p + i + 8));
    }
    *(unsigned char *)(d + 0x5B) = *(unsigned char *)(p + 0x43);
    *(unsigned char *)(d + 0x5C) = *(unsigned char *)(p + 0x44);
    *(unsigned char *)(d + 0x5D) = *(unsigned char *)(p + 0x45);
    *(unsigned char *)(d + 0x5E) = *(unsigned char *)(p + 0x46);
    *(unsigned char *)(d + 0x5F) = *(unsigned char *)(p + 0x47);
    *(unsigned char *)(d + 0x60) = *(unsigned char *)(p + 0x48);
    *(unsigned char *)(d + 0x61) = *(unsigned char *)(p + 0x49);
    *(unsigned char *)(d + 0x62) = *(unsigned char *)(p + 0x4A);
}

static inline int ld406(char *d, signed char i) { if (i == 0) return *(int *)(d + 0x1C); return *(unsigned char *)(d + i + 0x20); }

void func_004061C0(char *p) {
    char *d;
    int i;
    d = D_01CAFF10[0];
    func_00253BC0(d + 0x9C, d + 0xFC);
    *(C5_406 *)(p + 0xA0) = *(C5_406 *)(d + 0x9C);
    *(C15_406 *)(p + 0xA5) = *(C15_406 *)(d + 0xA1);
    *(signed char *)(p + 0xB4) = *(signed char *)(d + 0xB0);
    *(signed char *)(p + 0xB5) = *(signed char *)(d + 0xB1);
    *(unsigned char *)(p + 0xB6) = *(unsigned char *)(d + 0xB2);
    *(unsigned char *)(p + 0xB7) = *(unsigned char *)(d + 0xB3);
    *(float *)(p + 0xB8) = *(float *)(d + 0xB4);
    *(float *)(p + 0xBC) = *(float *)(d + 0xB8);
    *(signed char *)(p + 0xC0) = *(signed char *)(d + 0xBC);
    *(C6_406 *)(p + 0xC1) = *(C6_406 *)(d + 0xBD);
    *(F4_406 *)(p + 0xC8) = *(F4_406 *)(d + 0xC4);
    *(F2_406 *)(p + 0xD8) = *(F2_406 *)(d + 0xD4);
    *(F4_406 *)(p + 0xE0) = *(F4_406 *)(d + 0xDC);
    *(F4_406 *)(p + 0xF0) = *(F4_406 *)(d + 0xEC);
    *(C5_406 *)(p + 0x4C) = *(C5_406 *)(d + 0xFC);
    *(C5_406 *)(p + 0x51) = *(C5_406 *)(d + 0x101);
    *(signed char *)(p + 0x56) = *(signed char *)(d + 0x106);
    *(signed char *)(p + 0x57) = *(signed char *)(d + 0x107);
    *(signed char *)(p + 0x58) = *(signed char *)(d + 0x108);
    *(signed char *)(p + 0x59) = *(signed char *)(d + 0x109);
    *(unsigned char *)(p + 0x5A) = *(unsigned char *)(d + 0x10A);
    *(signed char *)(p + 0x5B) = *(signed char *)(d + 0x10B);
    *(unsigned char *)(p + 0x5C) = *(unsigned char *)(d + 0x10C);
    *(unsigned char *)(p + 0x5D) = *(unsigned char *)(d + 0x10D);
    *(signed char *)(p + 0x5E) = *(signed char *)(d + 0x10E);
    *(signed char *)(p + 0x5F) = *(signed char *)(d + 0x10F);
    *(F4_406 *)(p + 0x60) = *(F4_406 *)(d + 0x110);
    *(F4_406 *)(p + 0x70) = *(F4_406 *)(d + 0x120);
    *(float *)(p + 0x80) = *(float *)(d + 0x130);
    *(float *)(p + 0x84) = *(float *)(d + 0x134);
    *(float *)(p + 0x88) = *(float *)(d + 0x138);
    *(float *)(p + 0x8C) = *(float *)(d + 0x13C);
    *(float *)(p + 0x90) = *(float *)(d + 0x140);
    *(float *)(p + 0x94) = *(float *)(d + 0x144);
    *(float *)(p + 0x98) = *(float *)(d + 0x148);
    *(float *)(p + 0x9C) = *(float *)(d + 0x14C);
    *(int *)(p + 0x100) = *(int *)(d + 0x14);
    *(int *)(p + 4) = *(int *)(d + 0x1C);
    for (i = 1; i < 59; i++) {
        *(unsigned char *)(p + i + 8) = ld406(d, (signed char)i);
    }
    *(unsigned char *)(p + 0x43) = *(unsigned char *)(d + 0x5B);
    *(unsigned char *)(p + 0x44) = *(unsigned char *)(d + 0x5C);
    *(unsigned char *)(p + 0x45) = *(unsigned char *)(d + 0x5D);
    *(unsigned char *)(p + 0x46) = *(unsigned char *)(d + 0x5E);
    *(unsigned char *)(p + 0x47) = *(unsigned char *)(d + 0x5F);
    *(unsigned char *)(p + 0x48) = *(unsigned char *)(d + 0x60);
    *(unsigned char *)(p + 0x49) = *(unsigned char *)(d + 0x61);
    *(unsigned char *)(p + 0x4A) = *(unsigned char *)(d + 0x62);
}

float func_00406BA0(char *p0, float f0) {
    float v0;
    *(float *)(p0 + 132) = (*(float *)(p0 + 132) + f0);
    v0 = *(float *)(p0 + 136);
    if (*(float *)(p0 + 132) > v0) {
        *(float *)(p0 + 132) = v0;
    }
    return *(float *)(p0 + 132);
}

float func_00406BD0(char *p0, float f0) {
    float v0;
    v0 = 20000.0f;
    *(float *)(p0 + 136) += f0;
    if (*(float *)(p0 + 136) > v0) {
        *(float *)(p0 + 136) = v0;
    }
    return *(float *)(p0 + 136);
}

float func_00406C00(char *p0, float f0) {
    float v0;
    *(float *)(p0 + 140) = (*(float *)(p0 + 140) + f0);
    v0 = *(float *)(p0 + 144);
    if (*(float *)(p0 + 140) > v0) {
        *(float *)(p0 + 140) = v0;
    }
    return *(float *)(p0 + 140);
}

float func_00406C30(char *p0, float f0) {
    float v0;
    v0 = 10000.0f;
    *(float *)(p0 + 144) += f0;
    if (*(float *)(p0 + 144) > v0) {
        *(float *)(p0 + 144) = v0;
    }
    return *(float *)(p0 + 144);
}
