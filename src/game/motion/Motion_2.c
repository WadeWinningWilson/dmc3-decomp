typedef struct { short k; short pad; int v; } KLEnt;

typedef struct { short n; short pad; KLEnt e[128]; } KLTab128;

int func_001FED70(KLTab128 *t, short k) {
    int i;
    for (i = 0; i < 128; i++) {
        if (t->e[i].k == k) {
            return t->e[i].v;
        }
    }
    return 0;
}

int func_001FB670(char *h, char *out, int idx) {
    char *e;
    char *d;
    int n;
    if (*(char **)(h + 8) == 0) return 0;
    n = *(unsigned short *)(*(char **)(h + 8) + 2);
    if (idx < 0 || n <= idx) return 0;
    switch (*(unsigned short *)(*(char **)(h + 8) + 4)) {
    case 2:
        e = *(char **)(h + 0xC) + idx * 4;
        if (*(unsigned short *)e & 0x8000) {
            *(unsigned char *)out = 2;
        } else {
            *(unsigned char *)out = 1;
        }
        *(int *)(out + 4) = (*(unsigned short *)e & 0x7FFF) + *(short *)(*(char **)(h + 8) + 6);
        d = *(char **)(h + 8);
        *(float *)(out + 8) = *(float *)(d + 8) + (float)*(unsigned short *)(e + 2) * *(float *)(d + 0xC) / 65535.0f;
        *(float *)(out + 0xC) = 0.0f;
        *(float *)(out + 0x10) = 0.0f;
        break;
    case 3:
        e = *(char **)(h + 0xC) + idx * 8;
        if (*(unsigned short *)e & 0x8000) {
            *(unsigned char *)out = 2;
        } else {
            *(unsigned char *)out = 1;
        }
        *(int *)(out + 4) = (*(unsigned short *)e & 0x7FFF) + *(short *)(*(char **)(h + 8) + 6);
        d = *(char **)(h + 8);
        *(float *)(out + 8) = *(float *)(d + 8) + (float)*(unsigned short *)(e + 2) * *(float *)(d + 0xC) / 65535.0f;
        d = *(char **)(h + 8);
        *(float *)(out + 0xC) = *(float *)(d + 0x10) + (float)*(unsigned short *)(e + 4) * *(float *)(d + 0x14) / 65535.0f;
        d = *(char **)(h + 8);
        *(float *)(out + 0x10) = *(float *)(d + 0x18) + (float)*(unsigned short *)(e + 6) * *(float *)(d + 0x1C) / 65535.0f;
        break;
    case 0:
        e = *(char **)(h + 0xC) + idx * 8;
        if (*(unsigned short *)e & 0x8000) {
            *(unsigned char *)out = 2;
        } else {
            *(unsigned char *)out = 1;
        }
        *(int *)(out + 4) = (*(unsigned short *)e & 0x7FFF) + *(short *)(*(char **)(h + 8) + 6);
        *(float *)(out + 8) = *(float *)(e + 4);
        *(float *)(out + 0xC) = 0.0f;
        *(float *)(out + 0x10) = 0.0f;
        break;
    case 1:
        e = *(char **)(h + 0xC) + idx * 16;
        if (*(unsigned short *)e & 0x8000) {
            *(unsigned char *)out = 2;
        } else {
            *(unsigned char *)out = 1;
        }
        *(int *)(out + 4) = (*(unsigned short *)e & 0x7FFF) + *(short *)(*(char **)(h + 8) + 6);
        *(float *)(out + 8) = *(float *)(e + 4);
        *(float *)(out + 0xC) = *(float *)(e + 8);
        *(float *)(out + 0x10) = *(float *)(e + 0xC);
        break;
    }
    return 1;
}

float func_001F9EC0(char *p0) {
    float t0;
    t0 = *(float *)(p0 + 4);
    *(float *)(p0 + 0) = *(float *)(p0 + 4);
    *(int *)(p0 + 16) = 0;
    *(int *)(p0 + 8) = 0;
    *(int *)(p0 + 12) = 0;
    return t0;
}
