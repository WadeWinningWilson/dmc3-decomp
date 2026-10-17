/* Hand-matched functions whose callee prototypes conflict with declarations in misc5-8. */

extern char D_00568D20[];
extern float D_00561F00[][3];
void func_003F2E90(char *);
int func_0024E780(char *, int, int);
void func_0024E7B0(char *, int, int);
void func_0028C8E0(char *, int);
void func_0028C910(char *);
char *func_0028C3A0(char *, int, int, char *);
int func_0024E800(char *);
void func_003E9930(char *);
void func_0028C790(char *, int);
void func_0028C200(char *, char *, char *, int, char *, char *, int);
void func_0029DCE0(char *, int);
void func_002A0100(char *);
int func_002A4A40(char *);
extern char D_00666710[];
extern char D_0066671A[];
extern char D_0057BA50[];
extern char D_0057BA90[];
extern char D_01DFABA0[];
extern char D_00562A70[];
void func_003FA3F0(char *, int);
void func_003F85D0(char *);
void func_00426C50(char *);
void func_004270C0(char *);
void func_003F8E90(char *);
void func_003F9080(char *);
void func_003F94A0(char *);
void func_003F9700(char *);
int func_0023DF80(char *, float);
void func_0021BFC0(char *);
void func_00430EA0(char *, int);
void func_002DA650(char *);
void func_002DA3A0(char *, int);
int func_002496D0(char *);
void func_002490F0(char *, int, int, int, int, int, float);
int func_0023E1F0(char *);
int func_0023E500(char *);
unsigned short func_001AE770(char *, int);
float func_0011D798(float);
int func_002450D0(char *, int, float);
void func_0021C520(char *, int, int);
int func_00244DF0(char *, int);
int func_0021CBA0(char *);
int func_002DAD40(char *);
int func_0023F760(char *);
void func_0021BDB0(char *, int, int);
void func_0021C7A0(char *, int);
void func_0021BEA0(char *, int);
int func_00471DF0(char *);
void func_001AD140(char *);
void func_00471F60(char *, int);
void func_002530C0(char *, char *);
void func_00472080(char *);
void func_00330B50(char *, int, char *, int);
int func_00471E60(char *);
void func_00471C30(char *);
void func_00471CB0(char *);
void func_00376E40(char *);
void func_00376B80(char *, int);
void func_0041D6E0(char *, char *, int, float);
float func_00132470(char *, char *);
void func_00376B40(char *, int);
int func_00376F40(char *);
extern char *D_005BC2E0;
extern int D_01CAF2B4[];
void func_0039D440(char *, int);
int func_003A01F0(char *);
int func_0039FF60(char *);
int func_0039EEC0(char *);
void func_003A0620(char *);
int func_0039E220(char *);
char *func_00210240(char *);
char *func_00279290(char *);
void func_001A1E70(char *, int);
void func_001A2000(char *, int);
char *func_002792A0(char *);
void func_002CECC0(char *, int, int);
void func_0021CBB0(char *, int);
void func_002DAF70(char *, int, int, int, float);
void func_002DB2C0(char *);
void func_0021B790(char *, int);
void func_002DBAA0(char *, short, float);
void func_0024DA80(char *, int, int);
void func_003B6670(char *);
void func_003B66A0(char *);
void func_003B6740(char *);
void func_003B4F60(char *);

void func_003ED8E0(char *p) {
    char *e;
    func_003F2E90(p);
    switch ((unsigned char)func_0024E780(p + 0x1FD0, 0, 4)) {
    case 1:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 7);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 4, *(char **)(*(char **)(p + 0x8C8) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        break;
    case 2:
        func_0024E7B0(p + 0x1FD0, 0, 4);
        func_0028C8E0(p + 0x2180, 7);
        *(int *)(p + 0x2258) = 0x40;
        func_0028C910(p + 0x2180);
        e = func_0028C3A0(p + 0x2180, 9, 4, *(char **)(*(char **)(p + 0x818) + 0x104));
        if (e != 0) {
            e[2] = 1;
        }
        break;
    }
    if (*(int *)(p + 0x35E4) == 0 && func_0024E800(p + 0x1FD0) != 0) {
        func_003E9930(p);
    }
}

void func_00457F80(char *p) {
    char *q;
    func_0028C790(p + 0x150, 0);
    func_0028C200(p + 0x150, p + 0x370, p + 0x380, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 0x150, 7);
    func_0028C910(p + 0x150);
    *(unsigned char *)(p + 0x370) = 1;
    *(unsigned char *)(p + 0x371) = 0;
    *(short *)(p + 0x372) = 0;
    switch (*(unsigned char *)(p + 0x3D4)) {
    case 0:
        *(unsigned char *)(p + 0x380) = 6;
        *(float *)(p + 0x390) = 0.0f;
        *(float *)(p + 0x394) = -600.0f;
        *(float *)(p + 0x398) = 0.0f;
        *(float *)(p + 0x39C) = 1.0f;
        *(float *)(p + 0x3A0) = 600.0f;
        *(float *)(p + 0x3A4) = 30.0f;
        break;
    case 1:
        *(unsigned char *)(p + 0x380) = 4;
        *(float *)(p + 0x390) = 0.0f;
        *(float *)(p + 0x394) = 0.0f;
        *(float *)(p + 0x398) = 0.0f;
        *(float *)(p + 0x39C) = 1.0f;
        *(float *)(p + 0x3A0) = 800.0f;
        *(float *)(p + 0x3A4) = 0.0f;
        *(float *)(p + 0x3A8) = 0.0f;
        *(float *)(p + 0x3AC) = 1.0f;
        *(float *)(p + 0x3B0) = 30.0f;
        break;
    }
    func_0028C3A0(p + 0x150, 0, -1, p + 0x480);
    q = *(char **)(p + 0x1CC);
    if (q != 0) {
        q[2] = 1;
    }
}

void func_0029D480(char *p) {
    int k;
    func_0029DCE0(p, 0x39);
    *(unsigned char *)(p + 0xA993) = 1;
    *(unsigned char *)(p + 0xA992) = 0;
    func_002A0100(p);
    *(int *)(p + 0x9658) = -1;
    *(int *)(p + 0x9654) = -1;
    *(int *)(p + 0x9650) = -1;
    *(int *)(p + 0x964C) = -1;
    *(int *)(p + 0x9648) = -1;
    *(int *)(p + 0x966C) = 0;
    *(int *)(p + 0x9668) = 0;
    *(int *)(p + 0x9664) = 0;
    *(int *)(p + 0x9660) = 0;
    *(int *)(p + 0x965C) = 0;
    *(int *)(p + 0x9644) = 0;
    *(unsigned char *)(p + 0xA990) = 0;
    k = func_002A4A40(p);
    *(float *)(p + 0xAAA4) = ((float *)D_00561F00[k])[*(int *)(p + 0x8928)];
    *(unsigned char *)(p + 5) = 0x14;
}

static inline unsigned char flag4000(char *p) {
    return (*(int *)(p + 0x8FC) & 0x4000) != 0;
}

void func_00426B20(char *p) {
    if (*(unsigned char *)(p + 0x488) == 0x14) {
        if (*(unsigned char *)(p + 5) == 0) {
            func_003FA3F0(p, 3);
        } else if (*(unsigned char *)(p + 5) == 3) {
            *(unsigned char *)(p + 0x488) = 0;
        }
    }
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        func_003F85D0(p);
        break;
    case 2:
        func_00426C50(p);
        break;
    case 3:
        func_004270C0(p);
        break;
    case 10:
        func_003F8E90(p);
        break;
    case 11:
        func_003F9080(p);
        break;
    case 12:
        func_003F94A0(p);
        break;
    case 13:
        func_003F9700(p);
        break;
    }
    *(int *)(p + 0x110) = *(int *)(p + 0x110) & 0xBFFFFFFF;
    *(short *)(p + 0x484) = *(short *)(p + 0x90);
}

void func_002205A0(char *p) {
    if (*(float *)(p + 0x64) < 0.0f && func_0023DF80(p, *(float *)(p + 0x64)) != 0) {
        func_0021BFC0(p);
        return;
    }
    func_00430EA0(p, 0);
    func_002DA650(p);
    func_002DA3A0(p, *(short *)(p + 0x28DC));
    if (*(unsigned char *)(p + 0x2904) != 6) {
        func_002496D0(p);
        *(float *)(p + 0x150) = *(float *)(p + 0x150) * 0.98f;
        return;
    }
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_002496D0(p);
        *(float *)(p + 0x2870) = *(float *)(p + 0x2870) - *(float *)(p + 0x10);
        if (*(float *)(p + 0x2870) <= 0.0f) {
            func_002490F0(p, 0, 0x29, -1, 2, 0x32, -1.0f);
            *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        }
        break;
    case 1:
        func_002496D0(p);
        break;
    }
}

void func_0023D0C0(char *p) {
    char *g;
    float f;
    if (func_0023E1F0(p) != 0) {
        return;
    }
    if (func_0023E500(p) != 0) {
        return;
    }
    if (*(unsigned char *)(p + 0x290A) != 0) {
        return;
    }
    if (*(unsigned char *)(p + 0x284C) == 0) {
        return;
    }
    if (*(unsigned char *)(p + 0x2866) == 1) {
        if (*(unsigned short *)(p + 0x49C0) & ((unsigned short *)D_0066671A)[func_001AE770(D_00666710, 0x20)]) {
            g = *(char **)(p + 0x283C);
            *(float *)(p + 0x2870) += *(float *)(p + 0x10);
            if (!(*(float *)(p + 0x2870) <= *(float *)(g + 0x124))) {
                if ((unsigned char)func_002450D0(p, 1, -func_0011D798(6.283185f * (*(float *)(g + 0xF0) / 360.0f))) == 1) {
                    func_0021C520(p, 2, 1);
                }
            }
        } else {
            *(int *)(p + 0x2870) = 0;
        }
    } else {
        *(int *)(p + 0x2870) = 0;
    }
}

int func_0023E330(char *p) {
    if (((unsigned char)func_00244DF0(p, 0x8000000A) == 1 || (func_0021CBA0(p) & 0x40) || (func_0021CBA0(p) & 0x100)) &&
        (*(int *)(p + 0x2898) & 1) && (unsigned char)func_002DAD40(p) != 2 && (unsigned char)func_0023F760(p) == 1) {
        if (func_0021CBA0(p) & 0x40) {
            func_0021BDB0(p, 0, 0);
            func_0021C7A0(p, 0xC);
            return 1;
        }
        if ((func_0021CBA0(p) & 0x100) && *(unsigned char *)(p + 0x284A) != 0xC && *(unsigned char *)(p + 0x284A) != 0xD &&
            *(unsigned char *)(p + 0x284A) != 0xE) {
            func_0021BEA0(p, 0);
            return 1;
        }
    }
    return 0;
}

void func_00471680(char *p) {
    if ((unsigned char)func_00471DF0(p) == 0) {
        func_001AD140(p);
        return;
    }
    *(short *)(p + 0x90) = *(short *)(*(char **)(p + 0x464) + 0x90);
    if (*(unsigned char *)(p + 0x4B1) == 0) {
        func_00471F60(p, 0);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0057BA50);
        func_00472080(p);
        func_00330B50(D_01DFABA0, 2, p + 0x50, 7);
    } else {
        func_00471F60(p, 1);
        *(unsigned char *)(p + 0x148) = 1;
        func_002530C0(p, D_0057BA90);
        *(unsigned char *)(p + 0x4B0) = 1;
        *(unsigned char *)(p + 5) = 2;
        func_00330B50(D_01DFABA0, 0, p + 0x50, 7);
        if ((unsigned char)func_00471E60(p) == 0) {
            func_001AD140(p);
            return;
        }
    }
    func_00471C30(p);
    func_00471CB0(p);
    *(unsigned char *)(p + 4) = *(unsigned char *)(p + 4) + 1;
}

void func_004AD6D0(char *p) {
    float f;
    char *b;
    func_00376E40(p);
    switch (*(unsigned char *)(p + 6)) {
    case 0:
        func_00376B80(p, -1);
        f = 25.0f;
        if (*(int *)(p + 0x910) == 0) {
            f *= 1.05f;
        }
        *(float *)(p + 0x60) = 0.0f;
        *(float *)(p + 0x64) = 0.0f;
        *(float *)(p + 0x68) = f;
        *(float *)(p + 0x6C) = 1.0f;
        *(unsigned char *)(p + 6) = 1;
    case 1:
        b = p;
        if (b != 0) {
            b += 0x40;
        }
        func_0041D6E0(b, p + 0x60, 1, *(float *)(p + 0x10));
        if (!flag4000(p) && func_00132470(p + 0x50, D_00562A70) < 1000.0f) {
            *(int *)(p + 0x8FC) = *(int *)(p + 0x8FC) | 0x4000;
            func_00376B40(p, 7);
        }
        if ((unsigned char)func_00376F40(p) == 1) {
            func_00376B40(p, 8);
            return;
        }
        break;
    }
}

static inline unsigned char ec_nz(char *p) {
    return *(unsigned char *)(p + 0x2EE4) != 0;
}

static inline unsigned char ec_ready(char *p) {
    if (*(unsigned char *)(p + 0x2F3C) == 2) {
        return 0;
    }
    if (!ec_nz(p)) {
        return 0;
    }
    if (*(float *)(p + 0x2EEC) <= 0.0f) {
        return 1;
    }
    return 0;
}

unsigned char func_0039DF10(char *p) {
    if (ec_ready(p) == 1) {
        if (*(unsigned char *)(p + 0x2F3C) == 0) {
            func_0039D440(p, 0);
        } else if (*(unsigned char *)(p + 0x2F3C) == 1) {
            func_0039D440(p, 1);
        }
    }
    if ((unsigned char)func_003A01F0(p) == 1) {
        return 1;
    }
    if ((unsigned char)func_0039FF60(p) == 1) {
        return 1;
    }
    if ((unsigned char)func_0039EEC0(p) == 1) {
        *(unsigned char *)(p + 0x2DE6) = 0;
        func_003A0620(p);
        *(unsigned char *)(p + 0x2EC3) = 0;
        *(unsigned char *)(p + 0x2EC4) = 0;
        *(unsigned char *)(p + 0x2DE5) = 1;
        return 1;
    }
    return (unsigned char)func_0039E220(p) == 1;
}

void func_00471CB0(char *p) {
    func_0028C790(p + 0x190, 0);
    func_0028C790(p + 0x190, 1);
    if (*(unsigned char *)(p + 0x4B1) == 0) {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 1, D_005BC2E0 + 0x6C0, p, 0);
    } else {
        func_0028C200(p + 0x190, p + 0x3B0, p + 0x3C0, 1, D_005BC2E0 + 0xCC0, p, 0);
    }
    func_0028C8E0(p + 0x190, 0);
    func_0028C910(p + 0x190);
    *(int *)(p + 0x268) = 0x30504;
    *(unsigned char *)(p + 0x3B0) = 4;
    *(unsigned char *)(p + 0x3B1) = 0;
    *(short *)(p + 0x3B2) = 0;
    *(unsigned char *)(p + 0x3B4) = 1;
    *(unsigned char *)(p + 0x3B5) = 0;
    *(short *)(p + 0x3B6) = 0;
    *(unsigned char *)(p + 0x3C0) = 2;
    *(float *)(p + 0x3D0) = 0.0f;
    *(float *)(p + 0x3D4) = 0.0f;
    *(float *)(p + 0x3D8) = 0.0f;
    *(float *)(p + 0x3DC) = 1.0f;
    *(float *)(p + 0x3E0) = 5.0f;
    *(unsigned char *)(p + 0x410) = 2;
    *(float *)(p + 0x420) = 0.0f;
    *(float *)(p + 0x424) = 0.0f;
    *(float *)(p + 0x428) = 0.0f;
    *(float *)(p + 0x42C) = 1.0f;
    *(float *)(p + 0x430) = 20.0f;
    func_0028C3A0(p + 0x190, 0, -1, p + 0x150);
    func_0028C3A0(p + 0x190, 1, -1, p + 0x150);
}

void func_003BA2B0(char *p) {
    char *q;
    func_0028C790(p + 0x2A0, 0);
    func_0028C790(p + 0x2A0, 1);
    func_0028C790(p + 0x2A0, 2);
    func_0028C200(p + 0x2A0, p + 0x4C0, p + 0x4D0, 3, D_00568D20, p, 0);
    func_0028C8E0(p + 0x2A0, 0);
    func_0028C910(p + 0x2A0);
    *(unsigned char *)(p + 0x4C0) = 1;
    *(unsigned char *)(p + 0x4C1) = 0;
    *(short *)(p + 0x4C2) = 0;
    *(unsigned char *)(p + 0x4D0) = 2;
    *(float *)(p + 0x4E0) = 0.0f;
    *(float *)(p + 0x4E4) = 0.0f;
    *(float *)(p + 0x4E8) = 0.0f;
    *(float *)(p + 0x4EC) = 1.0f;
    *(float *)(p + 0x4F0) = 50.0f;
    func_0028C3A0(p + 0x2A0, 0, -1, p + 0x250);
    q = *(char **)(p + 0x31C);
    if (q != 0) {
        q[2] = 1;
    }
    *(unsigned char *)(p + 0x4C4) = 6;
    *(unsigned char *)(p + 0x4C5) = 0;
    *(short *)(p + 0x4C6) = 1;
    *(unsigned char *)(p + 0x520) = 2;
    *(float *)(p + 0x530) = 0.0f;
    *(float *)(p + 0x534) = 0.0f;
    *(float *)(p + 0x538) = 0.0f;
    *(float *)(p + 0x53C) = 1.0f;
    *(float *)(p + 0x540) = 40.0f;
    func_0028C3A0(p + 0x2A0, 1, -1, p + 0x250);
    q = *(char **)(p + 0x320);
    if (q != 0) {
        q[2] = 1;
        *(int *)(q + 0xC) = *(int *)(q + 0xC) | 2;
    }
    *(unsigned char *)(p + 0x1BB) = 0;
}

void func_00235320(char *p) {
    char *g = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(g + 0xC) + *(float *)(g + 0x10) < 100.0f) {
        switch (D_01CAF2B4[0]) {
        case 0:
            func_001A1E70(func_00279290(p + 0x40), 1);
            func_001A2000(func_00279290(p + 0x40), 3);
            func_001A2000(func_00279290(p + 0x40), 5);
            break;
        case 1:
            func_001A2000(func_00279290(p + 0x40), 1);
            func_001A1E70(func_00279290(p + 0x40), 3);
            func_001A2000(func_00279290(p + 0x40), 5);
            break;
        case 2:
            func_001A2000(func_00279290(p + 0x40), 1);
            func_001A2000(func_00279290(p + 0x40), 3);
            func_001A1E70(func_00279290(p + 0x40), 5);
            break;
        }
    }
}

void func_00235480(char *p) {
    char *g = func_00210240(*(char **)(p + 0x200C));
    if (*(float *)(g + 0xC) + *(float *)(g + 0x10) < 100.0f) {
        switch (D_01CAF2B4[0]) {
        case 0:
            func_001A1E70(func_00279290(p + 0x40), 0);
            func_001A2000(func_00279290(p + 0x40), 1);
            func_001A2000(func_00279290(p + 0x40), 2);
            break;
        case 1:
            func_001A2000(func_00279290(p + 0x40), 0);
            func_001A1E70(func_00279290(p + 0x40), 1);
            func_001A2000(func_00279290(p + 0x40), 2);
            break;
        case 2:
            func_001A2000(func_00279290(p + 0x40), 0);
            func_001A2000(func_00279290(p + 0x40), 1);
            func_001A1E70(func_00279290(p + 0x40), 2);
            break;
        }
    }
}

static inline unsigned char both_done(char *p) {
    if ((unsigned char)func_0024E800(p + 0x1D00) == 1 && (unsigned char)func_0024E800(p + 0x1DD0) == 1) {
        return 1;
    }
    return 0;
}

void func_0031AE00(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x23C));
        func_002490F0(p, 7, 3, -1, 2, 3, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_0031AF50(char *p) {
    switch (*(unsigned char *)(p + 0x284C)) {
    case 0:
        func_0021CBB0(p, 1);
        func_002DAF70(p, 0xE39, 0, 0, *(float *)(*(char **)(p + 0x2844) + 0x240));
        func_002490F0(p, 7, 4, -1, 0, 0, -1.0f);
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 1:
        func_002DB2C0(p);
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    case 2:
        *(unsigned char *)(p + 0x284C) = *(unsigned char *)(p + 0x284C) + 1;
        break;
    case 3:
        if ((unsigned char)func_002496D0(p) == 4) {
            func_0021B790(p, 5);
        } else {
            func_002DBAA0(p, *(short *)(p + 0x90), 1.0f);
        }
        break;
    }
}

void func_003B1DC0(char *p) {
    switch (*(unsigned char *)(p + 5)) {
    case 0:
        *(short *)(p + 0x21C0) = *(short *)(p + 0x21C2);
        *(short *)(p + 0x21C2) = 0x20;
        func_0024DA80(p + 0x1D00, 0, 0x20);
        func_0024DA80(p + 0x1DD0, 0, 0x20);
        *(unsigned char *)(p + 5) = *(unsigned char *)(p + 5) + 1;
        *(int *)(p + 0x60) = 0;
        *(int *)(p + 0x64) = 0;
        *(int *)(p + 0x68) = 0;
        *(int *)(p + 0x6C) = 0;
        *(int *)(p + 0x70) = 0;
        *(int *)(p + 0x74) = 0;
        *(int *)(p + 0x78) = 0;
        *(int *)(p + 0x7C) = 0;
        *(int *)(p + 0x21A0) = 0;
        *(int *)(p + 0x21A4) = 0;
        *(int *)(p + 0x21A8) = 0;
        *(int *)(p + 0x21AC) = 0;
        *(unsigned char *)(p + 0x21C4) = 0;
        *(unsigned char *)(p + 0x21C7) = 0;
        *(unsigned char *)(p + 0x21C8) = 0;
        *(unsigned char *)(p + 0x21C5) = 0;
        *(unsigned char *)(p + 0x21C6) = 0;
        func_003B6670(p);
        func_003B66A0(p);
        func_003B6740(p);
    case 1:
        if (both_done(p) == 1 && *(unsigned char *)(p + 0x14D) == 3) {
            func_001AD140(p);
        }
    }
    func_003B4F60(p);
}
