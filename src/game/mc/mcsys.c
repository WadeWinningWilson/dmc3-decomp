/*
 * CAPCOM RD3 Memory Card System Ver.1.21c (USA 0x004E9B90-), plain C around one
 * NOTE: some helpers are `static` on purpose. MW tracks a static callee's register
 * use and changes its callers' codegen (e.g. reusing $a0 after
 * func_004ECC50(4)). The set below was found by making all 53 functions match:
 * func_004EAB40, func_004EAB70, func_004EAC00, func_004EAC10, func_004EAC90, func_004ECC50.
 * tools/mwo_sections.py
 * adds global aliases so code still in asm can call them.
 * global state block (D_01DFC1A0, 0x1E0 bytes in .bss). SCE function identities
 * in comments are inferred from arguments and strings.
 */
#include "stdarg.h"
typedef struct {
    int flags;              /* +0x00 */
    char name[0x20];        /* +0x04 */
    int size;               /* +0x24: file size in bytes */
    int busy;               /* +0x28 */
    int count;              /* +0x2C: number of entries (low bits double as flags) */
    int hdrSize;            /* +0x30: header block size */
    int entrySize;          /* +0x34: size of each entry block */
    int dataSize;           /* +0x38: trailing data block size */
    int unk3C;              /* +0x3C */
} McFile;                   /* 0x40 */

typedef struct { int flags; char *data; char *sum; } McEntry;  /* 12 bytes */

typedef struct {
    int slot;               /* +0x00 */
    char *base;             /* +0x04: save buffer */
    char *header;           /* +0x08 */
    char *headerSum;        /* +0x0C */
    McEntry *entries;       /* +0x10 */
    char *data;             /* +0x14 */
    char *dataSum;          /* +0x18 */
} McWork;

typedef struct {
    void (*callback)(void); /* 0x000 */
    char name[0x20];        /* 0x004 */
    int unk24[2];           /* 0x024 */
    McFile files[5];        /* 0x02C - 0x16C */
    McWork work;            /* 0x16C */
    int stat;               /* 0x188 */
    int state;              /* 0x18C: operation state machine */
    int errLevel;           /* 0x190 */
    int errCode;            /* 0x194 */
    int errState;           /* 0x198: sub-state of async card calls (-1 = done) */
    int unk19C;             /* 0x19C: set when a transfer was short/long */
    int infoRetry;          /* 0x1A0 */
    int fd;                 /* 0x1A4: open card file descriptor */
    int statPort;           /* 0x1A8: port the status refers to (2 = both) */
    int unk1AC;             /* 0x1AC */
    int entryIdx;           /* 0x1B0: entry chosen for load/save */
    int opOffset;           /* 0x1B4 */
    int opSize;             /* 0x1B8 */
    char *opBuf;            /* 0x1BC */
    int opSlot;             /* 0x1C0: slot of the running operation */
    int retry;              /* 0x1C4 */
    int unk1C8;             /* 0x1C8 */
    int mcCmd;              /* 0x1CC: sceMcSync command */
    int mcResult;           /* 0x1D0: sceMcSync result */
    int mcType;             /* 0x1D4: sceMcGetInfo type (2 = PS2 card) */
    int mcFree;             /* 0x1D8 */
    int mcFormat;           /* 0x1DC */
} McState;                  /* 0x1E0 */

extern McState D_01DFC1A0;

extern int func_0010F9C0(const char *fmt, ...);            /* printf */
extern void *func_00128488(void *p, int c, unsigned int n); /* memset */
extern int func_00115558(const char *name);                 /* sceSifSearchModuleByName? */
extern int func_001158F0(const char *path, int argc, const char *argp); /* sceSifLoadModule */
extern int func_001236A8(void);                             /* sceMcInit */
int func_004EABB0(void);
extern void func_004EAAC0(int *);
extern void func_004EAAD0(McFile *);
extern void func_004EAAF0(void);
extern char *func_0012B2E8(char *dst, const char *src);     /* strcpy */
int func_004EA390(int slot, char *buf);
extern void func_004EAB20(void (*cb)(void));

int func_004ED800(int port, int slot, void *buf, int offset, int size);
int func_004EE1B0(int port, int slot);
int func_004EE6F0(int port);
int func_004EDE10(int port, int slot);
int func_004EDC70(int port);
extern void func_004EB010(void);   /* operation state machines */
extern void func_004EB510(void);
extern void func_004EC470(void);
extern int func_004ECD00(int port);

extern int func_004ED180(int port);
extern int func_001240B8(int mode, int *cmd, int *result);  /* sceMcSync */
extern int func_001241D8(int port, int slot, int *type, int *free, int *format); /* sceMcGetInfo */
extern int func_00123BB8(int port, int slot, const char *name);  /* sceMcMkdir */
int func_004EF400(char *buf, const char *fmt, ...);              /* sprintf (below) */
extern char D_005BDFF0[4];  /* "/%s" */
extern char D_005BDFE8[7];  /* "/%s/%s" */
extern char D_005BDFE0[6];  /* "/%s/*" */

typedef struct {            /* sceMcTblGetDir */
    char created[8];
    char modified[8];
    unsigned int size;      /* +0x10 FileSizeByte */
    unsigned short attr;
    unsigned short pad16;
    int pad18, pad1C;
    char name[32];          /* +0x20 EntryName */
} McDirEnt;                 /* 0x40 */
extern McDirEnt D_01DFC380[7];
extern int func_001243C8(int port, int slot, const char *name, unsigned mode, int maxent, McDirEnt *table); /* sceMcGetDir */
extern int func_0012B1A0(const char *a, const char *b);                 /* strcmp */
extern int func_001246E8(int port, int slot);                           /* sceMcFormat */
extern int func_00123A90(int port, int slot, const char *name, int mode); /* sceMcOpen */
extern int func_00123F40(int fd, void *buf, int size);                   /* sceMcWrite */
extern int func_00123BF0(int fd);                                        /* sceMcClose */
extern int func_00123CB0(int fd, int offset, int mode);                  /* sceMcSeek */
extern int func_00123E28(int fd, void *buf, int size);                   /* sceMcRead */

extern char D_0058BA10[];   /* "CAPCOM RD3 Memory Card System Ver.%s-%d\n" */
extern char D_005BDFC8[6];  /* "1.21c" */
extern char D_005BDFD0[6];  /* "mcman" */
extern char D_0058BA40[];   /* "cdrom0:\\MODULES\\MCMAN.IRX;1" */
extern char D_0058BA60[];   /* "can't load mcman.irx\n" */
extern char D_005BDFD8[7];  /* "mcserv" */
extern char D_0058BA80[];   /* "cdrom0:\\MODULES\\MCSERV.IRX;1" */
extern char D_0058BAA0[];   /* "can't load mcserv.irx\n" */

void func_004E9B90(void) {
    func_0010F9C0(D_0058BA10, D_005BDFC8, 2);
    if (func_00115558(D_005BDFD0) < 0) {
        while (func_001158F0(D_0058BA40, 0, 0) < 0)
            func_0010F9C0(D_0058BA60);
    }
    if (func_00115558(D_005BDFD8) < 0) {
        while (func_001158F0(D_0058BA80, 0, 0) < 0)
            func_0010F9C0(D_0058BAA0);
    }
    func_001236A8();
    func_00128488(&D_01DFC1A0, 0, sizeof(McState));
}

void func_004E9C80(void) {
    if (D_01DFC1A0.callback)
        D_01DFC1A0.callback();
}

int func_004E9CB0(void) {
    if (D_01DFC1A0.callback)
        return D_01DFC1A0.stat;
    return 0;
}

int func_004E9CD0(void) {
    if (func_004E9CB0() & 0x08000000)
        return D_01DFC1A0.errLevel;
    return 0;
}

int func_004E9D10(void) {
    int clusters;
    McFile *f;
    if (func_004EABB0() < 0)
        return -3;
    clusters = 2;
    f = D_01DFC1A0.files;
    do {
        clusters += (f->size + 0x3FF) / 1024;
        f++;
    } while (f < &D_01DFC1A0.files[5]);
    return clusters + 3;
}

int func_004E9D90(void) {
    int s = func_004E9CB0();
    if (s == 0 || s == 1)
        return -10;
    return D_01DFC1A0.statPort;
}

int func_004E9DD0(void) {
    int s = func_004E9CB0();
    if (s == 0 || s == 1)
        return -10;
    return D_01DFC1A0.unk1AC;
}

int func_004E9E10(int slot) {
    McWork *w = &D_01DFC1A0.work;
    McFile *f;
    if (slot < 0 || slot >= 5)
        return 0;
    f = &D_01DFC1A0.files[slot];
    if (f->busy)
        return 0;
    if (!f->hdrSize)
        return 0;
    if (w->slot != slot)
        return 0;
    return (int)w->header;
}

/* func_004E9E90 (slot entry value): 40/44, register allocation of the final
 * index computation differs; still asm. */

int func_004E9F40(int slot) {
    McWork *w = &D_01DFC1A0.work;
    McFile *f;
    if (slot < 0 || slot >= 5)
        return 0;
    f = &D_01DFC1A0.files[slot];
    if (f->busy)
        return 0;
    if (w->slot != slot)
        return 0;
    if (f->count <= 0)
        return 0;
    if (f->dataSize <= 0)
        return 0;
    return (int)w->data;
}

void func_004E9FE0(void) {
    int i;
    for (i = 0; i < 2; i++)
        func_004EAAC0(&D_01DFC1A0.unk24[i]);
    for (i = 0; i < 5; i++)
        func_004EAAD0(&D_01DFC1A0.files[i]);
    func_004EAAF0();
}

void func_004EA060(const char *name) {
    func_0012B2E8(D_01DFC1A0.name, name);
}

/* per-port status flags (unk24[port]) */
int func_004EA4D0(int port) { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; return (*p & 0x1) != 0; }
int func_004EA4F0(int port) { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; return (*p & 0x2) != 0; }
int func_004EA510(int port) { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; return (*p & 0x4) != 0; }
int func_004EA530(int port) { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; return (*p & 0x20) != 0; }
int func_004EA550(int port) { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; return (*p & 0x10) != 0; }

/* per-slot flags (files[slot].flags) */
int func_004EA570(int slot) { McState *m = &D_01DFC1A0; int *p = &m->files[slot].flags; return (*p & 0x1) != 0; }
int func_004EA590(int slot) { McState *m = &D_01DFC1A0; int *p = &m->files[slot].flags; return (*p & 0x6) != 0; }

/* per-entry flags of the active slot */
int func_004EA5B0(int idx) { return (D_01DFC1A0.work.entries[idx].flags & 0x1) != 0; }
int func_004EA5E0(int idx) { return (D_01DFC1A0.work.entries[idx].flags & 0x2) != 0; }

void func_004EAAD0(McFile *f) {
    f->flags = 0;
    f->busy = -1;
    f->unk3C = 0;
}

void func_004EAAF0(void) {
    McWork *w = &D_01DFC1A0.work;
    w->slot = -1;
    w->header = 0;
    w->headerSum = 0;
    w->entries = 0;
    w->data = 0;
    w->dataSum = 0;
}

void func_004EAB20(void (*cb)(void)) {
    D_01DFC1A0.callback = cb;
    D_01DFC1A0.state = 0;
    D_01DFC1A0.stat = 1;
}

static void func_004EAB40(void) {
    D_01DFC1A0.callback = 0;
}

int func_004EAB50(void) {
    return D_01DFC1A0.name[0] == 0 ? -1 : 1;
}

static int func_004EAB70(int slot) {
    McFile *f = &D_01DFC1A0.files[slot];
    if (f->busy == -1)
        return -1;
    return 1;
}

int func_004EABB0(void) {
    int i;
    for (i = 0; i < 5; i++) {
        if (func_004EAB70(i) == -1)
            return -1;
    }
    return 1;
}

static void func_004EAC00(void) {
    D_01DFC1A0.unk1C8 = -1;
}

int func_004EA070(int slot, const char *name, int size, int busy) {
    McFile *f;
    if (slot < 0 || slot >= 5)
        return -5;
    f = &D_01DFC1A0.files[slot];
    if (f->busy != -1)
        return -6;
    func_0012B2E8(f->name, name);
    f->size = size;
    f->busy = busy;
    f->count = 0;
    f->hdrSize = 0;
    f->entrySize = 0;
    f->dataSize = 0;
    return 1;
}

int func_004EA270(int slot, int v) {
    McFile *f;
    if (slot < 0 || slot >= 5)
        return -5;
    f = &D_01DFC1A0.files[slot];
    if (f->busy == -1)
        return -7;
    if (f->busy == 0)
        return -8;
    f->unk3C = v;
    return 1;
}

int func_004EA480(void) {
    if (D_01DFC1A0.work.slot == -1)
        return -4;
    func_004EAAF0();
    return 1;
}

int func_004EA610(int mode) {
    if (D_01DFC1A0.unk1C8 == -1) {
        if (mode != 0 && mode != 1)
            return -11;
        if (func_004E9CB0() & 0x80000000) {
            D_01DFC1A0.unk1C8 = mode;
            return 1;
        }
    }
    return -12;
}

int func_004EA690(void) {
    if (D_01DFC1A0.unk1C8 == -1 && (func_004E9CB0() & 0x40000000)) {
        D_01DFC1A0.unk1C8 = 2;
        return 1;
    }
    return -12;
}

int func_004EA6F0(int mode) {
    if (D_01DFC1A0.unk1C8 == -1) {
        if (!(mode < 2 && (mode >= 0 || mode == -2)))
            return -11;
        if (func_004E9CB0() & 0x20000000) {
            D_01DFC1A0.unk1C8 = mode;
            return 1;
        }
    }
    return -12;
}

int func_004EA780(int mode) {
    if (D_01DFC1A0.unk1C8 == -1) {
        if (!(mode < D_01DFC1A0.files[D_01DFC1A0.unk1AC].count && (mode >= 0 || mode == -2)))
            return -11;
        if (func_004E9CB0() & 0x10000000) {
            D_01DFC1A0.unk1C8 = mode;
            return 1;
        }
    }
    return -12;
}

/* the three operation starters differ only in the state machine they install */
int func_004EA820(int slot, char *buf) {
    if (func_004E9CB0())
        return -1;
    if (func_004EAB50() < 0)
        return -2;
    if (func_004EABB0() < 0)
        return -3;
    if (slot < 0 || slot >= 5)
        return -5;
    if (D_01DFC1A0.files[slot].busy)
        return -8;
    func_004EA390(slot, buf);
    D_01DFC1A0.opSlot = slot;
    func_004EAB20(func_004EB010);
    return 1;
}

int func_004EA900(int slot, char *buf) {
    if (func_004E9CB0())
        return -1;
    if (func_004EAB50() < 0)
        return -2;
    if (func_004EABB0() < 0)
        return -3;
    if (slot < 0 || slot >= 5)
        return -5;
    if (D_01DFC1A0.files[slot].busy)
        return -8;
    func_004EA390(slot, buf);
    D_01DFC1A0.opSlot = slot;
    func_004EAB20(func_004EB510);
    return 1;
}

int func_004EA9E0(int slot, char *buf) {
    if (func_004E9CB0())
        return -1;
    if (func_004EAB50() < 0)
        return -2;
    if (func_004EABB0() < 0)
        return -3;
    if (slot < 0 || slot >= 5)
        return -5;
    if (D_01DFC1A0.files[slot].busy)
        return -8;
    func_004EA390(slot, buf);
    D_01DFC1A0.opSlot = slot;
    func_004EAB20(func_004EC470);
    return 1;
}

/* total size of a slot's save buffer */
int func_004EA2E0(int slot) {
    int size = 0;
    McFile *f;
    if (slot < 0 || slot >= 5)
        return -5;
    f = &D_01DFC1A0.files[slot];
    if (f->busy == -1)
        return -3;
    if (f->busy)
        return -8;
    size += f->hdrSize + 4;
    size += (f->entrySize + 4) * f->count;
    size += f->dataSize + 4;
    size += f->count * 12;
    return size;
}

/* lay out a save buffer: entry table, header, entries, data (each + checksum) */
int func_004EA390(int slot, char *buf) {
    McWork *w = &D_01DFC1A0.work;
    McFile *f;
    McEntry *e;
    int i;
    if (slot < 0 || slot >= 5)
        return -5;
    f = &D_01DFC1A0.files[slot];
    if (f->busy == -1)
        return -3;
    if (f->busy)
        return -8;
    w->base = buf;
    w->entries = (McEntry *)buf;
    buf += f->count * 12;
    w->header = buf;
    buf += f->hdrSize;
    w->headerSum = buf;
    buf += 4;
    e = w->entries;
    for (i = 0; i < f->count; i++) {
        e->data = buf;
        buf += f->entrySize;
        e->sum = buf;
        buf += 4;
        e++;
    }
    w->data = buf;
    buf += f->dataSize;
    w->dataSum = buf;
    w->slot = slot;
    return 1;
}

/* 16-bit one's-complement checksum of buf[0..len+4), stored at buf+len+2 */
static void func_004EAC10(unsigned short *buf, int len) {
    char *end = (char *)buf + len;
    unsigned int sum = 0;
    len += 4;
    *(unsigned short *)(end + 2) = 0;
    for (; len > 1; len -= 2)
        sum += *buf++;
    if (len > 0)
        sum += *buf & 0xFF00;
    sum = (sum & 0xFFFF) + (sum >> 16);
    sum = ((sum >> 16) + (sum & 0xFFFF)) & 0xFFFF;
    *(unsigned short *)(end + 2) = ~sum;
}

/* register the system slot (only slot 0); sizes are rounded up to 4 bytes */
int func_004EA120(int slot, const char *name, int count, int hdrSize, int entrySize, int dataSize) {
    McFile *f;
    if (slot < 0 || slot >= 1)
        return -5;
    f = &D_01DFC1A0.files[slot];
    if (f->busy != -1)
        return -6;
    func_0012B2E8(f->name, name);
    f->count = count;
    f->hdrSize = (hdrSize + 3) / 4 * 4;
    f->entrySize = (entrySize + 3) / 4 * 4;
    f->dataSize = (dataSize + 3) / 4 * 4;
    f->size = 0;
    f->size += f->hdrSize + 4;
    f->size += (f->entrySize + 4) * f->count;
    f->size += (f->dataSize + 4) * f->count;
    f->busy = 0;
    return 1;
}

/* verify a checksum written by func_004EAC10 */
static int func_004EAC90(unsigned short *buf, int len) {
    unsigned int sum = 0;
    int n = len + 4;
    for (; n > 1; n -= 2)
        sum += *buf++;
    if (n > 0)
        sum += *buf & 0xFF00;
    sum = (sum & 0xFFFF) + (sum >> 16);
    sum = ((sum >> 16) + (sum & 0xFFFF)) & 0xFFFF;
    if (sum == 0xFFFF)
        return 1;
    return 0;
}

/* clear all checksum slots of the active save buffer */
void func_004EAD20(void) {
    McFile *f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
    McEntry *e = D_01DFC1A0.work.entries;
    McWork *w = &D_01DFC1A0.work;
    int i;
    for (i = 0; i < f->count; i++) {
        e->flags = 0;
        *(unsigned short *)e->sum = 0;
        e++;
    }
    *(unsigned short *)w->headerSum = 0;
    *(unsigned short *)w->dataSum = 0;
}

void func_004ECC30(void) {
    D_01DFC1A0.errState = 0;
    D_01DFC1A0.errCode = -1;
}

static void func_004ECC50(int code) {
    D_01DFC1A0.errCode = code;
    D_01DFC1A0.errState = -1;
}

/* map an operation result to an error level shown to the player */
void func_004ECC70(int err) {
    if (err >= 0) {
        D_01DFC1A0.errLevel = 0;
        return;
    }
    switch (err) {
    case -2:
        D_01DFC1A0.errLevel = 2;
        break;
    case -3:
        D_01DFC1A0.errLevel = 3;
        break;
    case -4:
    case -5:
    case -7:
    case -8:
        D_01DFC1A0.errLevel = 5;
        break;
    default:
        D_01DFC1A0.errLevel = 1;
        break;
    }
}

/* derive a status code per port, then merge into stat/statPort by priority */
void func_004EADA0(void) {
    int code[2];
    int i;
    int c0, c1;
    code[1] = -1;
    code[0] = -1;
    for (i = 0; i < 2; i++) {
        if (!func_004EA4D0(i)) {
            if (func_004EA530(i))
                code[i] = 0x80000022;
            else
                code[i] = 0x80000005;
        } else if (!func_004EA550(i)) {
            code[i] = 0x80000008;
        } else if (func_004EA510(i)) {
            code[i] = 0x80000007;
        } else if (!func_004EA4F0(i)) {
            code[i] = 0x80000006;
        } else {
            code[i] = 0x80000008;
        }
    }
    c0 = code[0];
    c1 = code[1];
    if (c0 == c1) {
        D_01DFC1A0.stat = c0;
        D_01DFC1A0.statPort = 2;
    } else if (c0 == 0x80000022) {
        D_01DFC1A0.stat = 0x80000022;
        D_01DFC1A0.statPort = 0;
    } else if (c1 == 0x80000022) {
        D_01DFC1A0.stat = 0x80000022;
        D_01DFC1A0.statPort = 1;
    } else if (c0 == 0x80000007) {
        D_01DFC1A0.stat = 0x80000007;
        D_01DFC1A0.statPort = 0;
    } else if (c1 == 0x80000007) {
        D_01DFC1A0.stat = 0x80000007;
        D_01DFC1A0.statPort = 1;
    } else if (c0 == 0x80000008) {
        D_01DFC1A0.stat = 0x80000008;
        D_01DFC1A0.statPort = 0;
    } else if (c1 == 0x80000008) {
        D_01DFC1A0.stat = 0x80000008;
        D_01DFC1A0.statPort = 1;
    } else if (c0 == 0x80000006) {
        D_01DFC1A0.stat = 0x80000006;
        D_01DFC1A0.statPort = 0;
    } else if (c1 == 0x80000006) {
        D_01DFC1A0.stat = 0x80000006;
        D_01DFC1A0.statPort = 1;
    } else if (c0 == 0x80000005) {
        D_01DFC1A0.stat = 0x80000005;
        D_01DFC1A0.statPort = 0;
    } else {
        D_01DFC1A0.stat = 0x80000005;
        D_01DFC1A0.statPort = 1;
    }
}

/* operation state machine installed by func_004EA820 (check cards / read headers) */
void func_004EB010(void) {
    switch (D_01DFC1A0.state) {
    case 0:
        D_01DFC1A0.state++;
        D_01DFC1A0.statPort = 0;
    case 1:
        func_004ECC30();
        D_01DFC1A0.stat = 2;
        D_01DFC1A0.state++;
    case 2:
        if (func_004ECD00(D_01DFC1A0.statPort) == -1)
            break;
        if (!func_004EA4D0(D_01DFC1A0.statPort)) {
            D_01DFC1A0.state = 10;
            break;
        }
        if (D_01DFC1A0.work.slot == -1) {
            if (func_004EA550(D_01DFC1A0.statPort)) {
                if (func_004EA510(D_01DFC1A0.statPort)) {
                    if (!func_004EA530(D_01DFC1A0.statPort)) {
                        D_01DFC1A0.state = -1;
                        break;
                    } else {
                        D_01DFC1A0.state = 10;
                        break;
                    }
                } else {
                    if (func_004EA4F0(D_01DFC1A0.statPort)) {
                        D_01DFC1A0.state = -1;
                        break;
                    } else {
                        D_01DFC1A0.state = 10;
                        break;
                    }
                }
            } else {
                D_01DFC1A0.state = -1;
                break;
            }
        } else {
            if (func_004EA550(D_01DFC1A0.statPort)) {
                if (func_004EA510(D_01DFC1A0.statPort)) {
                    if (!func_004EA530(D_01DFC1A0.statPort)) {
                        D_01DFC1A0.state++;
                    } else {
                        D_01DFC1A0.state = 10;
                        break;
                    }
                } else {
                    D_01DFC1A0.state = 10;
                    break;
                }
            } else {
                D_01DFC1A0.state = 10;
                break;
            }
        }
    case 3:
        D_01DFC1A0.opOffset = 0;
        D_01DFC1A0.unk1AC = D_01DFC1A0.work.slot;
        D_01DFC1A0.opSize = D_01DFC1A0.files[D_01DFC1A0.unk1AC].hdrSize + 4;
        D_01DFC1A0.opBuf = D_01DFC1A0.work.header;
        D_01DFC1A0.stat = 3;
        func_004ECC30();
        D_01DFC1A0.state++;
    case 4:
        if (func_004ED310(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC, D_01DFC1A0.opBuf,
                          D_01DFC1A0.opOffset, D_01DFC1A0.opSize) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            if (func_004EAC90((unsigned short *)D_01DFC1A0.opBuf, D_01DFC1A0.files[D_01DFC1A0.unk1AC].hdrSize)) {
                D_01DFC1A0.stat = 0x40000004;
                func_004EAC00();
                D_01DFC1A0.state = 200;
                break;
            }
            D_01DFC1A0.unk24[D_01DFC1A0.statPort] |= 0x20;
            D_01DFC1A0.state = 10;
        } else {
            D_01DFC1A0.unk24[D_01DFC1A0.statPort] |= 0x20;
            D_01DFC1A0.state = 10;
        }
    case 10:
        D_01DFC1A0.statPort++;
        if (D_01DFC1A0.statPort < 2) {
            D_01DFC1A0.state = 1;
            break;
        }
        func_004EADA0();
        func_004EAC00();
        D_01DFC1A0.state = 100;
        break;
    case 100:
        func_004ECC30();
        D_01DFC1A0.retry = 0;
        D_01DFC1A0.state++;
    case 101:
        if (func_004ED180(D_01DFC1A0.retry) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            if (D_01DFC1A0.unk1C8 == 0) {
                func_004EAB40();
                break;
            }
            if (D_01DFC1A0.unk1C8 == 1) {
                D_01DFC1A0.stat = 1;
                D_01DFC1A0.state = 0;
                break;
            }
            D_01DFC1A0.retry++;
            if (D_01DFC1A0.retry >= 2)
                D_01DFC1A0.retry = 0;
            func_004ECC30();
            break;
        }
        D_01DFC1A0.state = 0;
        D_01DFC1A0.stat = 1;
        break;
    case 200:
        if (D_01DFC1A0.unk1C8 == 2)
            func_004EAB40();
        break;
    default:
        func_004EAB40();
        break;
    }
}

/* async card-info query; returns errCode once done (errState -1) */
int func_004ED180(int port) {
    switch (D_01DFC1A0.errState) {
    case 0:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        D_01DFC1A0.errState++;
    case 1:
        if (func_001241D8(port, 0, &D_01DFC1A0.mcType, &D_01DFC1A0.mcFree, &D_01DFC1A0.mcFormat))
            break;
        D_01DFC1A0.errState++;
    case 2:
        if (func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult) == 1) {
            if (D_01DFC1A0.mcResult == 0) {
                D_01DFC1A0.errCode = 0;
            } else if (D_01DFC1A0.mcResult == -1 || D_01DFC1A0.mcResult == -2) {
                if (D_01DFC1A0.mcType == 2)
                    D_01DFC1A0.errCode = 3;
                else
                    D_01DFC1A0.errCode = 0;
            } else if (func_004EA4D0(port)) {
                D_01DFC1A0.errCode = 4;
            } else {
                D_01DFC1A0.errCode = 0;
            }
            D_01DFC1A0.errState = -1;
        }
        break;
    }
    return D_01DFC1A0.errCode;
}

/* async: create the save directory "/<name>" on the card in port */
int func_004EDC70(int port) {
    char path[32];
    switch (D_01DFC1A0.errState) {
    case 0:
        if (!func_004EA4D0(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 1;
            break;
        }
        if (!func_004EA550(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 2;
            break;
        }
        D_01DFC1A0.unk19C = 0;
        D_01DFC1A0.errState++;
    case 1:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        D_01DFC1A0.errState++;
    case 2:
        func_004EF400(path, D_005BDFF0, D_01DFC1A0.name);
        if (func_00123BB8(port, 0, path))
            break;
        D_01DFC1A0.errState++;
    case 3:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == 0) {
            func_004ECC50(0);
            break;
        }
        func_004ECC50(1);
        func_004ECC70(D_01DFC1A0.mcResult);
        break;
    }
    return D_01DFC1A0.errCode;
}

/* async: write files[slot]'s data block to "/<dir>/<file>" on the card in port */
int func_004EDE10(int port, int slot) {
    char path[64];
    McFile *f = &D_01DFC1A0.files[slot];
    switch (D_01DFC1A0.errState) {
    case 0:
        if (!func_004EA4D0(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 1;
            break;
        }
        if (!func_004EA550(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 2;
            break;
        }
        D_01DFC1A0.unk19C = 0;
        D_01DFC1A0.errState++;
    case 1:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        D_01DFC1A0.errState++;
    case 2:
        func_004EF400(path, D_005BDFE8, D_01DFC1A0.name, f->name);
        if (func_00123A90(port, 0, path, 0x202))
            break;
        D_01DFC1A0.errState++;
    case 3:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.fd = D_01DFC1A0.mcResult;
            D_01DFC1A0.opBuf = (char *)f->unk3C;
            D_01DFC1A0.opSize = f->size;
            D_01DFC1A0.errState++;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            break;
        }
    case 4:
        if (func_00123F40(D_01DFC1A0.fd, (void *)D_01DFC1A0.opBuf, D_01DFC1A0.opSize))
            break;
        D_01DFC1A0.errState++;
    case 5:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == D_01DFC1A0.opSize) {
            f->flags |= 1;
            D_01DFC1A0.errState++;
        } else if (D_01DFC1A0.mcResult >= 0) {
            if (D_01DFC1A0.opSize < D_01DFC1A0.mcResult)
                f->flags |= 3;
            else
                f->flags |= 5;
            D_01DFC1A0.unk19C = 1;
            D_01DFC1A0.errState++;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            break;
        }
    case 6:
        if (func_00123BF0(D_01DFC1A0.fd))
            break;
        D_01DFC1A0.errState++;
    case 7:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == 0) {
            if (D_01DFC1A0.unk19C == 0) {
                func_004ECC50(0);
                D_01DFC1A0.errLevel = 0;
            } else {
                func_004ECC50(2);
                D_01DFC1A0.errLevel = 4;
            }
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
        }
        break;
    }
    return D_01DFC1A0.errCode;
}

/* async: read size bytes at offset of files[slot] into buf */
int func_004ED310(int port, int slot, void *buf, int offset, int size) {
    char path[64];
    McFile *f = &D_01DFC1A0.files[slot];
    switch (D_01DFC1A0.errState) {
    case 0:
        if (!func_004EA4D0(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 1;
            break;
        }
        if (!func_004EA510(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 5;
            break;
        }
        if (!func_004EA570(slot)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 5;
            break;
        }
        if (func_004EA590(slot)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 4;
            break;
        }
        D_01DFC1A0.unk19C = 0;
        D_01DFC1A0.errState++;
    case 1:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        D_01DFC1A0.errState++;
    case 2:
        func_004EF400(path, D_005BDFE8, D_01DFC1A0.name, f->name);
        if (func_00123A90(port, 0, path, 1))
            break;
        D_01DFC1A0.errState++;
    case 3:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.fd = D_01DFC1A0.mcResult;
            D_01DFC1A0.errState++;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            if (D_01DFC1A0.mcResult < -10)
                { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; *p = 0; }
            break;
        }
    case 4:
        if (func_00123CB0(D_01DFC1A0.fd, offset, 0))
            break;
        D_01DFC1A0.errState++;
    case 5:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == offset) {
            D_01DFC1A0.errState++;
        } else if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.unk19C = 1;
            D_01DFC1A0.errState = 8;
            break;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            if (D_01DFC1A0.mcResult < -10)
                { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; *p = 0; }
            break;
        }
    case 6:
        if (func_00123E28(D_01DFC1A0.fd, buf, size))
            break;
        D_01DFC1A0.errState++;
    case 7:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == size) {
            D_01DFC1A0.errState++;
        } else if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.unk19C = 1;
            D_01DFC1A0.errState++;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            if (D_01DFC1A0.mcResult < -10)
                { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; *p = 0; }
            break;
        }
    case 8:
        if (func_00123BF0(D_01DFC1A0.fd))
            break;
        D_01DFC1A0.errState++;
    case 9:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == 0) {
            if (D_01DFC1A0.unk19C == 0) {
                func_004ECC50(0);
                D_01DFC1A0.errLevel = 0;
            } else {
                func_004ECC50(2);
                D_01DFC1A0.errLevel = 4;
            }
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            if (D_01DFC1A0.mcResult < -10)
                { McState *m = &D_01DFC1A0; int *p = &m->unk24[port]; *p = 0; }
        }
        break;
    }
    return D_01DFC1A0.errCode;
}

/* async: write size bytes from buf at offset of files[slot] */
int func_004ED800(int port, int slot, void *buf, int offset, int size) {
    char path[64];
    McFile *f = &D_01DFC1A0.files[slot];
    switch (D_01DFC1A0.errState) {
    case 0:
        if (!func_004EA4D0(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 1;
            break;
        }
        if (!func_004EA510(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 5;
            break;
        }
        if (!func_004EA570(slot)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 5;
            break;
        }
        if (func_004EA590(slot)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 4;
            break;
        }
        D_01DFC1A0.unk19C = 0;
        D_01DFC1A0.errState++;
    case 1:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        D_01DFC1A0.errState++;
    case 2:
        func_004EF400(path, D_005BDFE8, D_01DFC1A0.name, f->name);
        if (func_00123A90(port, 0, path, 2))
            break;
        D_01DFC1A0.errState++;
    case 3:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.fd = D_01DFC1A0.mcResult;
            D_01DFC1A0.errState++;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            break;
        }
    case 4:
        if (func_00123CB0(D_01DFC1A0.fd, offset, 0))
            break;
        D_01DFC1A0.errState++;
    case 5:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == offset) {
            D_01DFC1A0.errState++;
        } else if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.unk19C = 1;
            D_01DFC1A0.errState = 8;
            break;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            break;
        }
    case 6:
        if (func_00123F40(D_01DFC1A0.fd, buf, size))
            break;
        D_01DFC1A0.errState++;
    case 7:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == size) {
            D_01DFC1A0.errState++;
        } else if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.unk19C = 1;
            D_01DFC1A0.errState++;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            break;
        }
    case 8:
        if (func_00123BF0(D_01DFC1A0.fd))
            break;
        D_01DFC1A0.errState++;
    case 9:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == 0) {
            if (D_01DFC1A0.unk19C == 0) {
                func_004ECC50(0);
                D_01DFC1A0.errLevel = 0;
            } else {
                func_004ECC50(2);
                D_01DFC1A0.errLevel = 4;
            }
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
        }
        break;
    }
    return D_01DFC1A0.errCode;
}

/* async: scan the card in port: info, free space, and which save files exist */
int func_004ECD00(int port) {
    char path[32];
    unsigned int *pf = (unsigned int *)&D_01DFC1A0.unk24[port];
    McFile *f;
    int i;
    int free;
    int need;
    switch (D_01DFC1A0.errState) {
    case 0:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        D_01DFC1A0.infoRetry = 0;
        *pf = 0;
        f = D_01DFC1A0.files;
        do {
            f->flags = 0;
            f++;
        } while (f < &D_01DFC1A0.files[5]);
        D_01DFC1A0.errState++;
    case 1:
        if (func_001241D8(port, 0, &D_01DFC1A0.mcType, &D_01DFC1A0.mcFree, &D_01DFC1A0.mcFormat))
            break;
        D_01DFC1A0.errState++;
    case 2:
        if (func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult) != 1)
            break;
        if ((unsigned int)(D_01DFC1A0.mcResult + 1) <= 1 || D_01DFC1A0.mcResult == -2) {
            if (D_01DFC1A0.mcType == 2) {
                *pf |= 1;
                if (D_01DFC1A0.mcFormat) {
                    *pf |= 0x10;
                    free = D_01DFC1A0.mcFree;
                    need = func_004E9D10();
                    if (free >= need)
                        *pf |= 2;
                    if (D_01DFC1A0.mcResult == -1)
                        *pf |= 8;
                    D_01DFC1A0.errState++;
                } else {
                    if (D_01DFC1A0.mcResult == -2)
                        *pf |= 8;
                    func_004ECC50(0);
                    break;
                }
            } else {
                func_004ECC50(0);
                break;
            }
        } else {
            D_01DFC1A0.infoRetry++;
            if (D_01DFC1A0.infoRetry < 10) {
                D_01DFC1A0.errState--;
                break;
            }
            func_004ECC50(0);
            break;
        }
    case 3:
        func_004EF400(path, D_005BDFE0, D_01DFC1A0.name);
        if (func_001243C8(port, 0, path, 0, 7, D_01DFC380))
            break;
        D_01DFC1A0.errState++;
    case 4:
        if (func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult) != 1)
            break;
        if (D_01DFC1A0.mcResult >= 0) {
            f = D_01DFC1A0.files;
            *pf |= 4;
            do {
                for (i = 0; i < D_01DFC1A0.mcResult; i++) {
                    if (func_0012B1A0(f->name, D_01DFC380[i].name) == 0) {
                        unsigned int sz;
                        f->flags |= 1;
                        sz = D_01DFC380[i].size;
                        if ((unsigned int)f->size < sz)
                            f->flags |= 2;
                        else if (sz < (unsigned int)f->size)
                            f->flags |= 4;
                        if (f->flags & 6)
                            *pf |= 0x20;
                        break;
                    }
                }
                if (!(f->flags & 1))
                    *pf |= 0x20;
                f++;
            } while (f < &D_01DFC1A0.files[5]);
        } else if (D_01DFC1A0.mcResult == -2 || D_01DFC1A0.mcResult < -10) {
            D_01DFC1A0.errState = 0;
            break;
        }
        func_004ECC50(0);
        break;
    }
    return D_01DFC1A0.errCode;
}

/* load operation state machine (installed by func_004EA9E0) */
void func_004EC470(void) {
    McFile *f;
    McEntry *e;
    int i;
    switch (D_01DFC1A0.state) {
    case 0:
        D_01DFC1A0.statPort = -1;
        func_004EAC00();
        D_01DFC1A0.stat = 0x20000009;
        D_01DFC1A0.state++;
    case 1:
        if (D_01DFC1A0.unk1C8 == -1)
            break;
        if (D_01DFC1A0.unk1C8 == -2) {
            D_01DFC1A0.state = -1;
            break;
        }
        D_01DFC1A0.statPort = D_01DFC1A0.unk1C8;
        func_004EAD20();
        func_004ECC30();
        D_01DFC1A0.stat = 2;
        D_01DFC1A0.state++;
    case 2:
        if (func_004ECD00(D_01DFC1A0.statPort) == -1)
            break;
        if (!func_004EA4D0(D_01DFC1A0.statPort)) {
            D_01DFC1A0.stat = 0x4000000A;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
        if (!func_004EA550(D_01DFC1A0.statPort)) {
            D_01DFC1A0.stat = 0x4000001D;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
        if (!func_004EA510(D_01DFC1A0.statPort)) {
            D_01DFC1A0.stat = 0x4000001D;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
        if (func_004EA530(D_01DFC1A0.statPort)) {
            D_01DFC1A0.stat = 0x4000001B;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
        D_01DFC1A0.state = 10;
        break;
    case 10:
        D_01DFC1A0.stat = 0x12;
        D_01DFC1A0.unk1AC = D_01DFC1A0.work.slot;
        f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
        D_01DFC1A0.opOffset = f->hdrSize + 4;
        D_01DFC1A0.opSize = (f->entrySize + 4) * f->count;
        D_01DFC1A0.opBuf = D_01DFC1A0.work.entries->data;
        func_004ECC30();
        D_01DFC1A0.state++;
    case 11:
        if (func_004ED310(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC, (void *)D_01DFC1A0.opBuf,
                          D_01DFC1A0.opOffset, D_01DFC1A0.opSize) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
            e = D_01DFC1A0.work.entries;
            for (i = 0; i < f->count; i++) {
                e->flags = 0;
                if (func_004EAC90((unsigned short *)e->data, f->entrySize)) {
                    if (*(unsigned short *)e->sum != 0)
                        e->flags |= 1;
                } else {
                    e->flags |= 3;
                    *(unsigned short *)e->sum = 2;
                }
                e++;
            }
            D_01DFC1A0.state = 20;
        } else {
            D_01DFC1A0.stat = 0x48000013;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 20:
        D_01DFC1A0.stat = 0x10000014;
        D_01DFC1A0.unk1AC = D_01DFC1A0.work.slot;
        func_004EAC00();
        func_004ECC30();
        D_01DFC1A0.state++;
    case 21:
        if (func_004ED180(D_01DFC1A0.statPort) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            if (D_01DFC1A0.unk1C8 == -1) {
                func_004ECC30();
                break;
            }
            if (D_01DFC1A0.unk1C8 == -2) {
                D_01DFC1A0.state = 0;
                break;
            }
            if (func_004EA5B0(D_01DFC1A0.unk1C8) && !func_004EA5E0(D_01DFC1A0.unk1C8)) {
                D_01DFC1A0.entryIdx = D_01DFC1A0.unk1C8;
                D_01DFC1A0.stat = 0x8000001E;
                func_004EAC00();
                func_004ECC30();
                D_01DFC1A0.state++;
            } else {
                func_004EAC00();
                func_004ECC30();
                break;
            }
        } else {
            D_01DFC1A0.stat = 0x4000000A;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 22:
        if (func_004ED180(D_01DFC1A0.statPort) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            if (D_01DFC1A0.unk1C8 == -1) {
                func_004ECC30();
                break;
            }
            if (D_01DFC1A0.unk1C8 == 0) {
                D_01DFC1A0.state = 30;
            } else {
                D_01DFC1A0.state = 20;
                break;
            }
        } else {
            D_01DFC1A0.stat = 0x4000000A;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 30:
        D_01DFC1A0.unk1AC = D_01DFC1A0.work.slot;
        f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
        D_01DFC1A0.opOffset = f->hdrSize + 4 + (f->entrySize + 4) * f->count + (f->dataSize + 4) * D_01DFC1A0.entryIdx;
        D_01DFC1A0.opSize = f->dataSize + 4;
        D_01DFC1A0.opBuf = D_01DFC1A0.work.data;
        D_01DFC1A0.stat = 0x20;
        func_004ECC30();
        D_01DFC1A0.state++;
    case 31:
        if (func_004ED310(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC, (void *)D_01DFC1A0.opBuf,
                          D_01DFC1A0.opOffset, D_01DFC1A0.opSize) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            e = &D_01DFC1A0.work.entries[D_01DFC1A0.entryIdx];
            f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
            if (func_004EAC90((unsigned short *)D_01DFC1A0.opBuf, f->dataSize)) {
                D_01DFC1A0.stat = 0x4000001F;
                D_01DFC1A0.state = 200;
            } else {
                e->flags |= 2;
                D_01DFC1A0.stat = 0x4000001C;
                D_01DFC1A0.state = 100;
            }
        } else {
            D_01DFC1A0.stat = 0x48000021;
            D_01DFC1A0.state = 100;
        }
        func_004EAC00();
        break;
    case 100:
        if (D_01DFC1A0.unk1C8 == 2)
            D_01DFC1A0.state = 0;
        break;
    case 200:
        if (D_01DFC1A0.unk1C8 == 2)
            func_004EAB40();
        break;
    default:
        func_004EAB40();
        break;
    }
}

/* async: format the card in port */
int func_004EE6F0(int port) {
    unsigned int *pf = (unsigned int *)&D_01DFC1A0.unk24[port];
    switch (D_01DFC1A0.errState) {
    case 0:
        if (!func_004EA4D0(port) || func_004EA550(port)) {
            func_004ECC50(4);
            break;
        }
        D_01DFC1A0.unk19C = 0;
        D_01DFC1A0.errState++;
    case 1:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        D_01DFC1A0.errState++;
    case 2:
        if (func_001246E8(port, 0))
            break;
        D_01DFC1A0.errState++;
    case 3:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == 0) {
            *pf |= 0x10;
            func_004ECC50(0);
        } else {
            func_004ECC50(1);
        }
        break;
    }
    return D_01DFC1A0.errCode;
}

/* async: create files[slot] and write header + entry table, then the data block
 * once per entry (initialises a new save file) */
int func_004EE1B0(int port, int slot) {
    char path[64];
    McFile *f = &D_01DFC1A0.files[slot];
    McWork *w = &D_01DFC1A0.work;
    McEntry *e;
    int i;
    switch (D_01DFC1A0.errState) {
    case 0:
        if (!func_004EA4D0(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 1;
            break;
        }
        if (!func_004EA550(port)) {
            func_004ECC50(4);
            D_01DFC1A0.errLevel = 2;
            break;
        }
        D_01DFC1A0.unk19C = 0;
        D_01DFC1A0.errState++;
    case 1:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        D_01DFC1A0.errState++;
    case 2:
        func_004EF400(path, D_005BDFE8, D_01DFC1A0.name, f->name);
        if (func_00123A90(port, 0, path, 0x202))
            break;
        D_01DFC1A0.errState++;
    case 3:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.fd = D_01DFC1A0.mcResult;
            D_01DFC1A0.errState++;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            break;
        }
    case 4:
        D_01DFC1A0.opSize = 0;
        D_01DFC1A0.entryIdx = -1;
        func_004EAC10((unsigned short *)w->header, f->hdrSize);
        D_01DFC1A0.opSize += f->hdrSize + 4;
        e = w->entries;
        for (i = 0; i < f->count; i++) {
            func_004EAC10((unsigned short *)e->data, f->entrySize);
            e++;
        }
        D_01DFC1A0.opSize += (f->entrySize + 4) * f->count;
        func_004EAC10((unsigned short *)w->data, f->dataSize);
        D_01DFC1A0.opBuf = w->header;
        D_01DFC1A0.opOffset = 0;
        D_01DFC1A0.errState++;
    case 5:
        if (func_00123CB0(D_01DFC1A0.fd, D_01DFC1A0.opOffset, 0))
            break;
        D_01DFC1A0.errState++;
    case 6:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.errState++;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            break;
        }
    case 7:
        if (func_00123F40(D_01DFC1A0.fd, D_01DFC1A0.opBuf, D_01DFC1A0.opSize))
            break;
        D_01DFC1A0.errState++;
    case 8:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == D_01DFC1A0.opSize) {
            D_01DFC1A0.errState++;
        } else if (D_01DFC1A0.mcResult >= 0) {
            D_01DFC1A0.unk19C = 1;
            D_01DFC1A0.errState = 10;
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
            break;
        }
    case 9:
        D_01DFC1A0.entryIdx++;
        if (D_01DFC1A0.entryIdx < f->count) {
            D_01DFC1A0.opBuf = w->data;
            D_01DFC1A0.opOffset += D_01DFC1A0.opSize;
            D_01DFC1A0.opSize = f->dataSize + 4;
            D_01DFC1A0.errState = 5;
            break;
        }
        D_01DFC1A0.errState++;
    case 10:
        if (func_00123BF0(D_01DFC1A0.fd))
            break;
        D_01DFC1A0.errState++;
    case 11:
        if (!func_001240B8(1, &D_01DFC1A0.mcCmd, &D_01DFC1A0.mcResult))
            break;
        if (D_01DFC1A0.mcResult == 0) {
            if (D_01DFC1A0.unk19C == 0) {
                func_004ECC50(0);
                D_01DFC1A0.errLevel = 0;
            } else {
                func_004ECC50(2);
                D_01DFC1A0.errLevel = 4;
            }
        } else {
            func_004ECC50(1);
            func_004ECC70(D_01DFC1A0.mcResult);
        }
        break;
    }
    return D_01DFC1A0.errCode;
}

extern char *func_004EEB00(char *buf, const char *fmt, va_list ap);   /* vsprintf, returns end */

/* sprintf: returns the number of characters written */
int func_004EF400(char *buf, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    return func_004EEB00(buf, fmt, ap) - buf - 1;
}

/* save operation state machine (installed by func_004EA900) */
void func_004EB510(void) {
    McWork *w = &D_01DFC1A0.work;
    McFile *f;
    McEntry *e;
    int i;
    switch (D_01DFC1A0.state) {
    case 0:
        D_01DFC1A0.statPort = -1;
        func_004EAC00();
        D_01DFC1A0.stat = 0x20000009;
        D_01DFC1A0.state++;
    case 1:
        if (D_01DFC1A0.unk1C8 == -1)
            break;
        if (D_01DFC1A0.unk1C8 == -2) {
            D_01DFC1A0.state = -1;
            break;
        }
        D_01DFC1A0.statPort = D_01DFC1A0.unk1C8;
        func_004EAD20();
        func_004ECC30();
        D_01DFC1A0.stat = 2;
        D_01DFC1A0.state++;
    case 2:
        if (func_004ECD00(D_01DFC1A0.statPort) == -1)
            break;
        if (!func_004EA4D0(D_01DFC1A0.statPort)) {
            D_01DFC1A0.stat = 0x4000000A;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
        if (!func_004EA550(D_01DFC1A0.statPort)) {
            D_01DFC1A0.state++;
        } else if (!func_004EA510(D_01DFC1A0.statPort)) {
            if (func_004EA4F0(D_01DFC1A0.statPort)) {
                D_01DFC1A0.state++;
            } else {
                D_01DFC1A0.stat = 0x4000001A;
                func_004EAC00();
                D_01DFC1A0.state = 100;
                break;
            }
        } else if (func_004EA530(D_01DFC1A0.statPort)) {
            D_01DFC1A0.stat = 0x4000001B;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        } else {
            D_01DFC1A0.state = 10;
            break;
        }
    case 3:
        D_01DFC1A0.stat = 0x8000000E;
        func_004EAC00();
        func_004ECC30();
        D_01DFC1A0.state++;
    case 4:
        if (func_004ED180(D_01DFC1A0.statPort) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            if (D_01DFC1A0.unk1C8 == 0) {
                func_004EAD20();
                D_01DFC1A0.state = 20;
                break;
            }
            if (D_01DFC1A0.unk1C8 == 1) {
                D_01DFC1A0.state = 0;
                break;
            }
            func_004ECC30();
            break;
        } else {
            D_01DFC1A0.stat = 0x4000000A;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 10:
        D_01DFC1A0.stat = 0x12;
        D_01DFC1A0.unk1AC = D_01DFC1A0.work.slot;
        f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
        D_01DFC1A0.opOffset = f->hdrSize + 4;
        D_01DFC1A0.opSize = (f->entrySize + 4) * f->count;
        D_01DFC1A0.opBuf = D_01DFC1A0.work.entries->data;
        func_004ECC30();
        D_01DFC1A0.state++;
    case 11:
        if (func_004ED310(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC, (void *)D_01DFC1A0.opBuf,
                          D_01DFC1A0.opOffset, D_01DFC1A0.opSize) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
            e = D_01DFC1A0.work.entries;
            for (i = 0; i < f->count; i++) {
                e->flags = 0;
                if (func_004EAC90((unsigned short *)e->data, f->entrySize)) {
                    if (*(unsigned short *)e->sum != 0)
                        e->flags |= 1;
                } else {
                    e->flags |= 3;
                    *(unsigned short *)e->sum = 2;
                }
                e++;
            }
            D_01DFC1A0.state = 20;
        } else {
            D_01DFC1A0.stat = 0x48000013;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 20:
        D_01DFC1A0.stat = 0x10000014;
        D_01DFC1A0.unk1AC = D_01DFC1A0.work.slot;
        func_004EAC00();
        func_004ECC30();
        D_01DFC1A0.state++;
    case 21:
        if (func_004ED180(D_01DFC1A0.statPort) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            if (D_01DFC1A0.unk1C8 == -1) {
                func_004ECC30();
                break;
            }
            if (D_01DFC1A0.unk1C8 == -2) {
                D_01DFC1A0.state = 0;
                break;
            }
            D_01DFC1A0.entryIdx = D_01DFC1A0.unk1C8;
            if (func_004EA5B0(D_01DFC1A0.entryIdx))
                D_01DFC1A0.stat = 0x80000016;
            else
                D_01DFC1A0.stat = 0x80000015;
            func_004EAC00();
            func_004ECC30();
            D_01DFC1A0.state++;
        } else {
            D_01DFC1A0.stat = 0x4000000A;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 22:
        if (func_004ED180(D_01DFC1A0.statPort) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            if (D_01DFC1A0.unk1C8 == -1) {
                func_004ECC30();
                break;
            }
            if (D_01DFC1A0.unk1C8 == 0) {
                if (!func_004EA550(D_01DFC1A0.statPort)) {
                    D_01DFC1A0.state = 30;
                    break;
                }
                if (!func_004EA510(D_01DFC1A0.statPort)) {
                    D_01DFC1A0.state = 40;
                    break;
                }
                D_01DFC1A0.state = 50;
                break;
            }
            D_01DFC1A0.state = 20;
            break;
        } else {
            D_01DFC1A0.stat = 0x4000000A;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 30:
        D_01DFC1A0.stat = 0x8000000B;
        func_004EAC00();
        func_004ECC30();
        D_01DFC1A0.state++;
    case 31:
        if (func_004ED180(D_01DFC1A0.statPort) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            if (D_01DFC1A0.unk1C8 == -1) {
                func_004ECC30();
                break;
            }
            if (D_01DFC1A0.unk1C8 == 0) {
                D_01DFC1A0.state++;
            } else {
                D_01DFC1A0.state = 0;
                break;
            }
        } else {
            D_01DFC1A0.stat = 0x4000000A;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 32:
        func_004ECC30();
        D_01DFC1A0.stat = 0xC;
        D_01DFC1A0.state++;
    case 33:
        if (func_004EE6F0(D_01DFC1A0.statPort) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            D_01DFC1A0.state = 40;
            break;
        }
        D_01DFC1A0.stat = 0x4000000D;
        func_004EAC00();
        D_01DFC1A0.state = 100;
        break;
    case 40:
        D_01DFC1A0.stat = 0xF;
        func_004ECC30();
        D_01DFC1A0.state++;
    case 41:
        if (func_004EDC70(D_01DFC1A0.statPort) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            D_01DFC1A0.unk1AC = 0;
            D_01DFC1A0.state++;
        } else {
            D_01DFC1A0.stat = 0x48000010;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 42:
        f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
        if (f->busy) {
            if (f->unk3C == 0) {
                D_01DFC1A0.stat = 0x11;
                break;
            }
        } else {
            if (D_01DFC1A0.work.slot != D_01DFC1A0.unk1AC) {
                D_01DFC1A0.stat = 0x11;
                break;
            }
            if (D_01DFC1A0.work.slot == D_01DFC1A0.opSlot) {
                *(unsigned short *)w->headerSum = 1;
                *(unsigned short *)w->dataSum = 1;
                e = w->entries;
                for (i = 0; i < f->count; i++) {
                    if (i == D_01DFC1A0.entryIdx)
                        *(unsigned short *)e->sum = 1;
                    else
                        *(unsigned short *)e->sum = 0;
                    e++;
                }
            } else {
                *(unsigned short *)w->headerSum = 0;
                *(unsigned short *)w->dataSum = 0;
                e = w->entries;
                for (i = 0; i < f->count; i++) {
                    *(unsigned short *)e->sum = 0;
                    e++;
                }
            }
        }
        D_01DFC1A0.stat = 0xF;
        func_004ECC30();
        D_01DFC1A0.state++;
    case 43:
        f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
        if (f->busy)
            func_004EDE10(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC);
        else
            func_004EE1B0(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC);
        if (D_01DFC1A0.errCode == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            f->flags = 1;
            D_01DFC1A0.unk1AC++;
            if (D_01DFC1A0.unk1AC < 5) {
                func_004ECC30();
                D_01DFC1A0.state = 42;
                break;
            }
            D_01DFC1A0.unk24[D_01DFC1A0.statPort] |= 4;
            D_01DFC1A0.stat = 0x40000019;
            func_004EAC00();
            D_01DFC1A0.state = 200;
            break;
        } else {
            D_01DFC1A0.stat = 0x48000010;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 50:
        D_01DFC1A0.unk1AC = D_01DFC1A0.work.slot;
        f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
        *(unsigned short *)D_01DFC1A0.work.headerSum = 1;
        func_004EAC10((unsigned short *)D_01DFC1A0.work.header, f->hdrSize);
        D_01DFC1A0.opOffset = 0;
        D_01DFC1A0.opSize = f->hdrSize + 4;
        D_01DFC1A0.opBuf = D_01DFC1A0.work.header;
        D_01DFC1A0.stat = 0x17;
        func_004ECC30();
        D_01DFC1A0.state++;
    case 51:
        if (func_004ED800(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC, D_01DFC1A0.opBuf,
                          D_01DFC1A0.opOffset, D_01DFC1A0.opSize) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
            *(unsigned short *)D_01DFC1A0.work.dataSum = 1;
            func_004EAC10((unsigned short *)D_01DFC1A0.work.data, f->dataSize);
            D_01DFC1A0.opOffset = f->hdrSize + 4 + (f->entrySize + 4) * f->count + (f->dataSize + 4) * D_01DFC1A0.entryIdx;
            D_01DFC1A0.opSize = f->dataSize + 4;
            D_01DFC1A0.opBuf = D_01DFC1A0.work.data;
            func_004ECC30();
            D_01DFC1A0.state++;
        } else {
            D_01DFC1A0.stat = 0x48000018;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 52:
        if (func_004ED800(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC, D_01DFC1A0.opBuf,
                          D_01DFC1A0.opOffset, D_01DFC1A0.opSize) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            f = &D_01DFC1A0.files[D_01DFC1A0.unk1AC];
            e = &D_01DFC1A0.work.entries[D_01DFC1A0.entryIdx];
            *(unsigned short *)e->sum = 1;
            func_004EAC10((unsigned short *)e->data, f->entrySize);
            D_01DFC1A0.opOffset = f->hdrSize + 4 + (f->entrySize + 4) * D_01DFC1A0.entryIdx;
            D_01DFC1A0.opSize = f->entrySize + 4;
            D_01DFC1A0.opBuf = e->data;
            func_004ECC30();
            D_01DFC1A0.state++;
        } else {
            D_01DFC1A0.stat = 0x48000018;
            func_004EAC00();
            D_01DFC1A0.state = 100;
            break;
        }
    case 53:
        if (func_004ED800(D_01DFC1A0.statPort, D_01DFC1A0.unk1AC, D_01DFC1A0.opBuf,
                          D_01DFC1A0.opOffset, D_01DFC1A0.opSize) == -1)
            break;
        if (D_01DFC1A0.errCode == 0) {
            D_01DFC1A0.stat = 0x40000019;
            func_004EAC00();
            D_01DFC1A0.state = 200;
        } else {
            D_01DFC1A0.stat = 0x48000018;
            func_004EAC00();
            D_01DFC1A0.state = 100;
        }
        break;
    case 100:
        if (D_01DFC1A0.unk1C8 == 2)
            D_01DFC1A0.state = 0;
        break;
    case 200:
        if (D_01DFC1A0.unk1C8 == 2)
            func_004EAB40();
        break;
    default:
        func_004EAB40();
        break;
    }
}
