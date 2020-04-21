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
SRC				=	source/assembly/main.s	\
					$(addprefix $(PATH_DISPLAY), $(SRC_DISPLAY))	\
					$(addprefix $(PATH_ERROR), $(SRC_ERROR))	\
					$(addprefix $(PATH_INIT), $(SRC_INIT))	\
					$(addprefix $(PATH_VM), $(SRC_VM))	\

BIN				= 	asm

CC				= 	gcc

OBJ 			= 	$(SRC:.c=.o)

RM				=	rm -rf

CFLAGS			=	-W -Wall -Werror

DFLAGS			=	-g -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point -pg

all:

$(BIN):			$(OBJ)
				@(echo "      ____                   __        __              ____  _                            _";)
				@(echo "     / ___| ___   _ __  ___  \ \      / /__ _  _ __   / ___|| |      __ _  __  __  _ __  |_|  ___   _____";)
				@(echo "    | |    / _ \ | '__|/ _ \  \ \ /\ / // _' || '__| | |    | |___  / _' |/  \/  || '_ \ | | / _ \ /  _  \\";)
				@(echo "    | |___| (_) || |  |  __/   \ V  V /| (_| || |    | |___ |  _  || (_| ||  ||  || |_) || || (_) || | | |";)
				@(echo "     \____|\___/ |_|   \___|    \_/\_/  \__,_||_|     \____||_| |_| \__,_||__||__||  __/ |_| \___/ |_| |_|";)
				@(echo "                                                                                  |_|";)
				@$(call SUCCESS, "----- Let\'s begin champions compilation ! -----")
				@$(CC) -o $(BIN) $(OBJ) $(LDFLAGS) $(CFLAGS)

lib:
				@$(MAKE) -C library/cstring/
				@$(MAKE) -C library/cstat/
				@$(MAKE) -C library/cmaths/

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(BIN)

re:				fclean all

.PHONY:			 all, fclean, re

%.o: %.c
				@(echo "\033[32m[Champions] :[\033[31m \c")
				@(echo "$@ \033[32m]\033[0m\033[0K")
				@($(CC) $(CFLAGS) -c -o $@ $<)
				@(echo "\033[2F")