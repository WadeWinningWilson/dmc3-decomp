typedef struct O322 { char pad[0x444]; unsigned char state[4]; int obj[4]; } O322;

void func_00322C50(O322 *p) {
    void func_00206730(int *);
    int func_002077F0(int);
    int i;
    for (i = 0; i < 4; i++) {
        if (p->state[i] == 1) {
            func_00206730(&p->obj[i]);
            if (p->obj[i]) {
                if ((unsigned char)func_002077F0(p->obj[i]) == 1) {
                    p->state[i] = 0;
                    p->obj[i] = 0;
                }
            } else {
                p->state[i] = 0;
            }
        }
    }
}

extern char D_01CAFF0C[];

extern char D_005601B0[];

extern float D_005601D8[];

extern float D_005601D4[];

extern char D_005601F0[];

extern float D_00560218[];

extern float D_00560214[];

float func_001324E0(float *);

void func_002EC050(int, char *, float);

void func_00332AE0(char *, char *, float, float);

char *func_00207480(int, int, char *, int);

void func_0034BA60(int, char *, int, int, int);

void func_001AD140(char *);

typedef struct { int w[16]; } S3FE;

void func_00322DC0(char *p, S3FE *s, int unused, float *pos) {
    float v[4];
    volatile S3FE c;
    float w[4] __attribute__((aligned(16)));
    float l;
    char *o;
    c = *s;
    o = *(char **)(*(char **)D_01CAFF0C + 0xC);
    v[0] = *(float *)(o + 0x50) - pos[0];
    v[1] = *(float *)(o + 0x54) - pos[1];
    v[2] = *(float *)(o + 0x58) - pos[2];
    v[3] = 1.0f;
    l = func_001324E0(v);
    if (((signed char *)s)[2] != 0) return;
    v[0] = *(float *)(p + 0x180);
    v[1] = *(float *)(p + 0x184);
    v[2] = *(float *)(p + 0x188);
    v[3] = 1.0f;
    if (!(*(float *)((char *)s + 4) < 100.0f) && l < 500.0f) {
        func_002EC050(10, (char *)v, 100.0f);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005601F0, D_00560218[0], D_00560214[0]);
    } else {
        func_002EC050(3, (char *)v, 100.0f);
        func_00332AE0(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x3D90, D_005601B0, D_005601D8[0], D_005601D4[0]);
    }
    func_00207480(3, 0x5A, p + 0x150, 0x10);
    w[0] = *(float *)(p + 0x180);
    w[1] = *(float *)(p + 0x184);
    w[2] = *(float *)(p + 0x188);
    w[3] = 1.0f;
    func_0034BA60(0x37, (char *)w, *(signed char *)(*(char **)(p + 0x1A4) + 0x46), 0, 1);
    func_001AD140(p);
}

void func_00322D00(char *p) {
    void func_00206730(char *);
    unsigned char func_002077F0(char *);
    int i;
    char *e;
    unsigned char *f;
    char *q;
    for (i = 0, e = p; i < 4; i++, e += 4) {
        f = (unsigned char *)(p + i + 1092);
        if (*f == 1) {
            func_00206730(e + 1096);
            if (*(char **)(e + 1096) != 0) {
                if (func_002077F0(*(char **)(e + 1096)) == 0) {
                    func_001AD140(*(char **)(e + 1096));
                    q = *(char **)(e + 1096);
                    *(int *)(*(char **)(e + 1096) + 144) = 0;
                    *(char *)(q + 154) = 0;
                    *f = 0;
                    *(int *)(e + 1096) = 0;
                }
            } else {
                *f = 0;
            }
        }
    }
}

void func_002282B0();

int func_00322C20(p0) int p0; {
    func_002282B0((p0 + 420));
    return (*(int *)((char *)p0 + 420) != 0);
}

extern void func_00322320();

void func_00323060(char *p) { func_00322320(p + -64); }

extern void func_00322FC0();

void func_00323080(char *p) { func_00322FC0(p + -64); }

void func_00323090(char *p) { func_00322FC0(p + -160); }

void func_00322BF0(void) {}

void func_00322C00(void) {}
