/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static bool add_instruction(op_t **list, char *line)
{
    int index = -1;

    while (list[++index]);
    list[index] = get_instruction(line);
    if (NULL == list[index])
        return (false);
    return (true);
}

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

bool get_champions_informations(op_t **instructions, header_t *header,
    char **buf)
{
    int index = get_index_instructions(buf);

    if (-1 == index) {
        m_putstr("A champion need instructions\n", 2);
        return (false);
    }
    m_putstr("Get name and comment for the header\n", 1);
    if (false == get_name_and_comment(header, buf))
        return (false);
    m_putstr("Get instructions\n", 1);
    for (int i = index + 1; buf[i]; ++i)
        if (false == add_instruction(instructions, buf[i]))
            return (false);
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
    for (int i = 0; nbr > i; ++i)
        new[i] = NULL;
    new[nbr] = NULL;
    return (new);
}
