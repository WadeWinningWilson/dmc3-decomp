void func_004AB580(char *);

void func_004AB610(char *);

void func_004AB6C0(char *);

void func_004AB770(char *);

void func_004AB460(char *p) {
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 4;
    *(signed char *)(p + 0x46) = *(signed char *)(p + 0x150);
    *(int *)(p + 0x80) = 0;
    *(int *)(p + 0x84) = 0;
    *(int *)(p + 0x88) = 0;
    *(float *)(p + 0x8C) = 1.0f;
    *(int *)(p + 0x60) = 0;
    *(int *)(p + 0x64) = 0;
    *(int *)(p + 0x68) = 0;
    *(float *)(p + 0x6C) = 1.0f;
    *(int *)(p + 0x70) = 0;
    *(int *)(p + 0x74) = 0;
    *(int *)(p + 0x78) = 0;
    *(float *)(p + 0x7C) = 1.0f;
    *(short *)(p + 0x90) = 0;
    *(int *)(p + 0x4C0) = 0;
    *(int *)(p + 0x4D0) = 0;
    *(int *)(p + 0x4D8) = 0;
    *(int *)(p + 0x4D4) = 0;
    *(int *)(p + 0x4DC) = 0;
    *(short *)(p + 0x4E0) = 0;
    *(unsigned char *)(p + 0x4E2) = 0;
    *(unsigned char *)(p + 0x4E3) = 0;
    switch (*(int *)(p + 0x4C4)) {
    case 0:
    case 1:
    case 2:
    case 3:
        func_004AB580(p);
        break;
    case 0x80:
        func_004AB610(p);
        break;
    case 0x81:
        func_004AB6C0(p);
        break;
    case 0x82:
        func_004AB770(p);
        break;
    }
    *(int *)(p + 0x4CC) = 0;
}

void func_001AD140(char *);

void func_0041D6E0(char *, char *, int, float);

void func_0028C5C0(char *, int, float);

void func_0041DAB0(char *, char *, int);

int func_0041D6B0(float *, float);

void func_0034BA60(int, char *, int, int, int);

char *func_00207480(int, int, int, int);

void func_0041D840(char *, char *, float);

void func_004AC8F0(char *p) {
    char *q;
    char *b;
    switch (*(int *)(p + 0x4CC)) {
    case 0:
        *(int *)(p + 0x4DC) = 0;
        *(int *)(p + 0x4CC) = 1;
    case 1:
        *(char **)(p + 0x4C0) = func_00207480(3, 0xFC, 0, 0x10);
        q = *(char **)(p + 0x4C0);
        if (q != 0) {
            *(char **)(q + 0x90) = p + 0x460;
            q[0x9A] = 0;
        }
        *(float *)(p + 0x4D8) = 15.0f;
        *(int *)(p + 0x4CC) = 2;
    case 2:
        if (*(short *)(p + 0x4E0) != 0) {
            func_0041DAB0(p + 0x50, p + 0x90, *(short *)(p + 0x4E0));
        }
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x4D8), *(float *)(p + 0x10)) == 1) {
            *(int *)(p + 0x4CC) = 1;
        }
    }
    if ((unsigned char)func_0041D6B0((float *)(p + 0x4DC), *(float *)(p + 0x10)) == 1) {
        func_0034BA60(0x4C, p + 0x50, 0x32, 0, 1);
        *(float *)(p + 0x4DC) = 20.0f;
    }
    if ((unsigned char)func_0041D6B0((float *)(p + 0x4D4), *(float *)(p + 0x10)) == 1) {
        func_001AD140(p);
        return;
    }
    b = p;
    if (b != 0) {
        b += 0x40;
    }
    func_0041D840(b, p + 0x420, 1.0f);
    func_0028C5C0(p + 0x1A0, 0, 1.0f);
}

static inline void attach(char *e, char *t) {
    *(char **)(e + 0x90) = t;
    *(unsigned char *)(e + 0x9A) = 0;
}

static inline char *up(char *q, int off) {
    if (q != 0) {
        q += off;
    }
    return q;
}

void func_004AC670(char *p) {
    switch (*(int *)(p + 0x4CC)) {
    case 0:
        func_0034BA60(0x4C, p + 0x50, 0x32, 0, 1);
        *(char **)(p + 0x4C0) = func_00207480(3, 0xEA, 0, 0x10);
        if (*(char **)(p + 0x4C0) != 0) {
            attach(*(char **)(p + 0x4C0), p + 0x460);
            *(unsigned char *)(*(char **)(p + 0x4C0) + 0x3A) = 1;
        } else {
            func_001AD140(p);
            return;
        }
        *(float *)(p + 0x4D8) = 60.0f;
        *(signed char *)(p + 0x4E2) = 0;
        *(int *)(p + 0x4CC) = 1;
    case 1:
        if (*(float *)(p + 0x4D8) < 57.0f) {
            if (*(signed char *)(p + 0x4E2) == 0) {
                *(signed char *)(p + 0x4E2) = 1;
                *(char **)(p + 0x4C0) = func_00207480(3, 0x36F, 0, 0x10);
                if (*(char **)(p + 0x4C0) != 0) {
                    attach(*(char **)(p + 0x4C0), p + 0x460);
                    *(unsigned char *)(*(char **)(p + 0x4C0) + 0x3A) = 1;
                }
            }
            *(int *)(p + 0x4CC) = 2;
        }
    case 2:
        if (*(float *)(p + 0x4D8) <= 52.0f) {
            *(float *)(p + 0x3F4) = *(float *)(p + 0x3F4) - 10.0f;
        }
        if (*(float *)(p + 0x4D8) <= 42.0f) {
            *(float *)(p + 0x3F4) = 100.0f;
            *(int *)(p + 0x4CC) = 3;
        }
    case 3:
        if (*(float *)(p + 0x4D8) < 42.0f) {
            *(float *)(p + 0x3F4) = *(float *)(p + 0x3F4) + 35.0f;
            *(float *)(p + 0x3F0) = *(float *)(p + 0x3F0) - 40.0f;
        }
        if ((unsigned char)func_0041D6B0((float *)(p + 0x4D8), *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
        break;
    }
    func_0041D840(up(p, 0x40), p + 0x420, 1.0f);
    if (!(*(float *)(p + 0x4D8) < 32.0f) && *(float *)(p + 0x4D8) <= 52.0f) {
        func_0028C5C0(p + 0x1A0, 0, 1.0f);
    }
}

void func_004ACA80(void) {}
