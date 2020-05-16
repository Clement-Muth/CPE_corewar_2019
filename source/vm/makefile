##
## EPITECH PROJECT, 2020
## Makefile-gen by Clement Muth [WSL: Debian]
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"

## ========================================================================== ##
PATH_VM	=	common/
VM		=	error/error.c	\
			error/print_usage.c	\
			init/init_champion.c	\


## ========================================================================== ##
SRC				=	main.c	\
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
				@(echo -e "\033[32m[Controller] :[\033[31m \c")
				@(echo -e "$@ \033[32m]\033[0m\033[0K")
				@($(CC) $(LDFLAGS) -c -o $@ $<)
				@(echo -e "\033[2F")
