# *****************
# *** Compilers ***
# *****************

CC  = find_program(ARCH + 'gcc')
# CXX = find_program(ARCH + 'g++')
# COB = find_program(ARCH + 'gcobol')

# ******************
# *** Assemblers ***
# ******************

AS = find_program(ARCH + 'as')

# ***************
# *** Linkers ***
# ***************

LD = find_program(ARCH + 'ld')

# *****************
# *** Utilities ***
# *****************

AR = find_program(ARCH + 'ar')
CP = find_program(ARCH + 'objcopy')

# ****************
# *** Emulator ***
# ****************

if TARGET == 'AMD64'

QEMU = find_program('qemu-system-x86_64')

elif TARGET == 'ARM64'

QEMU = find_program('qemu-system-aarch64')

else

error('Don\'t support for the architecture ' + TARGET)

endif