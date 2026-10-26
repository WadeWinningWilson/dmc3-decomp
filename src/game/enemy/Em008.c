extern char D_005A77A0[];

extern char D_005A78F8[];

extern char D_005A9A40[];

extern char D_005A9A64[];

extern char D_005A9AE4[];

extern char D_005A9B78[];

extern char D_005A9C44[];

extern char D_005AAA98[];

int func_0027D270();

int func_00459930();

void func_001003E0();

void func_00100580();

void func_0013D240();

void func_002791E0();

void func_00401030();

char *func_002A8410(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A9A40;
        *(char **)(p + 64) = D_005A9A64;
        *(char **)(p + 160) = D_005A9AE4;
        *(char **)(p + 208) = D_005A9B78;
        *(char **)(p + 304) = D_005A9C44;
        func_00459930((p + 25280), -1);
        if (p + 25072 != 0) {
            *(char **)(p + 25088) = D_005AAA98;
            if (p + 25072 != 0) {
                *(char **)(p + 25088) = D_005A77A0;
            }
        }
        if (p + 24928 != 0) {
            *(char **)(p + 24944) = D_005AAA98;
            if (p + 24928 != 0) {
                *(char **)(p + 24944) = D_005A77A0;
            }
        }
        if (p + 24784 != 0) {
            *(char **)(p + 24800) = D_005AAA98;
            if (p + 24784 != 0) {
                *(char **)(p + 24800) = D_005A77A0;
            }
        }
        if (p + 24640 != 0) {
            *(char **)(p + 24656) = D_005AAA98;
            if (p + 24640 != 0) {
                *(char **)(p + 24656) = D_005A77A0;
            }
        }
        if (p + 24496 != 0) {
            *(char **)(p + 24512) = D_005AAA98;
            if (p + 24496 != 0) {
                *(char **)(p + 24512) = D_005A77A0;
            }
        }
        if (p + 24352 != 0) {
            *(char **)(p + 24368) = D_005AAA98;
            if (p + 24352 != 0) {
                *(char **)(p + 24368) = D_005A77A0;
            }
        }
        if (p + 24160 != 0) {
            *(char **)(p + 24176) = D_005A78F8;
            if (p + 24160 != 0) {
                *(char **)(p + 24176) = D_005A77A0;
            }
        }
        if (p + 23968 != 0) {
            *(char **)(p + 23984) = D_005A78F8;
            if (p + 23968 != 0) {
                *(char **)(p + 23984) = D_005A77A0;
            }
        }
        if (p + 23776 != 0) {
            *(char **)(p + 23792) = D_005A78F8;
            if (p + 23776 != 0) {
                *(char **)(p + 23792) = D_005A77A0;
            }
        }
        if (p + 23584 != 0) {
            *(char **)(p + 23600) = D_005A78F8;
            if (p + 23584 != 0) {
                *(char **)(p + 23600) = D_005A77A0;
            }
        }
        if (p + 23392 != 0) {
            *(char **)(p + 23408) = D_005A78F8;
            if (p + 23392 != 0) {
                *(char **)(p + 23408) = D_005A77A0;
            }
        }
        if (p + 23200 != 0) {
            *(char **)(p + 23216) = D_005A78F8;
            if (p + 23200 != 0) {
                *(char **)(p + 23216) = D_005A77A0;
            }
        }
        func_00401030((p + 23172), -1);
        func_00401030((p + 23144), -1);
        func_00401030((p + 23116), -1);
        func_00401030((p + 23088), -1);
        func_00401030((p + 23060), -1);
        func_00401030((p + 23032), -1);
        func_00401030((p + 23004), -1);
        func_00401030((p + 22976), -1);
        func_002791E0((p + 21440), -1);
        func_002791E0((p + 19904), -1);
        func_002791E0((p + 18368), -1);
        func_002791E0((p + 16832), -1);
        func_002791E0((p + 15296), -1);
        func_002791E0((p + 13760), -1);
        func_001003E0((p + 11204), (void *)func_0013D240, 16, 132);
        func_0027D270(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

void func_002790E0(char *);

void func_00100450(char *, void *, void *, int, int);

void func_001AAD30();

void func_0022C820(char *);

void func_0022B5A0(char *);

void func_00400FF0(char *);

void func_002E1BC0(char *);

void func_004598E0(char *);

char *func_0027CE70(char *p);

char *func_002A80B0(char *p) {
    int i;
    char *q;
    func_0027CE70(p);
    *(char **)(p + 0x0) = D_005A9A40;
    *(char **)(p + 0x40) = D_005A9A64;
    *(char **)(p + 0xA0) = D_005A9AE4;
    *(char **)(p + 0xD0) = D_005A9B78;
    *(char **)(p + 0x130) = D_005A9C44;
    func_00100450(p + 0x2BC4, func_001AAD30, func_0013D240, 0x10, 0x84);
    func_002790E0(p + 0x35C0);
    func_002790E0(p + 0x3BC0);
    func_002790E0(p + 0x41C0);
    func_002790E0(p + 0x47C0);
    func_002790E0(p + 0x4DC0);
    func_002790E0(p + 0x53C0);
    func_00400FF0(p + 0x59C0);
    func_00400FF0(p + 0x59DC);
    func_00400FF0(p + 0x59F8);
    func_00400FF0(p + 0x5A14);
    func_00400FF0(p + 0x5A30);
    func_00400FF0(p + 0x5A4C);
    func_00400FF0(p + 0x5A68);
    func_00400FF0(p + 0x5A84);
    q = p + 0x5AA0;
    *(char **)(p + 0x5AB0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5B60;
    *(char **)(p + 0x5B70) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5C20;
    *(char **)(p + 0x5C30) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5CE0;
    *(char **)(p + 0x5CF0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5DA0;
    *(char **)(p + 0x5DB0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5E60;
    *(char **)(p + 0x5E70) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005A78F8;
    func_0022B5A0(q);
    q = p + 0x5F20;
    *(char **)(p + 0x5F30) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x5FB0;
    *(char **)(p + 0x5FC0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x6040;
    *(char **)(p + 0x6050) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x60D0;
    *(char **)(p + 0x60E0) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x6160;
    *(char **)(p + 0x6170) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    q = p + 0x61F0;
    *(char **)(p + 0x6200) = D_005A77A0;
    func_0022C820(q);
    *(char **)(q + 0x10) = D_005AAA98;
    func_002E1BC0(q);
    func_004598E0(p + 0x62C0);
    *(int *)(p + 0xC8) = 0;
    *(int *)(p + 0x2630) = 0;
    *(int *)(p + 0x2634) = 0;
    *(int *)(p + 0x2690) = 0;
    *(int *)(p + 0x2694) = 0;
    *(int *)(p + 0x2698) = 0;
    *(int *)(p + 0x269C) = 0;
    *(int *)(p + 0x26A0) = 0;
    *(int *)(p + 0x26A4) = 0;
    *(int *)(p + 0x2B30) = 0;
    *(int *)(p + 0x2B34) = 0;
    *(int *)(p + 0x2B38) = 0;
    *(int *)(p + 0x2B3C) = 0;
    *(int *)(p + 0x2B44) = 0;
    *(int *)(p + 0x2B48) = 0;
    *(int *)(p + 0x63E0) = 0;
    return p;
}

void func_00206730();

void func_00228350();

void func_00286040();

void func_00286090();

void func_002860E0();

void func_002ACB50(int p0) {
    func_00228350((p0 + 200));
    func_002860E0((p0 + 9776));
    func_00286090((p0 + 9780));
    func_00206730((p0 + 9872));
    func_00206730((p0 + 9876));
    func_00206730((p0 + 9880));
    func_00206730((p0 + 9884));
    func_00206730((p0 + 9888));
    func_00206730((p0 + 9892));
    func_00206730((p0 + 11060));
    func_00206730((p0 + 11064));
    func_00206730((p0 + 11068));
    func_00286040((p0 + 11076));
    func_00286040((p0 + 11080));
}

extern char D_01CAFF0C[];

int func_001AD140();

int func_002F2D30();

int func_002AD730(p0) int p0; {
    char *v0;
    int v1;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    v0 = (char *)p0;
    v1 = *(int *)(*(char **)D_01CAFF0C + 32);
    v2 = (int)v0;
    if (v1 != 0) {
        v10 = func_002F2D30(v1, v2);
    }
    v8 = *(int *)(v0 + 200);
    if (v8 != 0) {
        v10 = func_001AD140(v8);
        *(int *)(v0 + 200) = 0;
    }
    v16 = *(int *)(v0 + 9776);
    if (v16 != 0) {
        v10 = func_001AD140(v16);
        *(int *)(v0 + 9776) = 0;
    }
    v17 = *(int *)(v0 + 9780);
    if (v17 != 0) {
        v10 = func_001AD140(v17);
        *(int *)(v0 + 9780) = 0;
    }
    v18 = *(int *)(v0 + 9872);
    if (v18 != 0) {
        v10 = func_001AD140(v18);
        *(int *)(v0 + 9872) = 0;
    }
    v3 = *(int *)(v0 + 9876);
    if (v3 != 0) {
        v10 = func_001AD140(v3);
        *(int *)(v0 + 9876) = 0;
    }
    v4 = *(int *)(v0 + 9880);
    if (v4 != 0) {
        v10 = func_001AD140(v4);
        *(int *)(v0 + 9880) = 0;
    }
    v5 = *(int *)(v0 + 9884);
    if (v5 != 0) {
        v10 = func_001AD140(v5);
        *(int *)(v0 + 9884) = 0;
    }
    v6 = *(int *)(v0 + 9888);
    if (v6 != 0) {
        v10 = func_001AD140(v6);
        *(int *)(v0 + 9888) = 0;
    }
    v7 = *(int *)(v0 + 9892);
    if (v7 != 0) {
        v10 = func_001AD140(v7);
        *(int *)(v0 + 9892) = 0;
    }
    v9 = *(int *)(v0 + 11060);
    if (v9 != 0) {
        v10 = func_001AD140(v9);
        *(int *)(v0 + 11060) = 0;
    }
    v11 = *(int *)(v0 + 11064);
    if (v11 != 0) {
        v10 = func_001AD140(v11);
        *(int *)(v0 + 11064) = 0;
    }
    v12 = *(int *)(v0 + 11068);
    if (v12 != 0) {
        v10 = func_001AD140(v12);
        *(int *)(v0 + 11068) = 0;
    }
    v13 = *(int *)(v0 + 11076);
    if (v13 != 0) {
        v10 = func_001AD140(v13);
        *(int *)(v0 + 11076) = 0;
    }
    v14 = *(int *)(v0 + 11080);
    if (v14 != 0) {
        v10 = func_001AD140(v14);
        *(int *)(v0 + 11080) = 0;
    }
    v15 = *(int *)(v0 + 25568);
    if (v15 != 0) {
        v10 = func_001AD140(v15);
    }
    return v10;
}

extern void func_002A8FA0();

void func_002ADCC0(char *p) { func_002A8FA0(p + -64); }

extern void func_002AA8E0();

void func_002ADCF0(char *p) { func_002AA8E0(p + -208); }

extern void func_002AA800();

void func_002ADD00(char *p) { func_002AA800(p + -208); }

extern void func_002ACA20();

void func_002ADD10(char *p) { func_002ACA20(p + -208); }

extern void func_002AC2C0();

void func_002ADD20(char *p) { func_002AC2C0(p + -208); }
