/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include <stddef.h>
#include "compiler/compiler.h"

static char get_hexadecimal(char *str)
{
    char hexa_table[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        'A', 'B', 'C', 'D', 'E', 'F'};
    int	table[4] = {8, 4, 2, 1};
    int nbr = 0;

    for	(int i = 0; 4 > i; ++i) {
        if ('0' == str[i])
            continue;
        nbr += table[i];
    }
    return (hexa_table[nbr]);
}

static void set_size_param(char *hexa, int index, char c)
{
    char *size[3] = {"01", "10", "11"};
    char param[2] = {'r', DIRECT_CHAR};
    int ref = 2;

    for (int i = 0; 2 > i; ++i)
        if (c == param[i])
            ref = i;
    hexa[index] = size[ref][0];
    hexa[index + 1] = size[ref][1];
}

static void get_param_octet(char **args, char *hexa)
{
    int index = 0;

    for (int i = 0; args[i]; ++i) {
        set_size_param(hexa, index, args[i][0]);
        index += 2;
    }
}

int *get_size_params(char **args)
{
    char hexa[8] = "00000000";
    char size[0] = "00";
    char tmp[4] = "0000";

    get_param_octet(args, hexa);
    for (int i = 0; 4 > i; ++i)
        tmp[i] = hexa[i];
    size[0] = get_hexadecimal(tmp);
    size[1] = get_hexadecimal(hexa + 4);
    return (size);
}
