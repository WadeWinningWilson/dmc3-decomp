class V24E {
public:
    virtual void d8(); virtual void dC();
    virtual void g10(int, char *, unsigned char, int);
    virtual void d14(); virtual void d18(); virtual void d1C(); virtual void d20(); virtual void d24(); virtual void d28(); virtual void d2C(); virtual void d30();
    virtual void d34(); virtual void d38(); virtual void d3C(); virtual void d40(); virtual void d44(); virtual void d48(); virtual void d4C();
    virtual void g50(int, unsigned char);
    virtual void d54();
    virtual unsigned char g58(int);
    virtual void d5C();
    virtual unsigned char g60(int);
};

static inline char *ent24E(char *t, unsigned int k) {
    if (*(unsigned int *)(t + 4) < k + 1) return 0;
    if (*(int *)((char *)(k * 4) + (int)t + 8) == 0) return 0;
    return t + *(int *)(t + k * 4 + 8);
}

extern "C" void func_0024E530(char *p, char *q, int a, int b) {
    char *t;
    char *h;
    char *e;
    int i;
    t = *(char **)(p + 0x18) + *(unsigned short *)(*(char **)(p + 0x18) + *(unsigned char *)(q + 4) * 2);
    *(char **)(p + 0x1C) = t + *(unsigned short *)(t + *(unsigned char *)(q + 5) * 2);
    h = *(char **)(p + 0x1C);
    *(char **)(p + 0x1C) = h + 2;
    *(char **)(p + 0x20) = *(char **)(p + 0x1C) + *(unsigned char *)h * 6;
    for (i = 0; i < *(unsigned char *)h; i++) {
        e = *(char **)(p + 0x1C);
        *(char **)(p + 0x1C) = e + 6;
        if (*(unsigned char *)e == *(int *)(p + 0x38)) {
            if (*(unsigned char *)(e + 2) == 1) *(unsigned char *)(p + 0x7E) = 1;
            else *(unsigned char *)(p + 0x7E) = 0;
            (*(V24E **)(p + 0x44))->g10(*(int *)(p + 0x38), ent24E(*(char **)(*(char **)(p + 0x40) + *(unsigned short *)(e + 4) / 100 * 4), *(unsigned short *)(e + 4) % 100), (unsigned char)a, b);
            switch (*(unsigned char *)(e + 1)) {
            case 0:
                *(unsigned char *)(p + 0x7F) = 0;
                (*(V24E **)(p + 0x44))->g50(*(int *)(p + 0x38), *(unsigned char *)(p + 0x7F));
                break;
            case 1:
                *(unsigned char *)(p + 0x7F) = 1;
                (*(V24E **)(p + 0x44))->g50(*(int *)(p + 0x38), *(unsigned char *)(p + 0x7F));
                break;
            case 2:
                *(unsigned char *)(p + 0x7F) = (*(V24E **)(p + 0x44))->g60(0);
                break;
            }
            *(unsigned char *)(p + 0x86) = (*(V24E **)(p + 0x44))->g58(*(int *)(p + 0x38));
            return;
        }
    }
}
