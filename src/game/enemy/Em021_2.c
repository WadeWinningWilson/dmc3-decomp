int func_001AD140();

int func_004191C0();

int func_00419180(p0) int p0; {
    int v0;
    int v1;
    v1 = func_004191C0();
    v0 = p0;
    if ((v1 & 255) == 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

extern void func_00419670();

void func_00419810(char *p) { func_00419670(p + -64); }

void func_00419820(char *p) { func_00419670(p + -160); }

void func_00419830(char *p) { func_00419670(p + -208); }

void func_00419840(char *p) { func_00419670(p + -304); }

void func_00419850(char *p) { func_00419670(p + -464); }
