##
## EPITECH PROJECT, 2020
## Makefile-gen by Clement Muth [WSL: Debian]
## File description:
## Makefile
##

SUCCESS				=	/bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"
DONE				=	/bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[34m $1\x1b[0m"

## ==============================BINARY NAMES================================ ##
VM_BIN			=	corewar
ASM_BIN			=	asm


## ==============================SOURCE DIR================================== ##
SRC_VM_DIR		=	source/vm/
SRC_ASM_DIR		=	source/compiler/


## ==============================BINARY DIR================================== ##
BIN_VM_DIR		=	vm/
BIN_ASM_DIR		=	asm/


## ==============================BASICS VAR================================== ##
RM				=	rm -rf
CP				=	cp -rf
MAKEFLAGS 		+=	--no-print-directory
DFLAGS			=	-g -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point -pg

## ==============================PROCESS MAKE================================ ##
all:			| $(BIN_ASM_DIR) $(BIN_VM_DIR) lib
				@(cd $(SRC_ASM_DIR) && make)
				@$(CP) $(SRC_ASM_DIR)/$(ASM_BIN) ./$(BIN_ASM_DIR)
				@$(call DONE, "The champions are ready to fight")
				@(cd $(SRC_VM_DIR) && make)
				@$(CP) $(SRC_VM_DIR)/$(VM_BIN) ./$(BIN_VM_DIR)
				@$(call DONE, "The VM is ready to host the champions")


## =============CREATE ASM DIR============ ##
$(BIN_ASM_DIR):
				@mkdir -p $@
				@$(call WARNING, "[ //!\ ] Creating folder ./asm")


## =============CREATE VM DIR============ ##
$(BIN_VM_DIR):
				@mkdir -p $@
				@$(call WARNING, "[ //!\ ] Creating folder ./vm")



## ================================LIB MAKE================================== ##
lib:
				@$(MAKE) -C library/assert/
				@$(MAKE) -C library/maths/
				@$(MAKE) -C library/stat/
				@$(MAKE) -C library/string/


## ===============================CLEAN MAKE================================= ##
clean:
				$(RM) $(OBJ)
				@$(MAKE) -C source/compiler/ clean
				@$(MAKE) -C source/vm/ clean
				@$(MAKE) -C library/assert/ clean
				@$(MAKE) -C library/maths/ clean
				@$(MAKE) -C library/stat/ clean
				@$(MAKE) -C library/string/ clean

fclean:			clean
				$(RM) $(BIN_ASM_DIR)/asm
				$(RM) $(BIN_VM_DIR)/corewar
				@$(MAKE) -C source/compiler/ fclean
				@$(MAKE) -C source/vm/ fclean
				@$(MAKE) -C library/assert/ fclean
				@$(MAKE) -C library/maths/ fclean
				@$(MAKE) -C library/stat/ fclean
				@$(MAKE) -C library/string/ fclean

re:				fclean all
				@$(MAKE) -C source/compiler/ re
				@$(MAKE) -C source/vm/ re

.PHONY:			 all, fclean, re, library