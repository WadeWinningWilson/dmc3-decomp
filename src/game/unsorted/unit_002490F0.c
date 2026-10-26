int func_0024E780(char *, int, int);

void func_0024E7B0(char *, int, int);

extern int D_005BE09C;

void func_001ACCA0(int, int);

void func_002D9FE0(char *, int);

#define PAD249(p) (p + *(unsigned char *)(p + 0x28A0) * 0x1A0 + 0x41F0)

void func_00249A00(char *p, signed char m) {
    unsigned char c;
    unsigned int i;
    int k;
    if (m == 1) {
        *(unsigned char *)(p + 0x24D1) = func_0024E780(PAD249(p), 0, 0);
        *(unsigned char *)(p + 0x24EC) = *(unsigned char *)(p + 0x24D2);
        c = func_0024E780(PAD249(p), 0, 1);
        if (c != 0) {
            *(unsigned char *)(p + 0x24D2) = c & ~0xC0;
            *(unsigned char *)(p + 0x24EB) = c & 0xC0;
        }
        *(unsigned char *)(p + 0x24ED) = *(unsigned char *)(p + 0x24D3);
        *(unsigned char *)(p + 0x24D3) = func_0024E780(PAD249(p), 0, 2);
        c = *(unsigned char *)(p + 0x24D3);
        if (c & 0x40) {
            *(unsigned char *)(p + 0x24EF) = c;
        } else if (*(unsigned char *)(p + 0x24ED) != c) {
            if (c & 0x20) {
                func_002D9FE0(p, c & 0xF);
                func_0024E7B0(PAD249(p), 0, 2);
            } else if (c & 0x10) {
                func_001ACCA0(D_005BE09C, c & 0xF);
                func_0024E7B0(PAD249(p), 0, 2);
            }
        }
        *(unsigned char *)(p + 0x24D4) = func_0024E780(PAD249(p), 0, 3);
        *(unsigned char *)(p + 0x24D5) = func_0024E780(PAD249(p), 0, 4);
        func_0024E7B0(PAD249(p), 0, 4);
        for (i = 0; i < 5; i++) {
            *(unsigned char *)(p + i + 0x24D6) = func_0024E780(PAD249(p), 1, i);
            c = *(unsigned char *)(p + i + 0x24D6);
            k = c & 0xF;
            switch ((unsigned char)(c & 0xF0)) {
            case 0x10:
                *(signed char *)(p + (unsigned char)k + 0x24DB) = 2;
                break;
            case 0x20:
                *(signed char *)(p + (unsigned char)k + 0x24DB) = 0;
                break;
            case 0x30:
                *(signed char *)(p + (unsigned char)k + 0x24DB) = 1;
                break;
            case 0:
                break;
            }
        }
        return;
    }
    if ((unsigned char)func_0024E780(p + *(unsigned char *)(p + 0x28A0) * 0x1A0 + 0x4120, 0, 2) & 0x80) {
        *(signed char *)(p + 0x24CE) = 1;
        return;
    }
    *(signed char *)(p + 0x24CE) = 0;
}

int func_0024DB10(char *, int, int, int, int, int, int);

void func_002494A0(char *p, int a, int b, int c, int d, int e, float f) {
    unsigned char func_002242C0(void);
    if (func_002242C0() != 1) {
        if (*(unsigned char *)(p + 9423) == 1) {
            e = 0;
        }
        func_0024DB10(p + 18128, a, b, (int)f, c, d, e);
        *(char *)(p + 9422) = 2;
    }
}

void func_00249610(char *p, int a, int b, int c, int d, int e, float f) {
    unsigned char func_002242C0(void);
    if (func_002242C0() != 1) {
        if (*(unsigned char *)(p + 9423) == 1) {
            e = 0;
        }
        func_0024DB10(p + 17920, a, b, (int)f, c, d, e);
        *(char *)(p + 9422) = 2;
    }
}

void func_002498D0(char *p) {
    void func_0024DD30(char *);
    void func_0024E520(char *);
    func_0024DD30(p + *(unsigned char *)(p + 0x28A0) * 416 + 0x4120);
    if ((unsigned char)func_0024E780(p + *(unsigned char *)(p + 0x28A0) * 416 + 0x4120, 0, 2) & 0x80) {
        *(unsigned char *)(p + 0x24CE) = 1;
    } else {
        *(unsigned char *)(p + 0x24CE) = 0;
    }
    func_0024E520(p + *(unsigned char *)(p + 0x28A0) * 416 + 0x4120);
}

int func_00249780(p0) int p0; {
    int func_002242C0();
    void func_0024DD30();
    int func_0024E520();
    char *v0;
    int v1;
    int tmp0;
    v0 = (char *)p0;
    tmp0 = func_002242C0();
    if ((tmp0 & 255) == 1) {
        v1 = 4;
    } else {
        func_0024DD30((v0 + 18128));
        func_0024DD30((v0 + 17920));
        *(char *)(v0 + 9422) = 2;
        v1 = func_0024E520((v0 + 18128));
    }
    return v1;
}

int func_00249860(p0) int p0; {
    int func_002242C0();
    void func_0024DD30();
    int func_0024E520();
    char *v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    tmp0 = func_002242C0();
    if ((tmp0 & 255) == 1) {
        return 4;
    } else {
        tmp1 = *(signed char *)(v0 + 70);
        if (tmp1 == 1) {
            return 4;
        } else {
            func_0024DD30((v0 + 18128));
            *(char *)(v0 + 9422) = 2;
            v1 = func_0024E520((v0 + 18128));
            return v1;
        }
    }
}

int func_00249990(p0) int p0; {
    int func_002242C0();
    void func_0024DD30();
    int func_0024E520();
    char *v0;
    int v1;
    int tmp0;
    int tmp1;
    v0 = (char *)p0;
    tmp0 = func_002242C0();
    if ((tmp0 & 255) == 1) {
        return 4;
    } else {
        tmp1 = *(signed char *)(v0 + 70);
        if (tmp1 == 1) {
            return 4;
        } else {
            func_0024DD30((v0 + 17920));
            *(char *)(v0 + 9422) = 2;
            v1 = func_0024E520((v0 + 17920));
            return v1;
        }
    }
}

void func_00249D50(p0) char *p0; {
    int v0;
    char *tmp0;
    *(char *)(p0 + 9425) = 0;
    v0 = 0;
    *(char *)(p0 + 9426) = 0;
    *(char *)(p0 + 9427) = 0;
    *(char *)(p0 + 9428) = 0;
    *(char *)(p0 + 9429) = 0;
    *(char *)(p0 + 9430) = 0;
    *(char *)(p0 + 9431) = 0;
    *(char *)(p0 + 9432) = 0;
    *(char *)(p0 + 9433) = 0;
    *(char *)(p0 + 9434) = 0;
    do {
        *(char *)((p0 + v0) + 9435) = 0;
        tmp0 = (p0 + v0);
        v0 = (v0 + 8);
        *(char *)(tmp0 + 9436) = 0;
        *(char *)(tmp0 + 9437) = 0;
        *(char *)(tmp0 + 9438) = 0;
        *(char *)(tmp0 + 9439) = 0;
        *(char *)(tmp0 + 9440) = 0;
        *(char *)(tmp0 + 9441) = 0;
        *(char *)(tmp0 + 9442) = 0;
    } while (((unsigned int)v0 < (unsigned int)16));
    *(char *)(p0 + 9451) = 0;
    *(char *)(p0 + 9452) = *(unsigned char *)(p0 + 9426);
    *(char *)(p0 + 9453) = *(unsigned char *)(p0 + 9427);
    *(char *)(p0 + 9455) = 0;
}

int func_002792A0();

float func_00249DD0(p0, p1) char *p0; int p1; {
    int tmp3;
    tmp3 = func_002792A0(((p0 + (*(unsigned char *)(p0 + 10400) * 1536)) + 384));
    return *(float *)((char *)(tmp3 + (p1 << 2)) + 296);
}

void *func_0024A250(void *p) { return p; }
