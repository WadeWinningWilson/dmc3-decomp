/*
 * Game-side DVD / AFS archive setup (USA 0x001AA840-0x001AAACC).
 * Calls into CRI ADX's file layer (ADXF); the CRI function identities in
 * comments are inferred from CRI's public API shape and the strings used,
 * not yet verified against CRI headers.
 * Data is referenced by its existing symbols until .data is split per TU.
 */
typedef struct { char *rootdir; int unk4, unk8, unkC, unk10; } DvdFsPrm;   /* 0x14 */
typedef struct { char *flist; int max_files; void *work; int work_size; } FlistPrm; /* 0x10 */

typedef struct {
    char ptinfo_gdata[0x3948];  /* partition 0: GData.afs */
    char ptinfo_sdata[0x334];   /* partition 1: SData.afs */
    char ptinfo_mdata[0x18C];   /* partition 2: MData.afs */
    char unk3E08[0x10];
    DvdFsPrm dvd;               /* 0x3E18 */
    char unk3E2C[0x10];
    FlistPrm fl;                /* 0x3E3C */
} FsOwner;

#define PTSTAT_READEND 3

extern int func_00129690(const char *fmt, ...);            /* printf */
extern void *func_00128488(void *p, int c, unsigned int n); /* memset */
extern void *func_00127700(int size);                       /* malloc */
extern void func_001035E0(int, int);
extern void func_0014E3C0(DvdFsPrm *prm);                   /* CRI: setup DVD fs */
extern void func_0014E4C0(FlistPrm *prm);                   /* CRI: load file list */
extern void func_00148080(int);                             /* CRI */
extern void func_00146A30(void);                            /* ADXF_Init? */
extern void func_00144D40(int ptid, char *fname, void *dir, void *ptinfo); /* ADXF_LoadPartitionNw? */
extern int func_001451C8(int ptid);                         /* ADXF_GetPtStat? */
extern void func_00148958(void);                            /* CRI server tick */
extern void func_001AAAD0(FsOwner *self);                   /* forwards to Sofdec server */
extern void func_00197D10(void *);
extern void func_00197DA0(void *);
extern void func_00148940(int);
extern int func_001156A8(void *module, int arglen, char *args, int *result); /* IOP module load */

extern char D_0053FA10[];   /* "Setup DVD file system.\n" */
extern char D_005BB928[2];  /* "\\" (.sdata) */
extern char D_0053FA28[];   /* "0flist.dir" */
extern char D_0053F9E0[];   /* "SData.afs" */
extern char D_0053F9F0[];   /* "GData.afs" */
extern char D_0053FA00[];   /* "MData.afs" */
extern char D_00654430[];
extern char D_0053F9C0[];   /* "thpri=39" */

void func_001AAA00(FsOwner *s, int unused1, int unused2);
void *func_001AAAB0(FsOwner *s, int size);
void func_001AAAC0(FsOwner *s, int unused);

void func_001AA840(FsOwner *s) {
    func_001AAA00(s, 0, 0);
    func_00146A30();

    func_00128488(s->ptinfo_sdata, 0, sizeof(s->ptinfo_sdata));
    func_00144D40(1, D_0053F9E0, 0, s->ptinfo_sdata);
    func_001AAAC0(s, 2);
    for (;;) {
        if (func_001451C8(1) == PTSTAT_READEND)
            break;
        func_001AAAD0(s);
        func_00148958();
    }

    func_00128488(s->ptinfo_gdata, 0, sizeof(s->ptinfo_gdata));
    func_00144D40(0, D_0053F9F0, 0, s->ptinfo_gdata);
    func_001AAAC0(s, 2);
    for (;;) {
        if (func_001451C8(0) == PTSTAT_READEND)
            break;
        func_001AAAD0(s);
        func_00148958();
    }

    func_00128488(s->ptinfo_mdata, 0, sizeof(s->ptinfo_mdata));
    func_00144D40(2, D_0053FA00, 0, s->ptinfo_mdata);
    func_001AAAC0(s, 2);
    for (;;) {
        if (func_001451C8(2) == PTSTAT_READEND)
            break;
        func_001AAAD0(s);
        func_00148958();
    }

    func_00197D10(D_00654430);
}

void func_001AAA00(FsOwner *s, int unused1, int unused2) {
    func_00129690(D_0053FA10);
    func_00128488(&s->dvd, 0, sizeof(s->dvd));
    s->dvd.rootdir = D_005BB928;
    func_0014E3C0(&s->dvd);
    func_00128488(&s->fl, 0, sizeof(s->fl));
    s->fl.flist = D_0053FA28;
    s->fl.max_files = 32;
    s->fl.work_size = (s->fl.max_files + 1) * 40 + 0x140;
    s->fl.work = func_001AAAB0(s, s->fl.work_size);
    func_0014E4C0(&s->fl);
    func_00148080(0);
}

void *func_001AAAB0(FsOwner *s, int size) {
    return func_00127700(size);
}

void func_001AAAC0(FsOwner *s, int unused) {
    func_001035E0(0, 0);
}

void func_001AA9C0(FsOwner *s) {
    func_00148958();
    func_00197DA0(D_00654430);
}

void func_001AA9F0(FsOwner *s) {
    func_00148940(0);
}

/* load an IOP module with a thread-priority argument; hang on failure */
void func_001AAB00(FsOwner *s, void *module) {
    int result;
    if (func_001156A8(module, 30, D_0053F9C0, &result) < 0) {
        for (;;) {
        }
    }
}
