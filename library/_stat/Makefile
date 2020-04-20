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

LIB 				= lib_stat.a

SRC 				= stat.c	\
					  stat_free.c	\
					  init_stat.c	\
					  fopen.c	\
					  fread.c	\

CFLAGS 				= -Wall -I./include

LDFLAGS				= -L../../ -l_string

AR 					= @ar rc

LIB_OBJ 			= $(SRC:.c=.o)

directory 			= ../../include/library/_stat

all:				| $(directory) $(LIB)
					@cp -rf include/ $(directory)
					@$(call SUCCESS, "[ OK ] include has benn correctly copied into ../../include/library/_stat/")
					@$(call DONE, "[ DONE 100% ]")

$(directory):
					@mkdir -p $@
					@$(call WARNING, "[ /!\ ] Creating folder called _stat into ../../include/library/_stat/")

$(LIB):			$(LIB_OBJ)
					@$(AR) $(LIB) $(LIB_OBJ)
					@$(call SUCCESS, "[ OK ] lib_stat.a library successfully compiled.")
					@mv $(LIB) ../
					@$(call SUCCESS, "[ OK ] _stat.a has been correctly moved into ../")

clean:
					@$(RM) $(LIB_OBJ)
					@$(call ATT, "[ OK ] *.o are removed in lib_stat.a")

fclean:
					@$(RM) ../$(LIB)
					@$(RM) $(LIB)
					@$(RM) -rf $(directory)
					@$(call ATT, "[ OK ] lib_stat.a library fully cleaned.")

re: 				fclean all

.PHONY				: all clean fclean re

## ========================================================================== ##
%.o:	%.c
	@gcc $(LDFLAGS) $(CFLAGS) -g -o $@ -c $<