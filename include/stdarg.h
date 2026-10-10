#ifndef DMC3_STDARG_H
#define DMC3_STDARG_H

/*
 * MW PS2 (3.0b) implements GCC's MIPS EABI varargs builtins. This is the
 * integer-only form of GCC's va-mips.h; va_start is byte-verified on the
 * memory-card sprintf (USA 0x004EF400). va_arg is not yet verified.
 */
typedef char *va_list;

#define va_start(ap, last)                                                     \
    ((ap) = (va_list)__builtin_next_arg(last) -                                \
            (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8))

#define __va_rounded_size(type) (((sizeof(type) + 8 - 1) / 8) * 8)

#define va_arg(ap, type)                                                       \
    (*(type *)((ap += __va_rounded_size(type)) - __va_rounded_size(type)))

#define va_end(ap) ((void)0)

#endif
