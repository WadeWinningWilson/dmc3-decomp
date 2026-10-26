void func_003528C0(unsigned long long);

extern unsigned long D_01DFAD00[];

extern int D_005BCA38;

extern unsigned long D_0055E1C0[];

unsigned long func_00352CA0(void) {
    unsigned long y;
    int kk;
    if (D_005BCA38 >= 624) {
        if (D_005BCA38 == 625) func_003528C0(4357);
        for (kk = 0; kk < 624 - 397; kk++) {
            y = (D_01DFAD00[kk] & 0x80000000) | (D_01DFAD00[kk + 1] & 0x7FFFFFFF);
            D_01DFAD00[kk] = D_01DFAD00[kk + 397] ^ (y >> 1) ^ D_0055E1C0[y & 0x1];
        }
        for (; kk < 624 - 1; kk++) {
            y = (D_01DFAD00[kk] & 0x80000000) | (D_01DFAD00[kk + 1] & 0x7FFFFFFF);
            D_01DFAD00[kk] = D_01DFAD00[kk + (397 - 624)] ^ (y >> 1) ^ D_0055E1C0[y & 0x1];
        }
        y = (D_01DFAD00[624 - 1] & 0x80000000) | (D_01DFAD00[0] & 0x7FFFFFFF);
        D_01DFAD00[624 - 1] = D_01DFAD00[397 - 1] ^ (y >> 1) ^ D_0055E1C0[y & 0x1];
        D_005BCA38 = 0;
    }
    y = D_01DFAD00[D_005BCA38++];
    y ^= (y >> 11);
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= (y >> 18);
    return y;
}
