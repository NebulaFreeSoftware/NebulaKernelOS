# *************
# *** Rules ***
# *************

all: $(OBJECT_CPP_FILE_START) $(NEBULA_BIN) $(NEBULA_IMG)

run: $(NEBULA_IMG)
	@$(QEMU) $(QEMUFLAGS)  ./$<

clean:
	$(RM) $(OBJECT_CPP_FILE_START) $(NEBULA_BIN) $(NEBULA_IMG)
	$(RM) $(FIND_OBJECT_FILES_SC_C) $(FIND_OBJECT_FILES_MMU_C) $(FIND_OBJECT_FILES_IPC_C) $(FIND_OBJECT_FILES_ISR_C) $(FIND_OBJECT_FILES_TMM_C)

distclean:
	rm -rf build/obj build/bin build/image