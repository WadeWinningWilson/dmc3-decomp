typedef struct { char pad[0x48]; short s48[16]; int i68[16]; short sA8[16]; short sC8[16]; } Q2111;

void func_002111D0(char *p) {
    int i;
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x24) = 0;
    *(int *)(p + 0x28) = 0;
    *(int *)(p + 0x30) = 0;
    *(int *)(p + 0x34) = 0;
    *(int *)(p + 0x38) = 0;
    *(float *)(p + 0x2C) = 1000000.0f;
    *(short *)(p + 0x3C) = 0;
    *(short *)(p + 0x3E) = 1;
    *(short *)(p + 0x44) = 0;
    *(short *)(p + 0x46) = 0;
    for (i = 0; i < 16; i++) {
        ((Q2111 *)p)->s48[i] = -1;
        ((Q2111 *)p)->i68[i] = 0;
        ((Q2111 *)p)->sA8[i] = 0;
        ((Q2111 *)p)->sC8[i] = 0;
    }
    *(short *)(p + 0xE8) = 0;
    *(short *)(p + 0xF0) = 0;
    *(short *)(p + 0xF2) = 0;
    *(short *)(p + 0xF4) = -1;
    *(float *)(p + 0xF8) = 0.01f;
    *(float *)(p + 0xFC) = 0.01f;
    *(short *)(p + 0x100) = 0;
    *(short *)(p + 0x102) = 0;
    *(short *)(p + 0x104) = 0;
    *(int *)(p + 0x110) = 0;
    *(int *)(p + 0x114) = 0;
    *(int *)(p + 0x118) = 0;
    *(float *)(p + 0x11C) = 1.0f;
    *(int *)(p + 0x120) = 0;
    *(int *)(p + 0x124) = 0;
    *(int *)(p + 0x128) = 0;
    *(int *)(p + 0x12C) = 0;
    *(short *)(p + 0x130) = 0;
    *(short *)(p + 0x132) = 0;
    *(short *)(p + 0x134) = 0;
    *(float *)(p + 0x198) = 120.0f;
    *(short *)(p + 0x138) = 0;
}

void func_00211670(char *p) {
    extern short D_00541CE0[];
    int i;
    for (i = 0; i < D_00541CE0[*(unsigned char *)(p + 6) * 12]; i++) {
        char *e = *(char **)(p + 0x24) + i * 16;
        if (*(int *)e != 0) {
            unsigned char *q = *(unsigned char **)(e + 4);
            switch (*q) {
            case 0:
                break;
            case 1:
            case 2:
            case 4:
            case 3:
                *q = 1;
                break;
            }
        }
    }
}

void func_00211110(p0) char *p0; {
    *(int *)(p0 + 32) = 0;
    *(int *)(p0 + 84) = 0;
    *(int *)(p0 + 80) = 0x49742400;
    *(char *)(p0 + 93) = 0;
    *(char *)(p0 + 94) = 0;
    *(char *)(p0 + 95) = 0;
    *(char *)(p0 + 96) = 96;
    *(char *)(p0 + 97) = 2;
    *(int *)(p0 + 100) = 0x40066666;
    *(char *)(p0 + 90) = 0;
    *(char *)(p0 + 91) = 0;
    *(char *)(p0 + 104) = -1;
    *(char *)(p0 + 121) = 0;
    *(char *)(p0 + 108) = 0;
    *(char *)(p0 + 107) = 0;
    *(char *)(p0 + 106) = 0;
    *(char *)(p0 + 105) = 0;
    *(char *)(p0 + 112) = 0;
    *(char *)(p0 + 111) = 0;
    *(char *)(p0 + 110) = 0;
    *(char *)(p0 + 109) = 0;
    *(char *)(p0 + 116) = 0;
    *(char *)(p0 + 115) = 0;
    *(char *)(p0 + 114) = 0;
    *(char *)(p0 + 113) = 0;
    *(char *)(p0 + 120) = 0;
    *(char *)(p0 + 119) = 0;
    *(char *)(p0 + 118) = 0;
    *(char *)(p0 + 117) = 0;
    *(int *)(p0 + 124) = 0x42f00000;
    *(char *)(p0 + 128) = 0;
    *(char *)(p0 + 129) = 64;
    *(char *)(p0 + 130) = 64;
    *(char *)(p0 + 131) = 1;
    *(int *)(p0 + 132) = 0x42f00000;
}

void func_00211320(p0) char *p0; {
    int v0;
    int v1;
    char *v2;
    char *v3;
    *(short *)(p0 + 148) = 0;
    *(int *)(p0 + 36) = 0;
    *(int *)(p0 + 40) = 0;
    *(int *)(p0 + 44) = 0;
    *(int *)(p0 + 48) = 0;
    *(int *)(p0 + 52) = 0;
    *(int *)(p0 + 56) = 0;
    *(int *)(p0 + 60) = 0;
    *(int *)(p0 + 64) = 0;
    v0 = -1;
    *(int *)(p0 + 116) = 0;
    v1 = 0;
    *(int *)(p0 + 120) = 0;
    v2 = p0;
    *(int *)(p0 + 124) = 0;
    v3 = p0;
    *(int *)(p0 + 128) = 0;
    *(int *)(p0 + 132) = 0;
    *(int *)(p0 + 136) = 0;
    *(int *)(p0 + 140) = 0;
    *(int *)(p0 + 144) = 0;
    *(char *)(p0 + 526) = 0;
    *(char *)(p0 + 525) = 0;
    *(int *)(p0 + 112) = 0x49742400;
    *(short *)(p0 + 150) = 0;
    *(short *)(p0 + 152) = 0;
    *(short *)(p0 + 154) = 0;
    *(short *)(p0 + 518) = 0;
    *(short *)(p0 + 516) = 0;
    *(short *)(p0 + 514) = 0;
    *(short *)(p0 + 512) = 0;
    *(short *)(p0 + 522) = 1;
    *(int *)(p0 + 1572) = 0x42c80000;
    *(char *)(p0 + 1632) = 0;
    *(int *)(p0 + 1584) = 0x41a00000;
    *(int *)(p0 + 1588) = 0x41a00000;
    *(int *)(p0 + 1600) = 0;
    *(int *)(p0 + 1604) = 0;
    *(char *)(p0 + 1633) = 0;
    *(int *)(p0 + 1616) = 0x3dcccccd;
    *(int *)(p0 + 1620) = 0x3dcccccd;
    *(char *)(p0 + 1634) = 0;
    *(char *)(p0 + 1635) = 0;
    *(short *)(p0 + 158) = 16;
    *(int *)(p0 + 1648) = 0;
    *(short *)(p0 + 1636) = v0;
    *(short *)(p0 + 1638) = v0;
    *(short *)(p0 + 1640) = v0;
    *(short *)(p0 + 1642) = v0;
    *(char *)(p0 + 1644) = 0;
    *(short *)(p0 + 1652) = 0;
    *(short *)(p0 + 1654) = 0;
    do {
        *(short *)(v2 + 1656) = v0;
        *(int *)(v3 + 1688) = 0;
        v1 = (v1 + 8);
        *(short *)(v2 + 1658) = v0;
        *(int *)(v3 + 1692) = 0;
        *(short *)(v2 + 1660) = v0;
        *(int *)(v3 + 1696) = 0;
        *(short *)(v2 + 1662) = v0;
        *(int *)(v3 + 1700) = 0;
        *(short *)(v2 + 1664) = v0;
        *(int *)(v3 + 1704) = 0;
        *(short *)(v2 + 1666) = v0;
        *(int *)(v3 + 1708) = 0;
        *(short *)(v2 + 1668) = v0;
        *(int *)(v3 + 1712) = 0;
        *(short *)(v2 + 1670) = v0;
        *(int *)(v3 + 1716) = 0;
        v2 = (v2 + 16);
        v3 = (v3 + 32);
    } while ((v1 < 16));
    *(short *)(p0 + 1752) = 0;
    *(short *)(p0 + 1754) = 0;
    *(short *)(p0 + 1756) = 1;
    *(short *)(p0 + 1758) = 0;
    *(short *)(p0 + 156) = 0;
    *(char *)(p0 + 1568) = 0;
    *(char *)(p0 + 1569) = 0;
    *(short *)(p0 + 1760) = 0;
    *(short *)(p0 + 1762) = 0;
    *(short *)(p0 + 1764) = v0;
    *(short *)(p0 + 1766) = 0;
    *(char *)(p0 + 1768) = 0;
    *(unsigned char *)(p0 + 1769) = 128;
    *(unsigned char *)(p0 + 1770) = 128;
    *(unsigned char *)(p0 + 1771) = 128;
    *(char *)(p0 + 1772) = 0;
    *(int *)(p0 + 80) = 0;
    *(int *)(p0 + 84) = 0;
    *(int *)(p0 + 88) = 0;
    *(int *)(p0 + 92) = 0x3f800000;
    *(int *)(p0 + 96) = 0;
    *(int *)(p0 + 100) = 0;
    *(int *)(p0 + 104) = 0;
    *(int *)(p0 + 108) = 0x3f800000;
}

int func_002114E0(p0) char *p0; {
    int v0;
    char *v1;
    v0 = 0;
    v1 = p0;
    do {
        *(int *)(v1 + 0) = 0;
        *(int *)(v1 + 4) = 0;
        v0 = (v0 + 8);
        *(int *)(v1 + 8) = 0;
        *(int *)(v1 + 12) = 0;
        *(int *)(v1 + 16) = 0;
        *(int *)(v1 + 20) = 0;
        *(int *)(v1 + 24) = 0;
        *(int *)(v1 + 28) = 0;
        v1 = (v1 + 32);
    } while ((v0 < 64));
    *(int *)(p0 + 260) = 0;
    *(int *)(p0 + 256) = 0;
    return (int)p0;
}

int func_00211740(p0) char *p0; {
    extern char D_00541CE0[];
    return *(short *)((D_00541CE0 + (*(unsigned char *)(p0 + 6) * 24)) + 0);
}

int func_00211770(p0) char *p0; {
    extern char D_00541CE0[];
    int v0;
    char *v1;
    int v2;
    int v3;
    int tmp0;
    v2 = (*(int *)(p0 + 40) + 1);
    v0 = *(short *)((D_00541CE0 + (*(unsigned char *)(p0 + 6) * 24)) + 0);
    if ((v2 < v0)) {
        v1 = (char *)(*(int *)(p0 + 36) + (v2 << 4));
        do {
            if (*(int *)(v1 + 0) != 0) {
                *(int *)(p0 + 40) = v2;
                break;
            }
            v2 = (v2 + 1);
            v1 = (v1 + 16);
        } while ((v2 < v0));
    }
    tmp0 = (v2 < *(short *)((D_00541CE0 + (*(unsigned char *)(p0 + 6) * 24)) + 0));
    v3 = 1;
    if (tmp0 == 0) {
        *(char *)(p0 + 44) = v3;
    }
    return *(unsigned char *)(p0 + 44);
}

int func_00211810(p0) char *p0; {
    int v0;
    int tmp0;
    tmp0 = *(unsigned char *)(p0 + 44);
    if (tmp0 == 0) {
        return *(int *)((char *)(*(int *)(p0 + 36) + (*(int *)(p0 + 40) << 4)) + 4);
    }
    return 0;
}

extern char D_005A7810[];

char *func_00211530(char *p0) {
    *(char **)(p0 + 28) = D_005A7810;
    *(char *)(p0 + 0) = 0;
    *(int *)(p0 + 4) = 0;
    *(int *)(p0 + 8) = 0xbf800000;
    *(int *)(p0 + 12) = 0xbf800000;
    *(int *)(p0 + 16) = 0x3f800000;
    *(int *)(p0 + 20) = 0;
    *(int *)(p0 + 24) = 0;
    return p0;
}
