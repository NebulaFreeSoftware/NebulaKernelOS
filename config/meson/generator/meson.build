# *****************************
# *** Generate Object Files ***
# *****************************

OBJECT_FILES_SC_C  = generator(CC, output: '@PLAINNAME@', arguments: [CFLAGS, '-O2', '-c', '-o', '@OUTPUT@', '@INPUT@'] )
OBJECT_FILES_MMU_C = generator(CC, output: '@PLAINNAME@', arguments: [CFLAGS, '-O2', '-c', '-o', '@OUTPUT@', '@INPUT@'] )
OBJECT_FILES_IPC_C = generator(CC, output: '@PLAINNAME@', arguments: [CFLAGS, '-O3', '-c', '-o', '@OUTPUT@', '@INPUT@'] )
OBJECT_FILES_ISR_C = generator(CC, output: '@PLAINNAME@', arguments: [CFLAGS, '-O3', '-c', '-o', '@OUTPUT@', '@INPUT@'] )
OBJECT_FILES_TMM_C = generator(CC, output: '@PLAINNAME@', arguments: [CFLAGS, '-Os', '-c', '-o', '@OUTPUT@', '@INPUT@'] )