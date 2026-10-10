/*
 * DMC3 PS2 ten-function proof of concept (JP retail SLPM_658.80 addresses;
 * USA mapping in DMC3_POC_REPORT.md). Compiler: mwcps2-3.0b52-030722,
 * -O3,p -sdatathreshold 0.
 * Struct layouts are offset-only placeholders: unkXXX = field at offset XXX.
 * Names are descriptive guesses, NOT recovered identities; see
 * DMC3_POC_REPORT.md for evidence and status of each function.
 */
#ifdef __cplusplus
extern "C" {
#endif
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

/* func_0022FF70: element stride 0x10, field +8 */
typedef struct { int unk0, unk4, unk8, unkC; } Entry10;
int poc_0022FF70(Entry10 *tbl, int i) { return tbl[i].unk8; }

/* func_001A5B90 */
typedef struct { u8 pad[0x184]; u16 unk184; u16 unk186; } Obj1A5B90;
void poc_001A5B90(Obj1A5B90 *p) { p->unk184 = p->unk186; }

/* func_0043C050 */
typedef struct { u8 pad[0x47A0]; float unk47A0; } Obj43C050;
void poc_0043C050(Obj43C050 *p, float *out) { *out = p->unk47A0; }

/* func_001F9D60: four floats set to 1.0f (likely a scale/colour vector) */
typedef struct { u8 pad[0xC]; float unkC, unk10, unk14, unk18; } Obj1F9D60;
void poc_001F9D60(Obj1F9D60 *p) {
    p->unkC = 1.0f;
    p->unk10 = 1.0f;
    p->unk14 = 1.0f;
    p->unk18 = 1.0f;
}

/* func_0022C820: reset/initialise */
typedef struct { u8 unk0, unk1, unk2, unk3; int unk4, unk8; u8 unkC; } Obj22C820;
void poc_0022C820(Obj22C820 *p) {
    p->unk3 = 0; p->unk2 = 0; p->unk1 = 0; p->unk0 = 0;
    p->unk4 = 0; p->unk8 = 0;
    p->unkC = 1;
}

/* func_003B6090: flag two optional children */
typedef struct { u8 pad[0x3B]; u8 unk3B; } Child3B;
typedef struct { u8 pad[0x21E8]; Child3B *unk21E8; Child3B *unk21EC; } Obj3B6090;
void poc_003B6090(Obj3B6090 *p) {
    if (p->unk21E8) p->unk21E8->unk3B = 1;
    if (p->unk21EC) p->unk21EC->unk3B = 1;
}

/* func_003B59D0: short index into byte array, returns bool */
typedef struct { u8 pad[0x221A]; u8 unk221A[1]; } Obj3B59D0;
int poc_003B59D0(Obj3B59D0 *p, s16 i) { return p->unk221A[i] != 0; }

/* func_0024E2B0: relative-offset pointer walk */
typedef struct { u8 pad[0x14]; char *unk14; } Obj24E2B0;
void poc_0024E2B0(Obj24E2B0 *p) {
    char *q = p->unk14;
    s16 off = *(s16 *)(q + 2);
    p->unk14 = q + 2 - off;
}

/* func_00190BC8: thin wrapper with constant id */
extern void func_00180180(void *a0, unsigned int id);
void poc_00190BC8(void *a0) { func_00180180(a0, 0xFF000701); }

/* func_003B4F00: angle-like difference against a global object's child */
typedef struct { u8 pad[0x90]; u16 unk90; } Obj90;
typedef struct { u8 pad[0xC]; Obj90 *unkC; } GlobalCAF60C;
extern GlobalCAF60C *D_01CAF60C;
typedef struct { u8 pad[0x90]; u16 unk90; u8 pad2[0x2188 - 0x92]; s16 unk2188; } Obj3B4F00;
void poc_003B4F00(Obj3B4F00 *p) {
    p->unk2188 = D_01CAF60C->unkC->unk90 - p->unk90 - 0x4000;
}
#ifdef __cplusplus
}
#endif
