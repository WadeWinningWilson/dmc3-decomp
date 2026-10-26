extern char D_005C8800[];

void func_001350F0();

void func_00138120(p0) int p0; {
    func_001350F0(D_005C8800, p0);
}

int func_001351D0();

void func_00138130(p0) int p0; {
    func_001351D0(D_005C8800, p0);
}

void func_00135220();

void func_00138140(p0) int p0; {
    func_00135220(D_005C8800, p0);
}

void func_00135240();

void func_00138150(p0) int p0; {
    func_00135240(D_005C8800, p0);
}

void func_001354F0();

void func_00138160(p0) int p0; {
    func_001354F0(D_005C8800, p0);
}

void func_001359A0();

void func_00138170(p0) int p0; {
    func_001359A0(D_005C8800, p0);
}

void func_00135F40();

void func_00138180(p0) int p0; {
    func_00135F40(D_005C8800, p0);
}

void func_001363F0();

void func_00138190(p0) int p0; {
    func_001363F0(D_005C8800, p0);
}

void func_001369C0();

void func_001381A0(p0) int p0; {
    func_001369C0(D_005C8800, p0);
}

void func_00136A70();

void func_001381B0(p0) int p0; {
    func_00136A70(D_005C8800, p0);
}

void func_00136B10();

void func_001381C0(p0) int p0; {
    func_00136B10(D_005C8800, p0);
}

void func_00136B30();

void func_001381D0(p0) int p0; {
    func_00136B30(D_005C8800, p0);
}

void func_00136B50();

void func_001381E0(p0) int p0; {
    func_00136B50(D_005C8800, p0);
}

void func_00136BC0();

void func_001381F0(p0) int p0; {
    func_00136BC0(D_005C8800, p0);
}

void func_00136C30();

void func_001382C0(p0) int p0; {
    func_00136C30(D_005C8800, p0);
}

void func_00136E80();

void func_001382D0(p0) int p0; {
    func_00136E80(D_005C8800, p0);
}

void func_00137670();

void func_001382E0(p0) int p0; {
    func_00137670(D_005C8800, p0);
}

void func_00137770();

void func_001382F0(p0) int p0; {
    func_00137770(D_005C8800, p0);
}

void func_00137850();

void func_00138300(p0) int p0; {
    func_00137850(D_005C8800, p0);
}

void func_00137AF0();

void func_00138310(p0) int p0; {
    func_00137AF0(D_005C8800, p0);
}

void func_00137F60();

void func_00138320(p0) int p0; {
    func_00137F60(D_005C8800, p0);
}

extern char D_005D0810[];

void func_00138330() {
    *(short *)D_005D0810 = 64;
}

void func_00138340(p0) int p0; {
    int v0;
    int v1;
    *(short *)D_005D0810 = p0;
    v0 = *(short *)D_005D0810;
    if (v0 < 0) {
        *(short *)D_005D0810 = 0;
    } else {
        if (v0 > 128) {
            *(short *)D_005D0810 = 128;
        }
    }
}

void func_001383E0(p0, p1) char *p0; int p1; {
    if (p1 < 0) {
        p1 = 0;
    } else {
        if (p1 > 255) {
            p1 = 255;
        }
    }
    *(int *)(p0 + 0) = p1;
}
