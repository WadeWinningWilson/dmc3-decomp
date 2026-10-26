int func_003002D0(char *, int);

void func_002FFBF0(char *p) {
    int func_002FFE20(char *, int);
    int k = *(unsigned char *)(p + 57);
    switch (k) {
    case 0:
    case 1:
        func_002FFE20(p, k);
        break;
    case 2:
    case 3:
        func_003002D0(p, k);
        break;
    }
}

void func_00104B80(char *, char *, char *);

typedef struct { float x, y, z, w; } V4_3008;

typedef struct { char pad[0x30]; float a[3]; float pad2; float b[3]; char pad3[0xB0 - 0x4C]; } E_3008;

void func_003008D0(char *p) {
    V4_3008 v;
    V4_3008 a;
    V4_3008 b;
    v.x = (*(E_3008 **)(p + 0x40))[*(short *)(p + 0x3A)].a[0];
    v.y = (*(E_3008 **)(p + 0x40))[*(short *)(p + 0x3A)].a[1];
    v.z = (*(E_3008 **)(p + 0x40))[*(short *)(p + 0x3A)].a[2];
    v.w = 1.0f;
    func_00104B80((char *)&a, *(char **)(p + 0x3C), (char *)&v);
    v.x = (*(E_3008 **)(p + 0x40))[*(short *)(p + 0x3A)].b[0];
    v.y = (*(E_3008 **)(p + 0x40))[*(short *)(p + 0x3A)].b[1];
    v.z = (*(E_3008 **)(p + 0x40))[*(short *)(p + 0x3A)].b[2];
    v.w = 1.0f;
    func_00104B80((char *)&b, *(char **)(p + 0x3C), (char *)&v);
    ((V4_3008 *)*(int *)(p + 0x44))[0] = a;
    ((V4_3008 *)*(int *)(p + 0x44))[1] = b;
}

void func_00300840(char *, unsigned char);

void func_00300A90(char *, unsigned char);

typedef struct { int pad; int n; char pad2[0xB0 - 8]; } E300;

void func_00300780(char *p) {
    unsigned char r;
    *(float *)(p + 0x684) = *(float *)(p + 0x684) + *(float *)(p + 0x10);
    r = 0;
    if (!(*(float *)(p + 0x684) <= (float)(*(E300 **)(p + 0x40))[*(short *)(p + 0x3A)].n)) {
        *(float *)(p + 0x684) = 0.0f;
        r = 1;
    }
    switch (*(unsigned char *)(p + 0x39)) {
    case 0:
    case 1:
        func_00300840(p, r);
        break;
    case 2:
    case 3:
        func_00300A90(p, r);
        break;
    }
}

void func_00301990(char *);

void func_00301F60(char *);

typedef struct { int pad[8]; int a; int b; int pad2[34]; } E2FF;

void func_002FFC60(char *p) {
    void func_002FFE20(char *);
    int i;
    char *r;
    *(int *)(*(char **)(p + 0x44) + 0x42E4) = (*(E2FF **)(p + 0x40))[*(short *)(p + 0x3A)].a;
    *(int *)(*(char **)(p + 0x44) + 0x42E8) = (*(E2FF **)(p + 0x40))[*(short *)(p + 0x3A)].b;
    r = *(char **)(p + 0x44);
    *(int *)(r + 0x42EC) = (*(int *)(r + 0x42E4) - 1) * (*(int *)(r + 0x42E8) + 1) + 1;
    r = *(char **)(p + 0x44);
    *(int *)(r + 0x42F0) = (*(int *)(r + 0x42EC) - 1) * 2;
    for (i = 0; i < *(int *)(*(char **)(p + 0x44) + 0x42E8) + 1; i++) {
        r = *(char **)(p + 0x44);
        *(float *)(r + i * 12 + 0x42F4) = (1.0f - 1.0f / (float)(*(int *)(r + 0x42E8) + 1) * (float)i) * (1.0f - 1.0f / (float)(*(int *)(r + 0x42E8) + 1) * (float)i);
        r = *(char **)(p + 0x44);
        *(float *)(r + i * 12 + 0x42F8) = 2.0f * (1.0f / (float)(*(int *)(r + 0x42E8) + 1)) * (float)i * (1.0f - 1.0f / (float)(*(int *)(r + 0x42E8) + 1) * (float)i);
        r = *(char **)(p + 0x44);
        *(float *)(r + i * 12 + 0x42FC) = (float)i * ((1.0f / (float)(*(int *)(r + 0x42E8) + 1)) * ((1.0f / (float)(*(int *)(r + 0x42E8) + 1)) * (float)i));
    }
    func_002FFE20(p);
    func_00301990(p);
    if (*(unsigned char *)(p + 0x39) == 1) func_00301F60(p);
}

void func_00300C40();

void func_00301480();

void func_00300C10(int p0) {
    func_00300C40();
    func_00301480(p0);
}

int func_002FFB40();

int func_00300440();

int func_002FFAE0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    v0 = *(unsigned char *)(p0 + 4);
    v1 = p0;
    switch (v0) {
    case 0:
        v2 = func_002FFB40(p0, v0);
        *(char *)(v1 + 4) = (*(unsigned char *)(v1 + 4) + 1);
        break;
    case 1:
        v2 = func_00300440(p0, v0);
        break;
    }
    return v2;
}

extern char D_01DF7A30[];

int func_0013B740();

int func_00206E00();

int func_003016E0(p0) char *p0; {
    char *v0;
    int v1;
    int tmp4;
    int tmp7;
    v0 = p0;
    tmp4 = func_00206E00(D_01DF7A30, (*(int *)(p0 + 68) + 17120), *(short *)((char (*)[176])((char *)*(int *)(p0 + 64) + 80))[*(short *)(p0 + 58)]);
    v1 = (tmp4 & 255);
    switch (v1) {
    case 2:
        tmp7 = func_0013B740(*(int *)(*(char **)(v0 + 68) + 17120), 2);
        return (tmp7 == 1);
    case 0:
    case 1:
    case 3:
        break;
    }
    return 0;
}
