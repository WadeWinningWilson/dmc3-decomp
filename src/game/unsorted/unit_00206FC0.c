char *func_001B4250(float *, int, int, int);

char *func_001EDE80(float *, int, int, int);

char *func_001B11B0(float *, int, int, int);

char *func_00205A00(float *, int, int, int);

char *func_002075D0(unsigned char type, int id, float *src, unsigned char mode, unsigned char fl) {
    void func_00105300(float *, float *);
    void func_00131650(float *, float *);
    float m[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    char *r;
    int i;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory");
    switch (mode) {
    case 0:
        func_00105300(m, src);
        break;
    case 1:
        m[12] = src[12];
        m[13] = src[13];
        m[14] = src[14];
        break;
    case 2:
        func_00105300(m, src);
        m[12] = 0.0f;
        m[13] = 0.0f;
        m[14] = 0.0f;
        break;
    case 3:
        func_00105300(m, src);
        for (i = 0; i < 3; i++) {
            v[0] = m[i * 4 + 0];
            v[1] = m[i * 4 + 1];
            v[2] = m[i * 4 + 2];
            v[3] = 1.0f;
            func_00131650(v, v);
            m[i * 4 + 0] = v[0];
            m[i * 4 + 1] = v[1];
            m[i * 4 + 2] = v[2];
        }
        break;
    }
    switch (type) {
    case 0:
        r = func_001B4250(m, 0, id, 0);
        break;
    case 1:
        r = func_001EDE80(m, 0, id, 0);
        break;
    case 2:
        r = func_001B11B0(m, 0, id, 0);
        break;
    case 3:
        r = func_00205A00(m, 0, id, 0);
        break;
    }
    if (r) *(unsigned int *)(r + 0xC) |= fl;
    return r;
}

int func_00207060(char *p) {
    char *v = *(char **)(p + 68);
    if (v != 0) {
        switch (*(unsigned char *)(v + 56)) {
        case 0:
            return 0;
        case 2:
            *(int *)(p + 68) = 0;
            return 0;
        case 1:
            return 1;
        case 3:
            *(int *)(p + 68) = 0;
            return 1;
        }
    }
    return 0;
}

int func_002077F0(char *p) {
    switch (*(unsigned char *)(p + 0x38)) {
    case 0:
    case 1:
        return 0;
    case 2:
    case 3:
        return 1;
    }
    return 0;
}

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

unsigned char func_002070F0(char *);

int func_00207100(char *p, char *m) {
    void func_00105300(char *, char *);
    void func_00131650(char *, char *);
    float v[4];
    int i;
    if (func_002070F0(p) == 0) return 0;
    UNIT(m);
    switch (*(unsigned char *)(p + 0x9A)) {
    case 0:
        func_00105300(m, *(char **)(p + 0x90));
        break;
    case 1:
        *(float *)(m + 0x30) = *(float *)(*(char **)(p + 0x90) + 0x30);
        *(float *)(m + 0x34) = *(float *)(*(char **)(p + 0x90) + 0x34);
        *(float *)(m + 0x38) = *(float *)(*(char **)(p + 0x90) + 0x38);
        break;
    case 2:
        func_00105300(m, *(char **)(p + 0x90));
        *(float *)(m + 0x30) = 0.0f;
        *(float *)(m + 0x34) = 0.0f;
        *(float *)(m + 0x38) = 0.0f;
        break;
    case 3:
        func_00105300(m, *(char **)(p + 0x90));
        for (i = 0; i < 3; i++) {
            v[0] = ((float *)(m + i * 16))[0];
            v[1] = ((float *)(m + i * 16))[1];
            v[2] = ((float *)(m + i * 16))[2];
            v[3] = 1.0f;
            func_00131650((char *)v, (char *)v);
            ((float *)(m + i * 16))[0] = v[0];
            ((float *)(m + i * 16))[1] = v[1];
            ((float *)(m + i * 16))[2] = v[2];
        }
        break;
    }
    return 1;
}

unsigned char func_00207280(char *);

int func_00207290(char *p, char *m) {
    void func_00105300(char *, char *);
    void func_00131650(char *, char *);
    float v[4];
    int i;
    if (func_00207280(p) == 0) return 0;
    UNIT(m);
    switch (*(unsigned char *)(p + 0x99)) {
    case 0:
        func_00105300(m, *(char **)(p + 0x94));
        break;
    case 1:
        *(float *)(m + 0x30) = *(float *)(*(char **)(p + 0x94) + 0x30);
        *(float *)(m + 0x34) = *(float *)(*(char **)(p + 0x94) + 0x34);
        *(float *)(m + 0x38) = *(float *)(*(char **)(p + 0x94) + 0x38);
        break;
    case 2:
        func_00105300(m, *(char **)(p + 0x94));
        *(float *)(m + 0x30) = 0.0f;
        *(float *)(m + 0x34) = 0.0f;
        *(float *)(m + 0x38) = 0.0f;
        break;
    case 3:
        func_00105300(m, *(char **)(p + 0x90));
        for (i = 0; i < 3; i++) {
            v[0] = ((float *)(m + i * 16))[0];
            v[1] = ((float *)(m + i * 16))[1];
            v[2] = ((float *)(m + i * 16))[2];
            v[3] = 1.0f;
            func_00131650((char *)v, (char *)v);
            ((float *)(m + i * 16))[0] = v[0];
            ((float *)(m + i * 16))[1] = v[1];
            ((float *)(m + i * 16))[2] = v[2];
        }
        break;
    }
    return 1;
}

void func_002078F0(unsigned int *mt, unsigned int seed) {
    int i;
    for (i = 0; i < 624; i++) {
        mt[i] = seed & 0xFFFF0000;
        seed = 69069 * seed + 1;
        mt[i] |= (seed & 0xFFFF0000) >> 16;
        seed = 69069 * seed + 1;
    }
    mt[624] = 624;
}

extern char D_01CAF51F[];

extern char D_01DF7E00[];

extern char D_01DF7E20[];

int func_0013D070();

int func_001B0FD0();

int func_00206FC0(p0) int p0; {
    int v0;
    int v1;
    int v2;
    int v3;
    int tmp0;
    v0 = p0;
    if (*(unsigned char *)D_01CAF51F == 1) {
        v1 = 0x90000;
    } else {
        v1 = 0x50000;
    }
    v2 = func_001B0FD0(D_01DF7E00, v1, -1);
    if (v2 == 0) {
        v3 = 0;
    } else {
        tmp0 = func_0013D070(D_01DF7E20, v2, v0, v1, 7);
        v3 = ((tmp0 & 255) != 0);
    }
    return v3;
}

int func_00207410(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int func_00105300();
    int tmp0;
    tmp0 = func_00105300((p0 + 80));
    *(int *)((char *)p0 + 144) = p2;
    *(char *)((char *)p0 + 154) = p3;
    return tmp0;
}

void func_00207460(char *p0, int p1, int p2) {
    *(int *)(p0 + 68) = p1;
    *(char *)(p0 + 56) = 0;
    *(char *)(p0 + 58) = p2;
}

void func_00207480();

void func_00207470(int p0, int p1, int p2) {
    func_00207480(p0, p1, p2, 32);
}
