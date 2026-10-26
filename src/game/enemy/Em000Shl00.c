void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_001AD140(char *);

void func_0028C5C0(char *, int, float);

extern char D_01DF5D20[];

float func_001F9C40(char *, int);

extern char *D_005BC5FC;

void func_0028C290(char *, int, int, int);

void func_0036D8A0(char *p) {
    *(unsigned char *)(p + 0x45) = 4;
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        *(float *)(p + 0x150) = 3.0f;
        func_0028C200(p + 0x160, p + 0x380, p + 0x390, 3, D_005BC5FC, p, 0);
        func_0028C910(p + 0x160);
        *(unsigned char *)(p + 0x380) = 1;
        *(unsigned char *)(p + 0x381) = 0;
        *(short *)(p + 0x382) = 0;
        *(unsigned char *)(p + 0x390) = 2;
        *(float *)(p + 0x3A0) = 0.0f;
        *(float *)(p + 0x3A4) = 100.0f;
        *(float *)(p + 0x3A8) = 100.0f;
        *(float *)(p + 0x3AC) = 1.0f;
        *(float *)(p + 0x3B0) = 100.0f;
        func_0028C8E0(p + 0x160, 6);
        func_0028C290(p + 0x160, 0, -1, *(int *)(p + 0x488));
        *(unsigned char *)(p + 0x384) = 1;
        *(unsigned char *)(p + 0x385) = 0;
        *(short *)(p + 0x386) = 1;
        *(unsigned char *)(p + 0x3E0) = 2;
        *(float *)(p + 0x3F0) = 0.0f;
        *(float *)(p + 0x3F4) = 100.0f;
        *(float *)(p + 0x3F8) = 250.0f;
        *(float *)(p + 0x3FC) = 1.0f;
        *(float *)(p + 0x400) = 100.0f;
        func_0028C8E0(p + 0x160, 6);
        func_0028C290(p + 0x160, 1, -1, *(int *)(p + 0x488));
        *(unsigned char *)(p + 0x388) = 1;
        *(unsigned char *)(p + 0x389) = 0;
        *(short *)(p + 0x38A) = 2;
        *(unsigned char *)(p + 0x430) = 2;
        *(float *)(p + 0x440) = 0.0f;
        *(float *)(p + 0x444) = 100.0f;
        *(float *)(p + 0x448) = 400.0f;
        *(float *)(p + 0x44C) = 1.0f;
        *(float *)(p + 0x450) = 100.0f;
        func_0028C8E0(p + 0x160, 6);
        func_0028C290(p + 0x160, 2, -1, *(int *)(p + 0x488));
    }
    *(float *)(p + 0x150) = *(float *)(p + 0x150) - func_001F9C40(D_01DF5D20, 0x87);
    if (*(float *)(p + 0x150) < 0.0f) {
        *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
        func_001AD140(p);
    } else {
        func_0028C5C0(p + 0x160, 0, 1.0f);
    }
}

extern char D_005AD9C0[];

extern char D_005AD9E4[];

extern char D_005ADA64[];

int func_00252FA0();

int func_0028C110();

int func_0036D670(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005AD9C0;
    *(char **)((char *)p0 + 64) = D_005AD9E4;
    *(char **)((char *)p0 + 160) = D_005ADA64;
    func_0028C110((p0 + 352));
    return p0;
}

extern void func_0036D6D0();

void func_0036DAB0(char *p) { func_0036D6D0(p + -64); }

void func_0036DAC0(char *p) { func_0036D6D0(p + -160); }

void func_0036DA80(void) {}

void func_0036DA90(void) {}

void func_0036DAA0(void) {}
