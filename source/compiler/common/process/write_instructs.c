/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** write_intruct
*/

#include "compiler/compiler.h"

static void param_convert(op_t **instructions, fd_t fd)
{
    char tmp[3];
    unsigned char ret_tmp = 0;

    for (int i = 0; 3 > i && instructions[i]->type != 3; i++) {
        tmp[i] = ((instructions[i]->type == T_REG) ?
        (1) : (instructions[i]->type == T_DIR) ?
        (2) : (instructions[i]->type == T_IND) ?
        (3) : (0));
    }
    for (int i = 0; 3 > i; i++) tmp[i] = 0;
    ret_tmp |= (tmp[0] << 6);
    ret_tmp |= (tmp[1] << 4);
    ret_tmp |= (tmp[2] << 2);
    write(fd, &ret_tmp, 1);
    return (true);
}

bool write_instruct(op_t **instructions, fd_t fd)
{
    param_convert(instructions, fd);
    for (int i = 0; instructions[i]->type != 3; i++) {
        // if (instructions[i]->type == )
    }
}