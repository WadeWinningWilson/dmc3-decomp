extern "C" int func_003F5C00(char *);

extern "C" unsigned char D_0056C408[];

extern "C" unsigned char D_0056C409[];

extern "C" unsigned char D_0056C40A[];

extern "C" unsigned char D_0056C40B[];

extern "C" unsigned char D_0056C40C[];

extern "C" signed char D_005BD074[4];

extern "C" signed char D_005BD078[4];

extern "C" char *D_005BD080[2];

extern "C" char *D_005BD088[2];

static inline char *ent419(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)((char *)(i * 4) + (int)t + 8) == 0) { r = 0; } else { r = t + *(int *)((char *)(i * 4) + (int)t + 8); } return r; }

static inline char *gch419(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent419(t, k); } else { r = *(char **)(h + 0xC); } return r; }

static inline char *ent419c(char *t, unsigned short i) { char *r; if (*(unsigned int *)(t + 4) < i + 1) { r = 0; } else if (*(int *)(i * 4 + t + 8) == 0) { r = 0; } else { r = t + *(int *)(i * 4 + t + 8); } return r; }

static inline char *gch419c(char *h, unsigned short i) { char *r; char *t; unsigned short k = i; if (**(unsigned short **)(h + 8) == 0) { t = *(char **)(h + 0xC); r = ent419c(t, k); } else { r = *(char **)(h + 0xC); } return r; }

extern "C" int func_004191C0(char *p, unsigned char x) {
    int j;
    int i;
    switch (*(signed char *)(p + 0x4A0)) {
    case 0x27:
        x = 0;
        break;
    case 0x28:
        x = 1;
        break;
    }
    *(char **)(p + 0x4E4) = gch419c(*(char **)(p + 0x4E0), 0);
    *(char **)(p + 0x4F8) = gch419c(*(char **)(p + 0x4E0), 1);
    i = x;
    j = i * 6;
    *(char **)(p + 0x4E8) = gch419(*(char **)(p + 0x4E0), D_0056C408[j]);
    *(char **)(p + 0x4EC) = gch419(*(char **)(p + 0x4E0), D_0056C409[j]);
    *(char **)(p + 0x4FC) = gch419(*(char **)(p + 0x4E0), D_0056C40A[j]);
    *(char **)(p + 0x4F0) = gch419(*(char **)(p + 0x4E0), D_0056C40B[j]);
    *(char **)(p + 0x4F4) = gch419(*(char **)(p + 0x4E0), D_0056C40C[j]);
    *(char **)(p + 0x500) = gch419c(*(char **)(p + 0x4E0), 0xC);
    *(signed char *)(p + 0x44) = -1;
    *(unsigned char *)(p + 0x45) = 3;
    *(signed char *)(p + 0x46) = D_005BD074[i];
    *(signed char *)(p + 0x47) = D_005BD078[i];
    *(char **)(p + 0xF90) = D_005BD080[i];
    *(char **)(p + 0x11C) = D_005BD088[i];
    if (!(unsigned char)func_003F5C00(p)) return 0;
    return 1;
}
