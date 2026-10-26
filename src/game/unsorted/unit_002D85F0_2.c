int func_002DA0B0(char *);

static inline signed char slot_find(char *p, signed char id) {
    unsigned int i;
    if (id != -1) {
        for (i = 0; i < 5; i++) {
            signed char c = *(signed char *)(p + i + 0x3D4C);
            if (c == id) {
                return i;
            }
        }
    }
    return -1;
}

int func_002DA1B0(char *p, signed char id, unsigned char which) {
    signed char k;
    if ((unsigned char)func_002DA0B0(p) == 0) {
        k = slot_find(p, id);
        if (k != -1) {
            if (which == 0) {
        *(signed char *)(p + 0x3D4A) = k;
        *(signed char *)(p + 0x3D49) = *(signed char *)((char *)*(unsigned char *)(p + 0x3D4A) + (int)p + 0x3D4C);
    } else {
        *(signed char *)(p + 0x3D4B) = k;
        *(signed char *)(p + 0x3D49) = *(signed char *)((char *)*(unsigned char *)(p + 0x3D4B) + (int)p + 0x3D4C);
    }
            return 1;
        }
    }
    return 0;
}

float func_00131D10(float, float);

float func_002DAA60(char *p, char *v) {
    char stk[0x10] __attribute__((aligned(16)));
    __asm__ volatile("lqc2 $vf4, 0x0(%0)\n\tlqc2 $vf5, 0x0(%2)\n\tvsub.xyzw $vf6, $vf4, $vf5\n\tsqc2 $vf6, 0x0(%1)" : : "r"(v), "r"(stk), "r"(p + 0x50) : "memory");
    return func_00131D10(*(float *)(stk + 0), *(float *)(stk + 8));
}

int func_002DAD40(char *p) {
    if (*(unsigned short *)(p + 0x49EA) > 0x70) return 1;
    if (*(unsigned short *)(p + 0x49EA) > 0x34) return 0;
    return 2;
}

int func_001AD140();

int func_0032D3D0(int, char *, int, float);

void func_002D8F40(p0, p1) char *p0; int p1; {
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    v0 = p0;
    if (*(unsigned char *)(p0 + 15481) == 1) {
        *(char *)(v0 + 9458) = p1;
    } else {
        v4 = (p1 & 255);
        switch (v4) {
        case 0:
            if (*(unsigned char *)(v0 + 9457) != 3) {
                *(char *)(v0 + 9457) = 0;
                v5 = *(int *)(v0 + 200);
                if (v5 != 0) {
                    v3 = func_001AD140(v5, 2, 3);
                    *(int *)(v0 + 200) = 0;
                }
            }
            break;
        case 1:
            if (*(unsigned char *)(v0 + 9457) != 3) {
                *(char *)(v0 + 9457) = 1;
                v1 = *(int *)(v0 + 200);
                if (v1 != 0) {
                    v3 = func_001AD140(v1, 2, 3);
                    *(int *)(v0 + 200) = 0;
                }
            }
            break;
        case 2:
            if (*(unsigned char *)(v0 + 9457) != 3) {
                *(char *)(v0 + 9457) = 2;
                if (*(int *)(v0 + 200) == 0) {
                    v3 = func_0032D3D0(1, v0, 3, 2.5f);
                    *(int *)(v0 + 200) = v3;
                }
            }
            break;
        case 3:
            *(char *)(v0 + 9457) = 3;
            v2 = *(int *)(v0 + 200);
            if (v2 != 0) {
                v3 = func_001AD140(v2, p1, 3);
                *(int *)(v0 + 200) = 0;
            }
            break;
        }
    }
}

int func_002DA3A0();

void func_002DA480(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, float f0, float f1) {
    char *v0;
    float v1;
    float v2;
    float v3;
    float v4;
    int tmp0;
    v0 = (char *)p0;
    v1 = f0;
    v2 = f1;
    tmp0 = func_002DA3A0();
    v3 = 0.0f;
    if (v3 != v1) {
        if (v1 > v3) {
            if (*(float *)(v0 + 100) > v1) {
                *(float *)(v0 + 100) = v1;
            }
        } else {
            if (*(float *)(v0 + 100) < v1) {
                *(float *)(v0 + 100) = v1;
            }
        }
    }
    v4 = 0.0f;
    if (v4 != v2) {
        v4 = *(float *)(v0 + 336);
        if (v4 > v2) {
            *(float *)(v0 + 336) = v2;
        }
    }
}

int func_002DACC0(p0) char *p0; {
    return (short)(((*(unsigned short *)(p0 + 18920) + 32767) + 1) + *(short *)(p0 + 10468));
}

int func_002DBC30();

int func_002DBB80(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    int v3;
    v0 = *(unsigned char *)(p0 + 9428);
    v1 = p0;
    if (v0 != 0) {
        v2 = (int)(v1 + 27952);
        if (*(unsigned char *)(v1 + 9454) != v0) {
            v3 = func_002DBC30(p0, v2, 1, v0);
        }
    }
    *(char *)(v1 + 9454) = *(unsigned char *)(v1 + 9428);
    return v3;
}

int func_002DBBD0(p0) char *p0; {
    int v0;
    char *v1;
    int v2;
    int v3;
    v0 = *(unsigned char *)(p0 + 9428);
    v1 = p0;
    if (v0 != 0) {
        v2 = (int)(v1 + 27968);
        if (*(unsigned char *)(v1 + 9454) != v0) {
            v3 = func_002DBC30(p0, v2, 1, v0);
        }
    }
    *(char *)(v1 + 9454) = *(unsigned char *)(v1 + 9428);
    return v3;
}

extern void func_00132470();

void func_002DAAA0(char *p) { func_00132470(p + 80); }

extern char D_0059B4F8[];

char *func_002D9EB0(char *p0) {
    return *(char **)((D_0059B4F8 + (*(unsigned char *)(p0 + 10400) << 2)) + 0);
}
