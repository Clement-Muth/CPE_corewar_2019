##
## EPITECH PROJECT, 2020
## Makefile-gen by Clement Muth [WSL: Debian]
## File description:
## Makefile
##

## ========================================================================== ##
PATH_DISPLAY		=	source/display/
SRC_DISPLAY		=


## ========================================================================== ##
PATH_ERROR		=	source/error/
SRC_ERROR		=


## ========================================================================== ##
PATH_INIT		=	source/init/
SRC_INIT		=


## ========================================================================== ##
PATH_VM			=	source/vm/
SRC_VM			=	vm.c	\

## ========================================================================== ##
SRC				=	source/main.c	\
					$(addprefix $(PATH_DISPLAY), $(SRC_DISPLAY))	\
					$(addprefix $(PATH_ERROR), $(SRC_ERROR))	\
					$(addprefix $(PATH_INIT), $(SRC_INIT))	\
					$(addprefix $(PATH_VM), $(SRC_VM))	\

BIN				= 	corewar

CC				= 	gcc

OBJ 			= 	$(SRC:.c=.o)

RM				=	rm -rf

CFLAGS			=	-W -Wall -Werror

LDFLAGS			=	-Iinclude/ -Llibrary \
					-lcstat	\
					-lcstring	\
					-lcmaths	\

DFLAGS			=	-g -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point -pg

all:			$(BIN)

$(BIN):			lib $(OBJ)
				@$(CC) -o $(BIN) $(OBJ) $(LDFLAGS) $(CFLAGS)

lib:
				@$(MAKE) -C library/cstring/
				@$(MAKE) -C library/cstat/
				@$(MAKE) -C library/cmaths/

clean:
				$(RM) $(OBJ)
				@$(MAKE) -C library/cstring/ clean
				@$(MAKE) -C library/cstat/ clean
				@$(MAKE) -C library/cmaths/ clean

fclean:			clean
				$(RM) $(BIN)
				@$(MAKE) -C library/cstring/ fclean
				@$(MAKE) -C library/cstat/ fclean
				@$(MAKE) -C library/cmaths/ fclean

re_lib:
				@$(MAKE) -C library/cstring/ re
				@$(MAKE) -C library/cstat/ re
				@$(MAKE) -C library/cmaths/ re

re:				fclean all

.PHONY:			 all, fclean, re, library

## ========================================================================== ##
%.o:	%.c
	@gcc -g -o $@ -c $(LDFLAGS) $<