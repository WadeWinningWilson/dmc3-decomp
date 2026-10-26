extern int D_005BDF4C;

extern int D_005BDF50;

extern int D_005BDF58;

int func_0022CBA0(char *);

void func_0022CBB0(char *, char *);

int func_0012B1A0(char *, int *);

int func_0022CD60(char *);

float func_0022CD90(char *);

typedef struct { float x, y, z, w; } V4_4D9;

typedef struct { short id; char pad[14]; V4_4D9 v; } S4D9;

static inline char *ent_4D9(char *a, int i) {
    int k = i * 10;
    if (*(unsigned int *)(a + 4) < k + 1) return 0;
    if (*(int *)(a + k * 4 + 8) == 0) return 0;
    return a + *(int *)(a + k * 4 + 8);
}

int func_004D9440(char *, char *, S4D9 *);

int func_004D9280(char *p, char *a, char *r) {
    char buf[0x20];
    S4D9 s;
    s.id = -1;
    s.v.x = 0.0f;
    s.v.y = 0.0f;
    s.v.z = 0.0f;
    s.v.w = 1.0f;
    if ((func_0022CBA0(r) != 0) ^ 1) {
        do {
            func_0022CBB0(r, buf);
            if (func_0012B1A0(buf, &D_005BDF4C) == 0) {
                return func_004D9440(p, ent_4D9(a, s.id), &s);
            }
            if (func_0012B1A0(buf, &D_005BDF50) == 0) {
                s.id = func_0022CD60(r);
            } else if (func_0012B1A0(buf, &D_005BDF58) == 0) {
                s.v.x = func_0022CD90(r);
                s.v.y = func_0022CD90(r);
                s.v.z = func_0022CD90(r);
                s.v.w = 1.0f;
            }
        } while ((func_0022CBA0(r) != 0) ^ 1);
    }
    return 0;
}
