##
## EPITECH PROJECT, 2020
## Makefile-gen by Clement Muth [WSL: Debian]
## File description:
## Makefile
##

SUCCESS			=	/bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"

COMMON			=	./common

## ========================================================================== ##
PATH_BASIC		=	$(COMMON)/basic/
BASIC			=	free.c	\
					header.c	\
					instruction.c	\
					my_str_to_word_array.c	\
					name_and_comment.c	\
					op.c

PATH_CHECK		=	$(COMMON)/check/
CHECK			=	check_args.c	\
					check_command.c	\
					check_label.c	\
					check_types.c	\

PATH_ERROR		=	$(COMMON)/error/
ERROR			=	error.c

PATH_GET		=	$(COMMON)/get/
GET				=	get_info.c	\
					get_instruction.c	\
					get_mnemonique.c	\
					get_nb_arg.c	\
					get_types.c	\
					get_binaire.c	\
					get_size.c

PATH_PROCESS	=	$(COMMON)/process/
PROCESS			=	compile_n_write.c	\
					separate_arg_value.c

PATH_WRITE		=	$(COMMON)/write/
WRITE			=	write_header.c	\
					write_instructs.c

## ========================================================================== ##
SRC				=	main.c	\
					$(addprefix $(PATH_BASIC), $(BASIC))	\
					$(addprefix $(PATH_CHECK), $(CHECK))	\
					$(addprefix $(PATH_ERROR), $(ERROR))	\
					$(addprefix $(PATH_GET), $(GET))	\
					$(addprefix $(PATH_PROCESS), $(PROCESS))	\
					$(addprefix $(PATH_WRITE), $(WRITE))

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
