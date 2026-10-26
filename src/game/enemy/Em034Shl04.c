void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00494960(char *);

char *func_00494810(float *v, float *w, float c) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char *o;
    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_001AAD30(a);
    *b.pp = func_001B0FD0(a, 0x470, 1);
    if ((t = *b.pp) != 0) {
        r = func_001B1610(0x470, t);
        if (r != 0) {
            func_00494960(r);
        }
        func_001B1440((char *)&b, *b.pp, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        func_001B1430(*b.pp, 1);
        goto ok;
    }
    *b.pp = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(v) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0xF0), "r"(w) : "memory");
        *(float *)(ret + 0x468) = c;
    }
    return ret;
}

void func_00495280(char *);

char *func_00495110(char *p, char *s, short h) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    if (p == 0) {
        return 0;
    }
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x410, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x410, t);
        if (r != 0) {
            func_00495280(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x8, **q);
        func_001B1430(**q, 1);
        goto ok;
    }
    **q = 0;
    b.f = 0;
    func_0013D240(a, -1);
    goto done;
ok:
    b.f = 1;
    func_0013D240(a, -1);
done:
    if (ret != 0) {
        *(char **)(ret + 0x3F8) = s;
        *(short *)(ret + 0x374) = h;
        *(char **)(ret + 0x3F0) = p;
        *(unsigned char *)(ret + 0x45) = 2;
        *(signed char *)(ret + 0x46) = *(signed char *)(p + 0x46);
    }
    return ret;
}

void func_0028C740(char *);

extern char D_01DFABA0[];

char *func_00207480(int, int, char *, int);

void func_00206730(char *);

void func_0028C5C0(char *, int, float);

void func_00330BD0(char *, int, char *, int, int);

void func_00494E70(char *p) {
    void func_0028C3A0(char *, int, int, char *);
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0x468) = 3.0f;
        func_00207480(3, 0x1E8, p + 0x150, 16);
        func_00330BD0(D_01DFABA0, 0x32, p + 0x50, 0x22, 0);
        func_0028C740(p + 0x190);
        *(unsigned char *)(p + 0x3B0) = 1;
        *(float *)(p + 0x3E0) = 200.0f;
        func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
        break;
    case 1:
        *(float *)(p + 0x468) = *(float *)(p + 0x468) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x468) < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
        }
        break;
    }
    func_0028C5C0(p + 0x190, 0, *(float *)(p + 0x10));
    func_00206730(p + 0x460);
    func_00206730(p + 0x464);
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_00131700(char *, char *, char *);

void func_00105230(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

char *func_00207470(int, int, char *);

extern char D_00577780[];

void func_00494A60(char *p) {
    char *func_0028C3A0(char *, int, int, char *);
    *(unsigned char *)(p + 4) = 1;
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(int *)(p + 0x80) = 0;
    *(int *)(p + 0x84) = 0;
    *(int *)(p + 0x88) = 0;
    *(float *)(p + 0x8C) = 1.0f;
    *(unsigned char *)(p + 0x46C) = 0;
    UNIT(p + 0x150);
    func_00131700(p + 0x150, p + 0x150, p + 0x80);
    func_00105230(p + 0x150, p + 0x150, p + 0x50);
    *(char **)(p + 0x460) = func_00207470(1, 0x2FD, 0);
    if (*(char **)(p + 0x460) != 0) {
        char *o = *(char **)(p + 0x460);
        *(char **)(o + 0x90) = p + 0x150;
        o[0x9A] = 3;
        {
            char *o2 = *(char **)(p + 0x460);
            o2[0x3A] = 1;
        }
    }
    *(int *)(p + 0x464) = 0;
    *(unsigned char *)(p + 0x3B0) = 4;
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    *(unsigned char *)(p + 0x3B4) = 2;
    *(unsigned char *)(p + 0x3B5) = 0;
    *(short *)(p + 0x3B6) = 1;
    *(unsigned char *)(p + 0x3C0) = 2;
    *(int *)(p + 0x3D0) = 0;
    *(int *)(p + 0x3D4) = 0;
    *(int *)(p + 0x3D8) = 0;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 10.0f;
    *(unsigned char *)(p + 0x410) = 2;
    *(int *)(p + 0x420) = 0;
    *(int *)(p + 0x424) = 0;
    *(int *)(p + 0x428) = 0;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 10.0f;
    func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 3, D_00577780, p, 0);
    *(int *)(p + 0x268) = 0x30443;
    func_0028C8E0(p + 0x190, 3);
    func_0028C910(p + 0x190);
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
}

int func_001AD140();

int func_00494F70(p0) char *p0; {
    char *v0;
    int v1;
    int v2;
    int tmp0;
    v0 = p0;
    v1 = *(int *)(p0 + 1120);
    if (v1 != 0) {
        func_001AD140(v1);
    }
    v2 = *(int *)(v0 + 1124);
    if (v2 != 0) {
        func_001AD140(v2);
    }
    tmp0 = func_001AD140(v0);
    return tmp0;
}

void func_00495000(p0) int p0; {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"((p0 + 864)), "r"(((stk + 0) + 0)) : "memory");
    *(float *)((stk + 0) + 12) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"((p0 + 80)), "r"(((stk + 0) + 0)) : "memory");
}

extern void func_00495050();

void func_004950F0(char *p) { func_00495050(p + -64); }

void func_00495100(char *p) { func_00495050(p + -160); }

void func_00494FD0(void) {}

void func_00494FE0(void) {}

void func_00494FF0(void) {}
