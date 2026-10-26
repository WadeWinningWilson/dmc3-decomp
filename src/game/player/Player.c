extern char D_01CAFF0C[];

int func_001F9A70(int, char *, float);

int func_002056E0(char *p) {
    if (*(unsigned char *)(p + 4) == 0) {
        return 1;
    }
    return func_001F9A70(*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x550), p + 0x50, 1000.0f);
}

void func_001AD100(char *);

extern char D_005BE098[4];

void func_0021D480(char *);

void func_0021DD40(char *);

void func_0021F070(char *);

void func_0021F080(char *);

void func_00195E20(char *, char *);

void func_002053E0(char *p) {
    func_001AD100(p);
    switch (*(unsigned char *)(p + 4)) {
    case 0:
        func_0021D480(p);
        break;
    case 1:
        func_0021DD40(p);
        break;
    case 2:
        func_0021F070(p);
        break;
    case 3:
        func_0021F080(p);
        break;
    }
    func_00195E20(D_005BE098, p);
}

void func_00205A10(int, int, int, int, int, int, float);

void func_00205A00(int a, int b, int c, int d) {
    func_00205A10(a, b, c, d, 0, 0, 0.0f);
}

void func_00430AD0(char *);

void func_00204FB0(char *p) {
    *(float *)(p + 0x100) = 1.0f;
    *(float *)(p + 0x104) = 1.0f;
    *(float *)(p + 0x108) = 1.0f;
    *(float *)(p + 0x10C) = 1.0f;
    *(float *)(p + 0x80) = 0.0f;
    *(float *)(p + 0x84) = 0.0f;
    *(float *)(p + 0x88) = 0.0f;
    *(float *)(p + 0x8C) = 1.0f;
    *(float *)(p + 0x60) = 0.0f;
    *(float *)(p + 0x64) = 0.0f;
    *(float *)(p + 0x68) = 0.0f;
    *(float *)(p + 0x6C) = 1.0f;
    *(short *)(p + 0x90) = 0;
    *(unsigned char *)(p + 0xD6) = 0;
    *(int *)(p + 0x2890) = 0;
    func_00430AD0(p);
}

int func_0028CD00(char *, int);

int func_0028D930(char *, int);

int func_0028E400(char *, int);

int func_0028F930(char *, int);

int func_002A5C10(char *, int);

int func_00302560(char *, int);

int func_00310490(char *, int);

int func_00383E10(char *, int);

int func_003C9120(char *, int);

int func_003CA630(char *, int);

int func_003CAD30(char *, int);

void func_00205000(char *p) {
    unsigned int i;
    for (i = 0; i < 2; i++) {
        switch (*(signed char *)(p + i + 0x3D4C)) {
        case 0:
            *(int *)(p + i * 4 + 0x3D54) = func_0028CD00(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 1:
            *(int *)(p + i * 4 + 0x3D54) = func_00310490(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 2:
            *(int *)(p + i * 4 + 0x3D54) = func_0028E400(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 3:
            *(int *)(p + i * 4 + 0x3D54) = func_00302560(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 4:
            *(int *)(p + i * 4 + 0x3D54) = func_00383E10(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 12:
            *(int *)(p + i * 4 + 0x3D54) = func_0028F930(p, 0xC);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 13:
            *(int *)(p + i * 4 + 0x3D54) = func_0028F930(p, 0xD);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 14:
            *(int *)(p + i * 4 + 0x3D54) = func_003C9120(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case -1:
            *(int *)(p + i * 4 + 0x3D54) = 0;
            *(signed char *)(p + i + 0x3D68) = 4;
            break;
        }
    }
    for (i = 2; i < 5; i++) {
        switch (*(signed char *)(p + i + 0x3D4C)) {
        case 5:
            *(int *)(p + i * 4 + 0x3D54) = func_0028D930(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 6:
            *(int *)(p + i * 4 + 0x3D54) = func_002A5C10(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 7:
            *(int *)(p + i * 4 + 0x3D54) = func_003CAD30(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 8:
            *(int *)(p + i * 4 + 0x3D54) = func_003CA630(p, 0);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 9:
            *(int *)(p + i * 4 + 0x3D54) = func_0028F930(p, 9);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 10:
            *(int *)(p + i * 4 + 0x3D54) = func_0028F930(p, 0xA);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case 11:
            *(int *)(p + i * 4 + 0x3D54) = func_0028F930(p, 0xB);
            *(signed char *)(p + i + 0x3D68) = 0;
            break;
        case -1:
            *(int *)(p + i * 4 + 0x3D54) = 0;
            *(signed char *)(p + i + 0x3D68) = 4;
            break;
        }
    }
    *(int *)(p + 0x3D74) = 0;
    *(int *)(p + 0x3D78) = 0;
    *(int *)(p + 0x3D7C) = 0;
    *(int *)(p + 0x3D80) = 0;
    *(int *)(p + 0x3D84) = 0;
}

extern char D_005A77A0[];

extern char D_005A78F8[];

void func_0022B5A0();

void func_0022C820();

char *func_00204AD0(char *p0) {
    *(char **)(p0 + 16) = D_005A77A0;
    func_0022C820();
    *(char **)(p0 + 16) = D_005A78F8;
    func_0022B5A0(p0);
    return p0;
}

extern char D_005AFA60[];

void func_003AD780();

char *func_00204CD0(char *p0) {
    *(char **)(p0 + 16) = D_005A77A0;
    func_0022C820();
    *(char **)(p0 + 16) = D_005AFA60;
    func_003AD780(p0);
    return p0;
}

/* AUTO-GENERATED by tools/gen_flat_dtors.py: flat deleting destructors translated from
 * the original asm and verified byte-for-byte (only matches are kept). */
void func_00100580();

extern char D_005A75D0[];

extern char D_005A75F4[];

extern char D_005A7674[];

extern char D_005A7708[];

extern char D_005A7760[];

extern char D_005A7770[];

extern char D_005A7780[];

extern char D_005A7790[];

extern char D_005AAA98[];

void func_001003E0();

void func_0013D240();

void func_0013D5D0();

void func_001FBC10();

void func_00202A00();

void func_00202FE0();

void func_00203090();

void func_0024D9A0();

void func_0024F810();

void func_002791E0();

void func_0028C1A0();

void func_002E78A0();

void func_002E8A50();

void func_00332670();

void func_00414E60();

char *func_00204810(char *p, short flag) {
    if (p != 0) {
        *(char * *)(p) = D_005A75D0;
        *(char * *)(p + 64) = D_005A75F4;
        *(char * *)(p + 160) = D_005A7674;
        *(char * *)(p + 208) = D_005A7708;
        func_0028C1A0(p + 18336, -1);
        func_001003E0(p + 17920, (void *)func_0024D9A0, 208, 2);
        func_001003E0(p + 16672, (void *)func_0024D9A0, 208, 6);
        func_00332670(p + 15760, -1);
        func_0013D240(p + 15668, -1);
        if (p + 15624 != 0) {
            *(char * *)(p + 15624) = D_005A7760;
            func_0013D5D0(p + 15628);
            func_0013D240(p + 15628, -1);
        }
        if (p + 15280 != 0) {
            *(char * *)(p + 15296) = D_005AAA98;
            if (p + 15280 != 0) {
                *(char * *)(p + 15296) = D_005A77A0;
            }
        }
        if (p + 11096 != 0) {
            if (p + 13164 != 0) {
                *(char * *)(p + 13164) = D_005A7770;
            }
            if (p + 11100 != 0) {
                *(char * *)(p + 11100) = D_005A7770;
            }
        }
        func_00414E60(p + 11008, -1);
        func_002E8A50(p + 10852, -1);
        func_002E78A0(p + 10784, -1);
        if (p + 9920 != 0) {
            if (p + 10144 != 0) {
                *(char * *)(p + 10144) = D_005A7780;
                if (p + 10144 != 0) {
                    *(char * *)(p + 10144) = D_005A7790;
                }
            }
        }
        func_001003E0(p + 9632, (void *)func_00202FE0, 96, 3);
        if (p + 9472 != 0) {
            *(char * *)(p + 9488) = D_005AAA98;
            if (p + 9472 != 0) {
                *(char * *)(p + 9488) = D_005A77A0;
            }
        }
        func_001003E0(p + 9136, (void *)func_00203090, 64, 2);
        func_001FBC10(p + 8724, -1);
        func_001003E0(p + 5380, (void *)func_0013D240, 16, 209);
        func_001003E0(p + 384, (void *)func_002791E0, 1536, 3);
        func_00202A00(p + 208, 0);
        func_0024F810(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_00100580();

int func_00204A70(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 16) = D_005A78F8;
        if (v0 != 0) {
            *(char **)(v0 + 16) = D_005A77A0;
        }
        v2 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

int func_00204C70(p0, p1) int p0; int p1; {
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    if (v0 != 0) {
        *(char **)(v0 + 16) = D_005AFA60;
        if (v0 != 0) {
            *(char **)(v0 + 16) = D_005A77A0;
        }
        v2 = (int)v0;
        if ((short)p1 > 0) {
            func_00100580(v2);
        }
    }
    return (int)v0;
}

void func_00204F40(char *p0, int p1, float f0, float f1, float f2, float f3) {
    *(float *)(p0 + 80) = f0;
    *(float *)(p0 + 84) = f1;
    *(float *)(p0 + 88) = f2;
    *(int *)(p0 + 92) = 0x3f800000;
    *(char *)(p0 + 4) = 0;
    *(char *)(p0 + 5) = 0;
    *(float *)(p0 + 132) = f3;
    *(short *)(p0 + 144) = (int)(0.5f + ((65536.0f * *(float *)(p0 + 132)) / 6.283185005187988f));
    *(char *)(p0 + 10324) = p1;
}

int func_001AD140();

int func_00205370(p0) int p0; {
    int v2;
    int v3;
    int v0;
    char *v1;
    int tmp0;
    v0 = p0;
    v3 = 0;
    v1 = (char *)v0;
    do {
        v2 = *(int *)(v1 + 15700);
        if (v2 != 0) {
            func_001AD140(v2);
        }
        v3 = (v3 + 1);
        v1 = (v1 + 4);
    } while (((unsigned int)v3 < (unsigned int)5));
    tmp0 = func_001AD140(v0);
    return tmp0;
}

extern void func_0024FBE0();

void func_002057C0(char *p) { func_0024FBE0(p + -64); }

extern void func_0024FBD0();

void func_002057D0(char *p) { func_0024FBD0(p + -64); }

extern void func_0024FBC0();

void func_002057E0(char *p) { func_0024FBC0(p + -64); }

extern void func_002057A0();

void func_002057F0(char *p) { func_002057A0(p + -64); }

extern void func_002057B0();

void func_00205800(char *p) { func_002057B0(p + -64); }

extern void func_002D8B90();

void func_00205810(char *p) { func_002D8B90(p + -64); }

extern void func_002DFFB0();

void func_00205820(char *p) { func_002DFFB0(p + -64); }

extern void func_0024FB70();

void func_00205830(char *p) { func_0024FB70(p + -64); }

extern void func_0024FB60();

void func_00205840(char *p) { func_0024FB60(p + -64); }

extern void func_0024FB50();

void func_00205850(char *p) { func_0024FB50(p + -64); }

extern void func_0024FB40();

void func_00205860(char *p) { func_0024FB40(p + -64); }

extern void func_0024FB30();

void func_00205870(char *p) { func_0024FB30(p + -64); }

extern void func_0024FB20();

void func_00205880(char *p) { func_0024FB20(p + -64); }

extern void func_0024FB10();

void func_00205890(char *p) { func_0024FB10(p + -64); }

extern void func_0024FB00();

void func_002058A0(char *p) { func_0024FB00(p + -64); }

extern void func_0024FAF0();

void func_002058B0(char *p) { func_0024FAF0(p + -64); }

extern void func_0024FAE0();

void func_002058C0(char *p) { func_0024FAE0(p + -64); }

extern void func_002DFE10();

void func_002058D0(char *p) { func_002DFE10(p + -64); }

extern void func_002DFA80();

void func_002058E0(char *p) { func_002DFA80(p + -64); }

extern void func_002DF910();

void func_002058F0(char *p) { func_002DF910(p + -64); }

extern void func_002DF970();

void func_00205900(char *p) { func_002DF970(p + -64); }

extern void func_002DF9F0();

void func_00205910(char *p) { func_002DF9F0(p + -64); }

extern void func_002DFC30();

void func_00205920(char *p) { func_002DFC30(p + -64); }

extern void func_0024FA70();

void func_00205930(char *p) { func_0024FA70(p + -64); }

extern void func_0024FA60();

void func_00205940(char *p) { func_0024FA60(p + -64); }

extern void func_0024FA50();

void func_00205950(char *p) { func_0024FA50(p + -64); }

extern void func_002DFDB0();

void func_00205960(char *p) { func_002DFDB0(p + -64); }

extern void func_002DF420();

void func_00205970(char *p) { func_002DF420(p + -64); }

extern void func_0024FA30();

void func_00205980(char *p) { func_0024FA30(p + -64); }

extern void func_0024F9E0();

void func_002059A0(char *p) { func_0024F9E0(p + -160); }

extern void func_0024F8C0();

void func_002059B0(char *p) { func_0024F8C0(p + -160); }

void func_00205730(void) {}

void func_00205740(void) {}

void func_00205750(void) {}

int func_00205760(void) { return 1; }

int func_00205770(void) { return 1; }

void func_00205780(void) {}

int func_00205790(void) { return 0; }

int func_002059F0(void) { return 1; }

extern char D_005BE0E8;

int func_002059E0(void) {
    D_005BE0E8 = 0;
    return 1;
}
