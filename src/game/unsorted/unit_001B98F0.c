extern char *D_005BE09C;

extern char D_00540720[];

void func_001B9910(int *);

int func_001B9C70(int *g, char *out, float *m, float *in, unsigned int n) {
    float tmp[4] __attribute__((aligned(16)));
    unsigned int k;
    unsigned int sum;
    char *o;
    int c;
    func_001B9910(g);
    o = out;
    sum = 0;
    k = n;
    while (k != 0) {
        __asm__ volatile("lqc2 $vf9, 0x0(%1)\n\tlqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x10(%2)\n\tlqc2 $vf6, 0x20(%2)\n\tlqc2 $vf7, 0x30(%2)\n\tvmulax.xyzw $ACC, $vf4, $vf9x\n\tvmadday.xyzw $ACC, $vf5, $vf9y\n\tvmaddaz.xyzw $ACC, $vf6, $vf9z\n\tvmaddw.xyzw $vf4, $vf7, $vf9w\n\tvdiv $Q, $vf0w, $vf4w\n\tvwaitq\n\tvaddq.x $vf5, $vf0, $Q\n\tvmulx.xyz $vf4, $vf4, $vf5x\n\tvsub.xyzw $vf8, $vf0, $vf0\n\tsqc2 $vf4, 0x0(%3)\n\tvftoi4.xy $vf5, $vf4\n\tlqc2 $vf6, 0x0(%4)\n\tvftoi0.zw $vf5, $vf4\n\tctc2.ni $zero, $vi16\n\tsqc2 $vf5, 0x0(%5)\n\tvsub.xyw $vf9, $vf4, $vf8\n\tvsub.xy $vf9, $vf6, $vf4\n\tvnop\n\tvnop\n\tvnop\n\tvnop\n\tvnop\n\tcfc2.ni %0, $vi16" : "=r"(c) : "r"(in), "r"(m), "r"(tmp), "r"(D_00540720), "r"(out) : "memory");
        c &= 0xC0;
        if (!(tmp[3] <= *(float *)(D_005BE09C + 0x1CC))) c |= 0x10;
        if (tmp[3] < *(float *)(D_005BE09C + 0x1C8)) c |= 0x20;
        if (c != 0) return c;
        sum += *(int *)(out + 8);
        in += 4;
        k--;
        out += 0x10;
    }
    *(unsigned int *)(o + 0xC) = (sum >> (g[0] - 13)) / n;
    return 0;
}

extern char *D_005BE0D8;

int func_001B9AB0(int *g, char *out, float *m, float *in, unsigned int n) {
    float tmp[4] __attribute__((aligned(16)));
    unsigned int k;
    unsigned int sum;
    char *o;
    int c;
    func_001B9910(g);
    o = out;
    sum = 0;
    k = n;
    while (k != 0) {
        __asm__ volatile("lqc2 $vf8, 0x0(%1)\n\tlqc2 $vf4, 0x0(%2)\n\tlqc2 $vf5, 0x10(%2)\n\tlqc2 $vf6, 0x20(%2)\n\tlqc2 $vf7, 0x30(%2)\n\tvmulax.xyzw $ACC, $vf4, $vf8x\n\tvmadday.xyzw $ACC, $vf5, $vf8y\n\tvmaddaz.xyzw $ACC, $vf6, $vf8z\n\tvmaddw.xyzw $vf4, $vf7, $vf8w\n\tvdiv $Q, $vf0w, $vf4w\n\tvwaitq\n\tvaddq.x $vf5, $vf0, $Q\n\tvmulx.xyz $vf4, $vf4, $vf5x\n\tsqc2 $vf4, 0x0(%3)\n\tvftoi0.xyzw $vf5, $vf4\n\tsqc2 $vf5, 0x0(%5)\n\tvsub.xyzw $vf8, $vf0, $vf0\n\tlqc2 $vf6, 0x0(%4)\n\tctc2.ni $zero, $vi16\n\tvsub.xyw $vf5, $vf4, $vf8\n\tvsub.xy $vf5, $vf6, $vf4\n\tvnop\n\tvnop\n\tvnop\n\tvnop\n\tvnop\n\tcfc2.ni %0, $vi16" : "=r"(c) : "r"(in), "r"(m), "r"(tmp), "r"(D_00540720), "r"(out) : "memory");
        c &= 0xC0;
        if (!(tmp[3] <= *(float *)(D_005BE09C + 0x1CC))) c |= 0x10;
        if (tmp[3] < *(float *)(D_005BE09C + 0x1C8)) c |= 0x20;
        if (c != 0) return c;
        *(int *)(out + 0) = *(int *)(out + 0) - 0x800 + *(short *)(D_005BE0D8 + 0x20) / 2;
        *(int *)(out + 4) = *(int *)(out + 4) - 0x800 + *(short *)(D_005BE0D8 + 0x24) / 2;
        sum += *(int *)(out + 8);
        in += 4;
        k--;
        out += 0x10;
    }
    *(unsigned int *)(o + 0xC) = (sum >> (g[0] - 13)) / n;
    return 0;
}

extern void func_001B98F0();

void func_001B9900(void) { func_001B98F0(); }
