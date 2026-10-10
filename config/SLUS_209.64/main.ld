/* Address-ordered link of the USA main load segment (vram 0x100000).
 * splat's generated script groups by section type, which would move the
 * __sinit code (0x5A5F80) ahead of .data; this keeps the original order. */
SECTIONS
{
    _gp = 0x5C3870;
    .main 0x100000 :
    {
        build/us/asm/us/text.o(.text);            /* 0x100000 .text            */
        build/us/asm/us/data/data.data.o(.data);  /* 0x50FF80 .vutext + data   */
        build/us/asm/us/sinit.o(.text);           /* 0x5A5F80 __sinit_*        */
        build/us/asm/us/data/ctors_data.data.o(.data); /* 0x5A6E70 .ctors ... */
    }
    main_END = .;
    .bss (NOLOAD) : { build/us/asm/us/data/4BE100.bss.o(.bss); }
    /DISCARD/ : { *(.reginfo) *(.MIPS.abiflags) *(.pdr) *(.gnu.attributes) *(.comment) *(.mdebug*) }
}
