int func_0012B1A0(char *, char *);

float func_0022CD90(char *);

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0022CD60(char *);

extern char D_005BCC28[8];

extern char D_005BCC30[8];

extern char D_005BCC38[4];

extern char D_005BCC3C[4];

extern char D_005BCC40[8];

extern char D_00563240[];

typedef struct { short a0; char pad2[2]; float b4; float b8; float bc; float c0; float c4; float c8; float cc; float d0; } S38B;

int func_0038B630(char *, char *, S38B *);

int func_0038B410(char *p, char *q, char *r) {
    char name[32];
    S38B s;
    s.a0 = -1;
    s.bc = 0.0f;
    s.b8 = 0.0f;
    s.b4 = 0.0f;
    s.c8 = 0.0f;
    s.c4 = 0.0f;
    s.c0 = 0.0f;
    s.cc = 0.0f;
    s.d0 = 0.0f;
    while (!func_0022CBA0(r)) {
        func_0022CBB0(r, name);
        if (func_0012B1A0(name, D_005BCC28) == 0) {
            return func_0038B630(p, q, &s);
        } else if (func_0012B1A0(name, D_005BCC30) == 0) {
            s.a0 = func_0022CD60(r);
        } else if (func_0012B1A0(name, D_005BCC38) == 0) {
            s.b4 = func_0022CD90(r);
            s.b8 = func_0022CD90(r);
            s.bc = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCC3C) == 0) {
            s.c0 = func_0022CD90(r);
            s.c4 = func_0022CD90(r);
            s.c8 = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_005BCC40) == 0) {
            s.cc = func_0022CD90(r);
        } else if (func_0012B1A0(name, D_00563240) == 0) {
            s.d0 = (float)func_0022CD60(r);
        }
    }
    return 0;
}

extern char D_005AADD0[];

extern char D_005AEEB0[];

extern char D_005AEED4[];

extern char D_005AEF54[];

extern char D_005AEFE8[];

void func_0024F750();

void func_0027A570();

int func_0028C110();

int func_0038B880(p0) int p0; {
    func_0024F750();
    *(char **)((char *)p0 + 208) = D_005AADD0;
    *(int *)((char *)p0 + 216) = -1;
    *(char **)((char *)p0 + 0) = D_005AEEB0;
    *(char **)((char *)p0 + 64) = D_005AEED4;
    *(char **)((char *)p0 + 160) = D_005AEF54;
    *(char **)((char *)p0 + 208) = D_005AEFE8;
    func_0027A570((p0 + 272));
    func_0028C110((p0 + 1616));
    *(char *)((char *)p0 + 220) = 1;
    *(char *)((char *)p0 + 221) = 0;
    *(int *)((char *)p0 + 224) = 0;
    return p0;
}
