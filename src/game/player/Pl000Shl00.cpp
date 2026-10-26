extern "C" void func_002E7590(char *);

static inline unsigned char fnz(float d) {
    unsigned char r = 0;
    if (!(d <= 0.0f) || d < 0.0f) {
        r = 1;
    }
    return r;
}

extern "C" void func_002E7510(char *o, unsigned char a, unsigned char b, unsigned char c, float x, float y, float z, float w) {
    if (fnz(z - w) == 0) {
        z += 1e-6f;
    }
    *(float *)(o + 4) = x;
    *(float *)(o + 8) = y;
    *(float *)(o + 0xC) = z;
    *(float *)(o + 0x10) = w;
    *(int *)(o + 0x14) = a;
    *(int *)(o + 0x18) = b;
    *(int *)(o + 0x1C) = c;
    func_002E7590(o);
}
