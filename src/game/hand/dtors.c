/* Hand-matched destructors (vtable resets, member teardown, optional free). */

extern char D_005A6F50[];
extern char D_005A7780[];
extern char D_005A7790[];
extern char D_005A77A0[];
extern char D_005A78F8[];
extern char D_005A8DD0[];
extern char D_005A8DF4[];
extern char D_005A8E74[];
extern char D_005A8F20[];
extern char D_005A8F44[];
extern char D_005A8FC4[];
extern char D_005A9070[];
extern char D_005A9094[];
extern char D_005A9114[];
extern char D_005A91C0[];
extern char D_005A91E4[];
extern char D_005A9264[];
extern char D_005A9310[];
extern char D_005A9334[];
extern char D_005A93B4[];
extern char D_005A9800[];
extern char D_005A9824[];
extern char D_005A98A4[];
extern char D_005A9A40[];
extern char D_005A9A64[];
extern char D_005A9AE4[];
extern char D_005A9B78[];
extern char D_005A9C44[];
extern char D_005AA350[];
extern char D_005AA374[];
extern char D_005AA3F4[];
extern char D_005AA488[];
extern char D_005AA554[];
extern char D_005AA60C[];
extern char D_005AA6B8[];
extern char D_005AAA98[];
extern char D_005AB8F0[];
extern char D_005AB914[];
extern char D_005AB994[];
extern char D_005AD390[];
extern char D_005AE660[];
extern char D_005AE684[];
extern char D_005AE704[];
extern char D_005AE798[];
extern char D_005AE864[];
extern char D_005AE91C[];
extern char D_005AE9E0[];
extern char D_005AEA04[];
extern char D_005AEA84[];
extern char D_005AF030[];
extern char D_005AF054[];
extern char D_005AF0D4[];
extern char D_005AF168[];
extern char D_005AF234[];
extern char D_005AF2EC[];
extern char D_005AF390[];
extern char D_005AF3B4[];
extern char D_005AF434[];
extern char D_005AF4C8[];
extern char D_005AF594[];
extern char D_005AF64C[];
extern char D_005AFA60[];
extern char D_005B03D0[];
extern char D_005B03F4[];
extern char D_005B0474[];
extern char D_005B0508[];
extern char D_005B05D4[];
extern char D_005B068C[];
extern char D_005B0890[];
extern char D_005B09F0[];
extern char D_005B0A14[];
extern char D_005B0A94[];
extern char D_005B14D0[];
extern char D_005B14F4[];
extern char D_005B1574[];
extern char D_005B1608[];
extern char D_005B16D4[];
extern char D_005B178C[];
extern char D_005B23D0[];
extern char D_005B23F4[];
extern char D_005B2474[];
extern char D_005B4750[];
extern char D_005B61E0[];
extern char D_005B6204[];
extern char D_005B6284[];
extern char D_005B6318[];
extern char D_005B67E0[];
int func_0027D270();
int func_00459930();
void func_001003E0();
void func_00100580();
void func_0013D240();
void func_00202F80();
void func_00202FE0();
void func_0024D9A0();
void func_0024F810();
void func_0024FEA0();
void func_00253000();
void func_002791E0();
void func_0027A660();
void func_0027BBF0();
void func_0028C1A0();
void func_002E78A0();
void func_002E7C40();
void func_002E83B0();
void func_002E8A50();
void func_00313E60();
void func_0031DD00();
void func_0031E440();
void func_0031E4E0();
void func_00320590();
void func_003829B0();
void func_003C86C0();
void func_00401030();

char *func_0028D830(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A8F20;
        *(char **)(p + 64) = D_005A8F44;
        *(char **)(p + 160) = D_005A8FC4;
        func_0031DD00((p + 1920), -1);
        func_002791E0((p + 384), -1);
        func_001003E0((p + 268), (void *)func_0013D240, 16, 2);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_0028E300(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A9070;
        *(char **)(p + 64) = D_005A9094;
        *(char **)(p + 160) = D_005A9114;
        func_001003E0((p + 3328), (void *)func_0031DD00, 144, 2);
        func_001003E0((p + 256), (void *)func_002791E0, 1536, 2);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_0028F830(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A91C0;
        *(char **)(p + 64) = D_005A91E4;
        *(char **)(p + 160) = D_005A9264;
        func_002791E0((p + 512), -1);
        func_0031DD00((p + 320), -1);
        func_001003E0((p + 272), (void *)func_0013D240, 16, 3);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_002903A0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A9310;
        *(char **)(p + 64) = D_005A9334;
        *(char **)(p + 160) = D_005A93B4;
        func_0031DD00((p + 1920), -1);
        func_002791E0((p + 384), -1);
        func_001003E0((p + 268), (void *)func_0013D240, 16, 2);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_002A66F0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005A9800;
        *(char **)(p + 64) = D_005A9824;
        *(char **)(p + 160) = D_005A98A4;
        func_0031DD00((p + 1856), -1);
        func_002791E0((p + 320), -1);
        func_001003E0((p + 272), (void *)func_0013D240, 16, 3);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00303740(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AB8F0;
        *(char **)(p + 64) = D_005AB914;
        *(char **)(p + 160) = D_005AB994;
        func_0031DD00((p + 1920), -1);
        func_002791E0((p + 384), -1);
        func_001003E0((p + 284), (void *)func_0013D240, 16, 6);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_003849C0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AE9E0;
        *(char **)(p + 64) = D_005AEA04;
        *(char **)(p + 160) = D_005AEA84;
        func_00401030((p + 2048), -1);
        func_002791E0((p + 512), -1);
        func_001003E0((p + 304), (void *)func_0013D240, 16, 11);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_003CB7E0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B09F0;
        *(char **)(p + 64) = D_005B0A14;
        *(char **)(p + 160) = D_005B0A94;
        func_0031DD00((p + 2176), -1);
        func_002791E0((p + 640), -1);
        func_001003E0((p + 428), (void *)func_0013D240, 16, 10);
        if (p != 0) {
            *(char **)p = D_005A8DD0;
            *(char **)(p + 64) = D_005A8DF4;
            *(char **)(p + 160) = D_005A8E74;
            func_0024F810(p, 0);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00400E60(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B23D0;
        *(char **)(p + 64) = D_005B23F4;
        *(char **)(p + 160) = D_005B2474;
        if ((p + 4704) != 0) {
            func_0013D240((p + 4756), -1);
        }
        func_0028C1A0((p + 3904), -1);
        func_0027A660((p + 2816), -1);
        func_0027A660((p + 1728), -1);
        func_0027A660((p + 640), -1);
        func_001003E0((p + 340), (void *)func_0013D240, 16, 9);
        func_00253000(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00478260(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B67E0;
        func_002791E0((p + 0x9080), -1);
        func_002791E0((p + 0x8a80), -1);
        func_001003E0((p + 4736), (void *)func_002791E0, 1536, 20);
        func_002791E0((p + 3200), -1);
        func_002791E0((p + 1664), -1);
        func_001003E0((p + 128), (void *)func_002791E0, 1536, 1);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240((p + 36), -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_0034E550(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AD390;
        *(int *)(p + 56) = 0;
        *(int *)(p + 30036) = 0;
        func_002791E0((p + 32000), -1);
        func_001003E0((p + 31616), (void *)func_0027BBF0, 128, 1);
        func_001003E0((p + 30080), (void *)func_002791E0, 1536, 1);
        func_001003E0((p + 27712), (void *)func_0027BBF0, 128, 18);
        func_001003E0((p + 64), (void *)func_002791E0, 1536, 18);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240((p + 36), -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00472CC0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B61E0;
        *(char **)(p + 64) = D_005B6204;
        *(char **)(p + 160) = D_005B6284;
        *(char **)(p + 208) = D_005B6318;
        func_0028C1A0((p + 2272), -1);
        func_00401030((p + 2240), -1);
        if (p + 2048 != 0) {
            *(char **)(p + 2064) = D_005A78F8;
            if (p + 2048 != 0) {
                *(char **)(p + 2064) = D_005A77A0;
            }
        }
        func_002791E0((p + 512), -1);
        func_001003E0((p + 308), (void *)func_0013D240, 16, 5);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_003DDC80(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B14D0;
        *(char **)(p + 64) = D_005B14F4;
        *(char **)(p + 160) = D_005B1574;
        *(char **)(p + 208) = D_005B1608;
        *(char **)(p + 304) = D_005B16D4;
        *(char **)(p + 464) = D_005B178C;
        func_0028C1A0((p + 3024), -1);
        func_00313E60((p + 2996), -1);
        func_002E8A50((p + 2972), -1);
        func_002E7C40((p + 2896), -1);
        if (p + 2528 != 0) {
            *(char **)(p + 2544) = D_005A78F8;
            if (p + 2528 != 0) {
                *(char **)(p + 2544) = D_005A77A0;
            }
        }
        func_00401030((p + 2368), -1);
        func_002791E0((p + 832), -1);
        func_001003E0((p + 532), (void *)func_0013D240, 16, 8);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00440EC0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B4750;
        func_001003E0((p + 0xa2a0), (void *)func_0027BBF0, 128, 12);
        func_001003E0((p + 0x9fa0), (void *)func_0027BBF0, 128, 6);
        func_001003E0((p + 0x9e20), (void *)func_0027BBF0, 128, 3);
        func_002791E0((p + 0x9700), -1);
        func_001003E0((p + 20224), (void *)func_002791E0, 1536, 12);
        func_001003E0((p + 11008), (void *)func_002791E0, 1536, 6);
        func_001003E0((p + 6400), (void *)func_002791E0, 1536, 3);
        func_002791E0((p + 4864), -1);
        func_001003E0((p + 256), (void *)func_002791E0, 1536, 3);
        func_001003E0((p + 60), (void *)func_0013D240, 16, 8);
        if (p != 0) {
            *(char **)p = D_005A6F50;
            func_0013D240((p + 36), -1);
        }
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_0038FCE0(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AF030;
        *(char **)(p + 64) = D_005AF054;
        *(char **)(p + 160) = D_005AF0D4;
        *(char **)(p + 208) = D_005AF168;
        *(char **)(p + 304) = D_005AF234;
        *(char **)(p + 464) = D_005AF2EC;
        func_001003E0((p + 4080), (void *)func_00202FE0, 96, 5);
        func_00313E60((p + 4044), -1);
        func_002E8A50((p + 4020), -1);
        func_002E78A0((p + 3952), -1);
        func_0028C1A0((p + 3312), -1);
        func_0024D9A0((p + 3104), -1);
        func_00401030((p + 3072), -1);
        func_002791E0((p + 1536), -1);
        if (p + 1328 != 0) {
            *(char **)(p + 1344) = D_005A78F8;
            if (p + 1328 != 0) {
                *(char **)(p + 1344) = D_005A77A0;
            }
        }
        func_001003E0((p + 532), (void *)func_0013D240, 16, 21);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_003C8E10(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005B03D0;
        *(char **)(p + 64) = D_005B03F4;
        *(char **)(p + 160) = D_005B0474;
        *(char **)(p + 208) = D_005B0508;
        *(char **)(p + 304) = D_005B05D4;
        *(char **)(p + 464) = D_005B068C;
        func_00313E60((p + 7316), -1);
        func_002E8A50((p + 7292), -1);
        func_003C86C0((p + 7216), -1);
        func_001003E0((p + 5936), (void *)func_0028C1A0, 544, 2);
        func_001003E0((p + 5168), (void *)func_0024D9A0, 208, 2);
        if (p + 4960 != 0) {
            *(char **)(p + 4976) = D_005AFA60;
            if (p + 4960 != 0) {
                *(char **)(p + 4976) = D_005A77A0;
            }
        }
        func_001003E0((p + 4736), (void *)func_00401030, 28, 2);
        func_002791E0((p + 3200), -1);
        func_002791E0((p + 1664), -1);
        func_001003E0((p + 532), (void *)func_0013D240, 16, 52);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_00377990(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AE660;
        *(char **)(p + 64) = D_005AE684;
        *(char **)(p + 160) = D_005AE704;
        *(char **)(p + 208) = D_005AE798;
        *(char **)(p + 304) = D_005AE864;
        *(char **)(p + 464) = D_005AE91C;
        if ((p + 30336) != 0) {
                if (p + 30560 != 0) {
                *(char **)(p + 30560) = D_005A7780;
                if (p + 30560 != 0) {
                    *(char **)(p + 30560) = D_005A7790;
                }
            }
        }
        func_00313E60((p + 30192), -1);
        func_0028C1A0((p + 29648), -1);
        func_002E8A50((p + 29260), -1);
        func_003829B0((p + 29184), -1);
        func_0028C1A0((p + 28384), -1);
        func_0024D9A0((p + 28016), -1);
        if (p + 27920 != 0) {
            *(char **)(p + 27936) = D_005B0890;
            if (p + 27920 != 0) {
                *(char **)(p + 27936) = D_005A77A0;
            }
        }
        func_001003E0((p + 3776), (void *)func_0027A660, 1088, 20);
        func_002791E0((p + 2240), -1);
        func_001003E0((p + 472), (void *)func_0013D240, 16, 78);
        func_0031E440((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_002C4590(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AA350;
        *(char **)(p + 64) = D_005AA374;
        *(char **)(p + 160) = D_005AA3F4;
        *(char **)(p + 208) = D_005AA488;
        *(char **)(p + 304) = D_005AA554;
        *(char **)(p + 464) = D_005AA60C;
        if ((p + 12160) != 0) {
            *(char **)(p + 12160) = D_005AA6B8;
        }
        if (p + 11968 != 0) {
            *(char **)(p + 11984) = D_005B0890;
            if (p + 11968 != 0) {
                *(char **)(p + 11984) = D_005A77A0;
            }
        }
        if (p + 11872 != 0) {
            *(char **)(p + 11888) = D_005B0890;
            if (p + 11872 != 0) {
                *(char **)(p + 11888) = D_005A77A0;
            }
        }
        func_00313E60((p + 11836), -1);
        func_002E8A50((p + 11812), -1);
        func_002E78A0((p + 11744), -1);
        func_001003E0((p + 11056), (void *)func_00202F80, 144, 3);
        func_0028C1A0((p + 10336), -1);
        func_001003E0((p + 9296), (void *)func_0024D9A0, 208, 5);
        func_001003E0((p + 1600), (void *)func_002791E0, 1536, 3);
        func_001003E0((p + 532), (void *)func_0013D240, 16, 46);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

char *func_003A2610(char *p, short flag) {
    if (p != 0) {
        *(char **)p = D_005AF390;
        *(char **)(p + 64) = D_005AF3B4;
        *(char **)(p + 160) = D_005AF434;
        *(char **)(p + 208) = D_005AF4C8;
        *(char **)(p + 304) = D_005AF594;
        *(char **)(p + 464) = D_005AF64C;
        func_0028C1A0((p + 11120), -1);
        func_001003E0((p + 10704), (void *)func_0024D9A0, 208, 2);
        if (p + 10512 != 0) {
            *(char **)(p + 10528) = D_005A78F8;
            if (p + 10512 != 0) {
                *(char **)(p + 10528) = D_005A77A0;
            }
        }
        if (p + 10320 != 0) {
            *(char **)(p + 10336) = D_005A78F8;
            if (p + 10320 != 0) {
                *(char **)(p + 10336) = D_005A77A0;
            }
        }
        func_0031DD00((p + 10176), -1);
        func_0031DD00((p + 10032), -1);
        func_0031DD00((p + 9888), -1);
        func_0031DD00((p + 9744), -1);
        func_0031DD00((p + 9600), -1);
        func_002791E0((p + 8064), -1);
        func_002791E0((p + 6528), -1);
        func_002791E0((p + 4992), -1);
        func_002791E0((p + 3456), -1);
        if (p + 3152 != 0) {
            *(char **)(p + 3168) = D_005B0890;
            if (p + 3152 != 0) {
                *(char **)(p + 3168) = D_005A77A0;
            }
        }
        func_00313E60((p + 3120), -1);
        func_002E8A50((p + 3096), -1);
        func_002E83B0((p + 3028), -1);
        func_002791E0((p + 1216), -1);
        func_001003E0((p + 532), (void *)func_0013D240, 16, 35);
        func_0031E4E0((p + 464), 0);
        func_00320590((p + 304), 0);
        func_0024FEA0(p, 0);
        if (flag > 0) {
            func_00100580(p);
        }
    }
    return p;
}

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
