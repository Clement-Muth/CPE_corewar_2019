/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** main
*/

#include "compiler/compiler.h"

static bool compiler(const int ac, char *const restrict *const restrict av)
{
    compiler_t cmp;

    // return ((error(ac, av) && init(&cmp) && process(&cmp))
    // ? (true) : (false));
}

int main(const int ac, char *const restrict *const restrict av)
{
    return (compiler(ac, av)) ? (0) : (84);
}