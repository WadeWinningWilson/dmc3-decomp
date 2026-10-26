int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

extern char D_005BC3F0[8];

extern char D_005BC3F8[8];

extern char D_005BC400[8];

extern char D_005BC408[8];

extern char D_005BC410[8];

extern char D_005BC418[8];

extern char D_005BC420[8];

extern char D_00557560[];

extern char D_00557570[];

void func_002F62C0(char *p, char *r) {
    char name[32];
    char val[16];
    char *v;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BC3F0) == 0) {
            return;
        }
        if (func_0012B1A0(name, D_005BC3F8) == 0) {
            func_0022CBB0(r, val);
            if (func_0012B1A0(val, D_005BC400) == 0) {
                p[0x10] = 0;
            } else if (func_0012B1A0(val, D_005BC408) == 0) {
                p[0x10] = 1;
            } else if (func_0012B1A0(val, D_005BC410) == 0) {
                p[0x10] = 2;
            }
        } else if (func_0012B1A0(name, D_00557560) == 0) {
            *(float *)(p + 0x14) = 6.283185f * (func_0022CD90(r) / 360.0f);
        } else if (func_0012B1A0(name, D_005BC418) == 0) {
            *(float *)(p + 0x18) = func_0022CD90(r);
            *(float *)(p + 0x1C) = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BC420) == 0) {
            *(float *)(p + 0x20) = 6.283185f * (func_0022CD90(r) / 360.0f);
        } else if (func_0012B1A0(name, D_00557570) == 0) {
            v = p + *(signed char *)(p + 0xB0) * 16;
            *(float *)(v + 0x30) = func_0022CD90(r);
            *(float *)(v + 0x34) = func_0022CD90(r);
            *(float *)(v + 0x38) = func_0022CD90(r);
            (*(signed char *)(p + 0xB0))++;
        }
    }
}

extern char D_005AB590[];

extern char D_005AB5B4[];

extern char D_005AB634[];

int func_00252FA0();

int func_0028C110();

int func_002F8090(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005AB590;
    *(char **)((char *)p0 + 64) = D_005AB5B4;
    *(char **)((char *)p0 + 160) = D_005AB634;
    func_0028C110((p0 + 336));
    *(char *)((char *)p0 + 976) = 0;
    *(int *)((char *)p0 + 984) = 0;
    *(char *)((char *)p0 + 977) = 0;
    *(int *)((char *)p0 + 988) = 0;
    *(char *)((char *)p0 + 978) = 0;
    *(int *)((char *)p0 + 992) = 0;
    *(char *)((char *)p0 + 979) = 0;
    *(int *)((char *)p0 + 996) = 0;
    *(char *)((char *)p0 + 980) = 0;
    *(int *)((char *)p0 + 1000) = 0;
    *(char *)((char *)p0 + 981) = 0;
    *(int *)((char *)p0 + 1004) = 0;
    return p0;
}
