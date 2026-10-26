/* Counts down 16 timers; parallel arrays in one struct share MW's induction pointer. */
typedef struct Timers28C {
    char pad0[0x28];
    unsigned char busy[16];
    float timer[16];
    int x78;
    int obj[16];
} Timers28C;

void func_0028C630(Timers28C *p, float dt) {
    void func_0028C790(Timers28C *, int);
    int i;
    for (i = 0; i < 16; i++) {
        if (p->obj[i] != 0 && p->busy[i] == 0) {
            if (p->timer[i] <= 0.0f) {
                func_0028C790(p, i);
            } else {
                p->timer[i] -= dt;
            }
        }
    }
}

extern char *D_005BE0D8;

void func_001B6470(int *, int *);

void func_001B6480(int *, int);

void func_001B64B0(int *, int *);

void func_001B6510(int *, int);

void func_001B6520(int *, int);

void func_001B6530(int *, int);

void func_001B6550(int *, int);

void func_001B7E20(int *, int);

extern int D_01C61820[];

void func_0028C9B0(char *p) {
    int v[16];
    int c[4];
    int i;
    int k;
    if (*(unsigned char *)(p + 5) == 0) return;
    c[0] = c[1] = c[2] = c[3] = *(int *)p | *(signed char *)(p + 4) << 24;
    for (i = 0; i < 8; i++) {
        v[0] = i * 64;
        v[1] = 0;
        v[2] = 0xFFFFF0;
        v[3] = 1;
        k = (i + 1) * 64;
        v[4] = i * 64;
        v[5] = *(unsigned short *)(p + 6);
        v[6] = 0xFFFFF0;
        v[7] = 1;
        v[8] = k;
        v[9] = 0;
        v[10] = 0xFFFFF0;
        v[11] = 1;
        v[12] = k;
        v[13] = *(unsigned short *)(p + 6);
        v[14] = 0xFFFFF0;
        v[15] = 1;
        func_001B6470(D_01C61820, v);
        func_001B6480(D_01C61820, 0);
        func_001B64B0(D_01C61820, c);
        func_001B6530(D_01C61820, 4);
        func_001B6520(D_01C61820, 0xF);
        func_001B6510(D_01C61820, 4);
        func_001B6550(D_01C61820, 1);
        func_001B7E20(D_01C61820, 0);
    }
    for (i = 0; i < 8; i++) {
        v[0] = i * 64;
        v[1] = *(short *)(D_005BE0D8 + 0x24) - *(unsigned short *)(p + 8);
        v[2] = 0xFFFFF0;
        k = (i + 1) * 64;
        v[3] = 1;
        v[4] = i * 64;
        v[5] = *(short *)(D_005BE0D8 + 0x22);
        v[6] = 0xFFFFF0;
        v[7] = 1;
        v[8] = k;
        v[9] = *(short *)(D_005BE0D8 + 0x24) - *(unsigned short *)(p + 8);
        v[10] = 0xFFFFF0;
        v[11] = 1;
        v[12] = k;
        v[13] = *(short *)(D_005BE0D8 + 0x22);
        v[14] = 0xFFFFF0;
        v[15] = 1;
        func_001B6470(D_01C61820, v);
        func_001B6480(D_01C61820, 0);
        func_001B64B0(D_01C61820, c);
        func_001B6530(D_01C61820, 4);
        func_001B6520(D_01C61820, 0xF);
        func_001B6510(D_01C61820, 4);
        func_001B6550(D_01C61820, 1);
        func_001B7E20(D_01C61820, 0);
    }
}

void func_00100580(char *);

void func_0028C280(char *);

char *func_0028C1A0(char *p, short flags) {
    if (p) {
        func_0028C280(p);
        if (flags > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_002287F0(char *, char *, signed char, unsigned char);

void func_0028C6D0(char *p) {
    int i;
    for (i = 0; i < 16; i++) {
        if (*(char **)(p + i * 4 + 0x7C) != 0) {
            func_002287F0(*(char **)(p + 0x78), *(char **)(p + i * 4 + 0x7C), *(signed char *)(p + 2), *(unsigned char *)(p + 1));
        }
    }
}

int func_0022A720();

int func_0028C910(char *p0) {
    char *t0;
    int t1;
    t0 = *(char **)(p0 + 120);
    t1 = func_0022A720(*(char **)(p0 + 120));
    *(short *)(p0 + 4) = t1;
    return t1;
}

extern char D_01CAFF0C[];

int func_0028C110(p0) char *p0; {
    int v0;
    char *v1;
    char *v2;
    v0 = 0;
    v1 = p0;
    v2 = p0;
    *(int *)(p0 + 120) = *(int *)(*(char **)D_01CAFF0C + 0);
    *(int *)(p0 + 188) = 0;
    *(int *)(p0 + 192) = 0;
    *(short *)(p0 + 6) = 0;
    do {
        *(unsigned short *)(v1 + 8) = 65535;
        *(int *)(v2 + 124) = 0;
        v0 = (v0 + 8);
        *(unsigned short *)(v1 + 10) = 65535;
        *(int *)(v2 + 128) = 0;
        *(unsigned short *)(v1 + 12) = 65535;
        *(int *)(v2 + 132) = 0;
        *(unsigned short *)(v1 + 14) = 65535;
        *(int *)(v2 + 136) = 0;
        *(unsigned short *)(v1 + 16) = 65535;
        *(int *)(v2 + 140) = 0;
        *(unsigned short *)(v1 + 18) = 65535;
        *(int *)(v2 + 144) = 0;
        *(unsigned short *)(v1 + 20) = 65535;
        *(int *)(v2 + 148) = 0;
        *(unsigned short *)(v1 + 22) = 65535;
        *(int *)(v2 + 152) = 0;
        v1 = (v1 + 16);
        v2 = (v2 + 32);
    } while ((v0 < 16));
    return (int)p0;
}

int func_0028C200(p0, p1, p2, p3, p4, p5, p6) char *p0; int p1; int p2; int p3; int p4; int p5; int p6; {
    *(int *)(p0 + 188) = p1;
    *(int *)(p0 + 192) = p2;
    *(char *)(p0 + 2) = p3;
    *(short *)(p0 + 6) = 0;
    *(int *)(p0 + 196) = p4;
    *(int *)(p0 + 208) = p5;
    *(int *)(p0 + 212) = p6;
    *(int *)(p0 + 216) = 0;
    *(char *)(p0 + 0) = 0;
    *(char *)(p0 + 3) = 5;
    *(int *)(p0 + 228) = 0x3f800000;
    *(int *)(p0 + 220) = 0;
    *(int *)(p0 + 232) = 0;
    *(int *)(p0 + 200) = 0;
    *(char *)(p0 + 1) = 7;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 416)) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((p0 + 480)) : "memory");
    return 1;
}

int func_0022B430();

int func_0028C4B0(p0, p1, p2, p3, p4) char *p0; char *p1; int p2; char *p3; int p4; {
    char *v0;
    char *v1;
    int v2;
    int v3;
    int v4;
    v0 = p0;
    *(char **)(p3 + 256) = p1;
    *(int *)(p3 + 260) = p2;
    *(float *)(p3 + 20) = *(float *)(p0 + 228);
    *(char *)(p3 + 5) = *(signed char *)(p0 + 3);
    *(char *)(p3 + 3) = 0;
    *(char *)(p3 + 2) = *(int *)(p0 + 220);
    v1 = p3;
    if ((*(unsigned char *)(p1 + 0) & 1) != 0) {
        *(int *)(v1 + 760) = *(int *)(v0 + 200);
        *(short *)(v1 + 6) = *(unsigned short *)(v0 + 4);
    } else {
        *(int *)(v1 + 760) = 0;
    }
    *(int *)(v1 + 752) = *(int *)(v0 + 208);
    *(int *)(v1 + 756) = *(int *)(v0 + 212);
    *(int *)(v1 + 24) = p4;
    *(char **)(v1 + 192) = v0;
    v2 = *(int *)(v0 + 216);
    v3 = (int)v1;
    if (v2 == 0) {
        v4 = func_0022B430(v3);
    } else {
        *(int *)(v1 + 12) = v2;
    }
    *(char *)(v1 + 4) = *(unsigned char *)(v0 + 0);
    return v4;
}

int func_0028C580(p0) char *p0; {
    int v0;
    v0 = 0;
    do {
        if (*(int *)(p0 + 124) == 0) {
            return v0;
        }
        v0 = (v0 + 1);
        p0 = (p0 + 4);
    } while ((v0 < 16));
    v0 = -1;
    return v0;
}

int func_0028C740(p0) int p0; {
    int func_0028C790();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v1 = 0;
    do {
        v2 = func_0028C790(v0, v1);
        v1 = (v1 + 1);
    } while ((v1 < 16));
    *(short *)(v0 + 6) = 0;
    return v2;
}

int func_0028C8E0(p0, p1) char *p0; int p1; {
    int v0;
    int v1;
    int v2;
    v0 = *(int *)(p0 + 196);
    v1 = (p1 << 6);
    if (v0 == 0) {
        return 0;
    } else {
        return *(int *)(p0 + 200) = (v0 + v1);
    }
}

int func_0022B0A0();

int func_0028C940(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v0;
    char *v1;
    char *v2;
    int v3;
    int v4;
    v0 = 0;
    v1 = (char *)p0;
    do {
        v2 = *(char **)(v1 + 124);
        if (v2 != 0) {
            v3 = *(unsigned char *)(v2 + 0);
            if (v3 == 2) {
                v4 = func_0022B0A0(v2, v3);
            }
        }
        v0 = (v0 + 1);
        v1 = (v1 + 4);
    } while ((v0 < 16));
    return v4;
}
