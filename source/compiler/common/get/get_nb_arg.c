/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static bool check_nb_arg(char *str, int value)
{
    int index = 0;

    for (int i = 0; 0 != op_tab[i].mnemonique; ++i)
        if (1 == m_strcmp(str, op_tab[i].mnemonique))
            index = i;
    if (op_tab[index].nbr_args == value)
        return (true);
    m_putstr("Wrong format instruction (nb_arg)\n", 2);
    return (false);
}

int get_nb_arg(char *name, char *line)
{
    int nbr = 0;

    for (int i = 0; line[i]; ++i)
        if (SEPARATOR_CHAR == line[i])
            ++nbr;
    ++nbr;
    if (nbr > MAX_ARGS_NUMBER) {
        m_putstr("Too many args\n", 2);
        return (-1);
    }
    if (false == check_nb_arg(name, nbr))
        return (-1);
    return (nbr);
}
