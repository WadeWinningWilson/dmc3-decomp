void func_0028C200(char *, char *, char *, int, char *, char *, int);

void func_0028C8E0(char *, int);

void func_0028C910(char *);

void func_0028C3A0(char *, int, int, char *);

typedef struct { float a, b, c, d, e, f, g, h, i; } T453;

extern T453 D_00578A80[];

void func_00453AE0(char *p) {
    int i;
    char *o;
    func_0028C200(p + 0x1260, p + 0x1480, p + 0x14A0, 4, 0, p, 0);
    p[0x1263] = 0xD;
    func_0028C8E0(p + 0x1260, 0);
    func_0028C910(p + 0x1260);
    for (i = 0; i < 5; i++) {
        p[i * 4 + 0x1480] = 4;
        p[i * 4 + 0x1481] = 0;
        *(short *)(p + i * 4 + 0x1482) = i;
        if (i == 0 || i == 1) {
            p[i * 0x50 + 0x14A0] = 4;
            *(float *)(p + i * 0x50 + 0x14B0) = D_00578A80[i].a + D_00578A80[i].d;
            *(float *)(p + i * 0x50 + 0x14B4) = D_00578A80[i].b;
            *(float *)(p + i * 0x50 + 0x14B8) = D_00578A80[i].c;
            *(float *)(p + i * 0x50 + 0x14BC) = 1.0f;
            *(float *)(p + i * 0x50 + 0x14C0) = D_00578A80[i].a - D_00578A80[i].d;
            *(float *)(p + i * 0x50 + 0x14C4) = D_00578A80[i].b;
            *(float *)(p + i * 0x50 + 0x14C8) = D_00578A80[i].c;
            *(float *)(p + i * 0x50 + 0x14CC) = 1.0f;
            *(float *)(p + i * 0x50 + 0x14D0) = D_00578A80[i].f;
        } else {
            p[i * 0x50 + 0x14A0] = 3;
            *(float *)(p + i * 0x50 + 0x14B0) = D_00578A80[i].a;
            *(float *)(p + i * 0x50 + 0x14B4) = D_00578A80[i].b;
            *(float *)(p + i * 0x50 + 0x14B8) = D_00578A80[i].c;
            *(float *)(p + i * 0x50 + 0x14C8) = D_00578A80[i].d;
            *(float *)(p + i * 0x50 + 0x14CC) = D_00578A80[i].e;
            *(float *)(p + i * 0x50 + 0x14D0) = D_00578A80[i].f;
            *(float *)(p + i * 0x50 + 0x14BC) = 6.283185f * (D_00578A80[i].g / 360.0f);
            *(float *)(p + i * 0x50 + 0x14C0) = 6.283185f * (D_00578A80[i].h / 360.0f);
            *(float *)(p + i * 0x50 + 0x14C4) = 6.283185f * (D_00578A80[i].i / 360.0f);
        }
        func_0028C3A0(p + 0x1260, i, -1, p + 0x1220);
    }
    for (i = 0; i < 5; i++) {
        o = *(char **)(p + i * 4 + 0x12DC);
        if (o) {
            o[0xC4] = 0;
            o[0xC5] = 0;
            o[0xC6] = 0;
            o[0xC7] = 0x18;
        }
    }
}

extern void func_00454310();

void func_004543F0(char *p) { func_00454310(p + -64); }

void func_00454400(char *p) { func_00454310(p + -160); }

extern void func_004542D0();

void func_00454410(char *p) { func_004542D0(p + -208); }

extern void func_00454190();

void func_00454420(char *p) { func_00454190(p + -208); }

void func_00454430(char *p) { func_00454310(p + -208); }
