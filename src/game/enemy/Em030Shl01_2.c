static inline char *ent400(char *p, int i) {
    char *e;
    if (!(i < *(int *)(p + 0x1290))) e = 0;
    else e = *(char **)(p + 0x1260) + i * 0x80;
    return e;
}

static inline void set400(char *e, float x, float y, float z) {
    *(float *)(e + 0x20) = x;
    *(float *)(e + 0x24) = y;
    *(float *)(e + 0x28) = z;
    *(float *)(e + 0x2C) = 1.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(e), "r"(e + 0x20) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(e + 0x10), "r"(e + 0x20) : "memory");
}

void func_00400C10(char *p, float f) {
    float v[4];
    int i;
    for (i = 0; i < 8; i++) {
        v[0] = *(float *)(*(char **)(p + 0x1260) + i * 0x80 + *(int *)(p + 0x1264) * 16);
        v[1] = *(float *)((char *)(*(int *)(p + 0x1264) * 16) + (int)((char *)(i * 0x80) + (int)*(char **)(p + 0x1260)) + 4);
        v[2] = *(float *)((char *)(*(int *)(p + 0x1264) * 16) + (int)((char *)(i * 0x80) + (int)*(char **)(p + 0x1260)) + 8);
        v[3] = 1.0f;
        switch (i & 3) {
        case 0:
            set400(ent400(p, i), v[0], v[1], v[2] + f);
            break;
        case 1:
            set400(ent400(p, i), v[0], v[1], v[2] - f);
            break;
        case 2:
            set400(ent400(p, i), v[0] + f, v[1], v[2]);
            break;
        case 3:
            set400(ent400(p, i), v[0] - f, v[1], v[2]);
            break;
        }
    }
}

extern void func_00400E60();

void func_00400F60(char *p) { func_00400E60(p + -64); }

void func_00400F70(char *p) { func_00400E60(p + -160); }
