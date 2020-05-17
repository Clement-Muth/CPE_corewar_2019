##
## EPITECH PROJECT, 2020
## Makefile-gen by Clement Muth [WSL: Debian]
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"

## ========================================================================== ##
PATH_VM	=	common/
VM		=	error/print_usage.c	\
			init/init_champion.c	\
			init/init_struct.c	\
			init/init_process.c	\
			init/init_commande.c	\
			commande/live_MNEMONIC.c	\
			commande/ld_MNEMONIC.c	\
			commande/st_MNEMONIC.c	\
			commande/add_MNEMONIC.c	\
			commande/sub_MNEMONIC.c	\
			commande/and_MNEMONIC.c	\
			commande/or_MNEMONIC.c	\
			commande/xor_MNEMONIC.c	\
			commande/zjmp_MNEMONIC.c	\
			commande/ldi_MNEMONIC.c	\
			commande/sti_MNEMONIC.c	\
			commande/fork_MNEMONIC.c	\
			commande/lld_MNEMONIC.c	\
			commande/lldi_MNEMONIC.c	\
			commande/lfork_MNEMONIC.c	\
			commande/aff_MNEMONIC.c	\
			init/init_ram.c	\
			process/fight_process.c	\
			utils/get_global_int.c	\
			utils/get_next_line.c	\
			


## ========================================================================== ##
SRC				=	main.c	\
					free_vm.c	\
					$(addprefix $(PATH_VM), $(VM))	\

BIN				= 	corewar

CC				= 	gcc

OBJ 			= 	$(SRC:.c=.o)

RM				=	rm -rf

LDFLAGS			=	-I../../include/ -L../../library \
					-l_assert	\
					-l_stat	\
					-l_string	\
					-l_maths

DFLAGS			=	-g -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point -pg

all:			$(BIN)

$(BIN):			$(OBJ)
				@$(CC) -o $(BIN) $(OBJ) $(LDFLAGS)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(BIN)

re:				fclean all

.PHONY:			 all, fclean, re

## ========================================================================== ##
%.o: %.c
				@(echo "\033[32m[Controller] :[\033[31m \c")
				@(echo "$@ \033[32m]\033[0m\033[0K")
				@($(CC) -g $(LDFLAGS) -c -o $@ $<)
				@(echo "\033[2F")
