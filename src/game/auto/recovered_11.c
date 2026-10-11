/* Generated functions recovered from git history (version f935f1a of src/game/auto/flow.c): a later
 * tools/gen_flow.py run dropped them because its 'already defined' test also matched calls in
 * `if (...) {` lines. Verified byte-for-byte with these declarations. */
extern char D_0054E4B0[];
extern char D_00562740[];
extern char D_005BC628;
extern char D_005BCC70;
extern char D_005BD070;
extern int D_005BE0B8;
extern char * D_005BE0D8;
extern char D_005D0E70[];
extern char D_006011CC[];
extern char D_01CAFF0C[];
extern char D_01CAFF3C[];
extern char D_01DF5D28[];
extern char D_01DFA340[];
int func_00105300();
int func_0012B6E8();
int func_0013B920();
int func_0013BF20();
int func_0013D5D0();
int func_0013DA10();
int func_0013E040();
int func_001992F0();
int func_00199490();
int func_00199620();
int func_0019A090();
int func_001A1F80();
int func_001A2100();
int func_001A2540();
int func_001A2E80();
int func_001A3030();
int func_001A31F0();
int func_001A3360();
int func_001A4050();
int func_001A4140();
int func_001AA1F0();
int func_001AA220();
int func_001AD140();
void func_001AD4B0();
void func_001AD960();
int func_001ADDC0();
int func_001EC940();
int func_001ECAA0();
int func_001ECAE0();
void func_001F80D0();
int func_001F8120();
int func_001F81A0();
int func_001F9EC0();
int func_001FE270();
char *func_00206BC0();
int func_0020F3E0();
int func_0021B790();
void func_0021BDB0();
void func_0021C380();
int func_0021C7A0();
int func_0021CBA0();
int func_002242C0();
int func_00228740();
int func_0022F930();
int func_0022FA40();
int func_00230070();
int func_00230180();
int func_00231CC0();
int func_0023F760();
int func_002496D0();
void func_0024DA80();
void func_0024DD30();
int func_0024E520();
int func_0024E780();
int func_0024E7F0();
int func_0024E800();
char *func_00279290();
void func_0028C630();
int func_0028C6D0();
int func_0028C790();
int func_0028C910();
int func_0029DCE0();
int func_0029E3D0();
int func_002CA520();
int func_002CB900();
int func_002CD800();
int func_002DAA60();
int func_002E2BD0();
char *func_002EA230();
int func_002F0A50();
void func_002F1830();
int func_002F7C10();
void func_002F95C0();
int func_0034C2D0();
int func_0039DF10();
int func_0039E050();
int func_003A02B0();
int func_003A1320();
int func_003A1890();
float func_003B5650();
int func_003B5700();
int func_003B5780();
int func_003B5A00();
int func_003B5A50();
int func_003B9BD0();
int func_003BA680();
int func_00401DE0();
void func_004028A0();
int func_00403020();
int func_00404710();
void func_0040F110();
int func_0040F320();
int func_0043FA30();
int func_00450550();
void func_004557B0();
int func_00456280();
int func_00470CE0();
int func_004823B0();
int func_00482410();
int func_00494810();
int func_004F3630();
char *func_00501230();
int func_00501280();

int func_00206C20(int p0, int p1, int p2, int p3) {
    int v0;
    char *v1;
    int v2;
    int tmp1;
    v0 = p1;
    v1 = func_00206BC0(p0, p2);
    if (v1 == 0) {
        v2 = 0;
    } else {
        tmp1 = func_0013B920(*(int *)(v1 + 4), v0);
        v2 = ((unsigned int)0 < (unsigned int)tmp1);
    }
    return v2;
}

int func_0028C5C0(char *p0, int p1, int p2, int p3) {
    int v0;
    int tmp0;
    v0 = (int)p0;
    *(int *)(p0 + 232) = 0;
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((v0 + 416)) : "memory");
    __asm__ volatile("sqc2 $vf0, 0x30(%0)\n\tsqc2 $vf1, 0x20(%0)\n\tsqc2 $vf2, 0x10(%0)\n\tsqc2 $vf3, 0x0(%0)" : : "r"((v0 + 480)) : "memory");
    if ((p1 & 1) == 0) {
        func_0028C630();
    }
    tmp0 = func_0028C6D0(v0);
    return tmp0;
}

int func_005010C0(int p0, int p1, int p2, int p3) {
    int v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    v0 = p0;
    v1 = p1;
    tmp0 = func_00501280();
    if (tmp0 != 0) {
        v2 = 0;
    } else {
        v3 = func_00501230(v0);
        if (v3 == 0) {
            v2 = 0;
        } else {
            *(char *)(v3 + 0) = 1;
            *(char *)(v3 + 2) = v1;
            *(char *)(v3 + 1) = 0;
            *(char *)(v3 + 3) = -1;
            *(char *)(v3 + 4) = -1;
            v2 = 1;
        }
    }
    return v2;
}
