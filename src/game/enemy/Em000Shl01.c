extern char D_0055E250[];

extern char D_0055E254[];

extern char D_0055E258[];

extern char D_0055E25C[];

extern char D_0055E260[];

int func_0036DF10(char *, int, int, int, int, int);

int func_0036DF70(char *p, int i) {
    if (i > 15) {
        return 0;
    }
    return func_0036DF10(p, *(int *)(D_0055E250 + i * 20), *(int *)(D_0055E254 + i * 20), *(int *)(D_0055E258 + i * 20), *(int *)(D_0055E25C + i * 20), *(int *)(D_0055E260 + i * 20));
}

extern char D_006663C0[];

extern unsigned char D_00666716[];

void func_001AE0D0(char *);

int func_0036DF10(char *out, int a, int b, int c, int d, int v) {
    if (D_00666716[0] == 1) {
        func_001AE0D0(D_006663C0);
        *(int *)out = v;
        return 1;
    }
    return 0;
}

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_001AD140(char *);

void func_0028C5C0(char *, int, float);

extern char D_01DF5D20[];

extern char *D_005BCA20;

float func_001F9C40(char *, int);

void func_0036DD40(char *p) {
    *(unsigned char *)(p + 0x45) = 4;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(float *)(p + 0x150) = *(float *)(p + 0x150) - func_001F9C40(D_01DF5D20, 0x87);
        if (*(float *)(p + 0x150) < 0.0f) {
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        }
        break;
    case 1:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(float *)(p + 0x150) = 3.0f;
        func_0028C200(p + 0x160, p + 0x380, p + 0x390, 3, D_005BCA20, p, 0);
        *(unsigned char *)(p + 0x380) = 1;
        *(unsigned char *)(p + 0x381) = 0;
        *(short *)(p + 0x382) = 0;
        *(unsigned char *)(p + 0x390) = 2;
        *(float *)(p + 0x3A0) = 0.0f;
        *(float *)(p + 0x3A4) = 0.0f;
        *(float *)(p + 0x3A8) = 0.0f;
        *(float *)(p + 0x3AC) = 1.0f;
        *(float *)(p + 0x3B0) = 450.0f;
        *(int *)(p + 0x238) = 0x140;
        func_0028C8E0(p + 0x160, 7);
        func_0028C910(p + 0x160);
        func_0028C3A0(p + 0x160, 0, -1, p + 0x3F0);
    default:
        *(float *)(p + 0x150) = *(float *)(p + 0x150) - func_001F9C40(D_01DF5D20, 0x87);
        if (*(float *)(p + 0x150) < 0.0f) {
            *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
            func_001AD140(p);
        } else {
            func_0028C5C0(p + 0x160, 0, 1.0f);
        }
        break;
    }
}

extern char D_00645A30[];

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0036DAD0(char *);

typedef struct { int w[16]; } S64_36D;

char *func_0036DBC0(char *p0, char *p1) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;

    b.pp = &ret;
    *b.pp = 0;
    b.x = 0;
    func_0013D6A0(a);
    *b.pp = func_001B0FD0(a, 0x430, 1);
    if ((t = *b.pp) != 0) {
        if (t != 0) {
            func_0036DAD0(t);
        }
        func_0013D640(*b.pp + 0x24, a);
        func_001959E0(D_00645A30, 0x9, *b.pp);
        r = *b.pp; r[0x18] = 1;
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
        *(char **)(ret + 0x3E4) = p0;
        *(S64_36D *)(ret + 0x3F0) = **(S64_36D **)(*(char **)(p1 + 0xC) + 0x104);
        *(float *)(ret + 0x150) = 7.0f;
        *(char *)(ret + 0x45) = 4;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(ret + 0x50), "r"(p0 + 0x50) : "memory");
        *(short *)(ret + 0x90) = *(short *)(p0 + 0x90);
    }
    return ret;
}

extern void func_0036DB30();

void func_0036DEF0(char *p) { func_0036DB30(p + -64); }

void func_0036DF00(char *p) { func_0036DB30(p + -160); }

void func_0036DEC0(void) {}

void func_0036DED0(void) {}

void func_0036DEE0(void) {}
