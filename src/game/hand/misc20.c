/* Hand-matched functions whose callee prototypes conflict with misc3-19. */

typedef struct { float x; float y; float z; } V3_38B;
extern char D_00563120[];
extern char D_00563160[];
extern char D_0056316C[];
extern char D_00563178[];
extern char D_005631D0[];
extern char D_005631DC[];
extern char D_005631E8[];
void func_00131700(char *, char *, float *);
void func_00105230(char *, char *, char *);
void func_0027A710(char *);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);
void func_0028C5C0(char *, int, float);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define PART(base, tag, e0, k, t0, t1, t2) \
    *(unsigned char *)((char *)(i * 4) + (int)p + base) = tag; \
    *(unsigned char *)((char *)(i * 4) + (int)p + base + 1) = 0; \
    *(short *)((char *)(i * 4) + (int)p + base + 2) = k; \
    *(unsigned char *)((char *)(i * 0x50) + (int)p + e0) = 3; \
    *(V3_38B *)((char *)(i * 0x50) + (int)p + e0 + 0x10) = *(V3_38B *)(t0 + i * 0x24); \
    *(V3_38B *)((char *)(i * 0x50) + (int)p + e0 + 0x1C) = *(V3_38B *)(t1 + i * 0x24); \
    *(V3_38B *)((char *)(i * 0x50) + (int)p + e0 + 0x28) = *(V3_38B *)(t2 + i * 0x24); \
    func_0028C3A0(p + 0x650, k, -1, p + i * 0x40 + 0x590);

void func_0038B9B0(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    char *e;
    v[0] = 6.283185f * (*(float *)(p + 0xF4) / 360.0f);
    v[1] = 6.283185f * (*(float *)(p + 0xF8) / 360.0f);
    v[2] = 6.283185f * (*(float *)(p + 0xFC) / 360.0f);
    v[3] = 1.0f;
    *(float *)(p + 0x50) = *(float *)(p + 0xE8);
    *(float *)(p + 0x54) = *(float *)(p + 0xEC);
    *(float *)(p + 0x58) = *(float *)(p + 0xF0);
    *(float *)(p + 0x5C) = 1.0f;
    UNIT(p + 0x550);
    func_00131700(p + 0x550, p + 0x550, v);
    func_00105230(p + 0x550, p + 0x550, p + 0x50);
    *(int *)(p + 0x80) = 0;
    func_0027A710(p + 0x110);
    func_0028C200(p + 0x650, p + 0x870, p + 0x890, 4, D_00563120, p, 0);
    func_0028C8E0(p + 0x650, 0);
    func_0028C910(p + 0x650);
    if (*(unsigned char *)(p + 0xDC) != 0) {
        for (i = 0; i < 3; i++) {
            PART(0x870, 1, 0x890, i, D_00563160, D_0056316C, D_00563178)
            if ((e = *(char **)((char *)(i * 4) + (int)p + 0x6CC)) != 0) *(int *)(e + 0xC) = 0xC0;
        }
        for (i = 0; i < 3; i++) {
            PART(0x880, 4, 0x9D0, i + 4, D_005631D0, D_005631DC, D_005631E8)
            if ((e = *(char **)((char *)(i * 4) + (int)p + 0x6DC)) != 0) *(unsigned char *)(e + 2) = 1;
        }
    } else {
        for (i = 0; i < 3; i++) {
            PART(0x870, 4, 0x890, i, D_005631D0, D_005631DC, D_005631E8)
            if ((e = *(char **)((char *)(i * 4) + (int)p + 0x6CC)) != 0) *(unsigned char *)(e + 2) = 1;
        }
    }
    func_0028C5C0(p + 0x650, 0, *(float *)(p + 0x10));
    *(unsigned char *)(p + 0x45) = 6;
    *(int *)(p + 0xC) |= 0x40;
}

extern char D_00577EF0[];
extern char D_00577F00[];
extern char D_0056F590[];
void func_001AD100(char *);
void func_001AD140(char *);
void func_00206730(char *);
short func_00131D10(float, float);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
void func_0028C3A0(char *, int, int, char *);
void func_00133890(char *, char *, float *);
char *func_00207480(int, int, float *, int);
float func_00132470(char *, char *);
void func_00132580(float *, char *, float);
void func_0034BA60(int, char *, int, int, int);
void func_0028C740(char *);
void func_0028C5C0(char *, int, float);

#define UNIT(m) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(m) : "memory")
#define VCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")
#define POS() \
    *(float *)(p + 0x180) = *(float *)(p + 0x50); \
    *(float *)(p + 0x184) = *(float *)(p + 0x54); \
    *(float *)(p + 0x188) = *(float *)(p + 0x58); \
    *(float *)(p + 0x18C) = 1.0f;
#define TICK(o) \
    t = *(float *)(p + 0x10); \
    x = *(float *)(p + (o)) - t; \
    *(float *)(p + (o)) = x;
#define DROP(o) \
    if (*(char **)(p + (o)) != 0) { \
        *(unsigned char *)(*(char **)(p + (o)) + 0x3A) = 1; \
        func_001AD140(*(char **)(p + (o))); \
        *(char **)(p + (o)) = 0; \
    }

void func_00448DC0(char *pp) {
    float d[4] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    float m1[16] __attribute__((aligned(16)));
    float u[4] __attribute__((aligned(16)));
    float m2[16] __attribute__((aligned(16)));
    float t;
    float x;
    int f;
    int i;
    char *e;
    char *p = pp;
    func_001AD100(p);
    for (i = 0; i < 3; i++) func_00206730(p + i * 4 + 0x3B0);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        (*(unsigned char *)(p + 4))++;
        __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(p + 0x3F0), "r"(p + 0x3E0) : "memory");
        *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
        func_0028C200(p + 0x190, D_00577EF0, D_00577F00, 3, D_0056F590, p, 0);
        func_0028C8E0(p + 0x190, 3);
        func_0028C910(p + 0x190);
        func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
        func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
        UNIT(p + 0x150);
        v[0] = 0.0f;
        v[1] = 1.0f;
        v[2] = 0.0f;
        v[3] = 1.0f;
        func_00133890(p + 0x150, p + 0x60, v);
        POS()
        VCOPY(p + 0x3D0, p + 0x50);
        *(char **)(p + 0x3B0) = func_00207480(3, 0x190, 0, 0x10);
        e = *(char **)(p + 0x3B0);
        if (e != 0) {
            *(char **)(e + 0x90) = p + 0x150;
            *(unsigned char *)(e + 0x9A) = 3;
        }
        break;
    case 1:
        f = 0;
        if (*(char **)(p + 0x20C) != 0) f = *(int *)(*(char **)(p + 0x20C) + 8);
        if (!(func_00132470(p + 0x50, p + 0x3D0) <= 2000.0f) || (f & 0x30000)) {
            (*(unsigned char *)(p + 4))++;
            *(float *)(p + 0x3C0) = 30.0f;
            UNIT(m1);
            VCOPY(m1 + 12, p + 0x50);
            m1[15] = 1.0f;
            *(char **)(p + 0x3B4) = func_00207480(3, 0x368, m1, 0x10);
            func_0034BA60(0x24, p + 0x50, 0x1D, 0, 1);
        } else {
            func_00132580(u, p + 0x60, *(float *)(p + 0x10));
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(p + 0x50), "r"(u) : "memory");
            POS()
        }
        break;
    case 2:
        TICK(0x3C0)
        if (x < 0.0f) {
            (*(unsigned char *)(p + 4))++;
            *(unsigned char *)(p + 5) = 0;
            *(float *)(p + 0x3C4) = 30.0f;
            func_0028C740(p + 0x190);
        }
        break;
    case 3:
        TICK(0x3C4)
        if (x < 0.0f) {
            DROP(0x3B4)
            DROP(0x3B0)
        }
        switch (*(unsigned char *)(p + 5)) {
        case 0:
            (*(unsigned char *)(p + 5))++;
            *(float *)(p + 0x3C0) = 32.0f;
            UNIT(m2);
            VCOPY(m2 + 12, p + 0x50);
            m2[15] = 1.0f;
            *(char **)(p + 0x3B8) = func_00207480(3, 0x367, m2, 0x10);
        case 1:
            TICK(0x3C0)
            if (x < 0.0f) {
                *(float *)(p + 0x3C0) = 20.0f;
                (*(unsigned char *)(p + 5))++;
                func_0028C8E0(p + 0x190, 6);
                func_0028C910(p + 0x190);
                func_0028C3A0(p + 0x190, 2, -1, p + 0x150);
                func_0034BA60(0x27, p + 0x50, 0x1D, 0, 1);
            }
            break;
        case 2:
            TICK(0x3C0)
            if (x < 0.0f) {
                (*(unsigned char *)(p + 4))++;
                *(unsigned char *)(p + 5) = 0;
            }
            break;
        }
        break;
    case 4:
        func_0028C740(p + 0x190);
        func_001AD140(p);
        break;
    }
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
}
