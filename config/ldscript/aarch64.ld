ENTRY(start)
OUTPUT_FORMAT(elf64-littleaarch64)

MEMORY {

}

SECTIONS {
	.text   : { *(.text)   }
	.data   : { *(.data)   }
	.bss    : { *(.bss)    }
	.rodata : { *(.rodata) }
}