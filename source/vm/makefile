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
			commande/live_mnemonic.c	\
			commande/ld_mnemonic.c	\
			commande/st_mnemonic.c	\
			commande/add_mnemonic.c	\
			commande/sub_mnemonic.c	\
			commande/and_mnemonic.c	\
			commande/or_mnemonic.c	\
			commande/xor_mnemonic.c	\
			commande/zjmp_mnemonic.c	\
			commande/ldi_mnemonic.c	\
			commande/sti_mnemonic.c	\
			commande/fork_mnemonic.c	\
			commande/lld_mnemonic.c	\
			commande/lldi_mnemonic.c	\
			commande/lfork_mnemonic.c	\
			commande/aff_mnemonic.c	\
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
