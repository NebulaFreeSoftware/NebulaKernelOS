# *****************
# *** Compilers ***
# *****************

CC  := $(ARCH)gcc
CXX := $(ARCH)g++
COB := $(ARCH)gcobol

# ******************
# *** Assemblers ***
# ******************

AS := $(ARCH)as

# ***************
# *** Linkers ***
# ***************

LD := $(ARCH)ld

# *****************
# *** Utilities ***
# *****************

AR := $(ARCH)ar
CP := $(ARCH)objcopy

# ****************
# *** Emulator ***
# ****************

ifeq ($(TARGET), AMD64)

QEMU := qemu-system-x86_64

else ifeq ($(TARGET), ARM64)

QEMU := qemu-system-aarch64

else
$(error Don't support $(TARGET))
endif