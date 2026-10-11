/* Generated functions recovered from git history (version d634b90 of src/game/auto/flow.c): a later
 * tools/gen_flow.py run dropped them because its 'already defined' test also matched calls in
 * `if (...) {` lines. Verified byte-for-byte with these declarations. */
extern char D_0054E4B0[];
extern char D_005587A0[];
extern char D_00562740[];
extern char D_00565050[];
extern char D_00569940[];
extern char D_005BC628;
extern char D_005BCC70;
extern char D_005BD070;
extern int D_005BE0B8;
extern char * D_005BE0D8;
extern char D_005D0E70[];
extern char D_006011CC[];
extern char D_006543E0[];
extern char D_01CAFF0C[];
extern char D_01CAFF3C[];
extern char D_01DF5D28[];
extern char D_01DF9F00[];
extern char D_01DFA340[];
int func_00104C00();
int func_00105300();
int func_001156A8();
void func_00128488();
int func_0012B6E8();
void func_00130990();
float func_001324E0();
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
int func_001A31F0();
int func_001A3360();
int func_001A4140();
int func_001AA220();
int func_001AD140();
void func_001AD4B0();
void func_001AD960();
int func_001ADDC0();
int func_001B0FD0();
int func_001EC940();
int func_001ECAA0();
int func_001ECAE0();
void func_001F80D0();
int func_001F8120();
int func_001F81A0();
int func_001F9EC0();
int func_001FE270();
char *func_00206BC0();
int func_00207280();
void func_00207290();
int func_0020F3E0();
int func_0021B790();
void func_0021BDB0();
void func_0021C380();
int func_0021C7A0();
int func_0021CBA0();
int func_002242C0();
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
int func_0028C790();
int func_0028C910();
int func_0029DCE0();
int func_0029E3D0();
int func_002C3BF0();
int func_002CA520();
int func_002CB900();
int func_002CD800();
int func_002DAA60();
int func_002E2BD0();
char *func_002EA230();
int func_002F0A50();
void func_002F1830();
void func_003038E0();
void func_003038F0();
int func_00303DD0();
void func_00304020();
int func_0034C2D0();
int func_0039DF10();
int func_0039E050();
int func_003A02B0();
int func_003A1320();
int func_003A1890();
int func_003B9BD0();
int func_003BA680();
int func_00401DE0();
void func_004028A0();
int func_00403020();
int func_00404710();
int func_00410080();
int func_0043FA30();
int func_00450550();
void func_004557B0();
int func_00456280();
int func_00470CE0();
int func_004823B0();
int func_00482410();
int func_004F3630();
char *func_00501280();

int func_00220560(int p0, int p1, int p2, int p3) {
    int v0;
    int v1;
    int tmp0;
    v0 = func_002496D0();
    tmp0 = (v0 & 255);
    v1 = p0;
    if (tmp0 == 4) {
        v0 = func_0021B790(v1, 5);
    }
    return v0;
}

int func_0023F860(int p0, int p1, int p2, int p3) {
    char *v0;
    int v1;
    int tmp0;
    int tmp2;
    v0 = (char *)p0;
    tmp0 = func_002F0A50((v0 + 11096), (v0 + 15424));
    v1 = tmp0;
    if (v1 == 0) {
        *(short *)(v0 + 15266) = *(short *)(v0 + 144);
        *(char *)(v0 + 15261) = 0;
    } else {
        tmp2 = func_002DAA60(v0, (v0 + 15424));
        *(short *)(v0 + 15266) = tmp2;
        *(char *)(v0 + 15261) = 1;
        func_002F1830((v0 + 11096), v1);
    }
    return *(unsigned char *)(v0 + 15261);
}
