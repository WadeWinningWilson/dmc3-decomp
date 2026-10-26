extern char D_0054F038[];

extern char D_005BC280[8];

extern char D_0054F048[];

extern char D_005BC288[8];

extern char D_0054F058[];

extern char D_0054F068[];

extern char D_005BC290[4];

extern char D_005BC294[4];

int func_0012B1A0(char *, char *);

void func_002E2800(char *, int, int);

void func_002E3690(char *, int, int, int);

typedef struct { int r[4]; } RD2E3;

void func_0022CB30(RD2E3 *);

void func_0022CB50(RD2E3 *, char *);

int func_0022CBA0(RD2E3 *);

void func_0022CBB0(RD2E3 *, char *);

int func_0022CD60(RD2E3 *);

float func_0022CD90(RD2E3 *);

static inline char *el2E3(char *p, int i) { if (i >= *(int *)(p + 0x30)) return 0; return *(char **)p + i * 0x80; }

void func_002E37C0(char *p, char *src) {
    RD2E3 rd;
    char w[64];
    float f;
    int a;
    func_0022CB30(&rd);
    func_0022CB50(&rd, src);
    while (!func_0022CBA0(&rd)) {
        func_0022CBB0(&rd, w);
        if (func_0012B1A0(w, D_0054F038) == 0) {
            *(int *)(p + 0x44) = func_0022CD60(&rd);
            f = func_0022CD90(&rd);
            *(float *)(p + 0x48) = f;
            func_002E2800(p, *(int *)(p + 0x44), (int)f);
            el2E3(p, 0)[0x78] = 1;
            el2E3(p, *(int *)(p + 0x44) - 1)[0x78] = 1;
        } else if (func_0012B1A0(w, D_005BC280) == 0) {
            *(float *)(p + 0x20) = func_0022CD90(&rd);
            *(float *)(p + 0x24) = func_0022CD90(&rd);
            *(float *)(p + 0x28) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_0054F048) == 0) {
            *(float *)(p + 0x8) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_005BC288) == 0) {
            *(float *)(p + 0xC) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_0054F058) == 0) {
            *(float *)(p + 0x14) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_0054F068) == 0) {
            *(float *)(p + 0x64) = func_0022CD90(&rd);
        } else if (func_0012B1A0(w, D_005BC290) == 0) {
            a = func_0022CD60(&rd);
            func_002E3690(p, a, func_0022CD60(&rd), 0);
        } else if (func_0012B1A0(w, D_005BC294) == 0) {
            return;
        }
    }
}
