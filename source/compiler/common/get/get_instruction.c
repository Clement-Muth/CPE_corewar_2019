/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

static bool init_instruction(op_t *instruction, char *line, compiler_t *cmp)
{
    int *type = NULL;

    instruction->nbr_args = get_nb_arg(instruction->mnemonique, line);
    if (-1 == instruction->nbr_args)
        return (false);
    type = get_types(instruction->mnemonique, line, instruction->nbr_args,
    cmp->args);
    if (NULL == type)
        return (false);
    for (int i = 0; MAX_ARGS_NUMBER > i; ++i)
        instruction->type[i] = type[i];
    free(type);
    return (true);
}

op_t *get_instruction(char *line, compiler_t *cmp)
{
    op_t *new = malloc(sizeof(op_t));

    if (NULL == new)
        return (NULL);
    new->mnemonique = get_mnemonique(line);
    if (NULL == new->mnemonique || false == init_instruction(new, line, cmp))
        return (NULL);
    return (new);
}
