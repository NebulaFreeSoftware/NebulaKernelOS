# *****************************
# *** Environment Variables ***
# *****************************

 # Default Value
TARGET ?= ARM64

# *************************
# *** Dynamic Variables ***
# *************************

ifeq ($(TARGET), AMD64)

ARCH        := x86_64-elf-
MARCH       := x86_64
LDFILE      := x86_64.ld
NEBULA_NAME := NebulaOS.iso

else ifeq ($(TARGET), ARM64)

ARCH        := aarch64-elf-
MARCH       := armv8.2-a
LDFILE      := aarch64.ld
NEBULA_NAME := kernel8.img

else

$(error Not Support $(TARGET))

endif