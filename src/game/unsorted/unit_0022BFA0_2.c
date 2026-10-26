int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BBD80[8];

extern char D_005BBD88[8];

extern char D_005BBD90[8];

extern char D_005BBD98[4];

extern char D_005BBD9C[4];

extern char D_005BBDA0[4];

extern char D_005BBDA4[4];

extern char D_005BBDA8[4];

extern char D_005BBDAC[4];

extern char D_005BBDB0[8];

extern char D_00542CC0[];

extern char D_00542CD0[];

extern char D_00542CE0[];

extern char D_00542CF0[];

extern char D_00542D00[];

extern char D_00542D10[];

extern char D_00542D20[];

extern char D_00542D30[];

void func_0022C070(char *p, char *r) {
    char name[64];
    int k;
    *(int *)(p + 0x34) = 0;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BBD80) == 0) {
            *(float *)(p + 0x80) = func_0022CD90(r);
            *(float *)(p + 0x84) = func_0022CD90(r);
            *(float *)(p + 0x88) = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BBD88) == 0) {
            *(float *)(p + 0x70) = func_0022CD90(r);
            *(float *)(p + 0x74) = func_0022CD90(r);
            *(float *)(p + 0x78) = func_0022CD90(r);
            *(float *)(p + 0x60) = *(float *)(p + 0x70);
            *(float *)(p + 0x64) = *(float *)(p + 0x74);
            *(float *)(p + 0x68) = *(float *)(p + 0x78);
        } else if (func_0012B1A0(name, D_00542CC0) == 0) {
            *(unsigned char *)(p + 0x4C) = func_0022CD60(r) == 1;
        } else if (func_0012B1A0(name, D_00542CD0) == 0) {
            *(int *)(p + 0x48) = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_00542CE0) == 0) {
            *(float *)(p + 0x38) = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_00542CF0) == 0) {
            *(float *)(p + 0x40) = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_00542D00) == 0) {
            *(float *)(p + 0x44) = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_00542D10) == 0) {
            *(float *)(p + 0x50) = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_00542D20) == 0) {
            *(int *)(p + 0x58) = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_00542D30) == 0) {
            *(int *)(p + 0xB4) = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BBD90) == 0) {
            k = func_0022CD60(r);
            *(char **)((*(char ***)(p + 0x14))[k] + 0xFC) = p;
            func_0022CBB0(r, name);
            if (func_0012B1A0(name, D_005BBD98) == 0) *((*(char ***)(p + 0x14))[k] + 0x1C0) = 3;
            else if (func_0012B1A0(name, D_005BBD9C) == 0) *((*(char ***)(p + 0x14))[k] + 0x1C0) = 4;
            else if (func_0012B1A0(name, D_005BBDA0) == 0) *((*(char ***)(p + 0x14))[k] + 0x1C0) = 5;
            else if (func_0012B1A0(name, D_005BBDA4) == 0) *((*(char ***)(p + 0x14))[k] + 0x1C0) = 0;
            else if (func_0012B1A0(name, D_005BBDA8) == 0) *((*(char ***)(p + 0x14))[k] + 0x1C0) = 1;
            else if (func_0012B1A0(name, D_005BBDAC) == 0) *((*(char ***)(p + 0x14))[k] + 0x1C0) = 2;
        } else if (func_0012B1A0(name, D_005BBDB0) == 0) {
            return;
        }
    }
}
