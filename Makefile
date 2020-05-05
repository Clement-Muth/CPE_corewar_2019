##
## EPITECH PROJECT, 2020
## Makefile-gen by Clement Muth [WSL: Debian]
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"

## ==============================BINARY NAMES================================ ##
VM_BIN		=	corewar
ASM_BIN			=	asm
BIN				=	$(VM_BIN) $(ASM_BIN)


## ==============================BINARY DIR================================== ##
VM_DIR		=	./source/vm/
ASM_DIR		=	./source/compiler/


## ==============================BASICS VAR================================== ##
CC				=	gcc
OBJ 			=	$(SRC:.c=.o)
RM				=	rm -rf
CFLAGS			=
LDFLAGS			=	-Iinclude/ -Llibrary \
					-l_assert	\
					-l_stat	\
					-l_string	\
					-l_maths
DFLAGS			=	-g -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point -pg


## ==============================PROCESS MAKE================================ ##
all:			$(BIN) $(LIB)


## =============MAKE LIB============= ##
$(LIB):
				@$(MAKE) -C library/string/
				@$(MAKE) -C library/assert/
				@$(MAKE) -C library/stat/
				@$(MAKE) -C library/maths/


## =============MAKE ASM============ ##
$(ASM_BIN):
	@(cd $(ASM_DIR) && make)
	@(cp $(ASM_DIR)$(ASM_BIN) ./)


## =============MAKE VM============ ##
$(VM_BIN):
	@(cd $(VM_DIR) && make)
	@(cp $(VM_DIR)$(VM_BIN) ./)


clean:
				$(RM) $(OBJ)
				@$(MAKE) -C source/vm/ clean
				@$(MAKE) -C source/compiler/ clean
				@$(MAKE) -C library/string/ clean
				@$(MAKE) -C library/assert/ clean
				@$(MAKE) -C library/stat/ clean
				@$(MAKE) -C library/maths/ clean

fclean:			clean
				$(RM) $(BIN)
				@$(MAKE) -C source/vm/ fclean
				@$(MAKE) -C source/compiler/ fclean
				@$(MAKE) -C library/string/ fclean
				@$(MAKE) -C library/assert/ fclean
				@$(MAKE) -C library/stat/ fclean
				@$(MAKE) -C library/maths/ fclean

re_lib:
				@$(MAKE) -C library/string/ re
				@$(MAKE) -C library/assert/ re
				@$(MAKE) -C library/stat/ re
				@$(MAKE) -C library/maths/ re

re:				fclean all

.PHONY:			 all, fclean, re, library

## ========================================================================== ##
%.o: %.c
				@(echo -e "\033[32m[Controller] :[\033[31m \c")
				@(echo -e "$@ \033[32m]\033[0m\033[0K")
				@($(CC) $(CFLAGS) $(LDFLAGS) -c -o $@ $<)
				@(echo -e "\033[2F")