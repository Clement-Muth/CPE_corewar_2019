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

LIB 				= libcmaths.a

SRC 				= atoi.c	\
					  dist_roth.c	\
					  itoa.c	\
					  pow.c	\
					  preg_match.c	\
					  sqrt.c	\

CFLAGS 				= -Wall -I./include

LDFLAGS				= -L../../ -lcstring

AR 					= @ar rc

LIB_OBJ 			= $(SRC:.c=.o)

all:				$(LIB)
					@$(call SUCCESS, "[ OK ] include has benn correctly copied into ../../include/library/cstat/")
					@$(call DONE, "[ DONE 100% ]")


$(LIB):			$(LIB_OBJ)
					@$(AR) $(LIB) $(LIB_OBJ)
					@$(call SUCCESS, "[ OK ] libcstat.a library successfully compiled.")
					@mv $(LIB) ../
					@$(call SUCCESS, "[ OK ] cstat.a has been correctly moved into ../")

clean:
					@$(RM) $(LIB_OBJ)
					@$(call ATT, "[ OK ] *.o are removed in libcstat.a")

fclean:
					@$(RM) ../$(LIB)
					@$(RM) $(LIB)
					@$(RM) -rf $(directory)
					@$(call ATT, "[ OK ] libcstat.a library fully cleaned.")

re: 				fclean all

.PHONY				: all clean fclean re

## ========================================================================== ##
%.o:	%.c
	@gcc $(LDFLAGS) $(CFLAGS) -g -o $@ -c $<