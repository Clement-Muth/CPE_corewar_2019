/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** separate_arg_value
*/

#include "compiler/compiler.h"

static void sep(char *arg, int *pos, char *ret)
{
    int i = *pos;
    int n = 0;

    if (arg[i] == 'r' && arg[i + 2] == '%') i++;
    for (; arg[i] && arg[i] != ':' && arg[i] != '%'; i++, n++)
        ret[n] = arg[i];
    *pos = (arg[i + 1] == ':') ? (i + 2) : (i + 1);
}

char **separate_arg_value(char *arg)
{
    char **arr = malloc(sizeof(char *) * 4);
    int pos = 0;

    for (int i = 0; i != 3; i++) {
        sep(arg, &pos, arr[i] = m_memalloc(m_strlen(arg)));
    }
    arr[3] = NULL;
    return (arr);
}