void func_00105230(char *, char *, char *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_002F55E0(char *p) {
    UNIT(p + 0xB0);
    func_00105230(p + 0xB0, p + 0xB0, p + 0xF0);
}

extern char D_01DFABA0[];

void func_00330B50(char *, int, char *, int);

void func_0034BA60(int, char *, int, int, int);

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

int func_0034BD30(char *, char *, char *, unsigned char *, int, float);

typedef struct { int a; int b; } __attribute__((aligned(8))) I2F5;

typedef struct { int x0; char pad4[0xC]; float f10; char pad14[0x2C]; } T2F5;

static inline unsigned int mt2F5(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

extern I2F5 D_005BC3E0;

extern T2F5 D_00557420[];

int func_002F5220(char *p) {
    unsigned char buf[0x38];
    I2F5 ids;
    unsigned char t;
    if ((unsigned char)func_0034BD30(p + 0xF0, p + 0x100, p + 0x110, buf, 0, 0.777f) == 1) {
        ids = D_005BC3E0;
        if (buf[0] == 0xB) {
            ids.a += 2;
            ids.b += 2;
        }
        t = *(unsigned char *)(p + 0xA0);
        switch (t) {
        case 3:
        case 4:
            if (*(int *)(p + 0x120) == D_00557420[t].x0) {
                func_0034BA60(0x3F, p + 0xF0, 0x37, 0, 1);
            } else {
                func_0034BA60(0x40, p + 0xF0, 0x37, 0, 1);
            }
            break;
        default:
            if (t != 2) {
            if (*(int *)(p + 0x120) == D_00557420[t].x0) {
                func_00330B50(D_01DFABA0, ids.a, p + 0xF0, 5);
            } else {
                func_00330B50(D_01DFABA0, ids.b, p + 0xF0, 5);
            }
            } else {
            if (*(int *)(p + 0x120) == D_00557420[t].x0) {
                func_00330B50(D_01DFABA0, ids.a, p + 0xF0, 6);
            } else {
                func_00330B50(D_01DFABA0, ids.b, p + 0xF0, 6);
            }
            }
            break;
        }
        *(float *)(p + 0x130) = D_00557420[*(unsigned char *)(p + 0xA0)].f10 * (0.1f * (float)(mt2F5() & 7));
        if (mt2F5() & 1) {
            *(float *)(p + 0x130) = *(float *)(p + 0x130) * -1.0f;
        }
        return 1;
    }
    return 0;
}

int func_002F47D0();

int func_002F4FA0();

int func_002F4770(char *p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1, float f2, float f3) {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_002F47D0(p0, v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        break;
    case 1:
        v2 = func_002F4FA0();
        break;
    }
    return v2;
}
