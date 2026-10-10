/* NEAR-MATCH 54/161 (mwcps2-3.0b52): vsprintf's integer formatter.
 * Everything up to the padding block matches; the original keeps the digit
 * count n in $v0 and its sign-extended copy in $t0 with no extra copy, and
 * left-justify decrements n itself. MW coalesces our counters differently.
 * Context: src/game/mc/mcsys.c. */
extern char D_0058BAC0[];   /* "0123456789ABCDEF" */
extern char D_0058BAD0[];   /* "0123456789abcdef" */

/* format an integer for vsprintf. flags: bits 0-3 = base-1, 0x1000 uppercase,
 * 0xFF0 sign/prefix char, 0x08000000 signed, 0x80000000 left-justify,
 * 0x40000000 zero-pad. Returns the number of characters written. */
int func_004EE870(unsigned int flags, unsigned int val, char *out, int width) {
    unsigned char buf[32];
    unsigned char *digits;
    unsigned char *p;
    short base;
    short n;
    short len;
    short i;
    if ((flags & 0x08000000) && (int)val < 0)
        val = ~val + 1;
    if (flags & 0x1000)
        digits = (unsigned char *)D_0058BAC0;
    else
        digits = (unsigned char *)D_0058BAD0;
    base = (flags & 0xF) + 1;
    n = 0;
    p = buf;
    do {
        *p++ = digits[val % base];
        n++;
        val /= base;
    } while (val);
    if (flags & 0xFF0) {
        buf[n++] = (flags & 0xFF0) >> 4;
        flags |= 0x04000000;
    }
    len = n;
    if (width - len > 0) {
        if (flags & 0x80000000) {
            while (n > 0)
                *out++ = buf[--n];
            for (; n < width - len; n++)
                *out++ = ' ';
        } else {
            i = width - len;
            if (flags & 0x40000000) {
                if (flags & 0x04000000)
                    *out++ = buf[--n];
                while (i-- > 0)
                    *out++ = '0';
            } else {
                while (i-- > 0)
                    *out++ = ' ';
            }
            while (n > 0)
                *out++ = buf[--n];
        }
    } else {
        width = 0;
        while (n > 0) {
            *out++ = buf[--n];
            width++;
        }
    }
    return width;
}
