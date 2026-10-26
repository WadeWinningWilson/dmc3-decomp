void func_00252FA0(char *);

extern char D_005B74C0[];

extern char D_005B74E4[];

extern char D_005B7564[];

void func_0028C110(char *);

void func_002790E0(char *);

void func_0013D6A0(char *);

char *func_0048C820(char *p) {
    char *q;
    func_00252FA0(p);
    *(char **)p = D_005B74C0;
    *(char **)(p + 0x40) = D_005B74E4;
    *(char **)(p + 0xA0) = D_005B7564;
    func_0028C110(p + 0x1B0);
    func_002790E0(p + 0x4C0);
    func_002790E0(p + 0xAC0);
    q = p + 0x10C0;
    *(float *)(p + 0x10C8) = 0.3f;
    *(float *)(p + 0x10CC) = 0.98f;
    *(float *)(p + 0x10D0) = 0.95f;
    *(float *)(p + 0x10D4) = 50.0f;
    *(float *)(p + 0x10E0) = 0.0f;
    *(float *)(p + 0x10E4) = -0.1f;
    *(float *)(p + 0x10E8) = 0.0f;
    *(float *)(p + 0x10EC) = 0.0f;
    *(int *)(p + 0x10C4) = 0;
    func_0013D6A0(q + 0x34);
    *(int *)q = 0;
    *(int *)(q + 0x30) = 0;
    *(float *)(q + 0x64) = -999999.0f;
    *(float *)(q + 0x50) = 0.0f;
    *(float *)(q + 0x54) = 0.0f;
    *(float *)(q + 0x58) = 0.0f;
    *(float *)(q + 0x5C) = 0.0f;
    *(float *)(q + 0x60) = 0.0f;
    *(float *)(q + 0x68) = 1.0f;
    return p;
}

void func_00105760(char *, char *, float);

void func_00105668(char *, char *, float);

void func_00105578(char *, char *, float);

void func_0048B440(int a, char *m, float x, float y, float z) {
    func_00105668(m, m, x);
    func_00105578(m, m, y);
    func_00105760(m, m, z);
}

void func_0048D820(char **h) {
    char *o = *h;
    if (o != 0) {
        switch (*(unsigned char *)(o + 0x18)) {
        case 3:
        case 4:
        case 0:
            *h = 0;
            break;
        }
    }
}

int func_001AD140();

int func_00488F60();

int func_00488D00(p0) char *p0; {
    int v0;
    int v1;
    *(int *)(p0 + 272) = (*(int *)(p0 + 272) | 8);
    v1 = func_00488F60();
    v0 = (int)p0;
    if ((v1 & 255) == 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

extern void func_0048AAA0();

void func_0048C5A0(char *p) { func_0048AAA0(p + -64); }

extern void func_0048AB30();

void func_0048C5C0(char *p) { func_0048AB30(p + -64); }

extern void func_0048C420();

void func_0048C600(char *p) { func_0048C420(p + -64); }

void func_0048C610(char *p) { func_0048C420(p + -160); }

void func_0048C620(char *p) { func_0048C420(p + -208); }

extern void func_0048A9D0();

void func_0048C640(char *p) { func_0048A9D0(p + -304); }

extern void func_0048A8E0();

void func_0048C650(char *p) { func_0048A8E0(p + -304); }

void func_0048C670(char *p) { func_0048AB30(p + -304); }

void func_0048C6A0(char *p) { func_0048C420(p + -304); }

void func_0048C6B0(char *p) { func_0048C420(p + -464); }

extern void func_0048D760();

void func_0048D890(char *p) { func_0048D760(p + -64); }

void func_0048D8A0(char *p) { func_0048D760(p + -160); }

void func_0048AB20(void) {}

void func_0048AA80(char *p0) {
    *(int *)(p0 + 5248) = 0x41200000;
    *(char *)(p0 + 5180) = 1;
}

float func_0048ABE0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 1128) = *(float *)(p1 + 44);
    return t0;
}

float func_0048C400(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 1100);
    *(float *)(p1 + 0) = *(float *)(p0 + 1100);
    return t0;
}

float func_0048C410(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 5028);
    *(float *)(p1 + 0) = *(float *)(p0 + 5028);
    return t0;
}

void func_0048B200();

void func_0048B3F0(int p0) {
    func_0048B200(p0, (p0 + 1236), 3, 434);
}
