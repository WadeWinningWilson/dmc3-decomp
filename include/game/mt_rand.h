#ifndef MT_RAND_H
#define MT_RAND_H

/* Mersenne Twister state (624 words) and its index; the game inlines the draw everywhere.
 * Declared as char arrays like every other unnamed symbol, so that files declaring them too agree. */
#ifdef __cplusplus
extern "C" {
#endif
extern char D_01DF7E50[];
extern char D_01DF8810[];
#ifdef __cplusplus
void func_00207A90(char *); /* regenerates the state */
}
#else
void func_00207A90();
#endif

static inline unsigned int mt_rand(void) {
    unsigned int y;
    unsigned int i;
    if (*(unsigned int *)D_01DF8810 >= 624) {
        func_00207A90(D_01DF7E50);
    }
    i = (*(unsigned int *)D_01DF8810)++;
    y = ((unsigned int *)D_01DF7E50)[i];
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

#endif
