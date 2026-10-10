/*
 * Movie playback (CRI Sofdec) game-side classes. USA 0x001AA7F0-0x001AB4CC.
 * CMovieSys owns one CMovie; CMovie drives a CRI-style player handle at
 * +0xA0 whose first word is a C function table (called through $v0, which
 * MW's C++ virtual calls never use, hence not a C++ class).
 * Names are behavioural placeholders, not recovered identities.
 * Open (still asm):
 *  - IsPlaying 0x1AB480 / IsFinished 0x1AB4A0: unoptimised branch-over shape
 *    that no tried source or flag reproduces.
 *  - BuildPacket 0x1AB680: GS upload packet (DMA CNT/REF/END tags, BITBLTBUF,
 *    TRXREG/TRXPOS/TRXDIR, IMAGE GIF tag) per 16x16 tile; the original never
 *    folds the packet-pointer increments into store offsets, which MW -O3
 *    does for every source shape tried (plain, inline-by-reference, volatile).
 */
extern "C" void *func_00128488(void *p, int c, unsigned int n); // memset
extern "C" void func_00174020(void *cprm);                      // Sofdec: init create params?
extern "C" void func_00170BD8(void *);
extern "C" void func_001492C8(void);
extern "C" char D_0053FA40[];
extern "C" void func_00178850(struct MoviePlayer *, int ptid, int fid);   // mwPlyStartAfsLp?
extern "C" void func_00178630(struct MoviePlayer *, char *fname);         // mwPlyStartFnameLp?
extern "C" void func_00174FF0(struct MoviePlayer *, int ptid, int fid);   // mwPlyStartAfs?
extern "C" void func_001758F0(struct MoviePlayer *, int);
extern "C" void func_00172DA8(struct MoviePlayer *, void *frm);   // mwPlyGetCurFrm?
extern "C" void func_00173700(struct MoviePlayer *);              // mwPlyRelCurFrm?
extern "C" int func_00176160(struct MoviePlayer *);
extern "C" int func_00172D50(struct MoviePlayer *);
extern "C" void func_001767B8(struct MoviePlayer *, void *);
extern "C" int func_00173910(struct MoviePlayer *);
extern "C" int func_00176268(struct MoviePlayer *);
extern "C" int func_00176200(struct MoviePlayer *);
extern "C" void func_0010DF60(int);                 // FlushCache?
extern "C" void *func_00104490(int ch);             // sceDmaGetChan?
extern "C" void func_001035E0(int, int);            // sceGsSyncPath?
extern "C" void func_001047C0(void *ch, void *pkt); // sceDmaSend?
struct GfxState {
    char pad0[3];
    signed char unk3;       // 0x03
    char pad4[0xE - 4];
    signed char bufIdx;     // 0x0E: current packet/double-buffer index
    char padF[0x20 - 0xF];
    short unk20, unk22;     // 0x20, 0x22
};
extern "C" int func_00171248(void *cprm);                 // mwPlyCalcWorkCprmSfd?
extern "C" int func_00178CA8(void);
extern "C" void *func_001B0FD0(void *heap, int size, int align);
extern "C" void func_001492B0(void);
extern "C" struct MoviePlayer *func_00172170(void *cprm); // mwPlyCreateSofdec?
extern "C" void func_00170BC0(struct MoviePlayer *, void *work, int size);
extern "C" GfxState *D_005BE0D8;                    // .sdata                                   // volume table, 128 x short

// 0x10-byte library class; Init/Reset/dtor live in the Capcom library block.
// Its inline ctor is emitted out of line in this TU (0x1AAD30).
class CLib10 {
public:
    CLib10() { Init(); }
    ~CLib10();
    void Init();
    void Reset();
    char pad[0x10];
};

struct MoviePlayerVtbl {
    void *f00, *f04, *f08, *f0C, *f10;
    void (*Term)(struct MoviePlayer *);                 // +0x14
    void (*StartFname)(struct MoviePlayer *, char *);   // +0x18
    void (*Stop)(struct MoviePlayer *);                 // +0x1C
    int (*GetStat)(struct MoviePlayer *);               // +0x20
    void (*GetTime)(struct MoviePlayer *, int *, int *); // +0x24
    void (*SetLoop)(struct MoviePlayer *, int);         // +0x28
    void (*SetVolume)(struct MoviePlayer *, int atten); // +0x2C
};
struct MoviePlayer { MoviePlayerVtbl *vtbl; };

struct MovieEntry {
    unsigned short fileId;  // 0x0 (MData.afs file id)
    short pad2;
    char *fname;            // 0x4
    unsigned short rate;    // 0x8 (x1000 = max bitrate)
    unsigned short width;   // 0xA
    unsigned short height;  // 0xC
    unsigned char unkE, unkF;
    unsigned char svrOk;    // 0x10
    char pad11[3];
};                          // 0x14

typedef unsigned long long u64;
typedef unsigned int u32;
// SCE libgraph/libdma-style register packing
#define GIF_TAG(nloop, eop, pre, prim, flg, nreg)     ((u64)(nloop) | ((u64)(eop) << 15) | ((u64)(pre) << 46) | ((u64)(prim) << 47) | ((u64)(flg) << 58) | ((u64)(nreg) << 60))
#define GS_BITBLTBUF(sbp, sbw, spsm, dbp, dbw, dpsm)     ((u64)(sbp) | ((u64)(sbw) << 16) | ((u64)(spsm) << 24) | ((u64)(dbp) << 32) | ((u64)(dbw) << 48) | ((u64)(dpsm) << 56))
#define GS_TRXPOS(ssax, ssay, dsax, dsay, dir)     ((u64)(ssax) | ((u64)(ssay) << 16) | ((u64)(dsax) << 32) | ((u64)(dsay) << 48) | ((u64)(dir) << 59))
#define GS_TRXREG(rrw, rrh) ((u64)(rrw) | ((u64)(rrh) << 32))
#define GS_TRXDIR(xdir) ((u64)(xdir))
#define DMA_TAG(p, w0) (((u32 *)(p))[0] = (w0), ((u32 *)(p))[1] = 0, (p)++, ((u32 *)(p))[0] = 0, ((u32 *)(p))[1] = 0, (p)++)

struct VolTable { short v[128]; } __attribute__((aligned(16)));

class CMovie {                 // 0x188 bytes
public:
    CMovie();
    ~CMovie();
    void Clear();
    void Term();
    void SetUnk14(int v);
    void Stop();
    void SetVolume(int vol);
    void SetMaxVolume(int max);
    void Play(unsigned char flags, int fromAfs);
    void BuildPacket(int idx);
    void Update();
    int Open(MovieEntry *table, int index, unsigned char paused, unsigned char useSvr);
    void UploadFrame(void *buf);

    unsigned char active;      // 0x00
    unsigned char unk1;
    unsigned char playing;     // 0x02
    char pad3;
    MovieEntry *entry;         // 0x04
    int index;                 // 0x08
    u64 *packet[2];            // 0x0C
    unsigned int vramAddr;     // 0x14 (BITBLTBUF DBP)
    int unk18;
    void *buf1;                // 0x1C
    void *buf2;                // 0x20
    int unk24, unk28, unk2C;
    int droppedFrames;         // 0x30
    int unk34, unk38;
    int time, timeUnit;        // 0x3C, 0x40
    int frameToggle;           // 0x44
    int maxVolume;             // 0x48 (127 by default)
    int volume;                // 0x4C
    int volStart, volEnd;      // 0x50, 0x54 (volume fade)
    int fadeTotal, fadeLeft;   // 0x58, 0x5C
    int frameCount;            // 0x60
    int unk64, unk68, unk6C;
    struct {                   // 0x70: Sofdec create parameters
        int compoMode;         // 0x70
        int maxBps;            // 0x74
        int maxWidth;          // 0x78
        int maxHeight;         // 0x7C
        int unk80, unk84;
        void *work;            // 0x88
        int workSize;          // 0x8C
        int unk90;
        char pad94[0xC];
    } cprm;
    MoviePlayer *player;       // 0xA0
    unsigned char state;       // 0xA4 (2 = playing, 3 = finished)
    char padA5[3];
    char info[0x40];           // 0xA8
    unsigned char paused;      // 0xE8
    char padE9[3];
    void *svrWork;             // 0xEC
    int svrWorkSize;           // 0xF0
    unsigned char useSvr;      // 0xF4
    char padF5[0xF8 - 0xF5];
    CLib10 heap[6];            // 0xF8
    void *bufs[6];             // 0x158
    int bufSize[6];            // 0x170
};

class CMovieSys {
public:
    CMovieSys();
    ~CMovieSys();
    void Setup(int mode);
    float fps;                 // 0x00
    int unk4, unk8;
    char unkC;
    char padD[0x13];
    CMovie movie[1];           // 0x20
};

// mode: 0 = NTSC (59.94 Hz), 1 = PAL (50 Hz), 2 = 60 Hz
void CMovieSys::Setup(int mode) {
    func_00128488(this, 0, 0x20);
    switch (mode) {
    case 0: fps = 59.94f; break;
    case 1: fps = 50.0f; break;
    case 2: fps = 60.0f; break;
    }
    unk4 = 1;
    unk8 = 1;
    unkC = 0;
    func_00174020(this);
    movie[0].Clear();
}

CMovieSys::CMovieSys() {}
CMovieSys::~CMovieSys() {}

CMovie::CMovie() { maxVolume = 0x7F; }
CMovie::~CMovie() {}

void CMovie::Clear() {
    active = 0; unk1 = 0; playing = 0;
    index = 0; entry = 0; packet[1] = 0; packet[0] = 0; vramAddr = 0; unk18 = 0;
    unk24 = 0; unk28 = 0; unk2C = 0; droppedFrames = 0; unk34 = 0; unk38 = 0; time = 0; timeUnit = 0; frameToggle = 0;
    volStart = 0; volEnd = 0; fadeTotal = 0; fadeLeft = 0;
}

void CMovie::Term() {
    if (active) {
        if (useSvr == 1)
            func_00170BD8(player);
        Stop();
        player->vtbl->Term(player);
        for (int i = 0; i < 6; i++)
            heap[i].Reset();
        if (useSvr == 1)
            func_001492C8();
        Clear();
    }
}

void CMovie::SetUnk14(int v) {
    if (active)
        vramAddr = v;
}

void CMovie::Stop() {
    if (active) {
        player->vtbl->Stop(player);
        unk1 = 0;
        playing = 0;
    }
}

void CMovie::SetVolume(int vol) {
    VolTable tbl = *(VolTable *)D_0053FA40;
    if (active) {
        if (maxVolume < vol)
            vol = maxVolume;
        volume = vol;
        player->vtbl->SetVolume(player, tbl.v[volume]);
    }
}

void CMovie::SetMaxVolume(int max) {
    maxVolume = max;
    SetVolume(volume);
}

void CMovie::Play(unsigned char flags, int fromAfs) {
    if (active) {
        player->vtbl->Stop(player);
        if (flags & 2) {
            player->vtbl->SetLoop(player, 1);
            unk1 = 0;
        } else {
            player->vtbl->SetLoop(player, 0);
            unk1 = 1;
        }
        SetVolume(maxVolume);
        if (flags & 1) {
            if (fromAfs)
                func_00178850(player, 2, entry->fileId);
            else
                func_00178630(player, entry->fname);
        } else {
            if (fromAfs)
                func_00174FF0(player, 2, entry->fileId);
            else
                player->vtbl->StartFname(player, entry->fname);
        }
        func_001758F0(player, 1);
        playing = 0;
        droppedFrames = 0;
        BuildPacket(0);
        BuildPacket(1);
        frameCount = 0;
    }
}

struct MovieFrame { void *buf; char pad[0x8C]; };

void CMovie::Update() {
    frameCount++;
    if (active && paused != 1) {
        if (fadeLeft > 0 && state == 2) {
            fadeLeft--;
            SetVolume(((((volEnd - volStart) * (fadeTotal - fadeLeft)) << 8) / fadeTotal + (volStart << 8)) / 256);
        }
        if (unk1) {
            frameToggle ^= 1;
            if (frameToggle) {
                MovieFrame frm;
                func_00172DA8(player, &frm);
                if (frm.buf == 0) {
                    droppedFrames++;
                } else {
                    unk18 ^= 1;
                    playing = 1;
                    UploadFrame(frm.buf);
                    func_00173700(player);
                }
            }
        }
        state = player->vtbl->GetStat(player);
        player->vtbl->GetTime(player, &time, &timeUnit);
        unk28 = func_00176160(player);
        unk2C = (unsigned char)func_00172D50(player);
        func_001767B8(player, info);
        unk24 = func_00173910(player);
        unk34 = func_00176268(player);
        unk38 = func_00176200(player);
    }
}

void CMovie::UploadFrame(void *buf) {
    int i, j;
    u64 *p = packet[D_005BE0D8->bufIdx] + 8;
    for (i = 0; i < (int)((u32)entry->width >> 4); i++) {
        for (j = 0; j < (int)((u32)entry->height >> 4); j++, p++) {
            p += 10;
            ((u32 *)p)[1] = (u32)buf;
            p++;
            buf = (char *)buf + 0x400;
        }
    }
    func_0010DF60(0);
    void *ch = func_00104490(2);
    func_001035E0(0, 0);
    func_001047C0(ch, packet[D_005BE0D8->bufIdx]);
    func_001035E0(0, 0);
}

int CMovie::Open(MovieEntry *table, int index, unsigned char paused, unsigned char useSvr) {
    int i;
    if (active)
        Term();
    Clear();
    this->index = index;
    entry = &table[index];
    active = 1;
    cprm.unk90 = 0;
    cprm.compoMode = 1;
    cprm.maxBps = entry->rate * 1000;
    cprm.maxWidth = entry->width;
    cprm.maxHeight = entry->height;
    cprm.unk80 = entry->unkE;
    cprm.unk84 = entry->unkF;
    cprm.workSize = func_00171248(&cprm);
    this->useSvr = useSvr;
    this->paused = paused;
    if (this->useSvr == 1 && entry->svrOk == 0)
        this->useSvr = 0;
    bufSize[0] = (cprm.workSize + 63) & ~63;
    bufSize[2] = 0x200;
    bufSize[1] = 0x200;
    bufSize[3] = bufSize[4] = 0x60 * ((u32)entry->width >> 4) * ((u32)entry->height >> 4) + 0x50;
    if (this->useSvr == 1) {
        svrWorkSize = func_00178CA8();
        bufSize[5] = (svrWorkSize + 63) & ~63;
    } else {
        svrWorkSize = 0x10;
        bufSize[5] = 0x10;
    }
    for (i = 0; i < 6; i++) {
        if ((bufs[i] = func_001B0FD0(&heap[i], bufSize[i], -1)) == 0)
            return 0;
    }
    cprm.work = bufs[0];
    svrWork = bufs[5];
    if (this->useSvr == 1)
        func_001492B0();
    player = func_00172170(&cprm);
    player->vtbl->GetTime(player, &time, &timeUnit);
    state = player->vtbl->GetStat(player);
    buf1 = (void *)(((int)bufs[1] + 63) & ~63);
    buf2 = (void *)(((int)bufs[2] + 63) & ~63);
    packet[0] = (u64 *)bufs[3];
    packet[1] = (u64 *)bufs[4];
    vramAddr = 0x4000 - entry->width * entry->height / 64;
    unk64 = D_005BE0D8->unk20;
    unk68 = D_005BE0D8->unk22;
    unk6C = D_005BE0D8->unk3;
    if (this->useSvr == 1)
        func_00170BC0(player, svrWork, svrWorkSize);
    return 1;
}

// destructor with an empty body; likely the AFS-owner class at 0x1AA840
class CUnk1AA7F0 {
public:
    ~CUnk1AA7F0();
};
CUnk1AA7F0::~CUnk1AA7F0() {}
