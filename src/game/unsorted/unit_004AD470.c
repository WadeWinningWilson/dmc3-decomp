 void func_00376CF0(char *);

void func_004AD470(char *p) {
    void func_00376E40(char *);
    void func_00376B80(char *, int);
    int func_0041D6B0(char *, float);
    void func_00376B40(char *, int);
    func_00376E40(p);
    *(int *)(p + 0x8FC) |= 0x400000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        func_00376CF0(p);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        p[6] = 1;
    case 1:
        if ((unsigned char)func_0041D6B0(p + 0x8F8, *(float *)(p + 0x10)) == 1) {
            func_00376B40(p, 3);
        }
        break;
    }
}

short func_00131D10(float, float);

char *func_00207480(int, int, char *, int);

void func_0034BA60(int, char *, int, int, int);

float func_0041DB20(float *);

extern float D_00562A80[];

extern float D_00562A90[];

extern float D_00562AA0[];

extern int D_005BE1AC;

#define CP4AD(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

#define SB4AD(d, a, b) __asm__ volatile("lqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x0(%1)\n\tvsub.xyzw $vf6, $vf5, $vf4\n\tsqc2 $vf6, 0x0(%0)" : : "r"(d), "r"(b), "r"(a) : "memory")

void func_004AD970(char *p) {
    extern int D_005BE09C;
    int func_0024E800(char *);
    void func_001ACCD0(int);
    void func_00376B40(char *, int);
    void func_00376B80(char *, int);
    void func_00376E40(char *);
    int func_0041D6B0(float, char *);
    void func_0041DBA0(char *, char *);
    float d[4] __attribute__((aligned(16)));
    float l;
    *(int *)(p + 0x8FC) |= 0x04000000;
    *(int *)(p + 0x8FC) |= 0x02000000;
    *(int *)(p + 0x8FC) |= 0x800000;
    *(int *)(p + 0x8FC) |= 0x20000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        D_005BE1AC = 4;
        func_00207480(1, 0x26D, (char *)((int)p + 0x8A0), 0x10);
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_00376E40(p);
        *(float *)(p + 0x95C) -= 2.0f;
        if (*(float *)(p + 0x95C) < 0.0f) *(float *)(p + 0x95C) = 0.0f;
        func_0041DBA0(p, p + 0xC00);
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            func_0034BA60(0x48, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
            func_001ACCD0(D_005BE09C);
            *(float *)(p + 0x95C) = 0.0f;
            *(unsigned int *)(p + 0x8FC) |= 0x80000000;
            CP4AD(p + 0x50, D_00562AA0);
            *(float *)(p + 0x8F8) = 120.0f;
            *(unsigned char *)(p + 6) = 2;
        }
        break;
    case 2:
        *(int *)(p + 0x8FC) |= 0x40000000;
        *(unsigned int *)(p + 0x8FC) |= 0x80000000;
        if ((unsigned char)func_0041D6B0(*(float *)(p + 0x10), p + 0x8F8) == 1) {
            l = func_0041DB20(D_00562A80);
            if (l < func_0041DB20(D_00562A90)) {
                D_005BE1AC = 1;
                *(int *)(p + 0x8FC) &= ~0x8000;
                CP4AD(p + 0x50, D_00562A90);
                SB4AD(d, D_00562A90, D_00562A80);
            } else {
                D_005BE1AC = 2;
                *(int *)(p + 0x8FC) |= 0x8000;
                CP4AD(p + 0x50, D_00562A80);
                SB4AD(d, D_00562A80, D_00562A90);
            }
            *(short *)(p + 0x90) = func_00131D10(d[0], d[2]);
            *(short *)(p + 0x96E) = *(short *)(p + 0x90);
            *(float *)(p + 0x84) = 6.283185f * ((float)*(short *)(p + 0x90) / 65536.0f);
            func_00376B40(p, 9);
        }
        break;
    }
}

void func_004ADC50(char *p) {
    void func_00376E40(char *);
    void func_00376B80(char *, int);
    void func_00376B40(char *, int);
    void func_0041DBA0(char *, char *);
    int func_0024E800(char *);
    func_00376E40(p);
    *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x4000000;
    *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x800000;
    *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x20000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_0034BA60(0x49, p + 0x50, *(signed char *)(p + 0x46), 0, 1);
        *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x1000000;
        *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) & ~0x1000;
        *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x2000;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) + 470.0f;
        func_00207480(1, 0x26D, p + 0x8A0, 0x10);
        func_00376B80(p, -1);
        *(float *)(p + 0x95C) = 64.0f;
        *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) | 0x80000000;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if (*(float *)(p + 0x95C) < 64.0f) {
            *(float *)(p + 0x95C) = *(float *)(p + 0x95C) + 2.0f;
        }
        func_0041DBA0(p, p + 0xC00);
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            *(float *)(p + 0x95C) = 64.0f;
            *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) & ~0x4000;
            *(unsigned char *)(p + 0x975) = *(unsigned char *)(p + 0x975) + 1;
            if (*(unsigned char *)(p + 0x8EB) == 0) {
                if (*(unsigned char *)(p + 0x975) % 3 == 0 || *(unsigned char *)(p + 0x975) > 6) {
                    func_00376B40(p, 4);
                    func_00376B80(p, -1);
                } else {
                    func_00376B40(p, 0x12);
                }
            } else {
                if (*(unsigned char *)(p + 0x975) % 4 == 0 || *(unsigned char *)(p + 0x975) > 8) {
                    func_00376B40(p, 4);
                    func_00376B80(p, -1);
                } else {
                    func_00376B40(p, 0x12);
                }
            }
            D_005BE1AC = 3;
        }
        break;
    }
}

void func_0041DAB0(char *, char *, int);

void func_0041D6E0(char *, char *, int, float);

void func_004B0CC0(unsigned char *p) {
    void func_00376E40(void);
    void func_00376B80(char *, int);
    int func_0041D6B0(char *, float);
    void func_00376B40(char *, int);
    char *b;
    D_005BE1AC |= 0x80000000;
    func_00376E40();
    *(int *)(p + 0x8FC) |= 0x400000;
    switch (p[6]) {
    case 0:
        func_00376B80((char *)p, -1);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 50.0f;
        *(float *)(p + 0x6C) = 1.0f;
        *(float *)(p + 0x8F8) = 45.0f;
        p[6] = 1;
    case 1:
        if (p[0x8EB] >= 2) {
            func_0041DAB0((char *)p + 0x50, (char *)p + 0x90, 255.0f * *(float *)(p + 0x10));
        } else if (p[0x8EB] == 1) {
            func_0041DAB0((char *)p + 0x50, (char *)p + 0x90, 127.0f * *(float *)(p + 0x10));
        }
        b = (char *)p;
        if (p) {
            b += 0x40;
        }
        func_0041D6E0(b, (char *)p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((char *)p + 0x8F8, *(float *)(p + 0x10)) == 1) {
            func_00376B40((char *)p, 8);
            return;
        }
        break;
    }
}

void func_004AE4B0(char *p) {
    int func_0024E800(char *);
    void func_00376E40(char *);
    void func_00377260(char *);
    void func_00376B80(char *, int);
    void func_00376B40(char *, int);
    func_00376E40(p);
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x400000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00377260(p);
        *(float *)(p + 0x3C44) = 1e-08f;
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            func_00376B40(p, 3);
        }
    }
}

void func_00376CF0(char *);

void func_004B0340(char *p) {
    int func_0041D6B0(float *x, float d);
    void func_00376E40(char *);
    void func_00377260(char *);
    void func_00376B80(char *, int);
    void func_00376B40(char *, int);
    func_00376E40(p);
    *(int *)(p + 0x110) = *(int *)(p + 0x110) | 2;
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x4000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00377260(p);
        *(float *)(p + 0x3C40) = 1200.0f;
        func_00376B80(p, -1);
        func_00376CF0(p);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0041D6B0((float *)(p + 0x8F8), *(float *)(p + 0x10)) == 1) {
            func_00376B40(p, 0xE);
        }
    }
}

void func_004B1080(char *p) {
    int func_0024E800(char *);
    void func_00376E40(char *);
    void func_00377260(char *);
    void func_00376B80(char *, int);
    void func_00376B40(char *, int);
    func_00376E40(p);
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x400000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00377260(p);
        *(float *)(p + 0x3C40) = 1200.0f;
        if (*(signed char *)(p + 0x973) > 5) {
            *(signed char *)(p + 0x973) = *(signed char *)(p + 0x973) - 2;
        }
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            func_00376B40(p, 3);
        }
    }
}

void func_004AD5B0(char *p) {
    int func_0024E800(char *);
    void func_00376E40(char *);
    void func_00376B80(char *, int);
    void func_00376B40(char *, int);
    void func_0041DBA0(char *, char *);
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DBA0(p, p + 0xC00);
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            if (*(unsigned char *)(p + 0x8EB) == 0) {
                if (*(unsigned char *)(p + 0x975) % 3 == 0) {
                    func_00376B40(p, 4);
                } else {
                    func_00376B40(p, 0x12);
                }
            } else {
                if ((int)*(unsigned char *)(p + 0x975) % 4 == 0) {
                    func_00376B40(p, 4);
                } else {
                    func_00376B40(p, 0x12);
                }
            }
        }
    }
}

extern char D_01CAFF0C[];

void func_002F2D30(char *, char *);

void func_004AE310(char *p) {
    int func_0024E800(char *);
    extern char *D_005BE09C;
    void func_00376E40(char *);
    void func_00376B80(char *, int);
    void func_001ACC30(char *, int, int, int, int);
    void func_001ACCD0(char *);
    func_00376E40(p);
    *(unsigned int *)(p + 0x8FC) |= 0x400000;
    *(unsigned int *)(p + 0x8FC) |= 0x4000000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_001ACC30(D_005BE09C, 3, 0x3C, 0x3E8, 0);
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            func_001ACCD0(D_005BE09C);
            if (*(char **)(*(char **)D_01CAFF0C + 0x20) != 0) {
                func_002F2D30(*(char **)(*(char **)D_01CAFF0C + 0x20), p);
            }
        }
        break;
    }
}

extern char D_00562A70[];

float func_00132470(char *, char *);

int func_00376F40(char *);

static inline unsigned char flag4000(char *p) {
    return (*(int *)(p + 0x8FC) & 0x4000) != 0;
}

void func_004AD6D0(char *p) {
    void func_00376E40(char *);
    void func_00376B80(char *, int);
    void func_00376B40(char *, int);
    float f;
    char *b;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        f = 25.0f;
        if (*(int *)(p + 0x910) == 0) {
            f *= 1.05f;
        }
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if (!flag4000(p) && func_00132470(p + 0x50, D_00562A70) < 1000.0f) {
            *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x4000;
            func_00376B40(p, 7);
        }
        if ((unsigned char)func_00376F40(p) == 1) {
            func_00376B40(p, 8);
            return;
        }
        break;
    }
}

void func_004AD800(char *p) {
    int func_0024E800(char *);
    void func_00376E40(char *);
    void func_00376B80(char *, int);
    void func_00376B40(char *, int);
    extern int D_005BE09C;
    void func_001ACC30(int, int, int, int, int);
    void func_0041DBA0(char *, char *);
    func_00376E40(p);
    *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x400000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        if (*(unsigned char *)(p + 0x8EB) == 0) {
            if (*(unsigned char *)(p + 0x975) > 6) {
                func_001ACC30(D_005BE09C, 3, 0x1E, 0x64, 0);
            }
        } else {
            if (*(unsigned char *)(p + 0x975) > 8) {
                func_001ACC30(D_005BE09C, 3, 0x1E, 0x64, 0);
            }
        }
        func_00376B80(p, -1);
        *(unsigned char *)(p + 6) = 1;
    case 1:
        func_0041DBA0(p, p + 0xC00);
        if ((unsigned char)func_0024E800(p + 0x2B20) == 1) {
            if (*(unsigned char *)(p + 0x8EB) == 0) {
                if (*(unsigned char *)(p + 0x975) > 6) {
                    func_00376B40(p, 0xF);
                } else {
                    func_00376B40(p, 0);
                }
            } else {
                if (*(unsigned char *)(p + 0x975) > 8) {
                    func_00376B40(p, 0xF);
                } else {
                    func_00376B40(p, 0);
                }
            }
        }
    }
}

extern unsigned int D_01DF8810[];

extern unsigned int D_01DF7E50[];

void func_00207A90(unsigned int *);

static inline char *up(char *q, int off) {
    if (q != 0) {
        q += off;
    }
    return q;
}

static inline unsigned char has100(char *p) {
    return (*(unsigned int *)(p + 0x8FC) & 0x100) != 0;
}

static inline float frand(void) {
    unsigned int y;
    if (D_01DF8810[0] >= 0x270) {
        func_00207A90(D_01DF7E50);
    }
    {
        unsigned int i = D_01DF8810[0];
        D_01DF8810[0] = i + 1;
        y = D_01DF7E50[i];
    }
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return 2.3283064e-10f * (float)y;
}

void func_004AEA60(char *p) {
    void func_00376E40(char *);
    void func_00376B80(char *, int);
    void func_00376B40(char *, int);
    int func_0041D6B0(float *, float);
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0: {
        float z;
        if (has100(p) == 1) {
            *(float *)(p + 0x8F8) = 10.0f;
        } else if (*(unsigned int *)(p + 0x8FC) & 0x800) {
            *(float *)(p + 0x8F8) = 30.0f;
        } else {
            *(float *)(p + 0x8F8) = 65.0f;
        }
        *(unsigned char *)(p + 0x97A) = 0;
        func_00376B80(p, -1);
        z = 25.0f;
        if (*(int *)(p + 0x910) == 0) {
            z = z * 1.05f;
        }
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = z;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 0x973) = 0x28;
        *(unsigned char *)(p + 6) = 1;
    }
    case 1:
        func_0041D6E0(up(p, 0x40), p + 0x60, 1, *(float *)(p + 0x10));
        if ((unsigned char)func_0041D6B0((float *)(p + 0x8F8), *(float *)(p + 0x10)) == 1) {
            if (has100(p) == 1) {
                if (100.0f * frand() < 50.0f) {
                    func_00376B40(p, 0x11);
                    *(unsigned char *)(p + 0x97A) = 1;
                } else {
                    func_00376B40(p, 0x10);
                    *(unsigned char *)(p + 0x97A) = 2;
                }
            } else if (*(unsigned int *)(p + 0x8FC) & 0x800) {
                func_00376B40(p, 0xA);
            } else {
                func_00376B40(p, 8);
            }
            *(unsigned int *)(p + 0x8FC) = *(unsigned int *)(p + 0x8FC) & ~0x100;
        }
        break;
    }
}

void func_004AE550(char *p) {
    void func_00376E40(char *);
    void func_00376B80(char *, int);
    int func_0041D6B0(char *, float);
    void func_00376B40(char *, int);
    func_00376E40(p);
    *(int *)(p + 0x8FC) |= 0x400000;
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        func_00376CF0(p);
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = 0.0f;
        *(float *)(p + 0x6C) = 1.0f;
        p[6] = 1;
    case 1:
        if ((unsigned char)func_0041D6B0(p + 0x8F8, *(float *)(p + 0x10)) == 1) {
            func_00376B40(p, 3);
        }
        break;
    }
}

int func_004AD520(p0) int p0; {
    int func_00376B40();
    int func_00376E40();
    int v2;
    char *v0;
    int v1;
    v0 = (char *)p0;
    v2 = func_00376E40();
    *(int *)(v0 + 2300) = (*(int *)(v0 + 2300) | 0x400000);
    v1 = *(unsigned char *)(v0 + 6);
    switch (v1) {
    case 0:
        D_005BE1AC = 0;
        *(char *)(v0 + 2421) = 0;
        *(int *)(v0 + 2300) = (*(int *)(v0 + 2300) | 16384);
        *(int *)(v0 + 2300) |= 32768;
        *(char *)(v0 + 6) = 1;
    case 1:
        /* fall through */
        v2 = func_00376B40(v0, 3);
        break;
    }
    return v2;
}

void func_004AE120(p0) char *p0; {
    int func_0024E800();
    int func_00376B40();
    void func_00376B80();
    int func_00376E40();
    int func_00377260();
    int v1;
    int v4;
    int v3;
    int v2;
    char *v0;
    int tmp1;
    v0 = p0;
    *(int *)(p0 + 272) |= 2;
    v2 = func_00376E40();
    v3 = *(int *)(v0 + 2300);
    *(int *)(v0 + 2300) = (0x4000000 | v3);
    v1 = *(unsigned char *)(v0 + 6);
    switch (v1) {
    case 0:
        func_00377260(v0);
        *(int *)(v0 + 15428) = 0x322bcc77;
        func_00376B80(v0, -1);
        *(char *)(v0 + 6) = 1;
        /* fall through */
    case 1:
        v2 = func_0024E800((v0 + 11040));
        tmp1 = (v2 & 255);
        v4 = (int)v0;
        if (1 == tmp1) {
            v2 = func_00376B40(v4, 14);
        }
        break;
    }
}

int func_004AE600(p0) int p0; {
    int func_00376B40();
    void func_00376B80();
    int func_00376E40();
    int func_0041D6B0(char *, float);
    char *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int tmp3;
    v0 = (char *)p0;
    v1 = func_00376E40();
    v5 = *(int *)(v0 + 2300);
    *(int *)(v0 + 2300) = (0x400000 | v5);
    v2 = *(int *)(v0 + 2300);
    *(int *)(v0 + 2300) = (v2 | 0x20000000);
    v3 = *(int *)(v0 + 2300);
    *(int *)(v0 + 2300) = (v3 | 0x10000000);
    *(int *)(v0 + 2300) = (*(int *)(v0 + 2300) | 0x8000000);
    v4 = *(unsigned char *)(v0 + 6);
    switch (v4) {
    case 0:
        func_00376B80(v0, -1);
        *(char *)(v0 + 2419) = 40;
        D_005BE1AC = 0;
        *(int *)(v0 + 2296) = 0x42700000;
        *(char *)(v0 + 6) = 1;
    case 1:
        /* fall through */
        v1 = func_0041D6B0((v0 + 2296), *(float *)(v0 + 16));
        tmp3 = (v1 & 255);
        v6 = (int)v0;
        if (1 == tmp3) {
            v1 = func_00376B40(v6, 3);
        }
        break;
    }
    return v1;
}

void func_00492E00();

int func_004AEF40(p0) int p0; {
    int func_0024E800();
    int func_00376B40();
    void func_00376B80();
    int func_00376E40();
    void func_0041DBA0();
    char *v0;
    int v1;
    int v2;
    v0 = (char *)p0;
    v2 = func_00376E40();
    *(int *)(v0 + 2300) = (*(int *)(v0 + 2300) | 0x400000);
    v1 = *(unsigned char *)(v0 + 6);
    switch (v1) {
    case 0:
        func_00376B80(v0, -1);
        *(char *)(v0 + 6) = 1;
        /* fall through */
    case 1:
        func_0041DBA0(v0, (v0 + 3072));
        v2 = func_0024E800((v0 + 11040));
        if ((v2 & 255) == 1) {
            func_00492E00(*(int *)(v0 + 2320), 1);
            v2 = func_00376B40(v0, 0);
        }
        break;
    }
    return v2;
}
