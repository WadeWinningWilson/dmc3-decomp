/* Hand-matched functions (third file: its callee declarations differ from misc.c/misc2.c). */

extern char D_01CAFF0C[];
extern float D_00569370[];
int func_003ACB40(char *);
void func_002EF940(int, char *);
short func_0034B940(char *, char *);

void func_003A5120(unsigned char *p) {
    *(float *)(p + 0x4BE0) += *(float *)(p + 0x10);
    switch (p[6]) {
    case 0:
        p[6]++;
    case 1:
        if (!(*(float *)(p + 0x4BE0) <= D_00569370[p[0x4E17] * 12 + p[0x4E18] * 4])) {
            p[0x4E15] = 1;
        }
        if (p[0x4E15] == 1 && (unsigned char)func_003ACB40((char *)p) == 1) {
            p[0x4E15] = 0;
        }
        func_002EF940(*(int *)D_01CAFF0C, (char *)p + 0x5080);
        *(short *)(p + 0x90) = func_0034B940(*(char **)(*(char **)D_01CAFF0C + 0xC) + 0x50, (char *)p + 0x50);
        break;
    }
}

extern signed char D_005BCD60[];
void func_0031E570(char *);
int func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
int func_0024E800(char *);
int func_002D65E0(char *);
void func_002D2270(char *, int);
void func_002D6D30(char *);

typedef struct O2D3 { char pad[0x2F70]; char sub[16]; } O2D3;

void func_002D38A0(O2D3 *q) {
    unsigned char *p = (unsigned char *)q;
    switch (p[5]) {
    case 0:
        p[5]++;
        func_0031E570((char *)p + 0x1D0);
        p[0x1E2] = 3;
        p[0x1E3] = 2;
    case 1:
        if ((unsigned char)func_0024E780(q->sub, 0, 0) == 2) {
            func_0024E7B0(q->sub, 0, 0);
            if (*(char **)(p + 0x3914) != 0) {
                (*(char **)(p + 0x3914))[0x3B] = 0;
            }
        }
        if ((unsigned char)func_0024E800(q->sub) == 1) {
            if (func_002D65E0((char *)p)) {
                func_002D2270((char *)p, 0x17);
            } else {
                func_002D2270((char *)p, D_005BCD60[p[0x38D0]]);
            }
            func_002D6D30((char *)p);
        }
        break;
    }
}

extern char D_01DF5D20[];
extern char D_01DF8E4D[];
extern char D_00645A30[];
extern int D_005BE09C;
void func_001F9BF0(char *);
void func_001ACCD0(int);
void func_0021DC70(int, int);
int func_002B5500(char *);
void func_00195C60(char *, int, int);
void func_002D8F40(int, int);

void func_0023A480(char *p, int k) {
    (*(char **)D_01CAFF0C)[9] = 1;
    (*(char **)D_01CAFF0C)[8] = 1;
    D_01DF8E4D[0] = 1;
    func_001F9BF0(D_01DF5D20);
    func_001ACCD0(D_005BE09C);
    func_0021DC70(*(int *)(*(char **)D_01CAFF0C + 0xC), 1);
    p[0x5BE2] = func_002B5500(p + 0x2070);
    switch (k) {
    case 0:
        func_00195C60(D_00645A30, 4, 0);
        break;
    case 1:
        func_00195C60(D_00645A30, 5, 1);
        func_00195C60(D_00645A30, 4, 0);
        (*(char **)(p + 0x2058))[0x28B4] = 1;
        func_002D8F40(*(int *)(p + 0x2058), 0);
        break;
    case 2:
        break;
    }
}
