# ***********************
# *** Compilers Flags ***
# ***********************

CPOSIX := -D_POSIX_V8_LP64_OFF64=0
CNEBUL := -D__$(NEBULA_COMPUTE)=0

CFLAGS   := -Wall -Wextra -Werror -ffreestanding -nostdlib -nostartfiles -march=$(MARCH) $(CPOSIX) $(CNEBUL) -Iinclude
CXXFLAGS := -Wall -Wextra -Werror -ffreestanding -nostdlib -nostartfiles -march=$(MARCH) $(CPOSIX) $(CNEBUL) -Iinclude
COBFLAGS := -Wall -Wextra -Werror -std=ibm-strict -fstatic-call -Iinclude

# ***********************
# *** Assembler Flags ***
# ***********************

ASFLAGS  := -EL -Iinclude

# *********************
# *** Linkers Flags ***
# *********************

LDFLAGS := -T $(LDSCRIPT)

# ***********************
# *** Utilities Flags ***
# ***********************

ARFLAGS := rcs
CPFLAGS := -O binary

# **********************
# *** Emulator Flags ***
# **********************

ifeq ($(TARGET), AMD64)

QEMUFLAGS := -cpu EPYC -m 8000

else ifeq ($(TARGET), ARM64)

QEMUFLAGS := -machine raspi4b -cpu cortex-a76 -m 2048 -kernel

else
$(error Don't support $(TARGET))
endif