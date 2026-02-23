# *****************
# *** Main File ***
# *****************

$(OBJECT_CPP_FILE_START): $(SOURCE_CPP_FILE_START)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<

# ***********************************
# *** Nebula Operating System ELF ***
# ***********************************

$(NEBULA_ELF): $(FIND_OBJECT_FILES_SC_C) $(FIND_OBJECT_FILES_MMU_C) $(FIND_OBJECT_FILES_IPC_C) $(FIND_OBJECT_FILES_ISR_C) $(FIND_OBJECT_FILES_TMM_C)
	@mkdir -p $(dir $@)
	$(LD) $(LDFLAGS) -o $@ $<

# **********************
# *** Generate Image ***
# **********************

ifeq ($(TARGET), AMD64)

$(NEBULA_IMG): $(NEBULA_ELF)
	@mkdir -p $(dir $@)
	cp $< $@

else ifeq ($(TARGET), ARM64)

$(NEBULA_BIN): $(NEBULA_ELF)
	@mkdir -p $(dir $@)
	$(CP) $(CPFLAGS) $< $@

$(NEBULA_IMG): $(NEBULA_BIN)
	@mkdir -p $(dir $@)
	cp $< $@

else

$(error Don't support $(TARGET))

endif