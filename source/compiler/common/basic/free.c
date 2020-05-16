/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019
** File description:
** Epitech First Year Project: Make programs fight
*/

#include <stddef.h>
#include "compiler/compiler.h"

void my_free(header_t *header, op_t **instructions, stat_t *stat)
{
    stat_free(stat);
    free(header);
    for (int i = 0; instructions[i]; ++i) {
        free(instructions[i]->mnemonique);
        free(instructions[i]);
    }
    free(instructions);
}
