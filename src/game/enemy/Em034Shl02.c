void func_0028C740(char *);

extern char D_01DFABA0[];

char *func_00207480(int, int, char *, int);

void func_0028C3A0(char *, int, int, char *);

void func_0028C5C0(char *, int, float);

void func_00330BD0(char *, int, char *, int, int);

void func_00485110(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(float *)(p + 0xAF0) = 3.0f;
        func_00207480(3, 0x21F, p + 0x150, 16);
        func_0028C740(p + 0x1A0);
        *(unsigned char *)(p + 0x3C0) = 1;
        *(float *)(p + 0x3F0) = 300.0f;
        func_0028C3A0(p + 0x1A0, 0, -1, p + 0x150);
        func_00330BD0(D_01DFABA0, 0x2C, p + 0x50, 0x22, 0);
    case 1:
        *(float *)(p + 0xAF0) = *(float *)(p + 0xAF0) - *(float *)(p + 0x10);
        if (*(float *)(p + 0xAF0) < 0.0f) {
            *(unsigned char *)(p + 4) = 3;
        }
    }
    func_0028C5C0(p + 0x1A0, 0, *(float *)(p + 0x10));
}

int func_001AD140();

int func_00485200(p0) char *p0; {
    int v0;
    int v1;
    int tmp0;
    v0 = (int)p0;
    v1 = *(int *)(p0 + 2796);
    if (v1 != 0) {
        func_001AD140(v1);
    }
    tmp0 = func_001AD140(v0);
    return tmp0;
}

extern void func_00484BD0();

void func_004853E0(char *p) { func_00484BD0(p + -64); }

extern void func_004852A0();

void func_004853F0(char *p) { func_004852A0(p + -64); }

extern void func_00485330();

void func_00485400(char *p) { func_00485330(p + -64); }

void func_00485410(char *p) { func_00485330(p + -160); }

void func_00485290(void) {}
