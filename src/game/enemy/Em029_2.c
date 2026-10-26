int func_001AD140();

int func_00373900();

int func_00373620(p0) int p0; {
    int v0;
    int v1;
    v1 = func_00373900();
    v0 = p0;
    if ((v1 & 255) == 0) {
        v1 = func_001AD140(v0);
    }
    return v1;
}

int func_00206730();

int func_002077F0();

void func_003775C0();

void func_00377610();

int func_00376780(p0) int p0; {
    int v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    int tmp1;
    v0 = p0;
    func_00377610((v0 + 2316));
    func_003775C0((v0 + 2320));
    v2 = 0;
    v3 = (char *)v0;
    do {
        func_00206730((v3 + 2324));
        v1 = *(int *)(v3 + 2324);
        if (v1 != 0) {
            tmp0 = func_002077F0(v1);
            if ((tmp0 & 255) == 1) {
                *(int *)(v3 + 2324) = 0;
            }
        }
        v2 = (v2 + 1);
        v3 = (v3 + 4);
    } while (((unsigned int)v2 < (unsigned int)8));
    func_00206730((v0 + 2356));
    func_00206730((v0 + 2360));
    func_00206730((v0 + 2364));
    func_00206730((v0 + 2368));
    func_00206730((v0 + 2372));
    tmp1 = func_00206730((v0 + 2272));
    return tmp1;
}

extern void func_00377320();

void func_003776F0(char *p) { func_00377320(p + -64); }

void func_00377700(char *p) { func_00377320(p + -160); }

void func_00377710(char *p) { func_00377320(p + -208); }

extern void func_00376110();

void func_00377730(char *p) { func_00376110(p + -304); }

extern void func_003760E0();

void func_00377740(char *p) { func_003760E0(p + -304); }

void func_003777A0(char *p) { func_00377320(p + -304); }

void func_003777B0(char *p) { func_00377320(p + -464); }

void func_00376140(void) {}

int func_00376150(void) { return 0; }

void func_00376160(void) {}

void func_00376170(void) {}

void func_00376180(void) {}

void func_00376190(void) {}

float func_003761A0(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 2312) = *(float *)(p1 + 44);
    return t0;
}

float func_00377300(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 2284);
    *(float *)(p1 + 0) = *(float *)(p0 + 2284);
    return t0;
}

float func_00377310(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p0 + 2456);
    *(float *)(p1 + 0) = *(float *)(p0 + 2456);
    return t0;
}
