/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static bool init_instruction(op_t *instruction, char *line)
{
    int *type = NULL;

    m_putstr(" - - - ", 1);
    m_putstr(instruction->mnemonique, 1);
    m_putstr(" - - - \n", 1);
    m_putstr("Nbr args\n", 1);
    instruction->nbr_args = get_nb_arg(instruction->mnemonique, line);
    if (-1 == instruction->nbr_args)
        return (false);
    m_putstr("Types\n", 1);
    type = get_types(instruction->mnemonique, line, instruction->nbr_args);
    if (NULL == type)
        return (false);
    for (int i = 0; MAX_ARGS_NUMBER > i; ++i)
        instruction->type[i] = type[i];
    free(type);
    return (true);
}

op_t *get_instruction(char *line)
{
    op_t *new = malloc(sizeof(op_t));

    if (NULL == new)
        return (NULL);
    m_putstr("Mnemonique\n", 1);
    new->mnemonique = get_mnemonique(line);
    if (NULL == new->mnemonique || false == init_instruction(new, line))
        return (NULL);
    m_putstr("- - - - - - -\n", 1);
    return (new);
}
