void func_004B7F80(char *p, short v) {
    short o = *(short *)(p + 0xA58);
    if (o != v) {
        *(short *)(p + 0xA5A) = o;
        *(short *)(p + 0xA58) = v;
        *(char *)(p + 7) = 0;
        *(char *)(p + 6) = 0;
        *(char *)(p + 5) = 0;
    }
}

extern char D_005B86C0[];

extern char D_005B86E4[];

extern char D_005B8764[];

int func_00252FA0();

int func_0028C110();

int func_004B8AE0(p0) int p0; {
    func_00252FA0();
    *(char **)((char *)p0 + 0) = D_005B86C0;
    *(char **)((char *)p0 + 64) = D_005B86E4;
    *(char **)((char *)p0 + 160) = D_005B8764;
    func_0028C110((p0 + 336));
    *(char *)((char *)p0 + 880) = 0;
    *(int *)((char *)p0 + 888) = 0;
    *(char *)((char *)p0 + 881) = 0;
    *(int *)((char *)p0 + 892) = 0;
    *(char *)((char *)p0 + 882) = 0;
    *(int *)((char *)p0 + 896) = 0;
    *(char *)((char *)p0 + 883) = 0;
    *(int *)((char *)p0 + 900) = 0;
    *(char *)((char *)p0 + 884) = 0;
    *(int *)((char *)p0 + 904) = 0;
    *(int *)((char *)p0 + 1008) = 0;
    *(int *)((char *)p0 + 1012) = 0;
    *(int *)((char *)p0 + 1016) = 0;
    return p0;
}

extern void func_004B8870();

void func_004B8950(char *p) { func_004B8870(p + -64); }

void func_004B8960(char *p) { func_004B8870(p + -160); }

void func_004B8970(char *p) { func_004B8870(p + -208); }
