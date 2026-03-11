# *****************
# *** Main File ***
# *****************

SOURCE_FILE_START_ASM := ./src/assembly/$(NEBULA_ARCH)/$(NEBULA_COMPUTE)/start.s
SOURCE_FILE_START_CPP := ./src/start.cpp

OBJECT_FILE_START_ASM := ./build/obj/start.s.o
OBJECT_FILE_START_CPP := ./build/obj/start.cpp.o

# **************************
# *** Linker Script File ***
# **************************

LDSCRIPT := $(CONFIG_FOLDER)/$(LDFILE)

# ********************
# *** Binary Files ***
# ********************


NEBULA_ELF := $(BUILD_FOLDER_BIN)/NebulaKernel.elf
NEBULA_BIN := $(BUILD_FOLDER_BIN)/NebulaKernel.bin
NEBULA_IMG := $(BUILD_FOLDER_IMG)/$(NEBULA_NAME)