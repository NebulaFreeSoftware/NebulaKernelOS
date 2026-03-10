# *****************************
# *** Environment Variables ***
# *****************************

 # Default Value for Architecture
TARGET ?= ARM64

# Default Value for the Computer
COMPUTER ?= raspberry

# *************************
# *** Dynamic Variables ***
# *************************

ifeq ($(TARGET), AMD64)

ARCH           := x86_64-elf-
MARCH          := x86_64
LDFILE         := x86_64.ld
NEBULA_NAME    := NebulaOS.iso
NEBULA_ARCH    := x86_64
NEBULA_COMPUTE := standar_x86_64

else ifeq ($(TARGET), ARM64)

ARCH           := aarch64-elf-
MARCH          := armv8.2-a
LDFILE         := aarch64.ld
NEBULA_NAME    := kernel8.img
NEBULA_ARCH    := aarch64
NEBULA_COMPUTE :=raspberry

else

$(error Not Support $(TARGET))

endif