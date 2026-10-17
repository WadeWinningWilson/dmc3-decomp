/* Hand-matched functions whose callee prototypes conflict with declarations in misc5-8. */

extern char D_00568D20[];
extern float D_00561F00[][3];
void func_003F2E90(char *);
int func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
char *func_0028C3A0(char *, int, int, char *);
int func_0024E800(char *);
void func_003E9930(char *);
void func_0028C790(char *, int);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0029DCE0(char *, int);
void func_002A0100(char *);
int func_002A4A40(char *);

void func_003ED8E0(char *p) {
    char *e;
    func_003F2E90(p);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 4)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 7);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 4, *(char **)(*(char **)(p + 0x8C8) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        break;
    case 2:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 7);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 4, *(char **)(*(char **)(p + 0x818) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        break;
    }
    if (*(int *)(p + 0x35E4) == 0 && func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

void func_00457F80(char *p) {
    char *q;
    func_0028C790(p + 0x150, 0);
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 0x150, 7);
    func_0028C910(p + 0x150);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    switch (*(unsigned char *)(p + 0x3D4)) {
    case 0:
        *(unsigned char *)(p + 0x380) = 6;
        *(float *)(p + 0x390) = 0.0f;
        *(float *)(p + 0x394) = -600.0f;
        *(float *)(p + 0x398) = 0.0f;
        *(float *)(p + 0x39C) = 1.0f;
        *(float *)(p + 0x3A0) = 600.0f;
        *(float *)(p + 0x3A4) = 30.0f;
        break;
    case 1:
        *(unsigned char *)(p + 0x380) = 4;
        *(float *)(p + 0x390) = 0.0f;
        *(float *)(p + 0x394) = 0.0f;
        *(float *)(p + 0x398) = 0.0f;
        *(float *)(p + 0x39C) = 1.0f;
        *(float *)(p + 0x3A0) = 800.0f;
        *(float *)(p + 0x3A4) = 0.0f;
        *(float *)(p + 0x3A8) = 0.0f;
        *(float *)(p + 0x3AC) = 1.0f;
        *(float *)(p + 0x3B0) = 30.0f;
        break;
    }
    func_0028C3A0(p + 0x150, 0, -1, p + 0x480);
    q = *(char **)(p + 0x1CC);
    if (q != 0) {
        q[2] = 1;
    }
}

void func_0029D480(char *p) {
    int k;
    func_0029DCE0(p, 0x39);
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    func_002A0100(p);
    *(int *)(p + 0x9658) = -1;
    *(int *)(p + 0x9654) = -1;
    *(int *)(p + 0x9650) = -1;
    *(int *)(p + 0x964C) = -1;
    *(int *)(p + 0x9648) = -1;
    *(int *)(p + 0x966C) = 0;
    *(int *)(p + 0x9668) = 0;
    *(int *)(p + 0x9664) = 0;
    *(int *)(p + 0x9660) = 0;
    *(int *)(p + 0x965C) = 0;
    *(int *)(p + 0x9644) = 0;
    *(unsigned char *)(p + 0xA990) = 0;
    k = func_002A4A40(p);
    *(float *)(p + 0xAAA4) = ((float *)D_00561F00[k])[*(int *)(p + 0x8928)];
    *(unsigned char *)(p + 5) = 0x14;
}
