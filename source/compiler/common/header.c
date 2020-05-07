/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

header_t *init_header(void)
{
    header_t *new = malloc(sizeof(header_t));

    if (NULL == new)
        return (NULL);
    new->magic = -1;
    new->prog_name[0] = '\0';
    new->prog_size = -1;
    new->comment[0] = '\0';
    return (new);
}
