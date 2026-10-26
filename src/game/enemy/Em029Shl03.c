void func_004AB580(char *p) {
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(*(char **)(p + 1184) + 260) + 48), "r"(p + 80) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tsqc2 $vf4, 0x0(%1)" : : "r"(*(char **)(p + 208) + 128), "r"(p + 128) : "memory");
    *(short *)(p + 144) = (short)(unsigned short)(short)(int)(0.5f + 65536.0f * *(float *)(p + 132) / 6.283185005187988f);
    *(float *)(p + 1232) = *(float *)(*(char **)(p + 208) + 84);
}

void func_00206730(char *);

void func_001AD100(char *);

int func_0041D600(char *p);

void func_004AB880(char *);

void func_004ABBF0(char *);

void func_004AC030(char *);

void func_004AC420(char *);

void func_004AC670(char *);

void func_004AC8F0(char *);

void func_004ACA80(char *);

void func_004AB780(char *p) {
    if ((unsigned char)func_0041D600(p) != 0) {
        func_001AD100(p);
        func_00206730(p + 0x4C0);
        switch (*(int *)(p + 0x4C4)) {
        case 0:
            func_004AB880(p);
            break;
        case 1:
            func_004ABBF0(p);
            break;
        case 2:
            func_004AC030(p);
            break;
        case 3:
            func_004AC420(p);
            break;
        case 0x80:
            func_004AC670(p);
            break;
        case 0x81:
            func_004AC8F0(p);
            break;
        case 0x82:
            func_004ACA80(p);
            break;
        }
    }
}

extern char D_00645A30[];

void func_0028C110(char *);

void func_0013D6A0(char *);

void func_0013D240(char *, int);

char *func_001B0FD0(char *, int, int);

void func_0013D640(char *, char *);

void func_001959E0(char *, int, char *);

typedef struct { unsigned char f; int x; char **pp; } HB;

void func_00252FA0(char *);

extern char D_005B8090[];

extern char D_005B80B4[];

extern char D_005B8134[];

typedef struct { float f[4]; } SF4;

char *func_004AB260(char *p0, int p1, int p2, int p3, int p4, int p5) {
    char *ret;
    HB b;
    char a[16] __attribute__((aligned(16)));
    char *t;
    char ***q;
    char *o;
    q = &b.pp;
    *q = &ret;
    **q = 0;
    b.x = 0;
    func_0013D6A0(a);
    **q = func_001B0FD0(a, 0x4F0, 1);
    if ((t = **q) != 0) {
        if (t != 0) {
            func_00252FA0(t);
            *(char **)t = D_005B8090;
            *(char **)(t + 0x40) = D_005B80B4;
            *(char **)(t + 0xA0) = D_005B8134;
            func_0028C110(t + 0x1A0);
            *(char *)(t + 0x420) = 0;
        }
        func_0013D640(**q + 0x24, a);
        func_001959E0(D_00645A30, 0x9, **q);
        (**q)[0x18] = 1;
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
    o = ret;
    if (o != 0) {
        *(signed char *)(o + 0x150) = *(signed char *)p0;
        *(SF4 *)(o + 0x160) = *(SF4 *)(p0 + 0x10);
        *(short *)(o + 0x170) = *(short *)(p0 + 0x20);
        *(unsigned short *)(o + 0x172) = *(unsigned short *)(p0 + 0x22);
        *(unsigned short *)(o + 0x174) = *(unsigned short *)(p0 + 0x24);
        *(SF4 *)(o + 0x178) = *(SF4 *)(p0 + 0x28);
        *(int *)(ret + 0x190) = p1;
        *(int *)(ret + 0xD0) = p2;
        *(int *)(ret + 0x4A0) = p3;
        *(int *)(ret + 0x4C4) = p4;
        *(int *)(ret + 0x4C8) = p5;
    }
    return ret;
}

void func_0028C740();

void func_0041D670();

void func_004ACAB0(int p0) {
    func_0028C740((p0 + 416));
    func_0041D670((p0 + 1216));
}

extern char D_00581F30[];

void func_0028C200();

void func_0028C3A0();

void func_0028C8E0();

void func_0028C910();

void func_004AB610(p) char *p; {
    *(char *)(p + 960) = 1;
    *(char *)(p + 961) = 0;
    *(short *)(p + 962) = 0;
    *(char *)(p + 976) = 6;
    *(int *)(p + 992) = 0;
    *(int *)(p + 996) = 0;
    *(int *)(p + 1000) = 0;
    *(int *)(p + 1004) = 1065353216;
    *(int *)(p + 1012) = 1125515264;
    *(int *)(p + 1008) = 1140457472;
    func_0028C200(p + 416, p + 960, p + 976, 3, D_00581F30, p, 0);
    *(int *)(p + 632) = 64;
    func_0028C8E0(p + 416, 4);
    func_0028C910(p + 416);
    func_0028C3A0(p + 416, 0, -1, p + 1120);
}

void func_004AB6C0(p) char *p; {
    *(char *)(p + 960) = 5;
    *(char *)(p + 961) = 0;
    *(short *)(p + 962) = 0;
    *(char *)(p + 976) = 2;
    *(int *)(p + 992) = 0;
    *(int *)(p + 996) = 1125515264;
    *(int *)(p + 1000) = 0;
    *(int *)(p + 1004) = 1065353216;
    *(int *)(p + 1008) = 1126825984;
    func_0028C200(p + 416, p + 960, p + 976, 3, D_00581F30, p, 0);
    *(int *)(p + 632) = 197696;
    func_0028C8E0(p + 416, 5);
    func_0028C910(p + 416);
    func_0028C3A0(p + 416, 0, -1, p + 1120);
}

extern void func_004AB460();

void func_004ACB70(char *p) { func_004AB460(p + -64); }

extern void func_004ACAE0();

void func_004ACB80(char *p) { func_004ACAE0(p + -64); }

void func_004ACB90(char *p) { func_004ACAE0(p + -160); }

void func_004AB770(void) {}

void func_004ACA90(void) {}

void func_004ACAA0(void) {}
