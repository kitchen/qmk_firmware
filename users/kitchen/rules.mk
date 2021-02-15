ifeq ($(strip $(KITCHEN_HOME_ROW_MODS)), yes)
	OPT_DEFS += -DKITCHEN_HOME_ROW_MODS
endif

EXTRAKEY_ENABLE = yes       # Audio control and System control
