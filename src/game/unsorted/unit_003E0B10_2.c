int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BCF40[8];

extern char D_005BCF48[8];

extern char D_005BCF50[8];

extern char D_005BCF58[8];

extern char D_005BCF60[8];

extern char D_005BCF68[8];

extern char D_005BCF70[8];

extern char D_005BCF78[8];

extern char D_005BCF80[8];

extern char D_005BCF88[8];

extern char D_005BCF90[8];

extern char D_005BCF98[8];

extern char D_005BCFA0[8];

extern char D_005BCFA8[8];

typedef struct { int a0; int a4; unsigned int a8; int aC; int b0; unsigned char b4; unsigned char b5; unsigned char b6; unsigned char b7; unsigned char b8; unsigned char b9; unsigned char ba; } S3E0B;

int func_003E0E70(S3E0B *);

int func_003E0B10(char *p, int *q, char *r) {
    char name[32];
    char w[16];
    S3E0B s;
    s.a0 = 0;
    s.a4 = 0;
    s.a8 = 0;
    s.aC = -1;
    s.b0 = -1;
    s.b6 = 0;
    s.b5 = 0;
    s.b4 = 0;
    s.b9 = 0;
    s.b8 = 0;
    s.b7 = 0;
    s.ba = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BCF40) == 0) {
            return func_003E0E70(&s);
        }
        if (func_0012B1A0(name, D_005BCF48) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BCF50) == 0) {
                s.a0 = 0;
            } else if (func_0012B1A0(w, D_005BCF58) == 0) {
                s.a0 = 1;
            } else if (func_0012B1A0(w, D_005BCF60) == 0) {
                s.a0 = 2;
            }
        } else if (func_0012B1A0(name, D_005BCF68) == 0) {
            func_0022CBB0(r, w);
            if (func_0012B1A0(w, D_005BCF70) == 0) {
                s.a4 = 0;
            } else if (func_0012B1A0(w, D_005BCF78) == 0) {
                s.a4 = 1;
            }
        } else if (func_0012B1A0(name, D_005BCF80) == 0) {
            s.a8 = (unsigned int)func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCF88) == 0) {
            s.aC = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCF90) == 0) {
            s.b0 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCF98) == 0) {
            s.b4 = func_0022CD60(r);
            s.b5 = func_0022CD60(r);
            s.b6 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCFA0) == 0) {
            s.b7 = func_0022CD60(r);
            s.b8 = func_0022CD60(r);
            s.b9 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCFA8) == 0) {
            s.ba = func_0022CD60(r);
        }
    }
    return 0;
}

extern char D_005A6F50[];

extern char D_005AADD0[];

extern char D_005B18D0[];

extern char D_005B18F4[];

void func_0013D6A0();

char * func_003E1000(p) char *p; {
    *(char * *)(p) = D_005A6F50;
    func_0013D6A0(p + 36);
    *(int *)(p + 32) = 0;
    *(int *)(p + 28) = 0;
    *(char *)(p + 7) = 0;
    *(char *)(p + 6) = 0;
    *(char *)(p + 5) = 0;
    *(char *)(p + 4) = 0;
    *(char *)(p + 24) = 0;
    *(int *)(p + 8) = 0;
    *(char *)(p + 52) = -1;
    *(char *)(p + 53) = 0;
    *(char *)(p + 54) = 0;
    *(int *)(p + 12) = 135;
    *(int *)(p + 16) = 1065353216;
    *(int *)(p + 20) = 1065353216;
    *(char * *)(p + 56) = D_005AADD0;
    *(int *)(p + 64) = -1;
    *(char * *)(p) = D_005B18D0;
    *(char * *)(p + 56) = D_005B18F4;
    *(char *)(p + 68) = 1;
    *(char *)(p + 69) = 0;
    *(int *)(p + 76) = 0;
    *(short *)(p + 74) = 0;
    *(short *)(p + 72) = 0;
    *(short *)(p + 70) = 0;
    return p;
}
