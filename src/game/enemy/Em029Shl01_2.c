void func_001AD140(char *);

int func_0041D6B0(float *x, float d);

char *func_00207480(int, int, char *, int);

void func_0034BA60(int, char *, int, int, int);

void func_0041D670(char *);

void func_003D3790(char *p) {
    char *g;
    switch (*(int *)(p + 0xB54)) {
    case 0:
        *(float *)(p + 0xB60) = 600.0f;
        *(int *)(p + 0xB54) = 1;
    case 1:
        g = *(char **)(p + 0x94C);
        if (g != 0 && (*(int *)(g + 8) & 0x31001)) {
            func_0041D670(p + 0xB50);
            func_0034BA60(0x4B, p + 0x50, 0x32, 0, 1);
            func_00207480(3, 0x336, p + 0x1F0, 16);
            *(float *)(p + 0xB60) = 30.0f;
            *(int *)(p + 0xB54) = 2;
        }
    case 2:
        if ((unsigned char)func_0041D6B0((float *)(p + 0xB60), *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
    }
}

void func_0041DAB0(char *, char *, int);

void func_0041D800(char *, float, float);

float func_0041DB20(float *);

void func_003D3AD0(char *p) {
    char *e;
    switch (*(int *)(p + 0xB54)) {
    case 0:
        *(float *)(p + 0xB60) = 300.0f;
        *(int *)(p + 0xB54) = 1;
    case 1:
        e = *(char **)(p + 0x94C);
        if (e != 0 && (*(int *)(e + 8) & 0x31001) != 0) {
            func_0041D670(p + 0xB50);
            func_0034BA60(0x4B, p + 0x50, 0x32, 0, 1);
            func_00207480(3, 0x336, p + 0x1F0, 0x10);
            *(float *)(p + 0xB60) = 30.0f;
            *(int *)(p + 0xB54) = 2;
        }
    case 2:
        if (*(float *)(p + 0xB60) < 280.0f) {
            func_0041D800(p + 0x68, 1.5f * *(float *)(p + 0x10), 30.0f);
            if (*(short *)(p + 0xB66) > 0) {
                if (func_0041DB20((float *)(p + 0x50)) < 500.0f) {
                    *(short *)(p + 0xB66) = 0;
                }
                func_0041DAB0(p + 0x50, p + 0x90, (int)((float)*(short *)(p + 0xB66) * *(float *)(p + 0x10)));
                *(short *)(p + 0xB66) = *(short *)(p + 0xB66) - 4;
                if (*(short *)(p + 0xB66) < 0) {
                    *(short *)(p + 0xB66) = 0;
                }
            }
        }
        if ((unsigned char)func_0041D6B0((float *)(p + 0xB60), *(float *)(p + 0x10)) == 1) {
            func_001AD140(p);
            return;
        }
        break;
    }
}
