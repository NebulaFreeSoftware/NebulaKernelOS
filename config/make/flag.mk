# ***********************
# *** Compilers Flags ***
# ***********************

CFLAGS   := -Wall -Wextra -Werror -ffreestanding -nostdlib -nostartfiles -march=$(MARCH) -Iinclude
CXXFLAGS := -Wall -Wextra -Werror -ffreestanding -nostdlib -nostartfiles -march=$(MARCH) -Iinclude
COBFLAGS := -Wall -Wextra -Werror -std=ibm-strict -fstatic-call -Iinclude

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

QEMUFLAG := -cpu EPYC -m 8000

else ifeq ($(TARGET), ARM64)

QEMUFLAG := -cpu cortex-a76 -m 8000

else
$(error Don't support $(TARGET))
endif