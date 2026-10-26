extern "C" void func_001FE710(char *, char *, float, float, float);

class W1FE {
public:
    char pad[0xC];
    unsigned char on;
    virtual void m8(char *, char *, float, float, float);
};

static inline void func_001FE270_d(char *e, char *a, float x, float y, float z) {
    W1FE *o = *(W1FE **)(e + 0xFC);
    if (o == 0) {
        func_001FE710(e, a, x, y, z);
    } else if (o->on != 0) {
        o->m8(e, a, x, y, z);
    } else {
        func_001FE710(e, a, x, y, z);
    }
}

extern "C" void func_001FE270(char *p, char *a) {
    int i;
    char *e;
    char *q;
    W1FE *o;
    float x;
    float y;
    float z;
    if (*(unsigned char *)(p + 0x192) != 0 && *(unsigned char *)(p + 0xAC) != 0) {
        e = (*(char ***)(p + 0x14))[**(unsigned char **)(p + 4)];
        func_001FE270_d(e, a, 1.0f, 1.0f, 1.0f);
        for (i = 1; i < *(int *)(p + 0x10); i++) {
            e = (*(char ***)(p + 0x14))[(*(unsigned char **)(p + 4))[i]];
            q = *(char **)(e + 0xF0);
            x = *(float *)(q + 0xE0);
            y = *(float *)(q + 0xE4);
            z = *(float *)(q + 0xE8);
            o = *(W1FE **)(e + 0xFC);
            if (o == 0) {
                func_001FE710(e, *(char **)(q + 0x104), x, y, z);
            } else if (o->on != 0) {
                o->m8(e, *(char **)(q + 0x104), x, y, z);
            } else {
                func_001FE710(e, *(char **)(q + 0x104), x, y, z);
            }
        }
    }
}
