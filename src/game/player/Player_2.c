extern char D_005A82D0[];

extern char D_005A82F4[];

extern char D_005A8374[];

extern char D_005A8408[];

void func_00100450();

void func_00202A50();

int func_00204A70();

void func_00204AD0();

void func_002790E0();

void func_002791E0();

void func_0031DCB0();

int func_00204690(p0) int p0; {
    char *v0;
    int v1;
    int v2;
    char *v3;
    v0 = (char *)p0;
    func_00202A50();
    *(char **)(v0 + 0) = D_005A82D0;
    *(char **)(v0 + 64) = D_005A82F4;
    *(char **)(v0 + 160) = D_005A8374;
    *(char **)(v0 + 208) = D_005A8408;
    func_00100450((v0 + 18944), (char *)func_002790E0, (char *)func_002791E0, 1536, 1);
    func_0031DCB0((v0 + 20480));
    func_00100450((v0 + 20736), (char *)func_00204AD0, (char *)func_00204A70, 192, 1);
    *(char *)(v0 + 21760) = 0;
    *(char *)(v0 + 21761) = 0;
    *(short *)(v0 + 21762) = 0;
    *(int *)(v0 + 21768) = 0;
    v2 = 0;
    *(int *)(v0 + 21772) = 0;
    v3 = v0;
    *(int *)(v0 + 21776) = 0;
    *(int *)(v0 + 21792) = 0;
    *(int *)(v0 + 21796) = 0;
    *(int *)(v0 + 21800) = 0;
    *(int *)(v0 + 21804) = 0x3f800000;
    *(int *)(v0 + 21808) = 0x47c35000;
    *(char *)(v0 + 21812) = 0;
    *(char *)(v0 + 21813) = 0;
    *(short *)(v0 + 21814) = 0;
    v1 = -1;
    do {
        *(short *)(v3 + 21816) = v1;
        *(short *)(v3 + 21818) = v1;
        v2 = (v2 + 5);
        *(short *)(v3 + 21820) = v1;
        *(short *)(v3 + 21822) = v1;
        *(short *)(v3 + 21824) = v1;
        v3 = (v3 + 10);
    } while ((v2 < 10));
    *(char *)(v0 + 70) = 2;
    *(char **)(v0 + 344) = v0;
    return (int)v0;
}

extern char D_005A8140[];

extern char D_005A8164[];

extern char D_005A81E4[];

extern char D_005A8278[];

int func_00204C70();

void func_00204CD0();

void func_0031DD00();

int func_00204D20(p0) int p0; {
    func_00202A50();
    *(char **)((char *)p0 + 0) = D_005A8140;
    *(char **)((char *)p0 + 64) = D_005A8164;
    *(char **)((char *)p0 + 160) = D_005A81E4;
    *(char **)((char *)p0 + 208) = D_005A8278;
    func_00100450((p0 + 18944), (char *)func_002790E0, (char *)func_002791E0, 1536, 5);
    func_00100450((p0 + 26640), (char *)func_0031DCB0, (char *)func_0031DD00, 144, 3);
    func_00100450((p0 + 27072), (char *)func_0031DCB0, (char *)func_0031DD00, 144, 5);
    func_00100450((p0 + 27952), (char *)func_00204AD0, (char *)func_00204A70, 192, 1);
    func_00100450((p0 + 28432), (char *)func_00204AD0, (char *)func_00204A70, 192, 4);
    func_00100450((p0 + 29456), (char *)func_00204CD0, (char *)func_00204C70, 160, 16);
    *(char *)((char *)p0 + 70) = 0;
    *(int *)((char *)p0 + 344) = p0;
    return p0;
}

extern void func_00204810();

void func_00205990(char *p) { func_00204810(p + -64); }

void func_002059C0(char *p) { func_00204810(p + -160); }

void func_002059D0(char *p) { func_00204810(p + -208); }

float func_002057A0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 10920);
    *(float *)(p1 + 0) = *(float *)(p0 + 10920);
    return t0;
}

float func_002057B0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 10964);
    *(float *)(p1 + 0) = *(float *)(p0 + 10964);
    return t0;
}
