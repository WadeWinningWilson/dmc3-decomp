struct M207 { float m[16]; };

extern "C" char *func_001B4250(M207 *, int, int, int);

extern "C" char *func_001EDE80(M207 *, int, int, int);

extern "C" char *func_001B11B0(M207 *, int, int, int);

extern "C" char *func_00205A00(M207 *, int, int, int);

#define UNIT(e) __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"(e) : "memory")

extern "C" char *func_00207480(unsigned char type, int id, M207 *mat, unsigned char fl) {
    M207 m __attribute__((aligned(16)));
    char *o;
    if (mat != 0) {
        m = *mat;
    } else {
        UNIT(&m);
    }
    switch (type) {
    case 0:
        o = func_001B4250(&m, 0, id, 0);
        break;
    case 1:
        o = func_001EDE80(&m, 0, id, 0);
        break;
    case 2:
        o = func_001B11B0(&m, 0, id, 0);
        break;
    case 3:
        o = func_00205A00(&m, 0, id, 0);
        break;
    }
    if (o != 0) {
        *(int *)(o + 0xC) |= fl;
    }
    return o;
}
