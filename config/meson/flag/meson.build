# ***********************
# *** Compilers Flags ***
# ***********************

CFLAGS   = [ '-Wall', '-Wextra', '-Werror', '-ffreestanding', '-nostdlib', '-nostartfiles', '-march=' + MARCH, '-I../include' ]
CXXFLAGS = [ '-Wall', '-Wextra', '-Werror', '-ffreestanding', '-nostdlib', '-nostartfiles', '-march=' + MARCH, '-I../include' ]
COBFLAGS = [ '-Wall', '-Wextra', '-Werror', '-std=ibm-strict', '-fstatic-call', '-Iinclude' ]

# *********************
# *** Linkers Flags ***
# *********************

LDFLAGS = [ '-T' + LDSCRIPT ]

# ***********************
# *** Utilities Flags ***
# ***********************

ARFLAGS = [ 'rcs' ]
CPFLAGS = [ '-O binary' ]

# **********************
# *** Emulator Flags ***
# **********************

if TARGET == 'AMD64'

QEMUFLAG = [ '-cpu EPYC', '-m 8000' ]

elif TARGET == 'ARM64'

QEMUFLAG = [ '-cpu cortex-a76', '-m 8000' ]

else

error('Don\'t support ' + TARGET)

endif