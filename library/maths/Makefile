##
## EPITECH PROJECT, 2020
## library
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"
WARNING				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[33m $1\x1b[0m"
ATT					= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\x1b[0m"
DONE				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[34m $1\x1b[0m"

LIB 				= lib_maths.a

SRC 				= atoi.c	\
					  dist_roth.c	\
					  itoa.c	\
					  pow.c	\
					  preg_match.c	\
					  sqrt.c	\

CFLAGS 				= -Wall -I./include

LDFLAGS				= -L../../ -l_string -l_assert

AR 					= @ar rc

LIB_OBJ 			= $(SRC:.c=.o)

all:				$(LIB)
					@$(call SUCCESS, "[ OK ] _string.a has been created")

%.o: %.c
					@(echo "\033[32m[maths] :[\033[31m \c")
					@(echo "$@ \033[32m]\033[0m\033[0K")
					@($(CC) $(CFLAGS) -c -o $@ $<)
					@(echo "\033[2F")

$(LIB):			$(LIB_OBJ)
					@$(AR) $(LIB) $(LIB_OBJ)
					@mv $(LIB) ../

clean:
					@$(RM) $(LIB_OBJ)

fclean:
					@$(RM) ../$(LIB)
					@$(RM) $(LIB)
					@$(RM) -rf $(directory)

re: 				fclean all

.PHONY				: all clean fclean re