# *****************************
# *** Environment Variables ***
# *****************************

TARGET ?= ARM64 # Default Value

# *************************
# *** Dynamic Variables ***
# *************************

ifeq ($(TARGET), AMD64)

ARCH        := x86_64-elf-
MARCH       := x86_64
NEBULA_NAME := NebulaOS.iso

else ifeq ($(TARGET), ARM64)

ARCH        := aarch64-elf-
MARCH       := armv8-a
NEBULA_NAME := kernel8.img

else

$(error Not Support $(TARGET))

endif