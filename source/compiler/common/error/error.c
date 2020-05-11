/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** error
*/

#include "compiler/compiler.h"

bool error(const int ac, char *const restrict *const restrict av)
{
    if (ac != 2) return (false);
    return (true);
}