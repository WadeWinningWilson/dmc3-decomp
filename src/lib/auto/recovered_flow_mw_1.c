/* Generated functions recovered from git history (version 4f816f0 of src/lib/auto/flow_mw.c): a later
 * tools/gen_flow.py run dropped them because its 'already defined' test also matched calls in
 * `if (...) {` lines. Verified byte-for-byte with these declarations. */
typedef struct { int w[4]; } __attribute__((aligned(16))) Q;
extern char D_0058D508[];
extern char D_0058D578[];
extern char D_0058D5A8[];
extern char D_0058D5C0[];
extern char D_0058D5F8[];
extern char D_005A6F20[];
extern char D_005A6F30[];
extern char D_005A6F40[];
extern char D_005BB880;
extern int D_005BE080;
extern int D_005BE084;
extern int D_005BE088;
extern int D_005BE08C;
extern char D_005BE090;
extern char * D_005BE0D8;
extern char D_005BE3C8[];
extern char D_005BF140[];
extern char D_005C7AC0[];
extern char D_005C8800[];
extern char D_005D0810[];
extern char D_005D0DA0[];
extern char D_005D0DA4[];
extern char D_005D0DA8[];
extern char D_005D0DAC[];
extern char D_005D0DB0[];
extern char D_005D0DB4[];
extern char D_005D0DC0[];
extern char D_005D0DC4[];
extern char D_005D0DC8[];
extern char D_005D0DCC[];
extern char D_005D0DD0[];
extern char D_005D0DD4[];
extern char D_005D0DE0[];
extern char D_005D0DE4[];
extern char D_005D0DE8[];
extern char D_005D0DF0[];
extern char D_005D0DF4[];
extern char D_005D0DF8[];
extern char D_005D0E00[];
extern char D_005D0E04[];
extern char D_005D0E08[];
extern char D_005D0E10[];
extern char D_005D0E14[];
extern char D_005D0E18[];
extern char D_005D0E20[];
extern char D_005D0E24[];
extern char D_005D0E28[];
extern char D_005D0E30[];
extern char D_005D0E34[];
extern char D_005D0E38[];
extern char D_005D0E40[];
extern char D_005D0E44[];
extern char D_005D0E48[];
extern char D_006480D0[];
extern char D_00662370[];
void func_001003E0();
void func_00100450();
void func_00100580();
void func_001029B8();
int func_00102B48();
void func_00102B58();
int func_00104490();
void func_001044B8();
void func_00105578(float);
int func_00105668(int, int, float);
void func_00105760(int, int, float);
int func_00105930();
void func_00106248();
void func_00108018();
void func_0010C900();
void func_0010D348();
void func_0010F9C0();
int func_00111BE8();
void func_00112488();
void func_00116208();
void func_00116E48();
void func_0011DC10();
int func_00120438();
int func_00122130();
void func_001282D0();
void func_00128488();
int func_00130A50();
void func_00130D90();
int func_001348C0();
int func_00134930();
int func_00134A80();
void func_00134DE0();
void func_00134E40();
void func_001350F0();
void func_001351D0();
void func_00135220();
void func_00135240();
void func_001354F0();
void func_001359A0();
void func_00135F40();
void func_001363F0();
void func_001369C0();
void func_00136A70();
void func_00136B10();
void func_00136B30();
void func_00136B50();
void func_00136BC0();
void func_00136C30();
void func_00136E80();
void func_00137670();
void func_00137770();
void func_00137850();
void func_00137AF0();
void func_00137F60();
void func_00138830();
char *func_0013B800();
int func_0013B920();
int func_0013BE20();
int func_0013C740();
int func_0013CE10();
void func_0013D6A0();
void func_0013D760();
void func_0013D7E0();
int func_0013DAC0();
int func_0013DB40();
int func_0013DD10();
int func_0013DD20();
int func_0013DE00();
void func_0013E000();
void func_00146858();
void func_00150318();
void func_00150348();
int func_00195EA0();
void func_001AAAD0();
int func_001B0EE0();

int func_0013B6B0(p0, p1, p2, p3) int p0; int p1; int p2; int p3; {
    int v0;
    int v1;
    int v2;
    char *v3;
    int tmp0;
    v0 = p1;
    v1 = p3;
    tmp0 = func_0013C740();
    if (tmp0 == 0) {
        v2 = 0;
    } else {
        v3 = func_0013B800(20);
        if (v3 == 0) {
            v2 = 0;
        } else {
            *(int *)(v3 + 0) = 0x30000000;
            *(int *)(v3 + 4) = 0;
            *(int *)(v3 + 12) = v0;
            func_00138830(v1, 0, v3);
            v2 = 1;
        }
    }
    return v2;
}

int func_0013B740(p0, p1) int p0; int p1; {
    int v0;
    int v1;
    char *v2;
    int v3;
    v0 = p0;
    v1 = p1;
    v2 = func_0013B800(20);
    if (v2 == 0) {
        v3 = 0;
    } else {
        *(int *)(v2 + 0) = 0x30000000;
        *(int *)(v2 + 4) = 0;
        *(int *)(v2 + 12) = v0;
        func_00138830(v1, 0, v2);
        v3 = 1;
    }
    return v3;
}
