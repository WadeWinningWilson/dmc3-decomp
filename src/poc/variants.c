/* Scratch variants for the PoC functions that do not match yet. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;

typedef struct { u8 pad[0x14]; char *unk14; } Obj24E2B0;
void v24_1(Obj24E2B0 *p) { char *q = p->unk14; s16 off = *(s16 *)(q + 2); p->unk14 = q + 2 - off; }
void v24_2(Obj24E2B0 *p) { p->unk14 += 2; p->unk14 -= *(s16 *)p->unk14; }
void v24_3(Obj24E2B0 *p) { s16 off = *(s16 *)(p->unk14 + 2); p->unk14 += 2; p->unk14 -= off; }
typedef struct { u8 pad[0x14]; s16 *unk14; } Obj24b;
void v24_4(Obj24b *p) { p->unk14++; p->unk14 = (s16 *)((char *)p->unk14 - *p->unk14); }
void v24_5(Obj24b *p) { s16 *q = p->unk14; p->unk14 = (s16 *)((char *)(q + 1) - q[1]); }
void v24_6(Obj24b *p) { s16 off = p->unk14[1]; p->unk14 = (s16 *)((char *)(p->unk14 + 1) - off); }

typedef struct { u8 pad[0x90]; u16 unk90; } Obj90;
typedef struct { u8 pad[0xC]; Obj90 *unkC; } GlobalCAF60C;
extern GlobalCAF60C *D_01CAF60C;
typedef struct { u8 pad[0x90]; u16 unk90; u8 pad2[0x2188 - 0x92]; s16 unk2188; } Obj3B4F00;
void v3b_1(Obj3B4F00 *p) { u16 a = p->unk90; p->unk2188 = D_01CAF60C->unkC->unk90 - a - 0x4000; }
void v3b_2(Obj3B4F00 *p) { p->unk2188 = -p->unk90 + D_01CAF60C->unkC->unk90 - 0x4000; }
void v3b_3(Obj3B4F00 *p) { p->unk2188 = (s16)(D_01CAF60C->unkC->unk90 - p->unk90) - 0x4000; }
typedef struct { u8 pad[0xC]; GlobalCAF60C *unkC; } GlobalCAF600;
extern GlobalCAF600 D_01CAF600;
void v3b_4(Obj3B4F00 *p) { p->unk2188 = ((Obj90 *)D_01CAF600.unkC)->unk90 - p->unk90 - 0x4000; }

extern void func_00180180(void *a0, unsigned int id);
extern int func_00180180_i(void *a0, unsigned int id);
extern void func_00180180_v(void *a0, unsigned int id, ...);
void v19_1(void *a0) { func_00180180_v(a0, 0xFF000701); }
int v19_2(void *a0) { return func_00180180_i(a0, 0xFF000701); }
void v19_3(void *a0) { unsigned int id = 0xFF000701; func_00180180(a0, id); }
void v19_4(void *a0) { func_00180180(a0, 0xFF000701); return; }
