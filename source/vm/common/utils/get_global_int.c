/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** vm_define
*/

#include "vm/vm.h"

void get_global_int(champion_t *champ)
{
    int nbr = champ->file.prog_size;

    nbr = (((nbr << 8) & 0xFF00FF00)
        | ((nbr >> 8) & 0xFF00FF));
    nbr = (nbr << 16)
        | ((nbr >> 16) & 0xFFFF);
    champ->file.prog_size = nbr;
}