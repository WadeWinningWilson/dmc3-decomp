/*
 * Game-side save system (USA 0x004EF480-), C++. Registers DMC3's save
 * files with the CAPCOM RD3 memory-card system (src/game/mc/mcsys.c).
 * Class name CMcAppli is from its RTTI (0x5A57C8); member names are placeholders.
 */
/* One entry of the main save file's directory (entrySize 0x30). */
struct SaveName {
    char s[0x13];
};

struct SaveEntry {
    char used;
    unsigned char year;
    unsigned char month;
    unsigned char day;
    unsigned char playHour;
    unsigned char playMin;
    unsigned char playSec;
    unsigned char b7;
    int i8;
    int iC;
    int i10;
    char c14;
    unsigned char c15;
    char c16;
    char c17;
    char c18;
    char c19;
    unsigned char hour;
    unsigned char minute;
    unsigned char second;
    SaveName name;
};

/* Game options block (D_00666710), also stored in the save header. */
struct SaveShorts {
    short s[15];
};

struct GameOptions {
    short a0;
    char month;
    char day;
    char b4;
    char b5;
    unsigned char b6;
    char b7;
    char b8;
    char b9;
    SaveShorts tbl;
};

struct Bytes5 {
    char b[5];
};

struct Bytes15 {
    char b[15];
};

struct Bytes6 {
    char b[6];
};

struct Vec6 {
    float f[6];
};

struct Vec8 {
    float f[8];
};

/* Player progress (D_01CAFF30); the parts not kept in the directory entry
 * are stored in the slot's data block (SaveData). */
struct Progress {
    int i0;
    int i4;
    int i8;
    char c0C;
    unsigned char c0D;
    unsigned char c0E;
    unsigned char c0F;
    char pad10[4];
    int i14;
    char s18[0x3B];
    char s53[8];
    char pad5B;
    char s5C[8];
    char s64[4];
    unsigned char c68;
    char pad69[3];
    Bytes5 a6C;
    Bytes15 a71;
    char c80;
    char c81;
    unsigned char c82;
    unsigned char c83;
    float f84;
    float f88;
    char c8C;
    Bytes6 a8D;
    Vec6 v94;
    Vec8 vAC;
    char sCC[8];
    char sD4[8];
    char sDC[8];
    char sE4[0xC];
    char sF0[0x60];
    char s150[0x208];
    char s358[0x208];
    char s560[5][21];
};

/* Data block of one save slot (dataSize 0x6B8). */
struct SaveData {
    unsigned char c0;
    unsigned char c1;
    char pad2[2];
    int i4;
    char s8[0x3B];
    char s43[8];
    char pad4B;
    char s4C[8];
    char s54[4];
    Bytes5 a58;
    Bytes15 a5D;
    char c6C;
    char c6D;
    unsigned char c6E;
    unsigned char c6F;
    float f70;
    float f74;
    char c78;
    Bytes6 a79;
    Vec6 v80;
    Vec8 v98;
    char sB8[8];
    char sC0[8];
    char sC8[8];
    char sD0[0xC];
    char sDC[0x60];
    char s13C[0x208];
    char s344[0x208];
    char s54C[5][21];
    unsigned char c5B5;
    char s5B6[0xFF];
};

/* Main save file header (headerSize 0x130). */
struct SaveHeader {
    int unk0;
    int unk4;
    char unk8[0xC];
    char unk14[4];
    GameOptions opt;
    char unk40[0xC0];
    char unk100[0x30];
};

/* sceCdCLOCK */
struct CdClock {
    unsigned char stat;
    unsigned char second;
    unsigned char minute;
    unsigned char hour;
    unsigned char pad;
    unsigned char day;
    unsigned char month;
    unsigned char year;
};


/* Some engine object; only its vtable slot 0x144 is used here. */
class CEngineObj {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79(void *p);
};

struct CEngineOwner {
    char pad[0xC];
    CEngineObj *obj;
};

extern "C" {
int func_00122130(CdClock *clock);                          /* sceCdReadClock */
int func_002A67F0(int a, int b);
void func_0036FA60(char *p, struct Progress *prog);
extern struct ProgressOwner {
    CEngineOwner *owner;    /* 0x01CAFF0C */
    char *unk10;            /* 0x01CAFF10 */
    char pad8[0x1C];
} D_01CAFF0C;
void *func_001282D0(void *dst, const void *src, unsigned int n);   /* memcpy */
void *func_00128488(void *p, int c, unsigned int n);             /* memset */
SaveHeader *func_004E9E10(int file);                        /* mc: header data of a file */
extern GameOptions D_00666710;
extern struct SaveInfo {
    int unk0;           /* 0x01CB0514 */
    char loaded;        /* 0x01CB0518 */
    char pad5[3];
    unsigned int time;  /* 0x01CB051C: play time in frames */
    char unkC[0xC];     /* 0x01CB0520 */
    char unk18[4];      /* 0x01CB052C */
} D_01CB0514;
SaveData *func_004E9F40(int file);                          /* mc: data block of a file */
extern Progress D_01CAFF30;
extern char D_01CAF516[];   /* [0]: frames per second (member of a larger object) */
SaveEntry *func_004E9E90(int file, int idx);                /* mc: entry data of a file */
void func_004E9FE0(void);                                   /* mc: reset all slots */
void func_004EA060(const char *dirName);                    /* mc: set directory name */
int func_004EA070(int slot, const char *name, int size, int busy);
int func_004EA120(int slot, const char *name, int count, int hdrSize, int entrySize, int dataSize);
extern char D_0058BAF0[];   /* "BASLUS-20964DMC3" */
extern char D_0058BB08[];   /* "icon00.ico" */
extern char D_0058BB18[];   /* "icon01.ico" */
extern char D_0058BB28[];   /* "icon02.ico" */
extern char D_0058BB38[];   /* "icon.sys" */
unsigned short func_001AE360(void *pad, int port);          /* pad: buttons pressed */
void func_003303F0(void *se, int a1, int id, int a3, int a4);  /* play system sound */
unsigned short func_001AE3B0(void *pad, int port);          /* pad: buttons repeating */
void func_004EA610(int on);
void func_004EA6F0(int sel);
void func_004EA780(int sel);
int func_004EA5E0(int slot);
int func_004E9D90(void);
int func_004E9CB0(void);
int func_004E9CD0(void);
int func_004E9DD0(void);
int func_004EA2E0(int file);
void func_004EA820(int file, void *buf);
void func_004EA480(void);
void func_004EA270(int file, void *buf);
void func_004EA900(int file, void *buf);
void func_004EA9E0(int file, void *buf);
bool func_00198140(void *loader, short *name, void *buf, int a3);
bool func_00198370(void *loader);
extern char D_00654430[];   /* file loader */
extern short D_00540370[];
void func_004EA690(void);
extern char D_006663C0[];   /* pad object */
extern char D_01DFABA0[];   /* system sound object */
}

class CLib10 {
public:
    CLib10() { Init(); }
    ~CLib10();
    void Init();
    void Reset();
    void *Alloc(int size, int mode);
    char pad[0x10];
};

class CMcAppli {
public:
    virtual ~CMcAppli();
    void Init(int arg);
    void Term();
    void Sub5B0();
    int Sub610();
    void Sub7A0();
    void Sub900();
    void SubA90();
    void SubBA0();
    int SubBE0();
    bool IsIdle();
    void Load(int slot);
    void LoadHeader();
    void Save(int slot);
    bool NextMode(int *prev);
    int Update();
    int MsgF1010(int msg);
    int UpdateSave();
    int UpdateLoad();
    int Boot();
    int SaveMenu();
    int LoadMenu();
    void SubE80(int a);
    void PushMode() {
        modeQ[unk244] = unk4;
        paramQ[unk244] = func_004E9D90();
        unk244++;
    }
    void PopMode(int *prev) {
        unk4 = modeQ[unk248];
        unk290 = paramQ[unk248];
        *prev = unk24C;
        unk248++;
        if (unk244 == unk248) {
            unk248 = 0;
            unk244 = 0;
        }
    }
    void SetMode(int mode);
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
    SaveEntry m1C[10];
    char unk1FC;
    char pad1FD[3];
    int unk200;
    int unk204;
    int unk208;
    CLib10 m20C;
    void *unk21C;
    CLib10 m220;
    void *unk230;
    int unk234;
    int unk238;
    int unk23C;
    int unk240;
    int unk244;
    int unk248;
    int unk24C;
    int modeQ[8];
    int paramQ[8];
    int unk290;
    unsigned char unk294[6];  /* fallback save date: year, month, day, hour, minute, second */
    char unk29A;              /* clock read retries */
    char unk29B;              /* clock retry delay */
};

/* Register the save directory and its files: the main data file (10 entries
 * of 0x6B8 bytes behind a 0x130-byte header), the three icon models and icon.sys. */
extern "C" void func_004EF4F0(void) {
    func_004E9FE0();
    func_004EA060(D_0058BAF0);
    func_004EA120(0, D_0058BAF0, 10, 0x130, 0x30, 0x6B8);
    func_004EA070(1, D_0058BB08, 0x1D258, 1);
    func_004EA070(2, D_0058BB18, 0x1D258, 1);
    func_004EA070(3, D_0058BB28, 0x198B8, 1);
    func_004EA070(4, D_0058BB38, 0x3C4, 2);
}

void CMcAppli::Init(int arg) {
    func_004EF4F0();
    Sub5B0();
    unk200 = arg;
}

void CMcAppli::Term() {
    m20C.Reset();
    m220.Reset();
}

void CMcAppli::Sub5B0() {
    unk204 = 0;
    unkC = -1;
    unk240 = 0;
    unk8 = 1;
    unk21C = 0;
    unk230 = 0;
    unk234 = 0;
    unk238 = -1;
    unk10 = 0;
    unk14 = 0;
    unk200 = -1;
    unk294[0] = 0;
    unk294[1] = 1;
    unk294[2] = 1;
    unk294[3] = 0;
    unk294[4] = 0;
    unk294[5] = 0;
    unk29A = 0;
    unk29B = 0;
}

/* Yes/No cursor on a confirmation prompt: left/right move it, circle
 * confirms (returns the choice), triangle cancels (returns 1). */
int CMcAppli::Sub610() {
    int ret = -1;

    if (func_001AE360(D_006663C0, 0) & 0x2000) {
        if (unk8 == 0)
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        unk8 = 1;
    } else if (func_001AE360(D_006663C0, 0) & 0x8000) {
        if (unk8 == 1)
            func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        unk8 = 0;
    } else if (func_001AE360(D_006663C0, 0) & 0x40) {
        func_003303F0(D_01DFABA0, 0, 0x19, 0, 0);
        if (unk8 == 0) {
            func_004EA610(0);
            ret = 0;
        } else {
            func_004EA610(1);
            ret = 1;
        }
    } else if (func_001AE360(D_006663C0, 0) & 0x10) {
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        unk8 = 1;
        func_004EA610(1);
        ret = 1;
    }
    return ret;
}

/* Two-way menu cursor (unk10: 0..1): up/down wrap, circle selects, triangle cancels. */
void CMcAppli::Sub7A0() {
    if (func_001AE360(D_006663C0, 0) & 0x1000) {
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        unk10--;
        if (unk10 < 0)
            unk10 = 1;
    } else if (func_001AE360(D_006663C0, 0) & 0x4000) {
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        unk10++;
        if (unk10 >= 2)
            unk10 = 0;
    } else if (func_001AE360(D_006663C0, 0) & 0x40) {
        func_003303F0(D_01DFABA0, 0, 4, 0, 0);
        func_004EA6F0(unk10);
    } else if (func_001AE360(D_006663C0, 0) & 0x10) {
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        func_004EA6F0(-2);
    }
}

/* Save-slot cursor (unk14: 0..9) with key repeat; unk1FC = whether the slot is in use. */
void CMcAppli::Sub900() {
    unsigned short pad = func_001AE3B0(D_006663C0, 0) | func_001AE360(D_006663C0, 0);

    if (pad & 0x8000) {
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        unk14--;
        if (unk14 < 0)
            unk14 = 9;
    } else if (pad & 0x2000) {
        func_003303F0(D_01DFABA0, 0, 2, 0, 0);
        unk14++;
        if (unk14 >= 10)
            unk14 = 0;
    } else if (func_001AE360(D_006663C0, 0) & 0x40) {
        func_003303F0(D_01DFABA0, 0, 4, 0, 0);
        func_004EA780(unk14);
    } else if (func_001AE360(D_006663C0, 0) & 0x10) {
        func_003303F0(D_01DFABA0, 0, 3, 0, 0);
        func_004EA780(-2);
    }
    if (func_004EA5E0(unk14))
        unk1FC = 1;
    else
        unk1FC = 0;
}

/* Copy the 10 directory entries of the loaded save into the menu. */
void CMcAppli::SubA90() {
    int i;

    for (i = 0; i < 10; i++) {
        SaveEntry *e = func_004E9E90(0, i);
        m1C[i].used = e->used;
        m1C[i].year = e->year;
        m1C[i].month = e->month;
        m1C[i].day = e->day;
        m1C[i].playHour = e->playHour;
        m1C[i].playMin = e->playMin;
        m1C[i].playSec = e->playSec;
        m1C[i].b7 = e->b7;
        m1C[i].i8 = e->i8;
        m1C[i].iC = e->iC;
        m1C[i].i10 = e->i10;
        m1C[i].c14 = e->c14;
        m1C[i].c15 = e->c15;
        m1C[i].c16 = e->c16;
        m1C[i].c17 = e->c17;
        m1C[i].c18 = e->c18;
        m1C[i].c19 = e->c19;
        m1C[i].hour = e->hour;
        m1C[i].minute = e->minute;
        m1C[i].second = e->second;
        m1C[i].name = e->name;
    }
}

void CMcAppli::SubBA0() {
    int i;

    for (i = 0; i < 10; i++)
        func_004E9E90(0, i)->used = 0;
}

#ifdef NON_MATCHING /* 87/132: register allocation of the six date bytes */
/* Select the most advanced save (by year, month, day, hour, minute, second, then play time). */
int CMcAppli::SubBE0() {
    int i;
    unsigned char eq;
    int time;
    SaveEntry *e;
    unsigned char k1, k2, k3, k4, k5, k6;
    int best, bestTime;

    k6 = 0;
    best = bestTime = -1;
    k1 = k2 = k3 = k4 = k5 = 0;

    for (i = 0; i < 10; i++) {
        e = func_004E9E90(0, i);
        if (!e)
            return -1;
        if (!e->used)
            continue;
        eq = 0;
        if (e->year < k1)
            continue;
        if (e->year == k1) {
            if (e->month < k2)
                continue;
            if (e->month == k2) {
                if (e->day < k3)
                    continue;
                if (e->day == k3) {
                    if (e->hour < k4)
                        continue;
                    if (e->hour == k4) {
                        if (e->minute < k5)
                            continue;
                        if (e->minute == k5) {
                            if (e->second < k6)
                                continue;
                            if (e->second == k6)
                                eq = 1;
                        }
                    }
                }
            }
        }
        time = e->playSec + e->playMin * 60 + e->playHour * 3600;
        if (eq == 1) {
            if (time >= bestTime)
                best = i;
        } else {
            best = i;
        }
        if (best == i) {
            k1 = e->year;
            k2 = e->month;
            k3 = e->day;
            k4 = e->hour;
            k5 = e->minute;
            k6 = e->second;
            bestTime = time;
        }
    }
    if (best != -1)
        unk14 = best;
    return best;
}
#endif

bool CMcAppli::IsIdle() {
    return unk240 == 0 && unk244 == unk248;
}

void CMcAppli::SetMode(int mode) {
    if (mode != unk4 && unk240 == 0) {
        switch (unk4) {
        case 2:
        case 3:
        case 0x12:
        case 0xC:
        case 0x11:
        case 0xF:
        case 0x17:
        case 0x20:
            unk240 = 0x14;
            unk24C = unk4;
            break;
        }
    }
}

/* Restore the save header into the live game state (keeps the current month option). */
void CMcAppli::LoadHeader() {
    SaveHeader *h = func_004E9E10(0);
    char keep;

    D_01CB0514.unk0 = h->unk4;
    func_001282D0(D_01CB0514.unkC, h->unk8, sizeof(D_01CB0514.unkC));
    func_001282D0(D_01CB0514.unk18, h->unk14, sizeof(D_01CB0514.unk18));
    keep = D_00666710.month;
    D_00666710 = h->opt;
    D_00666710.month = keep;
    D_01CB0514.loaded = 1;
}

/* Restore the player progress from save slot `slot`. */
void CMcAppli::Load(int slot) {
    SaveEntry *e = func_004E9E90(0, slot);
    SaveData *d;

    D_01CAFF30.i0 = e->i8;
    D_01CAFF30.i8 = e->i10;
    D_01CAFF30.c0C = e->c14;
    D_01CAFF30.c0D = e->c15;
    D_01CAFF30.i4 = e->iC;
    D_01CB0514.time = 0;
    D_01CB0514.time += e->playHour * D_01CAF516[0] * 3600;
    D_01CB0514.time += e->playMin * D_01CAF516[0] * 60;
    D_01CB0514.time += e->playSec * D_01CAF516[0];

    d = func_004E9F40(0);
    D_01CAFF30.c0E = d->c0;
    D_01CAFF30.c0F = d->c1;
    D_01CAFF30.i14 = d->i4;
    func_001282D0(D_01CAFF30.s18, d->s8, sizeof(D_01CAFF30.s18));
    func_001282D0(D_01CAFF30.s53, d->s43, sizeof(D_01CAFF30.s53));
    func_001282D0(D_01CAFF30.s5C, d->s4C, sizeof(D_01CAFF30.s5C));
    func_001282D0(D_01CAFF30.s64, d->s54, sizeof(D_01CAFF30.s64));
    D_01CAFF30.a6C = d->a58;
    D_01CAFF30.a71 = d->a5D;
    D_01CAFF30.c80 = d->c6C;
    D_01CAFF30.c81 = d->c6D;
    D_01CAFF30.c82 = d->c6E;
    D_01CAFF30.c83 = d->c6F;
    D_01CAFF30.f84 = d->f70;
    D_01CAFF30.f88 = d->f74;
    D_01CAFF30.c8C = d->c78;
    D_01CAFF30.a8D = d->a79;
    D_01CAFF30.v94 = d->v80;
    D_01CAFF30.vAC = d->v98;
    func_001282D0(D_01CAFF30.sCC, d->sB8, sizeof(D_01CAFF30.sCC));
    func_001282D0(D_01CAFF30.sD4, d->sC0, sizeof(D_01CAFF30.sD4));
    func_001282D0(D_01CAFF30.sDC, d->sC8, sizeof(D_01CAFF30.sDC));
    func_001282D0(D_01CAFF30.sE4, d->sD0, sizeof(D_01CAFF30.sE4));
    func_001282D0(D_01CAFF30.sF0, d->sDC, sizeof(D_01CAFF30.sF0));
    func_001282D0(D_01CAFF30.s150, d->s13C, sizeof(D_01CAFF30.s150));
    func_001282D0(D_01CAFF30.s358, d->s344, sizeof(D_01CAFF30.s358));
    func_001282D0(D_01CAFF30.s560, d->s54C, sizeof(D_01CAFF30.s560));
    D_01CAFF30.c68 = d->c5B5;
    D_01CB0514.loaded = 1;
}

/* Store the player progress into save slot `slot` (directory entry, header and data block). */
void CMcAppli::Save(int slot) {
    SaveHeader *h;
    SaveEntry *e;
    SaveData *d;
    CdClock clock;
    unsigned int secs;
    int i, n, cnt;

    switch (unk200) {
    case 5: {
        char *p = D_01CAFF0C.unk10;
        D_01CAFF0C.owner->obj->v79(p + 0xFC);
        func_0036FA60(p, &D_01CAFF30);
        break;
    }
    case 8:
        func_0036FA60(D_01CAFF0C.unk10, &D_01CAFF30);
        break;
    }

    D_01CB0514.loaded = 1;
    h = func_004E9E10(0);
    h->unk0 = 0;
    h->unk4 = D_01CB0514.unk0;
    func_001282D0(h->unk8, D_01CB0514.unkC, sizeof(h->unk8));
    func_001282D0(h->unk14, D_01CB0514.unk18, sizeof(h->unk14));
    h->opt = D_00666710;
    func_00128488(h->unk40, 0, sizeof(h->unk40));
    func_00128488(h->unk100, 0, sizeof(h->unk100));

    e = func_004E9E90(0, slot);
    e->used = 1;
    if (func_00122130(&clock) == 1) {
        e->year = clock.year;
        e->month = clock.month;
        e->day = clock.day;
        e->hour = clock.hour;
        e->minute = clock.minute;
        e->second = clock.second;
    } else {
        e->year = unk294[0];
        e->month = unk294[1];
        e->day = unk294[2];
        e->hour = unk294[3];
        e->minute = unk294[4];
        e->second = unk294[5];
    }
    secs = D_01CB0514.time / D_01CAF516[0];
    e->playHour = secs / 60 / 60 % 100;
    e->playMin = secs / 60 % 60;
    e->playSec = secs % 60;
    e->i8 = D_01CAFF30.i0;
    if (unk200 == 8 && D_01CAFF30.i0 < 20)
        e->i8++;
    e->iC = D_01CAFF30.i4;
    e->i10 = D_01CAFF30.i8;
    e->c14 = D_01CAFF30.c0C;
    e->c15 = D_01CAFF30.c0D;
    e->c18 = D_01CAFF30.c8C;
    e->c19 = D_01CAFF30.a8D.b[(unsigned char)D_01CAFF30.c8C];
    e->c16 = 0;
    for (i = 0; i < 12; i++) {
        if (D_01CAFF30.sE4[(char)i])
            e->c16++;
    }
    n = D_01CAFF30.i4;
    if (D_01CAFF30.s560[(unsigned char)func_002A67F0(D_01CAFF30.c0C, D_01CAFF30.c0D)][n] != -1)
        e->b7 = 1;
    else
        e->b7 = 0;
    e->c17 = -1;
    cnt = 0;
    for (i = 0; i < 5; i++) {
        if (D_01CAFF30.s560[i][20] != -1) {
            switch (i) {
            case 0:
                break;
            case 1:
                e->c17 = 0;
                break;
            case 2:
                e->c17 = 1;
                break;
            case 3:
                e->c17 = 2;
                break;
            case 4:
                e->c17 = 3;
                break;
            }
            cnt++;
        }
    }
    if (cnt == 5)
        e->c17 = 4;
    func_00128488(&e->name, 0, sizeof(e->name));

    d = func_004E9F40(0);
    d->c0 = D_01CAFF30.c0E;
    d->c1 = D_01CAFF30.c0F;
    d->i4 = D_01CAFF30.i14;
    func_001282D0(d->s8, D_01CAFF30.s18, sizeof(d->s8));
    func_001282D0(d->s43, D_01CAFF30.s53, sizeof(d->s43));
    func_001282D0(d->s4C, D_01CAFF30.s5C, sizeof(d->s4C));
    func_001282D0(d->s54, D_01CAFF30.s64, sizeof(d->s54));
    d->a58 = D_01CAFF30.a6C;
    d->a5D = D_01CAFF30.a71;
    d->c6C = D_01CAFF30.c80;
    d->c6D = D_01CAFF30.c81;
    d->c6E = D_01CAFF30.c82;
    d->c6F = D_01CAFF30.c83;
    d->f70 = D_01CAFF30.f84;
    d->f74 = D_01CAFF30.f88;
    d->c78 = D_01CAFF30.c8C;
    d->a79 = D_01CAFF30.a8D;
    d->v80 = D_01CAFF30.v94;
    d->v98 = D_01CAFF30.vAC;
    func_001282D0(d->sB8, D_01CAFF30.sCC, sizeof(d->sB8));
    func_001282D0(d->sC0, D_01CAFF30.sD4, sizeof(d->sC0));
    func_001282D0(d->sC8, D_01CAFF30.sDC, sizeof(d->sC8));
    func_001282D0(d->sD0, D_01CAFF30.sE4, sizeof(d->sD0));
    func_001282D0(d->sDC, D_01CAFF30.sF0, sizeof(d->sDC));
    func_001282D0(d->s13C, D_01CAFF30.s150, sizeof(d->s13C));
    func_001282D0(d->s344, D_01CAFF30.s358, sizeof(d->s344));
    func_001282D0(d->s54C, D_01CAFF30.s560, sizeof(d->s54C));
    d->c5B5 = D_01CAFF30.c68;
    func_00128488(d->s5B6, 0, sizeof(d->s5B6));
}

#ifdef NON_MATCHING /* 100/107: register choice for unk244/unk4 in the push branches */
/* Mode change queue: while a transition is running (unk240 frames) new modes
 * are queued; afterwards they are popped one at a time into unk4. */
bool CMcAppli::NextMode(int *prev) {
    int n;

    if (unk240 == 0) {
        if (unk244 != unk248) {
            PopMode(prev);
            return true;
        }
        return false;
    }
    n = unk244;
    if (n == unk248) {
        if (unk24C != unk4) {
            modeQ[n] = unk4;
            paramQ[unk244] = func_004E9D90();
            unk244++;
        }
    } else {
        if (modeQ[n - 1] != unk4) {
            modeQ[n] = unk4;
            paramQ[unk244] = func_004E9D90();
            unk244++;
        }
    }
    if (--unk240 == 0 && unk244 != unk248)
        PopMode(prev);
    return unk240 != 0;
}
#endif

/* Per-frame update: poll the memory-card system state into unk4 and pick
 * the message to show (unkC) for it. Returns 1 when finished. */
int CMcAppli::Update() {
    int prev = unk4;
    int ret = 0;

    unk4 = func_004E9CB0();
    unk290 = func_004E9D90();
    if (NextMode(&prev) == false) {
        unk10 = unk290;
        unkC = -1;
        if (unk4 & 0x80000000) {
            if (unk4 != prev && (prev & 0x80000000))
                unk8 = 1;
            Sub610();
        } else {
            unk8 = 1;
        }
        if ((unk4 & 0x40000000) && (func_001AE360(D_006663C0, 0) & 0x50)) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            func_004EA690();
        }
        switch (unk4) {
        case 0:
            if (IsIdle() == true)
                ret = 1;
            break;
        case 1:
            break;
        case 2:
            unkC = 20000;
            break;
        case 3:
            unkC = 20001;
            break;
        case 0x40000004:
            if (prev != 0x40000004)
                LoadHeader();
            unkC = 20002;
            break;
        case 0x80000005:
            switch (unk10) {
            case 0:
                unkC = 20003;
                break;
            case 1:
                unkC = 20003;
                break;
            case 2:
                unkC = 20004;
                break;
            }
            break;
        case 0x80000006:
            switch (unk10) {
            case 0:
                unkC = 20005;
                break;
            case 1:
                unkC = 20005;
                break;
            case 2:
                unkC = 20006;
                break;
            }
            break;
        case 0x80000007:
            switch (unk10) {
            case 0:
                unkC = 20007;
                break;
            case 1:
                unkC = 20007;
                break;
            case 2:
                unkC = 20008;
                break;
            }
            break;
        case 0x80000008:
            switch (unk10) {
            case 0:
                unkC = 20009;
                break;
            case 1:
                unkC = 20009;
                break;
            case 2:
                unkC = 20010;
                break;
            }
            break;
        case 0x80000022:
            switch (unk10) {
            case 0:
                unkC = 20011;
                break;
            case 1:
                unkC = 20011;
                break;
            case 2:
                unkC = 20012;
                break;
            }
            break;
        }
    }
    SetMode(prev);
    return ret;
}

#ifdef NON_MATCHING /* 77/82: prologue/delay-slot scheduling of `this` and the first pad call */
int CMcAppli::MsgF1010(int msg) {
    if (unk208 == 0) {
        if (func_001AE360(D_006663C0, 0) & 0x50) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            switch (func_004E9CD0()) {
            case 1:
            case 2:
            case 3:
                unk208 = 1;
                break;
            case 0:
            case 4:
            case 5:
            default:
                func_004EA690();
                break;
            }
        }
    } else {
        switch (func_004E9CD0()) {
        case 1:
            msg = 20020;
            break;
        case 2:
            msg = 20021;
            break;
        case 3:
            msg = 20022;
            break;
        }
        if (func_001AE360(D_006663C0, 0) & 0x50) {
            func_003303F0(D_01DFABA0, 0, 4, 0, 0);
            func_004EA690();
        }
    }
    return msg;
}
#endif

/* Per-frame update of the save screen. Returns 1 when finished. */
int CMcAppli::UpdateSave() {
    int prev = unk4;
    int ret = 0;

    unk4 = func_004E9CB0();
    if (NextMode(&prev) == false) {
        unkC = -1;
        if (unk4 & 0x80000000) {
            if (unk4 != prev && (prev & 0x80000000))
                unk8 = 1;
            if (Sub610() == 0) {
                if (unk4 == 0x80000016 || unk4 == 0x80000015)
                    Save(unk14);
                else if (unk4 == 0x8000000E)
                    SubBA0();
            }
        } else {
            unk8 = 1;
        }
        if (!(unk4 & 0x8000000)) {
            unk208 = 0;
            if ((unk4 & 0x40000000) && (func_001AE360(D_006663C0, 0) & 0x50)) {
                func_003303F0(D_01DFABA0, 0, 4, 0, 0);
                func_004EA690();
            }
        }
        if (unk4 & 0x20000000)
            Sub7A0();
        if (unk4 & 0x10000000)
            Sub900();
        switch (unk4) {
        case 0:
            if (IsIdle() == true)
                ret = 1;
            break;
        case 1:
            break;
        case 0x20000009:
            if (prev != 0x20000009) {
                unk14 = 0;
                unk18 = 0;
                unk1FC = 0;
            }
            unkC = 0x4E3E;
            break;
        case 2:
        case 0x12:
            unkC = 0x4E3F;
            break;
        case 0x4000000A:
            unkC = 0x4E34;
            break;
        case 0x8000000B:
            unkC = 0x4E48;
            break;
        case 0xC:
            unkC = 0x4E49;
            break;
        case 0x4000000D:
            unkC = 0x4E4A;
            break;
        case 0x8000000E:
            unkC = 0x4E4B;
            break;
        case 0x11:
            SubE80(func_004E9DD0());
        case 0xF:
            unkC = 0x4E4C;
            break;
        case 0x17:
            unkC = 0x4E4E;
            break;
        case 0x48000010:
            unkC = MsgF1010(0x4E4D);
            break;
        case 0x48000018:
            unkC = MsgF1010(0x4E4F);
            break;
        case 0x48000013:
            unkC = MsgF1010(0x4E40);
            break;
        case 0x10000014:
            if (prev != 0x10000014) {
                SubA90();
                if (unk18 == 0) {
                    if (SubBE0() == -1)
                        unk14 = 0;
                    unk18 = 1;
                    unk1FC = func_004EA5E0(unk14) != 0;
                }
            }
            unkC = 0x4E50;
            break;
        case 0x80000015:
            unkC = 0x4E51;
            break;
        case 0x80000016:
            unkC = 0x4E52;
            break;
        case 0x40000019:
            if (prev != 0x40000019) {
                SubA90();
                unk1FC = 0;
            }
            unkC = 0x4E53;
            break;
        case 0x4000001A:
            unkC = 0x4E36;
            break;
        case 0x4000001B:
            unkC = 0x4E42;
            break;
        }
    }
    SetMode(prev);
    return ret;
}

/* Per-frame update of the load screen. Returns 1 when finished. */
int CMcAppli::UpdateLoad() {
    int prev = unk4;
    int ret = 0;

    unk4 = func_004E9CB0();
    if (NextMode(&prev) == false) {
        unkC = -1;
        if (unk4 & 0x80000000) {
            if (unk4 != prev && (prev & 0x80000000))
                unk8 = 1;
            Sub610();
        } else {
            unk8 = 1;
        }
        if (!(unk4 & 0x8000000)) {
            unk208 = 0;
            if ((unk4 & 0x40000000) && (func_001AE360(D_006663C0, 0) & 0x50)) {
                func_003303F0(D_01DFABA0, 0, 4, 0, 0);
                func_004EA690();
            }
        }
        if (unk4 & 0x20000000)
            Sub7A0();
        if (unk4 & 0x10000000)
            Sub900();
        switch (unk4) {
        case 0:
            if (IsIdle() == true)
                ret = 1;
            break;
        case 1:
            break;
        case 0x20000009:
            if (prev != 0x20000009) {
                unk14 = 0;
                unk18 = 0;
                unk1FC = 0;
            }
            unkC = 0x4E3E;
            break;
        case 2:
        case 0x12:
            unkC = 0x4E3F;
            break;
        case 0x4000000A:
            unkC = 0x4E34;
            break;
        case 0x4000001D:
            unkC = 0x4E5C;
            break;
        case 0x48000013:
            unkC = MsgF1010(0x4E40);
            break;
        case 0x48000021:
            unkC = MsgF1010(0x4E41);
            break;
        case 0x10000014:
            if (prev != 0x10000014) {
                SubA90();
                if (unk18 == 0) {
                    if (SubBE0() == -1)
                        unk14 = 0;
                    unk18 = 1;
                    unk1FC = func_004EA5E0(unk14) != 0;
                }
            }
            unkC = 0x4E5D;
            break;
        case 0x4000001B:
        case 0x4000001C:
            unkC = 0x4E42;
            break;
        case 0x8000001E:
            unkC = 0x4E5E;
            break;
        case 0x4000001F:
            if (prev != 0x4000001F) {
                Load(unk14);
                unk23C = 1;
            }
            unkC = 0x4E5F;
            break;
        case 0x20:
            unkC = 0x4E21;
            break;
        }
    }
    SetMode(prev);
    return ret;
}

/* Boot-time memory card check: allocate the work buffer, run Update until
 * done, then free it. */
int CMcAppli::Boot() {
    int ret = 0;

    switch (unk204) {
    case 0:
        unk21C = m20C.Alloc(func_004EA2E0(0), 2);
        if (unk21C == 0) {
            unk204 = 3;
            return 1;
        }
        func_004EA820(0, unk21C);
        unk240 = 0;
        unk4 = 1;
        unk248 = 0;
        unk244 = 0;
        unk10 = 0;
        unk14 = 0;
        unk18 = 1;
        unk204++;
    case 1:
        if (Update() == 1)
            unk204++;
        break;
    case 2:
        func_004EA480();
        m20C.Reset();
        unk21C = 0;
        unk204++;
    case 3:
        ret = 1;
        break;
    default:
        ret = 1;
        break;
    }
    return ret;
}

/* Load save icon `icon` (1-4) into m220 and hand it to the memory-card system. */
void CMcAppli::SubE80(int icon) {
    int size;

    switch (unk234) {
    case 0:
        if (unk238 == icon)
            break;
        unk238 = icon;
        if (unk230) {
            m220.Reset();
            unk230 = 0;
        }
        unk234++;
        break;
    case 1:
        size = 0;
        switch (unk238) {
        case 1:
            size = 0x1D258;
            break;
        case 2:
            size = 0x1D258;
            break;
        case 3:
            size = 0x198B8;
            break;
        case 4:
            size = 0x3C4;
            break;
        default:
            unk238 = -1;
            unk234 = 0;
            break;
        }
        if (size) {
            size = (size + 0x7FF) / 0x800 * 0x800;
            unk230 = m220.Alloc(size, 2);
            if (unk230) {
                if (func_00198140(D_00654430, &D_00540370[unk238], unk230, 0) == false) {
                    m220.Reset();
                    unk230 = 0;
                } else {
                    unk234++;
                }
            }
        }
        break;
    case 2:
        if (func_00198370(D_00654430) == false) {
            func_004EA270(unk238, unk230);
            unk234 = 0;
        }
        break;
    }
}

/* Save screen: read the date for the timestamp, allocate buffers and run UpdateSave. */
int CMcAppli::SaveMenu() {
    int ret = 0;
    int size;
    CdClock clock;

    switch (unk204) {
    case 0:
        unk230 = m220.Alloc(0x1D800, 2);
        if (unk230 == 0) {
            ret = 1;
            break;
        }
        unk29B = -1;
        unk29A = 0;
        unk204++;
    case 1:
        if (unk29A < 3) {
            if (unk29B < 0) {
                unk29B = 60;
                unk29A++;
                if (func_00122130(&clock) == 1) {
                    unk294[0] = clock.year;
                    unk294[1] = clock.month;
                    unk294[2] = clock.day;
                    unk294[3] = clock.hour;
                    unk294[4] = clock.minute;
                    unk294[5] = clock.second;
                    unk204++;
                }
            } else {
                unk29B--;
            }
        } else {
            unk294[0] = 0;
            unk294[1] = 1;
            unk294[2] = 1;
            unk294[3] = 0;
            unk294[4] = 0;
            unk294[5] = 0;
            unk29A = 0;
            unk29B = 0;
            unk204++;
        }
        break;
    case 2:
        size = func_004EA2E0(0);
        unk21C = m20C.Alloc(size, 2);
        if (unk21C == 0) {
            unk204 = 4;
            return 1;
        }
        func_00128488(unk21C, 0, size);
        func_004EA900(0, unk21C);
        unk240 = 0;
        unk4 = 1;
        unk248 = 0;
        unk244 = 0;
        unk10 = 0;
        unk14 = 0;
        unk18 = 0;
        unk1FC = 0;
        unk204++;
    case 3:
        if (UpdateSave() == 1)
            unk204++;
        break;
    case 4:
        func_004EA480();
        m20C.Reset();
        unk21C = 0;
        if (unk230) {
            m220.Reset();
            unk230 = 0;
        }
        unk204++;
    case 5:
        ret = 1;
        break;
    default:
        ret = 1;
        break;
    }
    return ret;
}

/* Load screen. Returns 2 when a save was loaded, 1 when finished without one. */
int CMcAppli::LoadMenu() {
    int ret = 0;

    switch (unk204) {
    case 0:
        unk21C = m20C.Alloc(func_004EA2E0(0), 2);
        if (unk21C == 0) {
            unk204 = 3;
            return 1;
        }
        func_004EA9E0(0, unk21C);
        unk240 = 0;
        unk4 = 1;
        unk248 = 0;
        unk244 = 0;
        unk10 = 0;
        unk14 = 0;
        unk18 = 0;
        unk23C = 0;
        unk1FC = 0;
        unk204++;
    case 1:
        if (UpdateLoad() == 1)
            unk204++;
        break;
    case 2:
        func_004EA480();
        m20C.Reset();
        unk21C = 0;
        unk204++;
    case 3:
        if (unk23C)
            ret = 2;
        else
            ret = 1;
        break;
    default:
        ret = 1;
        break;
    }
    return ret;
}

CMcAppli::~CMcAppli() {
}
