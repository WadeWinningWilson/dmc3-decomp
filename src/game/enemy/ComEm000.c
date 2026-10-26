void func_00105760(float, float *, float *);

void func_003591E0(char *p) {
    float m[16] __attribute__((aligned(16)));
    float r[16] __attribute__((aligned(16)));
    float v[4] __attribute__((aligned(16)));
    if (*(float *)(p + 0x108) <= 0.0f) {
        if (*(unsigned char *)(p + 0xCD) == 0) {
            *(float *)(*(char **)(p + 0x10) + 0x34) += -0.54f * *(float *)(p + 0xB0);
            *(float *)(*(char **)(p + 0x10) + 0x34) += *(float *)(*(char **)(p + 0xA8) + 0x24);
            if (!(*(float *)(*(char **)(p + 0x10) + 0x34) <= 0.0f)) *(float *)(*(char **)(p + 0x10) + 0x34) = 0.0f;
            *(float *)(*(char **)(p + 0x10) + 0x24) += *(float *)(*(char **)(p + 0x10) + 0x34);
        }
        __asm__ volatile("lqc2 $vf5, 0x0(%1)\n\tlqc2 $vf4, 0x30(%0)\n\tvmove.xyz $vf4, $vf5\n\tsqc2 $vf4, 0x30(%0)" : : "r"(m), "r"(*(char **)(p + 0x10) + 0x20) : "memory");
        func_00105760(6.283185f * (*(short *)(*(char **)(p + 0x10) + 0x50) / 65536.0f), r, m);
        __asm__ volatile("lqc2 $vf4, 0x30(%1)\n\tlqc2 $vf5, 0x0(%0)\n\tvmove.xyz $vf5, $vf4\n\tsqc2 $vf5, 0x0(%0)" : : "r"(v), "r"(r) : "memory");
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%1)\n\tvadd.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%0)" : : "r"(*(char **)(p + 0x10) + 0x10), "r"(v) : "memory");
    }
}

void func_0028C5C0(char *, int, float);

void func_00359320(char *p) {
    func_0028C5C0(*(char **)(p + 0xA4), (unsigned char)(*(float *)(p + 0x108) > 0.0f), *(float *)(p + 0xB0));
}

void func_00100580(char *);

void func_0031E440(char *, int);

void func_00320590(char *, int);

char *func_00358A00(char *p, short flag) {
    extern char D_005AD560[];
    extern char D_005AD618[];
    if (p != 0) {
        *(char **)p = D_005AD560;
        *(char **)(p + 160) = D_005AD618;
        func_0031E440(p + 160, 0);
        func_00320590(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

int func_0031E400();

int func_00320540();

int func_003589B0(p0) int p0; {
    extern char D_005AD560[];
    extern char D_005AD618[];
    func_00320540();
    func_0031E400((p0 + 160));
    *(char **)((char *)p0 + 0) = D_005AD560;
    *(char **)((char *)p0 + 160) = D_005AD618;
    return p0;
}

void func_00359350(p0, p1, p2, p3, p4) char *p0; char *p1; char *p2; char *p3; char *p4; {
    *(float *)(p4 + 0) = (*(float *)(p2 + 0) * *(float *)(p0 + 176));
    *(float *)(p4 + 4) = (*(float *)(p2 + 4) * *(float *)(p0 + 176));
    *(float *)(p4 + 8) = (*(float *)(p2 + 8) * *(float *)(p0 + 176));
    *(float *)(p1 + 0) = (*(float *)(p1 + 0) + *(float *)(p4 + 0));
    *(float *)(p1 + 4) = (*(float *)(p1 + 4) + *(float *)(p4 + 4));
    *(float *)(p1 + 8) = (*(float *)(p1 + 8) + *(float *)(p4 + 8));
    *(float *)(p3 + 0) = (*(float *)(p1 + 0) * *(float *)(p0 + 176));
    *(float *)(p3 + 4) = (*(float *)(p1 + 4) * *(float *)(p0 + 176));
    *(float *)(p3 + 8) = (*(float *)(p1 + 8) * *(float *)(p0 + 176));
}

extern void func_0035E180();

void func_0036D5E0(char *p) { func_0035E180(p + -160); }

extern void func_0035E170();

void func_0036D5F0(char *p) { func_0035E170(p + -160); }

extern void func_0035E160();

void func_0036D600(char *p) { func_0035E160(p + -160); }

extern void func_0035E150();

void func_0036D610(char *p) { func_0035E150(p + -160); }

extern void func_0035E140();

void func_0036D620(char *p) { func_0035E140(p + -160); }

extern void func_0035E130();

void func_0036D630(char *p) { func_0035E130(p + -160); }

extern void func_0035D500();

void func_0036D640(char *p) { func_0035D500(p + -160); }

extern void func_0035CE50();

void func_0036D650(char *p) { func_0035CE50(p + -160); }

void func_00361F00(void) {}

float func_0035A580(char *p0, char *p1) {
    float t0;
    t0 = *(float *)(p1 + 44);
    *(float *)(p0 + 264) = *(float *)(p1 + 44);
    return t0;
}

void func_0035A7D0(char *p0, int p1) {
    *(char *)(p0 + 180) = p1;
    *(char *)(p0 + 181) = 0;
    *(char *)(p0 + 182) = 0;
    *(char *)(p0 + 183) = 0;
    *(char *)(p0 + 184) = 0;
}

void func_00361EF0(char *p0) {
    *(char *)(p0 + 205) = 0;
    *(char *)(p0 + 206) = 0;
    *(char *)(p0 + 207) = 0;
}
