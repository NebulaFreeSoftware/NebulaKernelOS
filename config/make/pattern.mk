# *****************
# *** Scheduler ***
# *****************

$(OBJECT_FOLDER_SC_C)/%.o: $(SOURCE_FOLDER_SC)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -O2 -c -o $@ $<

# *****************************
# *** Memory Managment Unit ***
# *****************************

$(OBJECT_FOLDER_MMU_C)/%.o: $(SOURCE_FOLDER_MMU)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -O2 -c -o $@ $<

# ************************************
# *** Inter-Proceess Communication ***
# ************************************

$(OBJECT_FOLDER_IPC_C)/%.o: $(SOURCE_FOLDER_IPC)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -O3 -c -o $@ $<

# *********************************
# *** Interrupt Service Routine ***
# *********************************

$(OBJECT_FOLDER_ISR_C)/%.o: $(SOURCE_FOLDER_ISR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -O3 -c -o $@ $<

# *******************************
# *** Thread Memory Managment ***
# *******************************

$(OBJECT_FOLDER_TMM_C)/%.o: $(SOURCE_FOLDER_TMM)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -Os -c -o $@ $<