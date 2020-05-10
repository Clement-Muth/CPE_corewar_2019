##
## EPITECH PROJECT, 2020
## Makefile-gen by Clement Muth [WSL: Debian]
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"

## ========================================================================== ##
PATH_COMPILER	=	./common/
COMPILER		=	op.c			\
				my_str_to_word_array.c	\
				header.c		\
				instruction.c		\
				name_and_comment.c	\
				check_command.c		\
				check_args.c		\
				check_label.c		\
				check_types.c		\
				get_instruction.c	\
				get_mnemonique.c	\
				get_nb_arg.c		\
				get_types.c

## ========================================================================== ##
SRC				=	main.c	\
					$(addprefix $(PATH_COMPILER), $(COMPILER))	\

BIN				= 	asm

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

$(BIN):			$(OBJ) lib
				@$(CC) -o $(BIN) $(OBJ) $(LDFLAGS)


## =============MAKE LIB============= ##
lib:
				@$(MAKE) -C ../../library/string/
				@$(MAKE) -C ../../library/assert/
				@$(MAKE) -C ../../library/stat/
				@$(MAKE) -C ../../library/maths/


clean:
				$(RM) $(OBJ)
				@$(MAKE) -C ../../library/string/ clean
				@$(MAKE) -C ../../library/assert/ clean
				@$(MAKE) -C ../../library/stat/ clean
				@$(MAKE) -C ../../library/maths/ clean


fclean:			clean
				$(RM) $(BIN)
				@$(MAKE) -C ../../library/string/ fclean
				@$(MAKE) -C ../../library/assert/ fclean
				@$(MAKE) -C ../../library/stat/ fclean
				@$(MAKE) -C ../../library/maths/ fclean

re_lib:
				@$(MAKE) -C ../../library/string/ re
				@$(MAKE) -C ../../library/assert/ re
				@$(MAKE) -C ../../library/stat/ re
				@$(MAKE) -C ../../library/maths/ re


re:				fclean all

.PHONY:			 all, fclean, re

## ========================================================================== ##
%.o: %.c
				@(echo -e "\033[32m[Controller] :[\033[31m \c")
				@(echo -e "$@ \033[32m]\033[0m\033[0K")
				@($(CC) $(LDFLAGS) -c -o $@ $<)
				@(echo -e "\033[2F")
