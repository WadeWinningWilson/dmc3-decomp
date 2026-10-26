void func_0013D240(char *, int);

extern char D_00645A30[];

char *func_001B0FD0(char *, int, int);

void func_00105300(float *, char *);

void func_001AAD30(char *);

char *func_001B1610(int, char *);

void func_001B1440(char *, char *, char *);

void func_001959E0(char *, int, char *);

void func_001B1430(char *, int);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_0042CB10(char *);

char *func_0042C9B0(char *p, char *s, int n) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char *r;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_001AAD30(a);
    **q = func_001B0FD0(a, 0x4C0, 1);
    if ((t = **q) != 0) {
        r = func_001B1610(0x4C0, t);
        if (r != 0) {
            func_0042CB10(r);
        }
        func_001B1440((char *)&b, **q, a);
        func_001959E0(D_00645A30, 0x9, **q);
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
        *(char **)(ret + 0x4A0) = p;
        func_00105300((float *)(ret + 0x420), s);
        *(int *)(ret + 0x4B4) = n;
        *(unsigned char *)(ret + 0x45) = 4;
    }
    return ret;
}

extern char D_00568D20[];

void func_0028C8E0(char *, int);

void func_0028C910(char *);

char *func_0028C3A0(char *, int, int, char *);

void func_0028C790(char *, int);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

static inline void set3_42D(float *v, float x, float y, float z) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
}

void func_0042D000(char *p, int b) {
    func_0028C790(p + 0x150, 0);
    func_0028C790(p + 0x150, 1);
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 0x150, 1);
    func_0028C910(p + 0x150);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    *(unsigned char *)(p + 0x380) = 6;
    *(float *)(p + 0x390) = 0.0f;
    *(float *)(p + 0x394) = -200.0f;
    *(float *)(p + 0x398) = 0.0f;
    *(float *)(p + 0x39C) = 1.0f;
    *(float *)(p + 0x3A0) = 800.0f;
    *(float *)(p + 0x3A4) = 100.0f;
    func_0028C3A0(p + 0x150, 0, -1, p + 0x420);
    if (*(char **)(p + 0x1CC) != 0) {
        *(unsigned char *)(*(char **)(p + 0x1CC) + 2) = 1;
    }
    if (b != 0) {
        UNIT(p + 0x460);
        *(unsigned char *)(p + 0x374) = 1;
        *(unsigned char *)(p + 0x375) = 0;
        *(short *)(p + 0x376) = 1;
        *(unsigned char *)(p + 0x3D0) = 3;
        set3_42D((float *)(p + 0x3E0), 2300.0f, 50.0f, 2300.0f);
        set3_42D((float *)(p + 0x3F8), 1700.0f, 50.0f, 2200.0f);
        set3_42D((float *)(p + 0x3EC), 0.0f, 0.0f, 0.0f);
        func_0028C3A0(p + 0x150, 1, -1, p + 0x460);
        if (*(char **)(p + 0x1D0) != 0) {
            *(unsigned char *)(*(char **)(p + 0x1D0) + 2) = 1;
        }
    }
}

extern void func_0042CBF0();

void func_0042D270(char *p) { func_0042CBF0(p + -64); }

extern void func_0042CF60();

void func_0042D280(char *p) { func_0042CF60(p + -64); }

extern void func_0042D1E0();

void func_0042D290(char *p) { func_0042D1E0(p + -64); }

void func_0042D2A0(char *p) { func_0042D1E0(p + -160); }

void func_0042CF80(void) {}

void func_0042D1C0(void) {}

void func_0042D1D0(void) {}
