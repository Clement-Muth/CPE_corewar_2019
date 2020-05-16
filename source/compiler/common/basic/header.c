/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include "compiler/compiler.h"

void *init_header(header_t *header)
{
    if (NULL == header)
        return (NULL);
    header->magic = -1;
    header->prog_name[0] = '\0';
    header->prog_size = -1;
    header->comment[0] = '\0';
}
