/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static int get_index_instructions(char **buf)
{
    int index = -1;

    for (int i = 0; buf[i]; ++i)
        if ('#' != buf[i][0] && '.' != buf[i][0]) {
            index = i;
            break;
        }
    return (index);
}

bool get_instructions(op_t **instructions, char **buf)
{
    int index = get_index_instructions(buf);

    if (-1 == index) {
        m_putstr("A champion need instructions\n", 2);
        return (false);
    }
    for (int i = index; buf[i]; ++i)
    return (true);
}

op_t **init_instructions(char **buf)
{
    op_t **new = NULL;
    int nbr = 0;

    for (int i = 0; buf[i]; ++i)
        if ('#' != buf[i][0])
            ++nbr;
    new = malloc(sizeof(op_t *) * (nbr + 1));
    if (NULL == new)
        return (NULL);
    return (new);
}
