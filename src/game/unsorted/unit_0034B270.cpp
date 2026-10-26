extern "C" char D_01CAFF0C[];

extern "C" unsigned int func_002F0A40(char *);

class ObjDrD8 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void mD8(char *, char *);
};

typedef struct { int w[4]; } __attribute__((aligned(16))) qw16;

typedef struct { qw16 q[4]; } mat64q;

extern "C" mat64q D_0055E090;

extern "C" ObjDrD8 *func_002F15D0(char *, unsigned int);

extern "C" void func_0034C3E0(char *m) {
    char *s = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2B58;
    unsigned int n = func_002F0A40(s);
    unsigned int i;
    mat64q local = D_0055E090;
    m = m != 0 ? m : (char *)&local;
    for (i = 0; i < n; i++) {
        ObjDrD8 *o = func_002F15D0(s, i);
        if (o != 0) {
            char *c = *(char **)(*(char **)D_01CAFF0C + 0xC);
            if (c != 0) {
                c += 0x40;
            }
            o->mD8(m, c);
        }
    }
}

class ObjDrE4 {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30(); virtual void d31(); virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39(); virtual void d40(); virtual void d41();
    virtual void d42(); virtual void d43(); virtual void d44(); virtual void d45(); virtual void d46(); virtual void d47();
    virtual void d48(); virtual void d49(); virtual void d50(); virtual void d51(); virtual void d52(); virtual void d53();
    virtual void d54(); virtual void mE4(char *, char *);
};

extern "C" mat64q D_0055E050;

extern "C" void func_0034C2D0(char *m, signed char k) {
    char *s = *(char **)(*(char **)D_01CAFF0C + 0xC) + 0x2B58;
    unsigned int n = func_002F0A40(s);
    unsigned int i;
    mat64q local = D_0055E050;
    m = m != 0 ? m : (char *)&local;
    if (k != -1) {
        *m = k;
    }
    for (i = 0; i < n; i++) {
        ObjDrE4 *o = (ObjDrE4 *)func_002F15D0(s, i);
        if (o != 0) {
            char *c = *(char **)(*(char **)D_01CAFF0C + 0xC);
            if (c != 0) {
                c += 0x40;
            }
            o->mE4(m, c);
        }
    }
}

extern "C" int D_005BE09C;

extern "C" float func_001324B0(char *, char *);

extern "C" bool func_0034B340(float far, float near, unsigned char *out, float *t, char *pos, unsigned int hi, unsigned int lo) {
    bool r;
    float d;
    if (*(char **)((char *)D_005BE09C + 0x23C) == 0) return false;
    d = func_001324B0(*(char **)((char *)D_005BE09C + 0x23C) + 0x70, pos);
    r = false;
    if (d < far) {
        r = true;
        if (!(d <= near)) {
            *t = (d - near) / (far - near);
            *out = (unsigned int)((float)lo + *t * (float)(int)((unsigned char)hi - (unsigned char)lo));
        } else {
            *t = 0.0f;
            *out = lo;
        }
    }
    return r;
}

extern "C" float func_00132470(char *, char *);

extern "C" bool func_0034B490(float far, float near, unsigned char *out, float *t, char *pos, unsigned int hi, unsigned int lo) {
    bool r;
    float d;
    if (*(char **)((char *)D_005BE09C + 0x23C) == 0) return false;
    d = func_00132470(*(char **)((char *)D_005BE09C + 0x23C) + 0x70, pos);
    r = false;
    if (d < far) {
        r = true;
        if (!(d <= near)) {
            *t = (d - near) / (far - near);
            *out = (unsigned int)((float)lo + *t * (float)(int)((unsigned char)hi - (unsigned char)lo));
        } else {
            *t = 0.0f;
            *out = lo;
        }
    }
    return r;
}

extern "C" int func_00201770(char *, float *, char *, char *, int);

#define QCOPY(d, s) __asm__ volatile("lqc2 $vf4, 0x0(%1)\n\tsqc2 $vf4, 0x0(%0)" : : "r"(d), "r"(s) : "memory")

static inline bool func_0034B6B0_h(void) {
    if (*(int *)(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x55C) == 0) return false;
    return true;
}

extern "C" int func_0034B6B0(float h, float *pos, int x, char *o) {
    float v[4] __attribute__((aligned(16)));
    float r[4] __attribute__((aligned(16)));
    int m = 0;
    if (func_0034B6B0_h()) {
        QCOPY(v, pos);
        v[1] = v[1] + 130.0f;
        v[3] = 1.0f;
        if (o != 0) {
            switch (*(signed char *)(o + 0x45)) {
            case 0:
                m = 0x40;
                break;
            case 3:
                m = 0x10;
                break;
            case 2:
                m = 2;
                break;
            case 4:
                m = 0x20;
                break;
            }
        }
        if ((unsigned char)func_00201770(*(char **)(*(char **)D_01CAFF0C + 0x14) + 0x548, v, (char *)r, (char *)x, m) == 1 && pos[1] + h <= 10.0f + r[1]) {
            pos[1] = r[1];
            return 1;
        }
    }
    return 0;
}
