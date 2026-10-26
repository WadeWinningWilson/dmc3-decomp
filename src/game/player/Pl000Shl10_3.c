void func_001AD140(char *);

float func_00132470(char *, char *);

void func_0050E880(char *);

float func_0034C160(float, float, float);

void func_0050E680(char *);

void func_0050E420(char *p) {
    int f;
    int i;
    char *q;
    char *e;
    float v;
    *(float *)(p + 0x46C) = *(float *)(p + 0x46C) - *(float *)(p + 0x10);
    if (*(float *)(p + 0x46C) < 0.0f) {
        func_001AD140(p);
        return;
    }
    if (*(unsigned char *)(p + 0x491) != 0) {
        f = 0;
        for (i = 0, q = p; i < 2; i++, q += 4) {
            e = *(char **)(q + 0x20C);
            if (e != 0) {
                f = *(int *)(e + 8);
            }
            if (f & 0x100) {
                func_0050E880(p);
                func_001AD140(p);
                return;
            }
            if (f & 0x30000) {
                func_0050E880(p);
                func_001AD140(p);
                return;
            }
        }
    }
    v = func_0034C160(*(float *)(p + 0x470), 20.0f, *(float *)(p + 0x10));
    *(float *)(p + 0x470) = v;
    {
        float w = v * v;
        *(float *)(p + 0x54) = *(float *)(p + 0x54) - w * *(float *)(p + 0x10);
    }
    if (*(unsigned char *)(p + 0x491) == 0 && func_00132470(p + 0x480, p + 0x50) < 800.0f) {
        func_0050E680(p);
        *(unsigned char *)(p + 0x491) = 1;
    }
}
