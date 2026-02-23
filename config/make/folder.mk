# **********************
# *** Source Folders ***
# **********************

SOURCE_FOLDER_SC  := ./src/sc
SOURCE_FOLDER_MMU := ./src/mmu
SOURCE_FOLDER_IPC := ./src/ipc
SOURCE_FOLDER_ISR := ./src/isr # Para Cobrar Impuestos Sobre la Renta
SOURCE_FOLDER_TMM := ./src/tmm

# ************************
# *** Object C Folders ***
# ************************

OBJECT_FOLDER_SC_C  := ./build/obj/sc/c
OBJECT_FOLDER_MMU_C := ./build/obj/mmu/c
OBJECT_FOLDER_IPC_C := ./build/obj/ipc/c
OBJECT_FOLDER_ISR_C := ./build/obj/isr/c
OBJECT_FOLDER_TMM_C := ./build/obj/tmm/c

# **************
# *** Binary ***
# **************

BUILD_FOLDER_BIN := ./build/bin/$(ARCH)
BUILD_FOLDER_IMG := ./build/image/$(ARCH)