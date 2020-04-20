/*
** EPITECH PROJECT, 2020
** CPE_corewar_2019 [WSL: Debian]
** File description:
** main
*/

#include "corewar.h"

static bool (*process[])(core_t *core) =
{
    // init,
    // error_handling,
    // vm_core,
};

static bool corewar(const int ac, char *const restrict *const restrict av)
{
    core_t core;

    for (int i = 0; process[i]; i++)
        if (!process[i](&core)) return (false);
    return (true);
}

int main(const int ac, char *const restrict *const restrict av)
{
    return (corewar(ac, av)) ? (0) : (84);
}