void func_00105230(char *, char *, char *);

void func_00131760(char *, char *, float *);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

void func_00402400(char *p, unsigned char k);

extern char D_0056A110[];

extern char D_0056A150[];

extern char D_0056A154[];

extern char D_0056A158[];

void func_00401C90(char *, unsigned char);

void func_00401A90(char *p) {
    float v[4] __attribute__((aligned(16)));
    int i;
    for (i = 0; i < 0x27; i++) {
        func_00401C90(p, i);
        func_00402400(p, i);
        v[0] = 6.283185f * (*(float *)(D_0056A150 + i * 0x50) / 360.0f);
        v[1] = 6.283185f * (*(float *)(D_0056A154 + i * 0x50) / 360.0f);
        v[2] = 6.283185f * (*(float *)(D_0056A158 + i * 0x50) / 360.0f);
        v[3] = 1.0f;
        UNIT(p + i * 0xB40 + 0xBC0);
        func_00131760(p + i * 0xB40 + 0xBC0, p + i * 0xB40 + 0xBC0, v);
        func_00105230(p + i * 0xB40 + 0xBC0, p + i * 0xB40 + 0xBC0, D_0056A110 + i * 0x50 + 0x30);
        *(unsigned char *)((char *)(i * 0xB40) + (int)p + 0x101) = 0;
    }
    *(unsigned char *)(p + 0x45) = 6;
    *(int *)(p + 0xC) = *(int *)(p + 0xC) | 0x40;
}

extern void func_00402620();

void func_004026F0(char *p) { func_00402620(p + -64); }

void func_00402700(char *p) { func_00402620(p + -160); }

void func_00402730(char *p) { func_00402620(p + -208); }

void func_00402600(char *p) { *(char *)(p + 220) = 0; }

void func_004025F0(char *p0) {
    *(char *)(p0 + 220) = 1;
}
