# **********************
# *** Custom Targets ***
# **********************

START = custom_target(
	'START_FILE',
	input:  SOURCE_FILE_START_C,
	output: OBJECT_FILE_START_C,
	command: [
		CC,
		CFLAGS,
		'-O2',
		'-c',
		'@INPUT@',
		'-o',
		'@OUTPUT@'
	],

	build_by_default: true
)

ELF = custom_target(
	'NEBULA_ELF',
	input:  [ START, OBJECT_FILES_SC_C.process(SOURCE_FILES_SC_C) ],
	output: NEBULA_ELF,
	command: [
		LD,
		LDFLAGS,
		'-o',
		'@OUTPUT@',
		'@INPUT@'
	],

	build_by_default: true
)